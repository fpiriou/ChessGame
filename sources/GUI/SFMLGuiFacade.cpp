#include "GUI/SFMLGuiFacade.h"
#include <SFML/Graphics.hpp>
#include <string>

SFMLGuiFacade::SFMLGuiFacade() :
myWindow(nullptr)
{

}

SFMLGuiFacade::~SFMLGuiFacade() 
{
    if(myWindow)
        delete myWindow;
}

void SFMLGuiFacade::createWindow(std::string title)
{
    if(myWindow)
        delete myWindow;

    myWindow = new sf::RenderWindow(sf::VideoMode(1920, 1080), title.c_str());
}

bool SFMLGuiFacade::isMainWindowOpen()
{
    return myWindow->isOpen();
}

void SFMLGuiFacade::clear()
{
    myWindow->clear();
}

void SFMLGuiFacade::draw()
{
    //myWindow->draw();
    myWindow->display();
}

void SFMLGuiFacade::checkCloseRequest()
{
    sf::Event event;
        while (myWindow->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                myWindow->close();
        }
}