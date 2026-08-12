void BattleDataDefine___cctor(const MethodInfo *method)
{
  struct BattleDataDefine_StaticFields *static_fields; // x8
  Il2CppClass *v2; // x0
  __int64 v3; // x0
  struct BattleDataDefine_StaticFields *v4; // x8
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1
  struct BattleDataDefine_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // w1
  struct BattleDataDefine_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x0
  int32_t Value; // w0
  System_String_o *v29; // x8
  int32_t v30; // w0
  System_String_o *v31; // x8
  int32_t v32; // w0
  System_String_o *v33; // x8
  int32_t v34; // w0
  System_String_o *v35; // x8
  int32_t v36; // w0
  System_String_o *v37; // x8

  if ( (byte_5973373 & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_3132/*"BUSTER_CHAIN_INDIVIDUALITY"*/);
    sub_2213A60(&StringLiteral_11927/*"RootCameraPrefab"*/);
    sub_2213A60(&StringLiteral_11389/*"QUICK_CHAIN_INDIVIDUALITY"*/);
    sub_2213A60(&StringLiteral_3208/*"Battle/Common"*/);
    sub_2213A60(&StringLiteral_2135/*"ARTS_CHAIN_INDIVIDUALITY"*/);
    sub_2213A60(&StringLiteral_3456/*"CHAIN_ERROR_INDIVIDUALITY"*/);
    sub_2213A60(&StringLiteral_3125/*"BRAVE_CHAIN_INDIVIDUALITY"*/);
    sub_2213A60(&StringLiteral_9032/*"MIGHTY_CHAIN_INDIVIDUALITY"*/);
    byte_5973373 = 1;
  }
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  v2 = int___TypeInfo;
  *(_QWORD *)&static_fields->OVERWRITE_ATK_RATE_PRIORITY = 0x3E800000001LL;
  *(_QWORD *)&static_fields->PERCENTAGE_DENOMINATOR = 0x447A000042C80000LL;
  *(_OWORD *)&static_fields->PERMILLAGE_DENOMINATOR_INT = xmmword_E9D980;
  v3 = sub_2213B20(v2, 1);
  v4 = BattleDataDefine_TypeInfo->static_fields;
  v4->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->NO_INDIVIDUALITY_ARRAY, v3, v5, v6, v7, v8, v9, v10);
  v11 = StringLiteral_3208/*"Battle/Common"*/;
  v12 = BattleDataDefine_TypeInfo->static_fields;
  v12->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_3208/*"Battle/Common"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->ASSET_BATTLE_COMMON, v11, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_11927/*"RootCameraPrefab"*/;
  v20 = BattleDataDefine_TypeInfo->static_fields;
  v20->RootCameraAssetName = (struct System_String_o *)StringLiteral_11927/*"RootCameraPrefab"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->RootCameraAssetName, v19, v21, v22, v23, v24, v25, v26);
  v27 = (System_String_o *)StringLiteral_2135/*"ARTS_CHAIN_INDIVIDUALITY"*/;
  BattleDataDefine_TypeInfo->static_fields->ShadowServantDefaultColor = (struct UnityEngine_Color_o)xmmword_E9D180;
  Value = ConstantMaster__getValue(v27, 0);
  v29 = (System_String_o *)StringLiteral_3132/*"BUSTER_CHAIN_INDIVIDUALITY"*/;
  BattleDataDefine_TypeInfo->static_fields->_ArtsChainIndividuality_k__BackingField = Value;
  v30 = ConstantMaster__getValue(v29, 0);
  v31 = (System_String_o *)StringLiteral_11389/*"QUICK_CHAIN_INDIVIDUALITY"*/;
  BattleDataDefine_TypeInfo->static_fields->_BusterChainIndividuality_k__BackingField = v30;
  v32 = ConstantMaster__getValue(v31, 0);
  v33 = (System_String_o *)StringLiteral_3125/*"BRAVE_CHAIN_INDIVIDUALITY"*/;
  BattleDataDefine_TypeInfo->static_fields->_QuickChainIndividuality_k__BackingField = v32;
  v34 = ConstantMaster__getValue(v33, 0);
  v35 = (System_String_o *)StringLiteral_9032/*"MIGHTY_CHAIN_INDIVIDUALITY"*/;
  BattleDataDefine_TypeInfo->static_fields->_BraveChainIndividuality_k__BackingField = v34;
  v36 = ConstantMaster__getValue(v35, 0);
  v37 = (System_String_o *)StringLiteral_3456/*"CHAIN_ERROR_INDIVIDUALITY"*/;
  BattleDataDefine_TypeInfo->static_fields->_MigthyChainIndividuality_k__BackingField = v36;
  BattleDataDefine_TypeInfo->static_fields->_ChainErrorIndividuality_k__BackingField = ConstantMaster__getValue(v37, 0);
}


System_String_o *BattleDataDefine__AddUniqueCameraPath(int32_t cameraId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5973369 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3228/*"Battle/UniqueCamera/Add/{0}"*/);
    byte_5973369 = 1;
  }
  v5 = cameraId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v5);
  return System_String__Format((System_String_o *)StringLiteral_3228/*"Battle/UniqueCamera/Add/{0}"*/, v3, 0);
}


System_String_o *BattleDataDefine__FieldMotionPath(int32_t motionId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5973368 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3216/*"Battle/Field/{0}"*/);
    byte_5973368 = 1;
  }
  v5 = motionId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v5);
  return System_String__Format((System_String_o *)StringLiteral_3216/*"Battle/Field/{0}"*/, v3, 0);
}


bool BattleDataDefine__IsHighTimeScale(float value, const MethodInfo *method)
{
  return BasicHelper__NearbyOrGreaterThan(value, 2.0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleDataDefine__IsMatchBuffGroup(int32_t buffGroup, BattleBuffData_BuffData_o *buff, const MethodInfo *method)
{
  if ( buffGroup != 2 )
  {
    if ( buffGroup != 1 )
      return buffGroup == 0;
    if ( buff )
      return !buff->fields.passive;
LABEL_8:
    sub_2213CDC(*(_QWORD *)&buffGroup, buff);
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
  if ( (byte_597336A & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_597336A = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v5, 0);
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v2);
  return BattleDataDefine__MakeBgPath_53096280(v3, v2);
}


System_String_o *BattleDataDefine__MakeBgPath_53096280(System_String_o *bgIdStr, const MethodInfo *method)
{
  if ( (byte_597336B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3275/*"Bg/"*/);
    byte_597336B = 1;
  }
  return System_String__Concat_75651716((System_String_o *)StringLiteral_3275/*"Bg/"*/, bgIdStr, 0);
}


int64_t BattleDataDefine__MakeQuestPhaseUniqueId(int32_t questId, int32_t phase, const MethodInfo *method)
{
  return phase + 100LL * questId;
}


int32_t BattleDataDefine__get_ArtsChainIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_597336C & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_597336C = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v1);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_ArtsChainIndividuality_k__BackingField;
}


int32_t BattleDataDefine__get_BraveChainIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_597336F & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_597336F = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v1);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_BraveChainIndividuality_k__BackingField;
}


int32_t BattleDataDefine__get_BusterChainIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_597336D & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_597336D = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v1);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_BusterChainIndividuality_k__BackingField;
}


int32_t BattleDataDefine__get_ChainErrorIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_5973371 & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_5973371 = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v1);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_ChainErrorIndividuality_k__BackingField;
}


int32_t BattleDataDefine__get_MigthyChainIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_5973370 & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_5973370 = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v1);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_MigthyChainIndividuality_k__BackingField;
}


PlayerMasterIndividuality_o *BattleDataDefine__get_PlayerMasterIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0
  PlayerMasterIndividuality_o *playerMasterIndividuality; // x8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_String_o *Value; // x19
  bool IsNullOrEmpty; // w0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BattleDataDefine_c *v17; // x8
  Il2CppObject *v18; // x19
  struct BattleDataDefine_StaticFields *static_fields; // x0

  if ( (byte_5973372 & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_JsonManager_Deserialize_PlayerMasterIndividuality___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_10822/*"PLAYER_MASTER_INDIVIDUALITY"*/);
    byte_5973372 = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v1);
    v2 = BattleDataDefine_TypeInfo;
  }
  playerMasterIndividuality = v2->static_fields->playerMasterIndividuality;
  if ( playerMasterIndividuality )
  {
    if ( !*(&v2->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v2, v1);
      return BattleDataDefine_TypeInfo->static_fields->playerMasterIndividuality;
    }
  }
  else
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ConstantStrMaster___);
    if ( !Master_object )
      sub_2213CDC(0, v5);
    Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)Master_object, (System_String_o *)StringLiteral_10822/*"PLAYER_MASTER_INDIVIDUALITY"*/, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(Value, 0);
    playerMasterIndividuality = 0;
    if ( !IsNullOrEmpty )
    {
      if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
      v9 = JsonManager__Deserialize_object_(
             (Il2CppObject *)Value,
             (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_PlayerMasterIndividuality___);
      v17 = BattleDataDefine_TypeInfo;
      v18 = v9;
      if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v10);
        v17 = BattleDataDefine_TypeInfo;
      }
      static_fields = v17->static_fields;
      static_fields->playerMasterIndividuality = (struct PlayerMasterIndividuality_o *)v18;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&static_fields->playerMasterIndividuality,
        (int32_t)v18,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      return BattleDataDefine_TypeInfo->static_fields->playerMasterIndividuality;
    }
  }
  return playerMasterIndividuality;
}


int32_t BattleDataDefine__get_QuickChainIndividuality(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleDataDefine_c *v2; // x0

  if ( (byte_597336E & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_597336E = 1;
  }
  v2 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v1);
    v2 = BattleDataDefine_TypeInfo;
  }
  return v2->static_fields->_QuickChainIndividuality_k__BackingField;
}