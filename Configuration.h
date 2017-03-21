// Configuration.h

#ifndef _CONFIGURATION_h
#define _CONFIGURATION_h

//Wifi Configuration
static const char *SSID = "AlonIoT"; //The default configuration access point ssid
static const char *password = "12345678"; //The default configuration access point password - at least 8 chars
static const char *webSiteHeader = "Welcome to the Water Sensor cloud server";
static const char *appKey = "appkey"; //your secret app key - should be long enough
//static const char* azureIoTHubDeviceConnectionString = "HostName=[IoTHub].azure-devices.net;DeviceId=[MyLightSwitch];SharedAccessKey=k6UElnivbQgrFGD86LSTPNRmV36cpKMe1OOH5LMc/42k=";
static char* deviceId = "FliessWaterSensor";

static const char* azureIoTHubDeviceConnectionString = "HostName=BlinkyHub.azure-devices.net;DeviceId=FliessWaterSensor;SharedAccessKey=B333wsfq0fh3/w2gA98LPMTLPvVxwmyikM3/1ah1JTo=";

const unsigned int defaultButtonLongTimePeriod = 5000; //5 seconds -> reset
const unsigned int defaultButtonVeryLongTimePeriod = 20000; //20 seconds -> factory reset

//WeMos D1 Mini Board configuration
const int pushButton = 15; //D8 pull down
const int redLed = 4; //D2
const int greenLed = 5; //D1
const int BlueLed = 16; //D0
const int WaterSensor = A0; //A0 pull down 100K by me
const int ButtonPressed = HIGH;
const int ButtonReleased = ButtonPressed == HIGH ? LOW : HIGH;
const int WaterStateReportInterval = 1000 * 60; //every minute


//uncomment this line to change the default behavior of the controller to act as a switch (pulse) instead of an On/Off button
//for example, in case you need to control a garage gate that use the same signal 
//(activate to open the door and activate again to close it)
#define PULSE_COMMAND


//https://azure.microsoft.com/en-us/services/iot-hub/
//https://azure.microsoft.com/en-us/documentation/articles/iot-hub-device-sdk-c-intro/
//uncomment this line to use Azure IoT Hub in addition to the web server
//#define USEAZUREIOTHUB

#endif

