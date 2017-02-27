/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       Estructures8                          **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 27/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************


int comptar = 11; //Estableix variable "comptar" amb un valor int
int i = 0;        //Estableix variable "i" amb un valor int

//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
  Serial.print("Ara comptare de 0 a ");//Imprimeix a monitor serie la frase "Ara comptares de 0 a"
  Serial.println(comptar);//Imprimeix a monitor serie valor de la variable "comptar"
  while (i <= comptar) // inicia funcio while amb la condicio variable "i" inferior o igual a variable "comptar"
  {
    Serial.print(i);// si la condicio es compleix s'escriure el valor de la variable "i"
    Serial.print("-");//seguidament s'escriura el caracter"-"
    i++;//finalment s'incrementara el valor de la variable "i" en 1
    // aquesta proces s'executara mentres la condicio de la funcio while es compleixi
  }
}
//*************************** LOOP ******************************

void loop() {
}


//************************** FUNCIONS ***************************
