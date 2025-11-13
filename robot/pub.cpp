#include <unitree/robot/channel/channel_publisher.hpp>
#include <unitree/common/time/time_tool.hpp>
#include "motorCmd.hpp"

#define TOPIC "rt/motorCmd"

using namespace unitree::robot;
using namespace unitree::common;

int main()
{
    ROBOT::MotorCmd _motorCmd{};

    ChannelFactory::Instance()->Init(0);
    ChannelPublisher<ROBOT::MotorCmd> publisher(TOPIC);

    publisher.InitChannel();

    int i = 0;
    while (true)
    {
        std::array<float, 18> my_new_q_data = {0};
        my_new_q_data[0] = i;
        _motorCmd.q(my_new_q_data);
        // ROBOT::MotorCmd msg(unitree::common::GetCurrentTimeMillisecond(), "HelloWorld.");
        publisher.Write(_motorCmd);
        sleep(1);
        i += 1;
    }

    return 0;
}
