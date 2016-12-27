#include <iostream>
#include <list>
#include <stdlib.h>
#include <math.h>
#include <sys/resource.h>

using namespace std;

int sumar(){
    int i;
    int x;
    
    cout << "Inserte primer número: \n";
    cin >> i;
    
    cout << "Inserte segundo número: \n";
    cin >> x;
    
    return i + x;
}

int restar(){
    int i;
    int x;
    
    cout << "Inserte primer número: \n";
    cin >> i;
    
    cout << "Inserte segundo número: \n";
    cin >> x;
    
    return i - x;
}

int main() {

    int op;
    int resultado = 0;
    do {
        cout << "Inserte opción a realizar \n";
        cout << "(1) Sumar dos números \n";
        cout << "(2) Restar dos números \n";
        cout << "(0) Salir \n";
        cin >> op;
        
        switch (op)                      
        {
            case 1:  resultado = sumar();   
                            
                    break;                  
            case 2:  resultado = restar();
                    
                    break;
        }
        
        if(op != 0){
            cout << "Resultado: " << resultado << "\n\n\n";
        }
    }while(op != 0);

}