void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC1AD & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
    byte_4BDC1AD = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    5,
    (const MethodInfo_325C000 *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}