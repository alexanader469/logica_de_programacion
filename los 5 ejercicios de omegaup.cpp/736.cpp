#include<iostream>
using namespace std;
int main(){
    int a;\
    cout<<"que es su animal"<<endl;
    cout<<"1.vertebrado"<<endl;
    cout<<"2.invertebrado"<<endl;
    cin>>a;
    if(a==1){
        cout<<"que es?"<<endl;
        cout<<"1.ave"<<endl;
        cout<<"2.mamifero"<<endl;
        cin>>a;
        if(a==1){
            cout<<"que es?"<<endl;
            cout<<"1.carnivoro"<<endl;
            cout<<"2. onivoro"<<endl;
            cin>>a;
            if(a==1){
                cout<<"aguila"<<endl;

            }
            else if(a==2){
                cout<<"pomba"<<endl;  
            }
    }
    else if(a==2){
        cout<<"que es?"<<endl;
        cout<<"1. onivoro"<<endl;
        cout<<"2. hervivoro"<<endl;
        cin>>a;
        if(a==1){
            cout<<"homem"<<endl;
        }
        else if(a==2){
            cout<<"vaca"<<endl;
        }
        }


    }
    else if(a==2){
        cout<<"que es?"<<endl;
        cout<<"1.inseto"<<endl;
        cout<<"2.anelideo"<<endl;
        cin>>a;
        if(a==1){
            cout<<"que es?"<<endl;
            cout<<"1.hematofago"<<endl;
            cout<<"2. herbivoro"<<endl;
            cin>>a;
            if(a==1){
                cout<<"pulga"<<endl;
            }
            else if(a==2){
                cout<<"lagarta"<<endl;
            }

            }
            else if(a==2){
                cout<<"que es?"<<endl;
                cout<<"1.hematofago"<<endl;
                cout<<"2. onivoro"<<endl;
                cin>>a;
                if(a==1){
                    cout<<"sanguessuaga"<<endl;
                }
                else if(a==2){
                    cout<<"minhoca"<<endl;
                }

            }
        }
return 0;
    }

    


