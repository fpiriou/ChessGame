#include "GUI/PlayGameMode.h"
#include <string>
#include "GUI/SFMLGuiFacade.h"
#include "GUI/SFMLMouse.h"
#include <iostream>

PlayGameMode::PlayGameMode()
{

}

PlayGameMode::~PlayGameMode()
{

}

void PlayGameMode::init()
{
    std::string windowName = "ChessGame - PlayGame";

    myMouse = myGui->getMouse();

    myGui->createWindow(windowName);
}

void PlayGameMode::handleInputs()
{

}

void PlayGameMode::update()
{
    
}

void PlayGameMode::render()
{
    while (myGui->isMainWindowOpen())
    { 
        myGui->checkCloseRequest();
        if(myMouse->isButtonPressed(0))
            std::cout << "X pos : " << myMouse->getX() << " Y pos : " << myMouse->getY()<< std::endl;
        myGui->clear();
        myGui->draw();
    }
}

void PlayGameMode::setGuiFacade(IGuiFacade* newGui)
{
    myGui = newGui;
}