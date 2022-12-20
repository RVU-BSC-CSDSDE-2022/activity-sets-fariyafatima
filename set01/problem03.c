#include<stdio.h>

int input();
int add(int a,int b);
void output(int a,int b, int sum);

int a,b,sum;
int main()
{
  input();
   
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
  sum=a+b;
  return sum;
}

void output(int a, int b,int sum);
{
  printf("sum of %d and %dis %d")
}