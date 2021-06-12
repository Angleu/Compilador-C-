#include <iostream>


class Data
{
    private:
            std::string token_aux[91] = { "Token_ID",

                      "Token_Inteiro_Valor",

                      "Token_String_Valor",

                      "Token_Decimal_Valor",

                      "Token_Operador_Ou",

                      "Token_Operador_And",

                      "Token_Operador_Not",

                      "Token_Operador_Maior",

                      "Token_Operador_MairoIgual",

                      "Token_Operador_Iqual",

                      "Token_Operador_Menor",

                      "Token_Operador_Menor_Igual",

                      "Token_Operador_Diferente",

                      "Token_Operador_Divisao",

                      "Token_Operador_Multiplicacao",

                      "Token_Operador_Subtracao",

                      "Token_Operador_Modulo",

                      "Token_Operador_adicao",

                      "Token_Operador_Incremento",

                      "Token_Operador_Decremento",

                      "Token_Atribuicao",

                      "Token_Atribuicao_Composta_Divisao",

                      "Token_Atribuicao_Composta_Multiplicacao",

                      "Token_Atribuicao_Composta_Modulo",

                      "Token_Atribuicao_Composta_Subtracao",

                      "Token_Atribuicao_Composta_Adicao",

                      "Token_Atribuicao_Deslocamento_Direita",

                      "Token_Atribuicao_Deslocamento_Esquerda",

                      "Token_Atribuicao_BitWise_AND",

                      "Token_Atribuicao_BitWise_NOT",

                      "Token_Atribuicao_BitWise_OR",

                      "Token_Deslocamento_BitWise_Direita",

                      "Token_Deslocamento_BitWise_Esquerda",

                      "Token_Operador_BitWise_AND",

                      "Token_Operador_BitWise_NOT",

                      "Token_Operador_BitWise_OR",

                      "Token_Fim_Instrucao",

                      "Token_Abrir_Parenteses",

                      "Token_Fechar_Parentese",

                      "Token_Abrir_Chabetas",

                      "Token_Fechar_Chavetas",

                      "Token_Virgula",

                      "Token_Ponto",

                      "Token_Ponto_Interrogacao",

                      "Token_Abrir_Parenteses_Rectos",

                      "Token_Fechar_Parentese_Rectos",

                      "Token_palavra_Reservada_Break",

                      "Token_palavra_Reservada_Case",

                      "Token_palavra_Reservada_Catch",

                      "Token_palavra_Reservada_Class",

                      "Token_palavra_Reservada_Const",

                      "Token_palavra_Reservada_Continue",

                      "Token_palavra_Reservada_Default",

                      "Token_palavra_Reservada_Do",

                      "Token_palavra_Reservada_Else",

                      "Token_palavra_Reservada_Enum",

                      "Token_palavra_Reservada_Extends",

                      "Token_palavra_Reservada_False",

                      "Token_palavra_Reservada_Final",
                      "Token_palavra_Reservada_Static",

                      "Token_palavra_Reservada_Finally",
                      "Token_palavra_Reservada_using",
                      "Token_palavra_Reservada_Namespace",

                      "Token_palavra_Reservada_For",

                      "Token_palavra_Reservada_If",

                      "Token_palavra_Reservada_New",

                      "Token_palavra_Reservada_Null",

                      "Token_palavra_Reservada_Return",

                      "Token_palavra_Reservada_Super",

                      "Token_palavra_Reservada_Switch",

                      "Token_palavra_Reservada_This",

                      "Token_palavra_Reservada_Throw",

                      "Token_palavra_Reservada_True",

                      "Token_palavra_Reservada_Try",

                      "Token_palavra_Reservada_Void",

                      "Token_palavra_Reservada_While",

                      "Token_palavra_Reservada_With",

                      "Token_palavra_Reservada_Int",

                      "Token_palavra_Reservada_Short",

                      "Token_palavra_Reservada_Long",

                      "Token_palavra_Reservada_Unsigned",

                      "Token_palavra_Reservada_Double",

                      "Token_palavra_Reservada_Char",

                      "Token_palavra_Reservada_List",

                      "Token_palavra_Reservada_Map",

                      "Token_palavra_Reservada_String",

                      "Token_palavra_Reservada_Public",

                      "Token_palavra_Reservada_private",

                      "Token_palavra_Reservada_Struct",

                      "Token_palavra_Reservada_Typedef",

                      "Token_palavra_Reservada_EComercial" };
public:
    int linha;
    std::string lexema;
    std::string token;
    std::string tipo_retorno, escopo;
    std::string valor_atribuido;
    int endereco_memoria, tamanho;

public:
    std::string getToken(int id){
        return token_aux[id];
    }
};
