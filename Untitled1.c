#include <stdio.h>


 int main(){

     int N,i,j;
     scanf("%d",&N);
     int L[N];
     for(i=0;i<N;i++){
        scanf("%d",(L+i));
     }
     int mtw;
     for(i=2;i<=5;i++){
            mtw = 0;
        for(j=0;j<N;j++){
           if(L[j]%i==0){
            mtw++;
           }
        }
        printf("%d Multiplo(s) de %d\n",mtw,i);
     }






    return 0;
 }



