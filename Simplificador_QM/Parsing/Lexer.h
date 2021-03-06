#ifndef LEXER_H
#define	LEXER_H

#include <iostream>
#include <map>
#include <string>

#include "ContentReader.h"
#include "Token.h"
#include "Exceptions/LexicalException.h"

using namespace std;

class Lexer{
private:
    Symbol currentSymbol;
    ContentReader contentReader;
    map<string, TokenType> singleSymbolDictionary;
    void InitDictionary();
  
public:
    Lexer(ContentReader cr);
    Lexer(char * input);
    Token NextToken();
    
};

#endif	/* LEXER_H */

