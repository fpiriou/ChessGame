#pragma once
#include "GUI/IMouse.h"
#include <string>

class IGuiFacade
{
public:
    virtual ~IGuiFacade() {}
    virtual void createWindow(std::string title) = 0;
    virtual bool isMainWindowOpen() = 0;
    virtual void clear() = 0;
    virtual void draw() = 0;
    virtual void checkCloseRequest() = 0;
    virtual IMouse* getMouse() = 0;
};