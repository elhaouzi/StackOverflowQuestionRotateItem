//
// Created by abdo on 4/1/23.
//



#include "MainWindow.h"
#include "MyView.h"


static constexpr int WIDTH = 500;
static constexpr int HEIGHT = 500;

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent) {

    scene = new QGraphicsScene(this);
    scene->setSceneRect(QRectF(0, 0, WIDTH, HEIGHT));

    view = new QGraphicsView(scene);
    view->setRenderHint(QPainter::Antialiasing);

    auto layout = new QVBoxLayout;
    layout->addWidget(view);

    auto widget = new QWidget;
    widget->setLayout(layout);

    setCentralWidget(widget);

    auto myView = new MyView(100, 100, 200, 100);
    scene->addItem(myView);

}
