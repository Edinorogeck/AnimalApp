#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->setupUi(this);
    ui->Frm_1->setStyleSheet("background-color: red");
    ui->Frm_2->setStyleSheet("background-color: yellow");
    ui->Frm_3->setStyleSheet("background-color: orange");
    ui->Frm_4->setStyleSheet("background-color: green");
    ui->Frm_5->setStyleSheet("background-color: blue");
    ui->Frm_6->setStyleSheet("background-color: purple");
    ui->Frm_7->setStyleSheet("background-color: cyan");
    ui->Frm_8->setStyleSheet("background-color: lime");
    ui->Frm_9->setStyleSheet("background-color: fuchsia");
    ui->Frm_10->setStyleSheet("background-color: dodgerblue");


    ui->Frm_1->installEventFilter(this);
    ui->Frm_2->installEventFilter(this);
    ui->Frm_3->installEventFilter(this);
    ui->Frm_4->installEventFilter(this);
    ui->Frm_5->installEventFilter(this);
    ui->Frm_6->installEventFilter(this);
    ui->Frm_7->installEventFilter(this);
    ui->Frm_8->installEventFilter(this);
    ui->Frm_9->installEventFilter(this);
    ui->Frm_10->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->Frm_1) // Проверяем, к какому QFrame относится событие
    {
        if (event->type() == QEvent::MouseButtonPress) // Проверяем, что это событие нажатия мышью
        {
            QPixmap pixmap(":/Картинки/белочка.jpg");
            QTimer::singleShot(250, [=](){
                ui->Frm_1->setStyleSheet("");
                ui->Frm_1->setPixmap(pixmap.scaled(ui->Frm_1->size(), Qt::KeepAspectRatio));
            });
        }
    }
    if (obj == ui->Frm_2) // Проверяем, к какому QFrame относится событие
    {
        if (event->type() == QEvent::MouseButtonPress) // Проверяем, что это событие нажатия мышью
        {
            QPixmap pixmap(":/Картинки/дакошка.jpg");
            QTimer::singleShot(250, [=](){
                ui->Frm_2->setStyleSheet("");
                ui->Frm_2->setPixmap(pixmap.scaled(ui->Frm_2->size(), Qt::KeepAspectRatio));
            });
        }
    }
    if (obj == ui->Frm_3) // Проверяем, к какому QFrame относится событие
    {
        if (event->type() == QEvent::MouseButtonPress) // Проверяем, что это событие нажатия мышью
        {
            QPixmap pixmap(":/Картинки/кенгуру.jpg");
            QTimer::singleShot(250, [=](){
                ui->Frm_3->setStyleSheet("");
                ui->Frm_3->setPixmap(pixmap.scaled(ui->Frm_3->size(), Qt::KeepAspectRatio));
            });
        }
    }
    if (obj == ui->Frm_4) // Проверяем, к какому QFrame относится событие
    {
        if (event->type() == QEvent::MouseButtonPress) // Проверяем, что это событие нажатия мышью
        {
            QPixmap pixmap(":/Картинки/кошка.jpg");
            QTimer::singleShot(250, [=](){
                ui->Frm_4->setStyleSheet("");
                ui->Frm_4->setPixmap(pixmap.scaled(ui->Frm_4->size(), Qt::KeepAspectRatio));
            });
        }
    }
    if (obj == ui->Frm_5) // Проверяем, к какому QFrame относится событие
    {
        if (event->type() == QEvent::MouseButtonPress) // Проверяем, что это событие нажатия мышью
        {
            QPixmap pixmap(":/Картинки/обезьяна.png");
            QTimer::singleShot(250, [=](){
                ui->Frm_5->setStyleSheet("");
                ui->Frm_5->setPixmap(pixmap.scaled(ui->Frm_5->size(), Qt::KeepAspectRatio));
            });
        }
    }
    if (obj == ui->Frm_6) // Проверяем, к какому QFrame относится событие
    {
        if (event->type() == QEvent::MouseButtonPress) // Проверяем, что это событие нажатия мышью
        {
            QPixmap pixmap(":/Картинки/попугай.jpg");
            QTimer::singleShot(250, [=](){
                ui->Frm_6->setStyleSheet("");
                ui->Frm_6->setPixmap(pixmap.scaled(ui->Frm_6->size(), Qt::KeepAspectRatio));
            });
        }
    }
    if (obj == ui->Frm_7) // Проверяем, к какому QFrame относится событие
    {
        if (event->type() == QEvent::MouseButtonPress) // Проверяем, что это событие нажатия мышью
        {
            QPixmap pixmap(":/Картинки/рыбка.jpg");
            QTimer::singleShot(250, [=](){
                ui->Frm_7->setStyleSheet("");
                ui->Frm_7->setPixmap(pixmap.scaled(ui->Frm_7->size(), Qt::KeepAspectRatio));
            });
        }
    }
    if (obj == ui->Frm_8) // Проверяем, к какому QFrame относится событие
    {
        if (event->type() == QEvent::MouseButtonPress) // Проверяем, что это событие нажатия мышью
        {
            QPixmap pixmap(":/Картинки/слон.jpg");
            QTimer::singleShot(250, [=](){
                ui->Frm_8->setStyleSheet("");
                ui->Frm_8->setPixmap(pixmap.scaled(ui->Frm_8->size(), Qt::KeepAspectRatio));
            });
        }
    }
    if (obj == ui->Frm_9) // Проверяем, к какому QFrame относится событие
    {
        if (event->type() == QEvent::MouseButtonPress) // Проверяем, что это событие нажатия мышью
        {
            QPixmap pixmap(":/Картинки/собачка.jpg");
            QTimer::singleShot(250, [=](){
                ui->Frm_9->setStyleSheet("");
                ui->Frm_9->setPixmap(pixmap.scaled(ui->Frm_9->size(), Qt::KeepAspectRatio));
            });
        }
    }
    if (obj == ui->Frm_10) // Проверяем, к какому QFrame относится событие
    {
        if (event->type() == QEvent::MouseButtonPress) // Проверяем, что это событие нажатия мышью
        {
            QPixmap pixmap(":/Картинки/ящерица.jpg");
            QTimer::singleShot(250, [=](){
                ui->Frm_10->setStyleSheet("");
                ui->Frm_10->setPixmap(pixmap.scaled(ui->Frm_10->size(), Qt::KeepAspectRatio));
            });
        }
    }
    // передаем событие базовому классу для дальнейшей обработки
    return QMainWindow::eventFilter(obj, event);
}

