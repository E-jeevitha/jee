#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],rev[100];
    int i,j,b;
    scanf("%s",a);
    b=strlen(a);
    j=0;
    for(i=b-1;i>=0;i--)
    {
        rev[j]=a[i];
        j++;
    }
    printf("%s",rev);
    return 0;
}
