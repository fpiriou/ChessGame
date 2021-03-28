#include "GUI/Button.h"


Button::Button(sf::Texture& buttonTexture, sf::Vector2f& buttonDimension) : 
sf::Drawable(),
myButtonTexture(buttonTexture),
myButtonDimension(buttonDimension)
{
    myButton.setTexture(myButtonTexture);
}
Button::~Button()
{

}

bool Button::isClicked()
{
    bool isClicked = false;

    return isClicked;
}

void Button::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(myButton,states);
}