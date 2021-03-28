#pragma once
#include <SFML/Graphics.hpp>

class Button : public sf::Drawable
{
public:
    Button(sf::Texture& buttonTexture, sf::Vector2f& buttonDimension);
    ~Button() override;
    bool isClicked();
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

private:
    sf::Texture& myButtonTexture;
    sf::Sprite myButton;
    sf::Text myTextButton;
    sf::Vector2f myButtonDimension;
};