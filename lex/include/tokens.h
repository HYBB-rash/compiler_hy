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
/**
 * 枚举类型token_kind，这里定义了所有的compiler-hy可能会用到的标识词
 * 包含一些基本的标识词和标点符号
 */
enum token_kind{
    INT, DOUBLE, CHAR, STRING,                          //基本数据类型，整型，浮点型，字符串和字符类型
    FOR, WHILE, DO, BREAK, CONTINUE,                    //关于loop的表示词
    IF, ELSE,                                           //关于选择分支的标识词
    CLASS, PUBLIC, PRIVATE,                             //关于类的标识词
    L_S_BRACKET, R_S_BRACKET, L_M_BRACKET, R_M_BRACKET, //关于括号的定义。前缀：L_S->（，R_S->),L_M->[,R-M->]
    L_L_BRACKET, R_L_BRACKET, L_X_BRACKET, R_X_BRACKET, //关于括号的定义。前缀：L_L->{, R_L->}
    COMMA, SEMICOLON, COLON, POINT, QUOTES, D_QUOTES,   //关于标点的定义
    PLUS, MINUS, TIMES, DIVIDE, ASSIGNMENT,             //关于算术符号的定义
    LESS, GREATER, EQUAL, N_EQUAL, LESS_E, GREATER_E,   //关于比较运算符的定义，前缀N表示NOT，后缀E表示EQUAL
    AND, OR, NOT,                                       //关于逻辑运算符的定义
    ID, NUMBER,                                         //关于用户自定义的标识符和数据
    RETURN                                              //函数行为标识词
};
/**
 * token的数据结构，暂时来说构造函数只会输出对应的token信息
 * 如果token不是用户自定义标识符，那类定义中的string将为空
 * 如果是用户自定义标识符，类定义中的string会保存用户写下的数据，ID或者是一串数字
 */
class token_{
public:
    enum token_kind tk;
    string lexeme;
    explicit token_(token_kind type, char * lex);
    token_(token_kind type);
};
#endif //COMPLIER_HY_TOKENS_H
