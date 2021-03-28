#include "GUI/SFMLMouse.h"
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

SFMLMouse::SFMLMouse() :
myX(0),
myY(0)
{

}

bool SFMLMouse::isButtonPressed(int num)
{
    bool isButtonPressed = false;

    if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        isButtonPressed = true;
    }

    return isButtonPressed;
}

int SFMLMouse::getX()
{
    sf::Vector2i globalPosition = sf::Mouse::getPosition();
    myX = globalPosition.x;
    return myX;
}

int SFMLMouse::getY()
{
    sf::Vector2i globalPosition = sf::Mouse::getPosition();
    myY = globalPosition.y;
    return myY;
}