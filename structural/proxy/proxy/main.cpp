#include "proxydatabaseworker.h"
#include "mysqldatabaseworker.h"
#include <iostream>

void demonstrateDatabaseWorker(DatabaseWorker * worker)
{
    worker->connectToDatabase();
    std::string selectingResult = worker->select(0);
    std::cout << "Selected: " << selectingResult << std::endl;
    worker->remove(0);
}

int main()
{
    DatabaseWorker * worker = new MySqlDatabaseWorker;
    demonstrateDatabaseWorker(worker);
    delete worker;

    worker = new ProxyDatabaseWorker;
    demonstrateDatabaseWorker(worker);
    delete worker;
    return 0;
}
