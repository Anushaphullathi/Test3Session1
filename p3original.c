#include<stdio.h>
void input_n_and_r(int *n, int *r)
{
  printf("Enter the value of n and r\n");
  scanf("%d %d",n,r);
}
int factorial(int n)
{
  int fact=1;
  for(int i=2;i<=n;i++)
    fact=fact*i;
  return fact;
}
int ncr(int n, int r)
{
 int result=factorial(n)/factorial(r)*factorial(n-r);
  return result;
}
void output(int n, int r, int result)
{
  printf("%d %d is %d",n,r,result);
}
int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}


