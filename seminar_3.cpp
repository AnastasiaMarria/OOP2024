#include<iostream>
void func_1(int x);
char* func_2(char* name);

int main()
{
	int z = 3;
	func_1(z);

	char* name = nullptr; //nu las nicio variabila initializata
	name = new char[strlen("Ionut") + 1];
	strcpy_s(name,strlen("Ionut") + 1, "Ionut"); //string copy save    Ionut are lungimea 6, din cauza terminatorului de sir (+1)
	//delete name;
	//name = new char[strlen("Latess3973") + 1];
	name = func_2(name);
	
	delete name;
	
}

void func_1(int x)
{
	x = 7;
	x = 9;
	x++;
}

char* func_2(char* name)
{
	//name = (char*)5;  --NO!
	//name = new char[strlen("Lates") + 1];
	strcpy_s(name, strlen("Lates") + 1, "Lates");
}