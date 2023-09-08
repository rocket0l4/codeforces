#include<bits/stdc++.h>
#include <cstdint>
#include <vector>
using namespace std;

// Calculate the CRC checksum for a block of data
uint32_t crc32(const std::vector<uint8_t> &data, uint32_t polynomial)
{
    uint32_t crc = 0xffffffff;

    for (uint8_t b : data)
    {
        crc ^= b;

        for (int i = 0; i < 8; i++)
        {
            if (crc & 1)
            {
                crc = (crc >> 1) ^ polynomial;
            }
            else
            {
                crc = crc >> 1;
            }
        }
    }

    return crc ^ 0xffffffff;
}