void __fastcall BattlePerformanceEnemyMst___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct BattlePerformanceEnemyMst_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct BattlePerformanceEnemyMst_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E9567 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceEnemyMst_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_4031/*"ChrVoice_{0}"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18596/*"enemyMstFace{0:d5}"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6075/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v14, v15, v16);
    byte_42E9567 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6075/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6075/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_18596/*"enemyMstFace{0:d5}"*/;
  v19->MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_18596/*"enemyMstFace{0:d5}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->MASTER_FACE_TEXTURE_NAME, v20, v21, v22, v23, v24, v25, v26);
  v27 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_4031/*"ChrVoice_{0}"*/;
  v27->MASTER_VOICE_ASSET_NAME = (struct System_String_o *)StringLiteral_4031/*"ChrVoice_{0}"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->MASTER_VOICE_ASSET_NAME, v28, v29, v30, v31, v32, v33, v34);
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
  sub_B5D560(
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
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9561 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_TypeInfo, mstFaceId, (_DWORD)method, v3);
    byte_42E9561 = 1;
  }
  v6 = sub_B5D694(BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_TypeInfo);
  BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24___ctor(
    (BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 40) = mstFaceId;
  return (System_Collections_IEnumerator_o *)v6;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UnityEngine_Object_o *battleUiAtlas; // x20
  UISprite_o *enemyMasterFrame; // x0
  __int64 v34; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v36; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  int32_t OverwriteFrame; // w0
  int v39; // w20
  BattleDataDefine_c *v40; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v42; // x19
  Il2CppObject *v43; // x0
  int v44; // [xsp+Ch] [xbp-24h] BYREF
  UIAtlas_o *atlas; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E955E & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_EnemyMstBattleMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_19119/*"frame_enemymaster_bg"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_2825/*"BattleAssetUIAtlas"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_19120/*"frame_enemymaster_bg_{0}"*/, v29, v30, v31);
    byte_42E955E = 1;
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
    UISprite__set_spriteName(enemyMasterFrame, (System_String_o *)StringLiteral_19119/*"frame_enemymaster_bg"*/, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_31;
  if ( !data->fields.enemyMasterInfo )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  enemyMasterFrame = (UISprite_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EnemyMstBattleMaster___);
  v36 = this->fields.data;
  if ( !v36
    || (enemyMasterInfo = v36->fields.enemyMasterInfo) == 0LL
    || !enemyMasterFrame
    || (enemyMasterFrame = (UISprite_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)enemyMasterFrame,
                                           enemyMasterInfo->fields.id,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__)) == 0LL )
  {
LABEL_31:
    sub_B5D69C(enemyMasterFrame, v34);
  }
  OverwriteFrame = EnemyMstBattleEntity__GetOverwriteFrame((EnemyMstBattleEntity_o *)enemyMasterFrame, 0, 0LL);
  if ( OverwriteFrame )
  {
    v39 = OverwriteFrame;
    atlas = 0LL;
    v40 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v40 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v40->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_2825/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      enemyMasterFrame = this->fields.enemyMasterFrame;
      if ( enemyMasterFrame )
      {
        UISprite__set_atlas(enemyMasterFrame, atlas, 0LL);
        v42 = this->fields.enemyMasterFrame;
        v44 = v39;
        v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        enemyMasterFrame = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_19120/*"frame_enemymaster_bg_{0}"*/, v43, 0LL);
        if ( v42 )
        {
          UISprite__set_spriteName(v42, (System_String_o *)enemyMasterFrame, 0LL);
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
    sub_B5D69C(data, status);
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
    sub_B5D69C(0LL, method);
  CurrentEnemyMasterFaceId = BattleData__GetCurrentEnemyMasterFaceId(data, 0LL);
  BattlePerformanceEnemyMst__loadMasterFace(this, CurrentEnemyMasterFaceId, v5);
}


void __fastcall BattlePerformanceEnemyMst__changeMasterFace(
        BattlePerformanceEnemyMst_o *this,
        int32_t nextMstFaceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WebViewManager_o *Instance; // x19
  const MethodInfo *v25; // x2
  System_String_o *AssetName; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x22

  if ( (byte_42E9560 & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, nextMstFaceId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_BattlePerformanceEnemyMst___c__DisplayClass23_0__changeMasterFace_b__0__, v9, v10, v11);
    sub_B5D5C4(&BattlePerformanceEnemyMst___c__DisplayClass23_0_TypeInfo, v12, v13, v14);
    byte_42E9560 = 1;
  }
  v15 = sub_B5D694(BattlePerformanceEnemyMst___c__DisplayClass23_0_TypeInfo);
  BattlePerformanceEnemyMst___c__DisplayClass23_0___ctor((BattlePerformanceEnemyMst___c__DisplayClass23_0_o *)v15, 0LL);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = this,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v15 + 16),
          (System_Int32_array **)this,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23),
        *(_DWORD *)(v15 + 24) = nextMstFaceId,
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__),
        AssetName = BattlePerformanceEnemyMst__getAssetName(
                      (BattlePerformanceEnemyMst_o *)Instance,
                      *(_DWORD *)(v15 + 24),
                      v25),
        v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo),
        AssetLoader_LoadEndDataHandler___ctor(
          v27,
          (Il2CppObject *)v15,
          Method_BattlePerformanceEnemyMst___c__DisplayClass23_0__changeMasterFace_b__0__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(v16, v17);
  }
  AssetManager__LoadAssetStorage((AssetManager_o *)Instance, AssetName, v27, 1, 0LL);
}


System_String_o *__fastcall BattlePerformanceEnemyMst__getAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattlePerformanceEnemyMst_c *v8; // x0
  System_String_o *MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9564 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceEnemyMst_TypeInfo, id, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    byte_42E9564 = 1;
  }
  v8 = BattlePerformanceEnemyMst_TypeInfo;
  if ( (BYTE3(BattlePerformanceEnemyMst_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v8 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_ASSET_NAME = v8->static_fields->MASTER_FACE_ASSET_NAME;
  v12 = id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format(MASTER_FACE_ASSET_NAME, v10, 0LL);
}


System_String_o *__fastcall BattlePerformanceEnemyMst__getTextureName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattlePerformanceEnemyMst_c *v8; // x0
  System_String_o *MASTER_FACE_TEXTURE_NAME; // x20
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9565 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceEnemyMst_TypeInfo, id, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    byte_42E9565 = 1;
  }
  v8 = BattlePerformanceEnemyMst_TypeInfo;
  if ( (BYTE3(BattlePerformanceEnemyMst_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v8 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_TEXTURE_NAME = v8->static_fields->MASTER_FACE_TEXTURE_NAME;
  v12 = id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format(MASTER_FACE_TEXTURE_NAME, v10, 0LL);
}


System_String_o *__fastcall BattlePerformanceEnemyMst__getVoiceAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattlePerformanceEnemyMst_c *v8; // x0
  System_String_o *MASTER_VOICE_ASSET_NAME; // x20
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9566 & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformanceEnemyMst_TypeInfo, id, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    byte_42E9566 = 1;
  }
  v8 = BattlePerformanceEnemyMst_TypeInfo;
  if ( (BYTE3(BattlePerformanceEnemyMst_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo);
    v8 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_VOICE_ASSET_NAME = v8->static_fields->MASTER_VOICE_ASSET_NAME;
  v12 = id;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format(MASTER_VOICE_ASSET_NAME, v10, 0LL);
}


void __fastcall BattlePerformanceEnemyMst__loadData(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattlePerformanceEnemyMst_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleData_o *data; // x8
  const MethodInfo *v12; // x2
  struct BattleData_o *v13; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  System_Int32_array **VoiceAssetName; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_o *loadVoiceAsset; // x20
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1

  v4 = this;
  if ( (byte_42E955D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattlePerformanceEnemyMst__loadData_b__18_0__, v5, v6, v7);
    this = (BattlePerformanceEnemyMst_o *)sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E955D = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_13;
  if ( !data->fields.enemyMasterInfo )
  {
    this = (BattlePerformanceEnemyMst_o *)v4->fields.masterRoot;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      BattlePerformanceEnemyMst__releaseMasterFace(v4, v25);
      BattlePerformanceEnemyMst__releaseMasterVoice(v4, v26);
      return;
    }
LABEL_13:
    sub_B5D69C(this, method);
  }
  v4->fields.loadStat = 1;
  BattlePerformanceEnemyMst__releaseMasterVoice(v4, method);
  v13 = v4->fields.data;
  if ( !v13 )
    goto LABEL_13;
  enemyMasterInfo = v13->fields.enemyMasterInfo;
  if ( !enemyMasterInfo )
    goto LABEL_13;
  VoiceAssetName = (System_Int32_array **)BattlePerformanceEnemyMst__getVoiceAssetName(
                                            this,
                                            enemyMasterInfo->fields.enemyMasterId,
                                            v12);
  v4->fields.loadVoiceAsset = (struct System_String_o *)VoiceAssetName;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.loadVoiceAsset, VoiceAssetName, v16, v17, v18, v19, v20, v21);
  loadVoiceAsset = v4->fields.loadVoiceAsset;
  v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v4, Method_BattlePerformanceEnemyMst__loadData_b__18_0__, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(loadVoiceAsset, v23, 1, 0LL);
  BattlePerformanceEnemyMst__updateCommandSpellIcon(v4, v24);
}


void __fastcall BattlePerformanceEnemyMst__loadMasterFace(
        BattlePerformanceEnemyMst_o *this,
        int32_t mstFaceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *faceText; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_IEnumerator_o *AssetCoroutine; // x1

  if ( (byte_42E955F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, mstFaceId, (_DWORD)method, v3);
    byte_42E955F = 1;
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
      BattlePerformanceEnemyMst__releaseMasterFace(this, v7);
    AssetCoroutine = BattlePerformanceEnemyMst__LoadAssetCoroutine(this, mstFaceId, v8);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, AssetCoroutine, 0LL);
  }
}


void __fastcall BattlePerformanceEnemyMst__releaseMasterFace(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *faceText; // x20
  __int64 v9; // x1
  struct UITexture_o *v10; // x0
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *v13; // x20
  struct AssetData_o *v14; // x8
  BattleServantConfConponent_o *p_mstFaceAssets; // x19
  struct AssetData_o *mstFaceAssets; // t1
  System_String_o *name; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E9562 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E9562 = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(faceText, 0LL, 0LL) )
  {
    v10 = this->fields.faceText;
    if ( !v10 )
      goto LABEL_31;
    v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v10->klass->vtable._24_get_material.method)(
                                    v10,
                                    v10->klass->vtable._25_set_material.methodPtr);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
    {
      v10 = this->fields.faceText;
      if ( !v10 )
        goto LABEL_31;
      v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v10->klass->vtable._24_get_material.method)(
                                      v10,
                                      v10->klass->vtable._25_set_material.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v12, 0LL);
      v10 = this->fields.faceText;
      if ( !v10 )
        goto LABEL_31;
      ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._25_set_material.method)(
        v10,
        0LL,
        v10->klass->vtable._26_get_mainTexture.methodPtr);
    }
    v10 = this->fields.faceText;
    if ( v10 )
    {
      v13 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v10->klass->vtable._26_get_mainTexture.method)(
                                      v10,
                                      v10->klass->vtable._27_set_mainTexture.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
        goto LABEL_25;
      v10 = this->fields.faceText;
      if ( v10 )
      {
        ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._27_set_mainTexture.method)(
          v10,
          0LL,
          v10->klass->vtable._28_get_shader.methodPtr);
LABEL_25:
        mstFaceAssets = this->fields.mstFaceAssets;
        p_mstFaceAssets = (BattleServantConfConponent_o *)&this->fields.mstFaceAssets;
        v14 = mstFaceAssets;
        if ( mstFaceAssets )
        {
          name = v14->fields.name;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetManager__releaseAssetStorage(name, 0LL);
          p_mstFaceAssets->klass = 0LL;
          sub_B5D560(p_mstFaceAssets, 0LL, v18, v19, v20, v21, v22, v23);
        }
        return;
      }
    }
LABEL_31:
    sub_B5D69C(v10, v9);
  }
}


void __fastcall BattlePerformanceEnemyMst__releaseMasterVoice(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_loadVoiceAsset; // x19
  System_String_o *v6; // x20
  struct System_String_o *loadVoiceAsset; // t1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9563 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9563 = 1;
  }
  loadVoiceAsset = this->fields.loadVoiceAsset;
  p_loadVoiceAsset = (BattleServantConfConponent_o *)&this->fields.loadVoiceAsset;
  v6 = loadVoiceAsset;
  if ( loadVoiceAsset )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v6, 0LL);
    p_loadVoiceAsset->klass = 0LL;
    sub_B5D560(p_loadVoiceAsset, 0LL, v8, v9, v10, v11, v12, v13);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  Il2CppObject *v15; // x21
  struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o **p__8__1; // x20
  __int64 v17; // x1
  AssetManager_o *_8__1; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceEnemyMst_o *_4__this; // x20
  struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *v22; // x8
  AssetManager_o *v23; // x21
  System_String_o *AssetName; // x0
  Il2CppObject *v25; // x23
  System_String_o *v26; // x19
  AssetLoader_LoadEndDataHandler_o *v27; // x22

  if ( (byte_42E6096 & 1) == 0 )
  {
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_BattlePerformanceEnemyMst___c__DisplayClass24_0__LoadAssetCoroutine_b__0__, v8, v9, v10);
    sub_B5D5C4(&BattlePerformanceEnemyMst___c__DisplayClass24_0_TypeInfo, v11, v12, v13);
    byte_42E6096 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v15 = (Il2CppObject *)sub_B5D694(BattlePerformanceEnemyMst___c__DisplayClass24_0_TypeInfo);
      System_Object___ctor(v15, 0LL);
      p__8__1 = &this->fields.__8__1;
      this->fields.__8__1 = (struct BattlePerformanceEnemyMst___c__DisplayClass24_0_o *)v15;
      sub_B5D560(&this->fields.__8__1);
      _8__1 = (AssetManager_o *)this->fields.__8__1;
      if ( _8__1 )
      {
        *(_QWORD *)&_8__1->fields.m_CachedPtr = this->fields.__4__this;
        sub_B5D560(&_8__1->fields);
        if ( *p__8__1 )
        {
          (*p__8__1)->fields.mstFaceId = this->fields.mstFaceId;
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_B5D560(p__2__current);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_14:
      sub_B5D69C(_8__1, v17);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  _8__1 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v22 = this->fields.__8__1;
  if ( !v22 )
    goto LABEL_14;
  if ( !_4__this )
    goto LABEL_14;
  v23 = _8__1;
  AssetName = BattlePerformanceEnemyMst__getAssetName(_4__this, v22->fields.mstFaceId, 0LL);
  v25 = (Il2CppObject *)this->fields.__8__1;
  v26 = AssetName;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    v25,
    Method_BattlePerformanceEnemyMst___c__DisplayClass24_0__LoadAssetCoroutine_b__0__,
    0LL);
  if ( !v23 )
    goto LABEL_14;
  if ( AssetManager__LoadAssetStorage(v23, v26, v27, 1, 0LL) )
    return 0;
  result = 0;
  _4__this->fields.loadStat = 0;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattlePerformanceEnemyMst__LoadAssetCoroutine_d__24_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  __int64 v3; // x3
  AssetData_o *v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattlePerformanceEnemyMst_o *_4__this; // x0
  struct BattlePerformanceEnemyMst_o *v10; // x8
  struct AssetData_o *mstFaceAssets; // x8
  System_String_o *name; // x21

  v4 = data;
  if ( (byte_42E6094 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    byte_42E6094 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (BattlePerformanceEnemyMst_o *)BattlePerformanceEnemyMst__getTextureName(
                                              _4__this,
                                              this->fields.nextMstFaceId,
                                              0LL);
  if ( !v4 )
    goto LABEL_14;
  _4__this = (BattlePerformanceEnemyMst_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                              v4,
                                              (System_String_o *)_4__this,
                                              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_14;
  data = (AssetData_o *)_4__this;
  _4__this = (BattlePerformanceEnemyMst_o *)v10->fields.faceText;
  if ( !_4__this )
    goto LABEL_14;
  ((void (__fastcall *)(BattlePerformanceEnemyMst_o *, AssetData_o *, const char *))_4__this->klass[2]._1.gc_desc)(
    _4__this,
    data,
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
      sub_B5D69C(_4__this, data);
  }
  _4__this->fields.mstFaceAssets = v4;
  sub_B5D560(&_4__this->fields.mstFaceAssets);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BattlePerformanceEnemyMst_o *_4__this; // x0
  struct BattlePerformanceEnemyMst_o *v13; // x8
  struct BattlePerformanceEnemyMst_o *v14; // x8
  struct UITexture_o *faceText; // x20
  UnityEngine_Shader_o *v16; // x22
  UnityEngine_Material_o *v17; // x21
  struct UITexture_o *v18; // x20
  AssetData_o *mstFaceAssets; // x21

  if ( (byte_42E6095 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v9, v10, v11);
    byte_42E6095 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.mstFaceAssets = data;
  sub_B5D560(&_4__this->fields.mstFaceAssets);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_11;
  v13->fields.loadStat = 0;
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_11;
  faceText = v14->fields.faceText;
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
  v17 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v17, v16, 0LL);
  if ( !faceText
    || (((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))faceText->klass->vtable._25_set_material.method)(
          faceText,
          v17,
          faceText->klass->vtable._26_get_mainTexture.methodPtr),
        (_4__this = this->fields.__4__this) == 0LL)
    || (v18 = _4__this->fields.faceText,
        mstFaceAssets = _4__this->fields.mstFaceAssets,
        _4__this = (BattlePerformanceEnemyMst_o *)BattlePerformanceEnemyMst__getTextureName(
                                                    _4__this,
                                                    this->fields.mstFaceId,
                                                    0LL),
        !mstFaceAssets)
    || (_4__this = (BattlePerformanceEnemyMst_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                    mstFaceAssets,
                                                    (System_String_o *)_4__this,
                                                    (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528),
        !v18) )
  {
LABEL_11:
    sub_B5D69C(_4__this, data);
  }
  ((void (__fastcall *)(struct UITexture_o *, BattlePerformanceEnemyMst_o *, Il2CppMethodPointer))v18->klass->vtable._27_set_mainTexture.method)(
    v18,
    _4__this,
    v18->klass->vtable._28_get_shader.methodPtr);
}