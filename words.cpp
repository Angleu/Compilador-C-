#include <iostream>

using namespace std;

// const string NUMERO[10] = {"0","1","2",
//                           "3","4","5",
//                           "6","7","8",
//                           "9",};

// const char letra[26] = {'A' , 'B' , 'C' , 'D' , 'E' , 'F' , 'G'
//        , 'H' , 'I' , 'J' , 'K' , 'L' , 'M' , 'N'
//        , 'O' , 'P' , 'Q' , 'R' , 'S' , 'T' , 'U'
//        , 'V' , 'W' , 'X' , 'Y' , 'Z' };
       
const string simbolo[16] = {"[" , "]" , "{" , "}" , "(" , ")" , "<" , ">"
                        , "\'" , "\"" , "=" , "," , "." , "," , ";"};

const string VARIAVEl[5] = {"int","char","float","double","string"};

const string OPERADORES_ARITMATRICO[7] = {"+","-","*","/","%","++","--"};

const string OPERADORES_ATRIBUICAO[13] = {"=","+=","-=","*=","/=","%=","&=","|=","^=",">>=","<<=",">>","<<"};

const string OPERADORES_COMPARACAO[6] = {"==","!=",">","<",">=","<="};

const string OPERADOR_LOGICO[3] = {"&&","||","!"};

const string DECISAO[3] = {"if", "else", "switch"};

const string REPETICAO[3] ={"while","for","do"};

// Functions

bool isREPETICAO(string read){
       for(int i = 0; i<3; i++){
              if(REPETICAO[i] == read){
                     return true;
              }
       }      
       return false;
}

bool isDECISAO(string read){
       for(int i = 0; i<3; i++){
              if(DECISAO[i] == read){
                     return true;
              }
       }      
       return false;
}

bool isSimbolo(string sinal){
       for(int i = 0; i<simbolo->length(); i++){
              if(simbolo[i] == sinal){
                     return true;
              }
       }      
       return false;
}

bool isOPERADOR_LOGICO(string operador){
       for(int i = 0; i<3; i++){
              if(OPERADOR_LOGICO[i] == operador){
                     return true;
              }
       }      
       return false;
}

bool isOPERADORES_COMPARACAO(string operador){
       for(int i = 0; i<6; i++){
              if(OPERADORES_COMPARACAO[i] == operador){
                     return true;
              }
       }      
       return false;
}


bool isOPERADORES_ARITMATRICO(string operador){
       for(int i = 0; i<7; i++){
              // cout << OPERADORES_ARITMATRICO[i] << endl;
              if(OPERADORES_ARITMATRICO[i] == operador){
                     return true;
              }
       }      
       return false;
}
bool isOPERADORES_ATRIBUICAO(string operador){
       for(int i = 0; i<13; i++){
              if(OPERADORES_ATRIBUICAO[i] == operador){
                     return true;
              }
       }      
       return false;
}

bool isNumero(string letra){
       for(int i = 0; i<NUMERO->length(); i++){
              if(NUMERO[i] == letra){
                     return true;
              }
       }      
       return false;
}

bool isVariavel(string palavra){
       for(int i = 0; i<5; i++){
              if(VARIAVEl[i] == palavra){
                     return true;
              }
       }      
       return false;
}
void print (string message){
       cout << message << endl;
}



