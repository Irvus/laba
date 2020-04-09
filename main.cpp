// Я использую только эти библиотеки
// Если у тебя будут тет какие-то ошибки,
// То поищи для них аналоги
#include <iostream>
#include <cmath>
#include <cstdlib>

// Рубрика "догадайся сам"
// Да, я просто так захотел :)
#define g 9,807
#define PI 3.1415

// Чтобы не упарываться с std::cout/std::time и тп
using namespace std;

void labka1();
void labka2();
void labka3();
void labka4();
void labka5();

int main() {
    // Потому что хочу и все
    setlocale(LC_ALL, "Russian");


    //А сейчас я познакомлю тебя с другой стороной проги
    //БЛЯДСКИЙ АУТСОРС!!!1!!1
    //ВСЕ НАПИСАНО НА АУТСОРСЕ!
    //КОГДА БОГ СОЗДАВАЛ МИР ЗА 7 ДНЕЙ, ОН ЕГО ЗАКАЗАЛ У ДЬЯВОЛА, НО НЕ ЗАПЛАТИЛ!
    //И ТОТ ЕМУ ОТОМСТИЛ, ЗАПОРОВ ВСЮ СИСТЕМУ ЧЕРЕЗ БЭКДОР!!!
    //ЯХВЕ - ЖАДНЫЙ ГОВНЮК, САТАНА- НЕВИННАЯ ОВЦА, ЧТО ПОШЛА ПРОТИВ СИЛЬНОГО МИРА СЕГО!!!
    //Бесплатные семинары в Церкви Сатаны по адресу https://tinyurl.com/2fcpre6
    //С уважением, Irvus

    //Сейчас мы с тобой будем писать вяскую хуйню

    //Я тут почекал всяко разное и понял, что прога ломается нахуй при вводе буквы. Так что заебень предупреждение, что не надо эту хуйню вводить
    cout << "Хозяин, какую из эрогенных зон вам простимулировать? Я не очень способная, но сделаю все! \n";
    int prostata;

    while (true) {
        cin >> prostata;

        switch (prostata) {
            case 1:
                cout << "Вы обосрались, мой господин" << endl << endl;
                //Сосочка-девочка, почему одна, сейчас будет два.
                //Не стесняйся давай, полчасика на подмыться и жду на своем одноместном кабриолете телесного цвета. Писать первую лабу – тебе

                //labka1();
                return 0;

            case 2:
                cout << "КАКОЙ ОН БОЛЬШОЙ!" << endl << endl;
                labka2();
                return 0;

            case 3:
                cout << "It is so fucking deep" << endl << endl;
                labka3();
                return 0;

            case 4:
                cout << "У меня встал" << endl << endl;
                labka4();
                return 0;

            case 5:
                cout << "Есть  еще Порох в пороховнице!" << endl << endl;
                labka5();
                return 0;

            default: cout << "У тебя их 5, дегенерат ебучий" << endl << endl;

        }
    }



    return 0;
}


// ================== ====== ==================
// ================== LABA 5 ==================


// Культура кода: все повторяющиеся куски кода выносим в отдельные функции
// Функция вывода массива
// Массив сюда передаем по указателю, ибо так привильнее всего
void displayArray(const int arrLens, int *array) {
    cout << "ARRAY = {" << endl;
    for (int c = 0; c < arrLens; c++) {
        cout << "\t" << array[c] << "," << endl;
    }
    cout << "}" << endl;
}

void labka5() {
    cout << "ДЗа допомогою генератора випадкових чисел сформувати масив із 20 \n" <<
            "елементів. Знайти максимальний та мінімальний елементи масиву, поміняти \n" <<
            "їх місцями та обчислити добуток всіх елементів, що лежать між ними.\n\n";

    // ЭТО ОБЪЯСНЯЮ ПЕРВЫЙ И ПОСЛЕДНИЙ РАЗ!!! :)
    // Короч, чтобы забацать кульный интерфейс мы вводин несколько булевых ключей
    // play -> Зацикливаем прогу
    // haveData -> Чтобы не проводить расчеты без введенных значений
    // foundResuld -> Чтобы не выводит то, что еще не посчитали
    // май инглишъ из вэри вэл
    bool play = true, haveData = false, foundResult = false;

    // Переменные
    int sum = 0, mini = 0, maxi = 0;
    // Дальше НЕ переменные
    // В основном своем, но и переменные тоже будут

    // Для более рандомного рандома
    // Попробуй закомментить эту строку и пару раз запусти
    // И посмотри что случилось с рандомом
    srand(unsigned(time(nullptr)));

    // Так нада, чтобы объявить самый обычный статический массив
    const int ANIMELEN = 20; // Наличие ANIME в названиях констант обязательно
    int array[ANIMELEN];

    // Говорим долбо-юзеру, какие команды мы умеем обрабатывать
    cout << "=== МЕНЮ ===" << endl <<
         "0: Сгенерувати довбаний масів" << endl <<
         "1: Провести розрахунки" << endl <<
         "2: Вивести данні" << endl <<
         "3: Вийти з програми" << endl <<
         ">> ";

    // Бесконечный цикл
    while (play) {
        // Плиз, не меняй название. Это тоже жизненно важно для работы этой проги
        int huy;
        cin >> huy;

        // Да-да, это он ))
        switch (huy) {
            case 0:
                // Ограничители рандома
                int maxim, mezim;
                do {
                    cout << "Введить минималочку:  ";
                    cin >> mezim;
                } while (mezim < 0);

                do {
                    cout << "Введить максымальчку: ";
                    cin >> maxim;
                } while (maxim < 0);

                // Если юзер конченый и сделал минималочку больше максималочки
                // Мы добрые разрабы - исправим
                if (mezim > maxim) {
                    int temp = maxim;
                    maxim = mezim;
                    mezim = temp;
                    cout << "Ты еблан?? Считать научись: " << mezim << ">" << maxim << endl;
                }

                // Модно, стильн, молодежно
                // Такой крутой способ заполнения массива
                for (int & c : array) {
                    c = rand() % maxim + mezim;
                }

                // Помнишь, там вверху мы писали эту функцию
                // вот и она
                displayArray(ANIMELEN, array);

                // Говорим, что значения считани и их можно обрабатывать
                haveData = true;
                // если убрать, то мы будем выполнять и последующие кейсы
                break;

            case 1:
                if (haveData) {

                    // Обход массива
                    for (int c = 0 ; c < ANIMELEN; c++) {
                        // Поиск индекса с первой найденой минималочкой
                        if (array[c] < array[mini]) mini = c;
                        // Поиск индекса с первой найденой максималочкой
                        if (array[c] > array[maxi]) maxi = c;
                    }

                    // Проверяем удачу пользователя
                    if (mini != maxi) {
                        // Выполняем ТЗ: поменять мин и макс местами
                        int temp = array[mini];
                        array[mini] = array[maxi];
                        array[maxi] = temp;
                    }
                    else cout << "Ебааа ты везучий!" <<
                                 "\nУ тебя ВЕСЬ МАСИВ ВОСТОИТ ИЗ ОДИНАКОВЫХ ЧИСЕЛ!!!" <<
                                 "\nЖиво шуруй за лотерейным билетом!" << endl;

                    // Ищем границы обхода для выполнения 2-й части ТЗ
                    int begin, end;
                    if (maxi > mini) {
                        begin = mini;
                        end = maxi;
                    }
                    else {
                        begin = maxi;
                        end = mini;
                    }

                    // Сумматор 3000
                    for (int i = begin + 1; i < end; i++) {
                        sum += array[i];
                    }

                    cout << "Окасики-пидерасики, хуета-хует готова!\nМожешь отрываться по-полной." << endl;

                    // Говорим, что все подсчитано и можно выводить на экран
                    foundResult = true;

                    // Еще одна проверка на дурака
                } else cout << "З чим мені працювати?! Сгенерувй довбаний масів!!!" << endl;
                break;

            case 2:
                if (foundResult) {
                    displayArray(ANIMELEN, array);

                    // Выводим по-красоте наши результаты
                    cout << "MIN: [" << mini << " -> " << maxi << "] " << array[mini] << endl;
                    cout << "MIN: [" << maxi << " -> " << mini << "] " << array[maxi] << endl;
                    cout << "SUMMARY: " << sum << endl;

                    // Сбрасываем решение (смотри ТЗ)
                    haveData = false;
                    foundResult = false;
                } else {
                    cout << "Спочатку підрахуй, підрахуйчик!" << endl;
                }
                break;

            case 3:
                play = false;
                cout << "\n--- === ---\nПриходьте ще\nГолосуй за пОрошенКа, ато путін нападє\n--- === ---" << endl;
                break;

                // И вновь проверка на дурака
            default:
                cout << "Я поки що не гуру, щоб виконати цю операцію..." << endl;

        }

        if (play) cout << ">> ";
    }
}


// ================== ====== ==================
// ================== LABA 4 ==================

// Я вывел повторяющуюся часть в отдельную функцию
float dolbalina(float x) {
    return float(sqrt(15 - pow(x, 2)));
}

void labka4() {
    cout << "Обчислення значення функції.\n\n";
    bool play = true, haveData = false, foundResult = false;
    float x = 0, y = 0;

    cout << "=== МЕНЮ ===" << endl <<
         "0: Ввести данні" << endl <<
         "1: Провести розрахунки" << endl <<
         "2: Вивести данні" << endl <<
         "3: Вийти з програми" << endl <<
         ">> ";

    while (play) {
        int huy;
        cin >> huy;

        switch (huy) {
            case 0:
                cout << "Введіть X: ";
                cin >> x;
                haveData = true;
                break;

            case 1:
                if (haveData) {
                    // В ТЗ было 2 кейса,
                    // реализуем их через if-else
                    if (x < 1) y = dolbalina(x);
                    else y = 1 / dolbalina(x);

                    cout << "Розрахунки проведено успішно!" << endl;
                    foundResult = true;
                } else {
                    cout << "З чим мені працювати?! Введи в біса дані!!!" << endl;
                }
                break;

            case 2:
                // Разве не милота? ^~^
                if (foundResult) {
                    cout << "      /      __________               " << endl;
                    cout << "     |   \\/  15 - x^2   , -inf < x < 1" << endl;
                    cout << "y = <       /   ____________          " << endl;
                    cout << "     |   1 / \\/ 15 - x ^ 2  , x = 1   " << endl;
                    cout << "      \\   /                           " << endl;

                    cout << "y(x) = " << y << endl;
                    haveData = false;
                    foundResult = false;
                } else {
                    cout << "Спочатку проведи розрахунки, лушпендилю!" << endl;
                }
                break;

            case 3:
                play = false;
                cout << "\n--- === ---\nПриходьте ще\n--- === ---" << endl;
                break;

            default:
                cout << "Я поки що не гуру, щоб виконати цю операцію..." << endl;

        }

        if (play) cout << ">> ";
    }
}


// ================== ====== ==================
// ================== LABA 3 ==================

// Нам нужен факториал
// Версия через рекурсию
// Мне пох, я его тупо скопипастил из инета ))
int factorial(int n) {
    if (n == 1 || n == 0) return  1;
    else return factorial(n - 1) * n;
}

// Вон та тупая функция из задания
float labka3Func(float x, int k) {
    return (powf(-1, float(k)) * powf(x, 4.0f * float(k) + 3)) / (float(2 * k + 1) * float(factorial(4 * k + 3)));
}

void labka3() {
    cout << "Обчислення суми ряду з заданою точністю.\n\n";
    bool play = true, haveData = false, foundResult = false;
    // eps -> точность (эпсилон)
    // x -> просто x
    float eps = 0, x = 0, result = 0;

    cout << "=== МЕНЮ ===" << endl <<
         "0: Ввести данні" << endl <<
         "1: Провести розрахунки" << endl <<
         "2: Вивести данні" << endl <<
         "3: Вийти з програми" << endl <<
         ">> ";

    while (play) {
        int huy;
        cin >> huy;

        switch (huy) {
            case 0:
                do {
                    cout << "Введіть точність (eps < 1): ";
                    cin >> eps;
                } while (eps >= 1); // условие из задания

                do {
                    cout << "Введіть число (-1 < x < 1): ";
                    cin >> x;
                } while (x <= -1 || x >= 1); // тоже из задания

                haveData = true;
                break;

            case 1:
                if (haveData) {
                    float current, previous;
                    int k = 0;

                    // Начало самой главной хуеты

                    // Вызываем нашу функцию
                    current = labka3Func(x, k);
                    result = current;
                    k++;

                    do {
                        previous = current;
                        current = labka3Func(x, k);
                        result += current;
                        k++;
                    } while (abs(current - previous) > eps);
                    // Конец хуеты
                    // Смирись, это копипаст, зато вроде как даже работает

                    cout << "Розрахунки проведено успішно!" << endl;
                    foundResult = true;

                } else {
                    cout << "З чим мені працювати?! Введи, вбіса, дані!!!" << endl;
                }
                break;

            case 2:
                // <3 i love it <3
                if (foundResult) {
                    cout << "inf ----        k    4k+3" << endl;
                    cout << "    \\        -1    x" << endl;
                    cout << "     |    ---------------- " << endl;
                    cout << "    /     (2k + 1)!(4k + 3)" << endl;
                    cout << "k=0 ----  " << endl;


                    cout << "Отримана сума: " << result << endl;
                    haveData = false;
                    foundResult = false;
                } else {
                    cout << "Спочатку проведи розрахунки, лушпендилю!" << endl;
                }
                break;

            case 3:
                play = false;
                cout << "\n--- === ---\nПриходьте ще\nПорох підор - аксіома\n--- === ---" << endl;
                break;

            default:
                cout << "Я поки що не гуру, щоб виконати цю операцію..." << endl;

        }

        if (play) cout << ">> ";
    }
}


// ================== ====== ==================
// ================== LABA 2 ==================

void labka2() {
    cout << "Дано довжину математичного маятника.\nОбчислити період коливань та циклічну частоту.\n\n";
    bool play = true, haveData = false, foundResult = false;
    // L -> днина маятника
    // T -> период колебаний
    // w -> цикличная частота
    float L = 0, T = 0, w = 0;

    cout << "=== МЕНЮ ===" << endl <<
         "0: Ввести данні" << endl <<
         "1: Провести розрахунки" << endl <<
         "2: Вивести данні" << endl <<
         "3: Вийти з програми" << endl <<
         ">> ";

    while (play) {
        int huy;
        cin >> huy;

        switch (huy) {
            case 0:
                cout << "Введіть довжину маятника: ";
                cin >> L;
                haveData = true;
                break;

            case 1:
                if (haveData) {
                    if (L > 0) {
                        // Формулы из инета
                        // Немного магии
                        // И готово!)
                        // А ты дамал, как пишут код?))
                        T = 2 * PI * sqrt((L / g));
                        w = 2 * PI / T;
                        cout << "Розрахунки проведено успішно!" << endl;
                        foundResult = true;
                    } else cout << "Ви ввели неможливі данні!\nРозрахунки провалено успішно." << endl;
                } else {
                    cout << "З чим мені працювати?! Введи в біса дані!!!" << endl;
                }
                break;

            case 2:
                if (foundResult) {
                    cout << "Період колівань:\nT = 2PI * sqrt(L/g) = " << T << endl;
                    cout << "Циклічна частота:\nw = 2PI / T = " << w << endl;
                    haveData = false;
                    foundResult = false;
                } else {
                    cout << "Спочатку проведи розрахунки, лушпендилю!" << endl;
                }
                break;

            case 3:
                play = false;
                cout << "\n--- === ---\nПриходьте ще\n--- === ---" << endl;
                break;

            default:
                cout << "Я поки що не гуру, щоб виконати цю операцію..." << endl;

        }

        if (play) cout << ">> ";
    }
}
