// ЛР3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


using namespace std;



int main()
{   
    int length;
    float *nums;
    int count_negative = 0;
    int index_max_loc = -1;

    cout << "Input the mass length: ";
    cin >> length;
    while (cin.fail()) {
        cout << "Incorrect input." << endl << "Input the mass length: ";
        cin.clear();
        while (cin.get() != '\n');
        cin >> length;
    }

    cout << endl << "New mass:" << endl;
    nums = new float[length];
    for (int i = 0; i < length; i++) {
        *(nums + i) = rand() - rand();
        cout << *(nums + i) << "\t";
    }
    cout << endl;
    for (int i = 0; i < length; i++) {
        
        if (i > 0 and i < length - 2) {
            if (nums[i] < nums[i + 1] and nums[i + 1] > nums[i + 2]) index_max_loc = i+1;
        };
        if (*(nums + i) < 0) { 
            count_negative++;
            *(nums + i) = *(nums + i) * *(nums + i);
        }
    }

    cout << endl << "The index local max: " << index_max_loc << endl;
    
    cout << endl << "Update mass:" << endl;
    for (int i = 0; i < length; i++) {
        cout << *(nums + i) << "\t";
    }
    cout << endl;

    for (int i = 0; i < length; i++) {
        for (int x = length-1; x > i; x--) {
            float buffer = *(nums+i);
            if (buffer > *(nums+x)){
                *(nums + i) = *(nums + x);
                *(nums + x) = buffer;
            }
        }
    }

    cout << endl << "Sorted mass:" << endl;
    for (int i = 0; i < length; i++) {
        cout << *(nums + i) << "\t";
    }
}