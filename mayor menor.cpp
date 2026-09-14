#include <iostream>
using namespace std;
int main(){
int a;
int b;
cout<<"ingrese el primer numero"<<endl;
cin>>a;
cout<<"ingrese el segundo numero"<<endl;
cin>>b;
int mayor= max(a,b);
int menor= min(a,b);
cout<<"el mayor es "<<mayor<<endl;
cout<<"el menor es "<<menor<<endl;

return 0;
}
