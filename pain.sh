#!/usr/bin/env bash
yacc -vd parser.y 
lex lex.l
cc lex.yy.c -ll
cc y.tab.c lex.yy.c 
./a.out
