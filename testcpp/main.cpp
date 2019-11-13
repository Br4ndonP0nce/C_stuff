#include <iostream>
#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int temporal; temporal = a; a = b; b = temporal;
}
int main(){
    int c = 5; int d = 7;
    cout <<"Antes" <<endl <<"c: " <<c <<endl <<"d: " <<d <<endl; swap(c, d);
    cout <<"Después" <<endl <<"c: " <<c <<endl <<"d: " <<d <<endl;
    return 0;








}