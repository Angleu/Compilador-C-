#include <iostream>

using namespace std;

class Lexema {
    private: 
         string lexema;
         int linha;

    public:
        void setLine ( int linha){
            linha = linha;
        }
        void setLexema ( string lexema){
            lexema = lexema;
        }
        int getLinha(){
            return linha;
        }
        string getLexema (){
            return lexema;
        }

};