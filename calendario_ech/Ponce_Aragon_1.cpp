#include <iostream>
#include <ctime>
#include <string>
using namespace std;
const int YR_SIZE =12;
const int V_SIZE = 4,H_SIZE = 8;
const int V_FEB = 4,H_FEB =7;
const int V_30 = 5,H_30 = 6;

int main() {

    int i=1,j=0,e=0,month=0,day=1,year[YR_SIZE];
    int arr[V_SIZE][H_SIZE];
    for(i=0;i<YR_SIZE;i++){

        for(j=0;j<V_SIZE;j++) {
            for (e = 0; e < H_SIZE; e++) {
                arr[j][e]=day;
                year[i]=arr[j][e];
                day++;

            }
        }

    if(i==2){
        day =1;
        for(j=0;j<V_FEB;j++){
            for(e=0;e<H_FEB;e++) {
                arr[j][e] = day;
                year[i] = arr[][];

            }

            }
    }
    //endif
    else if(i==4||i==6||i==9||i==11){
        day = 1;
        for(j=0;j<V_30;j++){
            for(e=0;e<H_30;e++) {
                arr[j][e] = day;
                year[i] = arr[j][e];

            }

        }




    }
    }
}