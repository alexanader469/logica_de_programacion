#include<iostream>
using namespace std;

int main(){
    int op;
    int x, y, z;
    int a, b, c, d;

    cout<<"1.primer codigo"<<endl;
    cout<<"2.segundo codigo"<<endl;
    cout<<"3.tercer codigo"<<endl;
    cout<<"4.cuarto codigo"<<endl;
    cout<<"5.quinto codigo"<<endl;
    cout<<"6.sexto codigo"<<endl;
    cout<<"7.septimo codigo"<<endl;
    cout<<"8.octavo codigo"<<endl;
    cout<<"9.noveno codigo"<<endl;
    cout<<"10.decimo codigo"<<endl;
    cin>>op;

    if(op == 1){
        cout<<"Ingrese el valor de x"<<endl;
        cin>>x;
        cout<<"Ingrese el valor de y"<<endl;
        cin>>y;

        x = x + y;
        y = x - y;

        // Aquí se agregaron los << que faltaban entre la variable x y el texto "y: "
        cout<<"x: "<< x << " y: "<< y <<endl;
    }

    return 0;
}
