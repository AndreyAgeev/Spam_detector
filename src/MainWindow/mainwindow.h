#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/**
 * @mainpage Introduction

SpamDetector представляет собой простейшее приложения для детекции спама.
Это приложение способно на основании обученной модели определять вероятность того, что
введенное пользователем приложения является спамом
@code{.c}
#include "src/MainWindow/mainwindow.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

@endcode
Эта программа создает графическое окно, в котором пользователь может вводить сообщения и обучить модель
*/

#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include "src/Method/method.h"
#include "src/Table/table.h"

/**
* @brief Область видимости
*
*	Область видимости для элементов пользовательского интерфейса
*
*/
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Конструктор.
     *
     *	Создает экземпляр класса MainWindow, принимает указатель на QWidget
     *
     */
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    /**
     * @brief Сообщение.
     *
     * Сообщения, для которого будет определяться его принадлежность к спаму
     *
     */
    QString mainString;
    /**
     * @brief Класс Method.
     *
     * Класс, содержащий методы для алгоритмов, определяющих спамю
     *
     */
    Method M; /* Main calculations method */
    /**
     * @brief Класс Table.
     *
     * Класс, содержащий таблицу для обучения модели, на основании которой будет
     * определяться принадлежность к спаму
     *
     * @see Method
     */
    Table T; /* Table for learning */

private slots:
    /**
     * @brief Открытие файлы и обучение модели.
     *
     * Сигнал, предназначеный для открытия файлы, предназначеного для обучения модели
     * и запуск обучения
     * @return void
     * @see  on_pushButton_2_clicked
     */
    void on_pushButton_2_clicked(); /* open browser and teach main mechanism */
    /**
     * @brief Вывод результата работы.
     *
     * Сигнал, предназначеный для вывода результата обработки сообщения.
     *
     * @return void
     * @see  on_pushButton_2_clicked
     */
    void on_pushButton_clicked(); /* Show results */
    /**
     * @brief Ввод данных.
     *
     * Сигнал, предназначеный для ввода сообщения.
     *
     * @return void
     * @see  on_pushButton_2_clicked
     */
    void on_textEdit_textChanged(); /* catch string from input stream */
    /**
     * @brief Вывод информации о приложении.
     *
     * Сигнал, предназначеный для вывода окна, содержащего информацию о приложении
     *
     * @return void
     */
    void aboutApp(); /* 'About' message box */

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
