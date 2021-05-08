#pragma once

class IGameMode
{
public:
    virtual void init() = 0;
    virtual void handleInputs() = 0;
    virtual void update() = 0;
    virtual void render() = 0;
};