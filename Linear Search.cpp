#include <iostream>
using namespace std;
int search(int array[], int n, int x)
{
 for (int i = 0; i < n; i++)
 {
 if (array[i] == x)
 {
 return i;
 }
 }
 return -1;
}
int main()
{
 int array[] = {2, 4, 7, 8, 0, 1, 9};
 int x = 8;
 int n = sizeof(array) / sizeof(array[0]);
 int result = search(array, n, x);
 if (result == -1)
 {
 cout << "Element not found";
 }
 else
 {
 cout << "Element found at index: " << result;
 }
 return 0;
} 
