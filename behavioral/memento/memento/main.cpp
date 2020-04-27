#include "database.h"
#include <iostream>

void describeDatabase(const Database & database)
{
    std::cout << "Current database tables: ";
    for (const std::string & tableName: database.tables()) {
        std::cout << tableName << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    std::cout << "Memento example" << std::endl;

    Database database;
    database.createTable("user");
    database.createTable("messages");
    database.createTable("links");

    Database::Snapshot snapshot = database.createSnapshot();

    describeDatabase(database);

    database.dropTable("user");
    database.dropTable("messages");

    std::cout << "Database state before restore:\n";
    describeDatabase(database);

    database.restore(snapshot);
    std::cout << "Database state after restore:\n";
    describeDatabase(database);



    return 0;
}
