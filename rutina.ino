
/* Código rutina de Brazo robótico EEZYbotARM MK1 para Curso APLICACIONES MECÁNICAS CON ARUDINO */ 

#include <Servo.h>

Servo myServo1;		//BASE
Servo myServo2;		//HOMBRO
Servo myServo3;		//BRAZO
Servo myServo4;	//GRIPPER

void setup()
{
	myServo1.attach(2);  //BASE PIN 2
	myServo2.attach(3);  //HOMBRO PIN 3
	myServo3.attach(4);  //BRAZO PIN 4
	myServo4.attach(5);  //GRIPPER PIN 5

	myServo1.write(140); //BASE
	myServo2.write(105); //HOMBRO
	myServo3.write(130); //BRAZO
	myServo4.write(70);	 //GRIPPER
	delay(10);
}

void loop()
{
	//PINZA ABRE
		for (int x=70; x >=10; x--)
		{
		myServo4.write(x); //GRIPPER
		delay(5);
		}
		delay(500);
	// BRAZO SUBE
	for (int x = 130; x >=88; x--)
	{
		myServo3.write(x);
		delay(10);
	}
	delay(500);
	// HOMBRO BAJA
	for (int x = 105; x <= 170; x++)
	{
		myServo2.write(x);
		delay(10);
	}
	delay(500);
	// BASE GIRA
	for (int x = 140; x >= 10; x--)
	{
		myServo1.write(x);
		delay(10);
	}
	delay(500);

	//PINZA ABRE
	for (int x = 10; x <= 70; x++)
	{
		myServo4.write(x); 
		delay(5);
	}
	delay(2000);

///************ RETORNO ***********///

    // BASE RETORNA
	for (int x = 10; x <=160; x++)
	{
		myServo1.write(x); //BRAZO
		delay(10);
	}
	delay(500);
	//HOMBRO SUBE
	for (int x = 170; x >= 105; x--)
	{
		myServo2.write(x);
		delay(10);
	}
	delay(500);
	//BRAZO BAJA
	for (int x = 88; x <= 130; x++)
	{
		myServo3.write(x);
		delay(10);
	}
	delay(500);

}
