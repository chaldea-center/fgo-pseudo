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

  if ( (byte_4215165 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceEnemyMst_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_3977/*"ChrVoice_{0}"*/, v8);
    sub_B0D8A4(&StringLiteral_18424/*"enemyMstFace{0:d5}"*/, v9);
    sub_B0D8A4(&StringLiteral_6013/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v10);
    byte_4215165 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6013/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6013/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_18424/*"enemyMstFace{0:d5}"*/;
  v13->MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18424/*"enemyMstFace{0:d5}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->MASTER_FACE_TEXTURE_NAME, v14, v15, v16, v17, v18, v19, v20);
  v21 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_3977/*"ChrVoice_{0}"*/;
  v21->MASTER_VOICE_ASSET_NAME = (struct System_String_o *)StringLiteral_3977/*"ChrVoice_{0}"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v21->MASTER_VOICE_ASSET_NAME, v22, v23, v24, v25, v26, v27, v28);
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
  sub_B0D840(
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
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_421515F & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_TypeInfo, *(_QWORD *)&mstFaceId);
    byte_421515F = 1;
  }
  v5 = sub_B0D974(BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_TypeInfo, *(_QWORD *)&mstFaceId, method);
  BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24___ctor(
    (BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
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
  struct BattleData_o *data; // x8
  struct BattleData_o *v15; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  int32_t OverwriteFrame; // w0
  int v18; // w20
  BattleDataDefine_c *v19; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v21; // x19
  Il2CppObject *v22; // x0
  int v23; // [xsp+Ch] [xbp-24h] BYREF
  UIAtlas_o *atlas; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_421515C & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_EnemyMstBattleMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__, v6);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_18939/*"frame_enemymaster_bg"*/, v9);
    sub_B0D8A4(&StringLiteral_2781/*"BattleAssetUIAtlas"*/, v10);
    sub_B0D8A4(&StringLiteral_18940/*"frame_enemymaster_bg_{0}"*/, v11);
    byte_421515C = 1;
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
    UISprite__set_spriteName(enemyMasterFrame, (System_String_o *)StringLiteral_18939/*"frame_enemymaster_bg"*/, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  if ( !data->fields.enemyMasterInfo )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  enemyMasterFrame = (UISprite_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EnemyMstBattleMaster___);
  v15 = this->fields.data;
  if ( !v15
    || (enemyMasterInfo = v15->fields.enemyMasterInfo) == 0LL
    || !enemyMasterFrame
    || (enemyMasterFrame = (UISprite_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)enemyMasterFrame,
                                           enemyMasterInfo->fields.id,
                                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__)) == 0LL )
  {
LABEL_31:
    sub_B0D97C(enemyMasterFrame);
  }
  OverwriteFrame = EnemyMstBattleEntity__GetOverwriteFrame((EnemyMstBattleEntity_o *)enemyMasterFrame, 0, 0LL);
  if ( OverwriteFrame )
  {
    v18 = OverwriteFrame;
    atlas = 0LL;
    v19 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v19 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v19->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_2781/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      enemyMasterFrame = this->fields.enemyMasterFrame;
      if ( enemyMasterFrame )
      {
        UISprite__set_atlas(enemyMasterFrame, atlas, 0LL);
        v21 = this->fields.enemyMasterFrame;
        v23 = v18;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
        enemyMasterFrame = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_18940/*"frame_enemymaster_bg_{0}"*/, v22, 0LL);
        if ( v21 )
        {
          UISprite__set_spriteName(v21, (System_String_o *)enemyMasterFrame, 0LL);
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
    sub_B0D97C(data);
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
    sub_B0D97C(0LL);
  CurrentEnemyMasterFaceId = BattleData__GetCurrentEnemyMasterFaceId(data, 0LL);
  BattlePerformanceEnemyMst__loadMasterFace(this, CurrentEnemyMasterFaceId, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemyMst__changeMasterFace(
        BattlePerformanceEnemyMst_o *this,
        int32_t nextMstFaceId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  WebViewManager_o *Instance; // x19
  const MethodInfo *v17; // x2
  System_String_o *AssetName; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  AssetLoader_LoadEndDataHandler_o *v21; // x22

  if ( (byte_421515E & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, *(_QWORD *)&nextMstFaceId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    sub_B0D8A4(&Method_BattlePerformanceEnemyMst___c__DisplayClass23_0__changeMasterFace_b__0__, v6);
    sub_B0D8A4(&BattlePerformanceEnemyMst___c__DisplayClass23_0_TypeInfo, v7);
    byte_421515E = 1;
  }
  v8 = sub_B0D974(BattlePerformanceEnemyMst___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&nextMstFaceId, method);
  BattlePerformanceEnemyMst___c__DisplayClass23_0___ctor((BattlePerformanceEnemyMst___c__DisplayClass23_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = this,
        sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15),
        *(_DWORD *)(v8 + 24) = nextMstFaceId,
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__),
        AssetName = BattlePerformanceEnemyMst__getAssetName(
                      (BattlePerformanceEnemyMst_o *)Instance,
                      *(_DWORD *)(v8 + 24),
                      v17),
        v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20),
        AssetLoader_LoadEndDataHandler___ctor(
          v21,
          (Il2CppObject *)v8,
          Method_BattlePerformanceEnemyMst___c__DisplayClass23_0__changeMasterFace_b__0__,
          0LL),
        !Instance) )
  {
    sub_B0D97C(v9);
  }
  AssetManager__LoadAssetStorage((AssetManager_o *)Instance, AssetName, v21, 1, 0LL);
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

  if ( (byte_4215162 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&int_TypeInfo, v4);
    byte_4215162 = 1;
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

  if ( (byte_4215163 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&int_TypeInfo, v4);
    byte_4215163 = 1;
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

  if ( (byte_4215164 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&int_TypeInfo, v4);
    byte_4215164 = 1;
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
  BattlePerformanceEnemyMst_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleData_o *data; // x8
  const MethodInfo *v6; // x2
  struct BattleData_o *v7; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *loadVoiceAsset; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1

  v2 = this;
  if ( (byte_421515B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BattlePerformanceEnemyMst__loadData_b__18_0__, v3);
    this = (BattlePerformanceEnemyMst_o *)sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_421515B = 1;
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
      BattlePerformanceEnemyMst__releaseMasterFace(v2, v21);
      BattlePerformanceEnemyMst__releaseMasterVoice(v2, v22);
      return;
    }
LABEL_13:
    sub_B0D97C(this);
  }
  v2->fields.loadStat = 1;
  BattlePerformanceEnemyMst__releaseMasterVoice(v2, method);
  v7 = v2->fields.data;
  if ( !v7 )
    goto LABEL_13;
  enemyMasterInfo = v7->fields.enemyMasterInfo;
  if ( !enemyMasterInfo )
    goto LABEL_13;
  VoiceAssetName = (System_Int32_array **)BattlePerformanceEnemyMst__getVoiceAssetName(
                                            this,
                                            enemyMasterInfo->fields.enemyMasterId,
                                            v6);
  v2->fields.loadVoiceAsset = (struct System_String_o *)VoiceAssetName;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.loadVoiceAsset, VoiceAssetName, v10, v11, v12, v13, v14, v15);
  loadVoiceAsset = v2->fields.loadVoiceAsset;
  v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)v2, Method_BattlePerformanceEnemyMst__loadData_b__18_0__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(loadVoiceAsset, v19, 1, 0LL);
  BattlePerformanceEnemyMst__updateCommandSpellIcon(v2, v20);
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

  if ( (byte_421515D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mstFaceId);
    byte_421515D = 1;
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
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, AssetCoroutine, 0LL);
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

  if ( (byte_4215160 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4215160 = 1;
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
      UnityEngine_Object__Destroy_34935276(v7, 0LL);
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
          sub_B0D840(p_mstFaceAssets, 0LL, v13, v14, v15, v16, v17, v18);
        }
        return;
      }
    }
LABEL_31:
    sub_B0D97C(v5);
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

  if ( (byte_4215161 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4215161 = 1;
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
    sub_B0D840(p_loadVoiceAsset, 0LL, v6, v7, v8, v9, v10, v11);
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
    sub_B0D97C(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  Il2CppObject *v8; // x21
  struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o **p__8__1; // x20
  AssetManager_o *_8__1; // x0
  struct BattlePerformanceEnemyMst_o *_4__this; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceEnemyMst_o *v14; // x20
  struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *v15; // x8
  AssetManager_o *v16; // x21
  System_String_o *AssetName; // x0
  Il2CppObject *v18; // x23
  System_String_o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  AssetLoader_LoadEndDataHandler_o *v22; // x22

  if ( (byte_4211EB0 & 1) == 0 )
  {
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4);
    sub_B0D8A4(&Method_BattlePerformanceEnemyMst___c__DisplayClass24_0__LoadAssetCoroutine_b__0__, v5);
    sub_B0D8A4(&BattlePerformanceEnemyMst___c__DisplayClass24_0_TypeInfo, v6);
    byte_4211EB0 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v8 = (Il2CppObject *)sub_B0D974(BattlePerformanceEnemyMst___c__DisplayClass24_0_TypeInfo, method, v2);
      System_Object___ctor(v8, 0LL);
      p__8__1 = &this->fields.__8__1;
      this->fields.__8__1 = (struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *)v8;
      sub_B0D840(&this->fields.__8__1, v8);
      _8__1 = (AssetManager_o *)this->fields.__8__1;
      if ( _8__1 )
      {
        _4__this = this->fields.__4__this;
        *(_QWORD *)&_8__1->fields.m_CachedPtr = _4__this;
        sub_B0D840(&_8__1->fields, _4__this);
        if ( *p__8__1 )
        {
          (*p__8__1)->fields.mstFaceId = this->fields.mstFaceId;
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_B0D840(p__2__current, 0LL);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_14:
      sub_B0D97C(_8__1);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  v14 = this->fields.__4__this;
  _8__1 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v15 = this->fields.__8__1;
  if ( !v15 )
    goto LABEL_14;
  if ( !v14 )
    goto LABEL_14;
  v16 = _8__1;
  AssetName = BattlePerformanceEnemyMst__getAssetName(v14, v15->fields.mstFaceId, 0LL);
  v18 = (Il2CppObject *)this->fields.__8__1;
  v19 = AssetName;
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    v18,
    Method_BattlePerformanceEnemyMst___c__DisplayClass24_0__LoadAssetCoroutine_b__0__,
    0LL);
  if ( !v16 )
    goto LABEL_14;
  if ( AssetManager__LoadAssetStorage(v16, v19, v22, 1, 0LL) )
    return 0;
  result = 0;
  v14->fields.loadStat = 0;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  struct BattlePerformanceEnemyMst_o *v7; // x8
  BattlePerformanceEnemyMst_o *v8; // x1
  struct AssetData_o *mstFaceAssets; // x8
  System_String_o *name; // x21

  if ( (byte_4211EAE & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, data);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    byte_4211EAE = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (BattlePerformanceEnemyMst_o *)BattlePerformanceEnemyMst__getTextureName(
                                              _4__this,
                                              this->fields.nextMstFaceId,
                                              0LL);
  if ( !data )
    goto LABEL_14;
  _4__this = (BattlePerformanceEnemyMst_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                              data,
                                              (System_String_o *)_4__this,
                                              (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_14;
  v8 = _4__this;
  _4__this = (BattlePerformanceEnemyMst_o *)v7->fields.faceText;
  if ( !_4__this )
    goto LABEL_14;
  ((void (__fastcall *)(BattlePerformanceEnemyMst_o *, BattlePerformanceEnemyMst_o *, const char *))_4__this->klass[2]._1.gc_desc)(
    _4__this,
    v8,
    _4__this->klass[2]._1.name);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  mstFaceAssets = _4__this->fields.mstFaceAssets;
  if ( mstFaceAssets )
  {
    name = mstFaceAssets->fields.name;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(name, 0LL);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
LABEL_14:
      sub_B0D97C(_4__this);
  }
  _4__this->fields.mstFaceAssets = data;
  sub_B0D840(&_4__this->fields.mstFaceAssets, data);
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
  BattlePerformanceEnemyMst_o *_4__this; // x0
  struct BattlePerformanceEnemyMst_o *v8; // x8
  struct BattlePerformanceEnemyMst_o *v9; // x8
  struct UITexture_o *faceText; // x20
  UnityEngine_Shader_o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Material_o *v14; // x21
  struct UITexture_o *v15; // x20
  AssetData_o *mstFaceAssets; // x21

  if ( (byte_4211EAF & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, data);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v6);
    byte_4211EAF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.mstFaceAssets = data;
  sub_B0D840(&_4__this->fields.mstFaceAssets, data);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_11;
  v8->fields.loadStat = 0;
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_11;
  faceText = v9->fields.faceText;
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
  v14 = (UnityEngine_Material_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v12, v13);
  UnityEngine_Material___ctor(v14, v11, 0LL);
  if ( !faceText
    || (((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))faceText->klass->vtable._25_set_material.method)(
          faceText,
          v14,
          faceText->klass->vtable._26_get_mainTexture.methodPtr),
        (_4__this = this->fields.__4__this) == 0LL)
    || (v15 = _4__this->fields.faceText,
        mstFaceAssets = _4__this->fields.mstFaceAssets,
        _4__this = (BattlePerformanceEnemyMst_o *)BattlePerformanceEnemyMst__getTextureName(
                                                    _4__this,
                                                    this->fields.mstFaceId,
                                                    0LL),
        !mstFaceAssets)
    || (_4__this = (BattlePerformanceEnemyMst_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                    mstFaceAssets,
                                                    (System_String_o *)_4__this,
                                                    (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464),
        !v15) )
  {
LABEL_11:
    sub_B0D97C(_4__this);
  }
  ((void (__fastcall *)(struct UITexture_o *, BattlePerformanceEnemyMst_o *, Il2CppMethodPointer))v15->klass->vtable._27_set_mainTexture.method)(
    v15,
    _4__this,
    v15->klass->vtable._28_get_shader.methodPtr);
}