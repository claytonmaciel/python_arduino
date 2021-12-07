#include <Adafruit_MLX90614.h>

Adafruit_MLX90614 mlx = Adafruit_MLX90614();
double temp_amb = 0;
double temp_obj = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Sensor de Temperatura MLX90614");

  mlx.begin();
}

void loop() {
  temp_amb = mlx.readAmbientTempC();
  temp_obj = mlx.readObjectTempC();

  Serial.print("Ambiente = ");
  Serial.print(temp_amb);
  Serial.print("*C\tObjeto = ");
  Serial.print(temp_obj);
  Serial.println("*C");
  delay(1000);
}
