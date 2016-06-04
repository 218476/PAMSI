#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define STOP_LABELS_AMOUNT 32


#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QCompleter>
#include <QStringList>
#include <QMessageBox>
#include <QFrame>
#include <QTextCodec>

extern std::string stops_name_list[];


class MainWindow : public QMainWindow
{
    Q_OBJECT

    QPushButton*    find;
    QStringList*    stops_list;
    QCompleter*     stops_autofill;
    QLineEdit*      from_line;
    QLineEdit*      to_line;
    QLabel*         from_label;
    QLabel*         to_label;
    QLabel*         stops       [STOP_LABELS_AMOUNT];
    QLabel*         stops_time  [STOP_LABELS_AMOUNT];
    QLabel*         travel_time;
    QFrame*         line;

public slots:
    void Find();

public:
    MainWindow(QWidget *parent = 0);
};

#endif // MAINWINDOW_H
