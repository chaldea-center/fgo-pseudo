void __fastcall WarBoardEffectMaster___ctor(WarBoardEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AC7CB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
    byte_42AC7CB = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    356,
    (const MethodInfo_23E223C *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
}