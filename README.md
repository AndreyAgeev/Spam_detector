# Spam_detector
Проект по курсу "Технология программирования" в Санкт-Петербургском Политехническом Университете
## Введение. Цель проекта.
Детектирование спама является важной задачей в современном мире, 
так как людей окружает огромное количество информации, в том числе (и довольно часто) ненужной/неинтересной. 
Цель нашего проекта - создать приложение, распознающее спам, а точнее определяющее, на сколько процентов введенное сообщение является им. 

## Требования к аппаратуре
Spam Detector для рабочего стола Windows

|   Версия       |    Процессор    | Оперативная память | Допольнительное ПО |
|:---------------|:---------------:|:------------------:|-------------------:|
| Windows 10     | Не менее 1 ГГц  |   Не менее 512 МБ  | DirectX 9.0 или    |
| Windows 8.1    |                 |                    | более позней версии|
| Windows 8      |                 |                    |                    |
| Windows 7      |                 |                    |                    |

## Средства разработки программного продукта
Язык программирования - C++ с Qt5
Интерфейс - Qt
## Формат входных данных
На вход в программу может поступать как вводимые пользователем сообщения, так и текстовые файлы,
содержащие некоторый текст

## Установка продукта
Продукт поставляется в исходных кодах. Для запуска приложения вам понадобится иметь на компьютере 
установленный фреймворк Qt. 
## Описание интерфейса пользователя
Интерфейс пользователя состоит из текстового окна, для ввода проверяемых на спам сообщений. 
Кнопка "Получить результат" позволяет оценить введенное сообщение на спам.
Кнопка "Обучить детектор" запускает выбор файла, на основание которого будет произведено обучение алгоритма.
Окно "Результат" служить для вывода результата проверки на спам.
## Детали реализации
В основе алгоритма лежит Байесовская фильтрация спама. В дальнейшем информация в этом разделе будет дополнена.
## Ссылки и литература
* Metsis V., Androutsopoulos I., Paliouras G.  [Spam Filtering with Naive Bayes — Which Naive Bayes?](http://citeseerx.ist.psu.edu/viewdoc/download?doi=10.1.1.61.5542&rep=rep1&type=pdf) // CEAS 2006: Third Conference on Email and Anti-Spam, July 27-28, 2006, Mountain View, California, USA. — 2006.
