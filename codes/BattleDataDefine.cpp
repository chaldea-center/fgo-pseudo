void __fastcall BattleDataDefine___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleDataDefine_StaticFields *static_fields; // x8
  __int64 v6; // x0
  struct BattleDataDefine_StaticFields *v7; // x8
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  struct BattleDataDefine_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  struct BattleDataDefine_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B471FD & 1) == 0 )
  {
    sub_1BDB878(&BattleDataDefine_TypeInfo, v1);
    sub_1BDB878(&int___TypeInfo, v2);
    sub_1BDB878(&StringLiteral_11396/*"RootCameraPrefab"*/, v3);
    sub_1BDB878(&StringLiteral_3132/*"Battle/Common"*/, v4);
    byte_4B471FD = 1;
  }
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OVERWRITE_ATK_RATE_PRIORITY = 0x3E800000001LL;
  *(_QWORD *)&static_fields->PERCENTAGE_DENOMINATOR = 0x447A000042C80000LL;
  *(_OWORD *)&static_fields->PERMILLAGE_DENOMINATOR_INT = xmmword_BEA5E0;
  v6 = sub_1BDB920(int___TypeInfo, 1LL);
  v7 = BattleDataDefine_TypeInfo->static_fields;
  v7->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v6;
  sub_1BDB81C((CGThumbnailListItem_o *)&v7->NO_INDIVIDUALITY_ARRAY, v6, v8, v9);
  v10 = StringLiteral_3132/*"Battle/Common"*/;
  v11 = BattleDataDefine_TypeInfo->static_fields;
  v11->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_3132/*"Battle/Common"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v11->ASSET_BATTLE_COMMON, v10, v12, v13);
  v14 = StringLiteral_11396/*"RootCameraPrefab"*/;
  v15 = BattleDataDefine_TypeInfo->static_fields;
  v15->RootCameraAssetName = (struct System_String_o *)StringLiteral_11396/*"RootCameraPrefab"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v15->RootCameraAssetName, v14, v16, v17);
  BattleDataDefine_TypeInfo->static_fields->ShadowServantDefaultColor = (struct UnityEngine_Color_o)xmmword_BEA1D0;
}


System_String_o *__fastcall BattleDataDefine__AddUniqueCameraPath(int32_t cameraId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B471FA & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&StringLiteral_3148/*"Battle/UniqueCamera/Add/{0}"*/, v6);
    byte_4B471FA = 1;
  }
  v9 = cameraId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3148/*"Battle/UniqueCamera/Add/{0}"*/, v7, 0LL);
}


System_String_o *__fastcall BattleDataDefine__FieldMotionPath(int32_t motionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B471F9 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&StringLiteral_3138/*"Battle/Field/{0}"*/, v6);
    byte_4B471F9 = 1;
  }
  v9 = motionId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3138/*"Battle/Field/{0}"*/, v7, 0LL);
}


bool __fastcall BattleDataDefine__IsHighTimeScale(float value, const MethodInfo *method)
{
  return BasicHelper__NearbyOrGreaterThan(value, 2.0, 0LL);
}


System_String_o *__fastcall BattleDataDefine__MakeBgPath(int32_t bgId, const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  System_String_o *v3; // x19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = bgId;
  if ( (byte_4B471FB & 1) == 0 )
  {
    sub_1BDB878(&BattleDataDefine_TypeInfo, method);
    byte_4B471FB = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeBgPath_44726456(v3, v2);
}


System_String_o *__fastcall BattleDataDefine__MakeBgPath_44726456(System_String_o *bgIdStr, const MethodInfo *method)
{
  if ( (byte_4B471FC & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_3190/*"Bg/"*/, method);
    byte_4B471FC = 1;
  }
  return System_String__Concat_62572260((System_String_o *)StringLiteral_3190/*"Bg/"*/, bgIdStr, 0LL);
}


int64_t __fastcall BattleDataDefine__MakeQuestPhaseUniqueId(int32_t questId, int32_t phase, const MethodInfo *method)
{
  return phase + 100LL * questId;
}