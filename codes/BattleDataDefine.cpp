void __fastcall BattleDataDefine___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BattleDataDefine_c *v10; // x8
  System_Int32_array **v11; // x0
  struct BattleDataDefine_StaticFields *static_fields; // x8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct BattleDataDefine_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E77AD & 1) == 0 )
  {
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_2808/*"Battle/Common"*/, v7, v8, v9);
    byte_42E77AD = 1;
  }
  BattleDataDefine_TypeInfo->static_fields->OVERWRITE_ATK_RATE_PRIORITY = 1;
  BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY = 1000;
  v10 = BattleDataDefine_TypeInfo;
  BattleDataDefine_TypeInfo->static_fields->PERCENTAGE_DENOMINATOR = 100.0;
  v10->static_fields->PERMILLAGE_DENOMINATOR = 1000.0;
  v10->static_fields->PERMILLAGE_DENOMINATOR_INT = 1000;
  v10->static_fields->CRITICAL_HIT_RANDOM_MAX = 1000;
  v10->static_fields->COMMAND_CARD_NUM_TO_SELECT = 3;
  v10->static_fields->ASSET_PARALLEL_LOAD_MAX = 3;
  v11 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, 1LL);
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  static_fields->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v11;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->NO_INDIVIDUALITY_ARRAY, v11, v13, v14, v15, v16, v17, v18);
  v19 = BattleDataDefine_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_2808/*"Battle/Common"*/;
  v19->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_2808/*"Battle/Common"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->ASSET_BATTLE_COMMON, v20, v21, v22, v23, v24, v25, v26);
}


System_String_o *__fastcall BattleDataDefine__AddUniqueCameraPath(int32_t cameraId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E77AC & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2823/*"Battle/UniqueCamera/Add/{0}"*/, v5, v6, v7);
    byte_42E77AC = 1;
  }
  v10 = cameraId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format((System_String_o *)StringLiteral_2823/*"Battle/UniqueCamera/Add/{0}"*/, v8, 0LL);
}


System_String_o *__fastcall BattleDataDefine__FieldMotionPath(int32_t motionId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E77AB & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2814/*"Battle/Field/{0}"*/, v5, v6, v7);
    byte_42E77AB = 1;
  }
  v10 = motionId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format((System_String_o *)StringLiteral_2814/*"Battle/Field/{0}"*/, v8, 0LL);
}


bool __fastcall BattleDataDefine__IsHighTimeScale(float value, const MethodInfo *method)
{
  return BasicHelper__NearbyOrGreaterThan(value, 2.0, 0LL);
}