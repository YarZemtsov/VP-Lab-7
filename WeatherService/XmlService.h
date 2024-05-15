#pragma once
#include "Weather.h"
#include "Service.h"
#include <iostream>
#include <fstream>
#include <string>
#include "pugixml-1.14/src/pugixml.hpp"
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};
