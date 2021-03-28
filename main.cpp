#include "GUI/SFMLGuiFacade.h"
//#include "GUI/Button.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) 
{
    std::string windowName = "ChessGame";

    IGuiFacade* gui = new SFMLGuiFacade(); 

    gui->createWindow(windowName);

    while (gui->isMainWindowOpen())
    {
        gui->checkCloseRequest();
        gui->clear();
        gui->draw();
    }

    return 0;
}
