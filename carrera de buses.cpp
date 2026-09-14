#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>     
#include <thread>    
#include <chrono>
#include <windows.h> 


using namespace std;


void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
   
    srand(time(0)); 

    
    int posFigura1 = 0;
    int posFigura2 = 0;
    
 
    const int META = 40; 

    cout << "¡Presiona Enter para iniciar la carrera de buseeeeees!";
    cin.get(); 

   
    while (posFigura1 < META && posFigura2 < META) {
        limpiarPantalla();

        posFigura1 += rand() % 3;
        posFigura2 += rand() % 3;


        cout << "Pista 1: ";
        for (int i = 0; i < posFigura1; i++) cout << " ";
        cout << "[-----]" << endl;
       cout << "         ";
        for (int i = 0; i < posFigura1; i++) cout << " ";
        cout << "[-o----o-]" << endl; 
        cout << "----------------------------------------- | META |" << endl;


  
         cout << "Pista 2: ";
        for (int i = 0; i < posFigura2; i++) cout << " ";
        cout << "[-----]" << endl;
       cout << "         ";
        for (int i = 0; i < posFigura2; i++) cout << " ";
        cout << "[-o----o-]" << endl;

        cout << "----------------------------------------- | META |" << endl;


       Sleep(150);

    }

    cout << "\n=========================================" << endl;
    if (posFigura1 >= META && posFigura2 >= META) {
        cout << " ¡Es un maldito empate cljo!" << endl;
    } else if (posFigura1 >= META) {
        cout << " ¡Ha ganado el bus 1!" << endl;
    } else {
        cout << " ¡Ha ganado el bus 2!" << endl;
    }
    cout << "=================sexooooo================" << endl;

    return 0;
}
