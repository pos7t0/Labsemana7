#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if(n==1){
        return 1;
    }else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){

    int num=1;
    do{
        if(num<0){
            cout << "Valor erroneo" << endl;
        }
        if(num>45){
            system("cls");
            cout << "\t***ERROR***" << endl;
            cout << "El int no aguanta desde el numero 46 hacia" << endl;
            cout << "adelante de la tabla de Fibonacci" << endl;
        }
        cout << "Ingresa un numero entero positivo: ";
        cin >> num;
    }while(num<0 || num>45);
    cout << "El numero de fibonacci de " << num << " es " << fibonacci(num)  << endl;     
    return 0;
}