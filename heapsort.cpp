#include<iostream>
using namespace std;
int heapify(int a[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if (l<n && a[l]>a[largest])
    {
        largest=l;
    }
    else{
        largest=i;
    }
    if (r<n && a[r]>a[largest])
    {
        largest=r;
    }
    if (largest!=i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}

int main()
{
    int a[]={5,2,3,7,15};
    int n= (sizeof a) /(sizeof a[0]);
    /*heap*/
    cout<<"the array before sorting is:"<<a[];
    heapify(a,n,);
    cout<<"the array after the heap sort is:"<<a[];
}
