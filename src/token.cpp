//
// Created by hyong on 2020/8/7.
//
#include <utility>

#include "../include/tokens.h"
token get_for_token(){
    auto t = new token_();
    t->k = FOR; t->lexeme = "";
    return t;
}

token get_while_token(){
    auto t = new token_();
    t->k = WHILE; t->lexeme = "";
    return t;
}

token get_break_token(){
    auto t = new token_();
    t->k = BREAK; t->lexeme = "";
    return t;
}

token get_function_token(){
    auto t = new token_();
    t->k = FUNCTION; t->lexeme = "";
    return t;
}
token get_array_token(){
    auto t = new token_();
    t->k = ARRAY; t->lexeme = "";
    return t;
}
token get_if_token(){
    auto t = new token_();
    t->k = IF; t->lexeme = "";
    return t;
}
token get_else_token(){
    auto t = new token_();
    t->k = ELSE; t->lexeme = "";
    return t;
}
token get_var_token(){
    auto t = new token_();
    t->k = VAR; t->lexeme = "";
    return t;
}
token get_class_token(){
    auto t = new token_();
    t->k = CLASS; t->lexeme = "";
    return t;
}
token get_sign_token(string sign){
    auto t = new token_();
    t->k = SIGN; t->lexeme = std::move(sign);
    return t;
}
token get_id_token(string Id){
    auto t = new token_();
    t->k = ID; t->lexeme = std::move(Id);
    return t;
}
token get_number_token(string number){
    auto t = new token_();
    t->k = NUMBER; t->lexeme = std::move(number);
    return t;
}