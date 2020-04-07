#ifndef COMMONCELLSTATE_H
#define COMMONCELLSTATE_H

#include <string>

class CellGenom
{
public:
    CellGenom(const std::string & genom);
    ~CellGenom() = default;

    CellGenom(const CellGenom & ccs) = default;
    CellGenom(CellGenom && ccs) = default;

    CellGenom & operator = (const CellGenom & ccs) = delete;
    CellGenom & operator = (CellGenom && ccs) = delete;

    std::string genom() const;

private:
    const std::string m_genom;
};

#endif // COMMONCELLSTATE_H
