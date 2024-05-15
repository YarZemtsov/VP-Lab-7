#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include "Service.h"
#include "json.hpp"
#include "Weather.h"
using namespace std;
using namespace nlohmann;
class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};


