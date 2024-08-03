void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC0A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__, method);
    byte_49FC0A2 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    5,
    (const MethodInfo_30D4010 *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}