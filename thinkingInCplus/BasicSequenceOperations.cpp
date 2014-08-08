/*
   2c07
   the operations available for all 
   the basic sequence containers.
 */
#include <deque>
#include <iosteam>
#include <list>
#include <vector>
using namespace std;

template <typename Container>
void print(Container &c, char *title = "")
{
	cout << title << ':' << endl;
	if(c.empty()){
		cout << "(empty" << endl;
		return;
	}
	typename Container::iterator it;
	for(it = c.begin(); it != c.end(); it++)
		cout << *it << " ";
	cout << endl;
	cout << "size() " << c.size()
		 << "max_size() " << c.max_size()
		 << "front() " << c.front()
		 << "back() " << c.back()
		 << endl;
}
template <typename ContainerOfInt> void basicOps(char *s)
{
	cout << "------- " << s << " -------" << endl;
	typedef ContainerOfInt Ci;
}






