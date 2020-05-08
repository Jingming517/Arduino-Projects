int Led=3;//定义LED 接口
int Shock=6;//定义敲击传感器接口
int val;//定义数字变量val
void setup()
{
pinMode(Led,OUTPUT);//定义LED 为输出接口
pinMode(Shock,INPUT);//定义敲击传感器为输出接口
}
void loop()
{ val=digitalRead(Shock);//将数字接口3的值读取赋给val 
if(val==HIGH) {
digitalWrite(Led,LOW); }
else
{ digitalWrite(Led,HIGH); }
}
