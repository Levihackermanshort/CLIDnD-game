#include <QApplication>
#include <QWebEngineView>
#include "game.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    QWebEngineView *view = new QWebEngineView();
    view->setUrl(QUrl("file:///path/to/index.html")); // Load web UI
    view->resize(800, 600);
    view->show();

    return app.exec();
}