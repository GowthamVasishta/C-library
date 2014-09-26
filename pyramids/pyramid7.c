/*
 * 
 * To generate the following pyramid
 * 
 * 1
 * 12
 * 123
 * 1234
 * 12345
 * 1234
 * 123
 * 12
 * 1
 *
 */

#include<stdio.h>

int main()
{
 int num,n,r=1,c;
 printf("Enter triangle number : ");
 scanf("%d",&num);
 while(num >= r)
 {
  c=1;
  while(c <= r)
  {
    printf("%d",c);
    c++;
  }
  printf("\n");
  r++;
 }
 n=num-1;
 while(n >= 1)
 {
   c=1;
   while(c <= n)
   {
     printf("%d",c);
     c++;
   }
   printf("\n");
   n--;
 }
 
 return 0;
}
