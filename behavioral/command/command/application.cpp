#include "application.h"
#include "copycommand.h"
#include "cutcommand.h"
#include "pastecommand.h"

Application::Application()
{
    m_editor.setText("Enter any text right here...");
}

void Application::onButtonCopyClicked()
{
    CopyCommand command(*this, m_editor);
    execute(command);
}

void Application::onButtonPasteClicked()
{
    PasteCommand command(*this, m_editor);
    execute(command);
}

void Application::onButtonCutClicked()
{
    CutCommand command(*this, m_editor);
    execute(command);
}

std::string Application::clipboard() const
{
    return m_clipboard;
}

void Application::setClipboard(const std::string &clipboard)
{
    m_clipboard = clipboard;
}

void Application::execute(Command & command)
{
    command.execute();
}
