#include "Header.h"
#include <filesystem>


int main()
{   
    system("chcp 1251");
    vDate Dates;
    Dates = Read_file("TEXT2.txt");
    Wtire_file("Day.txt", Dates, true);
    Wtire_file("Month.txt", Dates, false);
    cout << "операция выполнена" << endl;
}