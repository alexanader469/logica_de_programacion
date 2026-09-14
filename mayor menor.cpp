#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"ingrese el primer numero ";
    cin>>a;
    cout<<"ingrese el segundo numero ";
    cin>>b;
    int mayor=max(a,b);
    int menor=min(a,b);
    cout<<"el numero mayor es "<<mayor<<" y el menor es "<<menor;  
    return 0;
    
}