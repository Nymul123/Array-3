#include <iostream>
using namespace std;


int main()
{
int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
for (int i = 0; i < size; i++)
{
    int num = arr[i];

    // Extract the first digit
    while (num >= 10)
    {
        num /= 10; 
        
    }

    cout << num << endl; // Print the first digit
}

    return 0;
}
