#include <bits/stdc++.h>
using namespace std;

// C++ STL:

// Containers 	-> OK
// Iterators	-> OK
// Functions    -> No Need
// Algorithms	-> OK

// Containers and Iterators:

// PAIR
void explainPair()
{
	pair<int, int> p = {1, 3};
	cout << p.first << " " << p.second << endl;
	// nested pairs
	pair<int, pair<int, int>> p2 = {1, {3, 4}};
	cout << p.first << " " << p2.second.second << " " << p2.second.first << endl;

	// array of pairs
	pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
	cout << arr[1].second << endl;
	
}

// VECTOR
void explainVector()
{

	vector<int> v;

	v.push_back(1);
	v.emplace_back(2);
	// emplace_back is faster than push_back

	vector<pair<int, int>> vec;
	vec.push_back({1, 2});
	vec.emplace_back(1, 2); // it will auto take them as pair

	vector<int> v2(5, 100);
	// v2 = {100, 100, 100, 100, 100}

	vector<int> v3(5);
	// zero or grabag value
	// v3 = {0, 0, 0, 0, 0}

	// vector copy:
	vector<int> v4(5, 20);
	vector<int> v5(v4);

	// access vector:
	cout << v[0] << " " << v.at(0);

	cout << v.back() << " " << v.front();

	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	// iterator - Another way:
	vector<int>::iterator it = v.begin();
	cout << *(it) << " ";

	it++;
	it = it + 2;
	cout << *(it) << " ";

	vector<int>::iterator it2 = v.end();
	// rend, rbegin = reverse end, reverse begin -> Not Used
	// vector<int>::iterator it3 = v.rend();
	// vector<int>::iterator it4 = v.rbegin();

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *(it) << " ";
	}

	// better Way to access vector
	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *(it) << " ";
	}

	// for each loop
	for (auto it : v)
	{
		cout << it << " ";
	}

	vector<int> vec2 = {10, 20, 12, 23};
	// {10, 20, 12, 23}
	vec2.erase(vec2.begin() + 1); // {10, 12, 23}

	vector<int> vec3 = {10, 20, 12, 23, 35};
	vec3.erase(vec3.begin() + 2, vec3.begin() + 4); // {10, 20, 35} [start, end)

	// Insert function
	vector<int> vec4(2, 100);			  // {100, 100}
	vec4.insert(vec4.begin(), 300);		  // {300, 100, 100}
	vec4.insert(vec4.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

	vector<int> copy(2, 50); // {50, 50}
	vec4.insert(vec4.begin(), copy.begin(), copy.end());
	// {50, 50, 300, 10, 10, 100, 100}

	vector<int> vec5 = {10, 20};
	// length of vector
	cout << vec5.size(); // 2

	v.pop_back();

	vector<int> vec6 = {10, 20};
	vector<int> vec7 = {30, 40};
	vec6.swap(vec7); // vec6 -> {30, 40}, vec7 -> {10, 20}

	v.clear(); // erase the entire vector

	cout << v.empty(); // give true or false
}

// LIST
void explainList()
{
	list<int> ls; // doubly linked list

	ls.push_back(2);	// {2}
	ls.emplace_back(4); // {2, 4}

	ls.push_front(5); // {5, 2, 4}

	ls.emplace_front(6); // {6, 5, 2, 4};

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap

	for (auto it : ls)
	{
		cout << it << " ";
	}
}

// DEQUE - similar to vector
void explainDeque()
{
	deque<int> dq;
	dq.push_back(1);	 // {1}
	dq.emplace_back(2);	 // {1, 2}
	dq.push_front(4);	 // {4, 1, 2}
	dq.emplace_front(3); // {3, 4, 1, 2}

	dq.pop_back();	// {3, 4, 1}
	dq.pop_front(); // {4, 1}

	dq.back(); // print 1

	dq.front(); // print 4

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap
	for (auto it : dq)
	{
		cout << it << " ";
	}
}

// STACK - LIFO
void explainStack()
{
	stack<int> st;
	st.push(1);	   // {1}
	st.push(2);	   // {2, 1}
	st.push(3);	   // {3, 2, 1}
	st.push(3);	   // {3, 3, 2, 1}
	st.emplace(5); // {5, 3, 3, 2, 1}

	cout << st.top(); // print 5

	st.pop(); // st looks like {3, 3, 2, 1}

	cout << st.top(); // 3
	cout << endl;

	cout << st.size(); // 4
	cout << endl;

	cout << st.empty();
	cout << endl;

	stack<int> st1, st2;
	st1.swap(st2);

	// push, pop top -> O(1)
}

// QUEUE - FIFO
void explainQueue()
{
	queue<int> q;
	q.push(1);	  // {1}
	q.push(2);	  // {1, 2}
	q.emplace(4); // {1, 2, 4}

	q.back() += 5;

	cout << q.back(); // prints 9
	cout << endl;

	// Q is {1, 2, 9}
	cout << q.front(); // print 1
	cout << endl;

	q.pop(); // {2, 9}

	cout << q.front(); // print 2

	// size swap empty same as stack

	// 	all operation O(1) times
}

// PRIORITY QUEUE
void explainPQ()
{
	// MAX HEAP
	priority_queue<int> pq;

	pq.push(5);		// {5}
	pq.push(2);		// {5, 2}
	pq.push(8);		// {8, 5, 2}
	pq.emplace(10); // {10, 8, 5, 2}

	cout << pq.top(); // prints 10
	cout << endl;

	pq.pop(); // {8, 5, 2}

	cout << pq.top(); // prints 8
	cout << endl;

	// size swap empty function same as others

	// MIN HEAP
	priority_queue<int, vector<int>, greater<int>> pq2;
	pq2.push(5);	 // {5}
	pq2.push(2);	 // {2, 5}
	pq2.push(8);	 // {2, 5, 8}
	pq2.emplace(10); // {2, 5, 8, 10}

	cout << pq2.top(); // print 2

	// push, pop -> logn, data stored in TREE type structure
	// top -> O(1)
}

// SET
void explainSet()
{
	// SORTED, UNIQUE
	set<int> st1;

	st1.insert(1);
	st1.emplace(2); // {1}
	st1.insert(2);	// {1, 2}
	st1.insert(4);	// {1, 2, 4}
	st1.insert(3);	// {1, 2, 3, 4}

	/* Functionality of insert in vector
	 can be used also, that only increases
	 efficiency */

	// begin(), end(), rbing(), rend(), size(),
	// empty() and swap() are same as those of above

	// {1, 2, 3, 4, 5}
	auto it = st1.find(3);

	// {1, 2, 3, 4, 5}
	auto it2 = st1.find(6); // 6 is not present, so it will give -> st1.end()

	// {1, 4, 5}
	st1.erase(5); // erases 5 // take logarithmic time

	int cnt = st1.count(1);

	auto it3 = st1.find(3);

	st1.erase(it); // it takes constant time

	// {1, 2, 3, 4, 5}
	auto it4 = st1.find(2);
	auto it5 = st1.find(4);
	st1.erase(it4, it5); // after erase {1, 4, 5} [first, last)

	// lower_bound() and upper_bound() function works in the same way
	// as in vector it does.

	// This is the syntax
	auto it9 = st1.lower_bound(2);
	auto it10 = st1.upper_bound(3);

	// insert, erase, find -> (logN)
}

// MULTI SET
void explainMultiSet()
{
	// Multiple Values Allowed -> Sorted but not unique

	multiset<int> ms;
	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}

	ms.erase(1); // all 1's erased

	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}
	ms.insert(1); // {1, 1, 1, 1}

	int cnt = ms.count(1); // print 4

	// only a single one erased
	ms.erase(ms.find(1));

	// ms.erase(ms.find(1), ms.find(1)+2);

	// rest all function same as set
}

//   
void explainUSet()
{
	// UNIQUE but NOT SORTED
	unordered_set<int> st;

	// any order

	// lower_bound and upper_bound function does not works, rest all function are same
	// as above, it does not stores in any
	// particular order, it has a better complexity
	// than set in most cases, except some when collision happens

	// most of the cases tc -> O(1)
	// worst case -> O(N)
}

// MAP
void explainMap()
{
	// KEY , VALUE Pair
	// KEYs will be stored in SORTED, UNIQUE order
	map<int, int> mpp;

	map<int, pair<int, int>> mpp2;
	map<pair<int, int>, int> mpp3;

	mpp[1] = 2;
	mpp.emplace(3, 1);

	mpp.insert({2, 4});

	mpp3[{2, 3}] = 10; // {{2,3},10}

	/*
	{
		{1, 2}
		{2, 4}
		{3, 1}
	}
	*/

	// sorted order of keys, not value

	for (auto it : mpp)
	{
		cout << it.first << " " << it.second << endl;
	}

	cout << mpp[1];
	cout << endl;
	cout << mpp[3];
	cout << endl;

	auto it = mpp.find(2);
	cout << (*it).second << '\n';
	cout << it->second << '\n';

	auto it2 = mpp.find(5); // this value is not exist, so it point mpp.end()
							// means after the map

	// This is the systax
	auto it3 = mpp.lower_bound(2);
	auto it4 = mpp.upper_bound(3);

	// erase, swap, size, empty, are same as above
}

// MULTI MAP
void explainMultimap()
{

	// everything same as map, only it can store multiple keys
	// only mpp[key] cannot be used here

	// duplicate keys
}

// UNORDERED MAP
void mexplainUnorderedMap()
{

	// sae as set and unordered_Set difference.
	// not store in sorted, randomize
	// not duplicate, has unique keys

	// map works log N times
	// unordered_map all most all cases works constastand times O(1)
	// worse case, it go O(N) times
}

// Algorithms:

// comparator
bool comp(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.second != p2.second)
	{
		return p1.second < p2.second;
	}
	return p1.first > p2.first;
}

void explainExtra()
{
	// array
	int a[] = {3, 5, 6, 7, 2, 5, 9};
	int n = sizeof(a) / sizeof(a[0]);
	// sort in ascending order
	sort(a, a + n);
	sort(a + 2, a + 4);
	// Sort in Descending Order
	sort(a, a + n, greater<int>());
	for (auto i : a)
	{
		cout << i << " ";
	}
	cout << endl;

	// max element of an array
	int maxi = *max_element(a, a + n);
	// min element of an array
	int mini = *min_element(a, a + n);
	cout << "max element of array " << maxi << " , min element of array " << mini << endl;

	// vector
	vector<int> v{4, 2, 6, 1, 7, 3, 8};
	sort(v.begin(), v.end());

	pair<int, int> pr[] = {{1, 2}, {2, 1}, {4, 1}};

	// sort it according to second element
	// if second element is same, then sort
	// it according to first element but in descending
	n = 3;

	// Custom Sorting
	cout << "Printing Custom Sorted Pair " << endl;
	sort(pr, pr + n, comp);
	// self return comparator
	// it is a boolean function
	// {{4, 1}, {2, 1}, {1, 2}};
	for (auto it : pr)
	{
		cout << it.first << " " << it.second << endl;
	}
	cout << endl;

	int num = 7;
	int cnt = __builtin_popcount(num); // it will print count of all setbits of 7 -> 111
	cout << "count of setbits in 7 -> " << cnt << endl;
	long long num2 = 165786578687;
	int cnt2 = __builtin_popcountll(num2); // for long long , this method will be used

	string s = "123";

	// important: want to print all permutation?
	// string must be sorted
	sort(s.begin(), s.end());

	cout << "all permutations of string '123' : " << endl;
	do
	{
		cout << s << endl;
	} while (next_permutation(s.begin(), s.end()));
}

int main()
{

	cout << "explainPair:"
		 << endl;
	;
	explainPair();
	cout << "explainVector:"
		 << endl;
	;
	explainVector();

	cout << "explainList:"
		 << endl;
	;
	explainList();
	cout << "explainDeque:"
		 << endl;
	;
	explainDeque();

	cout << "explainStack:"
		 << endl;
	;
	explainStack();
	cout << "explainQueue:"
		 << endl;
	;
	explainQueue();
	cout << "explainPQ:"
		 << endl;
	;
	explainPQ();

	cout << "explainSet:"
		 << endl;
	;
	explainSet();
	cout << "explainMultiSet:"
		 << endl;
	;
	explainMultiSet();
	cout << "explainUSet:"
		 << endl;
	;
	explainUSet();

	cout << "explainMap:"
		 << endl;
	;
	explainMap();
	cout << "explainMultiSet:"
		 << endl;
	;
	explainMultiSet();

	cout << "explainExtra:"
		 << endl;
	;
	explainExtra();

	return 0;
}
