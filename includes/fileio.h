#ifndef FILEIO_H
#define FILEIO_H
#include"../includes/constants.h"
#include <vector>
#include <string>


int loadData(const std::string filename,std:: vector<process> &myProcesses);

//attempt to create or open file 'filename' to write all data to
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif
