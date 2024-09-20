void __fastcall BattlePerformanceEnemyMst___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct BattlePerformanceEnemyMst_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct BattlePerformanceEnemyMst_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5E05E & 1) == 0 )
  {
    sub_1B885B0(&BattlePerformanceEnemyMst_TypeInfo);
    sub_1B885B0(&StringLiteral_4465/*"ChrVoice_{0}"*/);
    sub_1B885B0(&StringLiteral_19024/*"enemyMstFace{0:d5}"*/);
    sub_1B885B0(&StringLiteral_6009/*"EnemyMasterFace/enemyMstFace{0:d5}"*/);
    byte_4A5E05E = 1;
  }
  BattlePerformanceEnemyMst_TypeInfo->static_fields->MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6009/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattlePerformanceEnemyMst_TypeInfo->static_fields,
    StringLiteral_6009/*"EnemyMasterFace/enemyMstFace{0:d5}"*/,
    v1,
    v2);
  v3 = StringLiteral_19024/*"enemyMstFace{0:d5}"*/;
  static_fields = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  static_fields->MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19024/*"enemyMstFace{0:d5}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->MASTER_FACE_TEXTURE_NAME, v3, v5, v6);
  v7 = StringLiteral_4465/*"ChrVoice_{0}"*/;
  v8 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v8->MASTER_VOICE_ASSET_NAME = (struct System_String_o *)StringLiteral_4465/*"ChrVoice_{0}"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->MASTER_VOICE_ASSET_NAME, v7, v9, v10);
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
  int32_t v3; // w3

  this->fields.data = indata;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)indata, (int32_t)method, v3);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5E058 & 1) == 0 )
  {
    sub_1B885B0(&BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_TypeInfo);
    byte_4A5E058 = 1;
  }
  v5 = sub_1B887FC(BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
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
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  int v18; // [xsp+4h] [xbp-2Ch] BYREF
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5E055 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EnemyMstBattleMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_19618/*"frame_enemymaster_bg"*/);
    sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    sub_1B885B0(&StringLiteral_19619/*"frame_enemymaster_bg_{0}"*/);
    byte_4A5E055 = 1;
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
    UISprite__set_spriteName(enemyMasterFrame, (System_String_o *)StringLiteral_19618/*"frame_enemymaster_bg"*/, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( !data->fields.enemyMasterInfo )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  enemyMasterFrame = (UISprite_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EnemyMstBattleMaster___);
  v7 = this->fields.data;
  if ( !v7
    || (enemyMasterInfo = v7->fields.enemyMasterInfo) == 0LL
    || !enemyMasterFrame
    || (enemyMasterFrame = (UISprite_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)enemyMasterFrame,
                                           enemyMasterInfo->fields.id,
                                           (const MethodInfo_311D934 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__)) == 0LL )
  {
LABEL_27:
    sub_1B8880C(enemyMasterFrame, v5);
  }
  OverwriteFrame = EnemyMstBattleEntity__GetOverwriteFrame((EnemyMstBattleEntity_o *)enemyMasterFrame, 0, 0LL);
  if ( OverwriteFrame )
  {
    v10 = OverwriteFrame;
    atlas = 0LL;
    v11 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v11 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v11->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      enemyMasterFrame = this->fields.enemyMasterFrame;
      if ( enemyMasterFrame )
      {
        UISprite__set_atlas(enemyMasterFrame, atlas, 0LL);
        v13 = this->fields.enemyMasterFrame;
        v18 = v10;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v14, v15, v16);
        enemyMasterFrame = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_19619/*"frame_enemymaster_bg_{0}"*/, v17, 0LL);
        if ( v13 )
        {
          UISprite__set_spriteName(v13, (System_String_o *)enemyMasterFrame, 0LL);
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
    sub_1B8880C(data, status);
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
    sub_1B8880C(0LL, method);
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
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x19
  const MethodInfo *v11; // x2
  System_String_o *AssetName; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x22

  if ( (byte_4A5E057 & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_BattlePerformanceEnemyMst___c__DisplayClass23_0__changeMasterFace_b__0__);
    sub_1B885B0(&BattlePerformanceEnemyMst___c__DisplayClass23_0_TypeInfo);
    byte_4A5E057 = 1;
  }
  v5 = sub_1B887FC(BattlePerformanceEnemyMst___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9),
        *(_DWORD *)(v5 + 24) = nextMstFaceId,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__),
        AssetName = BattlePerformanceEnemyMst__getAssetName(
                      (BattlePerformanceEnemyMst_o *)Instance,
                      *(_DWORD *)(v5 + 24),
                      v11),
        v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo),
        AssetLoader_LoadEndDataHandler___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_BattlePerformanceEnemyMst___c__DisplayClass23_0__changeMasterFace_b__0__,
          0LL),
        !Instance) )
  {
    sub_1B8880C(v6, v7);
  }
  AssetManager__LoadAssetStorage((AssetManager_o *)Instance, AssetName, v13, 1, 0LL);
}


System_String_o *__fastcall BattlePerformanceEnemyMst__getAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattlePerformanceEnemyMst_c *v6; // x0
  System_String_o *MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E05B & 1) == 0 )
  {
    sub_1B885B0(&BattlePerformanceEnemyMst_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5E05B = 1;
  }
  v6 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v6 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_ASSET_NAME = v6->static_fields->MASTER_FACE_ASSET_NAME;
  v10 = id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, method, v3, v4);
  return System_String__Format(MASTER_FACE_ASSET_NAME, v8, 0LL);
}


System_String_o *__fastcall BattlePerformanceEnemyMst__getTextureName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattlePerformanceEnemyMst_c *v6; // x0
  System_String_o *MASTER_FACE_TEXTURE_NAME; // x20
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E05C & 1) == 0 )
  {
    sub_1B885B0(&BattlePerformanceEnemyMst_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5E05C = 1;
  }
  v6 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v6 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_TEXTURE_NAME = v6->static_fields->MASTER_FACE_TEXTURE_NAME;
  v10 = id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, method, v3, v4);
  return System_String__Format(MASTER_FACE_TEXTURE_NAME, v8, 0LL);
}


System_String_o *__fastcall BattlePerformanceEnemyMst__getVoiceAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  BattlePerformanceEnemyMst_c *v6; // x0
  System_String_o *MASTER_VOICE_ASSET_NAME; // x20
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E05D & 1) == 0 )
  {
    sub_1B885B0(&BattlePerformanceEnemyMst_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5E05D = 1;
  }
  v6 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v6 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_VOICE_ASSET_NAME = v6->static_fields->MASTER_VOICE_ASSET_NAME;
  v10 = id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, method, v3, v4);
  return System_String__Format(MASTER_VOICE_ASSET_NAME, v8, 0LL);
}


void __fastcall BattlePerformanceEnemyMst__loadData(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  BattlePerformanceEnemyMst_o *v2; // x19
  struct BattleData_o *data; // x8
  const MethodInfo *v4; // x2
  struct BattleData_o *v5; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  System_String_o *VoiceAssetName; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *loadVoiceAsset; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  v2 = this;
  if ( (byte_4A5E054 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattlePerformanceEnemyMst__loadData_b__18_0__);
    this = (BattlePerformanceEnemyMst_o *)sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5E054 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_12;
  if ( !data->fields.enemyMasterInfo )
  {
    this = (BattlePerformanceEnemyMst_o *)v2->fields.masterRoot;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      BattlePerformanceEnemyMst__releaseMasterFace(v2, v13);
      BattlePerformanceEnemyMst__releaseMasterVoice(v2, v14);
      return;
    }
LABEL_12:
    sub_1B8880C(this, method);
  }
  v2->fields.loadStat = 1;
  BattlePerformanceEnemyMst__releaseMasterVoice(v2, method);
  v5 = v2->fields.data;
  if ( !v5 )
    goto LABEL_12;
  enemyMasterInfo = v5->fields.enemyMasterInfo;
  if ( !enemyMasterInfo )
    goto LABEL_12;
  VoiceAssetName = BattlePerformanceEnemyMst__getVoiceAssetName(this, enemyMasterInfo->fields.enemyMasterId, v4);
  v2->fields.loadVoiceAsset = VoiceAssetName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.loadVoiceAsset, (int32_t)VoiceAssetName, v8, v9);
  loadVoiceAsset = v2->fields.loadVoiceAsset;
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v2, Method_BattlePerformanceEnemyMst__loadData_b__18_0__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(loadVoiceAsset, v11, 1, 0LL);
  BattlePerformanceEnemyMst__updateCommandSpellIcon(v2, v12);
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

  if ( (byte_4A5E056 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E056 = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(faceText, 0LL, 0LL) )
  {
    if ( this->fields.mstFaceAssets )
      BattlePerformanceEnemyMst__releaseMasterFace(this, v6);
    AssetCoroutine = BattlePerformanceEnemyMst__LoadAssetCoroutine(this, mstFaceId, v7);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, AssetCoroutine, 0LL);
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
  ServantStatusBattleListViewItem_o *p_mstFaceAssets; // x19
  struct AssetData_o *mstFaceAssets; // t1
  System_String_o *name; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5E059 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E059 = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(faceText, 0LL, 0LL) )
  {
    v5 = this->fields.faceText;
    if ( !v5 )
      goto LABEL_26;
    v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v5->klass->vtable._24_get_material.method)(
                                   v5,
                                   v5->klass->vtable._25_set_material.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    {
      v5 = this->fields.faceText;
      if ( !v5 )
        goto LABEL_26;
      v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v5->klass->vtable._24_get_material.method)(
                                     v5,
                                     v5->klass->vtable._25_set_material.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v7, 0LL);
      v5 = this->fields.faceText;
      if ( !v5 )
        goto LABEL_26;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
        goto LABEL_21;
      v5 = this->fields.faceText;
      if ( v5 )
      {
        ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._27_set_mainTexture.method)(
          v5,
          0LL,
          v5->klass->vtable._28_get_shader.methodPtr);
LABEL_21:
        mstFaceAssets = this->fields.mstFaceAssets;
        p_mstFaceAssets = (ServantStatusBattleListViewItem_o *)&this->fields.mstFaceAssets;
        v9 = mstFaceAssets;
        if ( mstFaceAssets )
        {
          name = v9->fields.name;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAssetStorage(name, 0LL);
          p_mstFaceAssets->klass = 0LL;
          sub_1B88554(p_mstFaceAssets, 0, v13, v14);
        }
        return;
      }
    }
LABEL_26:
    sub_1B8880C(v5, v4);
  }
}


void __fastcall BattlePerformanceEnemyMst__releaseMasterVoice(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_loadVoiceAsset; // x19
  System_String_o *v4; // x20
  struct System_String_o *loadVoiceAsset; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5E05A & 1) == 0 )
  {
    sub_1B885B0(&SoundManager_TypeInfo);
    byte_4A5E05A = 1;
  }
  loadVoiceAsset = this->fields.loadVoiceAsset;
  p_loadVoiceAsset = (ServantStatusBattleListViewItem_o *)&this->fields.loadVoiceAsset;
  v4 = loadVoiceAsset;
  if ( loadVoiceAsset )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v4, 0LL);
    p_loadVoiceAsset->klass = 0LL;
    sub_1B88554(p_loadVoiceAsset, 0, v6, v7);
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
    sub_1B8880C(this, method);
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
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  char *_8__1; // x0
  struct BattlePerformanceEnemyMst_o *_4__this; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceEnemyMst_o *v17; // x23
  const MethodInfo *v18; // x2
  struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *v19; // x8
  AssetManager_o *v20; // x20
  System_String_o *AssetName; // x0
  Il2CppObject *v22; // x22
  System_String_o *v23; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x21

  if ( (byte_4A5E061 & 1) == 0 )
  {
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_BattlePerformanceEnemyMst___c__DisplayClass24_0__LoadAssetCoroutine_b__0__);
    sub_1B885B0(&BattlePerformanceEnemyMst___c__DisplayClass24_0_TypeInfo);
    byte_4A5E061 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v4 = (Il2CppObject *)sub_1B887FC(BattlePerformanceEnemyMst___c__DisplayClass24_0_TypeInfo);
      System_Object___ctor(v4, 0LL);
      this->fields.__8__1 = (struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *)v4;
      p__8__1 = &this->fields.__8__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__8__1, (int32_t)v4, v6, v7);
      _8__1 = (char *)this->fields.__8__1;
      if ( _8__1 )
      {
        _4__this = this->fields.__4__this;
        *((_QWORD *)_8__1 + 2) = _4__this;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(_8__1 + 16), (int32_t)_4__this, v9, v10);
        if ( *p__8__1 )
        {
          (*p__8__1)->fields.mstFaceId = this->fields.mstFaceId;
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, 0, v13, v14);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_14:
      sub_1B8880C(_8__1, v8);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  v17 = this->fields.__4__this;
  _8__1 = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v19 = this->fields.__8__1;
  if ( !v19 )
    goto LABEL_14;
  if ( !v17 )
    goto LABEL_14;
  v20 = (AssetManager_o *)_8__1;
  AssetName = BattlePerformanceEnemyMst__getAssetName((BattlePerformanceEnemyMst_o *)_8__1, v19->fields.mstFaceId, v18);
  v22 = (Il2CppObject *)this->fields.__8__1;
  v23 = AssetName;
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    v22,
    Method_BattlePerformanceEnemyMst___c__DisplayClass24_0__LoadAssetCoroutine_b__0__,
    0LL);
  if ( !v20 )
    goto LABEL_14;
  if ( AssetManager__LoadAssetStorage(v20, v23, v24, 1, 0LL) )
    return 0;
  result = 0;
  v17->fields.loadStat = 0;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  BattlePerformanceEnemyMst___c__DisplayClass23_0_o *v4; // x20
  struct BattlePerformanceEnemyMst_o *_4__this; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  struct BattlePerformanceEnemyMst_o *v8; // x8
  System_String_o *m_CancellationTokenSource; // x21

  v3 = data;
  v4 = this;
  if ( (byte_4A5E05F & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    this = (BattlePerformanceEnemyMst___c__DisplayClass23_0_o *)sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5E05F = 1;
  }
  if ( !v4->fields.__4__this )
    goto LABEL_13;
  this = (BattlePerformanceEnemyMst___c__DisplayClass23_0_o *)BattlePerformanceEnemyMst__getTextureName(
                                                                (BattlePerformanceEnemyMst_o *)this,
                                                                v4->fields.nextMstFaceId,
                                                                method);
  if ( !v3 )
    goto LABEL_13;
  this = (BattlePerformanceEnemyMst___c__DisplayClass23_0_o *)AssetData__GetObject_object__48635516(
                                                                v3,
                                                                (System_String_o *)this,
                                                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  data = (AssetData_o *)this;
  this = (BattlePerformanceEnemyMst___c__DisplayClass23_0_o *)_4__this->fields.faceText;
  if ( !this )
    goto LABEL_13;
  ((void (__fastcall *)(BattlePerformanceEnemyMst___c__DisplayClass23_0_o *, AssetData_o *, const char *))this->klass[2]._1.gc_desc)(
    this,
    data,
    this->klass[2]._1.name);
  this = (BattlePerformanceEnemyMst___c__DisplayClass23_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_13;
  v8 = this[2].fields.__4__this;
  if ( v8 )
  {
    m_CancellationTokenSource = (System_String_o *)v8->fields.m_CancellationTokenSource;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(m_CancellationTokenSource, 0LL);
    this = (BattlePerformanceEnemyMst___c__DisplayClass23_0_o *)v4->fields.__4__this;
    if ( !this )
LABEL_13:
      sub_1B8880C(this, data);
  }
  this[2].fields.__4__this = (struct BattlePerformanceEnemyMst_o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this[2].fields, (int32_t)v3, v6, v7);
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
  int32_t v3; // w3
  char *_4__this; // x0
  struct BattlePerformanceEnemyMst_o *v7; // x8
  struct UITexture_o *faceText; // x20
  UnityEngine_Shader_o *v9; // x22
  UnityEngine_Material_o *v10; // x21
  const MethodInfo *v11; // x2
  struct BattlePerformanceEnemyMst_o *v12; // x8
  struct UITexture_o *v13; // x20
  AssetData_o *mstFaceAssets; // x21

  if ( (byte_4A5E060 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    byte_4A5E060 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  *((_QWORD *)_4__this + 10) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(_4__this + 80), (int32_t)data, (int32_t)method, v3);
  v7 = this->fields.__4__this;
  if ( !v7 )
    goto LABEL_10;
  v7->fields.loadStat = 0;
  faceText = v7->fields.faceText;
  v9 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
  v10 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v10, v9, 0LL);
  if ( !faceText
    || (_4__this = (char *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))faceText->klass->vtable._25_set_material.method)(
                             faceText,
                             v10,
                             faceText->klass->vtable._26_get_mainTexture.methodPtr),
        (v12 = this->fields.__4__this) == 0LL)
    || (v13 = v12->fields.faceText,
        mstFaceAssets = v12->fields.mstFaceAssets,
        _4__this = (char *)BattlePerformanceEnemyMst__getTextureName(
                             (BattlePerformanceEnemyMst_o *)_4__this,
                             this->fields.mstFaceId,
                             v11),
        !mstFaceAssets)
    || (_4__this = (char *)AssetData__GetObject_object__48635516(
                             mstFaceAssets,
                             (System_String_o *)_4__this,
                             (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376),
        !v13) )
  {
LABEL_10:
    sub_1B8880C(_4__this, data);
  }
  ((void (__fastcall *)(struct UITexture_o *, char *, Il2CppMethodPointer))v13->klass->vtable._27_set_mainTexture.method)(
    v13,
    _4__this,
    v13->klass->vtable._28_get_shader.methodPtr);
}