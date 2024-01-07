#pragma once

class IStartStop 
{
    public:
    virtual ~IStartStop() = default;
    virtual bool start() = 0;
    virtual void stop() = 0;
};