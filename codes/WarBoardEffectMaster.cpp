void __fastcall WarBoardEffectMaster___ctor(WarBoardEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4387B71 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
    byte_4387B71 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    356,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
}