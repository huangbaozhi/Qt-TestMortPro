#include <QCoreApplication>
#include "dll.h"
#include <QDebug>
#include <Logger.h>
#include <ConsoleAppender.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ConsoleAppender* consoleAppender = new ConsoleAppender;
    consoleAppender->setFormat("[%{type:-7}] <%{Function}> %{message}\n");
    cuteLogger->registerAppender(consoleAppender);
    LOG_INFO("Starting the application");
    int result = a.exec();
    if (result)
      LOG_WARNING() << "Something went wrong." << "Result code is" << result;
    return result;

//    DLL l;
//    l.GetString();
//    qDebug()<< l.GetString();
//    qDebug()<< l.GetÍString();

//    return a.exec();
}
