//
// Created by hyong on 2020/8/10.
//
#include "../include/tokens.h"
void controllerInit(){
    controller["int"]       = INT;
    controller["double"]    = DOUBLE;
    controller["char"]      = CHAR;
    controller["string"]    = STRING;
    controller["for"]       = FOR;
    controller["while"]     = WHILE;
    controller["do"]        = DO;
    controller["break"]     = BREAK;
    controller["continue"]  = CONTINUE;
    controller["if"]        = IF;
    controller["else"]      = ELSE;
    controller["class"]     = CLASS;
    controller["public"]    = PUBLIC;
    controller["private"]   = PRIVATE;
    controller["("]         = L_S_BRACKET;
    controller[")"]         = R_S_BRACKET;
    controller["["]         = L_M_BRACKET;
    controller["]"]         = R_M_BRACKET;
    controller["{"]         = L_L_BRACKET;
    controller["}"]         = R_L_BRACKET;
    controller[","]         = COMMA;
    controller[";"]         = SEMICOLON;
    controller[":"]         = COLON;
    controller["."]         = POINT;
    controller["+"]         = PLUS;
    controller["-"]         = MINUS;
    controller["*"]         = TIMES;
    controller["/"]         = DIVIDE;
    controller["="]         = ASSIGNMENT;
    controller["<"]         = LESS;
    controller[">"]         = GREATER;
    controller["<="]        = LESS_E;
    controller[">="]        = GREATER_E;
    controller["=="]        = EQUAL;
    controller["!="]        = N_EQUAL;
    controller["&&"]        = AND;
    controller["||"]        = OR;
    controller["!"]         = NOT;
    controller["id"]        = ID;
    controller["number"]    = NUMBER;
}
token_::token_(const string& type, string lex) {
    lex.clear();
    tk = static_cast<token_kind>(controller[type]);
    if (tk == ID || tk == NUMBER) lexeme = lex;
    cout << endl << "token: " << type << " ";
    lexeme.empty() ? cout << endl : cout << lexeme << endl;
}