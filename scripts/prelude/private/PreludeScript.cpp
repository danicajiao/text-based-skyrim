#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "../public/PreludeScript.h"
using namespace std;

void initPreludeScript(HANDLE *hStdoutPtr)
{
	cls(*hStdoutPtr);
	this_thread::sleep_for(chrono::seconds(2));
	cout << "\n\n\n\n\n\t\t\t\t               Daniel Cajiao Presents               \n\n";
	this_thread::sleep_for(chrono::seconds(3));
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
	cout << "Slowly, it comes to your attention that you're on this wagon with three others, each with a lifeless expression on\ntheir faces.\n";
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
	this_thread::sleep_for(chrono::seconds(6));

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
	this_thread::sleep_for(chrono::seconds(5));
	cout << "\"But if they captured you... Oh gods, where are they taking us!?\"\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "Ralof:\n\"I don't know where we're going, but Sovngarde awaits.\"\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Lokir:\n\"No, this can't be happening. This isn't happening.\"\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Ralof:\n\"Hey, what village are you from, horse thief?\"\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Lokir:\n\"Why do you care?\"\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Ralof:\n\"A Nord's last thoughts should be of home.\"\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Lokir:\n\"Rorikstead. I'm... I'm from Rorikstead.\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "The convoy approaches a village. A soldier calls out to the lead wagon.\n\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "Imperial Soldier:\n\"General Tullius, sir! The headsman is waiting!\"\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "General Tullius:\n\"Good. Let's get this over with.\"\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Lokir:\n\"Shor, Mara, Dibella, Kynareth, Akatosh. Divines, please help me.\"\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "Ralof:\n\"Look at him, General Tullius the Military Governor.\"\n";
	this_thread::sleep_for(chrono::seconds(5));
	cout << "\"And it looks like the Thalmor are with him. Damn elves. I bet they had something to do with this.\"\n";
	this_thread::sleep_for(chrono::seconds(6));
	cout << "\"This is Helgen. I used to be sweet on a girl from here. Wonder if Vilod is still making that mead with juniper\nberries mixed in.\"\n";
	this_thread::sleep_for(chrono::seconds(8));
	cout << "\"Funny... when I was a boy, Imperial walls and towers used to make me feel so safe.\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "A man and son watch you and the prisoners pull into town.\n\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Haming:\n\"Who are they, daddy? Where are they going?\"\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Torolf:\n\"You need to go inside, little cub.\"\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Haming:\n\"Why? I want to watch the soldiers.\"\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Torolf:\n\"Inside the house. Now.\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "The wagon comes to a sudden halt and the horsemen begin dismounting.\n\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "Imperial Soldier:\n\"Get these prisoners out of the carts. Move it!\"\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "Lokir:\n\"Why are we stopping?\"\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Ralof:\n\"Why do you think? End of the line.\"\n";
	this_thread::sleep_for(chrono::seconds(5));
	cout << "\"Lets go. Shouldn't keep the gods waiting for us.\"\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Lokir:\n\"No! Wait! We're not rebels!\"\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Ralof:\n\"Face your death with some courage, thief.\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Lokir cries out to you as a soldier yanks him from the wagon.\n\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Lokir:\n\"You've got to tell them! We weren't with him! This is a mistake!\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "You, Ralof, and Ulfric are taken off the wagon, watched by an Imperial Captain and an Imperial Soldier, Hadvar,\nwho is holding a list.\n\n\n";
	this_thread::sleep_for(chrono::seconds(8));

	cout << "Imperial Captain:\n\"Step towards the block when we call your name. One at a time.\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "Ralof:\n\"Empire loves their damn lists.\"\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Hadvar:\n\"Ulfric Stormcloak. Jarl of Windhelm.\n\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "The prisoners from the other wagons are already at the block. Ulfric obeys and joins them.\n\n\n";
	this_thread::sleep_for(chrono::seconds(7));

	cout << "Ralof:\n\"It has been an honor. Jarl Ulfric.\"\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Hadvar:\n\"Ralof of Riverwood.\n\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Ralof joins Ulfric and the other prisoners at the block.\n\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Hadvar:\n\"Lokir of Rorikstead.\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Lokir:\n\"No, I'm not a rebel! You can't do this!\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Lokir goes into a full sprint in the attempt of saving his own life.\n\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "Imperial Captain:\n\"Halt!\"\n\n";
	this_thread::sleep_for(chrono::seconds(2));

	cout << "Lokir:\n\"You're not going to kill me!\"\n\n";
	this_thread::sleep_for(chrono::seconds(3));

	cout << "Imperial Captain:\n\"Archers!\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(2));

	cout << "Two Imperial Legionnaires pull out their bows and Steel Arrows and shoot Lokir dead before he gets too far.\n";
	this_thread::sleep_for(chrono::seconds(8));
	cout << "The Imperial Captain turns her attention back to the other prisoners.\n\n\n";
	this_thread::sleep_for(chrono::seconds(6));

	cout << "Imperial Captain:\n\"Anyone else feel like running?\"\n\n\n";
	this_thread::sleep_for(chrono::seconds(5));

	cout << "No one dared to move a muscle.\n\n\n";
	this_thread::sleep_for(chrono::seconds(4));

	cout << "Hadvar:\n\"Wait. You there. Step forward. Who are you?\n\n";
	this_thread::sleep_for(chrono::seconds(8));
}
