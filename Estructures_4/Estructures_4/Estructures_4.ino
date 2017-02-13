/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       Estructures4                          **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

float   KgCO2m2 = 47; //estavlexi variable  KgCO2/m2 amb un valor float (nombre amb decimals)


//************************** SETUP ******************************

void setup()
{ // configura el final de salida
  Serial.begin(9600);     // inicia comunicacio serie velocitat 9600
  if ( KgCO2m2 <= 3.5) // en el cas de que KgCO2/m2 inferior o igual a 3.5
  {
    Serial.print("La teva qualificacio energetica es A"); //envia missatge entre cometes a monitor serie
  }
  else if (KgCO2m2 >= 3.5 && KgCO2m2 < 6.5) //en el cas de que KgCO2/m2 igual o superior a 3.5 pero inferior a 6.5
  {
    Serial.print("La teva qualificacio energetica es B"); //envia missatge entre cometes a monitor serie
  }
  else if (KgCO2m2 >= 6.5 && KgCO2m2 < 11.1) //en el cas de que KgCO2/m2 igual o superior a 6.5 pero inferior a 11.1
  {
    Serial.print("La teva qualificacio energetica es C"); //envia missatge entre cometes a monitor serie
  }
  else if (KgCO2m2 >= 11.1 && KgCO2m2 < 17.7) //en el cas de que KgCO2/m2 igual o superior a 11.1 pero inferior a 17.7
  {
    Serial.print("La teva qualificacio energetica es D"); //envia missatge entre cometes a monitor serie
  }
  else if (KgCO2m2 >= 17.7 && KgCO2m2 < 38.2) //en el cas de que KgCO2/m2 igual o superior a 17.7 pero inferior a 38.2
  {
    Serial.print("La teva qualificacio energetica es E"); //envia missatge entre cometes a monitor serie
  }
   else if (KgCO2m2 >= 38.2 && KgCO2m2 < 43.2) //en el cas de que KgCO2/m2 igual o superior a 38.2 pero inferior a 43.2
  {
    Serial.print("La teva qualificacio energetica es F"); //envia missatge entre cometes a monitor serie
  }
  else //en qualsevol altre cas
  {
    Serial.print("La teva qualificacio energetica es G"); //envia missatge entre cometes a monitor serie
    //per fer que sens mostrin tots els possibles missatges hem de canviar el valor de la variable KgCO2/m2 
    //com que el programa esta escrit sobre setup nomes s'executara un cop.
  }
}

//*************************** LOOP ******************************

void loop() {
}


//************************** FUNCIONS ***************************
