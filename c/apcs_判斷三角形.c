#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    int temp;
    int aa,bb,cc;
    printf("輸入三角形的三邊長:");
    scanf("%d %d %d",&a,&b,&c);

    if (a<b){
        temp = a;
        a = b;
        b = temp;
    }

    if (a<c){
        temp = a;
        a = c;
        c = temp;
    }

    if (b<c){
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d %d %d \n",a,b,c);

    return 0;
}

