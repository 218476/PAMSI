#include "../../Inc/Gui/mainwindow.h"
#include "../../Inc/stops_name.h"

#include "../../Inc/AStar/stack.h"
#include "../../Inc/AStar/list.h"
#include "../../Inc/AStar/graph.h"
#include "../../Inc/AStar/astar.h"
#include "../../Inc/stops_name.h"

void Macierz(short int**, unsigned int);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{


    this->setFixedHeight(140);
    this->setFixedWidth(300);
    this->setWindowTitle(QString :: fromUtf8("Jak się zgubię"));
    //this->setStyleSheet("background-color: rgb(234,252,255);");

    line = new QFrame(this);
    line->setGeometry(0,95,300,95);
    line->setFrameStyle(QFrame::HLine);


    stops_list = new QStringList();
    for(int i = 1; i < LICZBA_PRZYSTANKOW; i++)
    {
        *stops_list << QString::fromUtf8(stops_name_list[i].c_str());
    }


    stops_autofill = new QCompleter(*stops_list, this);
    stops_autofill->setCaseSensitivity(Qt::CaseInsensitive);

    from_label = new QLabel(this);
    from_label->setGeometry(10,10,280,20);
    from_label->setText(QString :: fromUtf8("Stacja początkowa"));

    from_line = new QLineEdit(this);
    from_line->setGeometry(10,30,280,20);
    from_line->setCompleter(stops_autofill);

    to_label = new QLabel(this);
    to_label->setGeometry(10,50,280,20);
    to_label->setText(QString :: fromUtf8("Stacja końcowa"));

    to_line = new QLineEdit(this);
    to_line->setGeometry(10,70,280,20);
    to_line->setCompleter(stops_autofill);

    find = new QPushButton(this);
    find->setGeometry(80,100,120,35);
    find->setText(QString :: fromUtf8("Znajdź drogę"));

    travel_time = new QLabel(this);

    for(int i = 0; i < STOP_LABELS_AMOUNT; i++)
    {
       stops[i] = new QLabel(this);
       stops[i]->setGeometry(30,150 + i * 20,250,20);
       stops[i]->setText("");
    }

    for(int i = 0; i < STOP_LABELS_AMOUNT; i++)
    {
       stops_time[i] = new QLabel(this);
       stops_time[i]->setGeometry(10,140 + i * 20,40,20);
       stops_time[i]->setText("");
    }

    connect(find, SIGNAL(clicked(bool)), this,SLOT(Find()));
    connect(from_line, SIGNAL(returnPressed()),this, SLOT(Find()));
    connect(to_line, SIGNAL(returnPressed()),this, SLOT(Find()));

}

void MainWindow::Find()
{
    int from_id = 0;
    int to_id   = 0;
    int time = 0;
    int tmp = 0;

    for(int i = 1; i < LICZBA_PRZYSTANKOW; i++)
    {
        if(QString::fromUtf8(stops_name_list[i].c_str()) == from_line->text())
            from_id = i;

        if(QString::fromUtf8(stops_name_list[i].c_str()) == to_line->text())
            to_id = i;
    }

    if(from_id == 0 || to_id == 0 || from_id == to_id)
        return;



    stack s1;
    stack s2;
    stack s3;
    graph g1;
    astar b1;
    short int **macierz;


    macierz = new short int*[LICZBA_PRZYSTANKOW + 1];

    for (int i=0;i <= LICZBA_PRZYSTANKOW;i++)
        macierz[i] = new short int[LICZBA_PRZYSTANKOW + 1];

    Macierz(macierz,LICZBA_PRZYSTANKOW);

    g1.insert(LICZBA_PRZYSTANKOW + 1,macierz);

    s1 = b1.search(g1,from_id,to_id);
    s2 = s1;
    s3 = s1;
    int s = s1.size();

    for(int i = 1; i < STOP_LABELS_AMOUNT; i++)
    {
        stops[i]->setText("");
        stops_time[i]->setText("");
    }

    for(int i = 0;i < s; i++)
    {
        if(i < STOP_LABELS_AMOUNT)
            stops[i]->setText(QString::fromUtf8(stops_name_list[s1.pop()].c_str()));
    }

    s2.pop();
    for(int i = 1;i < s;i++)
    {
        if(i < STOP_LABELS_AMOUNT - 1)
            tmp = macierz[s3.pop()][s2.pop()];
            time += tmp;
            stops_time[i]->setText(QString::number(tmp) + "'");
    }


    this->setFixedHeight(170 + s * 20);

    travel_time->setGeometry(10,150 + s * 20,280,20);
    travel_time->setText(QString::fromUtf8("Całkowity czas podróży: ") + QString::number(time) + "'");

    for (int i=0;i<=LICZBA_PRZYSTANKOW;i++)
        delete[] macierz[i];

    delete macierz;

}
