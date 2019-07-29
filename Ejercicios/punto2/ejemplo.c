#include <unistd.h>
#include <fcntl.h>
 
int main()
{
    int filedesc = open("testfile.txt", O_RDWR | O_CREAT);
    if(filedesc < 0)
        return 1;
 
    if(write(filedesc,"This will be output to testfile.txt\n", 36) != 36)
    {
        write(filedesc,"There was an error writing to testfile.txt\n", 36);    // strictly not an error, it is allowable for fewer characters than requested to be written.
        return 1;
    }
 
    return 0;
}