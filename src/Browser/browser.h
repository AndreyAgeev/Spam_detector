#ifndef BROWSER_H
#define BROWSER_H
#include <QApplication>

#include <QFileDialog>
#include <QString>
#include "src/Table/table.h"
class Browser : public QWidget
{
public:
    Browser();
	//Browser();
	/**
	* @brief Открытие файла.
	*
	* Функция открывает файл, выбранный пользователем,
	* возвращает заполненную таблицу.
	*
	* @return Table
	*/
    Table openFiles();
};

#endif // BROWSER_H
