#pragma once
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QMediaPlaylist>
#include <QtMultimediaWidgets/QVideoWidget>

#include <string>

class MainWindow : public QMainWindow
{
public:
    MainWindow();
    ~MainWindow() = default;

    bool run();
    bool addMedia(const std::string& fileName);

private:
    QMediaPlayer player;
    QMediaPlaylist playlist;
    QVideoWidget videoWidget;

    std::string executable_directory;
    std::string video_directory;
};