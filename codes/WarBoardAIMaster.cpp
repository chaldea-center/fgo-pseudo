void __fastcall WarBoardAIMaster___ctor(WarBoardAIMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186769 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__, method);
    byte_4186769 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    327,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
}