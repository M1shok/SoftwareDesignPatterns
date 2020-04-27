#include "command.h"
#include "application.h"

Command::Command(Application &app, Editor &editor)
    : m_application(app),
      m_editor(editor)
{

}

void Command::saveBackup()
{
    m_backupedText = m_editor.text();
}

void Command::undo()
{
    m_editor.setText(m_backupedText);
}
