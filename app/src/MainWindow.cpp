#include "MainWindow.h"
#include <iostream>
#include <filesystem>

MainWindow::MainWindow() : QMainWindow()
{
    executable_directory = std::filesystem::current_path();
    video_directory = executable_directory + "/../video/";
    this->resize(QSize(800, 600));
}

bool MainWindow::run()
{
    if (playlist.mediaCount() == 0) {
        std::cout << "No media in the playlist";
        return false;
    }
    player.setPlaylist(&playlist);
    player.play();
    return true;

}

bool MainWindow::addMedia(const std::string& fileName)
{
    if (!playlist.addMedia(QUrl::fromLocalFile(((video_directory + fileName).c_str())))) {
        std::cout << "Failed to add media to playlist";
        return false;
    }
    player.setVideoOutput(&videoWidget);
    videoWidget.show();
    return true;
}
