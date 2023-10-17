#include <stdio.h>
int main()
{
  int n ;
   printf("Enter your number");
  scanf("%d", &n);
  if ((n/2)*2 == n){
    printf("the number is even=1\n");
     printf("the number is odd=0\n");
  }
  else{
    printf("the number is even=0\n");
     printf("the number is odd=1\n");
  }
return 0;
}
