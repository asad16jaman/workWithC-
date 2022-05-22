#include <stdio.h>

int fun(int a,int b){
    return a+b;
}

void myfun(int (*pp)(int,int),int y,int x){
    printf("%d is from function",(*pp)(x,y));
}


int main(){
    int (*ptr) (int ,int );
    myfun(&fun,5,7);


}
