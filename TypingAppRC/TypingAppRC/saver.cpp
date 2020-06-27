#include "saver.h"
#include <QMessageBox>
#include <iostream>

void Saver::save( std::string path ){
    std::fstream file( path );
        if(!file.is_open()){
            throw MyException();
        }

    std::string tmpPath = path;

    char c = ' ';
    int i = ( tmpPath.length() );

    while(c != '/'){
        c = tmpPath[--i];
    }

    std::string fileName;
    while(i != path.length() ){
        fileName+=tmpPath[i+1];
        i++;
    }
    std::string newPath = "/home/asip/p/proe_2020l_gr_103_typig_app/TypingAppRC/TypingAppRC/Database/";
    newPath += fileName;

    std::fstream database( "/home/asip/p/proe_2020l_gr_103_typig_app/TypingAppRC/TypingAppRC/Database/fileList.txt", std::ios::app );
    database << fileName << "\n";
    database.close();

    fileName += '\n';

    std::ifstream From( path, std::ios::binary);
    std::ofstream To( newPath, std::ios::binary);

    From >> To.rdbuf();

}
