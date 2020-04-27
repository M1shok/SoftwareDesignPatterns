#ifndef CUTCOMMAND_H
#define CUTCOMMAND_H

#include "command.h"

class CutCommand : public Command
{
public:
    CutCommand(Application & app, Editor & editor);
    ~CutCommand() override = default;

    CutCommand(const CutCommand & c) = default;
    CutCommand(CutCommand && c) = default;

    CutCommand & operator =(const CutCommand & c) = delete;
    CutCommand & operator =(CutCommand && c) = delete;

public:
    void execute() override;
};

#endif // CUTCOMMAND_H
