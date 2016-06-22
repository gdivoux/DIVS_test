#include "divs/test/test.hpp"
#include <iostream>

namespace DIVS {

    Database::Database(QString &dbName, QString &hostName, QString &userName, QString &password){

        m_database.addDatabase("QMYSQL");
        m_database.setHostName(hostName);
        m_database.setDatabaseName(dbName);
        m_database.setUserName(userName);
        m_database.setPassword(password);

        std::cout << "Salut les copains!";
        m_database.open();
    }
}
