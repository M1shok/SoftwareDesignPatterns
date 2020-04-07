#ifndef GENOMCONTROLLER_H
#define GENOMCONTROLLER_H

#include <map>
#include "CellGenom.h"

class GenomController
{
public:
    GenomController() = default;
    ~GenomController() = default;

    GenomController(const GenomController & genom) = default;
    GenomController(GenomController && genom) = default;

    GenomController & operator = (const GenomController & genom) = default;
    GenomController & operator = (GenomController && genom) = default;

public:
    CellGenom * createGenom(const std::string &genom);

private:
    std::map<std::string, CellGenom * > m_genoms;
};

#endif // GENOMCONTROLLER_H
