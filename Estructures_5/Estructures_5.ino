/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       Estructures5                          **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 13/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************


int comptar = 22; //Estableix variable "comptar" amb un valor int

//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
   Serial.print("Ara comptare de 0 a ");//Imprimeix a monitor serie la frase "Ara comptares de 0 a"
  Serial.println(comptar);//Imprimeix a monitor serie valor de la variable "comptar"
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");
  } 
}

//*************************** LOOP ******************************

void loop() {
}


//************************** FUNCIONS ***************************
