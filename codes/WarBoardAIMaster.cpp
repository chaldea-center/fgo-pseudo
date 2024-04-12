void __fastcall WarBoardAIMaster___ctor(WarBoardAIMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE053 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
    byte_42AE053 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    328,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
}