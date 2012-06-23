#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(620, 631);
    w.setObjectName("mainWindow");
    w.setStyleSheet("#mainWindow{border-image:url(:/new/prefix1/a.bmp);}");
    w.show();
    
    return a.exec();
}
