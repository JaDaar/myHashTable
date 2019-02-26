// HashTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int main()
{
	bhash h;
	h.Add("Manifest", "NBC");
	h.Add("NCIS", "CBS");
	h.Add("NCIS", "CBS All Access");
	h.Add("Star Trek", "NBC");
	h.Add("Star Trek", "CBS");
	h.Add("Star Trek", "CBS All Access");
	h.Add("Star Trek:Discovery", "CBS All Access");
	h.Add("Star Trek:The Next Generation", "UPN");
	h.Add("Star Trek:Deep Space Nine", "UPN");
	h.Add("Star Trek:Voyager", "FOX");
	h.Add("Star Trek:Enterprise", "FOX");
	h.Add("Star Trek:The Next Generation", "NETFLIX");
	h.Add("Star Trek:Deep Space Nine", "NETFLIX");
	h.Add("Star Trek:Voyager", "NETFLIX");
	h.Add("Star Trek:Enterprise", "NETFLIX");
	h.Print(false);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
