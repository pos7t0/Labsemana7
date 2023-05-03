#include <iostream>
#include <string>


using namespace std;

void consultarValorUsuario(){
    int valorUsuario;
    string stringusuario;
    cout << "Ingresar Entero: ";
    cin >> valorUsuario;
    getchar();
    cout << "Ingresar string: ";
    getline(cin,stringusuario);
    cout << "Entero: "<< valorUsuario << " String: "<< stringusuario << endl;
}
void calcularpromedio(){
    int num1;
    int num2;
    int num3;
    float prom;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    prom=(float)(num1+num2+num3)/3;
    cout << "El promedio de los tres numeros ingresados es: "<< prom << endl;
}
int contarletras(string a){
    return a.length();
}

int main(){
    
    string a;
    //ejercicio 1 *_*
    //consultarValorUsuario();
    //ejercicio 2 *_*
    //calcularpromedio();
    //ejercicio 3 *_*
    //cout << "Ingresar string: ";
    //getline(cin,a);
    //cout << "cantidad de letras ingresadas: "<< contarletras(a) << endl;
    
    

    return 0;
}

