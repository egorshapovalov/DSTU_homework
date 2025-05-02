
#include "Header.h";

int main()
{
    system("chcp 1251");
    int N;
    CorrectInput(N, "Введите количество студентов в списке: ");
    vSO Studs;
    Studs = GenerateVStudOverdraw(N);
    OutputVStudOverdraw(Studs);
}
