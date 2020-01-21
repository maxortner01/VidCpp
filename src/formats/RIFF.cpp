#include <vidcpp/vidcpp.h>

#include <cassert>
#include <fstream>

namespace vidcpp
{
    RiffFile::RiffFile(const char* filename)
    {
        using namespace rformat;

        std::ifstream file(filename, std::ios::binary);
        assert(file);

        RiffHeader header;

        file.read((char*)&header, sizeof(RiffHeader));

        std::cout << "Code: " << header.code << "\n";
        std::cout << "Size: " << header.fileSize << "\n";
        std::cout << "Type: " << header.fileType << "\n";

        assert(header.code == "RIFF");

        RiffData* data = new RiffData;
        while (file.read((char*)data, RIFFDATA_SIZE))
        {
            
        }

        data::FOURCC id;
        file.read((char*)id.byte, 4);

        std::cout << id << "\n";
    }
}