#ifndef PANEL_H
#define PANEL_H

#include "widget.h"

class Panel : public Widget
{
public:
    Panel(Mediator * mediator = nullptr);
    ~Panel() override = default;

    Panel(const Panel & Panel) = default;
    Panel(Panel && Panel) =  default;

    Panel & operator = (const Panel & Panel) = default;
    Panel & operator = (Panel && Panel) =  default;

public:
    void handleEvent() override;
};

#endif // PANEL_H
