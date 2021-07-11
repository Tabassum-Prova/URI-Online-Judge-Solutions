#include <stdio.h>
#include <string.h>
int main() {

    char arr[100];
    int i,length,total,n;

    scanf("%d", &n);

    while(n--) {
        scanf("%s", arr);
        length = strlen(arr);

        for(i=0,total=0; i<length; i++) {
            if(arr[i] == '0') {
                total += 6;
            }else if(arr[i] == '1') {
                total += 2;
            }else if(arr[i] == '2') {
                total += 5;
            }else if(arr[i] == '3') {
                total += 5;
            }else if(arr[i] == '4') {
                total += 4;
            }else if(arr[i] == '5') {
                total += 5;
            }else if(arr[i] == '6') {
                total += 6;
            }else if(arr[i] == '7') {
                total += 3;
            }else if(arr[i] == '8') {
                total += 7;
            }else if(arr[i] == '9') {
                total += 6;
            }
        }
        printf("%d leds", total);
    }

    return 0;
}