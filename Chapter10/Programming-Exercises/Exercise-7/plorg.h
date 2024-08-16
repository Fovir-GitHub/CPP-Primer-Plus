#ifndef _PLORG_H_
#define _PLORG_H_

#include<string>

class Plorg
{
private:
	std::string name;
	int contentment_index;

public:
	Plorg();
	Plorg(std::string new_name, int ci);
	~Plorg();
	void set_ci(int ci);
	void show();
};

#endif // !_PLORG_H_