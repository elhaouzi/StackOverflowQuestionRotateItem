#include <QApplication>
#include "MyView.h"

static constexpr int WIDTH = 500;
static constexpr int HEIGHT = 500;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QGraphicsScene scene;
    scene.setSceneRect(QRectF(0, 0, WIDTH, HEIGHT));

    QGraphicsView view(&scene);
    view.setRenderHint(QPainter::Antialiasing);

    QVBoxLayout layout;
    layout.addWidget(&view);

    QWidget widget;
    widget.setLayout(&layout);

    MyView myView(100, 100, 200, 20);
    scene.addItem(&myView);

    widget.show();

    return QApplication::exec();
}
