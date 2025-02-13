void __fastcall BattleDataDefine___cctor(const MethodInfo *method)
{
  struct BattleDataDefine_StaticFields *static_fields; // x8
  int64_t v2; // x0
  struct BattleDataDefine_StaticFields *v3; // x8
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x1
  struct BattleDataDefine_StaticFields *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDEB19 & 1) == 0 )
  {
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_3256/*"Battle/Common"*/);
    byte_4BDEB19 = 1;
  }
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OVERWRITE_ATK_RATE_PRIORITY = 0x3E800000001LL;
  *(_QWORD *)&static_fields->PERCENTAGE_DENOMINATOR = 0x447A000042C80000LL;
  *(_OWORD *)&static_fields->PERMILLAGE_DENOMINATOR_INT = xmmword_BFDBD0;
  v2 = sub_1C21EE0(int___TypeInfo, 1LL);
  v3 = BattleDataDefine_TypeInfo->static_fields;
  v3->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v2;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v3->NO_INDIVIDUALITY_ARRAY, v2, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_3256/*"Battle/Common"*/;
  v11 = BattleDataDefine_TypeInfo->static_fields;
  v11->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_3256/*"Battle/Common"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v11->ASSET_BATTLE_COMMON, v10, v12, v13, v14, v15, v16, v17);
  BattleDataDefine_TypeInfo->static_fields->ShadowServantDefaultColor = (struct UnityEngine_Color_o)xmmword_BFD7D0;
}


System_String_o *__fastcall BattleDataDefine__AddUniqueCameraPath(int32_t cameraId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDEB16 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_3272/*"Battle/UniqueCamera/Add/{0}"*/);
    byte_4BDEB16 = 1;
  }
  v8 = cameraId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3272/*"Battle/UniqueCamera/Add/{0}"*/, v6, 0LL);
}


System_String_o *__fastcall BattleDataDefine__FieldMotionPath(int32_t motionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDEB15 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_3262/*"Battle/Field/{0}"*/);
    byte_4BDEB15 = 1;
  }
  v8 = motionId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3262/*"Battle/Field/{0}"*/, v6, 0LL);
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
  if ( (byte_4BDEB17 & 1) == 0 )
  {
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    byte_4BDEB17 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeBgPath_43996768(v3, v2);
}


System_String_o *__fastcall BattleDataDefine__MakeBgPath_43996768(System_String_o *bgIdStr, const MethodInfo *method)
{
  if ( (byte_4BDEB18 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3314/*"Bg/"*/);
    byte_4BDEB18 = 1;
  }
  return System_String__Concat_63115476((System_String_o *)StringLiteral_3314/*"Bg/"*/, bgIdStr, 0LL);
}


int64_t __fastcall BattleDataDefine__MakeQuestPhaseUniqueId(int32_t questId, int32_t phase, const MethodInfo *method)
{
  return phase + 100LL * questId;
}