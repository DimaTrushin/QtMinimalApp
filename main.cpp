﻿//---------------------------------------------------------------------------
// Include
//---------------------------------------------------------------------------

#include "Qt/MainWindow.h"
#include <QApplication>
//---------------------------------------------------------------------------
// main
//---------------------------------------------------------------------------

int main(int argc, char *argv[]) {
  namespace NSApp = NSApplication;

  QApplication a(argc, argv);
  NSApp::NSQt::CMainWindow w;

  return a.exec();
}
//---------------------------------------------------------------------------
