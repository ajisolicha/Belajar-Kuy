#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core.hpp>
#include <QMainWindow>


using namespace std;
using namespace cv;


int main(int argc, char *argv[])
{
//     QImage gambarku;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}




