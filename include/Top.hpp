
#ifndef TOP_HPP
#define TOP_HPP
class Top
{
private:
	char *value = new char;
	int *color = new int;
	
public:
	
	Top *ptr;
	Top();
	int addcolor(int clr);
	
	void colorassign();
	char show();

	~Top();

	
};
#endif