#include <QApplication>
#include "gui.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    GameWindow window;
    window.show();

    return app.exec();
}