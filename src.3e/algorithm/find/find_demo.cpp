#include <algorithm>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
	int array[ 17 ] = { 7,3,3,7,6,5,8,7,2,1,3,8,7,3,8,4,3 };
	int elem = array[ 9 ];
	int *found_it;
	found_it = find( &array[0], &array[17], elem );

	// ????: find the first occurrence of 1 found!
	cout << "find the first occurrence of "
		<< elem << "\t"
		<< ( found_it ? "found!\n" : "not found!\n" );

	string beethoven[] = {
		"Sonata31", "Sonata32", "Quartet14", "Quartet15",
		"Archduke", "Symphony7" };

	string s_elem( beethoven[ 1 ] );
	list< string > slist( beethoven, beethoven+6 );
	list< string >::iterator iter;
	iter = find( slist.begin(), slist.end(), s_elem );

	// ????: find the first occurrence of Sonata32 found!
	cout << "find the first occurrence of "
		<< s_elem << "\t"
		<< ( iter != slist.end() ? "found!\n" : "not found!\n" );

	return 0;
}
