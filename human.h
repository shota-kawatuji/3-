#pragma once

class Human
{
public:
	Human(const char* name);
	~Human();
	Human(const Human& obj);

private:
	const char* name;
};
