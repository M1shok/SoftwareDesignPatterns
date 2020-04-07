#ifndef WIDGET_H
#define WIDGET_H


class Widget
{
public:
    Widget(Widget * parent = nullptr);
    virtual ~Widget() = default;

    Widget(const Widget & widget) = default;
    Widget(Widget && widget) =  default;

    Widget & operator = (const Widget & widget) = default;
    Widget & operator = (Widget && widget) =  default;

public:
    virtual void handleEvent() = 0;

protected:
    Widget * m_parent;
};

#endif // WIDGET_H
