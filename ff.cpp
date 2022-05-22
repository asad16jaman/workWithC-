#include<stdio.h>
#include<string.h>

int sum(int a,int b){

    return a+b;
}
int sum (int a,int b,int c){
    return a+b+c;
}

int main(){
   printf("%d",sum(2,8,2));
    return 0;

}

