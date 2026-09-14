#include<iostream>
using namespace std;

int main(){
    int op;
    int x, y;
    int a, b, c;

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
        x=x-y;
        cout<<"x: "<< x << " y: "<< y <<endl;
    }
    else if(op==2){
        cout<<"ingrese el valor de a"<<endl;
        cin>>a;
        cout<<"ingrese el valor de b"<<endl;
        cin>>b;
        c=(a++ + ++b)*2;
        cout<<"a: "<<a<<"b: "<<b<<"c: "<<c<<endl;

    }
    else if(op==3){
        cout<<"ingrese el valor de a"<<endl;
        cin>>a;
        cout<<"ingrese el valor de b"<<endl;
        cin>>b;
        a+=3;
        b-=a;
        cout<<"a; "<<a<<"b: "<<b<<endl;

    }
    else if(op==4){
        cout<<"ingrese el valor de y"<<endl;
        cin>>y;
        cout<<"ingrese el valor de x"<<endl;
        cin>>x;
        y=++x;
        x=x++ + ++y;
        cout<<"x: "<<x<<"y: "<<y<<endl;
    }
    else if (op==5){
        cout<<"ingrese el valor de a"<<endl;
        cin>>a;
        cout<<"ingrese el valor de b"<<endl;
        cin>>b;
        c=a%b*3+b-1;
        cout<<"a: "<<a<<"b: "<<b<<"c: "<<c<<endl;
    }
    else if(op==6){
        cout<<"ingrese el valor de a"<<endl;
        cin>>a;
        cout<<"ingrese el valor de b"<<endl;
        cin>>b;
        c=a/b+a%b*2;
        cout<<"a: "<<a<<"b: "<<b<<"c: "<<c<<endl;
    }
    else if(op==7){
        cout<<"ingrese el valor de a"<<endl;
        cin>>a;
        cout<<"ingrese el valor de b"<<endl;
        cin>>b;
        c=a*2+b%2;
        a=a+b*3-c/2;
        b=c%3+a/2;
        cout<<"a: "<<a<<"b: "<<b<<"c: "<<c<<endl;
    }
    else if(op==8){
        cout<<"ingrese el valor de x"<<endl;
        cin>>x;
        cout<<"ingrese el valor de y"<<endl;
        cin>>y;
        x+=y*3;
        y=x-y;
        cout<<"x: "<<x<<"y: "<<y<<endl;
    }
    else if(op==9){
        cout<<"ingrese el valor de x"<<endl;
        cin>>x;
        y=++x * x--;
        cout<<"x: "<<x<<"y: "<<y<<endl;
    
    }
    else if(op==10){
        cout<<"ingrese el valor de a"<<endl;
        cin>>a;
        cout<<"ingrese el valor de b"<<endl;
        cin>>b;
        c=++a + b--;
        cout<<"a: "<<a<<"b: "<<b<<"c: "<<c<<endl;
    }
    else if(op==0){
        cout<<"ese problema no existe"<<endl;

    }
    else if(op>10){
        cout<<"ese problema no existe"<<endl;
    }

    return 0;
}
