#pragma once
#include "IGameMode.h"

class IGuiFacade;
class IMouse;

class PlayGameMode : public IGameMode
{
public:
    PlayGameMode();
    ~PlayGameMode();
    void init() override;
    void handleInputs() override;
    void update() override;
    void render() override;
    void setGuiFacade(IGuiFacade* newGui);
private:

};