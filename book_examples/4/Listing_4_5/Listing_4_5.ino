int time_pick; // Переменная для хранения времени свечения светодиода.
void setup() // Настройка
{
 //Устанавливаем скорость порта связи Arduino - ПК.
 Serial.begin(9600);
 // Переводим 13 порт в состояние вывода информации
 pinMode(13, OUTPUT);  
 time_pick=200; //Период свечения светодиода.
}
// Основная программа.
void loop() 
{
  char char1;
 // если поступили данные.
 if (Serial.available() > 0) 
 {
  // считываем символ.  
  char1 = Serial.read();
    if(char1=='1') //Если нажата "1".
  {time_pick=1000;} //Задержка мигания 1 сек

  else
  { //Если нажата "2". // Задержка мигания 0,5 сек
    if(char1=='2') 
    {
      time_pick=500;} 
      // Если нажато что-то другое.
      else {time_pick=100;}} // Задержка мигания 0,1 сек
 }
   digitalWrite(13, 1);   // Включает светодиод на плате.
  delay(time_pick);           // Ждет 
  digitalWrite(13, 0);   // Выключает светодиод.
  delay(time_pick);           // Ждет 
}

