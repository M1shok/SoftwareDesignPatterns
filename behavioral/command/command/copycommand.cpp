#include "copycommand.h"
#include "application.h"
#include <iostream>

CopyCommand::CopyCommand(Application &app, Editor &editor)
    : Command(app, editor)
{

}

void CopyCommand::execute()
{
    std::cout << "Copy command exucution:\n";
    std::cout << "Before execution:\n"
                 "App clipboard: " + m_application.clipboard() + "\n"
                 "Editor text: " + m_editor.text() + "\n";

    m_application.setClipboard(m_editor.text());

    std::cout << "After execution:\n"
                 "App clipboard: " + m_application.clipboard() + "\n"
                 "Editor text: " + m_editor.text() + "\n\n";
}
