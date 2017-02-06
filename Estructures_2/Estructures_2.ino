/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       Estructures2                          **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 06/02/2017 **
****************************************************************/
//************************ INCLUDE ****************************** 



//*********************** VARIABLES *****************************

int tempAigua = 101; //estavlexi variable tempAigua amb un valor int de 101


//************************** SETUP ******************************

void setup() {                 // configura el final de salida
 Serial.begin(9600);     // inicia comunicacio serie velocitat 9600

  if ( tempAigua < 100)// si variable tempAigua inferior a 100... 
   {
    Serial.print("Aigua encara no bull"); //envia missatge entre cometes a monitor serie
}
else //en qualsevol altre cas 
  {
    Serial.print("Aigua supera els 100C, esta bullint!"); //envia missatge entre cometes a monitor serie
    // tal i com esta ara el program es mostrar el missatge "Aigua supera els 100C, esta bullint!" , 
    //per fer que sens mostri l' altre possible missatge hem de canviar la variable tempAigua per un nombre inferior a 100 
//com que el programa esta escrit sobre setup nomes s'executara un cop.
}
}

//*************************** LOOP ******************************

void loop() {                
  }


//************************** FUNCIONS ***************************
