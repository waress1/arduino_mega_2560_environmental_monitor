void setup() {
  // put your setup code here,to run once:

}

void loop() {
  // put your main code here. to run repeatedly:
 while (!Serial);

  Serial.begin(115200);
  Serial.println(F("basic test"));
}
