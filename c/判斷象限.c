#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x,y;
    printf("input 2 number:");
    scanf("%f,%f",&x,&y);
    printf("%.f,%.f\n",x,y);
    if ((x==0)&&(y==0)){
        printf("�b���I");
    }
    else if ((x==0)&&(y!=0)){
        printf("�by�b�W");
    }
        else if ((x!=0)&&(y==0)){
            printf("�bx�b�W");
        }
            else if((x>0)&&(y>0)){
                printf("�b�Ĥ@�H��");
            }
                else if((x<0)&&(y>0)){
                    printf("�b�ĤG�H��");
                }
                    else if((x<0)&&(y<0)){
                        printf("�b�ĤT�H��");
                    }
                        else if ((x>0)&&(y<0)){
                            printf("�b�ĥ|�H��");
                        }
    printf("c");
    return 0;
}
                        

