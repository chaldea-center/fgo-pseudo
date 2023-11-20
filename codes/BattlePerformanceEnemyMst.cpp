void __fastcall BattlePerformanceEnemyMst___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct BattlePerformanceEnemyMst_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct BattlePerformanceEnemyMst_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FA81B & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceEnemyMst_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_3948, v8);
    sub_B16FFC(&StringLiteral_18298, v9);
    sub_B16FFC(&StringLiteral_5978, v10);
    byte_40FA81B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_5978;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_5978;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_18298;
  v13->MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18298;
  sub_B16F98((BattleServantConfConponent_o *)&v13->MASTER_FACE_TEXTURE_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_3948;
  v21->MASTER_VOICE_ASSET_NAME = (struct System_String_o *)StringLiteral_3948;
  sub_B16F98((BattleServantConfConponent_o *)&v21->MASTER_VOICE_ASSET_NAME, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall BattlePerformanceEnemyMst___ctor(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceEnemyMst__Initialize(
        BattlePerformanceEnemyMst_o *this,
        BattleData_o *indata,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.data = indata;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)indata,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall BattlePerformanceEnemyMst__IsLoading(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  return this->fields.loadStat != 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine(
        BattlePerformanceEnemyMst_o *this,
        int32_t mstFaceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FA815 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_TypeInfo, *(_QWORD *)&mstFaceId);
    byte_40FA815 = 1;
  }
  v7 = sub_B170CC(BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_TypeInfo, *(_QWORD *)&mstFaceId, method, v3, v4);
  BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24___ctor(
    (BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = mstFaceId;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattlePerformanceEnemyMst__OnDestroy(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattlePerformanceEnemyMst__releaseMasterFace(this, method);
  BattlePerformanceEnemyMst__releaseMasterVoice(this, v3);
}


void __fastcall BattlePerformanceEnemyMst__OverwriteEnemyMasterFrame(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *battleUiAtlas; // x20
  UISprite_o *enemyMasterFrame; // x0
  UISprite_o *v14; // x0
  struct BattleData_o *data; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct BattleData_o *v17; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  EnemyMstBattleEntity_o *Entity; // x0
  int32_t OverwriteFrame; // w0
  int v21; // w20
  BattleDataDefine_c *v22; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v24; // x0
  UISprite_o *v25; // x19
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  int v28; // [xsp+Ch] [xbp-24h] BYREF
  UIAtlas_o *atlas; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40FA812 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_EnemyMstBattleMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_18809, v9);
    sub_B16FFC(&StringLiteral_2758, v10);
    sub_B16FFC(&StringLiteral_18810, v11);
    byte_40FA812 = 1;
  }
  atlas = 0LL;
  battleUiAtlas = (UnityEngine_Object_o *)this->fields.battleUiAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(battleUiAtlas, 0LL, 0LL) )
  {
    enemyMasterFrame = this->fields.enemyMasterFrame;
    if ( !enemyMasterFrame )
      goto LABEL_31;
    UISprite__set_atlas(enemyMasterFrame, this->fields.battleUiAtlas, 0LL);
    v14 = this->fields.enemyMasterFrame;
    if ( !v14 )
      goto LABEL_31;
    UISprite__set_spriteName(v14, (System_String_o *)StringLiteral_18809, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  if ( !data->fields.enemyMasterInfo )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EnemyMstBattleMaster___);
  v17 = this->fields.data;
  if ( !v17
    || (enemyMasterInfo = v17->fields.enemyMasterInfo) == 0LL
    || !Master_WarQuestSelectionMaster
    || (Entity = (EnemyMstBattleEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             Master_WarQuestSelectionMaster,
                                             enemyMasterInfo->fields.id,
                                             (const MethodInfo_266F388 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__)) == 0LL )
  {
LABEL_31:
    sub_B170D4();
  }
  OverwriteFrame = EnemyMstBattleEntity__GetOverwriteFrame(Entity, 0, 0LL);
  if ( OverwriteFrame )
  {
    v21 = OverwriteFrame;
    atlas = 0LL;
    v22 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v22 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v22->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_2758, 0LL) )
    {
      v24 = this->fields.enemyMasterFrame;
      if ( v24 )
      {
        UISprite__set_atlas(v24, atlas, 0LL);
        v25 = this->fields.enemyMasterFrame;
        v28 = v21;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
        v27 = System_String__Format((System_String_o *)StringLiteral_18810, v26, 0LL);
        if ( v25 )
        {
          UISprite__set_spriteName(v25, v27, 0LL);
          return;
        }
      }
      goto LABEL_31;
    }
  }
}


void __fastcall BattlePerformanceEnemyMst__SetRootActive(
        BattlePerformanceEnemyMst_o *this,
        bool status,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x0
  CommandSpellIconComponent_o *commandSpellIcon; // x21
  int32_t EnemyMasterCommandSpellCnt; // w0
  UnityEngine_GameObject_o *masterRoot; // x0

  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  if ( data->fields.enemyMasterInfo )
  {
    if ( status )
    {
      commandSpellIcon = this->fields.commandSpellIcon;
      EnemyMasterCommandSpellCnt = BattleData__getEnemyMasterCommandSpellCnt(data, 0LL);
      if ( !commandSpellIcon )
        goto LABEL_9;
      CommandSpellIconComponent__SetRemain(commandSpellIcon, EnemyMasterCommandSpellCnt, 0LL);
    }
    masterRoot = this->fields.masterRoot;
    if ( masterRoot )
    {
      UnityEngine_GameObject__SetActive(masterRoot, status, 0LL);
      return;
    }
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceEnemyMst___loadData_b__18_0(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t CurrentEnemyMasterFaceId; // w1
  const MethodInfo *v5; // x2

  data = this->fields.data;
  this->fields.loadStat = 2;
  if ( !data )
    sub_B170D4();
  CurrentEnemyMasterFaceId = BattleData__GetCurrentEnemyMasterFaceId(data, 0LL);
  BattlePerformanceEnemyMst__loadMasterFace(this, CurrentEnemyMasterFaceId, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemyMst__changeMasterFace(
        BattlePerformanceEnemyMst_o *this,
        int32_t nextMstFaceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WebViewManager_o *Instance; // x19
  const MethodInfo *v18; // x2
  System_String_o *AssetName; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  AssetLoader_LoadEndDataHandler_o *v24; // x22

  if ( (byte_40FA814 & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, *(_QWORD *)&nextMstFaceId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    sub_B16FFC(&Method_BattlePerformanceEnemyMst___c__DisplayClass23_0__changeMasterFace_b__0__, v8);
    sub_B16FFC(&BattlePerformanceEnemyMst___c__DisplayClass23_0_TypeInfo, v9);
    byte_40FA814 = 1;
  }
  v10 = sub_B170CC(BattlePerformanceEnemyMst___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&nextMstFaceId, method, v3, v4);
  BattlePerformanceEnemyMst___c__DisplayClass23_0___ctor((BattlePerformanceEnemyMst___c__DisplayClass23_0_o *)v10, 0LL);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = this,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v10 + 16),
          (System_Int32_array **)this,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        *(_DWORD *)(v10 + 24) = nextMstFaceId,
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__),
        AssetName = BattlePerformanceEnemyMst__getAssetName(
                      (BattlePerformanceEnemyMst_o *)Instance,
                      *(_DWORD *)(v10 + 24),
                      v18),
        v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                    AssetLoader_LoadEndDataHandler_TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22,
                                                    v23),
        AssetLoader_LoadEndDataHandler___ctor(
          v24,
          (Il2CppObject *)v10,
          Method_BattlePerformanceEnemyMst___c__DisplayClass23_0__changeMasterFace_b__0__,
          0LL),
        !Instance) )
  {
    sub_B170D4();
  }
  AssetManager__LoadAssetStorage((AssetManager_o *)Instance, AssetName, v24, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceEnemyMst__getAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattlePerformanceEnemyMst_c *v5; // x0
  System_String_o *MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FA818 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&int_TypeInfo, v4);
    byte_40FA818 = 1;
  }
  v5 = BattlePerformanceEnemyMst_TypeInfo;
  if ( (BYTE3(BattlePerformanceEnemyMst_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v5 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_ASSET_NAME = v5->static_fields->MASTER_FACE_ASSET_NAME;
  v9 = id;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format(MASTER_FACE_ASSET_NAME, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceEnemyMst__getTextureName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattlePerformanceEnemyMst_c *v5; // x0
  System_String_o *MASTER_FACE_TEXTURE_NAME; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FA819 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&int_TypeInfo, v4);
    byte_40FA819 = 1;
  }
  v5 = BattlePerformanceEnemyMst_TypeInfo;
  if ( (BYTE3(BattlePerformanceEnemyMst_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v5 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_TEXTURE_NAME = v5->static_fields->MASTER_FACE_TEXTURE_NAME;
  v9 = id;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format(MASTER_FACE_TEXTURE_NAME, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceEnemyMst__getVoiceAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattlePerformanceEnemyMst_c *v5; // x0
  System_String_o *MASTER_VOICE_ASSET_NAME; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FA81A & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&int_TypeInfo, v4);
    byte_40FA81A = 1;
  }
  v5 = BattlePerformanceEnemyMst_TypeInfo;
  if ( (BYTE3(BattlePerformanceEnemyMst_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v5 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_VOICE_ASSET_NAME = v5->static_fields->MASTER_VOICE_ASSET_NAME;
  v9 = id;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format(MASTER_VOICE_ASSET_NAME, v7, 0LL);
}


void __fastcall BattlePerformanceEnemyMst__loadData(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleData_o *data; // x8
  BattlePerformanceEnemyMst_o *v6; // x0
  const MethodInfo *v7; // x2
  struct BattleData_o *v8; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  struct System_String_o *VoiceAssetName; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_o *loadVoiceAsset; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x1
  UnityEngine_GameObject_o *masterRoot; // x0
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1

  if ( (byte_40FA811 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattlePerformanceEnemyMst__loadData_b__18_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA811 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  if ( !data->fields.enemyMasterInfo )
  {
    masterRoot = this->fields.masterRoot;
    if ( masterRoot )
    {
      UnityEngine_GameObject__SetActive(masterRoot, 0, 0LL);
      BattlePerformanceEnemyMst__releaseMasterFace(this, v25);
      BattlePerformanceEnemyMst__releaseMasterVoice(this, v26);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
  this->fields.loadStat = 1;
  BattlePerformanceEnemyMst__releaseMasterVoice(this, method);
  v8 = this->fields.data;
  if ( !v8 )
    goto LABEL_13;
  enemyMasterInfo = v8->fields.enemyMasterInfo;
  if ( !enemyMasterInfo )
    goto LABEL_13;
  VoiceAssetName = BattlePerformanceEnemyMst__getVoiceAssetName(v6, enemyMasterInfo->fields.enemyMasterId, v7);
  this->fields.loadVoiceAsset = VoiceAssetName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadVoiceAsset,
    (System_Int32_array **)VoiceAssetName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  loadVoiceAsset = this->fields.loadVoiceAsset;
  v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_BattlePerformanceEnemyMst__loadData_b__18_0__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(loadVoiceAsset, v22, 1, 0LL);
  BattlePerformanceEnemyMst__updateCommandSpellIcon(this, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemyMst__loadMasterFace(
        BattlePerformanceEnemyMst_o *this,
        int32_t mstFaceId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *faceText; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *AssetCoroutine; // x1

  if ( (byte_40FA813 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mstFaceId);
    byte_40FA813 = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(faceText, 0LL, 0LL) )
  {
    if ( this->fields.mstFaceAssets )
      BattlePerformanceEnemyMst__releaseMasterFace(this, v6);
    AssetCoroutine = BattlePerformanceEnemyMst__LoadAssetCoroutine(this, mstFaceId, v7);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, AssetCoroutine, 0LL);
  }
}


void __fastcall BattlePerformanceEnemyMst__releaseMasterFace(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *faceText; // x20
  struct UITexture_o *v5; // x0
  UnityEngine_Object_o *v6; // x20
  struct UITexture_o *v7; // x0
  UnityEngine_Object_o *v8; // x20
  struct UITexture_o *v9; // x0
  struct UITexture_o *v10; // x0
  UnityEngine_Object_o *v11; // x20
  struct UITexture_o *v12; // x0
  struct AssetData_o *v13; // x8
  BattleServantConfConponent_o *p_mstFaceAssets; // x19
  struct AssetData_o *mstFaceAssets; // t1
  System_String_o *name; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40FA816 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FA816 = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(faceText, 0LL, 0LL) )
  {
    v5 = this->fields.faceText;
    if ( !v5 )
      goto LABEL_31;
    v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v5->klass->vtable._24_get_material.method)(
                                   v5,
                                   v5->klass->vtable._25_set_material.methodPtr);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    {
      v7 = this->fields.faceText;
      if ( !v7 )
        goto LABEL_31;
      v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v7->klass->vtable._24_get_material.method)(
                                     v7,
                                     v7->klass->vtable._25_set_material.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v8, 0LL);
      v9 = this->fields.faceText;
      if ( !v9 )
        goto LABEL_31;
      ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v9->klass->vtable._25_set_material.method)(
        v9,
        0LL,
        v9->klass->vtable._26_get_mainTexture.methodPtr);
    }
    v10 = this->fields.faceText;
    if ( v10 )
    {
      v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v10->klass->vtable._26_get_mainTexture.method)(
                                      v10,
                                      v10->klass->vtable._27_set_mainTexture.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
        goto LABEL_25;
      v12 = this->fields.faceText;
      if ( v12 )
      {
        ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._27_set_mainTexture.method)(
          v12,
          0LL,
          v12->klass->vtable._28_get_shader.methodPtr);
LABEL_25:
        mstFaceAssets = this->fields.mstFaceAssets;
        p_mstFaceAssets = (BattleServantConfConponent_o *)&this->fields.mstFaceAssets;
        v13 = mstFaceAssets;
        if ( mstFaceAssets )
        {
          name = v13->fields.name;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetManager__releaseAssetStorage(name, 0LL);
          p_mstFaceAssets->klass = 0LL;
          sub_B16F98(p_mstFaceAssets, 0LL, v17, v18, v19, v20, v21, v22);
        }
        return;
      }
    }
LABEL_31:
    sub_B170D4();
  }
}


void __fastcall BattlePerformanceEnemyMst__releaseMasterVoice(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_loadVoiceAsset; // x19
  System_String_o *v4; // x20
  struct System_String_o *loadVoiceAsset; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_40FA817 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA817 = 1;
  }
  loadVoiceAsset = this->fields.loadVoiceAsset;
  p_loadVoiceAsset = (BattleServantConfConponent_o *)&this->fields.loadVoiceAsset;
  v4 = loadVoiceAsset;
  if ( loadVoiceAsset )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v4, 0LL);
    p_loadVoiceAsset->klass = 0LL;
    sub_B16F98(p_loadVoiceAsset, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall BattlePerformanceEnemyMst__updateCommandSpellIcon(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  CommandSpellIconComponent_o *commandSpellIcon; // x0
  BattleData_o *v6; // x0
  CommandSpellIconComponent_o *v7; // x19
  int32_t EnemyMasterCommandSpellCnt; // w0

  data = this->fields.data;
  if ( !data
    || (enemyMasterInfo = data->fields.enemyMasterInfo) == 0LL
    || (commandSpellIcon = this->fields.commandSpellIcon) == 0LL
    || (CommandSpellIconComponent__SetImageType(commandSpellIcon, enemyMasterInfo->fields.commandSpellIconId, 0LL),
        (v6 = this->fields.data) == 0LL)
    || (v7 = this->fields.commandSpellIcon,
        EnemyMasterCommandSpellCnt = BattleData__getEnemyMasterCommandSpellCnt(v6, 0LL),
        !v7) )
  {
    sub_B170D4();
  }
  CommandSpellIconComponent__SetRemain(v7, EnemyMasterCommandSpellCnt, 0LL);
}


void __fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24___ctor(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24__MoveNext(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  Il2CppObject *v10; // x21
  struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o **p__8__1; // x20
  struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *_8__1; // x0
  struct BattlePerformanceEnemyMst_o *_4__this; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceEnemyMst_o *v16; // x20
  WebViewManager_o *Instance; // x0
  struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *v18; // x8
  AssetManager_o *v19; // x21
  System_String_o *AssetName; // x0
  Il2CppObject *v21; // x23
  System_String_o *v22; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  AssetLoader_LoadEndDataHandler_o *v27; // x22

  if ( (byte_40F717B & 1) == 0 )
  {
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6);
    sub_B16FFC(&Method_BattlePerformanceEnemyMst___c__DisplayClass24_0__LoadAssetCoroutine_b__0__, v7);
    sub_B16FFC(&BattlePerformanceEnemyMst___c__DisplayClass24_0_TypeInfo, v8);
    byte_40F717B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_B170CC(BattlePerformanceEnemyMst___c__DisplayClass24_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor(v10, 0LL);
      p__8__1 = &this->fields.__8__1;
      this->fields.__8__1 = (struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *)v10;
      sub_B16F98(&this->fields.__8__1, v10);
      _8__1 = this->fields.__8__1;
      if ( _8__1 )
      {
        _4__this = this->fields.__4__this;
        _8__1->fields.__4__this = _4__this;
        sub_B16F98(&_8__1->fields, _4__this);
        if ( *p__8__1 )
        {
          (*p__8__1)->fields.mstFaceId = this->fields.mstFaceId;
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_B16F98(p__2__current, 0LL);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_14:
      sub_B170D4();
    }
    return 0;
  }
  this->fields.__1__state = -1;
  v16 = this->fields.__4__this;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v18 = this->fields.__8__1;
  if ( !v18 )
    goto LABEL_14;
  if ( !v16 )
    goto LABEL_14;
  v19 = (AssetManager_o *)Instance;
  AssetName = BattlePerformanceEnemyMst__getAssetName(v16, v18->fields.mstFaceId, 0LL);
  v21 = (Il2CppObject *)this->fields.__8__1;
  v22 = AssetName;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24, v25, v26);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    v21,
    Method_BattlePerformanceEnemyMst___c__DisplayClass24_0__LoadAssetCoroutine_b__0__,
    0LL);
  if ( !v19 )
    goto LABEL_14;
  if ( AssetManager__LoadAssetStorage(v19, v22, v27, 1, 0LL) )
    return 0;
  result = 0;
  v16->fields.loadStat = 0;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24__System_Collections_IEnumerator_Reset(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24__System_Collections_IEnumerator_get_Current(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24__System_IDisposable_Dispose(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceEnemyMst___c__DisplayClass23_0___ctor(
        BattlePerformanceEnemyMst___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceEnemyMst___c__DisplayClass23_0___changeMasterFace_b__0(
        BattlePerformanceEnemyMst___c__DisplayClass23_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformanceEnemyMst_o *_4__this; // x0
  System_String_o *TextureName; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  struct BattlePerformanceEnemyMst_o *v9; // x8
  WarBoardWaitTimeSetting_o *v10; // x1
  struct UITexture_o *faceText; // x0
  struct BattlePerformanceEnemyMst_o *v12; // x0
  struct AssetData_o *mstFaceAssets; // x8
  System_String_o *name; // x21

  if ( (byte_40F7179 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, data);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    byte_40F7179 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  TextureName = BattlePerformanceEnemyMst__getTextureName(_4__this, this->fields.nextMstFaceId, 0LL);
  if ( !data )
    goto LABEL_14;
  Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                     data,
                                     TextureName,
                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_14;
  v10 = Object_WarBoardWaitTimeSetting;
  faceText = v9->fields.faceText;
  if ( !faceText )
    goto LABEL_14;
  ((void (__fastcall *)(struct UITexture_o *, WarBoardWaitTimeSetting_o *, Il2CppMethodPointer))faceText->klass->vtable._27_set_mainTexture.method)(
    faceText,
    v10,
    faceText->klass->vtable._28_get_shader.methodPtr);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_14;
  mstFaceAssets = v12->fields.mstFaceAssets;
  if ( mstFaceAssets )
  {
    name = mstFaceAssets->fields.name;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(name, 0LL);
    v12 = this->fields.__4__this;
    if ( !v12 )
LABEL_14:
      sub_B170D4();
  }
  v12->fields.mstFaceAssets = data;
  sub_B16F98(&v12->fields.mstFaceAssets, data);
}


void __fastcall BattlePerformanceEnemyMst___c__DisplayClass24_0___ctor(
        BattlePerformanceEnemyMst___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceEnemyMst___c__DisplayClass24_0___LoadAssetCoroutine_b__0(
        BattlePerformanceEnemyMst___c__DisplayClass24_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattlePerformanceEnemyMst_o *_4__this; // x0
  struct BattlePerformanceEnemyMst_o *v8; // x8
  struct BattlePerformanceEnemyMst_o *v9; // x8
  struct UITexture_o *faceText; // x20
  UnityEngine_Shader_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  UnityEngine_Material_o *v16; // x21
  struct BattlePerformanceEnemyMst_o *v17; // x0
  struct UITexture_o *v18; // x20
  AssetData_o *mstFaceAssets; // x21
  System_String_o *TextureName; // x0
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_40F717A & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, data);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_4519, v6);
    byte_40F717A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.mstFaceAssets = data;
  sub_B16F98(&_4__this->fields.mstFaceAssets, data);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_11;
  v8->fields.loadStat = 0;
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_11;
  faceText = v9->fields.faceText;
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519, 0LL);
  v16 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v12, v13, v14, v15);
  UnityEngine_Material___ctor(v16, v11, 0LL);
  if ( !faceText
    || (((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))faceText->klass->vtable._25_set_material.method)(
          faceText,
          v16,
          faceText->klass->vtable._26_get_mainTexture.methodPtr),
        (v17 = this->fields.__4__this) == 0LL)
    || (v18 = v17->fields.faceText,
        mstFaceAssets = v17->fields.mstFaceAssets,
        TextureName = BattlePerformanceEnemyMst__getTextureName(v17, this->fields.mstFaceId, 0LL),
        !mstFaceAssets)
    || (Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           mstFaceAssets,
                                           TextureName,
                                           (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808),
        !v18) )
  {
LABEL_11:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UITexture_o *, WarBoardWaitTimeSetting_o *, Il2CppMethodPointer))v18->klass->vtable._27_set_mainTexture.method)(
    v18,
    Object_WarBoardWaitTimeSetting,
    v18->klass->vtable._28_get_shader.methodPtr);
}