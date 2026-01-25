void BattlePointMaster___ctor(BattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE2E3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
    byte_4CEE2E3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_342BFD8 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
}


System_String_o *BattlePointMaster__GetGaugeAssetPath(int32_t battlePointId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEE2E1 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3086/*"Battle/BattlePoint/Prefab/{0}"*/);
    byte_4CEE2E1 = 1;
  }
  v5 = battlePointId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_3086/*"Battle/BattlePoint/Prefab/{0}"*/, v3, 0);
}


bool BattlePointMaster__IsHideGaugeAllTime(BattlePointMaster_o *this, int32_t battlePointId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  _BOOL4 v7; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEE2E2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
    byte_4CEE2E2 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         battlePointId,
         (const MethodInfo_342E348 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_1C7BD40(v5, v6);
    return (*((unsigned __int8 *)&qword_20 + (_QWORD)entity) >> 1) & 1;
  }
  else
  {
    LOBYTE(v7) = 1;
  }
  return v7;
}