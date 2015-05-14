#include "mainwindow.h"


MainWindow::MainWindow(void) : BApplication("application/x-vnd.nd-justask")
{
    setupUi();
}

void MainWindow::setupUi()
{
    BRect frame(100, 100, 500, 400);
    _win = new BWindow(frame, "Retrospring for BeOS", B_TITLED_WINDOW, B_QUIT_ON_WINDOW_CLOSE);
    frame.Set(10, 10, 11, 11);
    BStringView *label = new BStringView(frame, "rs_label", "Welcome to Retrospring!");
    label->ResizeToPreferred();
    _win->AddChild(label);
    _win->Show();
}
