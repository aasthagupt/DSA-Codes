/*#include<stdio.h>
void print_array(int*a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
}
void selection_sort(int*a,int n)
{
    int index, temp;
    for (int i = 0; i < n-1; i++)
    {
        index = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j] < a[index])
            {
                index = j;
            }
        }
        temp=a[i];
        a[i] =a[index];
        a[index] = temp;
}
}
int main()
{
    int a[]={29,52,10,58,43,20,54,49,41,42,36,05,11,26,27,22,38,56,57,47,13,18,35,44,08,02,19,12,01,17,30,34,15,03,46,25,50,45,32,23};
    int n=41;
    print_array(a,n);
    selection_sort(a,n);
    print_array(a,n);
    return 0;
}
*/
// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)

	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	int arr[] = {29,52,10,58,43,20,54,49,41,42,36,05,11,26,27,22,38,56,57,47,13,18,35,44,08,02,19,12,01,17,30,34,15,03,46,25,50,45,32,23};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	cout<<"Sorted array: \n";
	printArray(arr, n);
	return 0;
}

// This code is contributed by rathbhupendra
