%{
    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    #include <math.h>

    void yyerror(const char *s);
    int yylex();
    int yywrap();
    extern FILE *yyin;
	extern FILE *yytext;
    void add(char);
    void insert_type();
    int search(char *);
	void fill(char *, float);
    struct node* mknode(struct node *left, struct node *right, char *token);

	char QUADS[100][100];
	int Q = 0;

    struct dataType {
        char * id_name;
        char * data_type;
        char * type;
        float value;
        int line_no;
    } symbol_table[100];
	float temp_val;
    int count=0;
    int q;
    char type[10];
    extern int countn;
    struct node { 
		struct node *left; 
		struct node *right; 
    	float value;
		char *token; 
    };
	struct node *head;

float calculate(float operand_1, float operand_2, char* operator){
  if(strcmp(operator, "+") == 0){
    return operand_1 + operand_2;
  } else if(strcmp(operator, "-") == 0){
    return operand_1 - operand_2;
  } else if(strcmp(operator, "*") == 0){
    return operand_1 * operand_2;
  } else if(strcmp(operator, "/") == 0){
    return operand_1 / operand_2;
  }
}

void fill(char* identifier, float new_value){
	int index = search(identifier);
	symbol_table[index].value = new_value;
}

%}

%union { 
	struct var_name { 
		char name[100]; 
		struct node* nd;
    	float value;
	} nd_obj; 
} 

%token <nd_obj> DOT PRINT SCAN INT FLOAT STRING BOOL RET FOR POW IF ELSE INCLUDE T F NUM REAL ID LE GE EQ NE GT LT NOT AND OR ADD SUB DIV MULT ASSIGN BRACES_OPEN BRACES_CLOSE BRACKET_OPEN BRACKET_CLOSE DELIM COMM SENTENCE
%type <nd_obj> program headers main statement condition condition_optional datatype body else init expression arithmetic relop value return

%%
program: headers main BRACKET_OPEN BRACKET_CLOSE BRACES_OPEN body return BRACES_CLOSE { $2.nd = mknode($6.nd, $7.nd, "main"); $$.nd = mknode($1.nd, $2.nd, "program"); head = $$.nd; }
;

headers: INCLUDE { add('H'); } headers { $1.nd = mknode( NULL, NULL, $1.name ); $$.nd = mknode($1.nd, NULL, "headers"); }
| { $$.nd = NULL; }
;
   

main: datatype ID { add('F'); }
;


datatype: INT { insert_type(); }
| FLOAT { insert_type(); }
| STRING { insert_type(); }
| PRINT { add('K'); } BRACKET_OPEN SENTENCE BRACKET_CLOSE DELIM body { $$.nd = mknode(NULL, NULL, "printf"); }
| SCAN { add('K'); } BRACKET_OPEN SENTENCE ',' '&' ID BRACKET_CLOSE DELIM body { $$.nd = mknode(NULL, NULL, "scanf"); }
| { $$.nd = NULL; }
;

body: FOR { add('K'); } BRACKET_OPEN statement DELIM condition DELIM statement BRACKET_CLOSE BRACES_OPEN body BRACES_CLOSE body
| IF { add('K'); } BRACKET_OPEN condition BRACKET_CLOSE BRACES_OPEN body BRACES_CLOSE else body
| statement DELIM body { $$.nd = mknode($1.nd, $3.nd, "bline"); }
| PRINT { add('K'); } BRACKET_OPEN SENTENCE BRACKET_CLOSE DELIM body { $$.nd = mknode(NULL, NULL, "printf"); }
| SCAN { add('K'); } BRACKET_OPEN SENTENCE ',' '&' ID BRACKET_CLOSE DELIM body { $$.nd = mknode(NULL, NULL, "scanf"); }
| { $$.nd = NULL; }
;

else: ELSE { add('K'); } BRACES_OPEN body BRACES_CLOSE { $$.nd = mknode(NULL, $4.nd, $1.name); }
| { $$.nd = NULL; }
;

condition: value relop value condition_optional { $$.nd = mknode($1.nd, $3.nd, $2.name); }
| NOT condition { $1.nd = mknode(NULL,NULL,$1.name); $$.nd = mknode($1.nd, $2.nd, "condition"); }
| T { add('K'); $$.nd = NULL; }
| F { add('K'); $$.nd = NULL; }
| value { $$.nd = mknode(NULL, NULL, $1.name); }
;

condition_optional: AND condition { $$.nd = mknode($2.nd, NULL, $1.name); }
| OR condition { $$.nd = mknode($2.nd, NULL, $1.name); }
| { $$.nd = NULL; }
;

statement: datatype ID { add('V'); } init { $2.nd = mknode(NULL, NULL, $2.name); $$.nd = mknode($2.nd, $4.nd, "declaration"); $2.value = $4.value;temp_val = $2.value; fill($2.name, $2.value); }
| ID ASSIGN expression  { $1.nd = mknode(NULL, NULL, $1.name); $$.nd = mknode($1.nd, $3.nd, "="); $1.value = $3.value; fill($1.name, $1.value); char str[100]; sprintf(str, "%s = %s", $1.name, $3.name); strcpy(QUADS[Q], str); Q++; }
| ID relop expression   { $1.nd = mknode(NULL, NULL, $1.name); $$.nd = mknode($1.nd, $3.nd, "="); }
;

init: ASSIGN expression { $$.nd = $2.nd; $$.value = $2.value; }
| { $$.nd = NULL; }
;

expression: value arithmetic expression { $$.nd = mknode($1.nd, $3.nd, $2.name); $$.value = calculate($1.value, $3.value, $2.name); char str[100]; sprintf(str, "%s = %s %s %s", $$.name, $1.name, $2.name, $3.name); strcpy(QUADS[Q], str); Q++; }
| value { $$.nd = $1.nd; $$.value = $1.value; char str[100]; sprintf(str, "%s = %s", $$.name, $1.name); strcpy(QUADS[Q], str); Q++; }
;

arithmetic: ADD
| SUB 
| MULT 
| DIV
;

    
relop: LT
| GT
| LE
| GE
| EQ
| NE
;

value: NUM { add('C'); $$.nd = mknode(NULL, NULL, $1.name); $$.value = atoi($1.name); }
| REAL { add('C'); $$.nd = mknode(NULL, NULL, $1.name); $$.value = atof($1.name); }
| SENTENCE { add('C'); $$.nd = mknode(NULL, NULL, $1.name); }
| ID { $$.nd = mknode(NULL, NULL, $1.name); int index = search($1.name); if(index != -1) { $1.value = symbol_table[index].value; } $$.value = $1.value; }
;

return: RET { add('K'); } expression DELIM { $1.nd = mknode(NULL, NULL, "return"); $$.nd = mknode($1.nd, $3.nd, "RETURN"); }
;

%%

void printBTHelper(char* prefix, struct node* ptr, int isLeft) {
    if( ptr != NULL ) {
        printf(prefix);
        if(isLeft) { printf("├──"); } 
		else { printf("└──"); }
        printf(ptr->token);
		printf("\n");
		char* addon = isLeft ? "│   " : "    ";
    	int len2 = strlen(addon);
    	int len1 = strlen(prefix);
    	char* result = (char*)malloc(len1 + len2 + 1);
    	strcpy(result, prefix);
    	strcpy(result + len1, addon);
		printBTHelper(result, ptr->left, 1);
		printBTHelper(result, ptr->right, 0);
    	free(result);
    }
}

void printBT(struct node* ptr) {
	printf("\n");
    printBTHelper("", ptr, 0);    
}


int main() {
    FILE *myfile = fopen("eg.bs", "r");
    if (!myfile) {
    	printf("Cant open the file\n");
    	return -1;
    }
    yyin = myfile;
	int p = -1;
    p = yyparse();
    /* if(!p) printf("\nSuccesfully parsed, no Syntax error found!!\n"); */
    printf("\n\n");
	printf("SYMBOL TABLE");
    printf("\n\n");
	printf("\nSYMBOL   DATATYPE   TYPE   LINE NUMBER  VALUE\n");
	printf("______________________________________________\n\n");
	int i=0;
	for(i=0; i<count; i++) {
		printf("%s\t%s\t%s\t%d\t", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type, symbol_table[i].line_no);
    	if(strcmp(symbol_table[i].type, "Variable") == 0) printf("%f\n", symbol_table[i].value);
		else printf(" N/A \n");
	}
	printf("\n\n");
	printf("PARSE TREE");
    printf("\n\n");
	printBT(head);
	printf("\n\n");
	printf("THREE ADDRESS CODE");
    printf("\n\n");
	for(int j = 0; j < Q; j++){
		printf("%s\n", QUADS[j]);
	}
	for(i=0;i<count;i++) {
		free(symbol_table[i].id_name);
		free(symbol_table[i].type);
	}
    fclose(myfile);
    return p;
}

int search(char *type) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, type)==0) {
			return i;
			break;
		}
	}
	return -1;
}

void add(char c) {

  q=search(yytext);
  /* printf("%d %c\n",q,c); */
  if(q == -1) {
    if(c == 'H') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Header");
			count++;
		}
		else if(c == 'K') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup("N/A");
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Keyword\t");
			count++;
		}
		else if(c == 'V') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Variable");
			count++;
		}
		else if(c == 'C') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup("CONST");
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Constant");
			count++;
		}
		else if(c == 'F') {
			symbol_table[count].id_name=strdup(yytext);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].line_no=countn;
			symbol_table[count].type=strdup("Function");
			count++;
		}
	}
}

struct node* mknode(struct node *left, struct node *right, char *token) {	
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	char *newstr = (char *)malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newstr;
	return(newnode);
}

void insert_type() {
	strcpy(type, yytext);
}

void yyerror(const char* msg) {
  fprintf(stderr, "%s\n", msg);
}

