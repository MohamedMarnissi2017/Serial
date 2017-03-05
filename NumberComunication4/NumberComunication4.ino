/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   NumberComunication4                       **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 05/03/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int hores;// estableix la variable hores
float salari1; // estableix la variable salari1 amb un valor int
float salari2; // estableix la variable salari2 amb un valor float
float salari3; // estableix la variable salari3 amb un valor float
float salari4; // estableix la variable salari4 amb un valor float
//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
  Serial.println("Quantes hores has treballat aquesta semana?");//Imprimeix a monitor serie la frase "Quantes hores has treballat aquesta semana?"
  Serial.println();//obre linia nova

}

//*************************** LOOP ******************************

void loop() {
  while (Serial.available() > 0) {  //inicia funcio while amb la condiciono seguent: si hi ha algun missatge al canal serei el llegeix, si aquest es superior a 0 es compleix la condicio
    hores = Serial.parseInt();// La variable hores sera igual al missatge en valor int que arribi per el canal serie
    while (hores > 0) //inicia funcio while amb la condicio variable hores ha de ser superior a 0

    {
      if (hores < 38)//inicia funcio if amb la condicio si hores inferior a 38 es compleix
      { 
        salari1 = hores * 20;// Executa operiacio , salari1 sera igual a hores per 20
      }
      if (hores >= 38) //inicia funcio if amb la condicio si hores superior o igual a 38 es copleix
      { 
        salari4 = hores - 37;// Executa operiacio , salari4 sera igual a hores menys 37
        salari1 = salari4 * 30;// Executa operiacio , salari1 sera igual a salari4 per 30
        salari2 = 37 * 20;// Executa operiacio , salari2 sera igual a 37 per 20
        salari1 = salari1 + salari2;// Executa operiacio , salari1 sera igual a ell mateix mes salari2
      }
      if (salari1 <= 800)//inicia funcio if amb la condicio si salri1 inferior o igual a 38 es copleix
      { 
        salari3 = salari1 * 5;// Executa operiacio , salari3 sera igual a salari1 per 5
        salari3 = salari3 / 100;// Executa operiacio , salari3 sera igual a ell mateix partit de 100
        salari1 = salari1 - salari3;// Executa operiacio , salari1 sera igual a ell mateix menys salari3
        Serial.print("el salari per ");//Imprimeix a monitor serie la frase "el salari per "
        Serial.print(hores);//Imprimeix a monitor serie el valor de la variable hores
        Serial.print(" hores es de ");//Imprimeix a monitor serie la frase "hores es de"
        Serial.print(salari1);//Imprimeix a monitor serie el valor de la variable salari1
        Serial.println(" Euros.");//Imprimeix a monitor serie la frase "Euros."
        Serial.println();//obre linia nova
        Serial.println("Quantes hores has treballat aquesta semana?");//Imprimeix a monitor serie la frase "Quantes hores has treballat aquesta semana?"
        Serial.println();//obre linia nova
        hores = 0;
      }


      if (salari1 > 800)
      { 
        salari3 = salari1 * 10;// Executa operiacio , salari3 sera igual a salari1 per 10
        salari3 = salari3 / 100;// Executa operiacio , salari3 sera igual a ell mateix partit de 100
        salari1 = salari1 - salari3;// Executa operiacio , salari1 sera igual a ell mateix menys salari3

        Serial.print("el salari per ");//Imprimeix a monitor serie la frase "el salari per "
        Serial.print(hores);//Imprimeix a monitor serie el valor de la variable hores
        Serial.print(" hores es de ");//Imprimeix a monitor serie la frase "hores es de"
        Serial.print(salari1);//Imprimeix a monitor serie el valor de la variable salari1
        Serial.println(" Euros.");//Imprimeix a monitor serie la frase "Euros."
        Serial.println();//obre linia nova
        Serial.println("Quantes hores has treballat aquesta semana?");//Imprimeix a monitor serie la frase "Quantes hores has treballat aquesta semana?"
        Serial.println();//obre linia nova
        hores = 0;
      }
      if (Serial.read() == '\n')//llegeix linia nova, Finalitza lectura serie...
      {}
    }
  }
}

//************************** FUNCIONS ***************************
