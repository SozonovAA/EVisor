#include "mainwindow.h"

#include <QApplication>
#include <iostream>

#include "datapreparator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    datapreparator dp;
    for (auto it : dp.unpack<float>(std::vector<char>{0x46,0x46,0x46,0x46, 0x45,0x45,0x45,0x45})) {
        std::cout << it << std::endl;
    }

    w.show();
    return a.exec();
}
