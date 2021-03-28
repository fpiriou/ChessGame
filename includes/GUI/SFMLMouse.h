#pragma once
#include "GUI/IMouse.h"

class SFMLMouse : public IMouse
{
public:
    SFMLMouse();
    bool isButtonPressed(int num) override;
    int getX() override;
    int getY() override;

private:
    int myX;
    int myY;
};