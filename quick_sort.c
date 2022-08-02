/*#include<stdio.h>
int print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]: %d\n",i,a[i]);
    }
}
int partition(int a[],int low,int high)
{
    int pivot=a[low];
    int j=high;
    int i=low+1;
    int temp;
    do
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    while (i < j);
        temp=a[low];
        a[low]=a[j];
        a[j]=temp;
        return j;
}
int quicksort(int a[],int low, int high)
{
    int partition_index;
    if(low<high)
    {
        partition_index = partition(a, low, high);
        quicksort(a, low, partition_index - 1);
        quicksort(a, partition_index + 1, high);
    }
}
int main()
{
    int a[10]={5,3,12,4,1,66,41},n=7;
    printf("Array before sorting: \n");
    print_array(a,n);
    quicksort(a,0,n-1);
    printf("Array after sorting: \n");
    print_array(a,n);

}

/*#include <stdio.h>

int print_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("a[%d]: %d\n",i,a[i]);
    }
}
void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }

}

void mergeSort(int A[], int low, int high){
    int mid;
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    // int A[] = {9, 14, 4, 8, 7, 5, 6};
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printf("Array before sorting: \n");
    print_array(A, n);
    mergeSort(A, 0, 6);
    printf("Array After sorting: \n");
    print_array(A, n);
    return 0;
}
*/


/* **** DAA **** */
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
/*int kthsmallest(int a[],int l,int r,int k)
{
    quicksort(a,0,6);
    return a[k-1];
}*/
int main()
{
    int a[6]={5,3,6,0,1,12};
    int l=0,r=5,element=4;
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
