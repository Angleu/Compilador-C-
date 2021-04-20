#include <iostream>

using namespace std;

class Lexema {
    private: 
         string m_lexema;
         int m_linha;

    public:
        void setLine ( int linha){
            m_linha = linha;
        }
        void setLexema ( string lexema){
            m_lexema = lexema;
        }
        int getLinha(){
            return m_linha;
        }
        string getLexema (){
            return m_lexema;
        }

};