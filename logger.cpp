#include "logger.h"
#include"QDateTime"
Logger*Logger::_instance=nullptr;
Logger::Logger()
{
    auto fileName=QDateTime::currentDateTime().toString()+".txt";
     logFile=new QFile(fileName);
    logFile->open(QFile::WriteOnly);

}

Logger*Logger::instance()
{
    if(_instance==nullptr)
    {
        _instance=new Logger();
    }
    return _instance;
}
void Logger::Log(QString message)
{

     auto log=QDateTime::currentDateTime().toString()+".txt";
    logFile->write(log.toUtf8());
    logFile->flush();
}

Logger::~Logger()
{
    logFile->close();
    delete logFile;
}
