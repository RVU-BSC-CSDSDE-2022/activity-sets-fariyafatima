#include<stdio.h>

int input();
int add(int a,int b);
void output(int a,int b, int sum);

int a,b,sum;

int main()
{
  input ();
  add (a,b,sum);
  output()
   
}

int input()
{
  printf("enter value for a");
  scanf("%d",&a);
  printf("enter value for b");
  scanf("%d",&b);
}

int add (int a, int b)
{
  int sum;
  sum=a+b;
  return sum;
}

void output(int a, int b,int sum);
{
  printf("sum of %d and %d is %d",a,b,sum);
}