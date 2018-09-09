/*
Examplo 01

Pisca Led
*/
void setup()
{
    //Define o pino 13 como um pino de saida  
    pinMode(13, OUTPUT);
}

void loop()
{
    //Liga o Led
    digitalWrite(13, HIGH);
    //Espera 1 segundo
    delay(1000);
    //Desliga o Led
    digitalWrite(13, LOW);
    //Espera 1 segundo
    delay(1000);
}
