#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    posSlider=1;
    scene = new QGraphicsScene();
    //scene ->addText("hola");
    scene->addRect(100,100,100,100);
    scene->addEllipse(50,50,50,50);
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Boton_cambiar_texto_clicked()
{
    ui->label->setText("SE PRESIONO EL BOTON 1");
}

void MainWindow::on_Boton_cambiar_slider_clicked()
{
    ui->label->setText("SE PRESIONO EL BOTON 2");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText("SE PRESIONO EL BOTON 3");
    ui->horizontalSlider->setMinimum(1);
    ui->horizontalSlider->setMaximum(10);
    ui->horizontalSlider->setValue(posSlider);

    posSlider = ++posSlider > 10 ? 1 : posSlider;
}


