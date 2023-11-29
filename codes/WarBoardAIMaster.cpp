void __fastcall WarBoardAIMaster___ctor(WarBoardAIMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F8BD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__, method);
    byte_40F8BD7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    327,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
}