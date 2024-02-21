#include<iostream>
using namespace std;

int main(){
    int arr[10],pos,n;

    cout <<"Enter the number of elements:\n";
    cin >> n;
    cout <<"Enter the elements of the array:\n";
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    cout <<"Enter the pos of the element to remove:\n";
    cin >> pos;
    for(int i=pos;i < n ;i++){
       arr[i-1] = arr[i];
    }
    n=n-1;
    cout <<"The array with the element removed:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<endl;
    }
    
}