#include "mainwindow.h"

int main(int argc, char **argv)
{
    MainWindow *win = new MainWindow();
    win->Run();
    
    delete win;
    return 0;
}
