#ifndef DRAWINGPANEL_H
#define DRAWINGPANEL_H

#include <QGraphicsView>

class DrawingPanel : public QGraphicsView
{
    typedef QGraphicsView papa_t;
public:
    DrawingPanel(QWidget *parent = nullptr);
    DrawingPanel(QGraphicsScene *scene, QWidget *parent = nullptr);
    ~DrawingPanel();
protected:
    void mouseMoveEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
};

#endif // DRAWINGPANEL_H
