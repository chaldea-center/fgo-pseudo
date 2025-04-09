void __fastcall WarBoardEffectMaster___ctor(WarBoardEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBECE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__, method);
    byte_49BBECE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    363,
    (const MethodInfo_319B678 *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
}