void __fastcall BattlePerformanceEnemyMst___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct BattlePerformanceEnemyMst_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct BattlePerformanceEnemyMst_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  BattlePerformanceEnemyMst_c *v30; // x8

  if ( (byte_4B19182 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceEnemyMst_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_4533/*"ChrVoice_{0}"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19221/*"enemyMstFace{0:d5}"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_6123/*"EnemyMasterFace/enemyMstFace{0:d5}"*/, v12, v13);
    byte_4B19182 = 1;
  }
  BattlePerformanceEnemyMst_TypeInfo->static_fields->MASTER_FACE_ASSET_NAME = (struct System_String_o *)StringLiteral_6123/*"EnemyMasterFace/enemyMstFace{0:d5}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattlePerformanceEnemyMst_TypeInfo->static_fields,
    StringLiteral_6123/*"EnemyMasterFace/enemyMstFace{0:d5}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_19221/*"enemyMstFace{0:d5}"*/;
  static_fields = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  static_fields->MASTER_FACE_TEXTURE_NAME = (struct System_String_o *)StringLiteral_19221/*"enemyMstFace{0:d5}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->MASTER_FACE_TEXTURE_NAME, v14, v16, v17, v18, v19, v20, v21);
  v22 = StringLiteral_4533/*"ChrVoice_{0}"*/;
  v23 = BattlePerformanceEnemyMst_TypeInfo->static_fields;
  v23->MASTER_VOICE_ASSET_NAME = (struct System_String_o *)StringLiteral_4533/*"ChrVoice_{0}"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->MASTER_VOICE_ASSET_NAME, v22, v24, v25, v26, v27, v28, v29);
  v30 = BattlePerformanceEnemyMst_TypeInfo;
  BattlePerformanceEnemyMst_TypeInfo->static_fields->DEFAULT_COMMAND_SPELL_ICON_SIZE = (struct UnityEngine_Vector2_o)vdup_n_s32(0x42B40000u).n64_u64[0];
  v30->static_fields->DEFAULT_COMMAND_SPELL_ICON_POSITION = (struct UnityEngine_Vector2_o)0x4184DA5142500000LL;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.data = indata;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.data, (int64_t)indata, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1917C & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_TypeInfo, *(_QWORD *)&mstFaceId, method);
    byte_4B1917C = 1;
  }
  v6 = sub_1BCAA2C(BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_TypeInfo, *(_QWORD *)&mstFaceId, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *battleUiAtlas; // x20
  UISprite_o *enemyMasterFrame; // x0
  __int64 v24; // x1
  struct BattleData_o *data; // x8
  struct BattleData_o *v26; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  int32_t OverwriteFrame; // w0
  __int64 v29; // x1
  int v30; // w20
  BattleDataDefine_c *v31; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  UISprite_o *v33; // x19
  Il2CppObject *v34; // x0
  int v35; // [xsp+4h] [xbp-2Ch] BYREF
  UIAtlas_o *atlas; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19178 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EnemyMstBattleMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_19820/*"frame_enemymaster_bg"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_19821/*"frame_enemymaster_bg_{0}"*/, v20, v21);
    byte_4B19178 = 1;
  }
  battleUiAtlas = (UnityEngine_Object_o *)this->fields.battleUiAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    UISprite__set_spriteName(enemyMasterFrame, (System_String_o *)StringLiteral_19820/*"frame_enemymaster_bg"*/, 0LL);
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  if ( !data->fields.enemyMasterInfo )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  enemyMasterFrame = (UISprite_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EnemyMstBattleMaster___);
  v26 = this->fields.data;
  if ( !v26
    || (enemyMasterInfo = v26->fields.enemyMasterInfo) == 0LL
    || !enemyMasterFrame
    || (enemyMasterFrame = (UISprite_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)enemyMasterFrame,
                                           enemyMasterInfo->fields.id,
                                           (const MethodInfo_31B2E40 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__GetEntity__)) == 0LL )
  {
LABEL_27:
    sub_1BCAA3C(enemyMasterFrame, v24);
  }
  OverwriteFrame = EnemyMstBattleEntity__GetOverwriteFrame((EnemyMstBattleEntity_o *)enemyMasterFrame, 0, 0LL);
  if ( OverwriteFrame )
  {
    v30 = OverwriteFrame;
    atlas = 0LL;
    v31 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v29);
      v31 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v31->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29);
    if ( AssetManager__TryGetUIAtlas(&atlas, ASSET_BATTLE_COMMON, (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/, 0LL) )
    {
      enemyMasterFrame = this->fields.enemyMasterFrame;
      if ( enemyMasterFrame )
      {
        UISprite__set_atlas(enemyMasterFrame, atlas, 0LL);
        v33 = this->fields.enemyMasterFrame;
        v35 = v30;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
        enemyMasterFrame = (UISprite_o *)System_String__Format((System_String_o *)StringLiteral_19821/*"frame_enemymaster_bg_{0}"*/, v34, 0LL);
        if ( v33 )
        {
          UISprite__set_spriteName(v33, (System_String_o *)enemyMasterFrame, 0LL);
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
    sub_1BCAA3C(data, status);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x19
  const MethodInfo *v22; // x2
  System_String_o *AssetName; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  AssetLoader_LoadEndDataHandler_o *v27; // x22

  if ( (byte_4B1917B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, *(_QWORD *)&nextMstFaceId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_BattlePerformanceEnemyMst___c__DisplayClass25_0__changeMasterFace_b__0__, v8, v9);
    sub_1BCA7E0(&BattlePerformanceEnemyMst___c__DisplayClass25_0_TypeInfo, v10, v11);
    byte_4B1917B = 1;
  }
  v12 = sub_1BCAA2C(BattlePerformanceEnemyMst___c__DisplayClass25_0_TypeInfo, *(_QWORD *)&nextMstFaceId, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_DWORD *)(v12 + 24) = nextMstFaceId,
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__),
        AssetName = BattlePerformanceEnemyMst__getAssetName(
                      (BattlePerformanceEnemyMst_o *)Instance,
                      *(_DWORD *)(v12 + 24),
                      v22),
        v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26),
        AssetLoader_LoadEndDataHandler___ctor(
          v27,
          (Il2CppObject *)v12,
          Method_BattlePerformanceEnemyMst___c__DisplayClass25_0__changeMasterFace_b__0__,
          0LL),
        !Instance) )
  {
    sub_1BCAA3C(v13, v14);
  }
  AssetManager__LoadAssetStorage((AssetManager_o *)Instance, AssetName, v27, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceEnemyMst__getAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  BattlePerformanceEnemyMst_c *v6; // x0
  System_String_o *MASTER_FACE_ASSET_NAME; // x20
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1917F & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id, method);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    byte_4B1917F = 1;
  }
  v6 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    v6 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_ASSET_NAME = v6->static_fields->MASTER_FACE_ASSET_NAME;
  v10 = id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format(MASTER_FACE_ASSET_NAME, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceEnemyMst__getTextureName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  BattlePerformanceEnemyMst_c *v6; // x0
  System_String_o *MASTER_FACE_TEXTURE_NAME; // x20
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19180 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id, method);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    byte_4B19180 = 1;
  }
  v6 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    v6 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_FACE_TEXTURE_NAME = v6->static_fields->MASTER_FACE_TEXTURE_NAME;
  v10 = id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format(MASTER_FACE_TEXTURE_NAME, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattlePerformanceEnemyMst__getVoiceAssetName(
        BattlePerformanceEnemyMst_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  BattlePerformanceEnemyMst_c *v6; // x0
  System_String_o *MASTER_VOICE_ASSET_NAME; // x20
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19181 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id, method);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    byte_4B19181 = 1;
  }
  v6 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo, *(_QWORD *)&id);
    v6 = BattlePerformanceEnemyMst_TypeInfo;
  }
  MASTER_VOICE_ASSET_NAME = v6->static_fields->MASTER_VOICE_ASSET_NAME;
  v10 = id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format(MASTER_VOICE_ASSET_NAME, v8, 0LL);
}


void __fastcall BattlePerformanceEnemyMst__loadData(BattlePerformanceEnemyMst_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceEnemyMst_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct BattleData_o *data; // x8
  const MethodInfo *v9; // x2
  struct BattleData_o *v10; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  System_String_o *VoiceAssetName; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_String_o *loadVoiceAsset; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x21
  __int64 v24; // x1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1

  v3 = this;
  if ( (byte_4B19177 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattlePerformanceEnemyMst__loadData_b__20_0__, v4, v5);
    this = (BattlePerformanceEnemyMst_o *)sub_1BCA7E0(&SoundManager_TypeInfo, v6, v7);
    byte_4B19177 = 1;
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_12;
  if ( !data->fields.enemyMasterInfo )
  {
    this = (BattlePerformanceEnemyMst_o *)v3->fields.masterRoot;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      BattlePerformanceEnemyMst__releaseMasterFace(v3, v26);
      BattlePerformanceEnemyMst__releaseMasterVoice(v3, v27);
      return;
    }
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  v3->fields.loadStat = 1;
  BattlePerformanceEnemyMst__releaseMasterVoice(v3, method);
  v10 = v3->fields.data;
  if ( !v10 )
    goto LABEL_12;
  enemyMasterInfo = v10->fields.enemyMasterInfo;
  if ( !enemyMasterInfo )
    goto LABEL_12;
  VoiceAssetName = BattlePerformanceEnemyMst__getVoiceAssetName(this, enemyMasterInfo->fields.enemyMasterId, v9);
  v3->fields.loadVoiceAsset = VoiceAssetName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields.loadVoiceAsset,
    (int64_t)VoiceAssetName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  loadVoiceAsset = v3->fields.loadVoiceAsset;
  v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)v3, Method_BattlePerformanceEnemyMst__loadData_b__20_0__, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v24);
  SoundManager__loadAudioAssetStorage(loadVoiceAsset, v23, 1, 0LL);
  BattlePerformanceEnemyMst__updateCommandSpellIcon(v3, v25);
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

  if ( (byte_4B1917A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mstFaceId, method);
    byte_4B1917A = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&mstFaceId);
  if ( !UnityEngine_Object__op_Equality(faceText, 0LL, 0LL) )
  {
    if ( this->fields.mstFaceAssets )
      BattlePerformanceEnemyMst__releaseMasterFace(this, v6);
    AssetCoroutine = BattlePerformanceEnemyMst__LoadAssetCoroutine(this, mstFaceId, v7);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, AssetCoroutine, 0LL);
  }
}


void __fastcall BattlePerformanceEnemyMst__releaseMasterFace(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *faceText; // x20
  __int64 v7; // x1
  struct UITexture_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  struct AssetData_o *v15; // x8
  PartyOrganizationUtility_o *p_mstFaceAssets; // x19
  struct AssetData_o *mstFaceAssets; // t1
  System_String_o *name; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B1917D & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1917D = 1;
  }
  faceText = (UnityEngine_Object_o *)this->fields.faceText;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(faceText, 0LL, 0LL) )
  {
    v8 = this->fields.faceText;
    if ( !v8 )
      goto LABEL_26;
    v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v8->klass->vtable._24_get_material.method)(
                                    v8,
                                    v8->klass->vtable._25_set_material.methodPtr);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
      v8 = this->fields.faceText;
      if ( !v8 )
        goto LABEL_26;
      v12 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v8->klass->vtable._24_get_material.method)(
                                      v8,
                                      v8->klass->vtable._25_set_material.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__Destroy_70154244(v12, 0LL);
      v8 = this->fields.faceText;
      if ( !v8 )
        goto LABEL_26;
      ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._25_set_material.method)(
        v8,
        0LL,
        v8->klass->vtable._26_get_mainTexture.methodPtr);
    }
    v8 = this->fields.faceText;
    if ( v8 )
    {
      v14 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v8->klass->vtable._26_get_mainTexture.method)(
                                      v8,
                                      v8->klass->vtable._27_set_mainTexture.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( !UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
        goto LABEL_21;
      v8 = this->fields.faceText;
      if ( v8 )
      {
        ((void (__fastcall *)(struct UITexture_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._27_set_mainTexture.method)(
          v8,
          0LL,
          v8->klass->vtable._28_get_shader.methodPtr);
LABEL_21:
        mstFaceAssets = this->fields.mstFaceAssets;
        p_mstFaceAssets = (PartyOrganizationUtility_o *)&this->fields.mstFaceAssets;
        v15 = mstFaceAssets;
        if ( mstFaceAssets )
        {
          name = v15->fields.name;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
          AssetManager__releaseAssetStorage(name, 0LL);
          p_mstFaceAssets->klass = 0LL;
          sub_1BCA784(p_mstFaceAssets, 0LL, v19, v20, v21, v22, v23, v24);
        }
        return;
      }
    }
LABEL_26:
    sub_1BCAA3C(v8, v7);
  }
}


void __fastcall BattlePerformanceEnemyMst__releaseMasterVoice(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_loadVoiceAsset; // x19
  System_String_o *v5; // x20
  struct System_String_o *loadVoiceAsset; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1917E & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B1917E = 1;
  }
  loadVoiceAsset = this->fields.loadVoiceAsset;
  p_loadVoiceAsset = (PartyOrganizationUtility_o *)&this->fields.loadVoiceAsset;
  v5 = loadVoiceAsset;
  if ( loadVoiceAsset )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    SoundManager__releaseAudioAssetStorage(v5, 0LL);
    p_loadVoiceAsset->klass = 0LL;
    sub_1BCA784(p_loadVoiceAsset, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceEnemyMst__updateCommandSpellIcon(
        BattlePerformanceEnemyMst_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattlePerformanceEnemyMst_o *v3; // x19
  struct BattleData_o *data; // x8
  struct EnemyMstBattleEntity_o *enemyMasterInfo; // x8
  CommandSpellIconComponent_o *commandSpellIcon; // x20
  StageEntity_o *v7; // x20
  System_Int32_array *EnemyMasterCommandSpellIconSize; // x21
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

  v3 = this;
  if ( (byte_4B19179 & 1) == 0 )
  {
    this = (BattlePerformanceEnemyMst_o *)sub_1BCA7E0(&BattlePerformanceEnemyMst_TypeInfo, method, v2);
    byte_4B19179 = 1;
  }
  data = v3->fields.data;
  if ( !data )
    goto LABEL_27;
  enemyMasterInfo = data->fields.enemyMasterInfo;
  if ( !enemyMasterInfo )
    goto LABEL_27;
  this = (BattlePerformanceEnemyMst_o *)v3->fields.commandSpellIcon;
  if ( !this
    || (CommandSpellIconComponent__SetImageType(
          (CommandSpellIconComponent_o *)this,
          enemyMasterInfo->fields.commandSpellIconId,
          0LL),
        (this = (BattlePerformanceEnemyMst_o *)v3->fields.data) == 0LL)
    || (commandSpellIcon = v3->fields.commandSpellIcon,
        this = (BattlePerformanceEnemyMst_o *)BattleData__getEnemyMasterCommandSpellCnt((BattleData_o *)this, 0LL),
        !commandSpellIcon)
    || (CommandSpellIconComponent__SetRemain(commandSpellIcon, (int32_t)this, 0LL),
        (this = (BattlePerformanceEnemyMst_o *)v3->fields.data) == 0LL)
    || (this = (BattlePerformanceEnemyMst_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL)) == 0LL )
  {
LABEL_27:
    sub_1BCAA3C(this, method);
  }
  v7 = (StageEntity_o *)this;
  EnemyMasterCommandSpellIconSize = StageEntity__GetEnemyMasterCommandSpellIconSize((StageEntity_o *)this, 0LL);
  this = (BattlePerformanceEnemyMst_o *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)EnemyMasterCommandSpellIconSize,
                                          0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = BattlePerformanceEnemyMst_TypeInfo;
    if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo, method);
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
  this = (BattlePerformanceEnemyMst_o *)v3->fields.commandSpellIcon;
  if ( !this )
    goto LABEL_27;
  CommandSpellIconComponent__SetSize((CommandSpellIconComponent_o *)this, *(UnityEngine_Vector2_o *)&x, 0LL);
  EnemyMasterCommandSpellIconPosition = StageEntity__GetEnemyMasterCommandSpellIconPosition(v7, 0LL);
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
    sub_1BCAA44(this, method);
  }
  v14 = BattlePerformanceEnemyMst_TypeInfo;
  if ( !BattlePerformanceEnemyMst_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceEnemyMst_TypeInfo, method);
    v14 = BattlePerformanceEnemyMst_TypeInfo;
  }
  v15 = v14->static_fields;
  p_DEFAULT_COMMAND_SPELL_ICON_POSITION = (float *)&v15->DEFAULT_COMMAND_SPELL_ICON_POSITION;
  p_y = &v15->DEFAULT_COMMAND_SPELL_ICON_POSITION.fields.y;
LABEL_25:
  this = (BattlePerformanceEnemyMst_o *)v3->fields.commandSpellIcon;
  if ( !this )
    goto LABEL_27;
  v18 = *p_DEFAULT_COMMAND_SPELL_ICON_POSITION;
  v19 = *p_y;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v21.fields.x = v18;
  v21.fields.y = v19;
  GameObjectExtensions__SetLocalPosition_34330940(gameObject, v21, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t _1__state; // w8
  Il2CppObject *v12; // x21
  struct BattlePerformanceEnemyMst___c__DisplayClass26_0_o **p__8__1; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  char *_8__1; // x0
  struct BattlePerformanceEnemyMst_o *_4__this; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattlePerformanceEnemyMst_o *v37; // x23
  const MethodInfo *v38; // x2
  struct BattlePerformanceEnemyMst___c__DisplayClass26_0_o *v39; // x8
  AssetManager_o *v40; // x20
  System_String_o *AssetName; // x0
  Il2CppObject *v42; // x22
  System_String_o *v43; // x19
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  AssetLoader_LoadEndDataHandler_o *v47; // x21

  if ( (byte_4B19185 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_BattlePerformanceEnemyMst___c__DisplayClass26_0__LoadAssetCoroutine_b__0__, v7, v8);
    sub_1BCA7E0(&BattlePerformanceEnemyMst___c__DisplayClass26_0_TypeInfo, v9, v10);
    byte_4B19185 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v12 = (Il2CppObject *)sub_1BCAA2C(BattlePerformanceEnemyMst___c__DisplayClass26_0_TypeInfo, method, v2, v3);
      System_Object___ctor(v12, 0LL);
      this->fields.__8__1 = (struct BattlePerformanceEnemyMst___c__DisplayClass26_0_o *)v12;
      p__8__1 = &this->fields.__8__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__8__1, (int64_t)v12, v14, v15, v16, v17, v18, v19);
      _8__1 = (char *)this->fields.__8__1;
      if ( _8__1 )
      {
        _4__this = this->fields.__4__this;
        *((_QWORD *)_8__1 + 2) = _4__this;
        sub_1BCA784((PartyOrganizationUtility_o *)(_8__1 + 16), (int64_t)_4__this, v21, v22, v23, v24, v25, v26);
        if ( *p__8__1 )
        {
          (*p__8__1)->fields.mstFaceId = this->fields.mstFaceId;
          this->fields.__2__current = 0LL;
          p__2__current = &this->fields.__2__current;
          sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, 0LL, v29, v30, v31, v32, v33, v34);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
      }
LABEL_14:
      sub_1BCAA3C(_8__1, v20);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  v37 = this->fields.__4__this;
  _8__1 = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v39 = this->fields.__8__1;
  if ( !v39 )
    goto LABEL_14;
  if ( !v37 )
    goto LABEL_14;
  v40 = (AssetManager_o *)_8__1;
  AssetName = BattlePerformanceEnemyMst__getAssetName((BattlePerformanceEnemyMst_o *)_8__1, v39->fields.mstFaceId, v38);
  v42 = (Il2CppObject *)this->fields.__8__1;
  v43 = AssetName;
  v47 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v44, v45, v46);
  AssetLoader_LoadEndDataHandler___ctor(
    v47,
    v42,
    Method_BattlePerformanceEnemyMst___c__DisplayClass26_0__LoadAssetCoroutine_b__0__,
    0LL);
  if ( !v40 )
    goto LABEL_14;
  if ( AssetManager__LoadAssetStorage(v40, v43, v47, 1, 0LL) )
    return 0;
  result = 0;
  v37->fields.loadStat = 0;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattlePerformanceEnemyMst__LoadAssetCoroutine_d__26_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v6; // x2
  struct BattlePerformanceEnemyMst_o *_4__this; // x8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct BattlePerformanceEnemyMst_o *v14; // x8
  System_String_o *m_CancellationTokenSource; // x21

  v3 = data;
  v4 = this;
  if ( (byte_4B19183 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, data, method);
    this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    byte_4B19183 = 1;
  }
  if ( !v4->fields.__4__this )
    goto LABEL_13;
  this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)BattlePerformanceEnemyMst__getTextureName(
                                                                (BattlePerformanceEnemyMst_o *)this,
                                                                v4->fields.nextMstFaceId,
                                                                method);
  if ( !v3 )
    goto LABEL_13;
  this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)AssetData__GetObject_object__49237568(
                                                                v3,
                                                                (System_String_o *)this,
                                                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
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
  v14 = this[2].fields.__4__this;
  if ( v14 )
  {
    m_CancellationTokenSource = (System_String_o *)v14->fields.m_CancellationTokenSource;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data);
    AssetManager__releaseAssetStorage(m_CancellationTokenSource, 0LL);
    this = (BattlePerformanceEnemyMst___c__DisplayClass25_0_o *)v4->fields.__4__this;
    if ( !this )
LABEL_13:
      sub_1BCAA3C(this, data);
  }
  this[2].fields.__4__this = (struct BattlePerformanceEnemyMst_o *)v3;
  sub_1BCA784((PartyOrganizationUtility_o *)&this[2].fields, (int64_t)v3, v8, v9, v10, v11, v12, v13);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  char *_4__this; // x0
  struct BattlePerformanceEnemyMst_o *v15; // x8
  struct UITexture_o *faceText; // x20
  UnityEngine_Shader_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  UnityEngine_Material_o *v21; // x21
  const MethodInfo *v22; // x2
  struct BattlePerformanceEnemyMst_o *v23; // x8
  struct UITexture_o *v24; // x20
  AssetData_o *mstFaceAssets; // x21

  if ( (byte_4B19184 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, data, method);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v12, v13);
    byte_4B19184 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  *((_QWORD *)_4__this + 10) = data;
  sub_1BCA784((PartyOrganizationUtility_o *)(_4__this + 80), (int64_t)data, (int64_t)method, v3, v4, v5, v6, v7);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_10;
  v15->fields.loadStat = 0;
  faceText = v15->fields.faceText;
  v17 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5048/*"Custom/SpriteWithMask"*/, 0LL);
  v21 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v18, v19, v20);
  UnityEngine_Material___ctor(v21, v17, 0LL);
  if ( !faceText
    || (_4__this = (char *)((__int64 (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))faceText->klass->vtable._25_set_material.method)(
                             faceText,
                             v21,
                             faceText->klass->vtable._26_get_mainTexture.methodPtr),
        (v23 = this->fields.__4__this) == 0LL)
    || (v24 = v23->fields.faceText,
        mstFaceAssets = v23->fields.mstFaceAssets,
        _4__this = (char *)BattlePerformanceEnemyMst__getTextureName(
                             (BattlePerformanceEnemyMst_o *)_4__this,
                             this->fields.mstFaceId,
                             v22),
        !mstFaceAssets)
    || (_4__this = (char *)AssetData__GetObject_object__49237568(
                             mstFaceAssets,
                             (System_String_o *)_4__this,
                             (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720),
        !v24) )
  {
LABEL_10:
    sub_1BCAA3C(_4__this, data);
  }
  ((void (__fastcall *)(struct UITexture_o *, char *, Il2CppMethodPointer))v24->klass->vtable._27_set_mainTexture.method)(
    v24,
    _4__this,
    v24->klass->vtable._28_get_shader.methodPtr);
}