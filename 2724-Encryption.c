#include<stdio.h>
#include<string.h>
int main(){

    char str[1000],str1[1000];
    int i,j,k,l,m,t,n;
    scanf("%d", &t);
    getchar();
    while(t--) {
        gets(str);
        k = strlen(str);
        for(i=0; i<k; i++) {
            if((str[i]>='A' && str[i]<= 'Z') || (str[i]>='a' && str[i]<='z')) {
                str[i]+=3;
            }
        }
        n=0;
        for(j=k-1; j>=0; j--) {
            str1[n] =str[j];
            n++;
        }
        str1[n]='\0';
        printf("%s\n", str);
        printf("%s\n", str1);
        l=k/2;
        for(i=l; i<k; i++) {
            str1[i] = str1[i] -1;
        }
        printf("%s\n",str1);
    }

    return 0;
}