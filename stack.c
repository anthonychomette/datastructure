/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "stack.h"
/**
 * Fonction qui initialise le pointeur
 * @param s
 */
void init_stack(Stack *s){
    s->index=0;
}
/**
 * Fonction qui pousse un element dans la pile et verifie si la pile n'est pas pleine
 * @param s
 * @param value
 */
void push(Stack *s, float value) {
    s->index++;
    s->data[s->index] = value;
}
/**
 * Fonction suprrime un element si la pile n'est pas vide
 * @param s
 * @return 
 */
float pop(Stack *s){
   return s->data[--(s->index)];   
}
/**
 * Fonction qui verify si la pile est vide
 * @param s
 * @return 
 */
bool is_stack_empty(Stack *s){
     if (s->index = -1)
    {
        return true;
    }
    else return false;
}
/**
 * Fonction qui regarde les valeurs
 * @param s
 * @return 
 */
float peek(Stack *s){// aka top or front 
    return s->data[s->index];
} 
/**
 * Fonction qui duplique les la premiere valeur sur celle du dessous
 * @param s
 */
void dup(Stack *s){
    float value = s->data[s->index];
    push(&s , value);
}
/**
 * Fonction qui echange la valeur du haut avec celle juste en dessous de lui
 * @param s
 */
void swap(Stack *s){
    float value1 = s->data[s->index];
    pop(s);
    float value2 = s->data[s->index];
    pop(s);
    push(s, value1);
    push(s, value2);
    
}
/**
 * Fonction 
 * @param s
 */
void clear(Stack *s){
      
    init_stack(s);
    
}

