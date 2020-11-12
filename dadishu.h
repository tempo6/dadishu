#ifndef DADISHU_H
#define DADISHU_H

#include "mainwindow.h"
#include<QPushButton>
#include<QLabel>
#include<QLCDNumber>
#include<QIcon>
#include<QFont>
#include<QtGlobal>
#include<QTime>
#include<QTimer>

class dishu : public MainWindow
{
    Q_OBJECT
public:
    dishu()
    {
        this->setGeometry(600,200,700,700);
        this->setWindowTitle("打地鼠 by temp06");
        score=0;
        lcd.setParent(this);
        lcd.setGeometry(0,0,700,100);
        lcd.display(score);
        ft.setPointSize(20);
        txt.setParent(this);
        txt.setGeometry(600,100,100,600);
        txt.setText("规则：打中一次加一分，打错一次扣一分。");
        txt.setFont(ft);
        txt.setWordWrap(true);
        p1.addFile(tr(":/new/icon/resources/dishu1.jpg"));
        p2.addFile(tr(":/new/icon/resources/dishu2.jpg"));
        p3.addFile(tr(":/new/icon/resources/dishu3.jpg"));
        for(int i=1;i<=9;i++)
        {
           ds[i].setParent(this);
           ds[i].setGeometry(((i-1)%3)*200,((i-1)/3)*200+100,200,200);
           ds[i].setIcon(p3);
           ds[i].setIconSize(QSize(200,200));
        }
        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
        QTimer::singleShot(qrand()%9000,this,&xs1);
        QTimer::singleShot(qrand()%9000,this,&xs2);
        QTimer::singleShot(qrand()%9000,this,&xs3);
        QTimer::singleShot(qrand()%9000,this,&xs4);
        QTimer::singleShot(qrand()%9000,this,&xs5);
        QTimer::singleShot(qrand()%9000,this,&xs6);
        QTimer::singleShot(qrand()%9000,this,&xs7);
        QTimer::singleShot(qrand()%9000,this,&xs8);
        QTimer::singleShot(qrand()%9000,this,&xs9);
        QObject::connect(&ds[1],&QPushButton::clicked,this,&dishu::dj1);
        QObject::connect(&ds[2],&QPushButton::clicked,this,&dishu::dj2);
        QObject::connect(&ds[3],&QPushButton::clicked,this,&dishu::dj3);
        QObject::connect(&ds[4],&QPushButton::clicked,this,&dishu::dj4);
        QObject::connect(&ds[5],&QPushButton::clicked,this,&dishu::dj5);
        QObject::connect(&ds[6],&QPushButton::clicked,this,&dishu::dj6);
        QObject::connect(&ds[7],&QPushButton::clicked,this,&dishu::dj7);
        QObject::connect(&ds[8],&QPushButton::clicked,this,&dishu::dj8);
        QObject::connect(&ds[9],&QPushButton::clicked,this,&dishu::dj9);
    }

    void xs1();
    void xs2();
    void xs3();
    void xs4();
    void xs5();
    void xs6();
    void xs7();
    void xs8();
    void xs9();

    void pd1();
    void pd2();
    void pd3();
    void pd4();
    void pd5();
    void pd6();
    void pd7();
    void pd8();
    void pd9();

    void dj1();
    void dj2();
    void dj3();
    void dj4();
    void dj5();
    void dj6();
    void dj7();
    void dj8();
    void dj9();

    void work(int x);

private:
    int score;
    QLCDNumber lcd;
    QLabel txt;
    QPushButton ds[10];
    QIcon p1,p2,p3;
    QFont ft;
    bool flag[10];
};

#endif // DADISHU_H
