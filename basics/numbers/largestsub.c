/* Write a c program to find largest among three numbers using binary minus operator . */
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: \n ");
    scanf("%d %d %d",&a,&b,&c);
    if(a-b>0 && a-c>0)
         printf("Greatest is a :%d \n",a);
    else
         if(b-c>0)
             printf("Greatest is b :%d \n",b);
         else
             printf("Greatest is c :%d \n",c);
}
