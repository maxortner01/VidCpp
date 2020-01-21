#pragma once

#include <vector>

#include "vidcpp/data/DataTypes.h"

namespace vidcpp
{
namespace rformat
{
    struct RiffHeader
    {
        data::FOURCC code;
        unsigned int fileSize;
        data::FOURCC fileType;
    };
    
    struct RiffData
    {
        unsigned int size;
        data::FOURCC type;
        char* data;
    };

    #define RIFFDATA_SIZE sizeof(RiffData) - sizeof(char*)
}

    class RiffFile
    {
        std::vector<rformat::RiffData*> data;

    public:
        RiffFile(const char* filename);
    };
}