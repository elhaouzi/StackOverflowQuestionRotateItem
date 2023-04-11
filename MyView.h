//
// Created by abdo on 4/1/23.
//

#ifndef RRVIEW_MYVIEW_H
#define RRVIEW_MYVIEW_H


#include <QGraphicsItem>
#include <QtWidgets>

class MyView : public QGraphicsItem {
public:
    MyView(float xPos, float yPos, float width, float height, QGraphicsItem *parent = nullptr);

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    [[nodiscard]] QRectF boundingRect() const override;

    enum ViewState {
        ANCHOR1, ANCHOR2, VIEW
    };

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;

private:
    float _width, _height;
    QRectF _anchor1, _anchor2;
    QPointF _tapPoint;
    ViewState _viewState;
};


#endif //RRVIEW_MYVIEW_H
