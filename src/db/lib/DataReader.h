/*
 * DataReader.h
 *
 *  Created on: 9 lis 2014
 *      Author: Rafa� Prusak
 */

#ifndef DB_LIB_DATAREADER_H_
#define DB_LIB_DATAREADER_H_

#include <string>
#include <vector>

#include "RouteData.h"
#include "StopData.h"
#include "TripData.h"
#include "StopTimeData.h"
#include "ServiceData.h"

class DataReader{
	public:
		static std::vector<RouteData>    readRoutes(std::string filename);
		static std::vector<StopData>     readStops(std::string filename);
		static std::vector<TripData>     readTrips(std::string filename);
		static std::vector<StopTimeData> readStopTimes(std::string filename);
		static std::vector<ServiceData>  readServices(std::string filename);
};


#endif /* DB_LIB_DATAREADER_H_ */