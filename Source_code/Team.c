#include<stdio.h>
int main()
{
    int n,p,v,t;
    int count = 0;
    scanf("%d",&n);

    for(int i =0; i<n; i++)
    {
        scanf("%d %d %d", &p, &v, &t);
        if(p+v+t>=2)
        {
            count++;
        }
    }
    printf("%d ",count);
    return 0;
}
