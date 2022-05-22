#include<stdio.h>

int main() {

	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int odds = 0;

	if (a & 1){
            odds++;
        printf("%d od is %d it is forst\n",a,odds);
	}

	if (a & 2){

        printf("%d od is it \n",a);
	}


	if (b & 1){
        odds++;
        printf("%d od is %d it is second\n",b,odds);
	}


	if (c & 1){

        odds++;
        printf("%d od is %d it is thied\n",c,odds);
	}



	printf("%s\n", odds > 0 && odds < 3 ? "3 Kimonos for Nezuko" : "You have to choose two");
	return 0;
}
