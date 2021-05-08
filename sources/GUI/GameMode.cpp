#include "GUI/IGameMode.h"
#include "core/Main.h"

void IGameMode::setGameMode(IGameMode* newMode)
{
    myParent->setGameMode(newMode);
}

void IGameMode::setParent(Main* newParent)
{
    myParent = newParent;
}

 void IGameMode::setGui(IGuiFacade* newGui)
 {
     myGui = newGui;
 }