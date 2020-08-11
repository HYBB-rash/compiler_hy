//
// Created by hyong on 2020/8/8.
//
#include "../include/utils.h"
#include <cassert>
using namespace std;
void tokenTypeShow(token_kind type){
    switch (type) {
        case INT:
            cout << "INT" ;
            break;
        case DOUBLE:
            cout << "DOUBLE";
            break;
        case CHAR:
            cout << "CHAR";
            break;
        case STRING:
            cout << "STRING";
            break;
        case FOR:
            cout << "FOR";
            break;
        case WHILE:
            cout << "WHILE";
            break;
        case DO:
            cout << "DO";
            break;
        case BREAK:
            cout << "BREAK";
            break;
        case CONTINUE:
            cout << "CONTINUE";
            break;
        case IF:
            cout << "IF";
            break;
        case ELSE:
            cout << "ELSE";
            break;
        case CLASS:
            cout << "CLASS";
            break;
        case PUBLIC:
            cout << "PUBLIC";
            break;
        case PRIVATE:
            cout << "PRIVATE";
            break;
        case RETURN:
            cout << "RETURN";
            break;
        case L_S_BRACKET:
            cout << "(";
            break;
        case R_S_BRACKET:
            cout << ")";
            break;
        case L_M_BRACKET:
            cout << "[";
            break;
        case R_M_BRACKET:
            cout << "]";
            break;
        case L_L_BRACKET:
            cout << "{";
            break;
        case R_L_BRACKET:
            cout << "}";
            break;
        case L_X_BRACKET:
            cout << "error";
            break;
        case R_X_BRACKET:
            cout << "error";
            break;
        case COMMA:
            cout << ",";
            break;
        case SEMICOLON:
            cout << ";";
            break;
        case COLON:
            cout << ":";
            break;
        case POINT:
            cout << ".";
            break;
        case PLUS:
            cout << "+";
            break;
        case MINUS:
            cout << "-";
            break;
        case TIMES:
            cout << "*";
            break;
        case DIVIDE:
            cout << "/";
            break;
        case ASSIGNMENT:
            cout << "=";
            break;
        case LESS:
            cout << "<";
            break;
        case GREATER:
            cout << ">";
            break;
        case EQUAL:
            cout << "==";
            break;
        case N_EQUAL:
            cout << "!=";
            break;
        case LESS_E:
            cout << "<=";
            break;
        case GREATER_E:
            cout << ">=";
            break;
        case AND:
            cout << "&&";
            break;
        case OR:
            cout << "||";
            break;
        case NOT:
            cout << "!";
            break;
        case ID:
            cout << "ID";
            break;
        case NUMBER:
            cout << "NUMBER";
            break;
        case QUOTES:
            cout << "\'";
            break;
        case D_QUOTES:
            cout << "\"";
            break;
        default:
            cout << "error";
    }
    cout << " ";
}

