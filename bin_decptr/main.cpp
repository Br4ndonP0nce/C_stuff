#include<iostream>
#include<cstdlib>
using namespace std;

int ax =0,res=0,cont=0,numero=0;
int bin_arr[15];
int *ptr;
void dec(int *numero){
    while(*numero/2>=1){
        ax = *numero/2;
        res = *numero%2;
        bin_arr[cont]=res;
        *numero = ax;
        ++cont;
    }
    bin_arr[cont]=ax;

    for(cont;cont>=0;cont--){
        cout<<bin_arr[cont];
    }
}
int main(){
    do {
        cout << "Ingrese su numero en decimal" << endl;
        cin >> numero;
        ptr = &numero;
        binario(ptr);
        cout << "\n";
        system("pause");
    }
    while(numero !=0);
}