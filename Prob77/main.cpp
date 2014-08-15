/*
 ID: dearxia1
 PROG: gift1
 LANG: C++
 */

#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
//    ofstream fout ("gift1.out");
//    ifstream fin ("gift1.in");
	int NP, Spent[20] = {}, Revenue[20] = {}, Receivers, gift, s = 0;
	char name[20][20] = {}, temp[20] = {};
	cin >> NP;
	for (int i = 0; i < NP; i++)
        cin >> name[i];
    for (int i = 0; i < NP; i++)
    {
        cin >> temp;
        for (int j = 0; j < NP; j++)
        {
            if (!strcmp(temp, name[j]))
            {
                s = j;
            }
        }
        cin >> Spent[s] >> Receivers;
        if (Receivers)
            gift = Spent[s] / Receivers;
        else
            gift = 0;
        Spent[s] = gift * Receivers;
        for (int j = 0; j < Receivers; j++)
        {
            cin >> temp;
            for (int k = 0; k < NP; k++)
            {
                if (!strcmp(temp, name[k]))
                {
                    Revenue[k] += gift;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < NP; i++)
        cout << name[i] << ' ' << Revenue[i] - Spent[i] << '\n';
	return 0;
}
