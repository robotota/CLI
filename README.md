= Simple command line interpreter for Arduino =

== Usage usage example ==

    #include "CLI.h"

    class CLI_local : public CLI{
     protected:
      void perform(){
         if (!strcmp(args[0], "ping"))
            Serial.println("pong");      
      }
    };

    CLI_local cli;

    void handleCli(){
      while (Serial.available())
        cli.feed(Serial.read());
    }

    void setup(){
       Serial.begin(9600);
    }
    
    void loop(){
       handleCli();
    }
    




