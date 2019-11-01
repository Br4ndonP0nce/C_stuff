#include <iostream>
//metodos de clasificacion u ordenamiento
//shell sort metodo de ordenamiento en sitio, sepuede interpretar como un intercambio(burbuja) u ordenamiento por insercion
using namespace std;
int a[6]= {13,7,3,15,9,2},brecha,n=6,temp,j,menor;
void read(){
    for(int o=0;o<6;o++){
        cout<<a[o];
    }
}
void selection(){
    for(int i=0;i<=n-2;i++){
        menor=i;
        for(int j=i+1;j<n-1;j++){
            if(a[j]<a[menor]){
                menor=j;
            }
        }
    }
}

void shell(){
    brecha=n/2;
    while(brecha>0){
        for(int i=brecha;i<n-1;i++){
            temp =a[i];
            j=i;
            while(j>=brecha&&a[j-brecha]>temp){
                a[j]=a[j-brecha];
                j=j-brecha;
                a[j]=temp;
                brecha=brecha/2;
            }
        }
    }
    read();
}
int main() {
selection();

}