#define MAX_ARG_COUNT 5

extern bool whitespace(char c);

class CLI{
  
  enum State {
    ARG_SPACE, ARG
  } state;
  

  
  void append(char c);
  
  void start_arg();
  
  void drop();


protected:
  virtual void perform();
  char cmd[32];
  char * args[MAX_ARG_COUNT];
  
  int currarg;
  int currcmd;
public:  
  
  void feed(char c);

  void feed(const char * p);
  
  void feedln(char * p);
  
  CLI();
};

