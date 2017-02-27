/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   NumberComunication1                       **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 27/02/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************


float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results

//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");//Imprimeix a monitor serie la frase "Entra el valor de r1 i r2 (separats per una coma)"

  }

//*************************** LOOP ******************************

void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.parseInt();// look for valid int the incoming serial stream
    Serial.print("r1=");
    Serial.print(r1);
    Serial.print("ohms   ");
    r2 = Serial.parseInt();
     Serial.print("r2=");
    Serial.print(r2);
    Serial.println("ohms   ");
  }
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
     Serial.print("rSerie=");
    Serial.print(r1+r2);
    Serial.print("ohms   ");
     Serial.print("rParallel=");
    Serial.print(1/r1+r2);
    Serial.print("ohms   ");                   
     Serial.print("Entra el valor de r1 i r2 (separats per una coma)");//Imprimeix a monitor serie la frase "Entra el valor de r1 i r2 (separats per una coma)"
    }
}


//************************** FUNCIONS ***************************
