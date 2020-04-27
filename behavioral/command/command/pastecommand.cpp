#include "pastecommand.h"
#include "application.h"
#include <iostream>

PasteCommand::PasteCommand(Application &app, Editor &editor)
    : Command(app, editor)
{

}

void PasteCommand::execute()
{
    std::cout << "Paste command exucution:\n";
    std::cout << "Before execution:\n"
                 "App clipboard: " + m_application.clipboard() + "\n"
                 "Editor text: " + m_editor.text() + "\n";

    m_editor.setText(m_application.clipboard());

    std::cout << "After execution:\n"
                 "App clipboard: " + m_application.clipboard() + "\n"
                 "Editor text: " + m_editor.text() + "\n\n";
}
