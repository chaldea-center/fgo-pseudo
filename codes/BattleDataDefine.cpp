void __fastcall BattleDataDefine___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleDataDefine_StaticFields *static_fields; // x8
  __int64 v12; // x0
  struct BattleDataDefine_StaticFields *v13; // x8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct BattleDataDefine_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  struct BattleDataDefine_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B1ECE5 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDataDefine_TypeInfo, v1);
    sub_1BCAFF8(&int___TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_2991/*"BUSTER_CHAIN_INDIVIDUALITY"*/, v3);
    sub_1BCAFF8(&StringLiteral_11322/*"RootCameraPrefab"*/, v4);
    sub_1BCAFF8(&StringLiteral_10834/*"QUICK_CHAIN_INDIVIDUALITY"*/, v5);
    sub_1BCAFF8(&StringLiteral_3068/*"Battle/Common"*/, v6);
    sub_1BCAFF8(&StringLiteral_2029/*"ARTS_CHAIN_INDIVIDUALITY"*/, v7);
    sub_1BCAFF8(&StringLiteral_3293/*"CHAIN_ERROR_INDIVIDUALITY"*/, v8);
    sub_1BCAFF8(&StringLiteral_2984/*"BRAVE_CHAIN_INDIVIDUALITY"*/, v9);
    sub_1BCAFF8(&StringLiteral_8598/*"MIGHTY_CHAIN_INDIVIDUALITY"*/, v10);
    byte_4B1ECE5 = 1;
  }
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OVERWRITE_ATK_RATE_PRIORITY = 0x3E800000001LL;
  *(_QWORD *)&static_fields->PERCENTAGE_DENOMINATOR = 0x447A000042C80000LL;
  *(_OWORD *)&static_fields->PERMILLAGE_DENOMINATOR_INT = xmmword_BE1A20;
  v12 = sub_1BCB0A0(int___TypeInfo, 1LL);
  v13 = BattleDataDefine_TypeInfo->static_fields;
  v13->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v12;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v13->NO_INDIVIDUALITY_ARRAY, v12, v14, v15);
  v16 = StringLiteral_3068/*"Battle/Common"*/;
  v17 = BattleDataDefine_TypeInfo->static_fields;
  v17->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_3068/*"Battle/Common"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v17->ASSET_BATTLE_COMMON, v16, v18, v19);
  v20 = StringLiteral_11322/*"RootCameraPrefab"*/;
  v21 = BattleDataDefine_TypeInfo->static_fields;
  v21->RootCameraAssetName = (struct System_String_o *)StringLiteral_11322/*"RootCameraPrefab"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v21->RootCameraAssetName, v20, v22, v23);
  BattleDataDefine_TypeInfo->static_fields->ShadowServantDefaultColor = (struct UnityEngine_Color_o)xmmword_BE1610;
  BattleDataDefine_TypeInfo->static_fields->_ArtsChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                        (System_String_o *)StringLiteral_2029/*"ARTS_CHAIN_INDIVIDUALITY"*/,
                                                                                        0LL);
  BattleDataDefine_TypeInfo->static_fields->_BusterChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                          (System_String_o *)StringLiteral_2991/*"BUSTER_CHAIN_INDIVIDUALITY"*/,
                                                                                          0LL);
  BattleDataDefine_TypeInfo->static_fields->_QuickChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                         (System_String_o *)StringLiteral_10834/*"QUICK_CHAIN_INDIVIDUALITY"*/,
                                                                                         0LL);
  BattleDataDefine_TypeInfo->static_fields->_BraveChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                         (System_String_o *)StringLiteral_2984/*"BRAVE_CHAIN_INDIVIDUALITY"*/,
                                                                                         0LL);
  BattleDataDefine_TypeInfo->static_fields->_MigthyChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                          (System_String_o *)StringLiteral_8598/*"MIGHTY_CHAIN_INDIVIDUALITY"*/,
                                                                                          0LL);
  BattleDataDefine_TypeInfo->static_fields->_ChainErrorIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                         (System_String_o *)StringLiteral_3293/*"CHAIN_ERROR_INDIVIDUALITY"*/,
                                                                                         0LL);
}


System_String_o *__fastcall BattleDataDefine__AddUniqueCameraPath(int32_t cameraId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1ECDC & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_3084/*"Battle/UniqueCamera/Add/{0}"*/, v6);
    byte_4B1ECDC = 1;
  }
  v9 = cameraId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3084/*"Battle/UniqueCamera/Add/{0}"*/, v7, 0LL);
}


System_String_o *__fastcall BattleDataDefine__FieldMotionPath(int32_t motionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1ECDB & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_3074/*"Battle/Field/{0}"*/, v6);
    byte_4B1ECDB = 1;
  }
  v9 = motionId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_3074/*"Battle/Field/{0}"*/, v7, 0LL);
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
  if ( (byte_4B1ECDD & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDataDefine_TypeInfo, method);
    byte_4B1ECDD = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0LL);
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeBgPath_44946340(v3, v2);
}


System_String_o *__fastcall BattleDataDefine__MakeBgPath_44946340(System_String_o *bgIdStr, const MethodInfo *method)
{
  if ( (byte_4B1ECDE & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3126/*"Bg/"*/, method);
    byte_4B1ECDE = 1;
  }
  return System_String__Concat_62450424((System_String_o *)StringLiteral_3126/*"Bg/"*/, bgIdStr, 0LL);
}


int64_t __fastcall BattleDataDefine__MakeQuestPhaseUniqueId(int32_t questId, int32_t phase, const MethodInfo *method)
{
  return phase + 100LL * questId;
}


int32_t __fastcall BattleDataDefine__get_ArtsChainIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_4B1ECDF & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDataDefine_TypeInfo, v1);
    byte_4B1ECDF = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_ArtsChainIndividuality_k__BackingField;
}


int32_t __fastcall BattleDataDefine__get_BraveChainIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_4B1ECE2 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDataDefine_TypeInfo, v1);
    byte_4B1ECE2 = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_BraveChainIndividuality_k__BackingField;
}


int32_t __fastcall BattleDataDefine__get_BusterChainIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_4B1ECE0 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDataDefine_TypeInfo, v1);
    byte_4B1ECE0 = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_BusterChainIndividuality_k__BackingField;
}


int32_t __fastcall BattleDataDefine__get_ChainErrorIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_4B1ECE4 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDataDefine_TypeInfo, v1);
    byte_4B1ECE4 = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_ChainErrorIndividuality_k__BackingField;
}


int32_t __fastcall BattleDataDefine__get_MigthyChainIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_4B1ECE3 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDataDefine_TypeInfo, v1);
    byte_4B1ECE3 = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_MigthyChainIndividuality_k__BackingField;
}


int32_t __fastcall BattleDataDefine__get_QuickChainIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_4B1ECE1 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleDataDefine_TypeInfo, v1);
    byte_4B1ECE1 = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_QuickChainIndividuality_k__BackingField;
}