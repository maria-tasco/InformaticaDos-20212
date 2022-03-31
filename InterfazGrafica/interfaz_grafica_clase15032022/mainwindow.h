#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QTimer>
#include <QKeyEvent>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();    

private slots:
    void on_Boton_cambiar_texto_clicked();

    void on_Boton_cambiar_slider_clicked();

    void on_pushButton_3_clicked();

protected:
    void keyPressEvent(QKeyEvent *e);

private:
    Ui::MainWindow *ui;
    unsigned char posSlider;
    QGraphicsScene *scene;

    QGraphicsEllipseItem *e1;
    QGraphicsRectItem *r1;

    QTimer *timer;
    // QGraphicsScene *sceneP;
    // QPushButton *b1; Agregar boton por código
};
#endif // MAINWINDOW_H
