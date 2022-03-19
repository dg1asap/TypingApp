#include "reader.h"


void Reader::read( std::string fileName, std::vector < std::string > & newText){
 //   std::vector < std::string > newText;
       std::fstream file;
       std::string word;

       std::string path = "/home/asip/p/proe_2020l_gr_103_typig_app/TypingAppRC/TypingAppRC/Database/";
       path += fileName;

       file.open( path );
       while(file >> word) {
          newText.push_back( word );
         // std::cout << word << std::endl;
       }
       file.close();
}

