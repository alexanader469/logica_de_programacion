#include<iostream>
using namespace std;

int main(){
    int op;
    int x, y;
    cout<<"Ingrese el valor de x"<<endl;
        cin>>x;
        cout<<"Ingrese el valor de y"<<endl;
        cin>>y;

        x = x + y;
        y = x - y;
        x=x-y;
        cout<<"x: "<< x << " y: "<< y <<endl;
        return 0;
}