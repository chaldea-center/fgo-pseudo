void __fastcall BattleMaster___ctor(BattleMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB59D3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__, method);
    byte_4AB59D3 = 1;
  }
  DataMasterBase_object__object__long____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    5,
    (const MethodInfo_3163EFC *)Method_DataMasterBase_BattleMaster__BattleEntity__long___ctor__);
}