//
// Created by abdo on 4/1/23.
//

#ifndef RRVIEW_MAINWINDOW_H
#define RRVIEW_MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>


class MainWindow : public QMainWindow{
public:
    explicit MainWindow(QWidget* parent = nullptr);

private:
    QGraphicsView* view;
    QGraphicsScene* scene;
};


#endif //RRVIEW_MAINWINDOW_H
