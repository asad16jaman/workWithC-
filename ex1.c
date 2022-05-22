#include<stdio.h>
#include<math.h>
int main(){
    int X[50], Y[50], Z[50], E[50];
    char N[50][51], R[50];
    int T;
    scanf("%d",&T);

    int wontProceed[50];
    int length = 0;
    int i;

    for (i = 0; i < T; ++i)
        scanf("%d %d=%d", &X[i], &Y[i], &Z[i]);

    for (i = 0; i < T; ++i)
        scanf("%s %d %c", &N[i], &E[i], &R[i]);

    for (i = 0; i < T; ++i) {
            switch (R[i]) {
                case '+':
                    if (X[E[i] - 1] + Y[E[i] - 1] != Z[E[i] - 1])
                        wontProceed[length++] = i;
                    break;
                case '-':
                    if (X[E[i] - 1] - Y[E[i] - 1] != Z[E[i] - 1])
                        wontProceed[length++] = i;
                    break;
                case '*':
                    if (X[E[i] - 1] * Y[E[i] - 1] != Z[E[i] - 1])
                        wontProceed[length++] = i;
                    break;
                case 'I':
                    if (X[E[i] - 1] + Y[E[i] - 1] == Z[E[i] - 1] ||
                        X[E[i] - 1] - Y[E[i] - 1] == Z[E[i] - 1] ||
                        X[E[i] - 1] * Y[E[i] - 1] == Z[E[i] - 1])
                        wontProceed[length++] = i;
                    break;
            }
        }



    return 0;

}
