#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=10;i++){
        
        for(int j=1; j<=10; j++){
             if(11-j>=i){
                cout<<"*";
            } else {
                cout<<" ";
            }
           
        }
        cout<<"\n";
    }
}