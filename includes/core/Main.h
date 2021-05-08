#pragma once

class IGuiFacade;
class IGameMode;

class Main
{
public: 
    Main();
    ~Main();
    void run();
    void setGUIFacade(IGuiFacade* gui);
private:
    IGuiFacade* myGui;
    IGameMode* myMode;
};