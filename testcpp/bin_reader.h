#ifndef TESTCPP_BIN_READER_H
#define TESTCPP_BIN_READER_H
#include<stdio.h>
unsigned char icmpv4[50],translate[50],ipv6_bin[1000];
char *ptr=NULL;
int count_ = 0,trans_b=0,ip6=0;
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
void bin_bin(char c){
    for (int i = 7; i >= 0; --i)
    {
        ipv6_bin[ip6]=(c & (1 << i)) ? '1' : '0';
        ip6++;

    }
    putchar('\n');
}
#endif //TESTCPP_BIN_READER_H
