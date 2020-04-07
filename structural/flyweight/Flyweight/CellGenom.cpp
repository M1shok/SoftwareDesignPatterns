#include "CellGenom.h"

CellGenom::CellGenom(const std::string &genom)
    : m_genom(genom)
{

}

std::string CellGenom::genom() const
{
    return m_genom;
}
