#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3],b[3],c,d,i,p;
    c=0;
    d=0;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    scanf("%d%d%d",&b[0],&b[1],&b[2]);
    for(i=0;i<3;i++)
    {
        if(a[i]==b[i])
             p++;
        if(a[i]<b[i])
            c++;
        if(a[i]>b[i])
            d++;
    }
    printf("%d %d",d,c);
return 0;
}
