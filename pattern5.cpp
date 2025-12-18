#include<iostream>
using namespace std;

int main(){
    cout<<"Enter two numbers";
    int a,b,c,gcd;
    cin>>a>>b;
    gcd=1;
    c=min(a,b);

    for(int i =1; i<=c; i++){
        if(a%i && b%i){
            gcd=i;
        }

        if(gcd==1){
            cout<<"co-prime";
        } else{
            cout<<"not co-prime";
        }
    }
    return 0;
}
