#include "application.h"

int main()
{
    Application app;

    app.onButtonCopyClicked();
    app.onButtonCutClicked();
    app.onButtonPasteClicked();

    return 0;
}
