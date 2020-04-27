#include "cutcommand.h"
#include <iostream>

#include "application.h"

CutCommand::CutCommand(Application &app, Editor &editor)
    : Command(app, editor)
{

}

void CutCommand::execute()
{
    std::cout << "Cut command exucution:\n";
    std::cout << "Before execution:\n"
                 "App clipboard: " + m_application.clipboard() + "\n"
                 "Editor text: " + m_editor.text() + "\n";

    m_application.setClipboard(m_editor.text());
    m_editor.setText("");

    std::cout << "After execution:\n"
                 "App clipboard: " + m_application.clipboard() + "\n"
                 "Editor text: " + m_editor.text() + "\n\n";
}
