#include<stdio.h>
int partition(int a[],int l, int r)
{
    int p=a[l];
    int i=l+1;
    for(int j=l+1;j<=r; j++)
    {
        if(a[j]<p)
        {
            int temp;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp; i++;
        }
        else
        {
            int temp;
            temp=a[l];
            a[l]=a[i-1];
            a[i-1]=temp;
        }
    }
    return r;
}
int quicksort(int a[],int l,int r,int element)
{
    if(l<r)
    {
        int p=partition(a,l,r);
        if(p==element-1)
        {
            return p;
        }
        else if(p>element-1)
            {
            return quicksort(a,l,p-1,element);
            }
            else
            {
            return quicksort(a,p+1,r,element);
            }
        }
    }
int main()
{
    int a[6]={5,3,6,0,1,12};
    int l=0,r=5,element=2;
    for(int i=0;i<6;i++)
    {
        printf("unsorted array: %d\n",a[i]);
    }
    printf("\n");
    for(int i=0;i<6;i++)
    {
        printf("sorted array : %d\n",a[i]);
    }
    int p=quicksort(a,l,r,element);
    printf("The ith smallest element is:%d",a[p]);
}

