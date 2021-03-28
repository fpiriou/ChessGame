#pragma once
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

class MainScreen : public sf::Drawable
{
public:
    MainScreen(sf::Texture& buttonTexture);
    ~MainScreen() override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
protected:
    
private:
    sf::Texture& myButtonTexture;
};