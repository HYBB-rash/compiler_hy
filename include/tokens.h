//
// Created by hyong on 2020/8/7.
//

#ifndef COMPLIER_HY_TOKENS_H
#define COMPLIER_HY_TOKENS_H
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

typedef class token_ *token;

enum token_kind{
    INT, DOUBLE, CHAR, STRING,
    FOR, WHILE, DO, BREAK, CONTINUE,
    IF, ELSE,
    CLASS, PUBLIC, PRIVATE,
    L_S_BRACKET, R_S_BRACKET, L_M_BRACKET, R_M_BRACKET,
    L_L_BRACKET, R_L_BRACKET, L_X_BRACKET, R_X_BRACKET,
    COMMA, SEMICOLON, COLON, POINT,
    PLUS, MINUS, TIMES, DIVIDE, ASSIGNMENT,
    LESS, GREATER, EQUAL, N_EQUAL, LESS_E, GREATER_E,
    AND, OR, NOT,
    ID, NUMBER,
    QUOTES, D_QUOTES,
    RETURN
};

class token_{
public:
    enum token_kind tk;
    string lexeme;
    explicit token_(token_kind type, char * lex);
    token_(token_kind type);
};
#endif //COMPLIER_HY_TOKENS_H
