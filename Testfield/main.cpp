#include <iostream>
#include <string>
using namespace std;
int compareFunction(string usr, string usr2)
{
    // comparing both using inbuilt function
    int x = usr.compare(usr2);
    if(x == 0){
        return x;
    }
    /*if (x != 0)
        cout << cad1 << " is not equal to "
             << cad2 << endl;
    if (x > 0)
        cout << cad1 << " is greater than "
             << cad2 << endl;
    else
        cout << cad2 << " is greater than "
             << cad1 << endl;*/
}
int main(){
    string usr,usr2;
    getline(cin,usr);
    getline(cin,usr2);
    compareFunction(usr,usr2);
    cout<<compareFunction(usr,usr2);
}