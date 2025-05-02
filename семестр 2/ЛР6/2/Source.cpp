#include "Header.h"

vDate Read_file(string name) {
	vDate Dates;
	ifstream file(name); 
	if (!file.is_open()) {
		cout << "Файла не существует";
		exit(-1);
	}
	
	char buff[11];
	while (file >> buff) {
		Dates.Dates.push_back(Format_Date(buff));
		Dates.len++;
	}
	file.close();
	return Dates;
}

Date Format_Date(char *sDate) {
	Date date;
	date.day = (int)(sDate[0] - '0') * 10 + (int)(sDate[1] - '0');
	date.month = (int)(sDate[3] - '0') * 10 + (int)(sDate[4] - '0');
	date.year = (int)(sDate[6] - '0') * 1000 + (int)(sDate[7] - '0') * 100 + (int)(sDate[8] - '0') * 10 + (int)(sDate[9] - '0') ;
	return date;
}

void Wtire_file(string name, vDate Dates, bool flag) {
	ofstream file(name);
	
	for (Date date : (flag ? Sorted_day(Dates) : Sorted_month(Dates)).Dates) {
		file << (flag ? date.day : date.month) << '\n';
	}
	file.close();
}

vDate Sorted_day(vDate Dates) {
	Date Buffer;
	for (int i = 0; i < Dates.len; i++) {
		for (int j = Dates.len - 1; j > i; j--) {
			if (Dates.Dates[j].day > Dates.Dates[j - 1].day) {
				Buffer = Dates.Dates[j];
				Dates.Dates[j] = Dates.Dates[j - 1];
				Dates.Dates[j - 1] = Buffer;
			}
		}
	}
	return Dates;
}

vDate Sorted_month(vDate Dates) {
	Date Buffer;
	for (int i = 0; i < Dates.len; i++) {
		for (int j = Dates.len - 1; j > i; j--) {
			if (Dates.Dates[j].month < Dates.Dates[j - 1].month) {
				Buffer = Dates.Dates[j];
				Dates.Dates[j] = Dates.Dates[j - 1];
				Dates.Dates[j - 1] = Buffer;
			}
		}
	}
	return Dates;
}

