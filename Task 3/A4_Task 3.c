
#include <stdio.h>

struct WeatherAll {
    float temperature;
    int humidity;
    char status[8];
};

union SensorData {
    float temperature;
    int humidity;
    char status[8];
};

struct WeatherPacket {
    int type;

    union SensorData data;
};

void show(struct WeatherPacket packet)
{
    switch (packet.type)
    {
        case 1:
            printf("Sensor Type: Temperature\n");
            printf("Temperature: %.2f C\n",
                   packet.data.temperature);
            break;

        case 2:
            printf("Sensor Type: Humidity\n");
            printf("Humidity: %d%%\n",
                   packet.data.humidity);
            break;

        case 3:
            printf("Sensor Type: Status\n");
            printf("Status: %s\n",
                   packet.data.status);
            break;

        default:
            printf("Invalid sensor type\n");
    }
}

int main()
{
    struct WeatherAll all;
    struct WeatherPacket packet;

    all.temperature = 32.5;
    all.humidity = 65;
    snprintf(all.status, sizeof(all.status), "NORMAL");

    printf("STRUCTURE SIZE: %lu bytes\n",
           (unsigned long)sizeof(all));

    printf("UNION SIZE: %lu bytes\n",
           (unsigned long)sizeof(union SensorData));

    printf("\nWEATHER SENSOR DATA\n");

    packet.type = 1;
    packet.data.temperature = 32.5;
    show(packet);

    packet.type = 2;
    packet.data.humidity = 65;
    show(packet);

    packet.type = 3;
    snprintf(packet.data.status,
             sizeof(packet.data.status), "NORMAL");
    show(packet);

    return 0;
}

