// #include <iostream>
// #include <deque>
// using namespace std;
// 
// void main()
// {
// 	deque<int> a;
// 	a.push_back(3);
// 	a.push_back(4);
// 	a.push_back(5);
// 
// 	a.push_front(2);
// 	a.push_front(1);
// 	a.push_front(0);
// 
// 	for (size_t nCount = 0; nCount < a.size(); nCount++)
// 	{
// 		cout << a[nCount] << endl;
// 	}
// 	cout << endl;
// 
// 	a.pop_back();
// 	a.pop_front();
// 
// 	deque<int>::iterator iElementLocater;
// 	for (iElementLocater = a.begin();iElementLocater != a.end();++iElementLocater)
// 	{
// 
// 	}
// 	
// 
// }

#include <iostream>
#include <array>
using namespace std;
void main()
{
	array<int, 10>myint{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (auto i : myint)
	{
		cout << i << " " << (void *)&i << " " << &myint << " " << &myint[i] << endl; 
	}
	cout << L"------查看数组地址-----------" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << myint[i] << "  " << (void*)&myint[i] << " " << &myint[i] << endl;
	}
	cin.get();
}

