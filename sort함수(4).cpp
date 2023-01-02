#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	vector< pair<int, string> > v;
	v.push_back(pair<int, string>(90, "강 동 우"));
	v.push_back(pair<int, string>(85, "배 성 준"));
	v.push_back(pair<int, string>(82, "정 상 협"));
	v.push_back(pair<int, string>(98, "이 기 백"));
	v.push_back(pair<int, string>(79, "김 병 지"));


	sort(v.begin(), v.end());
	for (int i = 0; i < 5; i++)
	{
		cout << v[i].second << ' ';
	}


	return 0;
}