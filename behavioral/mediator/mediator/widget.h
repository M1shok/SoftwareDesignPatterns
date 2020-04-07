#ifndef WIDGET_H
#define WIDGET_H

class Mediator;

class Widget
{
public:
    Widget(Mediator * mediator = nullptr);
    virtual ~Widget() = default;

    Widget(const Widget & widget) = default;
    Widget(Widget && widget) =  default;

    Widget & operator = (const Widget & widget) = default;
    Widget & operator = (Widget && widget) =  default;

public:
    virtual void handleEvent();

protected:
    Mediator * m_mediator;

};

#endif // WIDGET_H
