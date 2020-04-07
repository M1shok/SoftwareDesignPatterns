#include "panel.h"
#include "button.h"

int main()
{
    Panel parentPanel;
    Button button(&parentPanel);
    Panel childPanel(&button);

    parentPanel.handleEvent();
    button.handleEvent();
    childPanel.handleEvent();
    return 0;
}
