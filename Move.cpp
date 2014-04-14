
#include <Arduino.h>
#include <Servo.h>
#include "Move.h"

Move::Move()
{
    Lstreak = 0;
    Rstreak = 0;
}

void Move::connectServos(int L, int R)
{
    left.attach(L);
    right.attach(R);
}

void Move::standStill()
{
    left.write(1500);
    right.write(1500);
}

void Move::forward()
{
    left.write(1700);
    right.write(1300);
}

void Move::backwards()
{
    left.write(1300);
    right.write(1700);
}

void Move::softForward()
{
    left.write(1550);
    right.write(1450);
}

void Move::softBackwards()
{
    left.write(1450);
    right.write(1550);
}

void Move::leftAs()
{
    left.write(1450);
    right.write(1450);
}

void Move::rightAs()
{
    left.write(1550);
    right.write(1550);
}

void Move::goRight()
{
    Lstreak = 0;
    if (Rstreak <3){
        left.write(1700);
        right.write(1535);
        Rstreak ++;
    }
    else{
        left.write(1565);
        right.write(1525);
    }
    delay(5);
}

void Move::goLeft()
{
    Rstreak = 0;
    if (Lstreak < 3){
        left.write(1535);//beetje sturen
        right.write(1300);
        Lstreak ++;
    }
    else{
        left.write(1475);//Kapot hard sturen
        right.write(1425);
    }
    delay(5);
}

