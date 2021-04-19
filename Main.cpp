#include <iostream>
#include <fstream>
#include "words.cpp"

using namespace std;



struct Token {
         string lexema;
         string tipo, valor;
};

struct Semantico{
        Token token;
        int numeroLinha;
        int tamanhoByte, dimensaoVariavel;
        string categoria;
};

struct Erro{
        Semantico semantica;
        
};


int main(){
        ifstream ficheiro("codigo.txt");
        Token token[20];
        int i = 0;
        char text;
        string lexema;
        while(ficheiro.read(&text,1)){
                if(text!=' ' && text!=';')
                        lexema.push_back(text);
                else{
                        if(text == ';'){
                                cout << "Operador Simbolo -> " << text << endl;
                                // token[i]->lexema = text;
                                // token[i]->tipo = "Simbolo_"+ text;
                        }
                        
                        if(isVariavel(lexema)){

                                cout << "Variavel -> " << lexema << endl;
                        }
                        else if(isNumero(lexema)){
                                cout << "Numero -> " << lexema << endl;
                        }
                        else if(isOPERADORES_ATRIBUICAO(lexema)){
                                cout << "Operador Atribuicao -> " << lexema << endl;
                        }
                        else if(isOPERADORES_ARITMATRICO(lexema)){
                                cout << "Operador Aritmetrico -> " << lexema << endl;
                        }
                        else if(isOPERADORES_COMPARACAO(lexema)){
                                cout << "Operador Comparacao -> " << lexema << endl;
                        }
                        else if(isOPERADOR_LOGICO(lexema)){
                                cout << "Operador Logico -> " << lexema << endl;
                        }
                        else if(isSimbolo(lexema)){
                                cout << "Operador Simbolo -> " << lexema << endl;
                        }
                        else if(isDECISAO(lexema)){
                                cout << "Extrutura de Decisao -> " << lexema << endl;
                        }
                        else if(isREPETICAO(lexema)){
                                cout << "Extrutura de Repeticao -> " << lexema << endl;
                        }
                        else if(lexema != " "){

                                cout << "Outro -> " << lexema << endl;
                        }  
                        i++;
                        lexema.clear();
                }
                
        }
        ficheiro.close();
        return 0;
}