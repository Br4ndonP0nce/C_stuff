#ifndef STICKMAN_FIGURITAS_H
#define STICKMAN_FIGURITAS_H
#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

class figuritas{
private:
    int count=0;
    int passengers;
    int x;
    int y;
public:
    void gotoxy(int x,int y);
    void plane();
    void stickwalk();
    void setPassengers(int val);
    int getPassengers();
    void setX(int X);
    int getX();
    void setY(int Y);
    int getY();


};

#endif //STICKMAN_FIGURITAS_H
