#include<iostream>
using namespace std;
 void selectionSort(int arr[], int n)
 {
 for (int i = 0; i < n - 1; i++)
 {
 int indexMin = i; // Taken first index as minimum.
 for (int j = i + 1; j < n; j++)
 {
 //Making comparisons
 if (arr[j] < arr[indexMin])
 {
 // Updating the minimum value.
 indexMin = j;
 }
 }
 // Swapping the values using swap() method.
 swap(arr[indexMin], arr[i]);
 }
 cout << "Array after sorting:" << endl;
 for (int i = 0; i <= n - 1; i++)
 {
 // Printing the array after being sorted.
 cout << arr[i] << " ";
 }
}
int main()
{
 int array[] = {10, 8, 5, 6, 9, 15, 2};
 int size = 7;
 selectionSort(array, size);
}