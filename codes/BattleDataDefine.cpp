void BattleDataDefine___cctor(const MethodInfo *method)
{
  struct BattleDataDefine_StaticFields *static_fields; // x8
  __int64 v2; // x0
  struct BattleDataDefine_StaticFields *v3; // x8
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  struct BattleDataDefine_StaticFields *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  struct BattleDataDefine_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CF1021 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&StringLiteral_3011/*"BUSTER_CHAIN_INDIVIDUALITY"*/);
    sub_1C7BAE8(&StringLiteral_11475/*"RootCameraPrefab"*/);
    sub_1C7BAE8(&StringLiteral_10958/*"QUICK_CHAIN_INDIVIDUALITY"*/);
    sub_1C7BAE8(&StringLiteral_3088/*"Battle/Common"*/);
    sub_1C7BAE8(&StringLiteral_2037/*"ARTS_CHAIN_INDIVIDUALITY"*/);
    sub_1C7BAE8(&StringLiteral_3321/*"CHAIN_ERROR_INDIVIDUALITY"*/);
    sub_1C7BAE8(&StringLiteral_3004/*"BRAVE_CHAIN_INDIVIDUALITY"*/);
    sub_1C7BAE8(&StringLiteral_8693/*"MIGHTY_CHAIN_INDIVIDUALITY"*/);
    byte_4CF1021 = 1;
  }
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->OVERWRITE_ATK_RATE_PRIORITY = 0x3E800000001LL;
  *(_QWORD *)&static_fields->PERCENTAGE_DENOMINATOR = 0x447A000042C80000LL;
  *(_OWORD *)&static_fields->PERMILLAGE_DENOMINATOR_INT = xmmword_CF52A0;
  v2 = sub_1C7BB90(int___TypeInfo, 1);
  v3 = BattleDataDefine_TypeInfo->static_fields;
  v3->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v2;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->NO_INDIVIDUALITY_ARRAY, v2, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_3088/*"Battle/Common"*/;
  v11 = BattleDataDefine_TypeInfo->static_fields;
  v11->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_3088/*"Battle/Common"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v11->ASSET_BATTLE_COMMON, v10, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_11475/*"RootCameraPrefab"*/;
  v19 = BattleDataDefine_TypeInfo->static_fields;
  v19->RootCameraAssetName = (struct System_String_o *)StringLiteral_11475/*"RootCameraPrefab"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v19->RootCameraAssetName, v18, v20, v21, v22, v23, v24, v25);
  BattleDataDefine_TypeInfo->static_fields->ShadowServantDefaultColor = (struct UnityEngine_Color_o)xmmword_CF4E80;
  BattleDataDefine_TypeInfo->static_fields->_ArtsChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                        (System_String_o *)StringLiteral_2037/*"ARTS_CHAIN_INDIVIDUALITY"*/,
                                                                                        0);
  BattleDataDefine_TypeInfo->static_fields->_BusterChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                          (System_String_o *)StringLiteral_3011/*"BUSTER_CHAIN_INDIVIDUALITY"*/,
                                                                                          0);
  BattleDataDefine_TypeInfo->static_fields->_QuickChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                         (System_String_o *)StringLiteral_10958/*"QUICK_CHAIN_INDIVIDUALITY"*/,
                                                                                         0);
  BattleDataDefine_TypeInfo->static_fields->_BraveChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                         (System_String_o *)StringLiteral_3004/*"BRAVE_CHAIN_INDIVIDUALITY"*/,
                                                                                         0);
  BattleDataDefine_TypeInfo->static_fields->_MigthyChainIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                          (System_String_o *)StringLiteral_8693/*"MIGHTY_CHAIN_INDIVIDUALITY"*/,
                                                                                          0);
  BattleDataDefine_TypeInfo->static_fields->_ChainErrorIndividuality_k__BackingField = ConstantMaster__getValue(
                                                                                         (System_String_o *)StringLiteral_3321/*"CHAIN_ERROR_INDIVIDUALITY"*/,
                                                                                         0);
}


System_String_o *BattleDataDefine__AddUniqueCameraPath(int32_t cameraId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CF1017 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3107/*"Battle/UniqueCamera/Add/{0}"*/);
    byte_4CF1017 = 1;
  }
  v5 = cameraId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_3107/*"Battle/UniqueCamera/Add/{0}"*/, v3, 0);
}


System_String_o *BattleDataDefine__FieldMotionPath(int32_t motionId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CF1016 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3096/*"Battle/Field/{0}"*/);
    byte_4CF1016 = 1;
  }
  v5 = motionId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v5);
  return System_String__Format((System_String_o *)StringLiteral_3096/*"Battle/Field/{0}"*/, v3, 0);
}


bool BattleDataDefine__IsHighTimeScale(float value, const MethodInfo *method)
{
  return BasicHelper__NearbyOrGreaterThan(value, 2.0, 0);
}


bool BattleDataDefine__IsMatchBuffGroup(int32_t buffGroup, BattleBuffData_BuffData_o *buff, const MethodInfo *method)
{
  if ( buffGroup != 2 )
  {
    if ( buffGroup != 1 )
      return buffGroup == 0;
    if ( buff )
      return !buff->fields.passive;
LABEL_8:
    sub_1C7BD40(buffGroup, buff);
  }
  if ( !buff )
    goto LABEL_8;
  return buff->fields.passive;
}


System_String_o *BattleDataDefine__MakeBgPath(int32_t bgId, const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  System_String_o *v3; // x19
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = bgId;
  if ( (byte_4CF1018 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    byte_4CF1018 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0);
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeBgPath_46536932(v3, v2);
}


System_String_o *BattleDataDefine__MakeBgPath_46536932(System_String_o *bgIdStr, const MethodInfo *method)
{
  if ( (byte_4CF1019 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3151/*"Bg/"*/);
    byte_4CF1019 = 1;
  }
  return System_String__Concat_64176912((System_String_o *)StringLiteral_3151/*"Bg/"*/, bgIdStr, 0);
}


int64_t BattleDataDefine__MakeQuestPhaseUniqueId(int32_t questId, int32_t phase, const MethodInfo *method)
{
  return phase + 100LL * questId;
}


int32_t BattleDataDefine__get_ArtsChainIndividuality(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x0

  if ( (byte_4CF101A & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    byte_4CF101A = 1;
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

  if ( (byte_4CF101D & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    byte_4CF101D = 1;
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

  if ( (byte_4CF101B & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    byte_4CF101B = 1;
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

  if ( (byte_4CF101F & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    byte_4CF101F = 1;
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

  if ( (byte_4CF101E & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    byte_4CF101E = 1;
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
  __int64 v4; // x1
  System_String_o *Value; // x19
  bool IsNullOrEmpty; // w0
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BattleDataDefine_c *v14; // x8
  Il2CppObject *v15; // x19
  struct BattleDataDefine_StaticFields *static_fields; // x0

  if ( (byte_4CF1020 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_JsonManager_Deserialize_PlayerMasterIndividuality___);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10425/*"PLAYER_MASTER_INDIVIDUALITY"*/);
    byte_4CF1020 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    if ( !Master_object )
      sub_1C7BD40(0, v4);
    Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)Master_object, (System_String_o *)StringLiteral_10425/*"PLAYER_MASTER_INDIVIDUALITY"*/, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(Value, 0);
    playerMasterIndividuality = 0;
    if ( !IsNullOrEmpty )
    {
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v7 = JsonManager__Deserialize_object_(
             (Il2CppObject *)Value,
             (const MethodInfo_31DEE64 *)Method_JsonManager_Deserialize_PlayerMasterIndividuality___);
      v14 = BattleDataDefine_TypeInfo;
      v15 = v7;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v14 = BattleDataDefine_TypeInfo;
      }
      static_fields = v14->static_fields;
      static_fields->playerMasterIndividuality = (struct PlayerMasterIndividuality_o *)v15;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&static_fields->playerMasterIndividuality,
        (int32_t)v15,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      return BattleDataDefine_TypeInfo->static_fields->playerMasterIndividuality;
    }
  }
  return playerMasterIndividuality;
}


int32_t BattleDataDefine__get_QuickChainIndividuality(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x0

  if ( (byte_4CF101C & 1) == 0 )
  {
    sub_1C7BAE8(&BattleDataDefine_TypeInfo);
    byte_4CF101C = 1;
  }
  v1 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v1 = BattleDataDefine_TypeInfo;
  }
  return v1->static_fields->_QuickChainIndividuality_k__BackingField;
}