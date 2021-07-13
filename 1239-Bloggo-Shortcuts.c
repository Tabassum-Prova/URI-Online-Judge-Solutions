#include <stdio.h>
#include <string.h>

int main(){

    int a,n,b,i,count=0,m,count1=0;
    char arr[1000], arr1[1000];
    

    while(gets(arr) != NULL) {
        n = strlen(arr);
        
        for(i=0; i<n; i++,m++) {
            if(arr[i] == '_') {
                count++;
                if(count % 2 == 1) {
                    arr1[m] = '<';
                    m++;
                    arr1[m] = 'i';
                    m++;
                    arr1[m] = '>';
                }else if(count % 2 == 0) {
                    arr1[m] = '<';
                    m++;
                    arr1[m] = '/';
                    m++;
                    arr1[m] = 'i';
                    m++;
                    arr1[m] = '>';
                }
            }else if(arr[i] == '*') {
                count1++;
                if(count1 % 2 == 1) {
                    arr1[m] = '<';
                    m++;
                    arr1[m] = 'b';
                    m++;
                    arr1[m] = '>';
                }else if(count % 2 == 0) {
                    arr1[m] = '<';
                    m++;
                    arr1[m] = '/';
                    m++;
                    arr1[m] = 'b';
                    m++;
                    arr1[m] = '>';
                }
            }else {
                arr1[m] = arr[i];
            }
        }
        arr1[m] = '\0';
        printf("%s", arr1);
        
    }
       

    return 0;
}