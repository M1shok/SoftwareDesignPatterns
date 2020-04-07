#ifndef BUTTON_H
#define BUTTON_H

#include "widget.h"

class Button : public Widget
{
public:
    Button(Widget * parent = nullptr);
    ~Button() override = default;

    Button(const Button & Button) = default;
    Button(Button && Button) =  default;

    Button & operator = (const Button & Button) = default;
    Button & operator = (Button && Button) =  default;

public:
    void handleEvent() override;
};

#endif // BUTTON_H
