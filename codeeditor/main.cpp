#include <QtGui/QApplication>
#include "mainwindow.h"
#include "codeeditor.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    CodeEditor w;
    w.show();
    
    return a.exec();
}
