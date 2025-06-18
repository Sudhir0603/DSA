#include<iostream>
using namespace std;
int main()
{
    // int a= 8;
    // cout << "address of "<< a << " : "<< &a;

    int arr[]={10,20,30,40};
    int *ptr=arr; // point to arr[0];
    cout << *arr << "\n";
     cout << arr << "\n";
      cout << *(ptr +1 ) << "\n";
      cout << *(ptr +3 ) << "\n";
      ptr++;
      cout << *ptr  << "\n";
}