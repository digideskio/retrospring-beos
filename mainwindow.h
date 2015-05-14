#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <Application.h>
#include <Window.h>
#include <StringView.h>


class MainWindow : public BApplication
{
public:
    MainWindow(void);
    
private:
    BWindow *_win;

    void setupUi();
};

#endif
