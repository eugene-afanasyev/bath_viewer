#include <QMainWindow>
#include <QMenu>
#include <QApplication>
#include <QMenuBar>


class SimpleMenu : public QMainWindow {

public:
    SimpleMenu(QWidget *parent = nullptr);
};


SimpleMenu::SimpleMenu(QWidget *parent)
        : QMainWindow(parent) {

    // Данные изображения мы будем использовать в качестве иконок в нашем меню
    QPixmap newpix("assets/icons/new.png");
    QPixmap openpix("assets/icons/open.png");
    QPixmap quitpix("assets/icons/quit.png");

    // Здесь в качестве первых аргументов мы используем конструкторы класса QAction
    QAction *newa = new QAction(newpix, "&New", this);
    QAction *open = new QAction(openpix, "&Open", this);
    QAction *quit = new QAction(quitpix, "&Quit", this);

    // А здесь мы задаем сочетание горячих клавиш CTRL+Q, которое будет выполнять действие Quit (Выход)
    quit->setShortcut(tr("CTRL+Q"));

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(newa); // добавляем действие "New"
    file->addAction(open); // добавляем действие "Open"
    file->addSeparator(); // устанавливаем разделитель
    file->addAction(quit); // добавляем действие "Quit"

    // В некоторых средах значки меню по умолчанию не отображаются, поэтому мы можем попробовать отключить атрибут Qt::AA_DontShowIconsInMenus
    qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    SimpleMenu window;

    window.resize(250, 150);
    window.setWindowTitle("Simple menu");
    window.show();

    return app.exec();
}