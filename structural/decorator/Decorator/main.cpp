#include <iostream>

#include "filedatastream.h"
#include "encryptiondecorator.h"
#include "compressiondecorator.h"

int main()
{
    FileDataStream fileDataStream("output.txt");
    CompressionDecorator compressionDecorator(&fileDataStream);
    EncryptionDecorator encryptionDecorator(&compressionDecorator);

    std::cout << "Read from file: " <<
                 encryptionDecorator.read(10) << std::endl;
    encryptionDecorator.write("String to write to file.");

    return 0;
}
