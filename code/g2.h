/**
 * @file Ficheiro que contém as funçẽs relativas ao parse da Stack
 */

/**
 * \brief Função dollarfunction do programa
 * 
 * recebe como parâmetros um apontador para a struct stack e uma variável i
 * e devolve o valor apontado para esse índice.
 * 
 * @param stack
 * @param i (índice)
 */
void dollarfunction(struct stack *stack);

/**
 * \brief Função maths do programa
 * 
 * efetua o cálculo das operações aritméticas.
 * 
 * @param ptr_STACK
 * @param token
 */
void maths(struct stack *ptr_STACK, char *token);

/**
 * \brief Função manstack do programa
 * 
 * efetua o cálculo das operações para manipulação da Stack.
 * 
 * @param ptr_STACK
 * @param token
 */
void manstack(struct stack *ptr_STACK, char *token);

/**
 * \brief Função conversion do programa
 * 
 *  efetua a conversão dos elementos da Stack para um dado tipo.
 * 
 * @param ptr_STACK
 * @param token
 */
void conversion(struct stack *ptr_STACK, char *token);

/**
 * \brief Função inoutput do programa
 * 
 * é responsável pelas ações de in/output.
 * 
 * @param ptr_STACK
 * @param token
 */
void inoutput(struct stack *ptr_STACK, char *token);

/**
 * \brief Função logic do programa
 * 
 * é responsável pelas ações de lógica e condições.
 * 
 * @param ptr_STACK
 * @param token
 */
void logic(struct stack *ptr_STACK, char *token);

/**
 * \brief Função double_top do programa
 * 
 * é responsável por duplica os dois elementos do topo da stack.
 * 
 * @param ptr_STACK
 */
void double_top(struct stack *ptr_STACK);

/**
 * \brief Função switch_top do programa
 * 
 * é responsável por trocar os dois elementos do topo da stack.
 * 
 * @param ptr_STACK
 */
void switch_top(struct stack *ptr_STACK);

/**
 * \brief Função rotate_elem do programa
 * 
 * é responsável por rodar os três elementos do topo da stack.
 * 
 * @param ptr_STACK
 */
void rotate_elem(struct stack *ptr_STACK);

/**
 * \brief Função convert_i do programa
 * 
 * é responsável por converter o elemento do topo da stack para int.
 * 
 * @param ptr_STACK
 */
void convert_i(struct stack *ptr_STACK);

/**
 * \brief Função convert_f do programa
 * 
 * é responsável por converter o elemento do topo da stack para float.
 * 
 * @param ptr_STACK
 */
void convert_f(struct stack *ptr_STACK);

/**
 * \brief Função convert_c do programa
 * 
 * é responsável por converter o elemento do topo da stack para char.
 * 
 * @param ptr_STACK
 */
void convert_c(struct stack *ptr_STACK);

/**
 * \brief Função convert_s do programa
 * 
 * é responsável por converter o elemento do topo da stack para string.
 * 
 * @param ptr_STACK
 */
void convert_s(struct stack *ptr_STACK);

/**
 * \brief Função read_line do programa
 * 
 * é responsável por ler uma linha.
 * 
 * @param ptr_STACK
 */
void read_line(struct stack *ptr_STACK);

/**
 * \brief Função decrement do programa
 * 
 * é responsável por decrementar um elemento.
 * 
 * @param ptr_STACK
 */
void decrement(struct stack *ptr_STACK);

/**
 * \brief Função increment do programa
 * 
 * é responsável por incrementar um elemento.
 * 
 * @param ptr_STACK
 */
void increment(struct stack *ptr_STACK);

/**
 * \brief Função complement do programa
 * 
 * é responsável por transformar o elemento em complemento para 2.
 * 
 * @param ptr_STACK
 */
void complement(struct stack *ptr_STACK);

/**
 * \brief Função call_operator do programa
 * 
 * é responsável por chamar a função operador.
 * 
 * @param ptr_STACK
 */
void call_operator(struct stack *ptr_STACK, char *token);