#include<stdio.h>
int main(){
    int num;
    printf("enter a number which table you want\n");
    scanf("%d",&num);
    for (int i = 1; i <=10; i++)
    {
        printf("%dx%d=%d\n",num,i,i*num);
    
    }
    
    return 0;
}
