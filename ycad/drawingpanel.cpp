#include "drawingpanel.h"

#include <QMouseEvent>
#include <QResizeEvent>
#include <QDebug>

DrawingPanel::DrawingPanel(QWidget *parent)
    :QGraphicsView(parent)
{
    setMouseTracking(true);
}

DrawingPanel::DrawingPanel(QGraphicsScene *scene, QWidget *parent /*= nullptr*/)
    :QGraphicsView(scene, parent)
{
}

DrawingPanel::~DrawingPanel()
{
}

void
DrawingPanel::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << event->pos();
}

void DrawingPanel::resizeEvent(QResizeEvent *event)
{
    qDebug() << event->size();
}
