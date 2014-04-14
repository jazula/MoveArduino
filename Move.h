/*
Jorg de Bont
2013
Move functions for arduino servo full rotations
*/
#ifndef Move_h
#define Move_h
#include <Servo.h>
#include <Arduino.h>



class Move
{
     public:
        Move();
        void connectServos(int L, int R);
        void standStill();
        void forward();
        void backwards();
        void softForward();
        void softBackwards();
        void leftAs();
        void rightAs();
        void goLeft();
        void goRight();

    private:
        int Lstreak;
        int Rstreak;
        Servo left;
        Servo right;

};


#endif
