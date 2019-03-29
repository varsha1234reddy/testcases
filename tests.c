#include<stdio.h>
#include<assert.h>

int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);

int addition(int a , int b)
{
return a+b;
}

int subtraction(int a , int b)
{
return a-b;
}

int multiplication(int a,int b)
{
return a*b;
}

int division(int a,int b)
{
return a/b;
}

int main()
{
int a,b;
assert(addition(10,100) == 110);
assert(addition(200,100) == 300);
assert(addition(-10,100) == 90);
assert(addition(-10,-100) == -110);
assert(subtraction(100,10) == 90);
assert(subtraction(10,100) == -90);
assert(subtraction(10,-100) == 110);
assert(subtraction(-10,-100) == 90);
assert(multiplication(10,2) == 20);
assert(multiplication(-10,2) == -20);
assert(multiplication(-10,-2) == 20);
assert(multiplication(42,1) == 42);
assert(division(50,2) == 25);
assert(division(2,50) == 0);
assert(division(-50,-2) == 25);
printf("All test cases passed");
}
