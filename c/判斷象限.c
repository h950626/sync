#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float x,y;
    printf("input 2 number:");
    scanf("%f,%f",&x,&y);
    printf("%.f,%.f\n",x,y);
    if ((x==0)&&(y==0)){
        printf("在原點");
    }
    else if ((x==0)&&(y!=0)){
        printf("在y軸上");
    }
        else if ((x!=0)&&(y==0)){
            printf("在x軸上");
        }
            else if((x>0)&&(y>0)){
                printf("在第一象限");
            }
                else if((x<0)&&(y>0)){
                    printf("在第二象限");
                }
                    else if((x<0)&&(y<0)){
                        printf("在第三象限");
                    }
                        else if ((x>0)&&(y<0)){
                            printf("在第四象限");
                        }
    printf("c");
    return 0;
}
                        

