#ifndef CELLSTATE_H
#define CELLSTATE_H

class CellGenom;

class Cell
{
public:
    Cell(const CellGenom *genom);
    ~Cell() = default;

    Cell(const Cell & cell) = default;
    Cell(Cell && cell) = default;

    Cell & operator = (const Cell & cell) = default;
    Cell & operator = (Cell && cell) = default;

public:
    Cell * divide();

    const CellGenom *getCellGenom() const;
    void setCellGenom(const CellGenom *value);

private:
    const CellGenom * cellGenom;
};

#endif // CELLSTATE_H
