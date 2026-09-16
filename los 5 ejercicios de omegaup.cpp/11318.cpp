#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"ingres el valor de a"<<endl;
    cin>>a;
    cout<<"ingrese el vqalor de b"<<endl;
    cin>>b;
    if(a+b==5){
        b=3+b;
        cout<<2*a+b;

    }
    else{
        a=a-1;
        if(7*a+b%2==0){
            cout<<a-b;
        }
        else{
            cout<<a*b;

        }
    }

}