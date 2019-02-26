#include "pch.h"
#include <iostream>
#include <string>
#include "hash.h"
using namespace std;

bhash::bhash()
{
	for(int iter=0;iter<tableSize;iter++)
	{
		HashTable[iter] = new item;
		HashTable[iter]->showName = "";
		HashTable[iter]->network = "";
		HashTable[iter]->next = NULL;
	}
}

void bhash::Add(string show, string network)
{
	//	Get a hash value for the key, if it is empty save
	auto index = Hash(show);
	if(HashTable[index]->showName.empty())
	{
		HashTable[index]->showName = show;
		HashTable[index]->network = network;
		count++;
	}else
	{
		//	get the HEAD item in the table
		auto Ptr = HashTable[index];

		// Create a new item to be added to the hashtable
		auto n = new item;
		n->showName = show;
		n->network = network;
		n->next = NULL;

		//	Find the first available spot in the hashtable 
		while(Ptr->next!=NULL)
		{
			//	traverse O(n) till it finds the first item that is null
			Ptr = Ptr->next;
		}
		Ptr->next = n;
		count++;
	}
}

int bhash::Count()
{
	return count;
}

int bhash::NumberOfItemsInIndex(int index)
{
	auto itemCount = 0;
	if(HashTable[index]->showName=="")
	{
		return itemCount;
	}else
	{
		itemCount++;
		auto Ptr = HashTable[index];
		while(Ptr->next!=NULL)
		{
			itemCount++;
			
			Ptr = Ptr->next;
		}
	}
	return itemCount;
}

void bhash::Print(bool showNull)
{
	int number;
	for(auto i=0;i<tableSize;i++)
	{
		number = NumberOfItemsInIndex(i);

		if(showNull==false)
		{
			if(HashTable[i]->showName!="")
			{
				cout << "-------------------------------------------------" << endl;
				cout << "INDEX: = " << i << endl;
				cout << HashTable[i]->showName << endl;
				cout << HashTable[i]->network << endl;
				cout << "Number of Items = " << number << endl;
				cout << "-------------------------------------------------" << endl;
			}
		}else
		{
			cout << "-------------------------------------------------" << endl;
			cout << "INDEX: = " << i << endl;
			cout << HashTable[i]->showName << endl;
			cout << HashTable[i]->network << endl;
			cout << "Number of Items = " << number << endl;
			cout << "-------------------------------------------------" << endl;
		}

	}
}


int ::bhash::Hash(string key)
{
	/*
	 *	Assume an array size of 100.
	 *	Let's assume the key has a hash value of 453
	 *	Then 453/100 =4 with a remainder of 53, the remainder 
	 *	is our INDEX - address where to store the key in the array.
	 */
	auto hash = 0;

	/* In this program, the array size is specified by tableSize*/
	for(auto iter=0;iter<key.length();iter++)
	{
		hash += (int)key[iter];
	}
	//	modulus operator assigns index with the remainder of hash / tableSize
	const auto index = hash % tableSize;

	return index;
}
