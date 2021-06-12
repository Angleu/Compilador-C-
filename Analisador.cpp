#include <fstream>
#include "Tabela.cpp"
#include "Token.cpp"



class Analisador{
    private:
        Data data;
        std::string palavra;
        char letra;
        int linha;
        

    public:
        Tabela createTabela(Tabela tabela){
             std::ifstream ficheiro("codigo.txt");
             linha = 0;
        while(ficheiro.read(&letra,1)){
                if(letra!=' ' && letra!=';')
                        palavra.push_back(letra);
                        // std::cout << palavra << std::endl;
                        if(letra == ';'){
                            data.linha = linha;
                            data.token = data.getToken(Token_Fim_Instrucao);
                            data.lexema = letra;

                            tabela.add(data);
                        }
                else{

                }
                palavra.clear();

        }
        ficheiro.close();
        return tabela;

    } 

};