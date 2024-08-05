void __fastcall BattleDataDefine___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct BattleDataDefine_StaticFields *static_fields; // x8
  __int64 v5; // x0
  struct BattleDataDefine_StaticFields *v6; // x8
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  struct BattleDataDefine_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A0097B & 1) == 0 )
  {
    sub_1B64870(&BattleDataDefine_TypeInfo, v1);
    sub_1B64870(&int___TypeInfo, v2);
    sub_1B64870(&StringLiteral_3188/*"Battle/Common"*/, v3);
    byte_4A0097B = 1;
  }
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OVERWRITE_ATK_RATE_PRIORITY = 0x3E800000001LL;
  *(_QWORD *)&static_fields->PERCENTAGE_DENOMINATOR = 0x447A000042C80000LL;
  *(_OWORD *)&static_fields->PERMILLAGE_DENOMINATOR_INT = xmmword_BA2BE0;
  v5 = sub_1B64918(int___TypeInfo, 1LL);
  v6 = BattleDataDefine_TypeInfo->static_fields;
  v6->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v5;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v6->NO_INDIVIDUALITY_ARRAY, v5, v7, v8);
  v9 = StringLiteral_3188/*"Battle/Common"*/;
  v10 = BattleDataDefine_TypeInfo->static_fields;
  v10->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_3188/*"Battle/Common"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v10->ASSET_BATTLE_COMMON, v9, v11, v12);
}


System_String_o *__fastcall BattleDataDefine__AddUniqueCameraPath(int32_t cameraId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A00978 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, method);
    sub_1B64870(&StringLiteral_3204/*"Battle/UniqueCamera/Add/{0}"*/, v6);
    byte_4A00978 = 1;
  }
  v9 = cameraId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3204/*"Battle/UniqueCamera/Add/{0}"*/, v7, 0LL);
}


System_String_o *__fastcall BattleDataDefine__FieldMotionPath(int32_t motionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A00977 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, method);
    sub_1B64870(&StringLiteral_3194/*"Battle/Field/{0}"*/, v6);
    byte_4A00977 = 1;
  }
  v9 = motionId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3194/*"Battle/Field/{0}"*/, v7, 0LL);
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
  if ( (byte_4A00979 & 1) == 0 )
  {
    sub_1B64870(&BattleDataDefine_TypeInfo, method);
    byte_4A00979 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeBgPath_42319632(v3, v2);
}


System_String_o *__fastcall BattleDataDefine__MakeBgPath_42319632(System_String_o *bgIdStr, const MethodInfo *method)
{
  if ( (byte_4A0097A & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_3245/*"Bg/"*/, method);
    byte_4A0097A = 1;
  }
  return System_String__Concat_61383576((System_String_o *)StringLiteral_3245/*"Bg/"*/, bgIdStr, 0LL);
}


int64_t __fastcall BattleDataDefine__MakeQuestPhaseUniqueId(int32_t questId, int32_t phase, const MethodInfo *method)
{
  return phase + 100LL * questId;
}