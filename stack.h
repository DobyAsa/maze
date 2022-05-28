//
// Created by DobyAsa on 2022/5/28.
//

#ifndef MAZE_STACK_H
#define MAZE_STACK_H
#include<iostream>

template<typename T>
class SqStack{
private:
    //the max size of the stack
    int maxsize;
    //point to the top item
    int top;
    //a pointer to the array's base
    T *base;
public:
    //initialize the stack
    SqStack(int maxsize){
        base = (int *)malloc(maxsize*sizeof(T));
        maxsize = maxsize;
        top = -1;
    }
    //push an integer in the stack
    bool push(T data){
        if(top+1 != maxsize){
            top++;
            base[top] = data;
            return true;
        }else{
            printf("Push Error!\n");
            return false;
        }
    }
    //pop an integer out
    T pop(){
        if (top != -1){
            return base[top--];
        }else{
            printf("Pop Error\n");
            return -1;
        }
    }
    //get the top item (without pop)
    T getTop(){
        if(top != -1){
            return base[top];
        }else{
            printf("Get Top Error!\n");
            return -1;
        }
    }
    //get the size of the stack(not the max size)
    int size(){
        return top+1;
    }
    //test if the stack is empty
    bool isEmpty(){
        return top == -1;
    }
    //destroy the stack
    ~SqStack(){
        free(base);
    }
};


#endif //MAZE_STACK_H
