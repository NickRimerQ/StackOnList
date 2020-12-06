#include "Header.h"
#include "Stack_on_L.cpp"

int main()
{
	List<int> art;
	for (int i = 0; i < 10; i++) 
	{
		art.push_front(i);
	}
	art.pop_front();
	art.print();
	cout << "_______________" << endl;
	cout << "Stack size is " << art.retSize() << endl;
	art.clear();
	art.isEmpty();
	return 0;
}