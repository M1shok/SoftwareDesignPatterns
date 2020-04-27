#ifndef PASTECOMMAND_H
#define PASTECOMMAND_H

#include "command.h"



class PasteCommand : public Command
{
public:
    PasteCommand(Application & app, Editor & editor);
    ~PasteCommand() override = default;

    PasteCommand(const PasteCommand & c) = default;
    PasteCommand(PasteCommand && c) = default;

    PasteCommand & operator =(const PasteCommand & c) = delete;
    PasteCommand & operator =(PasteCommand && c) = delete;

public:
    void execute() override;
};

#endif // PASTECOMMAND_H
