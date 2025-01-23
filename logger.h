#ifndef LOGGER_H
#define LOGGER_H
#include"QString"
#include "QFile"

class Logger
{
public:
    static Logger*instance();
    Logger();

    void Log(QString message);

private:
    QFile*logFile;
    ~Logger();
    static Logger*_instance;
};

#endif // LOGGER_H
