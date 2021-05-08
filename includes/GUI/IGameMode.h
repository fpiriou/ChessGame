#pragma once

class IGuiFacade;
class IMouse;
class Main;

// This class becomes an abstract class
class IGameMode
{
public:
    virtual void init() = 0;
    virtual void handleInputs() = 0;
    virtual void update() = 0;
    virtual void render() = 0;
    void setGameMode(IGameMode* newMode);
    void setParent(Main* newParent);
    void setGui(IGuiFacade* newGui);

protected:
    IGuiFacade* myGui;
    IMouse* myMouse;
private:
    Main* myParent;
};