#include<stdio.h>

int main() {
    printf("------------------------------�Ĥ@�ؤ覡-------------------------------------\n");
    int x1;
    int y1;
    int z1;
    int sum1;

    /*6~9�i�令 int x1 ,y1, z1,sum1;*/

    printf("�Ʀr1 = ");
    scanf("%d", &x1);
    printf("�Ʀr2 = ");
    scanf("%d", &y1);
    printf("�Ʀr3 = ");
    scanf("%d",&z1);   
    sum1 = x1 + y1 + z1; 
    printf("�M = %d \n",sum1);

    printf("------------------------------��2�ؤ覡-------------------------------------\n");
    
    int x2,sum2;
    printf("�п�J�G");
    scanf("%d",&x2);
    sum2 = x2;            /*!sum = x ���O sum = sum +x*/
    printf("�п�J�G" );
    scanf("%d",&x2);
    sum2 = sum2 + x2; 
    printf("�п�J�G" );
    scanf("%d",&x2);
    sum2 = sum2 + x2; 
    printf("�п�J�G" );
    scanf("%d",&x2);
    sum2 = sum2 + x2;
    printf("���סG%d\n",sum2);

    getchar();
    return 0;
}

