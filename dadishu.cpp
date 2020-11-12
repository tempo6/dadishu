#include"dadishu.h"

void dishu::xs1()
{
    ds[1].setIcon(p1);flag[1]=1;
    QTimer::singleShot(1000,this,&pd1);
}

void dishu::xs2()
{
    ds[2].setIcon(p1);flag[2]=1;
    QTimer::singleShot(1000,this,&pd2);
}

void dishu::xs3()
{
    ds[3].setIcon(p1);flag[3]=1;
    QTimer::singleShot(1000,this,&pd3);
}

void dishu::xs4()
{
    ds[4].setIcon(p1);flag[4]=1;
    QTimer::singleShot(1000,this,&pd4);
}

void dishu::xs5()
{
    ds[5].setIcon(p1);flag[5]=1;
    QTimer::singleShot(1000,this,&pd5);
}

void dishu::xs6()
{
    ds[6].setIcon(p1);flag[6]=1;
    QTimer::singleShot(1000,this,&pd6);
}

void dishu::xs7()
{
    ds[7].setIcon(p1);flag[7]=1;
    QTimer::singleShot(1000,this,&pd7);
}

void dishu::xs8()
{
    ds[8].setIcon(p1);flag[8]=1;
    QTimer::singleShot(1000,this,&pd8);
}

void dishu::xs9()
{
    ds[9].setIcon(p1);flag[9]=1;
    QTimer::singleShot(1000,this,&pd9);
}

void dishu::pd1()
{
    ds[1].setIcon(p3);flag[1]=0;
    QTimer::singleShot(qrand()%9000,this,&xs1);
}

void dishu::pd2()
{
    ds[2].setIcon(p3);flag[2]=0;
    QTimer::singleShot(qrand()%9000,this,&xs2);
}

void dishu::pd3()
{
    ds[3].setIcon(p3);flag[3]=0;
    QTimer::singleShot(qrand()%9000,this,&xs3);
}

void dishu::pd4()
{
    ds[4].setIcon(p3);flag[4]=0;
    QTimer::singleShot(qrand()%9000,this,&xs4);
}

void dishu::pd5()
{
    ds[5].setIcon(p3);flag[5]=0;
    QTimer::singleShot(qrand()%9000,this,&xs5);
}

void dishu::pd6()
{
    ds[6].setIcon(p3);flag[6]=0;
    QTimer::singleShot(qrand()%9000,this,&xs6);
}

void dishu::pd7()
{
    ds[7].setIcon(p3);flag[7]=0;
    QTimer::singleShot(qrand()%9000,this,&xs7);
}

void dishu::pd8()
{
    ds[8].setIcon(p3);flag[8]=0;
    QTimer::singleShot(qrand()%9000,this,&xs8);
}

void dishu::pd9()
{
    ds[9].setIcon(p3);flag[9]=0;
    QTimer::singleShot(qrand()%9000,this,&xs9);
}

void dishu::dj1(){work(1);}

void dishu::dj2(){work(2);}

void dishu::dj3(){work(3);}

void dishu::dj4(){work(4);}

void dishu::dj5(){work(5);}

void dishu::dj6(){work(6);}

void dishu::dj7(){work(7);}

void dishu::dj8(){work(8);}

void dishu::dj9(){work(9);}

void dishu::work(int x)
{
    if(!flag[x]){score--;if(score<0) score=0;lcd.display(score);return ;}
    ds[x].setIcon(p2);flag[x]=0;score++;lcd.display(score);
}
