#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int *ptr = arr;
    for (int i = size -1; i >=0 ; i--)
    {
        cout << *(ptr+i) <<endl;
    }
    cout <<endl;
}

int main(){
    
    int arr[] = {24,6,84,11,37,28,99,98};
    int length = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,length);
}
// for string
// string.length() is used
// for int => sizeof(arr)/sizeof(arr[0])