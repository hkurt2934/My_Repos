//*************************************************************************************************************************************************//
//******************************************************************MAIN**FILE*********************************************************************//
//*************************************************************************************************************************************************//
#INCLUDE <_18_02_2019_1_ISUZU_NOVO_BUTTON_CARD_HEADER.h>
//*******************************************************************************************************************************************MAIN**//
VOID MAIN(){
//********************************************************************************************************************************MAIN**FUNCTIONs**//
   Setting();
   Make_Default_Value();
   Read_Value_From_EEPROM();
   Controller_Leds_Starting();
   Controller_Error();
   Show_Error();
   Send_EEPROM_Data();
//******************************************************************************************************************************************WHILE**//
   WHILE(TRUE){
//**********************************************************************************************************************************RECEIVE**DATA**//
      Data_Receiver();
//***************************************************************************************************************************DRIVER**FAN**CONTROL**//
      Button_Controller_Fan_Driver();
//************************************************************************************************************************PASSENGER**FAN**CONTROL**//
      Button_Controller_Fan_Passenger();
//********************************************************************************************************************************WINDOW**CONTROL**//
      Button_Controller_Window(); 
//***********************************************************************************************************************************AIR**CONTROL**//
      Button_Controller_Air(); 
//*************************************************************************************************************************DRIVER**VALVE**CONTROL**//
      Button_Controller_Valve_Driver();
//**************************************************************************************************************************CONTROLLER**FUNCTIONs**//
      Controller_Functions();
//*************************************************************************************************************************************END**WHILE**//
   }
//**************************************************************************************************************************************END**MAIN**//
}
//*************************************************************************************************************************************************//
//*********************************************************************END*************************************************************************//
//*************************************************************************************************************************************************//
