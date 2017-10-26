#include <iostream>
#include <fstream>

#include "json/json.h"
#include <string>
//using namespace std;

// reference:https://my.oschina.net/Tsybius2014/blog/289527

int main() {
//    std::cout << "Hello, World!" << std::endl;
    std::string fname = "./config.json";
    Json::Reader reader;
    Json::Value root;
    std::ifstream is;
    is.open(fname, std::ios::binary);

    if(reader.parse(is, root)){
        double img0_max_multiplier = root["img0"]["max_multiplier"].asDouble();
        bool img0_augment_during_test = root["img0"]["augment_during_test"].asBool();
        std::cout << img0_augment_during_test << "\t" << img0_max_multiplier << std::endl;

    }
    else{
        std::cout << "error" << std::endl;
    }



    return 0;
}

