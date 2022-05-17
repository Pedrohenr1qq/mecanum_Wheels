/*
 * 
 * lib_btt.h 
 * Autor: Pedro H. P. Silva
 * Creation date: 17/05/22
 * Objective: library for the button control (with debounce)
 * Update in __/__/____, by ________, for __________.
 * 
 */

 #ifndef lib_btt
 #define lib_btt

 class Btt{
    public: 
      Btt(int p, int type);
      void clicked(void func());

    private: 
    int _pin;
    int _type;
    unsigned long del = 0;
    unsigned long debounce = 75;
    int stateButton = 0;
    int lastStateButton = 0;
    bool bttClicked = false;
      
 };

 #endif
