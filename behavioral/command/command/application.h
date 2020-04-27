#ifndef APPLICATION_H
#define APPLICATION_H

#include "command.h"
#include "editor.h"

class Application
{
public:
    Application();
    ~Application() = default;

    Application(const Application & app) = default;
    Application(Application && app) = default;

    Application & operator = (const Application & app) = default;
    Application & operator = (Application && app) = default;

public:
    void onButtonCopyClicked();
    void onButtonPasteClicked();
    void onButtonCutClicked();


    std::string clipboard() const;
    void setClipboard(const std::string &clipboard);

private:
    void execute(Command &command);

private:
    Editor m_editor;
    std::string m_clipboard;
};

#endif // APPLICATION_H
