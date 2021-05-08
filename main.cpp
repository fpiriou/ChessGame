#include <iostream>
#include <string>
#include "GUI/PlayGameMode.h"
#include "GUI/WelcomeGameMode.h"

#include "core/Main.h"

int main(int argc, char** argv) 
{
    Main myApp;
    WelcomeGameMode* welcome = new WelcomeGameMode();

    myApp.setGameMode(welcome);
    myApp.run();

    return 0;
}
