#ifndef GUIFACTORY_H
#define GUIFACTORY_H

#include "abstractbutton.h"
#include "abstractlabel.h"

class GuiFactory
{
public:
    GuiFactory() = default;
    virtual ~GuiFactory() = default;

    GuiFactory(const GuiFactory & gf) = default;
    GuiFactory(GuiFactory & gf) = default;

    GuiFactory & operator = (const GuiFactory & gf) = default;
    GuiFactory & operator = (GuiFactory && gf) = default;

public:
    virtual AbstractButton * createButton() const = 0;
    virtual AbstractLabel * createLabel() const = 0;
};

#endif // GUIFACTORY_H
