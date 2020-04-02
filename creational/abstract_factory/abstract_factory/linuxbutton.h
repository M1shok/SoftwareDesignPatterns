#ifndef LINUXBUTTON_H
#define LINUXBUTTON_H

#include "abstractbutton.h"

class LinuxButton : public AbstractButton
{
public:
    LinuxButton() = default;
    ~LinuxButton() override = default;

    LinuxButton(const LinuxButton & lb) = default;
    LinuxButton(LinuxButton && lb) = default;

    LinuxButton & operator = (const LinuxButton & lb) = default;
    LinuxButton & operator = (LinuxButton && lb) = default;

public:
    void push() override;
};

#endif // LINUXBUTTON_H
