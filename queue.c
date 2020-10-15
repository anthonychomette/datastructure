/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "queue.h"

/**
 * @author Anthony
 * fonction qui initialise le pointeur
 * @param s Queue
 */
void init_queue(Queue *s)
{
    s->index = -1;
}

/**
 * fonction qui ajoute les données
 * @param q Queue
 * @param value valeur a ajouter
 */
void enqueue(Queue *q, float value)
{
    q->index++;
    q->data[q->index] = value;
}

/**
 * fonction qui recupere les données
 * @param q queue
 * @param value renvoie la valeur au debut de la file 
 */
float dequeue(Queue *q)
{
    float donnee = q->data[0];
    float temp;
    float temp2;
    while (q->index >= 0)
    {
        temp = q->data[q->index-1];
        q->data[q->index-1] = q->data[q->index];
        q->index--;
        
    }
    return donnee;
}

/**
 * fonction qui verifie si la file est vide
 * @param q
 * @return true si la file est vide
 */

bool is_queue_empty    (Queue *q)
{
    if (q->index==-1)
    {
        return true;
    }
    else return false; 
    
}
/**
 * 
 * @param q Queue
 * @return valeur a l'avant de la file
 */
float front(Queue *q) //aka peek
{
    return q->data[0];
}
/**
 * vide la file
 * @param q Queue
 */
void clearQ(Queue *q)
{
    init_queue(q);
}