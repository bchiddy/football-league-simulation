#ifndef IODRIVER_H
#define IODRIVER_H

#include "../include/Team.h"
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>

class IODriver
{
private:

    std::string m_inputFileName;
    std::string m_outputFileName;
    int m_numberOfSeasons;
    std::map<std::string, int> m_positionMap;

public:

    IODriver() {}
    ~IODriver() {}

    IODriver( std::string inputFileName,
              std::string outputFileName, int numberOfSeasons );

    void createPositionMap( std::vector<Team> teams );
    std::vector<Team> parseCSV();
    void createCSVHeader();
    void writeResultToCSV( std::vector<Team> leaguePositions );

};

#endif