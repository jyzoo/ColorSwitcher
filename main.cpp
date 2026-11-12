
#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow window;
    window.show();

    // Цикл событий необходим для работы QTimer
    // и обработки нажатий мыши.
    return app.exec();
}
