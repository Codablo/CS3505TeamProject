//main.cc,



#include "server.hpp"
#include "spreadsheet.h"
#include "spreadsheetManager.h"
#include <iostream>



int main( int argc, char** argv){
    
    try
    {
        if (argc != 2)
        {
            std::cerr << "Usage: async_tcp_echo_server <port>\n";
            return 1;
        }
        
        boost::asio::io_service io_service;
        
        using namespace std; // For atoi.
        server s(io_service, atoi(argv[1]));
        cout << "Server Started." << endl;
        
        io_service.run();
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << "\n";
    }
    
    return 0;
}

