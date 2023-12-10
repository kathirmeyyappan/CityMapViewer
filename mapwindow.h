#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MapWindow;
}
QT_END_NAMESPACE

class MapWindow : public QMainWindow
{
    Q_OBJECT

public:
    MapWindow(QWidget *parent = nullptr);
    ~MapWindow();

private:
    Ui::MapWindow *ui;
};
#endif // MAPWINDOW_H
