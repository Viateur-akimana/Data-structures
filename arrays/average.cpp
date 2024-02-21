#include<iostream>
using namespace std;

int main(){
    int arr[5]={10,20,30,40,50};
    int sum=0;
    int average=0;
    int count=0;
    for(int i=0;i<5;i++){
        sum += arr[i];
        count++;
    }
    cout <<"THe sum is:" <<sum <<endl; 
    average = sum/count;
    cout <<"The average is:" << average;
    return 0;
}