#include "GUI/WelcomeGameMode.h"
#include "GUI/PlayGameMode.h"
#include "GUI/SFMLGuiFacade.h"
#include "GUI/SFMLMouse.h"
#include <string>
#include <iostream>



WelcomeGameMode::WelcomeGameMode()
{

}

WelcomeGameMode::~WelcomeGameMode()
{

}

void WelcomeGameMode::init()
{
    std::string windowName = "ChessGame - Welcome";

    myMouse = myGui->getMouse();

    myGui->createWindow(windowName);
}

void WelcomeGameMode::handleInputs()
{

}

void WelcomeGameMode::update()
{
    
}

void WelcomeGameMode::render()
{
    while (myGui->isMainWindowOpen())
    { 
        myGui->checkCloseRequest();
        if(myMouse->isButtonPressed(0))
        {
            std::cout << "Go to Play Game Mode" << std::endl;
            setGameMode(new PlayGameMode());
        }
        myGui->clear();
        myGui->draw();
    }
}