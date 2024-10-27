#include "drawingpanel.h"

DrawingPanel::DrawingPanel(QWidget *parent)
    :QGraphicsView(parent)
{
}

DrawingPanel::DrawingPanel(QGraphicsScene *scene, QWidget *parent /*= nullptr*/)
    :QGraphicsView(scene, parent)
{
}

DrawingPanel::~DrawingPanel()
{
}
