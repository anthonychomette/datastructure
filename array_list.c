/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "array_list.h"
/**
 * Initialise array
 * @author Anthony
 * @param l Liste
 */
void init_array_list(Array_list *l){
      l->index = -1;  
}
/**
 * Insere la valeur a la position spécifiée
 * @param Liste
 * @param position Position ou ajouter la valeur
 * @param value Valeur a ajouter a la liste
 */

void insert_at(Array_list *l, int position, float value){
    int temp;
    for(int i=(l->index); i>=position; i--){
        temp = l->data[i+1];
        l->data[i+1]=l->data[i];
        l->data[i]=temp;
    }
    l->index++;
    l->data[position]=value;
}

/**
 * Ajoute une valeur a la fin de l'array list
 * @param l Liste
 * @param value
 */

void add(Array_list *l, float value){

    l->index++;
    l->data[l->index] = value;
}

/**
 * Fonction retrait d'une valeur de la liste
 * @param l
 * @param position
 * @return 
 */

float remove_at(Array_list *l, int position){
    float temp;
    float value = l->data[position];
    for (int i = position; i <= (l->index); i++) {
        temp = l->data[i + 1];
        l->data[i + 1] = l->data[i];
        l->data[i] = temp;
    }
    l->index--;
    return value;
}
/**
 *  Fonction recuperer une valeur a une certaine position
 * @param l
 * @param position
 * @return 
 */

float get_at(Array_list *l,int position){
    return l->data[position];
}
/**
 * Fonction de nettoyage d'un tableau
 * @param l
 */

void clear(Array_list *l){
    
    init_array_list(l);
}


