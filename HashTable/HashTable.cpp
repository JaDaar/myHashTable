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
	//h.Print(false);
	h.PrintItemsInIndex(848);
}