#pragma once
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class bhash final
{
private:
	static const int tableSize=60000;
	int count = 0;

	struct item
	{
		string showName;
		string network;
		item* next;
	};

	item* HashTable[tableSize];
public:
	bhash();
	//	Hashing function
	int Hash(string key);
	void Add(string show, string network);
	int Count();
	int NumberOfItemsInIndex(int index);
	void Print(bool showNull);
	void PrintItemsInIndex(int index);
	void FindShow(string showName);
};