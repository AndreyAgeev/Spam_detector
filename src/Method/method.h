#ifndef METHOD_H
#define METHOD_H
#include <QString>
#include <iostream>
#include "../../src/Table/table.h"
class Method
{
    public:
        Method();
        //Method();
        /**
         * @brief Вывод результата работы.
         *
         * Функция, предназначеная для вывода результата обработки сообщения.
         *
         * @return @ref double
         */
        double getResult();
        /**
         * @brief Заполнение строки.
         *
         * Функция, передающая алгоритму обрабатываемую строку
         *
         * @return @ref void
         */
        void setString(const QString &string);
        /**
         * @brief Заполнение таблицы.
         *
         * Функция, передающая алгоритму заполненную обученную модель,
         * на основании которой будет проводиться определение принадлежности к спаму сообщения
         *
         * @return @ref void
         */
        void setTable( Table t);
        /**
         * @brief Определение вероятности.
         *
         * Функция, возвращающая для каждого слова вероятность принадлежности к спаму
         *
         * @return @ref double
         */
        double Pr(QString, const char &type);
    private:
        /**
         * @brief Сообщение.
         *
         * Сообщения, для которого будет определяться его принадлежность к спаму
         *
         */
        QString _string;
        /**
         * @brief Класс Table.
         *
         * Класс, содержащий таблицу для обучения модели, на основании которой будет
         * определяться принадлежность к спаму
         *
         * @see Method
         */
        Table _t;
};

#endif // METHOD_H
