%option noyywrap
%option nomain
%{
#include "../include/tokens.h"
#include "../include/utils.h"
#include "../include/lex.h"
%}

NUMBER				([0-9]+)
ID					[a-zA-Z_][0-9a-zA-Z_]*

%%

{NUMBER}			{token t = new token_(NUMBER, yytext);}
" "					{continue;}
"\n"				{printf("token: \\n\n");}
"int"				{token t = new token_(INT);}
"double"			{token t = new token_(DOUBLE);}
"char"				{token t = new token_(CHAR);}
"string"			{token t = new token_(STRING);}
"for"				{token t = new token_(FOR);}
"do"				{token t = new token_(DO);}
"break"				{token t = new token_(BREAK);}
"continue"			{token t = new token_(CONTINUE);}
"if"				{token t = new token_(IF);}
"else"				{token t = new token_(ELSE);}
"class"				{token t = new token_(CLASS);}
"public"			{token t = new token_(PUBLIC);}
"private"			{token t = new token_(PRIVATE);}
"return"            {token t = new token_(RETUEN);}
"("					{token t = new token_(L_S_BRACKET);}
")"					{token t = new token_(R_S_BRACKET);}
"["					{token t = new token_(L_M_BRACKET);}
"]"					{token t = new token_(R_M_BRACKET);}
"{"					{token t = new token_(L_L_BRACKET);}
"}"					{token t = new token_(R_L_BRACKET);}
","					{token t = new token_(COMMA);}
";"					{token t = new token_(SEMICOLON);}
":"					{token t = new token_(COLON);}
"."					{token t = new token_(POINT);}
"+"					{token t = new token_(PLUS);}
"-"					{token t = new token_(MINUS);}
"*"					{token t = new token_(TIMES);}
"/"					{token t = new token_(DIVIDE);}
"="					{token t = new token_(ASSIGNMENT);}
"<"					{token t = new token_(LESS);}
">"					{token t = new token_(GREATER);}
"<="				{token t = new token_(LESS_E);}
">="				{token t = new token_(GREATER_E);}
"=="				{token t = new token_(EQUAL);}
"!="				{token t = new token_(N_EQUAL);}
"||"				{token t = new token_(OR);}
"&&"				{token t = new token_(AND);}
"!"					{token t = new token_(NOT);}
"\""                {token t = new token_(D_QUOTES);}
"\'"                {token t = new token_(QUOTES);}
{ID}                {token t = new token_(ID, yytext);}
"\t"				{continue;}

%%
void lex(){
	yylex();
}
