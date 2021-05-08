#include "core/Main.h"
#include "GUI/PlayGameMode.h"
#include "GUI/SFMLGuiFacade.h"
#include <memory>

Main::Main()
{
    myGui = new SFMLGuiFacade();
    myMode = new PlayGameMode(myGui);
}

Main::~Main()
{
    if(myMode)
        delete myMode;

    if(myGui)
        delete myGui;
}

void Main::run()
{
    if(myMode)
    {
        myMode->init();
        myMode->handleInputs();
        myMode->update();
        myMode->render();
    }
}

void Main::setGUIFacade(IGuiFacade* gui)
{
    myGui = gui;
}