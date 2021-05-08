#include "GUI/SFMLGuiFacade.h"
//#include "GUI/Button.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) 
{
    std::string windowName = "ChessGame";

    IGuiFacade* gui = new SFMLGuiFacade(); 
    IMouse* mouse = gui->getMouse();

    gui->createWindow(windowName);

    while (gui->isMainWindowOpen())
    {
        gui->checkCloseRequest();
        if(mouse->isButtonPressed(0))
            std::cout << "X pos : " << mouse->getX() << " Y pos : " << mouse->getY()<< std::endl;  
        gui->clear();
        gui->draw();
    }

    return 0;
}
