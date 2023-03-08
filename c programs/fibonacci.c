#include<stdio.h>

int main()
{
    int n = 10;
    int a = 0, b = 1;
    
    printf("%d, %d",a,b);
    
    int temp;
    for(int i = 2; i < n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        
        printf("%d, ",temp);
    }

    return 0;
}
