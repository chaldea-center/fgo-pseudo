void BattlePointMaster___ctor(BattlePointMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970470 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
    byte_5970470 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    513,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int___ctor__);
}


System_String_o *BattlePointMaster__GetGaugeAssetPath(int32_t battlePointId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597046E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3206/*"Battle/BattlePoint/Prefab/{0}"*/);
    byte_597046E = 1;
  }
  v5 = battlePointId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v5);
  return System_String__Format((System_String_o *)StringLiteral_3206/*"Battle/BattlePoint/Prefab/{0}"*/, v3, 0);
}


bool BattlePointMaster__IsHideGaugeAllTime(BattlePointMaster_o *this, int32_t battlePointId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  _BOOL4 v7; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597046F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
    byte_597046F = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         battlePointId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_BattlePointMaster__BattlePointEntity__int__TryGetEntity__);
  if ( v5 )
  {
    if ( !entity )
      sub_2213CDC(v5, v6);
    return (*((unsigned __int8 *)&qword_20 + (_QWORD)entity) >> 1) & 1;
  }
  else
  {
    LOBYTE(v7) = 1;
  }
  return v7;
}