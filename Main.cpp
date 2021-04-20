#include <iostream>
#include <fstream>
#include "words.cpp"
#include "Lexema.cpp"

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
        Lexema lexema;
        ifstream ficheiro("codigo.txt");
        Token token[20];
        int linha = 1;
        char text;
        string palavra;
        while(ficheiro.read(&text,1)){
                if(text!=' ' && text!=';')
                        palavra.push_back(text);
                else{
                        if(text == ';'){
                                cout << "Operador Simbolo -> " << text << endl;
                                // token[i]->palavra = text;
                                // token[i]->tipo = "Simbolo_"+ text;
                        }
                        
                        if(isVariavel(palavra)){

                                cout << "Variavel -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }
                        else if(isNumero(palavra)){
                                cout << "Numero -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }
                        else if(isOPERADORES_ATRIBUICAO(palavra)){
                                cout << "Operador Atribuicao -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }
                        else if(isOPERADORES_ARITMATRICO(palavra)){
                                cout << "Operador Aritmetrico -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }
                        else if(isOPERADORES_COMPARACAO(palavra)){
                                cout << "Operador Comparacao -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }
                        else if(isOPERADOR_LOGICO(palavra)){
                                cout << "Operador Logico -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }
                        else if(isSimbolo(palavra)){
                                cout << "Operador Simbolo -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }
                        else if(isDECISAO(palavra)){
                                cout << "Extrutura de Decisao -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }
                        else if(isREPETICAO(palavra)){
                                cout << "Extrutura de Repeticao -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }
                        else if(palavra != " "){

                                cout << "Outro -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }  
                        linha++;
                        palavra.clear();
                }
                
        }
        ficheiro.close();
        return 0;
}