#include "gui.h"
#include <QVBoxLayout>
#include <QMessageBox>

GameWindow::GameWindow(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Monk Dungeon Adventure");
    resize(400, 300);

    QVBoxLayout *layout = new QVBoxLayout(this);

    infoLabel = new QLabel("Welcome to Monk Adventure!", this);
    startButton = new QPushButton("Start Game", this);

    layout->addWidget(infoLabel);
    layout->addWidget(startButton);

    connect(startButton, &QPushButton::clicked, this, &GameWindow::startGame);
}

void GameWindow::startGame() {
    QMessageBox::information(this, "Game Start", "Generating Dungeon...");
    dungeon.generateDungeon();
    QMessageBox::information(this, "Game", "Dungeon Ready! Explore...");
}