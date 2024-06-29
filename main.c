#include <stdio.h>
int main()
{
    int s,n;
    scanf("%d",&s);
    n=s/10;
    switch(n){
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }
    return 0;
}