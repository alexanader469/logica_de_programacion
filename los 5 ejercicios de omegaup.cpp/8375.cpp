#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"ingres el valor de las ganacias"<<endl;
    cin>>a;
    cout<<"ingrese el valor de als perdidas"<<endl;
    cin>>b;
    if(a>b){
        cout<<"el negocio si va a jalar"<<endl;
        cout<<a-b;

    }
    else if(b>a){
        cout<<"dejalo ya esta muerto"<<endl;
        cout<<b-a;
    }
    return 0;
}