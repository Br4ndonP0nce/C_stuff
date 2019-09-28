#include <iostream>
#include <iostream>
using namespace std;
char test[20];
int count = 0;
void printbincharpad(char c){
    for (int i = 7; i >= 0; --i)
    {
        test[count]=putchar( (c & (1 << i)) ? '1' : '0' );
        count++;


    }
    putchar('\n');
}
void printbinchar(char character)
{
    char output[9];
    itoa(character, output, 2);
    printf("%s\n", output);
}

int main(){
    printbincharpad(10);
    printbinchar(10);
    for(int a=2;a<10;a++){
        cout<<test[a]<<" ";
    }
}