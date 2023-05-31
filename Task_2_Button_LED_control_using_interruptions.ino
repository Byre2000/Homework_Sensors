const int LED_R=11;
const int LED_G=10;
const int LED_B=9; // Контакт 10 для подключения светодиода
const int BUTTON=4; // Контакт 2 для подключения кнопки
int tekButton = LOW; // Переменная для сохранения текущего состояния кнопки
int prevButton = LOW; // Переменная для сохранения предыдущего состояния
// к нопки
boolean ledOn = true; // Текущее состояние светодиода (включен/выключен)
void setup()
{
// Сконфигурировать контакт светодиода как выход
Serial.begin(9600);
pinMode (LED_R, OUTPUT);
pinMode (LED_G, OUTPUT);
pinMode (LED_B, OUTPUT);
// Сконфигурировать контакт кнопки как вход
pinMode (BUTTON, INPUT);
}
void loop()
{
tekButton=digitalRead(BUTTON);
if (tekButton == HIGH && prevButton == LOW)
{
// нажатие кнопки – изменить состояние светодиода
ledOn=!ledOn;
digitalWrite(LED_R, ledOn);
digitalWrite(LED_G, ledOn);
digitalWrite(LED_B, ledOn);
}
prevButton=tekButton;

if ( ledOn == true){
  Serial.println ("Включен");
}
else {
  Serial.println ("Выключен");
}
}