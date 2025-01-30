#ifndef GUI_H
#define GUI_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "dungeon.h"

class GameWindow : public QWidget {
    Q_OBJECT

public:
    GameWindow(QWidget *parent = nullptr);

private slots:
    void startGame();

private:
    QPushButton *startButton;
    QLabel *infoLabel;
    Dungeon dungeon;
};

#endif