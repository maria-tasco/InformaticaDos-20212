#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QGraphicsScene>

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

private:
    Ui::MainWindow *ui;
    unsigned char posSlider;
    // QPushButton *b1; Agregar boton por código
};
#endif // MAINWINDOW_H
