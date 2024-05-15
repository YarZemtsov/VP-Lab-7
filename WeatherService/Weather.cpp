#include "Weather.h"
Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) {
	this->city = city;
	this->lon = lon;
	this->lat = lat;
	this->temperature = temperature;
	this->weather = weather;
	this->windSpeed = windSpeed;
	this->clouds = clouds;
}
ostream& operator << (ostream& out, Weather inf) {
	out << inf.city << ":\n";
	out << "   Lon          " << inf.lon << "\n";
	out << "   Lat          " << inf.lat << "\n";
	out << "   Temperature  " << inf.temperature << "\n";
	out << "   Weather      " << inf.weather << "\n";
	out << "   Wind speed   " << inf.windSpeed << "\n";
	out << "   Clouds       " << inf.clouds << "\n";
	return out;
}