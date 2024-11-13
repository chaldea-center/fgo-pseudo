void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__, method, v2);
    byte_4B15E71 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    5,
    (const MethodInfo_31B2FAC *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}