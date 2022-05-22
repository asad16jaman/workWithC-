#include <stdio.h>
int main()
{

    int i,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        int x = i;
        int y = i*i;
        int z = i*i*i;
        printf("%d %d %d\n",x,y,z);
        printf("%d %d %d\n",x,y+1,z+1);
    }



    return 0;
}
