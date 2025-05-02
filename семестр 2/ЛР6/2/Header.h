#pragma once
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Date {
	int day;
	int month;
	int year;
};

struct vDate {
	int len = 0;
	vector<Date> Dates;
};

vDate Read_file(string name);
Date Format_Date(char* sDate);
void Wtire_file(string name, vDate Dates, bool flag);
vDate Sorted_day(vDate Dates);
vDate Sorted_month(vDate Dates);