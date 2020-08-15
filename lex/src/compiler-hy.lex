%option noyywrap
%option nomain
%{
#include "../include/utils.h"
#include "../include/lex.h"
%}

NUMBER				([0-9]+)
ID					[a-zA-Z_][0-9a-zA-Z_]*

%%

{NUMBER}			{list.push_back(new token_(NUMBER, yytext));}
" "					{continue;}
"\n"				{printf("token: \\n\n");}
"int"				{list.push_back(new token_(INT));}
"double"			{list.push_back(new token_(DOUBLE));}
"char"				{list.push_back(new token_(CHAR));}
"string"			{list.push_back(new token_(STRING));}
"for"				{list.push_back(new token_(FOR));}
"do"				{list.push_back(new token_(DO));}
"break"				{list.push_back(new token_(BREAK));}
"continue"			{list.push_back(new token_(CONTINUE));}
"if"				{list.push_back(new token_(IF));}
"else"				{list.push_back(new token_(ELSE));}
"class"				{list.push_back(new token_(CLASS));}
"public"			{list.push_back(new token_(PUBLIC));}
"private"			{list.push_back(new token_(PRIVATE));}
"return"            {list.push_back(new token_(RETURN));}
"("					{list.push_back(new token_(L_S_BRACKET));}
")"					{list.push_back(new token_(R_S_BRACKET));}
"["					{list.push_back(new token_(L_M_BRACKET));}
"]"					{list.push_back(new token_(R_M_BRACKET));}
"{"					{list.push_back(new token_(L_L_BRACKET));}
"}"					{list.push_back(new token_(R_L_BRACKET));}
","					{list.push_back(new token_(COMMA));}
";"					{list.push_back(new token_(SEMICOLON));}
":"					{list.push_back(new token_(COLON));}
"."					{list.push_back(new token_(POINT));}
"+"					{list.push_back(new token_(PLUS));}
"-"					{list.push_back(new token_(MINUS));}
"*"					{list.push_back(new token_(TIMES));}
"/"					{list.push_back(new token_(DIVIDE));}
"="					{list.push_back(new token_(ASSIGNMENT));}
"<"					{list.push_back(new token_(LESS));}
">"					{list.push_back(new token_(GREATER));}
"<="				{list.push_back(new token_(LESS_E));}
">="				{list.push_back(new token_(GREATER_E));}
"=="				{list.push_back(new token_(EQUAL));}
"!="				{list.push_back(new token_(N_EQUAL));}
"||"				{list.push_back(new token_(OR));}
"&&"				{list.push_back(new token_(AND));}
"!"					{list.push_back(new token_(NOT));}
"\""                {list.push_back(new token_(D_QUOTES));}
"\'"                {list.push_back(new token_(QUOTES));}
{ID}                {list.push_back(new token_(ID, yytext));}
"\t"				{continue;}

%%
vector<token> lex(){
    vector<token> list;
	yylex();
}
