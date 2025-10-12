void BattleDataDefine___cctor(const MethodInfo *method)
{
  struct BattleDataDefine_StaticFields *static_fields; // x8
  __int64 v2; // x0
  struct BattleDataDefine_StaticFields *v3; // x8
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  struct BattleDataDefine_StaticFields *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  struct BattleDataDefine_StaticFields *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3A256 & 1) == 0 )
  {
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&StringLiteral_3010/*"BUSTER_CHAIN_INDIVIDUALITY"*/);
    sub_1C32C20(&StringLiteral_11425/*"RootCameraPrefab"*/);
    sub_1C32C20(&StringLiteral_10915/*"QUICK_CHAIN_INDIVIDUALITY"*/);
    sub_1C32C20(&StringLiteral_3087/*"Battle/Common"*/);
    sub_1C32C20(&StringLiteral_2039/*"ARTS_CHAIN_INDIVIDUALITY"*/);
    sub_1C32C20(&StringLiteral_3319/*"CHAIN_ERROR_INDIVIDUALITY"*/);
    sub_1C32C20(&StringLiteral_3003/*"BRAVE_CHAIN_INDIVIDUALITY"*/);
    sub_1C32C20(&StringLiteral_8668/*"MIGHTY_CHAIN_INDIVIDUALITY"*/);
    byte_4C3A256 = 1;
  }
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OVERWRITE_ATK_RATE_PRIORITY = 0x3E800000001LL;
  *(_QWORD *)&static_fields->PERCENTAGE_DENOMINATOR = 0x447A000042C80000LL;
  *(_OWORD *)&static_fields->PERMILLAGE_DENOMINATOR_INT = xmmword_C0C3E0;
  v2 = sub_1C32CC8(int___TypeInfo, 1);
  v3 = BattleDataDefine_TypeInfo->static_fields;
  v3->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v2;
  sub_1C32BC4((CGThumbnailListItem_o *)&v3->NO_INDIVIDUALITY_ARRAY, v2, v4, v5);
  v6 = StringLiteral_3087/*"Battle/Common"*/;
  v7 = BattleDataDefine_TypeInfo->static_fields;
  v7->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_3087/*"Battle/Common"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->ASSET_BATTLE_COMMON, v6, v8, v9);
  v10 = StringLiteral_11425/*"RootCameraPrefab"*/;
  v11 = BattleDataDefine_TypeInfo->static_fields;
  v11->RootCameraAssetName = (struct System_String_o *)StringLiteral_11425/*"RootCameraPrefab"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11->RootCameraAssetName, v10, v12, v13);
  BattleDataDefine_TypeInfo->static_fields->ShadowServantDefaultColor = (struct UnityEngine_Color_o)xmmword_C0BFC0;
  BattleDataDefine_TypeInfo->static_fields->_ArtsChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                        (System_String_o *)StringLiteral_2039/*"ARTS_CHAIN_INDIVIDUALITY"*/,
                                                                                        0);
  BattleDataDefine_TypeInfo->static_fields->_BusterChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                          (System_String_o *)StringLiteral_3010/*"BUSTER_CHAIN_INDIVIDUALITY"*/,
                                                                                          0);
  BattleDataDefine_TypeInfo->static_fields->_QuickChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                         (System_String_o *)StringLiteral_10915/*"QUICK_CHAIN_INDIVIDUALITY"*/,
                                                                                         0);
  BattleDataDefine_TypeInfo->static_fields->_BraveChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                         (System_String_o *)StringLiteral_3003/*"BRAVE_CHAIN_INDIVIDUALITY"*/,
                                                                                         0);
  BattleDataDefine_TypeInfo->static_fields->_MigthyChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                          (System_String_o *)StringLiteral_8668/*"MIGHTY_CHAIN_INDIVIDUALITY"*/,
                                                                                          0);
  BattleDataDefine_TypeInfo->static_fields->_ChainErrorIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                         (System_String_o *)StringLiteral_3319/*"CHAIN_ERROR_INDIVIDUALITY"*/,
                                                                                         0);
}


System_String_o *BattleDataDefine__AddUniqueCameraPath(int32_t cameraId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3A24C & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_3105/*"Battle/UniqueCamera/Add/{0}"*/);
    byte_4C3A24C = 1;
  }
  v11 = cameraId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_3105/*"Battle/UniqueCamera/Add/{0}"*/, v9, 0);
}


System_String_o *BattleDataDefine__FieldMotionPath(int32_t motionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3A24B & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_3095/*"Battle/Field/{0}"*/);
    byte_4C3A24B = 1;
  }
  v11 = motionId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_3095/*"Battle/Field/{0}"*/, v9, 0);
}


bool BattleDataDefine__IsHighTimeScale(float value, const MethodInfo *method)
{
  return BasicHelper__NearbyOrGreaterThan(value, 2.0, 0);
}


System_String_o *BattleDataDefine__MakeBgPath(int32_t bgId, const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  System_String_o *v3; // x19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = bgId;
  if ( (byte_4C3A24D & 1) == 0 )
  {
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    byte_4C3A24D = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0);
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeBgPath_45762496(v3, v2);
}


System_String_o *BattleDataDefine__MakeBgPath_45762496(System_String_o *bgIdStr, const MethodInfo *method)
{
  if ( (byte_4C3A24E & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3149/*"Bg/"*/);
    byte_4C3A24E = 1;
  }
  return System_String__Concat_63518544((System_String_o *)StringLiteral_3149/*"Bg/"*/, bgIdStr, 0);
}


int64_t BattleDataDefine__MakeQuestPhaseUniqueId(int32_t questId, int32_t phase, const MethodInfo *method)
{
  return phase + 100LL * questId;
}


int32_t BattleDataDefine__get_ArtsChainIndividuality(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x0

  if ( (byte_4C3A24F & 1) == 0 )
  {
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    byte_4C3A24F = 1;
  }
  v1 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v1 = BattleDataDefine_TypeInfo;
  }
  return v1->static_fields->_ArtsChainIndividuality_k__BackingField;
}


int32_t BattleDataDefine__get_BraveChainIndividuality(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x0

  if ( (byte_4C3A252 & 1) == 0 )
  {
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    byte_4C3A252 = 1;
  }
  v1 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v1 = BattleDataDefine_TypeInfo;
  }
  return v1->static_fields->_BraveChainIndividuality_k__BackingField;
}


int32_t BattleDataDefine__get_BusterChainIndividuality(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x0

  if ( (byte_4C3A250 & 1) == 0 )
  {
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    byte_4C3A250 = 1;
  }
  v1 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v1 = BattleDataDefine_TypeInfo;
  }
  return v1->static_fields->_BusterChainIndividuality_k__BackingField;
}


int32_t BattleDataDefine__get_ChainErrorIndividuality(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x0

  if ( (byte_4C3A254 & 1) == 0 )
  {
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    byte_4C3A254 = 1;
  }
  v1 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v1 = BattleDataDefine_TypeInfo;
  }
  return v1->static_fields->_ChainErrorIndividuality_k__BackingField;
}


int32_t BattleDataDefine__get_MigthyChainIndividuality(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x0

  if ( (byte_4C3A253 & 1) == 0 )
  {
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    byte_4C3A253 = 1;
  }
  v1 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v1 = BattleDataDefine_TypeInfo;
  }
  return v1->static_fields->_MigthyChainIndividuality_k__BackingField;
}


PlayerMasterIndividuality_o *BattleDataDefine__get_PlayerMasterIndividuality(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x0
  PlayerMasterIndividuality_o *playerMasterIndividuality; // x8
  Il2CppObject *Master_object; // x0
  System_String_o *Value; // x19
  bool IsNullOrEmpty; // w0
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BattleDataDefine_c *v9; // x8
  Il2CppObject *v10; // x19
  struct BattleDataDefine_StaticFields *static_fields; // x0

  if ( (byte_4C3A255 & 1) == 0 )
  {
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_JsonManager_Deserialize_PlayerMasterIndividuality___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&StringLiteral_10388/*"PLAYER_MASTER_INDIVIDUALITY"*/);
    byte_4C3A255 = 1;
  }
  v1 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v1 = BattleDataDefine_TypeInfo;
  }
  playerMasterIndividuality = v1->static_fields->playerMasterIndividuality;
  if ( playerMasterIndividuality )
  {
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      return BattleDataDefine_TypeInfo->static_fields->playerMasterIndividuality;
    }
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ConstantStrMaster___);
    if ( !Master_object )
      sub_1C32E7C(0);
    Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)Master_object, (System_String_o *)StringLiteral_10388/*"PLAYER_MASTER_INDIVIDUALITY"*/, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(Value, 0);
    playerMasterIndividuality = 0;
    if ( !IsNullOrEmpty )
    {
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v6 = JsonManager__Deserialize_object_(
             (Il2CppObject *)Value,
             (const MethodInfo_314C70C *)Method_JsonManager_Deserialize_PlayerMasterIndividuality___);
      v9 = BattleDataDefine_TypeInfo;
      v10 = v6;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v9 = BattleDataDefine_TypeInfo;
      }
      static_fields = v9->static_fields;
      static_fields->playerMasterIndividuality = (struct PlayerMasterIndividuality_o *)v10;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->playerMasterIndividuality, (int32_t)v10, v7, v8);
      return BattleDataDefine_TypeInfo->static_fields->playerMasterIndividuality;
    }
  }
  return playerMasterIndividuality;
}


int32_t BattleDataDefine__get_QuickChainIndividuality(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x0

  if ( (byte_4C3A251 & 1) == 0 )
  {
    sub_1C32C20(&BattleDataDefine_TypeInfo);
    byte_4C3A251 = 1;
  }
  v1 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v1 = BattleDataDefine_TypeInfo;
  }
  return v1->static_fields->_QuickChainIndividuality_k__BackingField;
}