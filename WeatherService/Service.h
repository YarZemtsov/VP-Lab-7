#pragma once
#include <string>
#include "Weather.h"
using namespace std;
class Service
{
public:
	virtual Weather getWeather(string s) = 0;
	virtual ~Service() {};
};

