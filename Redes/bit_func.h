#ifndef REDES_BIT_FUNC_H
#define REDES_BIT_FUNC_H
unsigned char icmpv4[50],translate[50];
char *ptr=NULL;
int count_ = 0,trans_b=0;
void printbincharpad(char c){
    for (int i = 7; i >= 0; --i)
    {
        icmpv4[count_]=putchar((c & (1 << i)) ? '1' : '0');
        count_++;

    }
    putchar('\n');
}
void nonprintbincharpad(char c){
    for (int i = 7; i >= 0; --i)
    {
        icmpv4[count_]=(c & (1 << i)) ? '1' : '0';
        count_++;

    }

}
void icmpv4binchar(char c){
    for (int i = 7; i >= 0; --i)
    {
        translate[trans_b]=putchar((c & (1 << i)) ? '1' : '0');
        trans_b++;

    }
    putchar('\n');
}
void binarray(char c){
    for(int i=8;i!=0;i--){


    }
}


#endif //REDES_BIT_FUNC_H
