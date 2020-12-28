#include <fstream>
#include "bin.h" // xxd -i bin bin.h
int main(){
    std::ofstream outfile("outbin", std::ios::out | std::ios::binary);
    outfile.write((char*)bin,bin_len);
    outfile.close();
    return 0;
}
