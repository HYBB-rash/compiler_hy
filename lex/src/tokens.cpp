//
// Created by hyong on 2020/8/10.
//
#include "../include/tokens.h"
#include "../include/utils.h"
#include <vector>
vector<token> list;
token_::token_(token_kind type, char* lex) {
    lexeme.clear();
    tk = type;
    lexeme.assign(lex);
    list.push_back(this);
    cout << "token: " ;
    tokenTypeShow(type);
    lexeme.empty() ? cout << endl : cout << lexeme << endl;
}
token_::token_(token_kind type){
	lexeme.clear();
	tk = type;
	list.push_back(this);
	cout << "token: " ;
	tokenTypeShow(type);
	cout << endl;
}
