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
    void setGameMode(IGameMode* newMode);
private:
    IGuiFacade* myGui;
    IGameMode* myMode;
};