#include<stdio.h>
int main(){

    int n,i,k=0,sum=0;

    while(scanf("%d", &n) != EOF) {
        k++;
        printf("Caso %d: %d numero\n%d", k,k,0);
        for(i=1; i<=n; i++) {
            if(n==1) {
                printf(" %d", 1);
            }
            else {
                for(k=0; k<i; k++) {
                    printf(" %d",i);
                }
            }
        }
        printf("\n\n");
    }

    return 0;
}