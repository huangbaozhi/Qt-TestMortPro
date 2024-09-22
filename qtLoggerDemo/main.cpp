#include "mainwindow.h"

#include <QApplication>
//#include "dll.h"
//#include "Logger.h"
//#include "OutputDebugAppender.h"

#include <QDebug>
#include <Logger.h>
#include <ConsoleAppender.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    MainWindow w;
    w.show();
    ConsoleAppender* consoleAppender = new ConsoleAppender;
    consoleAppender->setFormat("[%{type:-7}] <%{Function}> %{message}\n");
    cuteLogger->registerAppender(consoleAppender);
    LOG_INFO("Starting the application11111111");
    int result = a.exec();
    if (result)
      LOG_WARNING() << "Something went wrong." << "Result code is111111111" << result;
    return result;

     //LOG_DEBUG() << __FUNCTION__<< __LINE__;
    //return a.exec();
}
