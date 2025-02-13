void __fastcall WarBoardEffectMaster___ctor(WarBoardEffectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD540 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
    byte_4BDD540 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    361,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_WarBoardEffectMaster__WarBoardEffectEntity__int___ctor__);
}