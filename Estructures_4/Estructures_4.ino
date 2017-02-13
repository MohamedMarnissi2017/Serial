/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       Estructures5                          **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 13/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************


int sensorReading = 0; //Estableix variable "sensorReading" amb un valor int

//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);
  Serial.print("The day is ");

  switch (sensorReading) 
  {
    case 0:
      Serial.println("dark");
      break;
    case 1:
      Serial.println("dim");
      break;
    case 2:
      Serial.println("medium");
      break;
    case 3:
      Serial.println("bright");
      break;
    default:
      Serial.println("... I don't know!!!");
  }
}

//*************************** LOOP ******************************

void loop() {
}


//************************** FUNCIONS ***************************
