//
// Created by hyong on 2020/8/8.
//
#include "../include/utils.h"
#include <cassert>
using namespace std;

void outTokenTemplate(const string& s1, const string& s2){
    if (s2.empty()) cout << endl << "token: (" << s1 << ", 0)" << endl;
    else cout << endl << "token: (" << s1 << ", " << s2 << ")" << endl;
}

void  printToken(token t){
    switch (t->k) {
        case FOR:
            outTokenTemplate("FOR", t->lexeme);
            break;
        case WHILE:
            outTokenTemplate("WHILE", t->lexeme);
            break;
        case BREAK:
            outTokenTemplate("BREAK", t->lexeme);
            break;
        case FUNCTION:
            outTokenTemplate("FUNCTION", t->lexeme);
            break;
        case ARRAY:
            outTokenTemplate("ARRAY", t->lexeme);
            break;
        case IF:
            outTokenTemplate("IF", t->lexeme);
            break;
        case ELSE:
            outTokenTemplate("ELSE", t->lexeme);
            break;
        case VAR:
            outTokenTemplate("VAR", t->lexeme);
            break;
        case CLASS:
            outTokenTemplate("CLASS", t->lexeme);
            break;
        case SIGN:
            outTokenTemplate("SIGN", t->lexeme);
            break;
        case ID:
            outTokenTemplate("ID", t->lexeme);
            break;
        case NUMBER:
            outTokenTemplate("NUMBER", t->lexeme);
            break;
        case EMPTY:
            outTokenTemplate("EMPTY", t->lexeme);
            break;
        default:
            assert(__func__);
            break;
    }
}
