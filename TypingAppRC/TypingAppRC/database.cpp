#include "database.h"
#include <fstream>
#include <iostream>
#include <QMessageBox>

Database::Database(){
    updataDatabase();
}

void Database::updataDatabase(){
    fileNames.clear();
    std::fstream file;
    std::string line;
    file.open("/home/asip/p/proe_2020l_gr_103_typig_app/TypingAppRC/TypingAppRC/Database/fileList.txt");
    if( file.good() ){
        while( getline( file, line ) ){
            fileNames.push_back( line );
        }
        file.close();
    }
}

void Database::addFile( std::string path ){
    Saver saver;
    saver.save( path );
}

void Database::deleteFile ( std::string fileName ){

}

std::string Database::getFileName( unsigned int index ){
    return fileNames.at( index );
}

int Database::getFileNamesSize(){
    return fileNames.size();
}
