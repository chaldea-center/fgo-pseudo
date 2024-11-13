void __fastcall BattleDataDefine___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleDataDefine_StaticFields *static_fields; // x8
  int64_t v8; // x0
  struct BattleDataDefine_StaticFields *v9; // x8
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x1
  struct BattleDataDefine_StaticFields *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B18703 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v1, v2);
    sub_1BCA7E0(&int___TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v5, v6);
    byte_4B18703 = 1;
  }
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OVERWRITE_ATK_RATE_PRIORITY = 0x3E800000001LL;
  *(_QWORD *)&static_fields->PERCENTAGE_DENOMINATOR = 0x447A000042C80000LL;
  *(_OWORD *)&static_fields->PERMILLAGE_DENOMINATOR_INT = xmmword_BD2230;
  v8 = sub_1BCA888(int___TypeInfo, 1LL);
  v9 = BattleDataDefine_TypeInfo->static_fields;
  v9->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->NO_INDIVIDUALITY_ARRAY, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_3233/*"Battle/Common"*/;
  v17 = BattleDataDefine_TypeInfo->static_fields;
  v17->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_3233/*"Battle/Common"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17->ASSET_BATTLE_COMMON, v16, v18, v19, v20, v21, v22, v23);
  BattleDataDefine_TypeInfo->static_fields->ShadowServantDefaultColor = (struct UnityEngine_Color_o)xmmword_BD1E40;
}


System_String_o *__fastcall BattleDataDefine__AddUniqueCameraPath(int32_t cameraId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B18700 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3249/*"Battle/UniqueCamera/Add/{0}"*/, v4, v5);
    byte_4B18700 = 1;
  }
  v8 = cameraId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_3249/*"Battle/UniqueCamera/Add/{0}"*/, v6, 0LL);
}


System_String_o *__fastcall BattleDataDefine__FieldMotionPath(int32_t motionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B186FF & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3239/*"Battle/Field/{0}"*/, v4, v5);
    byte_4B186FF = 1;
  }
  v8 = motionId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_3239/*"Battle/Field/{0}"*/, v6, 0LL);
}


bool __fastcall BattleDataDefine__IsHighTimeScale(float value, const MethodInfo *method)
{
  return BasicHelper__NearbyOrGreaterThan(value, 2.0, 0LL);
}


System_String_o *__fastcall BattleDataDefine__MakeBgPath(int32_t bgId, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x1
  System_String_o *v4; // x19
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = bgId;
  if ( (byte_4B18701 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, method, v2);
    byte_4B18701 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v3);
  return BattleDataDefine__MakeBgPath_43422264(v4, v3);
}


System_String_o *__fastcall BattleDataDefine__MakeBgPath_43422264(System_String_o *bgIdStr, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18702 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3291/*"Bg/"*/, method, v2);
    byte_4B18702 = 1;
  }
  return System_String__Concat_62401220((System_String_o *)StringLiteral_3291/*"Bg/"*/, bgIdStr, 0LL);
}


int64_t __fastcall BattleDataDefine__MakeQuestPhaseUniqueId(int32_t questId, int32_t phase, const MethodInfo *method)
{
  return phase + 100LL * questId;
}