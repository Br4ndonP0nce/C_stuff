#include <iostream>
using namespace std;

int *ptr1,*ptr2;
int suma,sel,num,num2;
int *fibonacci(int *num);
int main() {
    cout<<"cuantos desea?"<<endl;
    cin>>sel;
    ptr2=&num;
    for(num =0;num <sel;num++){
        cout<<" "<<*fibonacci(ptr2);
    }
    system("pause");
    return 0;

}
int *fibonacci(int *num){
    int *r = (int*)malloc(sizeof(int));
    //return r;
    if(*num ==0){

       *r =0+num2;
    }
    if(*num == 1){
        cout<<" 1";
        num2=1;

        *r=0+num2;
    }
    if(*num !=0 && *num != 1){
        *r = suma;
        *r=*r+num2;
        num2=*r-num2;
        suma =*r;
    }
    suma=*r;
    return r;
}