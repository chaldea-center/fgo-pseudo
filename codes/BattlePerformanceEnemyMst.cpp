void __fastcall BattlePerformanceEnemyMst___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct BattlePerformanceEnemyMst_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct BattlePerformanceEnemyMst_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattlePerformanceEnemyMst_c *v15; // x8

  if ( (byte_4B053DD & 1) == 0 )
  {
    sub_1BC3008(&BattlePerformanceEnemyMst_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_4387/*"ChrVoice_{0}"*/, v4);
    sub_1BC3008(&StringLiteral_18854/*"enemyMstFace{0:d5}"*/, v5);
    sub_1BC3008(&StringLiteral_5990/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v6);
    byte_4B053DD = 1;
  }
  BattlePerformanceEnemyMst_TypeInfo->static_fields->MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_5990/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattlePerformanceEnemyMst_TypeInfo->static_fields, StringLiteral_5990/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v2, v3);
  v7 = StringLiteral_18854/*"enemyMstFace{0:d5}"*/;
  static_fields = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  static_fields->MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18854/*"enemyMstFace{0:d5}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->MASTER_FACE_TEXTURE_NAME, v7, v9, v10);
  v11 = StringLiteral_4387/*"ChrVoice_{0}"*/;
  v12 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v12->MASTER_VOICE_ASSET_NAME = (struct System_String_o *)StringLiteral_4387/*"ChrVoice_{0}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v12->MASTER_VOICE_ASSET_NAME, v11, v13, v14);
  v15 = BattlePerformanceEnemyMst_TypeInfo;
  BattlePerformanceEnemyMst_TypeInfo->static_fields->DEFAULT_COMMAND_SPELL_ICON_SIZE = (struct UnityEngine_Vector2_o)vdup_n_s32(0x42B40000u).n64_u64[0];
  v15->static_fields->DEFAULT_COMMAND_SPELL_ICON_POSITION = (struct UnityEngine_Vector2_o)0x4184DA5142500000LL;
}


void __fastcall BattlePerformanceEnemyMst___ctor(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceEnemyMst__HideMaster(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterRoot; // x0

  masterRoot = this->fields.masterRoot;
  if ( !masterRoot )
    sub_1BC3264(0LL, method);
  UnityEngine_GameObject__SetActive(masterRoot, 0, 0LL);
}


void __fastcall BattlePerformanceEnemyMst__Initialize(
        BattlePerformanceEnemyMst_o *this,
        BattleData_o *indata,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.data = indata;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)indata, (int32_t)method, v3);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B053D7 & 1) == 0 )
  {
    sub_1BC3008(&BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_TypeInfo, *(_QWORD *)&mstFaceId);
    byte_4B053D7 = 1;
  }
  v5 = sub_1BC3254(BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
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
  __int64 v14; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v16; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  int32_t OverwriteFrame; // w0
  int v19; // w20
  BattleDataDefine_c *v20; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v22; // x19
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  int v27; // [xsp+4h] [xbp-2Ch] BYREF
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B053D3 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&BattleDataDefine_TypeInfo, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_EnemyMstBattleMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__, v6);
    sub_1BC3008(&int_TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_19469/*"frame_enemymaster_bg"*/, v9);
    sub_1BC3008(&StringLiteral_3084/*"BattleAssetUIAtlas"*/, v10);
    sub_1BC3008(&StringLiteral_19470/*"frame_enemymaster_bg_{0}"*/, v11);
    byte_4B053D3 = 1;
  }
  battleUiAtlas = (UnityEngine_Object_o *)this->fields.battleUiAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  enemyMasterFrame = (UISprite_o *)UnityEngine_Object__op_Inequality(battleUiAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)enemyMasterFrame & 1) != 0 )
  {
    enemyMasterFrame = this->fields.enemyMasterFrame;
    if ( !enemyMasterFrame )
      goto LABEL_27;
    UISprite__set_atlas(enemyMasterFrame, this->fields.battleUiAtlas, 0LL);
    enemyMasterFrame = this->fields.enemyMasterFrame;
    if ( !enemyMasterFrame )
      goto LABEL_27;
    UISprite__set_spriteName(enemyMasterFrame, (System_String_o *)StringLiteral_19469/*"frame_enemymaster_bg"*/, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( !data->fields.enemyMasterInfo )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  enemyMasterFrame = (UISprite_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EnemyMstBattleMaster___);
  v16 = this->fields.data;
  if ( !v16
    || (enemyMasterInfo = v16->fields.enemyMasterInfo) == 0LL
    || !enemyMasterFrame
    || (enemyMasterFrame = (UISprite_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)enemyMasterFrame,
                                           enemyMasterInfo->fields.id,
                                           (const MethodInfo_32AF070 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__)) == 0LL )
  {
LABEL_27:
    sub_1BC3264(enemyMasterFrame, v14);
  }
  OverwriteFrame = EnemyMstBattleEntity__GetOverwriteFrame((EnemyMstBattleEntity_o *)enemyMasterFrame, 0, 0LL);
  if ( OverwriteFrame )
  {
    v19 = OverwriteFrame;
    atlas = 0LL;
    v20 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v20 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v20->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3084/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      enemyMasterFrame = this->fields.enemyMasterFrame;
      if ( enemyMasterFrame )
      {
        UISprite__set_atlas(enemyMasterFrame, atlas, 0LL);
        v22 = this->fields.enemyMasterFrame;
        v27 = v19;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v23, v24, v25);
        enemyMasterFrame = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_19470/*"frame_enemymaster_bg_{0}"*/, v26, 0LL);
        if ( v22 )
        {
          UISprite__set_spriteName(v22, (System_String_o *)enemyMasterFrame, 0LL);
          return;
        }
      }
      goto LABEL_27;
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
    goto LABEL_11;
  if ( data->fields.enemyMasterInfo && !BattleData__IsHideEnemyMaster(data, 0LL) )
  {
    if ( status )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_11;
      commandSpellIcon = this->fields.commandSpellIcon;
      data = (BattleData_o *)BattleData__getEnemyMasterCommandSpellCnt(data, 0LL);
      if ( !commandSpellIcon )
        goto LABEL_11;
      CommandSpellIconComponent__SetRemain(commandSpellIcon, (int32_t)data, 0LL);
    }
    data = (BattleData_o *)this->fields.masterRoot;
    if ( data )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, status, 0LL);
      return;
    }
LABEL_11:
    sub_1BC3264(data, status);
  }
}


void __fastcall BattlePerformanceEnemyMst___loadData_b__20_0(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t CurrentEnemyMasterFaceId; // w1
  const MethodInfo *v5; // x2

  data = this->fields.data;
  this->fields.loadStat = 2;
  if ( !data )
    sub_1BC3264(0LL, method);
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
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x19
  const MethodInfo *v14; // x2
  System_String_o *AssetName; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x22

  if ( (byte_4B053D6 & 1) == 0 )
  {
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, *(_QWORD *)&nextMstFaceId);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    sub_1BC3008(&Method_BattlePerformanceEnemyMst___c__DisplayClass25_0__changeMasterFace_b__0__, v6);
    sub_1BC3008(&BattlePerformanceEnemyMst___c__DisplayClass25_0_TypeInfo, v7);
    byte_4B053D6 = 1;
  }
  v8 = sub_1BC3254(BattlePerformanceEnemyMst___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = this,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12),
        *(_DWORD *)(v8 + 24) = nextMstFaceId,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__),
        AssetName = BattlePerformanceEnemyMst__getAssetName(
                      (BattlePerformanceEnemyMst_o *)Instance,
                      *(_DWORD *)(v8 + 24),
                      v14),
        v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo),
        AssetLoader_LoadEndDataHandler___ctor(
          v16,
          (Il2CppObject *)v8,
          Method_BattlePerformanceEnemyMst___c__DisplayClass25_0__changeMasterFace_b__0__,
          0LL),
        !Instance) )
  {
    sub_1BC3264(v9, v10);
  }
  AssetManager__LoadAssetStorage((AssetManager_o *)Instance, AssetName, v16, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceEnemyMst__getAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  BattlePerformanceEnemyMst_c *v7; // x0
  System_String_o *MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B053DA & 1) == 0 )
  {
    sub_1BC3008(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    sub_1BC3008(&int_TypeInfo, v6);
    byte_4B053DA = 1;
  }
  v7 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v7 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_ASSET_NAME = v7->static_fields->MASTER_FACE_ASSET_NAME;
  v11 = id;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  return System_String__Format(MASTER_FACE_ASSET_NAME, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceEnemyMst__getTextureName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  BattlePerformanceEnemyMst_c *v7; // x0
  System_String_o *MASTER_FACE_TEXTURE_NAME; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B053DB & 1) == 0 )
  {
    sub_1BC3008(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    sub_1BC3008(&int_TypeInfo, v6);
    byte_4B053DB = 1;
  }
  v7 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v7 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_TEXTURE_NAME = v7->static_fields->MASTER_FACE_TEXTURE_NAME;
  v11 = id;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  return System_String__Format(MASTER_FACE_TEXTURE_NAME, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceEnemyMst__getVoiceAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  BattlePerformanceEnemyMst_c *v7; // x0
  System_String_o *MASTER_VOICE_ASSET_NAME; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B053DC & 1) == 0 )
  {
    sub_1BC3008(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    sub_1BC3008(&int_TypeInfo, v6);
    byte_4B053DC = 1;
  }
  v7 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v7 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_VOICE_ASSET_NAME = v7->static_fields->MASTER_VOICE_ASSET_NAME;
  v11 = id;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  return System_String__Format(MASTER_VOICE_ASSET_NAME, v9, 0LL);
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
  System_String_o *VoiceAssetName; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *loadVoiceAsset; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  v2 = this;
  if ( (byte_4B053D2 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_BattlePerformanceEnemyMst__loadData_b__20_0__, v3);
    this = (BattlePerformanceEnemyMst_o *)sub_1BC3008(&SoundManager_TypeInfo, v4);
    byte_4B053D2 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( !data->fields.enemyMasterInfo )
  {
    this = (BattlePerformanceEnemyMst_o *)v2->fields.masterRoot;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      BattlePerformanceEnemyMst__releaseMasterFace(v2, v16);
      BattlePerformanceEnemyMst__releaseMasterVoice(v2, v17);
      return;
    }
LABEL_15:
    sub_1BC3264(this, method);
  }
  v2->fields.loadStat = 1;
  BattlePerformanceEnemyMst__releaseMasterVoice(v2, method);
  v7 = v2->fields.data;
  if ( !v7 )
    goto LABEL_15;
  enemyMasterInfo = v7->fields.enemyMasterInfo;
  if ( !enemyMasterInfo )
    goto LABEL_15;
  VoiceAssetName = BattlePerformanceEnemyMst__getVoiceAssetName(this, enemyMasterInfo->fields.enemyMasterId, v6);
  v2->fields.loadVoiceAsset = VoiceAssetName;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.loadVoiceAsset, (int32_t)VoiceAssetName, v10, v11);
  loadVoiceAsset = v2->fields.loadVoiceAsset;
  v13 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)v2, Method_BattlePerformanceEnemyMst__loadData_b__20_0__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(loadVoiceAsset, v13, 1, 0LL);
  BattlePerformanceEnemyMst__updateCommandSpellIcon(v2, v14);
  this = (BattlePerformanceEnemyMst_o *)v2->fields.data;
  if ( !this )
    goto LABEL_15;
  if ( BattleData__IsHideEnemyMaster((BattleData_o *)this, 0LL) )
    BattlePerformanceEnemyMst__HideMaster(v2, v15);
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

  if ( (byte_4B053D5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mstFaceId);
    byte_4B053D5 = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(faceText, 0LL, 0LL) )
  {
    if ( this->fields.mstFaceAssets )
      BattlePerformanceEnemyMst__releaseMasterFace(this, v6);
    AssetCoroutine = BattlePerformanceEnemyMst__LoadAssetCoroutine(this, mstFaceId, v7);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, AssetCoroutine, 0LL);
  }
}


void __fastcall BattlePerformanceEnemyMst__releaseMasterFace(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *faceText; // x20
  __int64 v5; // x1
  struct UITexture_o *v6; // x0
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *v9; // x20
  struct AssetData_o *v10; // x8
  CGThumbnailListItem_o *p_mstFaceAssets; // x19
  struct AssetData_o *mstFaceAssets; // t1
  System_String_o *name; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B053D8 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B053D8 = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(faceText, 0LL, 0LL) )
  {
    v6 = this->fields.faceText;
    if ( !v6 )
      goto LABEL_26;
    v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v6->klass->vtable._24_get_material.method)(
                                   v6,
                                   v6->klass->vtable._25_set_material.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    {
      v6 = this->fields.faceText;
      if ( !v6 )
        goto LABEL_26;
      v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v6->klass->vtable._24_get_material.method)(
                                     v6,
                                     v6->klass->vtable._25_set_material.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70034300(v8, 0LL);
      v6 = this->fields.faceText;
      if ( !v6 )
        goto LABEL_26;
      ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._25_set_material.method)(
        v6,
        0LL,
        v6->klass->vtable._26_get_mainTexture.methodPtr);
    }
    v6 = this->fields.faceText;
    if ( v6 )
    {
      v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v6->klass->vtable._26_get_mainTexture.method)(
                                     v6,
                                     v6->klass->vtable._27_set_mainTexture.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
        goto LABEL_21;
      v6 = this->fields.faceText;
      if ( v6 )
      {
        ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._27_set_mainTexture.method)(
          v6,
          0LL,
          v6->klass->vtable._28_get_shader.methodPtr);
LABEL_21:
        mstFaceAssets = this->fields.mstFaceAssets;
        p_mstFaceAssets = (CGThumbnailListItem_o *)&this->fields.mstFaceAssets;
        v10 = mstFaceAssets;
        if ( mstFaceAssets )
        {
          name = v10->fields.name;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAssetStorage(name, 0LL);
          p_mstFaceAssets->klass = 0LL;
          sub_1BC2FAC(p_mstFaceAssets, 0, v14, v15);
        }
        return;
      }
    }
LABEL_26:
    sub_1BC3264(v6, v5);
  }
}


void __fastcall BattlePerformanceEnemyMst__releaseMasterVoice(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_loadVoiceAsset; // x19
  System_String_o *v4; // x20
  struct System_String_o *loadVoiceAsset; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B053D9 & 1) == 0 )
  {
    sub_1BC3008(&SoundManager_TypeInfo, method);
    byte_4B053D9 = 1;
  }
  loadVoiceAsset = this->fields.loadVoiceAsset;
  p_loadVoiceAsset = (CGThumbnailListItem_o *)&this->fields.loadVoiceAsset;
  v4 = loadVoiceAsset;
  if ( loadVoiceAsset )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v4, 0LL);
    p_loadVoiceAsset->klass = 0LL;
    sub_1BC2FAC(p_loadVoiceAsset, 0, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemyMst__updateCommandSpellIcon(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  BattlePerformanceEnemyMst_o *v2; // x19
  struct BattleData_o *data; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  CommandSpellIconComponent_o *commandSpellIcon; // x20
  StageEntity_o *v6; // x20
  System_Int32_array *EnemyMasterCommandSpellIconSize; // x21
  __int64 v8; // x2
  BattlePerformanceEnemyMst_c *v9; // x0
  struct BattlePerformanceEnemyMst_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  System_Single_array *EnemyMasterCommandSpellIconPosition; // x20
  BattlePerformanceEnemyMst_c *v14; // x0
  struct BattlePerformanceEnemyMst_StaticFields *v15; // x9
  float *p_DEFAULT_COMMAND_SPELL_ICON_POSITION; // x8
  float *p_y; // x9
  float v18; // s8
  float v19; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v21; // 0:s0.4,4:s1.4

  v2 = this;
  if ( (byte_4B053D4 & 1) == 0 )
  {
    this = (BattlePerformanceEnemyMst_o *)sub_1BC3008(&BattlePerformanceEnemyMst_TypeInfo, method);
    byte_4B053D4 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_27;
  enemyMasterInfo = data->fields.enemyMasterInfo;
  if ( !enemyMasterInfo )
    goto LABEL_27;
  this = (BattlePerformanceEnemyMst_o *)v2->fields.commandSpellIcon;
  if ( !this
    || (CommandSpellIconComponent__SetImageType(
          (CommandSpellIconComponent_o *)this,
          enemyMasterInfo->fields.commandSpellIconId,
          0LL),
        (this = (BattlePerformanceEnemyMst_o *)v2->fields.data) == 0LL)
    || (commandSpellIcon = v2->fields.commandSpellIcon,
        this = (BattlePerformanceEnemyMst_o *)BattleData__getEnemyMasterCommandSpellCnt((BattleData_o *)this, 0LL),
        !commandSpellIcon)
    || (CommandSpellIconComponent__SetRemain(commandSpellIcon, (int32_t)this, 0LL),
        (this = (BattlePerformanceEnemyMst_o *)v2->fields.data) == 0LL)
    || (this = (BattlePerformanceEnemyMst_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL)) == 0LL )
  {
LABEL_27:
    sub_1BC3264(this, method);
  }
  v6 = (StageEntity_o *)this;
  EnemyMasterCommandSpellIconSize = StageEntity__GetEnemyMasterCommandSpellIconSize((StageEntity_o *)this, 0LL);
  this = (BattlePerformanceEnemyMst_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)EnemyMasterCommandSpellIconSize,
                                          0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = BattlePerformanceEnemyMst_TypeInfo;
    if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
      v9 = BattlePerformanceEnemyMst_TypeInfo;
    }
    static_fields = v9->static_fields;
    x = static_fields->DEFAULT_COMMAND_SPELL_ICON_SIZE.fields.x;
    y = static_fields->DEFAULT_COMMAND_SPELL_ICON_SIZE.fields.y;
  }
  else
  {
    if ( !EnemyMasterCommandSpellIconSize )
      goto LABEL_27;
    if ( EnemyMasterCommandSpellIconSize->max_length < 2 )
      goto LABEL_28;
    x = (float)EnemyMasterCommandSpellIconSize->m_Items[1];
    y = (float)EnemyMasterCommandSpellIconSize->m_Items[2];
  }
  this = (BattlePerformanceEnemyMst_o *)v2->fields.commandSpellIcon;
  if ( !this )
    goto LABEL_27;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)this, *(UnityEngine_Vector2_o *)&x, 0LL);
  EnemyMasterCommandSpellIconPosition = StageEntity__GetEnemyMasterCommandSpellIconPosition(v6, 0LL);
  this = (BattlePerformanceEnemyMst_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)EnemyMasterCommandSpellIconPosition,
                                          0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EnemyMasterCommandSpellIconPosition )
      goto LABEL_27;
    if ( EnemyMasterCommandSpellIconPosition->max_length >= 2 )
    {
      p_DEFAULT_COMMAND_SPELL_ICON_POSITION = &EnemyMasterCommandSpellIconPosition->m_Items[1];
      p_y = &EnemyMasterCommandSpellIconPosition->m_Items[2];
      goto LABEL_25;
    }
LABEL_28:
    sub_1BC326C(this, method, v8);
  }
  v14 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v14 = BattlePerformanceEnemyMst_TypeInfo;
  }
  v15 = v14->static_fields;
  p_DEFAULT_COMMAND_SPELL_ICON_POSITION = (float *)&v15->DEFAULT_COMMAND_SPELL_ICON_POSITION;
  p_y = &v15->DEFAULT_COMMAND_SPELL_ICON_POSITION.fields.y;
LABEL_25:
  this = (BattlePerformanceEnemyMst_o *)v2->fields.commandSpellIcon;
  if ( !this )
    goto LABEL_27;
  v18 = *p_DEFAULT_COMMAND_SPELL_ICON_POSITION;
  v19 = *p_y;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v21.fields.x = v18;
  v21.fields.y = v19;
  GameObjectExtensions__SetLocalPosition_35211816(gameObject, v21, 0LL);
}


void __fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26___ctor(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26__MoveNext(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  Il2CppObject *v7; // x21
  struct BattlePerformanceEnemyMst___c__DisplayClass26_0_o **p__8__1; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  char *_8__1; // x0
  struct BattlePerformanceEnemyMst_o *_4__this; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceEnemyMst_o *v20; // x23
  const MethodInfo *v21; // x2
  struct BattlePerformanceEnemyMst___c__DisplayClass26_0_o *v22; // x8
  AssetManager_o *v23; // x20
  System_String_o *AssetName; // x0
  Il2CppObject *v25; // x22
  System_String_o *v26; // x19
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  if ( (byte_4B053E0 & 1) == 0 )
  {
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v3);
    sub_1BC3008(&Method_BattlePerformanceEnemyMst___c__DisplayClass26_0__LoadAssetCoroutine_b__0__, v4);
    sub_1BC3008(&BattlePerformanceEnemyMst___c__DisplayClass26_0_TypeInfo, v5);
    byte_4B053E0 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v7 = (Il2CppObject *)sub_1BC3254(BattlePerformanceEnemyMst___c__DisplayClass26_0_TypeInfo);
      System_Object___ctor(v7, 0LL);
      this->fields.__8__1 = (struct BattlePerformanceEnemyMst___c__DisplayClass26_0_o *)v7;
      p__8__1 = &this->fields.__8__1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v7, v9, v10);
      _8__1 = (char *)this->fields.__8__1;
      if ( _8__1 )
      {
        _4__this = this->fields.__4__this;
        *((_QWORD *)_8__1 + 2) = _4__this;
        sub_1BC2FAC((CGThumbnailListItem_o *)(_8__1 + 16), (int32_t)_4__this, v12, v13);
        if ( *p__8__1 )
        {
          (*p__8__1)->fields.mstFaceId = this->fields.mstFaceId;
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_1BC2FAC((CGThumbnailListItem_o *)p__2__current, 0, v16, v17);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_14:
      sub_1BC3264(_8__1, v11);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  v20 = this->fields.__4__this;
  _8__1 = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v22 = this->fields.__8__1;
  if ( !v22 )
    goto LABEL_14;
  if ( !v20 )
    goto LABEL_14;
  v23 = (AssetManager_o *)_8__1;
  AssetName = BattlePerformanceEnemyMst__getAssetName((BattlePerformanceEnemyMst_o *)_8__1, v22->fields.mstFaceId, v21);
  v25 = (Il2CppObject *)this->fields.__8__1;
  v26 = AssetName;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    v25,
    Method_BattlePerformanceEnemyMst___c__DisplayClass26_0__LoadAssetCoroutine_b__0__,
    0LL);
  if ( !v23 )
    goto LABEL_14;
  if ( AssetManager__LoadAssetStorage(v23, v26, v27, 1, 0LL) )
    return 0;
  result = 0;
  v20->fields.loadStat = 0;
  return result;
}


Il2CppObject *__fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26__System_Collections_IEnumerator_Reset(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26__System_Collections_IEnumerator_get_Current(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26__System_IDisposable_Dispose(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattlePerformanceEnemyMst___c__DisplayClass25_0___ctor(
        BattlePerformanceEnemyMst___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceEnemyMst___c__DisplayClass25_0___changeMasterFace_b__0(
        BattlePerformanceEnemyMst___c__DisplayClass25_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  AssetData_o *v3; // x19
  BattlePerformanceEnemyMst___c__DisplayClass25_0_o *v4; // x20
  __int64 v5; // x1
  struct BattlePerformanceEnemyMst_o *_4__this; // x8
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattlePerformanceEnemyMst_o *v9; // x8
  System_String_o *m_CancellationTokenSource; // x21

  v3 = data;
  v4 = this;
  if ( (byte_4B053DE & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, data);
    this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)sub_1BC3008(&AssetManager_TypeInfo, v5);
    byte_4B053DE = 1;
  }
  if ( !v4->fields.__4__this )
    goto LABEL_13;
  this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)BattlePerformanceEnemyMst__getTextureName(
                                                                (BattlePerformanceEnemyMst_o *)this,
                                                                v4->fields.nextMstFaceId,
                                                                method);
  if ( !v3 )
    goto LABEL_13;
  this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)AssetData__GetObject_object__50213776(
                                                                v3,
                                                                (System_String_o *)this,
                                                                (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  data = (AssetData_o *)this;
  this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)_4__this->fields.faceText;
  if ( !this )
    goto LABEL_13;
  ((void (__fastcall *)(BattlePerformanceEnemyMst___c__DisplayClass25_0_o *, AssetData_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    data,
    this->klass[2]._1.name);
  this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  v9 = this[2].fields.__4__this;
  if ( v9 )
  {
    m_CancellationTokenSource = (System_String_o *)v9->fields.m_CancellationTokenSource;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(m_CancellationTokenSource, 0LL);
    this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)v4->fields.__4__this;
    if ( !this )
LABEL_13:
      sub_1BC3264(this, data);
  }
  this[2].fields.__4__this = (struct BattlePerformanceEnemyMst_o *)v3;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this[2].fields, (int32_t)v3, v7, v8);
}


void __fastcall BattlePerformanceEnemyMst___c__DisplayClass26_0___ctor(
        BattlePerformanceEnemyMst___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceEnemyMst___c__DisplayClass26_0___LoadAssetCoroutine_b__0(
        BattlePerformanceEnemyMst___c__DisplayClass26_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  char *_4__this; // x0
  struct BattlePerformanceEnemyMst_o *v9; // x8
  struct UITexture_o *faceText; // x20
  UnityEngine_Shader_o *v11; // x22
  UnityEngine_Material_o *v12; // x21
  const MethodInfo *v13; // x2
  struct BattlePerformanceEnemyMst_o *v14; // x8
  struct UITexture_o *v15; // x20
  AssetData_o *mstFaceAssets; // x21

  if ( (byte_4B053DF & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, data);
    sub_1BC3008(&UnityEngine_Material_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_4899/*"Custom/SpriteWithMask"*/, v7);
    byte_4B053DF = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  *((_QWORD *)_4__this + 10) = data;
  sub_1BC2FAC((CGThumbnailListItem_o *)(_4__this + 80), (int32_t)data, (int32_t)method, v3);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_10;
  v9->fields.loadStat = 0;
  faceText = v9->fields.faceText;
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4899/*"Custom/SpriteWithMask"*/, 0LL);
  v12 = (UnityEngine_Material_o *)sub_1BC3254(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v12, v11, 0LL);
  if ( !faceText
    || (_4__this = (char *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))faceText->klass->vtable._25_set_material.method)(
                             faceText,
                             v12,
                             faceText->klass->vtable._26_get_mainTexture.methodPtr),
        (v14 = this->fields.__4__this) == 0LL)
    || (v15 = v14->fields.faceText,
        mstFaceAssets = v14->fields.mstFaceAssets,
        _4__this = (char *)BattlePerformanceEnemyMst__getTextureName(
                             (BattlePerformanceEnemyMst_o *)_4__this,
                             this->fields.mstFaceId,
                             v13),
        !mstFaceAssets)
    || (_4__this = (char *)AssetData__GetObject_object__50213776(
                             mstFaceAssets,
                             (System_String_o *)_4__this,
                             (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696),
        !v15) )
  {
LABEL_10:
    sub_1BC3264(_4__this, data);
  }
  ((void (__fastcall *)(struct UITexture_o *, char *, Il2CppMethodPointer))v15->klass->vtable._27_set_mainTexture.method)(
    v15,
    _4__this,
    v15->klass->vtable._28_get_shader.methodPtr);
}