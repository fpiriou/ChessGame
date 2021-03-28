#pragma once
#include "GUI/IGuiFacade.h"

namespace sf
{
    class RenderWindow;
}

class SFMLGuiFacade : public IGuiFacade
{
public:
    SFMLGuiFacade();
    ~SFMLGuiFacade() override;
    void createWindow(std::string title) override;
    bool isMainWindowOpen() override;
    void clear() override;
    void draw() override;
    void checkCloseRequest() override;

private:
    sf::RenderWindow* myWindow;
};