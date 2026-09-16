#include<iostream>
using namespace std;
int main(){
    string a;
    string b;
    int c;
    int d;
    cout<<"ingrese el primer nombre"<<endl;
    cin>>a;
    cout<<"ingrese su nota"<<endl;
    cin>>c;
    cout<<"ingrese el segundo nombre"<<endl;
    cin>>b;
    cout<<"ingrese su nota"<<endl;
    cin>>d;
    if(c>d){
        cout<<a<<" "<<c;

    }
    else if(d>c){
        cout<<b<<" "<<d;
        

    }

}