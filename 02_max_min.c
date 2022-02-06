#include <stdio.h>
void min_max(int *a,int n);
int main() {
    int a[]={1,4,2,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    min_max(a,n);
    return 0;
}
void min_max(int *a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]^=a[j]^=a[i]^=a[j];
            }
        }
    }
    printf("Minimum element is %d\n",a[0]);
    printf("Maximum element is %d",a[n-1]);
}
