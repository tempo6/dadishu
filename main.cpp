#include "mainwindow.h"
#include "dadishu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dishu w;
    w.show();

    return a.exec();
}
