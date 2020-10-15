/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: aurelio
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

#include "heap.h"
#include "stack.h"
#include "queue.h"
#include "array_list.h"

float test(int a) {
    errno = a;
    assert(a == 5);
    int errnum = errno;
    fprintf(stderr, "Value of errno: %d\n", errnum);
    perror("Error printed by perror");
    fprintf(stderr, "Error opening file: %s\n", strerror(errnum));

}
/*
 * 
 */
void test_stack() {
    Stack s;
        init_stack(&s);
        push(&s, 1);
        push(&s, 2);
        push(&s, 3);
        assert(peek(&s) == 3);
        pop(&s);
        assert(peek(&s) == 2);
        swap(&s);
        assert(peek(&s) == 1);
        clear(&s);
        assert(is_stack_empty(&s) == 1);

}
void test_queue() {
    Queue q;
        init_queue(&q);
        enqueue(&q, 1);
        enqueue(&q, 2);
        enqueue(&q, 3);
        assert(false == is_queue_empty(&q));
        dequeue(&q);
        assert(true == is_queue_empty(&q));
        swap(&q);
        assert(58 == front(&q));
        clear_Q(&q);
         assert(true == is_queue_empty(&q));
    
}
void testArray() {
    Array_list l;
    init_array_list(&l);
    add(&l, 9);
    assert(9 == l.data[0]);
    add(&l, 5);
    assert(get_at(&l, 0) == l.data[0]);
    add(&l, 6);
    insert_at(&l, 1, 8);
    assert(8 == l.data[1]);
    assert(5 == l.data[2]);
    assert(6 == l.data[3]);
    remove_at(&l, 1);
    assert(5 == l.data[1]);
}
//void testHeap(){
//    
//}
int main(int argc, char** argv) {
    
    test_stack();
    test_queue();
    testArray();
    
    
    return (EXIT_SUCCESS);
}
