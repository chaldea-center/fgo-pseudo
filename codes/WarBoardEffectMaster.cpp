void __fastcall WarBoardEffectMaster___ctor(WarBoardEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434E5A0 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
    byte_434E5A0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    356,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
}