#include <QtWidgets/QApplication>
#include <iostream>
#include <string>
#include <filesystem>
#include "MainWindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    
    // play video
    MainWindow vplayer;
    vplayer.addMedia("vid.mp4");
    vplayer.run();
    // play video

    return app.exec();
}
