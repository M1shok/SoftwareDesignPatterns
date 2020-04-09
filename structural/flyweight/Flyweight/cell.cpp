#include "cell.h"
#include "genomcontroller.h"
#include <random>

Cell::Cell(const CellGenom * genom)
    : cellGenom(genom)
{

}

Cell *Cell::divide()
{
    static std::random_device rd;
    static std::mt19937 generator(rd());
    static std::uniform_int_distribution<int> dist(0, 9);

    std::string newGenom = cellGenom->genom();
    if (dist(generator) > 8)
    {
        char mutation = 'a' + dist(generator);
        newGenom += mutation;
    }

    GenomController gc;
    return new Cell(gc.createGenom(newGenom));
}

const CellGenom *Cell::getCellGenom() const
{
    return cellGenom;
}

void Cell::setCellGenom(const CellGenom *value)
{
    cellGenom = value;
}
