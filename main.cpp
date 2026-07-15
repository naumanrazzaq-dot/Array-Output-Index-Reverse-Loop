#include <iostream>

using namespace std;

int main()
{
// Array Input & Output & Index & Reverse & Loop
    int arr[5];
    int size=5;
    cout<<"Enter 5 values of Array"<<endl;

    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"Array Values according to index"<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[3]<<endl;

    cout<<"Array values with Loop"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array Reverse Values"<<endl;
    for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    int arr2[] = {2,3,4};
    int sz = sizeof(arr2)/sizeof(int);
    cout<<"size of array "<<sz<<endl;

    return 0;
}
