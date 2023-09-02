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
	int start = 100;
    int count=0;
	int ic_idx=0;
    int label=0;
	int temp_var=0;
    int is_for=0;
    char icg[50][100];
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
  } else if(strcmp(operator, "==") == 0) {
	return operand_1 == operand_2;
  } else if(strcmp(operator, "!=") == 0) {
	return operand_1 != operand_2;
  } else if(strcmp(operator, "<") == 0) {
	return operand_1 < operand_2;
  } else if(strcmp(operator, ">") == 0) {
	return operand_1 > operand_2;
  }  else if(strcmp(operator, "<=") == 0) {
	return operand_1 <= operand_2;
  } else if(strcmp(operator, ">=") == 0) {
	return operand_1 >= operand_2;
  } 
}

void fill(char* identifier, float new_value){
	int index = search(identifier);
	symbol_table[index].value = new_value;
}

char *separator = "\n______________________________________________\n";

%}

%union { 
	struct var_name { 
		char name[100]; 
		struct node* nd;
		float value;
	} nd_obj; 

    struct var_name2 { 
			char name[100]; 
			struct node* nd;
			char type[10];
			float value;
		} nd_obj2; 


    struct var_name3 {
			char name[100];
			struct node* nd;
			char if_body[5];
			char else_body[5];
			float value;
		} nd_obj3;
} 

%token <nd_obj> DOT PRINT SCAN INT FLOAT STRING BOOL RET FOR POW IF ELSE INCLUDE T F NUM REAL ID LE GE EQ NE GT LT NOT AND OR ADD SUB DIV MULT ASSIGN BRACES_OPEN BRACES_CLOSE BRACKET_OPEN BRACKET_CLOSE DELIM COMM SENTENCE
%type <nd_obj> program headers main statement condition_optional datatype body else arithmetic relop return
%type <nd_obj2> init value expression
%type <nd_obj3> condition
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

body: FOR { add('K'); is_for = 1; } BRACKET_OPEN statement DELIM condition DELIM statement BRACKET_CLOSE BRACES_OPEN body BRACES_CLOSE body { 
	struct node *temp = mknode($6.nd, $8.nd, "CONDITION"); 
	struct node *temp2 = mknode($4.nd, temp, "CONDITION"); 
	$$.nd = mknode(temp2, $11.nd, $1.name); 
	sprintf(icg[ic_idx++], "JUMP to %s\n", $6.if_body);
	sprintf(icg[ic_idx++], "%s", separator);
	sprintf(icg[ic_idx++], "\nLABEL %s:\n", $6.else_body);
 }
| IF { add('K'); is_for = 0; } BRACKET_OPEN condition BRACKET_CLOSE { sprintf(icg[ic_idx++], "%s", separator); sprintf(icg[ic_idx++], "\nLABEL %s:\n", $4.if_body); } BRACES_OPEN body BRACES_CLOSE { sprintf(icg[ic_idx++], "%s", separator); sprintf(icg[ic_idx++], "\nLABEL %s:\n", $4.else_body); } else body { struct node *iff = mknode($4.nd, $8.nd, $1.name); $$.nd = mknode(iff, $11.nd, "if-else"); sprintf(icg[ic_idx++], "GOTO next\n"); }
| statement DELIM body { $$.nd = mknode($1.nd, $3.nd, "bline"); } 
| PRINT { add('K'); } BRACKET_OPEN SENTENCE BRACKET_CLOSE DELIM body { $$.nd = mknode(NULL, NULL, "printf"); }
| SCAN { add('K'); } BRACKET_OPEN SENTENCE ',' '&' ID BRACKET_CLOSE DELIM  body { $$.nd = mknode(NULL, NULL, "scanf"); } 
| { $$.nd = NULL; }
;

else: ELSE { add('K'); } BRACES_OPEN body BRACES_CLOSE { $$.nd = mknode(NULL, $4.nd, $1.name); }
| { $$.nd = NULL; }
;

condition: value relop value condition_optional { 
	$$.nd = mknode($1.nd, $3.nd, $2.name); 
	if(is_for) {
		sprintf($$.if_body, "L%d", label++);
		sprintf(icg[ic_idx++], "%s", separator);
		sprintf(icg[ic_idx++], "\nLABEL %s:\n", $$.if_body);
		sprintf(icg[ic_idx++], "\nif NOT (%s %s %s) GOTO L%d\n", $1.name, $2.name, $3.name, label);
		sprintf($$.else_body, "L%d", label++);
	} else {
		sprintf(icg[ic_idx++], "%s", separator);
		sprintf(icg[ic_idx++], "\nif (%s %s %s) GOTO L%d else GOTO L%d\n", $1.name, $2.name, $3.name, label, label+1);
		sprintf($$.if_body, "L%d", label++);
		sprintf($$.else_body, "L%d", label++);
	}
	$$.value = calculate($1.value, $3.value, $2.name);
}
| NOT condition { $1.nd = mknode(NULL,NULL,$1.name); $$.nd = mknode($1.nd, $2.nd, "condition"); }
| T { add('K'); $$.nd = NULL; }
| F { add('K'); $$.nd = NULL; }
| value { $$.nd = mknode(NULL, NULL, $1.name); }
;

condition_optional: AND condition { $$.nd = mknode($2.nd, NULL, $1.name); }
| OR condition { $$.nd = mknode($2.nd, NULL, $1.name); }
| { $$.nd = NULL; }
;

statement: datatype ID { add('V'); } init { $2.nd = mknode(NULL, NULL, $2.name); $$.nd = mknode($2.nd, $4.nd, "declaration"); $2.value = $4.value; fill($2.name, $2.value); sprintf(icg[ic_idx++], "=\t%s\t%f\n", $2.name, $2.value); }
| ID ASSIGN expression  { $1.nd = mknode(NULL, NULL, $1.name); $$.nd = mknode($1.nd, $3.nd, "="); $1.value = $3.value; fill($1.name, $1.value); char str[100]; sprintf(str, "%s = %d", $1.name, $3.value); strcpy(QUADS[Q], str); Q++; sprintf(icg[ic_idx++], "=\t%s\t%f\n", $1.name, $1.value); }
| ID relop expression   { $1.nd = mknode(NULL, NULL, $1.name); $$.nd = mknode($1.nd, $3.nd, "="); }
;

init: ASSIGN expression { $$.nd = $2.nd; $$.value = $2.value; }
| { $$.nd = NULL; }
;

expression: value arithmetic expression { $$.nd = mknode($1.nd, $3.nd, $2.name); $$.value = calculate($1.value, $3.value, $2.name); char str[100]; sprintf(str, "%s\t%s\t%s\t%s", $$.name, $1.name, $2.name, $3.name); sprintf(icg[ic_idx++], "%s\t%s\t%s\t%f\n", $2.name, $1.name, $3.name, $$.value); }
| value { $$.nd = $1.nd; $$.value = $1.value; char str[100]; sprintf(str, "%s = %s", $$.name, $1.name); strcpy(QUADS[Q], str); Q++; /*sprintf(icg[ic_idx++], "=\t%s\tN/A\t%s\n", $1.name, $$.name); */}
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
    FILE *myfile = fopen("example.sal", "r");
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
	printf("%s", separator);
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
	printf("\n%s\n", separator);
    for(int i=0; i<ic_idx; i++){
		printf("%s", icg[i]);
	}
	printf("%s\n", separator);
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

