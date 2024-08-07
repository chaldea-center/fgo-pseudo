void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FE7BA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__, method);
    byte_49FE7BA = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    5,
    (const MethodInfo_30D6904 *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}