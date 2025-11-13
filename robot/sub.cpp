#include <unitree/robot/channel/channel_subscriber.hpp>
#include <unitree/common/time/time_tool.hpp>
#include "motorCmd.hpp"

#define TOPIC "rt/motorCmd"

using namespace unitree::robot;
using namespace unitree::common;

void Handler(const void* msg)
{
    const ROBOT::MotorCmd* pm = (const ROBOT::MotorCmd*)msg;

    std::cout << "position:" << pm->q()[0] << std::endl;
}

int main()
{
    ChannelFactory::Instance()->Init(0);
    ChannelSubscriber<ROBOT::MotorCmd> subscriber(TOPIC);
    subscriber.InitChannel(Handler);

    sleep(5);
    subscriber.CloseChannel();

    std::cout << "reseted. sleep 3" << std::endl;

    sleep(3);
    subscriber.InitChannel();

    sleep(5);
    subscriber.CloseChannel();

    std::cout << "reseted. sleep 3" << std::endl;

    sleep(3);
    subscriber.InitChannel();

    while (true)
    {
        sleep(10);
    }

    return 0;
}
