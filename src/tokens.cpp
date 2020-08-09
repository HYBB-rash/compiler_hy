//
// Created by hyong on 2020/8/10.
//
#include "../include/tokens.h"
token_::token_(token_kind type, char* lex) {
    lexeme.clear();
    tk = type;
    lexeme.assign(lex);
    cout << endl << "token: " << type << " ";
    lexeme.empty() ? cout << endl : cout << lexeme << endl;
}
token_::token_(token_kind type){
	lexeme.clear();
	tk = type;
	cout << endl << "token: " << type << " ";
}
