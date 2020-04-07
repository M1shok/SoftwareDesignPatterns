#include "mysqldatabaseworker.h"

void MySqlDatabaseWorker::connectToDatabase()
{
    // connecting to db
}

void MySqlDatabaseWorker::remove(uint32_t index)
{
    (void) index;
    // removing the record
}

std::string MySqlDatabaseWorker::select(uint32_t index)
{
    (void) index;
    std::string name = "Selected name";
    // selecting
    return name;
}
