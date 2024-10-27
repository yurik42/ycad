#ifndef DRAWINGPANEL_H
#define DRAWINGPANEL_H

#include <QGraphicsView>

class DrawingPanel : public QGraphicsView
{
public:
    DrawingPanel(QWidget *parent = nullptr);
    DrawingPanel(QGraphicsScene *scene, QWidget *parent = nullptr);
    ~DrawingPanel();

};

#endif // DRAWINGPANEL_H
