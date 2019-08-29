#include<iostream>
#include<cstdlib>
using namespace std;

int ax =0,res=0,cont=0,numero=0;
int bin_arr[15]; //defines an array to store the bin number after processed
int *ptr;
void binario(int *numero){
    while(*numero/2>=1){ //reduces number to its minimun
        ax =*numero/2;
        res = *numero%2; //evaluates the 1 and 0s in the number
        bin_arr[cont]=res;//saves 1s and 0s in array
        *numero = ax; //updates value after operation
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
        ax =0,res=0,cont=0;
    }
    while(numero !=0);

}
