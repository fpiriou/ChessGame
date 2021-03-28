#pragma once

class IMouse
{
public:
    virtual bool isButtonPressed(int num) = 0;
    virtual int getX() = 0;
    virtual int getY() = 0;
};