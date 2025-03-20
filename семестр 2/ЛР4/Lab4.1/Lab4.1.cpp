// Lab4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>

using  namespace std;


int position_sym(char sym)
{
    for (int i = 0; i < 34; i++)
    {
        if (sym == "абвгдеёжзийклмнопрстуфхцчшщъыьэюя"[i]) return i;
    }
    return -1;
}

int main()
{
    system("chcp 1251");
    //locale::global(locale("Russian_Russia.1251"));
    bool flag = true;
    int count = 0;

    cout << "Введите предложение: " << '\n';
    cin;
    
    char sym = ' ';
    
    
    int procent_sym[34]{};
    int a;
    int b;
    int pos;
    bool flag_word = true;
    string words = "";
    string word = "";


    while (sym != '\n') {
        sym = cin.get();
        if (sym != ' ')
        {
            word += sym;

            pos = position_sym(sym);
            if (pos != -1) {
                procent_sym[pos]++;
            }

        }

        if (flag == true && not (sym == ' ' || sym == '\n'))
        {
            count++;
            flag = false;
        }
        else if (flag == false && (sym == ' ' || sym == '\n'))
        {
            flag = true;
            
            a = procent_sym[0];
            b = procent_sym[1];
            //cout << a << " " << b;
            for (int i = 2; i < 34; i++)
            {
                //cout << " " << procent_sym[i];
                if (procent_sym[i] > a or procent_sym[i] > b) flag_word = false;
                procent_sym[i] = 0;
            }
            cout << '\n';
            if (flag_word) words += word;
            procent_sym[0], procent_sym[1] = 0, 0;
            word = "";
            flag_word = true;
            
        }
    }
    cout << "Количество слов: " << count << '\n';
    cout << "Слова с большей долей букв а и б: " << words << '\n';
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
