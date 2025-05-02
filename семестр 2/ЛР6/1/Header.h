#pragma once
#include <vector>
#include <iostream>

using namespace std;

struct StudOverdraw {
	string FIO;
	string object;
	int count_Overdraw = 0;
};

struct vSO
{
	int len = 0;
	vector<StudOverdraw> Studs;
};


template<typename T> void CorrectInput(T& attribut, string Text);
vSO GenerateVStudOverdraw(int N);
void OutputVStudOverdraw(vSO& vStuds);
vSO Sorted_vSO_at_CountOverdraw(vSO vStuds);

