#include <IRremote.h>




int reciver =13;
void setup()
{
  IrReceiver.begin(13);
    Serial.begin(9600);
}

void loop()
{
  
  if(IrReceiver.decode()){
    Serial.println(IrReceiver.decodedIRData.decodedRawData);
    delay(100);
    IrReceiver.resume();
  }
}