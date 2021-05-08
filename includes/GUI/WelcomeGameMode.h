#pragma once
#include "GUI/IGameMode.h"

class WelcomeGameMode : public IGameMode
{
public:
    WelcomeGameMode();
    ~WelcomeGameMode();
    void init() override;
    void handleInputs() override;
    void update() override;
    void render() override;
private:
    
};