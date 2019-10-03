#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_SIZE 1000

void cleaner(int *a, int *b)
{
    for (int cnt=0; cnt<MAX_SIZE; cnt++)
    {
        a[cnt]=NULL;
        b[cnt]=NULL;
    }
}


int reader (int *a)
{
    int i;
    printf("How much numbers: ");
    scanf("%d",&i);
    printf("Numbers: ");
    for (int cnt=0; cnt<i; cnt++)
    {
        scanf("%d",&a[cnt]);
    }
    return i;
}


int converter (int number)
{
    int tens=1, binary_number=0;
    while (number)
    {
        binary_number +=(number%2)*tens;
        tens *=10;
        number/=2;
    }
    return binary_number;
}




int main()
{
    int a[MAX_SIZE], b[MAX_SIZE];
    int i,c;
    cleaner(a,b);
    c=reader(a);
    for (i=0; i<c; i++)
    {
        b[i]=converter(a[i]);
    }
    for (i=0; i<c; i++)
    {
        printf("%d - dec, %d - bin\n",a[i],b[i]);
    }
    return 0;
}
