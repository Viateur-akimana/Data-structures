#include<iostream>
using namespace std;

int main(){
    int arr[5]={23,12,34,90,70};
    cout <<"This is the rendering of array:" <<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout <<arr[i] <<endl;
    // }
    for(int i:arr){
        cout << i <<endl;
    }
    
    return 0;
}