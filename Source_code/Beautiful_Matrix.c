#include<stdio.h>
#include<math.h>
int main()
{
    int a[5][5];
    int i,j,r,c;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                r= abs(3-i);
                c= abs(3-j);
                printf("%d\n",r+c);
            }
        }
    }
    return 0;
}
