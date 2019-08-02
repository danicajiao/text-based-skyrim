#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "../public/PreludeScript.h"
using namespace std;

void initPreludeScript(HANDLE *hStdoutPtr)
{
	cls(*hStdoutPtr);
	this_thread::sleep_for(chrono::seconds(2));
	cout << "\n\n\n\n\n\t\t\t\t               Daniel Cajiao Presents               \n\n";
	this_thread::sleep_for(chrono::seconds(2));
	cout << "\t\t\t               An interpretation of Bethesda Studio's               \n";
	this_thread::sleep_for(chrono::seconds(4));
	cls(*hStdoutPtr);
	cout << "\n\n\n\n\n\t\t\t\t------------- The Elder Scrolls V: Skyrim -------------\n\n\n\n\n\n\n";
	this_thread::sleep_for(chrono::seconds(4));
	
	cls(*hStdoutPtr);

	cout << "\t\t\t\t------------- The Elder Scrolls V: Skyrim -------------\n\n\n";
	cout << "The dim glow of a white facade fills your thoughts, gradually brightening.\n";
	this_thread::sleep_for(chrono::seconds(5));
	cout << "You snap out of your daze and realize you are on a wagon making its way down a snowy mountain pass.\n";
	this_thread::sleep_for(chrono::seconds(6));
	cout << "Slowly, it comes to your attention that you're on this wagon with 3 others, each with a lifeless expression on their \nfaces.\n";
	this_thread::sleep_for(chrono::seconds(7));
	cout << "All are seated and bound, including you. The one dressed in finery is gagged.\n\n\n";
	this_thread::sleep_for(chrono::seconds(8));

	cout << "Ralof:\n\"Hey, you. You're finally awake.\"\n";
	this_thread::sleep_for(chrono::seconds(5));
	cout << "\"You were trying to cross the border, right? Walked right into that Imperial ambush, same as us, and that thief over \nthere.\"\n\n";
	this_thread::sleep_for(chrono::seconds(7));

	cout << "Lokir:\n\"Damn you Stormcloaks. Skyrim was fine until you came along. Empire was nice and lazy.\"\n";
	this_thread::sleep_for(chrono::seconds(6));
	cout << "\"If they hadn't been looking for you, I could've stolen that horse and been half way to Hammerfell.\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "Lokir looks over to you.\n\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Lokir:\n\"You there. You and me - we shouldn't be here. It's these Stormcloaks the Empire wants.\"\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Ralof:\n\"We're all brothers and sisters in binds now, thief.\"\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Imperial Soldier:\n\"Shut up back there!\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(4));
	
	cout << "Lokir looks at the gagged man.\n\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Lokir:\n\"And what's wrong with him?\"\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Ralof:\n\"Watch your tongue! You're speaking to Ulfric Stormcloak, the true High King.\"\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "Lokir:\n\"Ulfric? The Jarl of Windhelm? You're the leader of the rebellion.\"\n";
	this_thread::sleep_for(chrono::seconds(6));
	cout << "\"But if they captured you... Oh gods, where are they taking us!?\"\n\n";
	this_thread::sleep_for(chrono::seconds(5));


}