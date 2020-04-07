#include "cell.h"
#include "genomcontroller.h"
#include <memory>
#include <iostream>

int main()
{
    GenomController genomController;
    std::shared_ptr<Cell> cell(new Cell(genomController.createGenom("Starting genom.")));

    for (unsigned i = 0; i < 100; ++i)
    {
        cell = std::shared_ptr<Cell>(cell->divide());
        std::cout << cell->getCellGenom()->genom() << std::endl;
    }

    return 0;
}
