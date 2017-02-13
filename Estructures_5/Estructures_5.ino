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
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
  Serial.print("The day is ");// Inprimeix al monitor serie al que hi ha escrit entre les cometes en aquest ca inprimira The day is

  switch (sensorReading) //inicia funcio switch la qual variara de cas en funcio del valor de la variable sensorReading
  {
    case 0:
      Serial.println("dark");//Si la variable te un valor de 0 inprimeix dark al monitor serie
      break;
    case 1:
      Serial.println("dim");//Si la variable te un valor de 1 inprimeix dark al monitor serie
      break;
    case 2:
      Serial.println("medium");//Si la variable te un valor de 2 inprimeix dark al monitor serie
      break;
    case 3:
      Serial.println("bright");//Si la variable te un valor de 3 inprimeix dark al monitor serie
      break;
    default:
      Serial.println("... I don't know!!!");//Si la variable no te cap dels valor anterior imprimeix ... I don't know!!!
      //Com que el programa esta escrit sobre setup nomes es fara un cop
  }
}

//*************************** LOOP ******************************

void loop() {
}


//************************** FUNCIONS ***************************
