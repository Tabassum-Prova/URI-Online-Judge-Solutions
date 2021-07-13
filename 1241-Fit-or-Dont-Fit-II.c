#include <stdio.h>

#include <string.h>

int main()

{

    char str[10000],str1[10000];

    int i,j,k,l,n,m,count,T;

    scanf("%d",&T);

    while(T--)

    {

        scanf("%s",str);

        scanf("%s",str1);

        i = strlen(str);

        j= strlen(str1);

        if(j>i)

           printf("nao encaixa\n");

        else if(i>=j)

         {

             k = i-j;

             m=0;

             count =0;

             for(n=k;n<i;n++)

             {

                 if(str[n]==str1[m])

                    count++;

                    m++;

             }

             if(count== j)

                printf("encaixa\n");

             else

                printf("nao encaixa\n");

         }

    }

}