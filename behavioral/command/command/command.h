#ifndef COMMAND_H
#define COMMAND_H

class Editor;
class Application;

#include <string>

class Command
{
public:
    Command(Application & app, Editor & editor);
    virtual ~Command() = default;

    Command(const Command & c) = default;
    Command(Command && c) = default;

    Command & operator =(const Command & c) = delete;
    Command & operator =(Command && c) = delete;

    virtual void saveBackup();
    virtual void undo();
    virtual void execute() = 0;

protected:
    Application & m_application;
    Editor & m_editor;
    std::string m_backupedText;
};

#endif // COMMAND_H
