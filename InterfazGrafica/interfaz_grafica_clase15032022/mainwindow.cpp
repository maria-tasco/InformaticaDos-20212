#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    posSlider=1;
    scene = new QGraphicsScene();

    /*!
     * Se cargan las imagenes
    */
    QImage cielo("../interfaz_grafica_clase15032022/Imagenes/cielo.jpg"); //usando rutas relativas
    QImage mar("../interfaz_grafica_clase15032022/Imagenes/mar.jpg");

    /*!
     * Se instancia un pincel para el borde del rectangulo
    */
    QPen pen1(Qt::blue,2,Qt::SolidLine, Qt::RoundCap,Qt::RoundJoin);

    /*!
     * Se instancian 3 brochas para pintar el fondo de objetos
    */
    QBrush fondo1(Qt::darkCyan);
    QBrush fondo2(cielo);
    QBrush fondoEscena(mar);

    /*!
     * Se le coloca fondo a la escena
    */
    ui->graphicsView->setBackgroundBrush(fondoEscena);
    scene->setSceneRect(0,0,600,400); // Dimenciones a la escena

    /*!
     * Se añaden elementos a la escena
    */
    r1 = scene->addRect(0,5,100,100,pen1,fondo1);
    e1 = scene->addEllipse(-4,-6,50,50,pen1,fondo2);
    /*scene->addLine(0,0,200,0,pen1);
    scene->addLine(0,0,0,200,pen1);*/

    /*!
     *  Se conecta una señal de timeout
        Mira el reloj del sistema cada cierto tiempo
        Cuando pasa ese tiempo es la acción
        Esa acción es la que haga el método que se coloque en SLOT
    */
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),
            this,
            SLOT(on_pushButton_3_clicked()));
    timer->start(1000);

    /*!
     * Se monta toda la escena
    */
    ui->graphicsView->setScene(scene);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Boton_cambiar_texto_clicked()
{
    ui->label->setText("SE PRESIONO EL BOTON 1 PARA ESCALAR HACIA ADENTRO");
    ui->graphicsView->scale(1.5,1.5);
}

void MainWindow::on_Boton_cambiar_slider_clicked()
{
    ui->label->setText("SE PRESIONO EL BOTON 2 PARA ESCALAR HACIA AFUERA");
    ui->graphicsView->scale(0.5,0.5);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText("SE PRESIONO EL BOTON 3");

    /*ui->horizontalSlider->setMinimum(1);
    ui->horizontalSlider->setMaximum(10);
    ui->horizontalSlider->setValue(posSlider);

    posSlider = ++posSlider > 10 ? 1 : posSlider;*/

    static int cont =0;
    //r1->setPos(cont,0);
    /*r1->setPos(r1->pos().x()+5,r1->pos().y());*/ // moviendo el objeto usando su posición actual
    cont += 5;

    int condicionPared= r1->pos().x()+cont >= 525 ? r1->pos().x()-15 : r1->pos().x()+(cont+15);
    r1->setPos(condicionPared,r1->pos().y());
}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    /*!
     * Desplazar una elipse apartir de los movimientos del taclado
     * primero asegurarse de detectar cuando pulso
     * obtengo la tecla que pulse y luego la compararo
    */
    switch (e->key()) {
        case Qt::Key_D:
        {
            int condicionPared= e1->pos().x()+5 >= 525 ? e1->pos().x() : e1->pos().x()+5;
            e1->setPos(condicionPared,e1->pos().y());
        }
            break;
        case Qt::Key_A:
            e1->setPos(e1->pos().x()-5,e1->pos().y());
            break;
        case Qt::Key_W:
            e1->setPos(e1->pos().x(),e1->pos().y()-5);
            break;
        case Qt::Key_S:
            {
                int condicionArena= e1->pos().y()+5 >= 300 ? e1->pos().y() : e1->pos().y()+5;
                qDebug() << "la arena esta en el pixel: " << e1->pos().y() << endl;
                e1->setPos(e1->pos().x(),condicionArena);
            }
            break;
        default:
            //cout<<"tecla no valida"<<endl;
            break;
    }
}


