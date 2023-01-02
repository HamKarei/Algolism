#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a, pair<string, pair<int, int> > b)
{
	if (a.second.first == b.second.first)
	{
		return a.second.second > b.second.second;
	}
	else
	{
		return a.second.first > b.second.first;
	}
}

int main()
{
	vector< pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int>>("강 동 우", pair<int, int>(90, 19980322)));
	v.push_back(pair<string, pair<int, int>>("배 성 준", pair<int, int>(97, 19930512)));
	v.push_back(pair<string, pair<int, int>>("정 상 협", pair<int, int>(95, 19930202)));
	v.push_back(pair<string, pair<int, int>>("이 기 백", pair<int, int>(90, 19920411)));
	v.push_back(pair<string, pair<int, int>>("김 병 지", pair<int, int>(88, 19900302)));


	sort(v.begin(), v.end(),compare);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << ' ';
	}


	return 0;
}