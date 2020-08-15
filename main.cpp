#include <iostream>
#include "./lex/include/lex.h"
#include "./lex/include/utils.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    const vector<token> &vector = lex();
    for (token t : vector) tokenTypeShow(t->tk);
    return 0;
}
