/*
 * TripData.cpp
 *
 *  Created on: 9 lis 2014
 *      Author: Rafa� Prusak
 */


#include "TripData.h"

TripData::TripData(){
	this->id = 0;
	this->routeId = 0;
}

TripData::TripData(const TripData& src){
	this->id = src.id;
	this->routeId = src.routeId;
	this->stopSec = src.stopSec;
	this->name = src.name;
}

TripData::TripData(unsigned int id, unsigned int routeId, std::string name, std::vector<int> stopSec){
	this->id = id;
	this->routeId = routeId;
	this->stopSec = stopSec;
	this->name = name;
}

TripData::~TripData(){

}

TripData& TripData::operator=(const TripData& src){
	if(this == &src){
		return *this;
	}else{
		this->id = src.id;
		this->routeId = src.routeId;
		this->stopSec.clear();
		this->stopSec = src.stopSec;
		this->name = src.name;
		return *this;
	}
}

std::ostream& operator<<(std::ostream& output, const TripData& src){
	output<<"name="<<src.name<<" id="<<src.id<<" routeId="<<src.routeId<<" stops: [";
	for(unsigned int i=0;i<src.stopSec.size();i++){
		if(i != src.stopSec.size() -1){
			output<<src.stopSec[i]<<", ";
		}else{
			output<<src.stopSec[i]<<"]"<<std::endl;
		}

	}
	return output;
}

bool TripData::operator==(const TripData src){
	if( (this->id == src.id) && (this->routeId == src.routeId) ){
		return true;
	}else{
		return false;
	}
}

unsigned int TripData::getId() const{
	return this->id;
}

unsigned int TripData::getRouteId() const{
	return this->routeId;
}
std::vector<int> TripData::getStopSec() const{
	return this->stopSec;
}

std::string TripData::getName() const{
	return this->name;
}
