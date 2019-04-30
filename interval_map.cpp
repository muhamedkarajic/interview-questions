// Task Description

// interval_map<K,V> is a data structure that efficiently associates intervals of keys of type K with values of type V. Your task is to implement the assign member function of this data structure, which is outlined below.
// interval_map<K, V> is implemented on top of std::map. In case you are not entirely sure which functions std::map provides, what they do and which guarantees they provide, we provide an excerpt of the C++ standard here:
// Each key-value-pair (k,v) in the std::map means that the value v is associated with the interval from k (including) to the next key (excluding) in the std::map.

// Example: the std::map (0,'A'), (3,'B'), (5,'A') represents the mapping

//     0 -> 'A'
//     1 -> 'A'
//     2 -> 'A'
//     3 -> 'B'
//     4 -> 'B'
//     5 -> 'A'
//     6 -> 'A'
//     7 -> 'A'
//     ... all the way to numeric_limits<int>::max()

// The representation in the std::map must be canonical, that is, consecutive map entries must not have the same value: ..., (0,'A'), (3,'A'), ... is not allowed. Initially, the whole range of K is associated with a given initial value, passed to the constructor of the interval_map<K,V> data structure.

// Key type K
//     besides being copyable and assignable, is less-than comparable via operator<
//     is bounded below, with the lowest value being std::numeric_limits<K>::lowest()
//     does not implement any other operations, in particular no equality comparison or arithmetic operators

// Value type V
//     besides being copyable and assignable, is equality-comparable via operator==
//     does not implement any other operations

#include <iostream>
#include <map>
#include <limits>

template<typename K, typename V>
class interval_map {
	std::map<K, V> m_map;

public:
	auto getIterator(K const& index)
	{
		K position = index;
		auto it = m_map.begin();
		while (position != 0)
			it++;
		return it;
	}


	void Print() const
	{
		for (auto it = m_map.begin(); it != m_map.end(); ++it)
			std::cout << it->first << " -> " << it->second << '\n';
	}


	// constructor associates whole range of K with val by inserting (K_min, val)
	// into the map
	interval_map(V const& val) {
		m_map.insert(m_map.end(), std::make_pair(std::numeric_limits<K>::lowest(), val));
	}

	// Assign value val to interval [keyBegin, keyEnd).
	// Overwrite previous values in this interval.
	// Conforming to the C++ Standard Library conventions, the interval
	// includes keyBegin, but excludes keyEnd.
	// If !( keyBegin < keyEnd ), this designates an empty interval,
	// and assign must do nothing.
	void assign(K const& keyBegin, K const& keyEnd, V const& val) {
		if (!(keyBegin < keyEnd))
		{
			return;
		}

		bool test = false;
		if (keyBegin == 0)//if it should change it from beginning then dont check the one before
		{
			test = true;
		}
		if (keyBegin + 1 > m_map.size())//if it's adding to the current array just add it
		{
			for (unsigned int j = keyBegin; j < keyEnd; j++)
				m_map[j] = val;
			return;
		}
		else
		{
			for (unsigned int i = keyBegin; i < keyEnd; i++)//chance everything but if the one before is different and until the one after is also different
			{
				if (((test == true || !(m_map[i - 1] == val)) && (i + 1 >= m_map.size() || !(m_map[i + 1] == val))))
				{
					m_map[i] = val;
					test = true;
				}
			}
		}
	}



	// look-up of the value associated with key
	V const& operator[](K const& key) const {
		return (--m_map.upper_bound(key))->second;
	}
};

// Many solutions we receive are incorrect. Consider using a randomized test
// to discover the cases that your implementation does not handle correctly.
// We recommend to implement a test function that tests the functionality of
// the interval_map, for example using a map of unsigned int intervals to char.


const char* crt = "\n--------------------\n";
int main()
{
	interval_map<unsigned int, char> intervalMap('B');

	//TEST 1:
//	intervalMap.assign(1, 8, 'A');
//	intervalMap.assign(4, 5, 'B');
//	intervalMap.Print();
//	std::cout << crt;
//	intervalMap.assign(1, 6, 'B');
//	intervalMap.Print();

	//TEST 2:
	intervalMap.assign(1, 10, 'B');
	intervalMap.assign(5, 6, 'A');
	intervalMap.assign(8, 9, 'A');
	intervalMap.Print();
	std::cout << crt;
	intervalMap.assign(1, 10, 'A');
	intervalMap.Print();


//	intervalMap.assign(0, 5, 'B');
//	intervalMap.Print();



	system("PAUSE>0");
	return 0;
}

/*Type requirements are met: You must adhere to the specification of the key and value type given above. 
For example, many solutions we receive use operations other than those that are explicitly stated in the task 
description. We have to reject many solutions because they assume that V is default-constructible, e.g., by 
using std::map::operator[].*/ 