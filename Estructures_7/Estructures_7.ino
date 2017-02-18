/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       Estructures7                          **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 18/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************


int comptar = 11; //Estableix variable "comptar" amb un valor int

//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
  Serial.print("Ara comptare de 0 a ");//Imprimeix a monitor serie la frase "Ara comptares de 0 a"
  Serial.println(comptar);//Imprimeix a monitor serie valor de la variable "comptar"
  for (int i = 0; i < comptar; i++) //Inicia funcio for (en el mateix inici d'aquest funcio s'estableix la variable "i" amb un valor int) amb les seguents condicions:
    //- si la variable "i" es inferior o igual a la variable "comptar" incrementa el valor en un unitat i canvia el valor de la variable "i"
  {
    Serial.print(i);//un cop evaluada la condicio establerta per la funcio "for", si aquesta es compleix, s'imprimiex al monitor serie el valor de la variable "i"
    Serial.print("-");//un cop evaluada la condicio establerta per la funcio "for", si aquesta es compleix, s'imprimiex al monitor serie el simbol"-"
    //Aquest proces es repetira fins que la condicio inposada per la funcio for es deixi de complir.
  }
  {
    Serial.print(comptar);//Si la condicio anterior es deixa de complir salta a la seguent linia d'ordres, aquesta, s'imprimeix a monitor serie el valor de la variable comptar.
  }
  
}

//*************************** LOOP ******************************

void loop() {
}


//************************** FUNCIONS ***************************
