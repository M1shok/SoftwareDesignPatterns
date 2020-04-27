#ifndef COPYCOMMAND_H
#define COPYCOMMAND_H

#include "command.h"

class CopyCommand : public Command
{
public:
    CopyCommand(Application & app, Editor & editor);
    ~CopyCommand() override = default;

    CopyCommand(const CopyCommand & c) = default;
    CopyCommand(CopyCommand && c) = default;

    CopyCommand & operator =(const CopyCommand & c) = delete;
    CopyCommand & operator =(CopyCommand && c) = delete;

public:
    void execute() override;
};

#endif // COPYCOMMAND_H
