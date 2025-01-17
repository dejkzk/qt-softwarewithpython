#ifndef WIDGET_BACK_H
#define WIDGET_BACK_H

#include <QWidget>
#include <QtCharts>
#include <QSplineSeries>
#include <QScatterSeries>
#include<QPushButton>
#include<QDebug>
#include<QMessageBox>
#include<QDir>
#include<QFileDialog>
#include<QDataStream>
#include "qcustomplot.h"
/*
 * ***************************************************************************************
 * @attention
 * 运行平台：正点原子家的i.mx6ull开发板、树莓派4B、windows10、11系统的电脑,实测可行
 * *************************************************************************************
**/
namespace Ui {
class widget_back;
}

class widget_back : public QWidget
{
    Q_OBJECT

public:
    explicit widget_back(QWidget *parent = nullptr);
    ~widget_back();
public:

    QCustomPlot* QChart_coil = new QCustomPlot();
    QCustomPlot* QChart_hall = new QCustomPlot();

    QVector<QPointF> QVector_QPointF_data_buff; // 存储业务数据的 list
    QVector<QPointF> QVector_QPointF_coil_graph_data1; // 存储业务数据的 coil1
    QVector<QPointF> QVector_QPointF_coil_graph_data2; // 存储业务数据的 coil2
    QVector<QPointF> QVector_QPointF_hall_graph_data1; // 存储业务数据的 hall1
    QVector<QPointF> QVector_QPointF_hall_graph_data2; // 存储业务数据的 hall2

    QVector<qint32> QVector_int_read_data1;
    QVector<qint32> QVector_int_read_data2;
    QVector<qint32> QVector_int_read_data3;
    QVector<qint32> QVector_int_read_data4;
    QVector<qint32> QVector_int_read_data5;
    QVector<qint32> QVector_int_read_data6;
    QVector<qint32> QVector_int_read_data7;
    QVector<qint32> QVector_int_read_data8;
    QVector<qint32> QVector_int_read_data9;
    QVector<qint32> QVector_int_read_data10;
    QVector<qint32> QVector_int_read_data11;
    QVector<qint32> QVector_int_read_data12;
    QVector<qint32> QVector_int_read_data13;
    QVector<qint32> QVector_int_read_data14;
    QVector<qint32> QVector_int_read_data15;
    QVector<qint32> QVector_int_read_data16;
    QVector<double> QVector_double_read_data17;

    QSplineSeries *QSplineSeries_hall = new QSplineSeries();//平滑曲线点
    QSplineSeries *QSplineSeries_hall2 = new QSplineSeries();//平滑曲线点

    QSplineSeries *QSplineSeries_coil = new QSplineSeries();//QLineSeries QXYSeries
    QSplineSeries *QSplineSeries_coil2 = new QSplineSeries();//QLineSeries QXYSeries

    int maxSize;  // data 最多存储 maxSize 个元素
    int maxX;
    int maxY;
    int minY;
    int i=0;
    int graph_x_axis_Count = 1600;//x-axis长度为4000
    int data_length = 0;
    int data_plot_pos = 0;
    double speed;
    qint32 data1,data2,data3,data4,data5,data6,data7,data8,data9,data10,data11,data12,data13,data14,data15,data16;
    double data17;
    int data_coil1;
    int data_coil2;
    int data_hall1;
    int data_hall2;
    int detec_count_show=0;
    int detec_count=0;
    int alldata_flag=0;
    QString path;
    QFile QFile_file;
    QDataStream stream;

    QTimer rePlotTimer;
    QTimer dataTimer;

    QStringList m_fileList;
    QString m_Src;
    QString m_Dest;

private slots:
    void on_pushButton_quit_clicked();

    void on_pushButton_choose_clicked();

    void on_pushButton_lastpage_clicked();

    void on_pushButton_nextpage_clicked();

    void on_pushButton_alldata_clicked();

    void Sleep(double msec);
    void timeToAddData();
    void timeToRePlot();

private:
    Ui::widget_back *ui;
};
#endif // WIDGET_BACK_H
