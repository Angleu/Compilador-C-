
enum 
{
    /// <summary>
    /// Token Identificador (variáveis e funções)
    /// </summary>
    Token_ID,
    /// <summary>
    /// Token número inteiro ou hexadecimal
    /// </summary>
    Token_Inteiro_Valor,
    /// <summary>
    /// Token constante string
    /// </summary>
    Token_String_Valor,
    /// <summary>
    /// Token número com ponto flutuante ou notação científica
    /// </summary>
    Token_Decimal_Valor,
    /// <summary>
    /// Token operador lógico Ou
    /// </summary>
    Token_Operador_Ou,
    /// <summary>
    /// Token operador lógico E
    /// </summary>
    Token_Operador_And,
    /// <summary>
    /// Token operador lógico de negação
    /// </summary>
    Token_Operador_Not,
    /// <summary>
    /// Token operador relacional maior que
    /// </summary>
    Token_Operador_Maior,
    /// <summary>
    /// Token operador relacional maior ou igual que
    /// </summary>
    Token_Operador_MairoIgual,
    /// <summary>
    /// Token operador relacional de igualdade
    /// </summary>
    Token_Operador_Iqual,
    /// <summary>
    /// Token operador relacional menor que
    /// </summary>
    Token_Operador_Menor,
    /// <summary>
    /// Token operador relacional menor ou igual que
    /// </summary>
    Token_Operador_Menor_Igual,
    /// <summary>
    /// Token operador relacional diferença
    /// </summary>
    Token_Operador_Diferente,
    /// <summary>
    /// Token operador aritmético de divisão
    /// </summary>
    Token_Operador_Divisao,
    /// <summary>
    /// Token operador aritmético de multiplicação
    /// </summary>
    Token_Operador_Multiplicacao,
    /// <summary>
    /// Token operador aritmético de subtração
    /// </summary>
    Token_Operador_Subtracao,
    /// <summary>
    /// Token operador aritmético de resto da divisão
    /// </summary>
    Token_Operador_Modulo,
    /// <summary>
    /// Token operador aritmético de adição
    /// </summary>
    Token_Operador_adicao,
    /// <summary>
    /// Token operador aritmético de incremento
    /// </summary>
    Token_Operador_Incremento,
    /// <summary>
    /// Token operador aritmético de decremento
    /// </summary>
    Token_Operador_Decremento,
    /// <summary>
    /// Token operador de atribuição
    /// </summary>
    Token_Atribuicao,
    /// <summary>
    /// Token operador de atribuição divisão
    /// </summary>
    Token_Atribuicao_Composta_Divisao,
    /// <summary>
    /// Token operador de atribuição multiplicação
    /// </summary>
    Token_Atribuicao_Composta_Multiplicacao,
    /// <summary>
    /// Token operador de atribuição de resto da divisão
    /// </summary>
    Token_Atribuicao_Composta_Modulo,
    /// <summary>
    /// Token operador de atribuição subtração
    /// </summary>
    Token_Atribuicao_Composta_Subtracao,
    /// <summary>
    /// Token operador de atribuição adição
    /// </summary>
    Token_Atribuicao_Composta_Adicao,
    /// <summary>
    /// Token operador de atribuição deslocamento direita
    /// </summary>
    Token_Atribuicao_Deslocamento_Direita,
    /// <summary>
    /// Token operador de atribuição deslocamento esquerda
    /// </summary>
    Token_Atribuicao_Deslocamento_Esquerda,
    /// <summary>
    /// Token operador de atribuição bitwise AND
    /// </summary>
    Token_Atribuicao_BitWise_AND,
    /// <summary>
    /// Token operador de atribuição bitwise NOT
    /// </summary>
    Token_Atribuicao_BitWise_NOT,
    /// <summary>
    /// Token operador de atribuição bitwise OR
    /// </summary>
    Token_Atribuicao_BitWise_OR,
    /// <summary>
    /// Token operador bitwise deslocamento a direita
    /// </summary>
    Token_Deslocamento_BitWise_Direita,
    /// <summary>
    /// Token operador bitwise deslocamento a esquerda
    /// </summary>
    Token_Deslocamento_BitWise_Esquerda,
    /// <summary>
    /// Token operador bitwise AND
    /// </summary>
    Token_Operador_BitWise_AND,
    /// <summary>
    /// Token operador bitwise NOT
    /// </summary>
    Token_Operador_BitWise_NOT,
    /// <summary>
    /// Token operador bitwise OR
    /// </summary>
    Token_Operador_BitWise_OR,
    /// <summary>
    /// Token fim de expressão
    /// </summary>
    Token_Fim_Instrucao,
    /// <summary>
    /// Token abrir parenteses
    /// </summary>
    Token_Abrir_Parenteses,
    /// <summary>
    /// Token fechar parenteses
    /// </summary>
    Token_Fechar_Parentese,
    /// <summary>
    /// Token abrir chavetas
    /// </summary>
    Token_Abrir_Chabetas,
    /// <summary>
    /// Token fechar chavetas
    /// </summary>
    Token_Fechar_Chavetas,
    /// <summary>
    /// Token virgula
    /// </summary>
    Token_Virgula,
    /// <summary>
    /// Token ponto
    /// </summary>
    Token_Ponto,
    /// <summary>
    /// Token ponto interrogação
    /// </summary>
    Token_Ponto_Interrogacao,
    /// <summary>
    /// Token abrir parenteses rectos
    /// </summary>
    Token_Abrir_Parenteses_Rectos,
    /// <summary>
    /// Token fechar parenteses rectos
    /// </summary>
    Token_Fechar_Parentese_Rectos,

    /// <summary>
    /// Token palavra reservada "break"
    /// </summary>
    Token_palavra_Reservada_Break,
    /// <summary>
    /// Token palavra reservada "case"
    /// </summary>

    Token_palavra_Reservada_Case,
    /// <summary>
    /// Token palavra reservada "catch"
    /// </summary>
    Token_palavra_Reservada_Catch,
    /// <summary>
    /// Token palavra reservada "class"
    /// </summary>

    Token_palavra_Reservada_Class,
    /// <summary>
    /// Token palavra reservada "const"
    /// </summary>

    Token_palavra_Reservada_Const,
    /// <summary>
    /// Token palavra reservada "continue"
    /// </summary>
    Token_palavra_Reservada_Continue,
    /// <summary>
    /// Token palavra reservada "default"
    /// </summary>
    Token_palavra_Reservada_Default,
    /// <summary>
    /// Token palavra reservada "do"
    /// </summary>
    Token_palavra_Reservada_Do,
    /// <summary>
    /// Token palavra reservada "else"
    /// </summary>
    Token_palavra_Reservada_Else,
    /// <summary>
    /// Token palavra reservada "enum"
    /// </summary>
    Token_palavra_Reservada_Enum,
    /// <summary>
    /// Token palavra reservada "extends"
    /// </summary>
    Token_palavra_Reservada_Extends,
    /// <summary>
    /// Token palavra reservada "false"
    /// </summary>
    Token_palavra_Reservada_False,
    /// <summary>
    /// Token palavra reservada "final"
    /// </summary>
    Token_palavra_Reservada_Final,
        /// <summary>
    /// Token palavra reservada "static"
    /// </summary>
    Token_palavra_Reservada_Static,
    /// <summary>
    /// Token palavra reservada "finally"
    /// </summary>
    Token_palavra_Reservada_Finally,
        /// <summary>
    /// Token palavra reservada "Using"
    /// </summary>
    Token_palavra_Reservada_using,
        /// <summary>
    /// Token palavra reservada "namespace"
    /// </summary>
    Token_palavra_Reservada_Namespace,
    /// <summary>
    /// Token palavra reservada "for"
    /// </summary>
    Token_palavra_Reservada_For,
    /// <summary>
    /// Token palavra reservada "if"
    /// </summary>
    Token_palavra_Reservada_If,
    /// <summary>
    /// Token palavra reservada "new"
    /// </summary>
    Token_palavra_Reservada_New,
    /// <summary>
    /// Token palavra reservada "null"
    /// </summary>
    Token_palavra_Reservada_Null,
    /// <summary>
    /// Token palavra reservada "return"
    /// </summary>
    Token_palavra_Reservada_Return,
    /// <summary>
    /// Token palavra reservada "super"
    /// </summary>
    Token_palavra_Reservada_Super,
    /// <summary>
    /// Token palavra reservada "switch"
    /// </summary>
    Token_palavra_Reservada_Switch,
    /// <summary>
    /// Token palavra reservada "this"
    /// </summary>
    Token_palavra_Reservada_This,
    /// <summary>
    /// Token palavra reservada "throw"
    /// </summary>
    Token_palavra_Reservada_Throw,
    /// <summary>
    /// Token palavra reservada "true"
    /// </summary>
    Token_palavra_Reservada_True,
    /// <summary>
    /// Token palavra reservada "try"
    /// </summary>
    Token_palavra_Reservada_Try,
    /// <summary>
    /// Token palavra reservada "void"
    /// </summary>
    Token_palavra_Reservada_Void,
    /// <summary>
    /// Token palavra reservada "while"
    /// </summary>
    Token_palavra_Reservada_While,
    /// <summary>
    /// Token palavra reservada "with"
    /// </summary>
    Token_palavra_Reservada_With,
    /// <summary>
    /// Token palavra reservada "int"
    /// </summary>
    Token_palavra_Reservada_Int,
    /// <summary>
    /// Token palavra reservada "short"
    /// </summary>
    
    Token_palavra_Reservada_Short,
    /// <summary>
    /// Token palavra reservada "long"
    /// </summary>
    Token_palavra_Reservada_Long,
    /// <summary>
    /// Token palavra reservada "unsigned"
    /// </summary>
    Token_palavra_Reservada_Unsigned,
    /// <summary>
    /// Token palavra reservada "double"
    /// </summary>
    Token_palavra_Reservada_Double,
    /// <summary>
    /// Token palavra reservada char
    /// </summary>
    Token_palavra_Reservada_Char,
    /// <summary>
    /// Token palavra reservada "List"
    /// </summary>
    Token_palavra_Reservada_List,
    /// <summary>
    /// Token palavra reservada "Map"
    /// </summary>
    Token_palavra_Reservada_Map,
    /// <summary>
    /// Token palavra reservada "String"
    /// </summary>
    Token_palavra_Reservada_String,
    /// <summary>
    /// Token palavra reservada public
    /// </summary>
    Token_palavra_Reservada_Public,
    /// <summary>
    /// Token palavra reservada private
    /// </summary>
    Token_palavra_Reservada_private,
    /// <summary>
    /// Token palavra reservada struct
    /// </summary>
    Token_palavra_Reservada_Struct,
    /// <summary>
    /// Token palavra reservada typedef
    /// </summary>
    Token_palavra_Reservada_Typedef,
    /// <summary>
    /// Operador de Endereço
    /// </summary>
    Token_palavra_Reservada_EComercial
}Token;
