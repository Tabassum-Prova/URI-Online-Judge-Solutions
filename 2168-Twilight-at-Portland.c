#include <stdio.h>

int main() {

    
    int n,i=0,j,t,sum=0,k=0;
    scanf("%d", &n);
    int arr[n+1][n+1];

    for(i=0; i<=n; i++) {
        for(j=0; j<=n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
           if(sum=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1] >= 2){
                printf("S");
           }else{
               printf("U");
           }
        }
        printf("\n");
    }


    return 0;
}