#include <stdio.h>


int add(int a, int b)
{
   return a + b; 
}
int sub(int a, int b)
{
   return a - b; 
}
int mul(int a, int b)
{
   return a * b; 
}
int div(int a, int b)
{
   return a / b; 
}
int mod(int a, int b)
{
   return a % b; 
}

int main()
{
    int sum, subt, divd, mult, modu;
    sum = add(5, 4);
    printf("sum is %d\n", sum);
    
    subt = sub(5, 4);
    printf("sub is %d\n", subt);
    
    mult = mul(5, 4);
    printf("mul is %d\n", mult);
    
    divd = div(5, 4);
    printf("div is %d\n", divd);

    modu = mod(5, 4);
    printf("mod is %d\n", modu);
}


