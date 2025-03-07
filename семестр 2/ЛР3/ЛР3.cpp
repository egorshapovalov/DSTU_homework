// ЛР3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


using namespace std;



int main()
{
    int length;
    double* nums;
    double sum = 0;
    double sum_2 = 0;
    int index_max_module = 0;
    bool Flag = false;

    cout << "Input the mass length: ";
    cin >> length;
    while (cin.fail()) {
        cout << "Incorrect input." << endl << "Input the mass length: ";
        cin.clear();
        while (cin.get() != '\n');
        cin >> length;
    }

    cout << endl << "Array:" << endl;
    nums = new double[length];
    for (int i = 0; i < length; i++) {
        *(nums + i) = rand() - rand();
        cout << *(nums + i) << "\t";
    }
    cout << endl;

    for (int i = 0; i < length; i++) {

        if (nums[i] > 0 and nums[index_max_module] > 0 and nums[i] > nums[index_max_module] or
            nums[i] < 0 and nums[index_max_module] > 0 and -nums[i] > nums[index_max_module] or
            nums[i] > 0 and nums[index_max_module] < 0 and nums[i] > -nums[index_max_module] or
            nums[i] < 0 and nums[index_max_module] < 0 and -nums[i] > -nums[index_max_module]) {
            index_max_module = i;
        }
        if (Flag or nums[i] > 0 and sum == 0) {
            if (Flag == false) Flag = true;
            else sum += nums[i];
        }
        sum_2 += nums[i];
    }
    sum_2 = sum_2 / length;

    cout << endl << "The index of the maximum value modulo: " << index_max_module << endl;
    cout << endl << "The Sum: " << sum << endl;
    cout << endl << "The Arithmetic mean: " << sum_2 << endl;


    double buffer;
    int index_more_sum_2 = 0;
    for (int i = 0; i < length; i++) {
        if (nums[i] > sum_2) {
            buffer = nums[i];
            for (int x = i; index_more_sum_2 < x; x--) {
                nums[x] = nums[x - 1];
                nums[x - 1] = buffer;
            }
            index_more_sum_2++;
        }
    }

    cout << endl << "Converted array:" << endl;
    for (int i = 0; i < length; i++) {
        cout << *(nums + i) << "\t";
    }

}