void BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42BDC & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
    byte_4C42BDC = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    5,
    (const MethodInfo_33A12D8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}