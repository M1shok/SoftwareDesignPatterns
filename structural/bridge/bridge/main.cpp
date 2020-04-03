#include <iostream>
#include <remotecontroller.h>
#include <radio.h>
using namespace std;

int main()
{
    Radio radio;
    RemoteController remoteController(&radio);

    std::cout << radio.status() << std::endl;

    remoteController.volumeUp();
    remoteController.togglePower();
    remoteController.volumeUp();

    std::cout << radio.status() << std::endl;

    return 0;
}
