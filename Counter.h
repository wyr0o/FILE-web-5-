#ifndef PERSON_H
#define PERSON_H


class counter
{
private:
	int count{};
	std::string var{};
public:
	counter(int setCount);
	counter();

	void plus();
	void minus();
	int getValue();
};

#endif