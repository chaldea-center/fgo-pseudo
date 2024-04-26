void __fastcall WarBoardAIMaster___ctor(WarBoardAIMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434F9E6 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
    byte_434F9E6 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    328,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_WarBoardAIMaster__WarBoardAIEntity__int___ctor__);
}