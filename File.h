#ifndef FILE_H
#define FILE_H
#include "String.h"


class File
{
    public:
        File();
        void open(const char* fileName);
        void close(const char* fileName);
        void save(const char* fileName);
        void saveas(const char* fileName);
        void Exit();
        void help();
        virtual ~File();

    protected:

    private:
};

#endif // FILE_H
