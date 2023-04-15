%{
    #include <stdio.h>
    #include "y.tab.h"
    int countn=0;
%}

%option yylineno

alpha [a-zA-Z]
digit [0-9]

%%

"."                         { strcpy(yylval.nd_obj.name,(yytext)); printf("DOT\t");  return DOT; }
"<<"                        { strcpy(yylval.nd_obj.name,(yytext)); printf("PRINT\t");  return PRINT; }
">>"                        { strcpy(yylval.nd_obj.name,(yytext)); printf("SCAN\t");  return SCAN; }
"#"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("INT\t");  return INT; }
"$"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("FLOAT\t");  return FLOAT; }
"~"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("STRING\t");  return STRING; }
"_"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("BOOL\t");  return BOOL; }
"'"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("RET\t");  return RET; }
"@"	                        { strcpy(yylval.nd_obj.name,(yytext)); printf("FOR\t");  return FOR; }
"?"	                        { strcpy(yylval.nd_obj.name,(yytext)); printf("IF\t");  return IF; }
":"	                        { strcpy(yylval.nd_obj.name,(yytext)); printf("ELSE\t");  return ELSE; }
^<{alpha}({alpha}|{digit})*.sala> { strcpy(yylval.nd_obj.name,(yytext)); printf("INCLUDE\n");  return INCLUDE; }
"True"                      { strcpy(yylval.nd_obj.name,(yytext)); printf("T\t");  return T; }
"False"                     { strcpy(yylval.nd_obj.name,(yytext)); printf("F\t");  return F; }
{digit}+                    { strcpy(yylval.nd_obj.name,(yytext)); printf("NUM\t");  return NUM; }
{digit}+\.{digit}{0,6}      { strcpy(yylval.nd_obj.name,(yytext)); printf("REAL\t");  return REAL; }
{alpha}({alpha}|{digit})*   { strcpy(yylval.nd_obj.name,(yytext)); printf("ID\t");  return ID; }
"<="                        { strcpy(yylval.nd_obj.name,(yytext)); printf("LE\t");  return LE; }
">="                        { strcpy(yylval.nd_obj.name,(yytext)); printf("GE\t");  return GE; }
"=="                        { strcpy(yylval.nd_obj.name,(yytext)); printf("EQ\t");  return EQ; }
"!="                        { strcpy(yylval.nd_obj.name,(yytext)); printf("NE\t");  return NE; }
">"	                        { strcpy(yylval.nd_obj.name,(yytext)); printf("GT\t");  return GT; }
"<"	                        { strcpy(yylval.nd_obj.name,(yytext)); printf("LT\t");  return LT; }
"!"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("NOT\t"); return NOT; }
"&&"	                    { strcpy(yylval.nd_obj.name,(yytext)); printf("AND\t");  return AND; }
"||"	                    { strcpy(yylval.nd_obj.name,(yytext)); printf("OR\t");  return OR; }
"+"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("ADD\t");  return ADD; }
"-"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("SUB\t");  return SUB; }
"/"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("DIV\t");  return DIV; }
"*"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("MULT\t");  return MULT; }
"="                         { strcpy(yylval.nd_obj.name,(yytext)); printf("ASSIGN\t"); return ASSIGN; }
"{"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("BRACES_OPEN\n");  return BRACES_OPEN; }
"}"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("BRACES_CLOSE\n"); return BRACES_CLOSE; }
"("                         { strcpy(yylval.nd_obj.name,(yytext)); printf("BRACKET_OPEN\t"); return BRACKET_OPEN; }
")"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("BRACKET_CLOSE\t");  return BRACKET_CLOSE; }
";"                         { strcpy(yylval.nd_obj.name,(yytext)); printf("DELIM\n"); countn++; return DELIM; }
\/\/.*                      { strcpy(yylval.nd_obj.name,(yytext)); printf("COMM\n"); return COMM; } 
[\t]                        { ; }
" "                         { ; }
[\n]                        { ; }
[\r]                        { ; }
["].*["]                    { strcpy(yylval.nd_obj.name,(yytext)); printf("SENTENCE\t"); return SENTENCE; }
.                           { ; }

%%




int yywrap() {
    return 1;
}

