#ifndef DIALOG_H
#define DIALOG_H

#include "mediator.h"
#include "button.h"
#include "panel.h"

class Dialog : public Mediator
{
public:
    Dialog();
    ~Dialog() override = default;

    Dialog(const Dialog & d) = default;
    Dialog(Dialog && d) = default;

    Dialog & operator = (const Dialog & d) = default;
    Dialog & operator = (Dialog && d) = default;

public:
    void notify(Widget *widget, std::string event) override;
    void confirm();

private:
    Button button;
    Panel panel;
};

#endif // DIALOG_H
