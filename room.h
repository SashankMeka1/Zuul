#include <iostream>
#include <map>
#include <cstring>
#include <vector>
using namespace std;
struct Item{
	char name[10];
	Item(const char * item_name){
		strcpy(name, item_name);
        }//item names
};
class Room{
	public:
		static char input[150];
		map<char, Room*> exits;//inputs inventory room inventory and functions
		vector<Item*> item_list;
		static vector <Item*> inventory;
		void printItem();
		Room* nextRoom();
		void pickItem(char * item_name);
		void printInv();
		static char * item_ptr;
		void dropItem(char * item_name);
		int i =0;
		int j=0;
};
