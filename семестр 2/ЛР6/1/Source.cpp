#include "Header.h"

template<typename T> void CorrectInput(T& attribut, string text) {
	cout << text << endl;
	cin >> attribut;

	while (cin.fail()) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "������������ ����!" << endl << text << endl;
		cin >> attribut;
	}
}

vSO GenerateVStudOverdraw(int N) {
	vSO vStuds;
	StudOverdraw Stud;
	for (int i = 0; i < N; i++) {
		CorrectInput(Stud.FIO, "������� ��� ��������: ");
		CorrectInput(Stud.object, "������� �������� ��������: ");
		CorrectInput(Stud.count_Overdraw, "������� ���������� �����������: ");
		vStuds.Studs.push_back(Stud);
		vStuds.len += 1;
	}
	return vStuds;
}

void OutputVStudOverdraw(vSO& vStuds) {
	cout << "������ ��������� ������������������ ���������� ������������" << "\n";
	cout << "���" << "\t||\t" << "���������� �����������" << "\n";
	for (StudOverdraw Stud : Sorted_vSO_at_CountOverdraw(vStuds).Studs) {
		cout << Stud.FIO << "\t||\t" << Stud.count_Overdraw << "\n";
	}
}

vSO Sorted_vSO_at_CountOverdraw(vSO vStuds) {
	StudOverdraw Buffer;
	for (int i = 0; i < vStuds.len; i++) {
		for (int j = vStuds.len-1; j > i; j--) {
			if (vStuds.Studs[j].count_Overdraw < vStuds.Studs[j - 1].count_Overdraw) {
				Buffer = vStuds.Studs[j];
				vStuds.Studs[j] = vStuds.Studs[j - 1];
				vStuds.Studs[j - 1] = Buffer;
			}
		}
	}
	return vStuds;
}