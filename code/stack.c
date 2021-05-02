/**
 * @file Ficheiro que contém as função parse, a par, das funções que lhe dão suporte, POP, PUSH e PRINSTACK_STACK
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "stack.h"
#include <assert.h>

/**
 * \brief Função POP do programa
 * 
 * Função que vai à Stack tirar a última célula.
 * 
 * @returns Um valor elemento .
 */
struct elemento POP(struct stack *stack)
{
    stack->top--;
    return stack->array[stack->top + 1];
}

/**
 * \brief Função PUSH do programa
 * 
 *que adiciona uma célula à Stack .
 * 
 * @param stack
 * @param n (elemento a adicionar).
 */
void
PUSH(struct stack *stack, struct elemento n)
{
    // printf(" o tipo  do que pediste para empurrar é : %d\n", n.tipo);
    stack->top++;
    //printf(" o q empurrei foi :%f\n", n.data.val_d);
    stack->array[stack->top] = n;
    //printf(" o q fixou no topo da stack foi : %f\n", stack->array[stack->top].data.val_d);
    //printf(" o q empurrei  na verdade foi  %d\n", stack->array[stack->top].data.val_i);
}

/**
 * \brief Função PRINSTACK_STACK do programa.
 * 
 * Inicia-se um ciclo for, onde uma variável é incializada também,
 * a condição de paragem ocorre se a variável é maior
 * que o topo da da Stack, a cada iteração incrementa-se a variável.
 * 
 * É imprimido o valor da Stack no índice da variável, de acordo
 * com o seu valor a cada iteração.
 * 
 * @param stack
 */
void PRINT_STACK(struct stack *stack)
{
    //char *resto;
    for (int i = 0; i <= (*stack).top; i++)
    {
        switch ((*stack).array[i].tipo)
        {
        case T_int:
            printf("%d", (*stack).array[i].data.val_i);
            break;
        case T_long:
            printf("%ld", (*stack).array[i].data.val_l);
            break;
        case T_float:
            printf("%.6g", stack->array[i].data.val_f);
            break;
        case T_double:
            //  printf("double: ");
            printf("%.6g", stack->array[i].data.val_d);
            break;
        case T_char:
            //  printf("char: ");
            printf("%c", stack->array[i].data.val_c);
            break;
        case T_string:
            //  printf("string: ");
            printf("%s", stack->array[i].data.val_s);
            break;
        case T_array:
            //  printf("array: ");
            print_array(*(stack->array[i].data.val_p));
            break;
        default: //falta as strings e os arrays
            break;
        }
    }
    printf("\n");
}

/**
 * \brief Função PRINSTACK_STACK do programa.
 * 
 * Inicia-se um ciclo for, onde uma variável é incializada também,
 * a condição de paragem ocorre se a variável é maior
 * que o topo da da Stack, a cada iteração incrementa-se a variável.
 * 
 * É imprimido o valor da Stack no índice da variável, de acordo
 * com o seu valor a cada iteração.
 * 
 * @param stack
 */
void print_array(struct array array)
{
    for (int i = 0; i < array.top; i++)
    {
        switch (array.elemento.tipo)
        {
        case T_int:
            printf("%d", array.elemento.data.val_i);
            break;
        case T_long:
            printf("%ld", array.elemento.data.val_l);
            break;
        case T_float:
            printf("%.6g", array.elemento.data.val_f);
            break;
        case T_double:
            //  printf("double: ");
            printf("%.6g", array.elemento.data.val_d);
            break;
        case T_char:
            //  printf("char: ");
            printf("%c", array.elemento.data.val_c);
            break;
        case T_string:
            //  printf("string: ");
            printf("%s", array.elemento.data.val_s);
            break;
        }
    }
}

/**
 * \brief Função initStack  do programa
 * 
 * inicia a stack
 * 
 * @param ptr_STACK (apontador para a stack)
 */
void initStack(struct stack *ptr_STACK)
{
    ptr_STACK->top = -1;
    struct var var_tmp;
    struct elemento val;
    val.tipo = T_int;
    for (int i = 0; i < 6; i++)
    {
        val.data.val_i = 10 + i;
        var_tmp.index = i;
        var_tmp.elemento = val;
        (*ptr_STACK).vars[i] = var_tmp;
    }
    val.data.val_i = 0;
    var_tmp.index = 23;
    var_tmp.elemento = val;
    (*ptr_STACK).vars[23] = var_tmp;
    val.data.val_i = 1;
    var_tmp.index = 24;
    var_tmp.elemento = val;
    (*ptr_STACK).vars[24] = var_tmp;
    val.data.val_i = 2;
    var_tmp.index = 25;
    var_tmp.elemento = val;
    (*ptr_STACK).vars[25] = var_tmp;
}