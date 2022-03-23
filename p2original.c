#include<stdio.h>
typedef struct _fraction
{
   int num,den;
}Fraction;
Fraction input_fraction()
{
  Fraction a;
  printf("Enter a fraction\n");
  scanf("%d %d",&a.num,&a.den);
  return a;
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  float a=(float)f1.num/f1.den;
  float b=(float)f2.num/f2.den;
  float c=(float)f3.num/f3.den;
 
  if(a>b && a>c)
  {
    return f1;
  }
  else if(b>c)
  {
    return f2;
  }
  else
  {
    return f3;
  }
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
  printf("the largest fraction out of %d/%d,%d/%d,%d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
}
int main()
{
  Fraction f1,f2,f3,largest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  largest=Largest_fraction(f1,f2,f3);
  output(f1,f2,f3,largest);
  return 0;
}

   
