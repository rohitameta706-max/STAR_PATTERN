#include<iostream>
using namespace std;

// if(true)
// cout<<"x+y";
// cout<<"right";

// else
// cout<< "n1+n1";
// cout<<"wrong";


int main() {
    int a,sum=0,avg;
    cin>>a;
    
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
       sum+=arr[i];
    }

    avg=sum/a;
   for (int i=0;i<a;i++){
    if(arr[i] > avg){
        cout<<arr[i]<<" ";
    }
   }

    return 0;
}