#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"ingresa el numero a cuestionar ";
    cin>>a;
    if(a>0){
        cout<<"el numero "<<a<<" es positivo"<<endl;
    }
    else if(a==0){
        cout<<"el numero "<<a<<" es nulo"<<endl;

    }

    else{
        cout<<"el numero "<<a<<" es negativo"<<endl;
    }
    return 0;
}
