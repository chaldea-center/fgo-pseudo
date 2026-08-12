void BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597044F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
    byte_597044F = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    5,
    (const MethodInfo_3F10D40 *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}