#include <iostream>
using namespace std;

bool palindrome(string a) {
    if (a.length() <= 1) {
        return true;
    } 
    if(a[0]==a[a.length()-1]){
        return palindrome(a.substr(1,a.length()-2));
    }
    return false;
}

int main(){

    string palabra;
    string palabraSE;
    int j=0;
    cout << "Ingresar un string palindrome: ";
    getline(cin,palabra);
    for(int i=0;i<palabra.length();i++){
        if(palabra[i]!=' '){
            palabraSE[j]=palabra[i];
            j++;
        }
    }  
    if(palindrome(palabraSE)){
        cout << "La palabra " << palabra << " es palindrome"<< endl;
    }else{
        cout << "La palabra " << palabra << " no es palindrome"<< endl;
    }
    return 0;
}