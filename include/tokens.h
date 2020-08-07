//
// Created by hyong on 2020/8/7.
//

#ifndef COMPLIER_HY_TOKENS_H
#define COMPLIER_HY_TOKENS_H

#include <string>
using namespace std;

typedef class token_* token;
enum kind{
    FOR, WHILE, BREAK, FUNCTION, ARRAY, IF,
    ELSE, VAR, CLASS, SIGN, ID, NUMBER,
    EMPTY
};
class token_{
public:
    enum kind k;
    string lexeme;
    token_() {
        k = EMPTY;
        lexeme = nullptr;
    }
};
token get_for_token();
token get_while_token();
token get_break_token();
token get_function_token();
token get_array_token();
token get_if_token();
token get_else_token();
token get_var_token();
token get_class_token();
token get_sign_token(string sign);
token get_id_token(string Id);
token get_number_token(string number);
#endif //COMPLIER_HY_TOKENS_H
