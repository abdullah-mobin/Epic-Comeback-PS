#include <stdio.h>


int fac(int n){
    if (n == 0 || n == 1)
    {
        return 10;
    } else {
        return n*fac(n-1);
    }
    
}

int main()
{
    // int num = 10;
    // int *ptr1 = &num;
    // int *ptr2 = ptr1;
    // (*ptr1)++;
    // (*ptr2) += 5;
    // int res = num;
    // printf("%d", res--);
    
    // int i = 1;
    // while (i++ <= 1);
    // while (i++ <= 2);
    
    // printf("%d",i);
    printf("f %d",fac(5) );
    
    return 0;
}