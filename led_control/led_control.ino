volatile int value1 = 0; 
int bs_val;//定义数字变量val
int sho_val;
int val;

int LED1=2;
int LED2=3;
int LED3=4;
int ballswitch=5;
int shock=6;
int sensor=7;

void setup() {
   pinMode(LED1,OUTPUT);
   pinMode(LED2,OUTPUT);
   pinMode(LED3,OUTPUT);
   pinMode(ballswitch,INPUT);//定义倾斜开关传感器为输出接口
   pinMode(shock,INPUT);
   pinMode(sensor,INPUT);
}

void loop() {
  
  //1. 倾斜开关控制LED1亮灭
  bs_val=digitalRead(ballswitch);
  if(bs_val==HIGH) digitalWrite(LED1,LOW);
  else digitalWrite(LED1,HIGH);

  //2. 当敲击传感器检测有信号时，LED 闪烁
  sho_val=digitalRead(shock);
  if(sho_val==HIGH) digitalWrite(LED2,LOW);
  else digitalWrite(LED2,HIGH);
  
  //3.
  val=digitalRead(sensor);
  if(val==HIGH) digitalWrite(LED3,HIGH);
  else digitalWrite(LED3,LOW);
}
