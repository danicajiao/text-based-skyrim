#include <string>
#include <fstream>
#include "ESaveType.h"


class SaveData
{
public:
	SaveData(int saveID);

private:
	bool firstTime;
	int mainQuestChapter;
	int mainQuestStep;
};