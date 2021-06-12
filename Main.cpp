#include <fstream>
#include "Analisador.cpp"
using namespace std;


int main(){
        Tabela tabela;
        Analisador analisador;
        tabela = analisador.createTabela(tabela);

        std::cout << tabela.data.back().token << std::endl;
   
        // while(ficheiro.read(&text,1)){
        //         if(text!=' ' && text!=';')
        //                 lexema.push_back(text);
        //         else{
        //                 if(text == ';'){
        //                         cout << "Operador Simbolo -> " << text << endl;
        //                         // token[i]->lexema = text;
        //                         // token[i]->tipo = "Simbolo_"+ text;
        //                 }
                        
        //                 if(isVariavel(lexema)){

        //                         cout << "Variavel -> " << lexema << endl;
        //                 }
        //                 else if(isNumero(lexema)){
        //                         cout << "Numero -> " << lexema << endl;
        //                 }
        //                 else if(isOPERADORES_ATRIBUICAO(lexema)){
        //                         cout << "Operador Atribuicao -> " << lexema << endl;
        //                 }
        //                 else if(isOPERADORES_ARITMATRICO(lexema)){
        //                         cout << "Operador Aritmetrico -> " << lexema << endl;
        //                 }
        //                 else if(isOPERADORES_COMPARACAO(lexema)){
        //                         cout << "Operador Comparacao -> " << lexema << endl;
        //                 }
        //                 else if(isOPERADOR_LOGICO(lexema)){
        //                         cout << "Operador Logico -> " << lexema << endl;
        //                 }
        //                 else if(isSimbolo(lexema)){
        //                         cout << "Operador Simbolo -> " << lexema << endl;
        //                 }
        //                 else if(isDECISAO(lexema)){
        //                         cout << "Extrutura de Decisao -> " << lexema << endl;
        //                 }
        //                 else if(isREPETICAO(lexema)){
        //                         cout << "Extrutura de Repeticao -> " << lexema << endl;
        //                 }
        //                 else if(lexema != " "){

        //                         cout << "Outro -> " << lexema << endl;
        //                 }  
        //                 i++;
        //                 lexema.clear();
        //         }
                
        // }
        return 0;
}