#include<stdio.h>
void main()
{
    int n,i,j;
    char ch='A';
    printf("enter n value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%2c",ch);
            ch++;
        }
        printf("\n");
    }
}

output----
enter n value: 5
 A
 B C
 D E F
 G H I J
 K L M N O
