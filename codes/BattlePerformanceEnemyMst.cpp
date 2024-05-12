void __fastcall BattlePerformanceEnemyMst___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct BattlePerformanceEnemyMst_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct BattlePerformanceEnemyMst_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_438B3B2 & 1) == 0 )
  {
    sub_B775C4(&BattlePerformanceEnemyMst_TypeInfo);
    sub_B775C4(&StringLiteral_4091/*"ChrVoice_{0}"*/);
    sub_B775C4(&StringLiteral_18734/*"enemyMstFace{0:d5}"*/);
    sub_B775C4(&StringLiteral_6144/*"EnemyMasterFace/enemyMstFace{0:d5}"*/);
    byte_438B3B2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6144/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6144/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18734/*"enemyMstFace{0:d5}"*/;
  v9->MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18734/*"enemyMstFace{0:d5}"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->MASTER_FACE_TEXTURE_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_4091/*"ChrVoice_{0}"*/;
  v17->MASTER_VOICE_ASSET_NAME = (struct System_String_o *)StringLiteral_4091/*"ChrVoice_{0}"*/;
  sub_B77560((BattleServantConfConponent_o *)&v17->MASTER_VOICE_ASSET_NAME, v18, v19, v20, v21, v22, v23, v24);
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
  sub_B77560(
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


System_Collections_IEnumerator_o *__fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine(
        BattlePerformanceEnemyMst_o *this,
        int32_t mstFaceId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438B3AC & 1) == 0 )
  {
    sub_B775C4(&BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_TypeInfo);
    byte_438B3AC = 1;
  }
  v5 = sub_B77694(BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_TypeInfo);
  BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24___ctor(
    (BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 40) = mstFaceId;
  return (System_Collections_IEnumerator_o *)v5;
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
  UnityEngine_Object_o *battleUiAtlas; // x20
  UISprite_o *enemyMasterFrame; // x0
  __int64 v5; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v7; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  int32_t OverwriteFrame; // w0
  int v10; // w20
  BattleDataDefine_c *v11; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v13; // x19
  __int64 v14; // x2
  Il2CppObject *v15; // x0
  int v16; // [xsp+Ch] [xbp-24h] BYREF
  UIAtlas_o *atlas; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_438B3A9 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&BattleDataDefine_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_EnemyMstBattleMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_19262/*"frame_enemymaster_bg"*/);
    sub_B775C4(&StringLiteral_2880/*"BattleAssetUIAtlas"*/);
    sub_B775C4(&StringLiteral_19263/*"frame_enemymaster_bg_{0}"*/);
    byte_438B3A9 = 1;
  }
  atlas = 0LL;
  battleUiAtlas = (UnityEngine_Object_o *)this->fields.battleUiAtlas;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  enemyMasterFrame = (UISprite_o *)UnityEngine_Object__op_Inequality(battleUiAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)enemyMasterFrame & 1) != 0 )
  {
    enemyMasterFrame = this->fields.enemyMasterFrame;
    if ( !enemyMasterFrame )
      goto LABEL_31;
    UISprite__set_atlas(enemyMasterFrame, this->fields.battleUiAtlas, 0LL);
    enemyMasterFrame = this->fields.enemyMasterFrame;
    if ( !enemyMasterFrame )
      goto LABEL_31;
    UISprite__set_spriteName(enemyMasterFrame, (System_String_o *)StringLiteral_19262/*"frame_enemymaster_bg"*/, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  if ( !data->fields.enemyMasterInfo )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  enemyMasterFrame = (UISprite_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EnemyMstBattleMaster___);
  v7 = this->fields.data;
  if ( !v7
    || (enemyMasterInfo = v7->fields.enemyMasterInfo) == 0LL
    || !enemyMasterFrame
    || (enemyMasterFrame = (UISprite_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)enemyMasterFrame,
                                           enemyMasterInfo->fields.id,
                                           (const MethodInfo_21FB894 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__)) == 0LL )
  {
LABEL_31:
    sub_B7769C(enemyMasterFrame, v5);
  }
  OverwriteFrame = EnemyMstBattleEntity__GetOverwriteFrame((EnemyMstBattleEntity_o *)enemyMasterFrame, 0, 0LL);
  if ( OverwriteFrame )
  {
    v10 = OverwriteFrame;
    atlas = 0LL;
    v11 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v11 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v11->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_2880/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      enemyMasterFrame = this->fields.enemyMasterFrame;
      if ( enemyMasterFrame )
      {
        UISprite__set_atlas(enemyMasterFrame, atlas, 0LL);
        v13 = this->fields.enemyMasterFrame;
        v16 = v10;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v14);
        enemyMasterFrame = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_19263/*"frame_enemymaster_bg_{0}"*/, v15, 0LL);
        if ( v13 )
        {
          UISprite__set_spriteName(v13, (System_String_o *)enemyMasterFrame, 0LL);
          return;
        }
      }
      goto LABEL_31;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemyMst__SetRootActive(
        BattlePerformanceEnemyMst_o *this,
        bool status,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  CommandSpellIconComponent_o *commandSpellIcon; // x21

  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  if ( data->fields.enemyMasterInfo )
  {
    if ( status )
    {
      commandSpellIcon = this->fields.commandSpellIcon;
      data = (BattleData_o *)BattleData__getEnemyMasterCommandSpellCnt(data, 0LL);
      if ( !commandSpellIcon )
        goto LABEL_9;
      CommandSpellIconComponent__SetRemain(commandSpellIcon, (int32_t)data, 0LL);
    }
    data = (BattleData_o *)this->fields.masterRoot;
    if ( data )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, status, 0LL);
      return;
    }
LABEL_9:
    sub_B7769C(data, status);
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
    sub_B7769C(0LL, method);
  CurrentEnemyMasterFaceId = BattleData__GetCurrentEnemyMasterFaceId(data, 0LL);
  BattlePerformanceEnemyMst__loadMasterFace(this, CurrentEnemyMasterFaceId, v5);
}


void __fastcall BattlePerformanceEnemyMst__changeMasterFace(
        BattlePerformanceEnemyMst_o *this,
        int32_t nextMstFaceId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  WebViewManager_o *Instance; // x19
  const MethodInfo *v15; // x2
  System_String_o *AssetName; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x22

  if ( (byte_438B3AB & 1) == 0 )
  {
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&Method_BattlePerformanceEnemyMst___c__DisplayClass23_0__changeMasterFace_b__0__);
    sub_B775C4(&BattlePerformanceEnemyMst___c__DisplayClass23_0_TypeInfo);
    byte_438B3AB = 1;
  }
  v5 = sub_B77694(BattlePerformanceEnemyMst___c__DisplayClass23_0_TypeInfo);
  BattlePerformanceEnemyMst___c__DisplayClass23_0___ctor((BattlePerformanceEnemyMst___c__DisplayClass23_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13),
        *(_DWORD *)(v5 + 24) = nextMstFaceId,
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__),
        AssetName = BattlePerformanceEnemyMst__getAssetName(
                      (BattlePerformanceEnemyMst_o *)Instance,
                      *(_DWORD *)(v5 + 24),
                      v15),
        v17 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo),
        AssetLoader_LoadEndDataHandler___ctor(
          v17,
          (Il2CppObject *)v5,
          Method_BattlePerformanceEnemyMst___c__DisplayClass23_0__changeMasterFace_b__0__,
          0LL),
        !Instance) )
  {
    sub_B7769C(v6, v7);
  }
  AssetManager__LoadAssetStorage((AssetManager_o *)Instance, AssetName, v17, 1, 0LL);
}


System_String_o *__fastcall BattlePerformanceEnemyMst__getAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BattlePerformanceEnemyMst_c *v4; // x0
  System_String_o *MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438B3AF & 1) == 0 )
  {
    sub_B775C4(&BattlePerformanceEnemyMst_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_438B3AF = 1;
  }
  v4 = BattlePerformanceEnemyMst_TypeInfo;
  if ( (BYTE3(BattlePerformanceEnemyMst_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v4 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_ASSET_NAME = v4->static_fields->MASTER_FACE_ASSET_NAME;
  v8 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method);
  return System_String__Format(MASTER_FACE_ASSET_NAME, v6, 0LL);
}


System_String_o *__fastcall BattlePerformanceEnemyMst__getTextureName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BattlePerformanceEnemyMst_c *v4; // x0
  System_String_o *MASTER_FACE_TEXTURE_NAME; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438B3B0 & 1) == 0 )
  {
    sub_B775C4(&BattlePerformanceEnemyMst_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_438B3B0 = 1;
  }
  v4 = BattlePerformanceEnemyMst_TypeInfo;
  if ( (BYTE3(BattlePerformanceEnemyMst_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v4 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_TEXTURE_NAME = v4->static_fields->MASTER_FACE_TEXTURE_NAME;
  v8 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method);
  return System_String__Format(MASTER_FACE_TEXTURE_NAME, v6, 0LL);
}


System_String_o *__fastcall BattlePerformanceEnemyMst__getVoiceAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BattlePerformanceEnemyMst_c *v4; // x0
  System_String_o *MASTER_VOICE_ASSET_NAME; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438B3B1 & 1) == 0 )
  {
    sub_B775C4(&BattlePerformanceEnemyMst_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_438B3B1 = 1;
  }
  v4 = BattlePerformanceEnemyMst_TypeInfo;
  if ( (BYTE3(BattlePerformanceEnemyMst_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v4 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_VOICE_ASSET_NAME = v4->static_fields->MASTER_VOICE_ASSET_NAME;
  v8 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method);
  return System_String__Format(MASTER_VOICE_ASSET_NAME, v6, 0LL);
}


void __fastcall BattlePerformanceEnemyMst__loadData(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemyMst_o *v2; // x19
  struct BattleData_o *data; // x8
  const MethodInfo *v4; // x2
  struct BattleData_o *v5; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_o *loadVoiceAsset; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  v2 = this;
  if ( (byte_438B3A8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattlePerformanceEnemyMst__loadData_b__18_0__);
    this = (BattlePerformanceEnemyMst_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438B3A8 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_13;
  if ( !data->fields.enemyMasterInfo )
  {
    this = (BattlePerformanceEnemyMst_o *)v2->fields.masterRoot;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      BattlePerformanceEnemyMst__releaseMasterFace(v2, v17);
      BattlePerformanceEnemyMst__releaseMasterVoice(v2, v18);
      return;
    }
LABEL_13:
    sub_B7769C(this, method);
  }
  v2->fields.loadStat = 1;
  BattlePerformanceEnemyMst__releaseMasterVoice(v2, method);
  v5 = v2->fields.data;
  if ( !v5 )
    goto LABEL_13;
  enemyMasterInfo = v5->fields.enemyMasterInfo;
  if ( !enemyMasterInfo )
    goto LABEL_13;
  VoiceAssetName = (System_Int32_array **)BattlePerformanceEnemyMst__getVoiceAssetName(
                                            this,
                                            enemyMasterInfo->fields.enemyMasterId,
                                            v4);
  v2->fields.loadVoiceAsset = (struct System_String_o *)VoiceAssetName;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.loadVoiceAsset, VoiceAssetName, v8, v9, v10, v11, v12, v13);
  loadVoiceAsset = v2->fields.loadVoiceAsset;
  v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v2, Method_BattlePerformanceEnemyMst__loadData_b__18_0__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(loadVoiceAsset, v15, 1, 0LL);
  BattlePerformanceEnemyMst__updateCommandSpellIcon(v2, v16);
}


void __fastcall BattlePerformanceEnemyMst__loadMasterFace(
        BattlePerformanceEnemyMst_o *this,
        int32_t mstFaceId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *faceText; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *AssetCoroutine; // x1

  if ( (byte_438B3AA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B3AA = 1;
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
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, AssetCoroutine, 0LL);
  }
}


void __fastcall BattlePerformanceEnemyMst__releaseMasterFace(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *faceText; // x20
  __int64 v4; // x1
  struct UITexture_o *v5; // x0
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *v8; // x20
  struct AssetData_o *v9; // x8
  BattleServantConfConponent_o *p_mstFaceAssets; // x19
  struct AssetData_o *mstFaceAssets; // t1
  System_String_o *name; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438B3AD & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B3AD = 1;
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
      v5 = this->fields.faceText;
      if ( !v5 )
        goto LABEL_31;
      v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v5->klass->vtable._24_get_material.method)(
                                     v5,
                                     v5->klass->vtable._25_set_material.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v7, 0LL);
      v5 = this->fields.faceText;
      if ( !v5 )
        goto LABEL_31;
      ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._25_set_material.method)(
        v5,
        0LL,
        v5->klass->vtable._26_get_mainTexture.methodPtr);
    }
    v5 = this->fields.faceText;
    if ( v5 )
    {
      v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v5->klass->vtable._26_get_mainTexture.method)(
                                     v5,
                                     v5->klass->vtable._27_set_mainTexture.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
        goto LABEL_25;
      v5 = this->fields.faceText;
      if ( v5 )
      {
        ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._27_set_mainTexture.method)(
          v5,
          0LL,
          v5->klass->vtable._28_get_shader.methodPtr);
LABEL_25:
        mstFaceAssets = this->fields.mstFaceAssets;
        p_mstFaceAssets = (BattleServantConfConponent_o *)&this->fields.mstFaceAssets;
        v9 = mstFaceAssets;
        if ( mstFaceAssets )
        {
          name = v9->fields.name;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetManager__releaseAssetStorage(name, 0LL);
          p_mstFaceAssets->klass = 0LL;
          sub_B77560(p_mstFaceAssets, 0LL, v13, v14, v15, v16, v17, v18);
        }
        return;
      }
    }
LABEL_31:
    sub_B7769C(v5, v4);
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

  if ( (byte_438B3AE & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B3AE = 1;
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
    sub_B77560(p_loadVoiceAsset, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall BattlePerformanceEnemyMst__updateCommandSpellIcon(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  BattlePerformanceEnemyMst_o *v4; // x19
  CommandSpellIconComponent_o *commandSpellIcon; // x19

  data = this->fields.data;
  if ( !data
    || (enemyMasterInfo = data->fields.enemyMasterInfo) == 0LL
    || (v4 = this, (this = (BattlePerformanceEnemyMst_o *)this->fields.commandSpellIcon) == 0LL)
    || (CommandSpellIconComponent__SetImageType(
          (CommandSpellIconComponent_o *)this,
          enemyMasterInfo->fields.commandSpellIconId,
          0LL),
        (this = (BattlePerformanceEnemyMst_o *)v4->fields.data) == 0LL)
    || (commandSpellIcon = v4->fields.commandSpellIcon,
        this = (BattlePerformanceEnemyMst_o *)BattleData__getEnemyMasterCommandSpellCnt((BattleData_o *)this, 0LL),
        !commandSpellIcon) )
  {
    sub_B7769C(this, method);
  }
  CommandSpellIconComponent__SetRemain(commandSpellIcon, (int32_t)this, 0LL);
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
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o **p__8__1; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  char *_8__1; // x0
  System_Int32_array **_4__this; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceEnemyMst_o *v29; // x20
  struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *v30; // x8
  AssetManager_o *v31; // x21
  System_String_o *AssetName; // x0
  Il2CppObject *v33; // x23
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x22

  if ( (byte_4388DF2 & 1) == 0 )
  {
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&Method_BattlePerformanceEnemyMst___c__DisplayClass24_0__LoadAssetCoroutine_b__0__);
    sub_B775C4(&BattlePerformanceEnemyMst___c__DisplayClass24_0_TypeInfo);
    byte_4388DF2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v4 = (Il2CppObject *)sub_B77694(BattlePerformanceEnemyMst___c__DisplayClass24_0_TypeInfo);
      System_Object___ctor(v4, 0LL);
      p__8__1 = &this->fields.__8__1;
      this->fields.__8__1 = (struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *)v4;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.__8__1,
        (System_Int32_array **)v4,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      _8__1 = (char *)this->fields.__8__1;
      if ( _8__1 )
      {
        _4__this = (System_Int32_array **)this->fields.__4__this;
        *((_QWORD *)_8__1 + 2) = _4__this;
        sub_B77560((BattleServantConfConponent_o *)(_8__1 + 16), _4__this, v13, v14, v15, v16, v17, v18);
        if ( *p__8__1 )
        {
          (*p__8__1)->fields.mstFaceId = this->fields.mstFaceId;
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_B77560((BattleServantConfConponent_o *)p__2__current, 0LL, v21, v22, v23, v24, v25, v26);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_14:
      sub_B7769C(_8__1, v12);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  v29 = this->fields.__4__this;
  _8__1 = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v30 = this->fields.__8__1;
  if ( !v30 )
    goto LABEL_14;
  if ( !v29 )
    goto LABEL_14;
  v31 = (AssetManager_o *)_8__1;
  AssetName = BattlePerformanceEnemyMst__getAssetName(v29, v30->fields.mstFaceId, 0LL);
  v33 = (Il2CppObject *)this->fields.__8__1;
  v34 = AssetName;
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    v33,
    Method_BattlePerformanceEnemyMst___c__DisplayClass24_0__LoadAssetCoroutine_b__0__,
    0LL);
  if ( !v31 )
    goto LABEL_14;
  if ( AssetManager__LoadAssetStorage(v31, v34, v35, 1, 0LL) )
    return 0;
  result = 0;
  v29->fields.loadStat = 0;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  AssetData_o *v3; // x19
  char *_4__this; // x0
  struct BattlePerformanceEnemyMst_o *v6; // x8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x8
  System_String_o *v14; // x21

  v3 = data;
  if ( (byte_4388DF0 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_Texture2D____69465432);
    sub_B775C4(&AssetManager_TypeInfo);
    byte_4388DF0 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (char *)BattlePerformanceEnemyMst__getTextureName(
                       (BattlePerformanceEnemyMst_o *)_4__this,
                       this->fields.nextMstFaceId,
                       0LL);
  if ( !v3 )
    goto LABEL_14;
  _4__this = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                       v3,
                       (System_String_o *)_4__this,
                       (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_Texture2D____69465432);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_14;
  data = (AssetData_o *)_4__this;
  _4__this = (char *)v6->fields.faceText;
  if ( !_4__this )
    goto LABEL_14;
  (*(void (__fastcall **)(char *, AssetData_o *, _QWORD))(*(_QWORD *)_4__this + 744LL))(
    _4__this,
    data,
    *(_QWORD *)(*(_QWORD *)_4__this + 752LL));
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  v13 = *((_QWORD *)_4__this + 9);
  if ( v13 )
  {
    v14 = *(System_String_o **)(v13 + 24);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v14, 0LL);
    _4__this = (char *)this->fields.__4__this;
    if ( !_4__this )
LABEL_14:
      sub_B7769C(_4__this, data);
  }
  *((_QWORD *)_4__this + 9) = v3;
  sub_B77560((BattleServantConfConponent_o *)(_4__this + 72), (System_Int32_array **)v3, v7, v8, v9, v10, v11, v12);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  char *_4__this; // x0
  struct BattlePerformanceEnemyMst_o *v11; // x8
  struct BattlePerformanceEnemyMst_o *v12; // x8
  struct UITexture_o *faceText; // x20
  UnityEngine_Shader_o *v14; // x22
  UnityEngine_Material_o *v15; // x21
  __int64 v16; // x20
  AssetData_o *v17; // x21

  if ( (byte_4388DF1 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_Texture2D____69465432);
    sub_B775C4(&UnityEngine_Material_TypeInfo);
    sub_B775C4(&StringLiteral_4671/*"Custom/SpriteWithMask"*/);
    byte_4388DF1 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  *((_QWORD *)_4__this + 9) = data;
  sub_B77560(
    (BattleServantConfConponent_o *)(_4__this + 72),
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_11;
  v11->fields.loadStat = 0;
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_11;
  faceText = v12->fields.faceText;
  v14 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4671/*"Custom/SpriteWithMask"*/, 0LL);
  v15 = (UnityEngine_Material_o *)sub_B77694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v15, v14, 0LL);
  if ( !faceText
    || (((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))faceText->klass->vtable._25_set_material.method)(
          faceText,
          v15,
          faceText->klass->vtable._26_get_mainTexture.methodPtr),
        (_4__this = (char *)this->fields.__4__this) == 0LL)
    || (v16 = *((_QWORD *)_4__this + 6),
        v17 = (AssetData_o *)*((_QWORD *)_4__this + 9),
        _4__this = (char *)BattlePerformanceEnemyMst__getTextureName(
                             (BattlePerformanceEnemyMst_o *)_4__this,
                             this->fields.mstFaceId,
                             0LL),
        !v17)
    || (_4__this = (char *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                             v17,
                             (System_String_o *)_4__this,
                             (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_Texture2D____69465432),
        !v16) )
  {
LABEL_11:
    sub_B7769C(_4__this, data);
  }
  (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v16 + 744LL))(
    v16,
    _4__this,
    *(_QWORD *)(*(_QWORD *)v16 + 752LL));
}