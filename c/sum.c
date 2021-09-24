#include<stdio.h>

int main() {
    printf("------------------------------第一種方式-------------------------------------\n");
    int x1;
    int y1;
    int z1;
    int sum1;

    /*6~9可改成 int x1 ,y1, z1,sum1;*/

    printf("數字1 = ");
    scanf("%d", &x1);
    printf("數字2 = ");
    scanf("%d", &y1);
    printf("數字3 = ");
    scanf("%d",&z1);   
    sum1 = x1 + y1 + z1; 
    printf("和 = %d \n",sum1);

    printf("------------------------------第2種方式-------------------------------------\n");
    
    int x2,sum2;
    printf("請輸入：");
    scanf("%d",&x2);
    sum2 = x2;            /*!sum = x 不是 sum = sum +x*/
    printf("請輸入：" );
    scanf("%d",&x2);
    sum2 = sum2 + x2; 
    printf("請輸入：" );
    scanf("%d",&x2);
    sum2 = sum2 + x2; 
    printf("請輸入：" );
    scanf("%d",&x2);
    sum2 = sum2 + x2;
    printf("答案：%d\n",sum2);

    getchar();
    return 0;
}

