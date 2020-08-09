//
// Created by hyong on 2020/8/10.
//
#include "../include/tokens.h"
token_::token_(token_kind type, char* lex) {
    lexeme.clear();
    tk = type;
    if (tk == ID || tk == NUMBER) lexeme.assign(lex);
    cout << endl << "token: " << type << " ";
    lexeme.empty() ? cout << endl : cout << lexeme << endl;
}