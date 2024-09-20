void __fastcall BattleDataDefine___cctor(const MethodInfo *method)
{
  struct BattleDataDefine_StaticFields *static_fields; // x8
  __int64 v2; // x0
  struct BattleDataDefine_StaticFields *v3; // x8
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w1
  struct BattleDataDefine_StaticFields *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D622 & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_3209/*"Battle/Common"*/);
    byte_4A5D622 = 1;
  }
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OVERWRITE_ATK_RATE_PRIORITY = 0x3E800000001LL;
  *(_QWORD *)&static_fields->PERCENTAGE_DENOMINATOR = 0x447A000042C80000LL;
  *(_OWORD *)&static_fields->PERMILLAGE_DENOMINATOR_INT = xmmword_BB4060;
  v2 = sub_1B88658(int___TypeInfo, 1LL);
  v3 = BattleDataDefine_TypeInfo->static_fields;
  v3->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v2;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->NO_INDIVIDUALITY_ARRAY, v2, v4, v5);
  v6 = StringLiteral_3209/*"Battle/Common"*/;
  v7 = BattleDataDefine_TypeInfo->static_fields;
  v7->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_3209/*"Battle/Common"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->ASSET_BATTLE_COMMON, v6, v8, v9);
}


System_String_o *__fastcall BattleDataDefine__AddUniqueCameraPath(int32_t cameraId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D61F & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_3225/*"Battle/UniqueCamera/Add/{0}"*/);
    byte_4A5D61F = 1;
  }
  v8 = cameraId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3225/*"Battle/UniqueCamera/Add/{0}"*/, v6, 0LL);
}


System_String_o *__fastcall BattleDataDefine__FieldMotionPath(int32_t motionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D61E & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_3215/*"Battle/Field/{0}"*/);
    byte_4A5D61E = 1;
  }
  v8 = motionId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3215/*"Battle/Field/{0}"*/, v6, 0LL);
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
  if ( (byte_4A5D620 & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    byte_4A5D620 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeBgPath_42662912(v3, v2);
}


System_String_o *__fastcall BattleDataDefine__MakeBgPath_42662912(System_String_o *bgIdStr, const MethodInfo *method)
{
  if ( (byte_4A5D621 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3267/*"Bg/"*/);
    byte_4A5D621 = 1;
  }
  return System_String__Concat_61707032((System_String_o *)StringLiteral_3267/*"Bg/"*/, bgIdStr, 0LL);
}


int64_t __fastcall BattleDataDefine__MakeQuestPhaseUniqueId(int32_t questId, int32_t phase, const MethodInfo *method)
{
  return phase + 100LL * questId;
}