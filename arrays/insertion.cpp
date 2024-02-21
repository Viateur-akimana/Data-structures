#include<iostream>
using namespace std;

int main(){
    int arr[10],x,n,pos;
    cout <<"Enter the number of elements is an array:\n";
    cin >> n;
    cout <<"Enter the elements of the array:\n";
    for(int i=0; i < n;i++){
        cin >> arr[i];
    }
     cout <<"Enter the element you want to insert:";
     cin >> x;
     cout <<"Enter the location where you will insert the element:\n";
     cin >> pos;
     for(int i=n-1;i>= pos;i--){
        arr[i+1]=arr[i];
     }
     arr[pos]=x;
     cout <<"New full array is :\n";
     for (int i = 0; i < n+1; i++)
     {
        cout << arr[i] <<endl;
     }
     
    return 0;
}