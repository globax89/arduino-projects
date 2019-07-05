// Подключаем библиотеку, управляющую дальномером.
#include "sonar.h"
void setup()
{
  // Инициализируем дальномер Trig = 13, Echo = 12.
  Sonar_init(13, 12);
  // При инициализации задаем скорость порта для связи с ПК.
  Serial.begin(9600); // start the serial port
}
void loop()
{
  // В цикле loop отправляем значение, 
  //полученное с дальномера, в порт через 1,5 с.
  // получаем дистанцию в сантиметрах с лимитом 300 см.
  int prepyatstvie = Sonar(300);  
  Serial.print("Distance="); // оформляем вывод.
  Serial.print(prepyatstvie); // выводим дистанцию.
  Serial.println(" cm."); // оформляем вывод.
  delay(1500); // приостанавливаем программу.
}  

