#include <iostream>
#include <string>


using namespace std;

typedef struct numeros{
    int numero;
    numeros* next;
}Num;

Num* create_numeros(int num){
   Num *newnum=(Num*)malloc(sizeof(Num));
   newnum->numero=num;
   newnum->next=NULL;
   return newnum;
}
void agregar_numeros(Num** head,Num* newnum){
    if(*head==NULL){
        *head=newnum;
    }else{
        Num *current= *head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=newnum;
    }
}
void calcular_num(Num *head){
    Num *current= head;
    int i=1,suma=0,producto=1;
    float promedio;
    while(current!=NULL){
        cout << "(" << i << ") Numero: " << current->numero <<endl;
        suma+=current->numero;
        producto*=current->numero;
        i++;
        current=current->next;
    }
    promedio=(float)suma/(i-1);
    cout << "la suma entre todos lo numeros de la lista es: " << suma << endl;
    cout << "el producto entre todos lo numeros de la lista es: " << producto << endl;
    cout << "el promedio entre todos lo numeros de la lista es: " << promedio << endl;
}

int main(){
    int option=1;
    int num;
    Num *List_Num=NULL;
    Num *newnum;
    while(option==1){
        cout << "ingrese un numero a la lista: ";
        cin >> num;
        newnum=create_numeros(num);
        agregar_numeros(&List_Num,newnum);
        cout << "desea agregar otro numero??:" << endl;
        cout << "[1] si     [otro numero] NO" << endl;
        cin >> option;
    }
    calcular_num(List_Num);
    

    return 0;
}