#include <iostream>
#include <fstream>
#include <queue>
#include <regex>
#include <list>
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


       regex rgx(":((?!.*:).*$)");
        regex a("[0-9].*$");
   smatch match;
   string input = "1AAA";
 
    if (regex_search(input, a))
    {
       cout << "Alguma coisa escrito aqui" << endl;
    }else{
         cout << "Erro" << endl;
    }
        
         Lexema lexema;
        list<Lexema> fila;
        ifstream ficheiro("codigo.txt");
        Token token[20];
        int linha = 1;
        char text;
        string palavra;
        while(ficheiro.read(&text,1)){
                if(palavra=="\n"){
                        linha++;
                        palavra.clear();
                }
                if(text!=' ' && text!=';')
                        palavra.push_back(text);
                else{
                       
                        
                        if(isVariavel(palavra)){

                                cout << "Variavel -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }
                        // else if(isNumero(palavra)){
                        //         cout << "Numero -> " << palavra << endl;
                        //         lexema.setLexema(palavra);
                        //         lexema.setLine(linha);
                        // }
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

                                cout << "Indentificador -> " << palavra << endl;
                                lexema.setLexema(palavra);
                                lexema.setLine(linha);
                        }  

                         if(text == ';'){
                                cout << "Operador Simbolo -> " << text << endl;
                                // token[i]->palavra = text;
                                // token[i]->tipo = "Simbolo_"+ text;
                                lexema.setLexema(";");
                                lexema.setLine(linha);
                        }
                        
                        palavra.clear();
                        // cout << lexema.getLexema() << endl;
                        // cout << lexema.getLinha() << endl;
                        fila.push_front(lexema);
                   
                }
                
        }

        ficheiro.close();
        return 0;
}