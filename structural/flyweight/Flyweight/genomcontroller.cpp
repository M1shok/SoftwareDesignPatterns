#include "genomcontroller.h"

CellGenom *GenomController::createGenom(const std::string & genom)
{
    CellGenom * commonCellState;
    auto it = m_genoms.find(genom);

    if (it == m_genoms.end())
    {
        commonCellState = new CellGenom(genom);
        m_genoms[genom] = commonCellState;
    }
    else
    {
        commonCellState = it->second;
    }

    return commonCellState;
}
