#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main(){

    int num=1;
    do{
        if(num<1){
            cout << "Valor erroneo" << endl;
        }
        cout << "Ingresa un numero entero positivo: ";
        cin >> num;
    }while(num<1);
    cout << "El factorial de " << num << " es " << factorial(num)  << endl;     
    return 0;
}