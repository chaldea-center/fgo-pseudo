void BattlePerformanceEnemyMst___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct BattlePerformanceEnemyMst_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct BattlePerformanceEnemyMst_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  BattlePerformanceEnemyMst_c *v23; // x8

  if ( (byte_4D2FEC9 & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceEnemyMst_TypeInfo);
    sub_1C94098(&StringLiteral_4428/*"ChrVoice_{0}"*/);
    sub_1C94098(&StringLiteral_19179/*"enemyMstFace{0:d5}"*/);
    sub_1C94098(&StringLiteral_6049/*"EnemyMasterFace/enemyMstFace{0:d5}"*/);
    byte_4D2FEC9 = 1;
  }
  BattlePerformanceEnemyMst_TypeInfo->static_fields->MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6049/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattlePerformanceEnemyMst_TypeInfo->static_fields,
    StringLiteral_6049/*"EnemyMasterFace/enemyMstFace{0:d5}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_19179/*"enemyMstFace{0:d5}"*/;
  static_fields = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  static_fields->MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19179/*"enemyMstFace{0:d5}"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->MASTER_FACE_TEXTURE_NAME, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_4428/*"ChrVoice_{0}"*/;
  v16 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v16->MASTER_VOICE_ASSET_NAME = (struct System_String_o *)StringLiteral_4428/*"ChrVoice_{0}"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->MASTER_VOICE_ASSET_NAME, v15, v17, v18, v19, v20, v21, v22);
  v23 = BattlePerformanceEnemyMst_TypeInfo;
  BattlePerformanceEnemyMst_TypeInfo->static_fields->DEFAULT_COMMAND_SPELL_ICON_SIZE = (struct UnityEngine_Vector2_o)vdup_n_s32(0x42B40000u).n64_u64[0];
  v23->static_fields->DEFAULT_COMMAND_SPELL_ICON_POSITION = (struct UnityEngine_Vector2_o)0x4184DA5142500000LL;
}


void BattlePerformanceEnemyMst___ctor(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattlePerformanceEnemyMst__HideMaster(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *masterRoot; // x0

  masterRoot = this->fields.masterRoot;
  if ( !masterRoot )
    sub_1C942F0(0, method);
  UnityEngine_GameObject__SetActive(masterRoot, 0, 0);
}


void BattlePerformanceEnemyMst__Initialize(
        BattlePerformanceEnemyMst_o *this,
        BattleData_o *indata,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.data = indata;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.data, (int32_t)indata, (int32_t)method, v3, v4, v5, v6, v7);
}


bool BattlePerformanceEnemyMst__IsLoading(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  return this->fields.loadStat != 0;
}


System_Collections_IEnumerator_o *BattlePerformanceEnemyMst__LoadAssetCoroutine(
        BattlePerformanceEnemyMst_o *this,
        int32_t mstFaceId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2FEC3 & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_TypeInfo);
    byte_4D2FEC3 = 1;
  }
  v5 = sub_1C942E4(BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 40) = mstFaceId;
  return (System_Collections_IEnumerator_o *)v5;
}


void BattlePerformanceEnemyMst__OnDestroy(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  BattlePerformanceEnemyMst__releaseMasterFace(this, method);
  BattlePerformanceEnemyMst__releaseMasterVoice(this, v3);
}


void BattlePerformanceEnemyMst__OverwriteEnemyMasterFrame(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *battleUiAtlas; // x20
  UISprite_o *enemyMasterFrame; // x0
  __int64 v5; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v7; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  int32_t OverwriteFrame; // w0
  int32_t v10; // w20
  BattleDataDefine_c *v11; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v13; // x19
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+4h] [xbp-2Ch] BYREF
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2FEBF & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&BattleDataDefine_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_EnemyMstBattleMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_19816/*"frame_enemymaster_bg"*/);
    sub_1C94098(&StringLiteral_3109/*"BattleAssetUIAtlas"*/);
    sub_1C94098(&StringLiteral_19817/*"frame_enemymaster_bg_{0}"*/);
    byte_4D2FEBF = 1;
  }
  battleUiAtlas = (UnityEngine_Object_o *)this->fields.battleUiAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  enemyMasterFrame = (UISprite_o *)UnityEngine_Object__op_Inequality(battleUiAtlas, 0, 0);
  if ( ((unsigned __int8)enemyMasterFrame & 1) != 0 )
  {
    enemyMasterFrame = this->fields.enemyMasterFrame;
    if ( !enemyMasterFrame )
      goto LABEL_27;
    UISprite__set_atlas(enemyMasterFrame, this->fields.battleUiAtlas, 0);
    enemyMasterFrame = this->fields.enemyMasterFrame;
    if ( !enemyMasterFrame )
      goto LABEL_27;
    UISprite__set_spriteName(enemyMasterFrame, (System_String_o *)StringLiteral_19816/*"frame_enemymaster_bg"*/, 0);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( !data->fields.enemyMasterInfo )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  enemyMasterFrame = (UISprite_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EnemyMstBattleMaster___);
  v7 = this->fields.data;
  if ( !v7
    || (enemyMasterInfo = v7->fields.enemyMasterInfo) == 0
    || !enemyMasterFrame
    || (enemyMasterFrame = (UISprite_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)enemyMasterFrame,
                                           enemyMasterInfo->fields.id,
                                           (const MethodInfo_345B4C0 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__)) == 0 )
  {
LABEL_27:
    sub_1C942F0(enemyMasterFrame, v5);
  }
  OverwriteFrame = EnemyMstBattleEntity__GetOverwriteFrame((EnemyMstBattleEntity_o *)enemyMasterFrame, 0, 0);
  if ( OverwriteFrame )
  {
    v10 = OverwriteFrame;
    atlas = 0;
    v11 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v11 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v11->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3109/*"BattleAssetUIAtlas"*/, 0) )
    {
      enemyMasterFrame = this->fields.enemyMasterFrame;
      if ( enemyMasterFrame )
      {
        UISprite__set_atlas(enemyMasterFrame, atlas, 0);
        v13 = this->fields.enemyMasterFrame;
        v15 = v10;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
        enemyMasterFrame = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_19817/*"frame_enemymaster_bg_{0}"*/, v14, 0);
        if ( v13 )
        {
          UISprite__set_spriteName(v13, (System_String_o *)enemyMasterFrame, 0);
          return;
        }
      }
      goto LABEL_27;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceEnemyMst__SetRootActive(BattlePerformanceEnemyMst_o *this, bool status, const MethodInfo *method)
{
  BattleData_o *data; // x0
  CommandSpellIconComponent_o *commandSpellIcon; // x21

  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  if ( data->fields.enemyMasterInfo && !BattleData__IsHideEnemyMaster(data, 0) )
  {
    if ( status )
    {
      data = this->fields.data;
      if ( !data )
        goto LABEL_11;
      commandSpellIcon = this->fields.commandSpellIcon;
      data = (BattleData_o *)BattleData__getEnemyMasterCommandSpellCnt(data, 0);
      if ( !commandSpellIcon )
        goto LABEL_11;
      CommandSpellIconComponent__SetRemain(commandSpellIcon, (int32_t)data, 0);
    }
    data = (BattleData_o *)this->fields.masterRoot;
    if ( data )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, status, 0);
      return;
    }
LABEL_11:
    sub_1C942F0(data, status);
  }
}


void BattlePerformanceEnemyMst___loadData_b__20_0(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t CurrentEnemyMasterFaceId; // w1
  const MethodInfo *v5; // x2

  data = this->fields.data;
  this->fields.loadStat = 2;
  if ( !data )
    sub_1C942F0(0, method);
  CurrentEnemyMasterFaceId = BattleData__GetCurrentEnemyMasterFaceId(data, 0);
  BattlePerformanceEnemyMst__loadMasterFace(this, CurrentEnemyMasterFaceId, v5);
}


void BattlePerformanceEnemyMst__changeMasterFace(
        BattlePerformanceEnemyMst_o *this,
        int32_t nextMstFaceId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x19
  const MethodInfo *v15; // x2
  System_String_o *AssetName; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x22

  if ( (byte_4D2FEC2 & 1) == 0 )
  {
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C94098(&Method_BattlePerformanceEnemyMst___c__DisplayClass25_0__changeMasterFace_b__0__);
    sub_1C94098(&BattlePerformanceEnemyMst___c__DisplayClass25_0_TypeInfo);
    byte_4D2FEC2 = 1;
  }
  v5 = sub_1C942E4(BattlePerformanceEnemyMst___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_DWORD *)(v5 + 24) = nextMstFaceId,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__),
        AssetName = BattlePerformanceEnemyMst__getAssetName(
                      (BattlePerformanceEnemyMst_o *)Instance,
                      *(_DWORD *)(v5 + 24),
                      v15),
        v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo),
        AssetLoader_LoadEndDataHandler___ctor(
          v17,
          (Il2CppObject *)v5,
          Method_BattlePerformanceEnemyMst___c__DisplayClass25_0__changeMasterFace_b__0__,
          0),
        !Instance) )
  {
    sub_1C942F0(v6, v7);
  }
  AssetManager__LoadAssetStorage((AssetManager_o *)Instance, AssetName, v17, 1, 0);
}


System_String_o *BattlePerformanceEnemyMst__getAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BattlePerformanceEnemyMst_c *v4; // x0
  System_String_o *MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2FEC6 & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceEnemyMst_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    byte_4D2FEC6 = 1;
  }
  v4 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v4 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_ASSET_NAME = v4->static_fields->MASTER_FACE_ASSET_NAME;
  v8 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format(MASTER_FACE_ASSET_NAME, v6, 0);
}


System_String_o *BattlePerformanceEnemyMst__getTextureName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BattlePerformanceEnemyMst_c *v4; // x0
  System_String_o *MASTER_FACE_TEXTURE_NAME; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2FEC7 & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceEnemyMst_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    byte_4D2FEC7 = 1;
  }
  v4 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v4 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_TEXTURE_NAME = v4->static_fields->MASTER_FACE_TEXTURE_NAME;
  v8 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format(MASTER_FACE_TEXTURE_NAME, v6, 0);
}


System_String_o *BattlePerformanceEnemyMst__getVoiceAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BattlePerformanceEnemyMst_c *v4; // x0
  System_String_o *MASTER_VOICE_ASSET_NAME; // x20
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2FEC8 & 1) == 0 )
  {
    sub_1C94098(&BattlePerformanceEnemyMst_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    byte_4D2FEC8 = 1;
  }
  v4 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v4 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_VOICE_ASSET_NAME = v4->static_fields->MASTER_VOICE_ASSET_NAME;
  v8 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format(MASTER_VOICE_ASSET_NAME, v6, 0);
}


void BattlePerformanceEnemyMst__loadData(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemyMst_o *v2; // x19
  struct BattleData_o *data; // x8
  const MethodInfo *v4; // x2
  struct BattleData_o *v5; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  System_String_o *VoiceAssetName; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_String_o *loadVoiceAsset; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  v2 = this;
  if ( (byte_4D2FEBE & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattlePerformanceEnemyMst__loadData_b__20_0__);
    this = (BattlePerformanceEnemyMst_o *)sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2FEBE = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( !data->fields.enemyMasterInfo )
  {
    this = (BattlePerformanceEnemyMst_o *)v2->fields.masterRoot;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      BattlePerformanceEnemyMst__releaseMasterFace(v2, v18);
      BattlePerformanceEnemyMst__releaseMasterVoice(v2, v19);
      return;
    }
LABEL_15:
    sub_1C942F0(this, method);
  }
  v2->fields.loadStat = 1;
  BattlePerformanceEnemyMst__releaseMasterVoice(v2, method);
  v5 = v2->fields.data;
  if ( !v5 )
    goto LABEL_15;
  enemyMasterInfo = v5->fields.enemyMasterInfo;
  if ( !enemyMasterInfo )
    goto LABEL_15;
  VoiceAssetName = BattlePerformanceEnemyMst__getVoiceAssetName(this, enemyMasterInfo->fields.enemyMasterId, v4);
  v2->fields.loadVoiceAsset = VoiceAssetName;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v2->fields.loadVoiceAsset,
    (int32_t)VoiceAssetName,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  loadVoiceAsset = v2->fields.loadVoiceAsset;
  v15 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v2, Method_BattlePerformanceEnemyMst__loadData_b__20_0__, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(loadVoiceAsset, v15, 1, 0);
  BattlePerformanceEnemyMst__updateCommandSpellIcon(v2, v16);
  this = (BattlePerformanceEnemyMst_o *)v2->fields.data;
  if ( !this )
    goto LABEL_15;
  if ( BattleData__IsHideEnemyMaster((BattleData_o *)this, 0) )
    BattlePerformanceEnemyMst__HideMaster(v2, v17);
}


void BattlePerformanceEnemyMst__loadMasterFace(
        BattlePerformanceEnemyMst_o *this,
        int32_t mstFaceId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *faceText; // x21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *AssetCoroutine; // x1

  if ( (byte_4D2FEC1 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEC1 = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(faceText, 0, 0) )
  {
    if ( this->fields.mstFaceAssets )
      BattlePerformanceEnemyMst__releaseMasterFace(this, v6);
    AssetCoroutine = BattlePerformanceEnemyMst__LoadAssetCoroutine(this, mstFaceId, v7);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, AssetCoroutine, 0);
  }
}


void BattlePerformanceEnemyMst__releaseMasterFace(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *faceText; // x20
  __int64 v4; // x1
  struct UITexture_o *v5; // x0
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *v8; // x20
  struct AssetData_o *v9; // x8
  GrandQuestFolderBoardItem_o *p_mstFaceAssets; // x19
  struct AssetData_o *mstFaceAssets; // t1
  System_String_o *name; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D2FEC4 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2FEC4 = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(faceText, 0, 0) )
  {
    v5 = this->fields.faceText;
    if ( !v5 )
      goto LABEL_26;
    v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))v5->klass->vtable._24_get_material.methodPtr)(
                                   v5,
                                   v5->klass->vtable._24_get_material.method);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
    {
      v5 = this->fields.faceText;
      if ( !v5 )
        goto LABEL_26;
      v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))v5->klass->vtable._24_get_material.methodPtr)(
                                     v5,
                                     v5->klass->vtable._24_get_material.method);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(v7, 0);
      v5 = this->fields.faceText;
      if ( !v5 )
        goto LABEL_26;
      ((void (__fastcall *)(struct UITexture_o *, _QWORD, const MethodInfo *))v5->klass->vtable._25_set_material.methodPtr)(
        v5,
        0,
        v5->klass->vtable._25_set_material.method);
    }
    v5 = this->fields.faceText;
    if ( v5 )
    {
      v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))v5->klass->vtable._26_get_mainTexture.methodPtr)(
                                     v5,
                                     v5->klass->vtable._26_get_mainTexture.method);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v8, 0, 0) )
        goto LABEL_21;
      v5 = this->fields.faceText;
      if ( v5 )
      {
        ((void (__fastcall *)(struct UITexture_o *, _QWORD, const MethodInfo *))v5->klass->vtable._27_set_mainTexture.methodPtr)(
          v5,
          0,
          v5->klass->vtable._27_set_mainTexture.method);
LABEL_21:
        mstFaceAssets = this->fields.mstFaceAssets;
        p_mstFaceAssets = (GrandQuestFolderBoardItem_o *)&this->fields.mstFaceAssets;
        v9 = mstFaceAssets;
        if ( mstFaceAssets )
        {
          name = v9->fields.name;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAssetStorage(name, 0);
          p_mstFaceAssets->klass = 0;
          sub_1C9403C(p_mstFaceAssets, 0, v13, v14, v15, v16, v17, v18);
        }
        return;
      }
    }
LABEL_26:
    sub_1C942F0(v5, v4);
  }
}


void BattlePerformanceEnemyMst__releaseMasterVoice(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_loadVoiceAsset; // x19
  System_String_o *v4; // x20
  struct System_String_o *loadVoiceAsset; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2FEC5 & 1) == 0 )
  {
    sub_1C94098(&SoundManager_TypeInfo);
    byte_4D2FEC5 = 1;
  }
  loadVoiceAsset = this->fields.loadVoiceAsset;
  p_loadVoiceAsset = (GrandQuestFolderBoardItem_o *)&this->fields.loadVoiceAsset;
  v4 = loadVoiceAsset;
  if ( loadVoiceAsset )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v4, 0);
    p_loadVoiceAsset->klass = 0;
    sub_1C9403C(p_loadVoiceAsset, 0, v6, v7, v8, v9, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceEnemyMst__updateCommandSpellIcon(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemyMst_o *v2; // x19
  struct BattleData_o *data; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  CommandSpellIconComponent_o *commandSpellIcon; // x20
  StageEntity_o *v6; // x20
  System_Int32_array *EnemyMasterCommandSpellIconSize; // x21
  BattlePerformanceEnemyMst_c *v8; // x0
  struct BattlePerformanceEnemyMst_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  System_Single_array *EnemyMasterCommandSpellIconPosition; // x20
  BattlePerformanceEnemyMst_c *v13; // x0
  struct BattlePerformanceEnemyMst_StaticFields *v14; // x9
  float *m_Items; // x8
  float *p_y; // x9
  float v17; // s8
  float v18; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4

  v2 = this;
  if ( (byte_4D2FEC0 & 1) == 0 )
  {
    this = (BattlePerformanceEnemyMst_o *)sub_1C94098(&BattlePerformanceEnemyMst_TypeInfo);
    byte_4D2FEC0 = 1;
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
          0),
        (this = (BattlePerformanceEnemyMst_o *)v2->fields.data) == 0)
    || (commandSpellIcon = v2->fields.commandSpellIcon,
        this = (BattlePerformanceEnemyMst_o *)BattleData__getEnemyMasterCommandSpellCnt((BattleData_o *)this, 0),
        !commandSpellIcon)
    || (CommandSpellIconComponent__SetRemain(commandSpellIcon, (int32_t)this, 0),
        (this = (BattlePerformanceEnemyMst_o *)v2->fields.data) == 0)
    || (this = (BattlePerformanceEnemyMst_o *)BattleData__getStageEntity((BattleData_o *)this, 0)) == 0 )
  {
LABEL_27:
    sub_1C942F0(this, method);
  }
  v6 = (StageEntity_o *)this;
  EnemyMasterCommandSpellIconSize = StageEntity__GetEnemyMasterCommandSpellIconSize((StageEntity_o *)this, 0);
  this = (BattlePerformanceEnemyMst_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)EnemyMasterCommandSpellIconSize,
                                          0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8 = BattlePerformanceEnemyMst_TypeInfo;
    if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
      v8 = BattlePerformanceEnemyMst_TypeInfo;
    }
    static_fields = v8->static_fields;
    x = static_fields->DEFAULT_COMMAND_SPELL_ICON_SIZE.fields.x;
    y = static_fields->DEFAULT_COMMAND_SPELL_ICON_SIZE.fields.y;
  }
  else
  {
    if ( !EnemyMasterCommandSpellIconSize )
      goto LABEL_27;
    if ( LODWORD(EnemyMasterCommandSpellIconSize->max_length) < 2 )
      goto LABEL_28;
    x = (float)EnemyMasterCommandSpellIconSize->m_Items[0];
    y = (float)EnemyMasterCommandSpellIconSize->m_Items[1];
  }
  this = (BattlePerformanceEnemyMst_o *)v2->fields.commandSpellIcon;
  if ( !this )
    goto LABEL_27;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)this, *(UnityEngine_Vector2_o *)&x, 0);
  EnemyMasterCommandSpellIconPosition = StageEntity__GetEnemyMasterCommandSpellIconPosition(v6, 0);
  this = (BattlePerformanceEnemyMst_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)EnemyMasterCommandSpellIconPosition,
                                          0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !EnemyMasterCommandSpellIconPosition )
      goto LABEL_27;
    if ( LODWORD(EnemyMasterCommandSpellIconPosition->max_length) >= 2 )
    {
      m_Items = EnemyMasterCommandSpellIconPosition->m_Items;
      p_y = &EnemyMasterCommandSpellIconPosition->m_Items[1];
      goto LABEL_25;
    }
LABEL_28:
    sub_1C942F8(this);
  }
  v13 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v13 = BattlePerformanceEnemyMst_TypeInfo;
  }
  v14 = v13->static_fields;
  m_Items = (float *)&v14->DEFAULT_COMMAND_SPELL_ICON_POSITION;
  p_y = &v14->DEFAULT_COMMAND_SPELL_ICON_POSITION.fields.y;
LABEL_25:
  this = (BattlePerformanceEnemyMst_o *)v2->fields.commandSpellIcon;
  if ( !this )
    goto LABEL_27;
  v17 = *m_Items;
  v18 = *p_y;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v20.fields.x = v17;
  v20.fields.y = v18;
  GameObjectExtensions__SetLocalPosition_36798708(gameObject, v20, 0);
}


void BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26___ctor(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26__MoveNext(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *v4; // x21
  struct BattlePerformanceEnemyMst___c__DisplayClass26_0_o **p__8__1; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  char *_8__1; // x0
  struct BattlePerformanceEnemyMst_o *_4__this; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceEnemyMst_o *v29; // x23
  const MethodInfo *v30; // x2
  struct BattlePerformanceEnemyMst___c__DisplayClass26_0_o *v31; // x8
  AssetManager_o *v32; // x20
  System_String_o *AssetName; // x0
  Il2CppObject *v34; // x22
  System_String_o *v35; // x19
  AssetLoader_LoadEndDataHandler_o *v36; // x21

  if ( (byte_4D2FECC & 1) == 0 )
  {
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C94098(&Method_BattlePerformanceEnemyMst___c__DisplayClass26_0__LoadAssetCoroutine_b__0__);
    sub_1C94098(&BattlePerformanceEnemyMst___c__DisplayClass26_0_TypeInfo);
    byte_4D2FECC = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v4 = (Il2CppObject *)sub_1C942E4(BattlePerformanceEnemyMst___c__DisplayClass26_0_TypeInfo);
      System_Object___ctor(v4, 0);
      this->fields.__8__1 = (struct BattlePerformanceEnemyMst___c__DisplayClass26_0_o *)v4;
      p__8__1 = &this->fields.__8__1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__8__1, (int32_t)v4, v6, v7, v8, v9, v10, v11);
      _8__1 = (char *)this->fields.__8__1;
      if ( _8__1 )
      {
        _4__this = this->fields.__4__this;
        *((_QWORD *)_8__1 + 2) = _4__this;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(_8__1 + 16), (int32_t)_4__this, v13, v14, v15, v16, v17, v18);
        if ( *p__8__1 )
        {
          (*p__8__1)->fields.mstFaceId = this->fields.mstFaceId;
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, 0, v21, v22, v23, v24, v25, v26);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_14:
      sub_1C942F0(_8__1, v12);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  v29 = this->fields.__4__this;
  _8__1 = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v31 = this->fields.__8__1;
  if ( !v31 )
    goto LABEL_14;
  if ( !v29 )
    goto LABEL_14;
  v32 = (AssetManager_o *)_8__1;
  AssetName = BattlePerformanceEnemyMst__getAssetName((BattlePerformanceEnemyMst_o *)_8__1, v31->fields.mstFaceId, v30);
  v34 = (Il2CppObject *)this->fields.__8__1;
  v35 = AssetName;
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    v34,
    Method_BattlePerformanceEnemyMst___c__DisplayClass26_0__LoadAssetCoroutine_b__0__,
    0);
  if ( !v32 )
    goto LABEL_14;
  if ( AssetManager__LoadAssetStorage(v32, v35, v36, 1, 0) )
    return 0;
  result = 0;
  v29->fields.loadStat = 0;
  return result;
}


Il2CppObject *BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26__System_Collections_IEnumerator_Reset(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26__System_Collections_IEnumerator_get_Current(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26__System_IDisposable_Dispose(
        BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_o *this,
        const MethodInfo *method)
{
  ;
}


void BattlePerformanceEnemyMst___c__DisplayClass25_0___ctor(
        BattlePerformanceEnemyMst___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceEnemyMst___c__DisplayClass25_0___changeMasterFace_b__0(
        BattlePerformanceEnemyMst___c__DisplayClass25_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  AssetData_o *v3; // x19
  BattlePerformanceEnemyMst___c__DisplayClass25_0_o *v4; // x20
  struct BattlePerformanceEnemyMst_o *_4__this; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct BattlePerformanceEnemyMst_o *v12; // x8
  System_String_o *m_CancellationTokenSource; // x21

  v3 = data;
  v4 = this;
  if ( (byte_4D2FECA & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)sub_1C94098(&AssetManager_TypeInfo);
    byte_4D2FECA = 1;
  }
  if ( !v4->fields.__4__this )
    goto LABEL_13;
  this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)BattlePerformanceEnemyMst__getTextureName(
                                                                (BattlePerformanceEnemyMst_o *)this,
                                                                v4->fields.nextMstFaceId,
                                                                method);
  if ( !v3 )
    goto LABEL_13;
  this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)AssetData__GetObject_object__51893132(
                                                                v3,
                                                                (System_String_o *)this,
                                                                (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  data = (AssetData_o *)this;
  this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)_4__this->fields.faceText;
  if ( !this )
    goto LABEL_13;
  ((void (__fastcall *)(BattlePerformanceEnemyMst___c__DisplayClass25_0_o *, AssetData_o *, void *))this->klass[1].vtable._3_ToString.method)(
    this,
    data,
    this->klass[2]._1.image);
  this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  v12 = this[2].fields.__4__this;
  if ( v12 )
  {
    m_CancellationTokenSource = (System_String_o *)v12->fields.m_CancellationTokenSource;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(m_CancellationTokenSource, 0);
    this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)v4->fields.__4__this;
    if ( !this )
LABEL_13:
      sub_1C942F0(this, data);
  }
  this[2].fields.__4__this = (struct BattlePerformanceEnemyMst_o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this[2].fields, (int32_t)v3, v6, v7, v8, v9, v10, v11);
}


void BattlePerformanceEnemyMst___c__DisplayClass26_0___ctor(
        BattlePerformanceEnemyMst___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattlePerformanceEnemyMst___c__DisplayClass26_0___LoadAssetCoroutine_b__0(
        BattlePerformanceEnemyMst___c__DisplayClass26_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  char *_4__this; // x0
  struct BattlePerformanceEnemyMst_o *v11; // x8
  struct UITexture_o *faceText; // x20
  UnityEngine_Shader_o *v13; // x22
  UnityEngine_Material_o *v14; // x21
  const MethodInfo *v15; // x2
  struct BattlePerformanceEnemyMst_o *v16; // x8
  struct UITexture_o *v17; // x20
  AssetData_o *mstFaceAssets; // x21

  if ( (byte_4D2FECB & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&StringLiteral_4943/*"Custom/SpriteWithMask"*/);
    byte_4D2FECB = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  *((_QWORD *)_4__this + 10) = data;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(_4__this + 80), (int32_t)data, (int32_t)method, v3, v4, v5, v6, v7);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_10;
  v11->fields.loadStat = 0;
  faceText = v11->fields.faceText;
  v13 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4943/*"Custom/SpriteWithMask"*/, 0);
  v14 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v14, v13, 0);
  if ( !faceText
    || (_4__this = (char *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))faceText->klass->vtable._25_set_material.methodPtr)(
                             faceText,
                             v14,
                             faceText->klass->vtable._25_set_material.method),
        (v16 = this->fields.__4__this) == 0)
    || (v17 = v16->fields.faceText,
        mstFaceAssets = v16->fields.mstFaceAssets,
        _4__this = (char *)BattlePerformanceEnemyMst__getTextureName(
                             (BattlePerformanceEnemyMst_o *)_4__this,
                             this->fields.mstFaceId,
                             v15),
        !mstFaceAssets)
    || (_4__this = (char *)AssetData__GetObject_object__51893132(
                             mstFaceAssets,
                             (System_String_o *)_4__this,
                             (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848),
        !v17) )
  {
LABEL_10:
    sub_1C942F0(_4__this, data);
  }
  ((void (__fastcall *)(struct UITexture_o *, char *, const MethodInfo *))v17->klass->vtable._27_set_mainTexture.methodPtr)(
    v17,
    _4__this,
    v17->klass->vtable._27_set_mainTexture.method);
}