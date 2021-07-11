#include <stdio.h>
#include <string.h>

int main(){

    char arr[100];
    int i,j,n;

    while(scanf("%s", arr) != EOF) {
        n = strlen(arr);
        j=0;

        for(i=0; i<n; i++) {
            if(arr[i] != ' ') {
                j++;
                if((arr[i] >= 'a' && arr[i] <= 'z') && j%2 == 1) {
                    arr[i] -= 32;
                }else if((arr[i] >= 'A' && arr[i] <= 'Z') && j%2==0) {
                    arr[i] += 32;
                }
            }
        }
        arr[i] = '\0';
        printf("%s", arr);

    }

    return 0;
}