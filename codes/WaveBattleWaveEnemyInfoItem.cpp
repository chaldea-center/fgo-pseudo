void __fastcall WaveBattleWaveEnemyInfoItem___cctor(const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int64_t v18; // x1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  WaveBattleWaveEnemyInfoItem_c *v42; // x8
  int64_t v43; // x1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4B122EE & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleWaveEnemyInfoItem_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19224/*"enemy_icon_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_15295/*"Unlit/Transparent Colored"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_6127/*"Enemys/Icon/"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/, v16, v17);
    byte_4B122EE = 1;
  }
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields,
    StringLiteral_15296/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v18 = StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5049/*"Custom/SpriteWithMask_Choco"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->CHOCO_SHADER_SP, v18, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_6127/*"Enemys/Icon/"*/;
  v27 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v27->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6127/*"Enemys/Icon/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->ENEMY_ICON_TEXTURE_PATH, v26, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_19224/*"enemy_icon_"*/;
  v35 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v35->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19224/*"enemy_icon_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->ENEMY_ICON_TEXTURE_PREFIX, v34, v36, v37, v38, v39, v40, v41);
  v42 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BD1E40;
  v43 = StringLiteral_15295/*"Unlit/Transparent Colored"*/;
  v44 = v42->static_fields;
  v44->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15295/*"Unlit/Transparent Colored"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v44->DEFAULT_SHADER, v43, v45, v46, v47, v48, v49, v50);
}


void __fastcall WaveBattleWaveEnemyInfoItem___ctor(WaveBattleWaveEnemyInfoItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem__Awake(WaveBattleWaveEnemyInfoItem_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  CommonUI_o *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v37; // x0
  struct System_String_o *v38; // x0
  struct System_String_o **p_enemyIconName; // x19
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_o *v46; // x19
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  AssetLoader_LoadEndDataHandler_o *v50; // x20
  __int64 v51; // x1
  int32_t v52; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B122ED & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, viewEnemyEnt, callback);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__, v13, v14);
    sub_1BCA7E0(&WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&WaveBattleWaveEnemyInfoItem_TypeInfo, v17, v18);
    byte_4B122ED = 1;
  }
  v19 = sub_1BCAA2C(WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo, viewEnemyEnt, callback, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_19;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)callback, v28, v29, v30, v31, v32, v33);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( CommonUI__IsLoadMode(Instance, 0, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, v34);
  Instance = (CommonUI_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, v21);
  if ( !viewEnemyEnt )
LABEL_19:
    sub_1BCAA3C(Instance, v21);
  iconId = viewEnemyEnt->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v52 = iconId;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v38 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v37, 0LL);
  this->fields.enemyIconName = v38;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1BCA784((PartyOrganizationUtility_o *)p_enemyIconName, (int64_t)v38, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_62401220(
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v50 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v47, v48, v49);
  AssetLoader_LoadEndDataHandler___ctor(
    v50,
    (Il2CppObject *)v19,
    Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v51);
  if ( !AssetManager__loadAssetStorage(v46, v50, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__IsLoadMode(Instance, 1, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        return;
      }
    }
    goto LABEL_19;
  }
}


// attributes: thunk
void __fastcall WaveBattleWaveEnemyInfoItem__OnDestroy(WaveBattleWaveEnemyInfoItem_o *this, const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, method);
}


void __fastcall WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(
        WaveBattleWaveEnemyInfoItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o **p_enemyIconName; // x20
  __int64 v7; // x1
  WaveBattleWaveEnemyInfoItem_c *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  PartyOrganizationUtility_o *p_enemyIconAssetData; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B122EB & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&WaveBattleWaveEnemyInfoItem_TypeInfo, v4, v5);
    byte_4B122EB = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v8 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, v7);
      v8 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
    v10 = System_String__Concat_62401220(v8->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
    AssetManager__releaseAssetStorage(v10, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (PartyOrganizationUtility_o *)&this->fields.enemyIconAssetData;
    sub_1BCA784(p_enemyIconAssetData, 0LL, v12, v13, v14, v15, v16, v17);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_enemyIconName, 0LL, v18, v19, v20, v21, v22, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  __int64 v18; // x1
  Il2CppObject *object; // x20
  WaveBattleWaveEnemyInfoItem_c *v20; // x8
  UnityEngine_Shader_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  UnityEngine_Material_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  UnityEngine_Material_o *v29; // x20
  struct System_String_o *enemyIconName; // x8
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B122E8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp, sp);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v6, v7);
    sub_1BCA7E0(&WaveBattleWaveEnemyInfoItem_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v10, v11);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v12, v13);
    byte_4B122E8 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( sp )
      {
        v31.fields.r = 1.0;
        v31.fields.g = 1.0;
        v31.fields.b = 1.0;
        v31.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)sp, v31, 0LL);
        object = UnityEngine_Resources__Load_object_(
                   (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
                   (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
        v20 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, v18);
          v20 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        v21 = UnityEngine_Shader__Find(v20->static_fields->CHOCO_SHADER_SP, 0LL);
        v25 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v22, v23, v24);
        UnityEngine_Material___ctor(v25, v21, 0LL);
        if ( v25 )
        {
          UnityEngine_Material__SetTexture(
            v25,
            (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
            (UnityEngine_Texture_o *)object,
            0LL);
          v29 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v26, v27, v28);
          UnityEngine_Material___ctor_70017516(v29, v25, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v29, 0LL);
          return;
        }
      }
      goto LABEL_19;
    case 2:
      this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp);
        this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      if ( sp )
      {
        enemyIconName = this[1].fields.enemyIconName;
        v16 = *(float *)&enemyIconName[1].fields._stringLength;
        v17 = *(float *)&enemyIconName[1].fields._firstChar;
        v14 = *(float *)&enemyIconName[1].monitor;
        v15 = *((float *)&enemyIconName[1].monitor + 1);
        goto LABEL_17;
      }
LABEL_19:
      sub_1BCAA3C(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v14 = 1.0;
        v15 = 1.0;
        v16 = 1.0;
        v17 = 1.0;
LABEL_17:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v14, 0LL);
        UISpriteAltMat__ResetMaterial(sp, 0LL);
        return;
      }
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispTypeEnemyTex(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  struct System_String_o *enemyIconName; // x8

  if ( (byte_4B122EA & 1) == 0 )
  {
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1BCA7E0(
                                              &WaveBattleWaveEnemyInfoItem_TypeInfo,
                                              *(_QWORD *)&dispTp,
                                              texture);
    byte_4B122EA = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp);
        this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      if ( texture )
      {
        enemyIconName = this[1].fields.enemyIconName;
        v8 = *(float *)&enemyIconName[1].fields._stringLength;
        v9 = *(float *)&enemyIconName[1].fields._firstChar;
        v6 = *(float *)&enemyIconName[1].monitor;
        v7 = *((float *)&enemyIconName[1].monitor + 1);
        goto LABEL_12;
      }
LABEL_14:
      sub_1BCAA3C(this, *(_QWORD *)&dispTp);
    case 1:
LABEL_6:
      if ( texture )
      {
        v6 = 1.0;
        v7 = 1.0;
        v8 = 1.0;
        v9 = 1.0;
LABEL_12:
        UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v6, 0LL);
        return;
      }
      goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType_33054244(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
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
  WaveBattleWaveEnemyInfoItem_o *v16; // x20
  __int64 v17; // x1
  WaveBattleWaveEnemyInfoItem_c *v18; // x0
  __int64 v19; // x1
  Il2CppObject *object; // x20
  WaveBattleWaveEnemyInfoItem_c *v21; // x8
  UnityEngine_Shader_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  UnityEngine_Material_o *v26; // x21
  UnityEngine_Texture_o *v27; // x0
  float *enemyIconName; // x8
  UnityEngine_Shader_o *v29; // x0
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B122E9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp, texture);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_Texture2D___, v6, v7);
    sub_1BCA7E0(&WaveBattleWaveEnemyInfoItem_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16327/*"_ChocoTex"*/, v12, v13);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1BCA7E0(&StringLiteral_12893/*"Shaders/ChocoMap"*/, v14, v15);
    byte_4B122E9 = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v31.fields.r = 1.0;
      v31.fields.g = 1.0;
      v31.fields.b = 1.0;
      v31.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v31, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12893/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      v21 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, v19);
        v21 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v22 = UnityEngine_Shader__Find(v21->static_fields->CHOCO_SHADER_TX, 0LL);
      v26 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v23, v24, v25);
      UnityEngine_Material___ctor(v26, v22, 0LL);
      if ( v26 )
      {
        UnityEngine_Material__SetTexture(
          v26,
          (System_String_o *)StringLiteral_16327/*"_ChocoTex"*/,
          (UnityEngine_Texture_o *)object,
          0LL);
        v27 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                         texture,
                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        UnityEngine_Material__SetTexture(v26, (System_String_o *)StringLiteral_16431/*"_MainTex"*/, v27, 0LL);
        ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
          texture,
          v26,
          texture->klass->vtable._26_get_mainTexture.methodPtr);
        ((void (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._30_MarkAsChanged.method)(
          texture,
          texture->klass->vtable._31_Awake.methodPtr);
        return;
      }
    }
    goto LABEL_29;
  }
  if ( dispTp != 2 )
  {
    if ( dispTp != 1 )
      return;
    if ( texture )
    {
      v30.fields.r = 1.0;
      v30.fields.g = 1.0;
      v30.fields.b = 1.0;
      v30.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v30, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
        texture,
        0LL,
        texture->klass->vtable._26_get_mainTexture.methodPtr);
      this = (WaveBattleWaveEnemyInfoItem_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                texture,
                                                texture->klass->vtable._29_set_shader.methodPtr);
      if ( this )
      {
        this = (WaveBattleWaveEnemyInfoItem_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        v16 = this;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp);
        if ( v16 )
        {
          if ( !System_String__Equals_62409536(
                  (System_String_o *)v16,
                  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v18 = WaveBattleWaveEnemyInfoItem_TypeInfo;
            if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
              goto LABEL_27;
            goto LABEL_28;
          }
          return;
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(this, *(_QWORD *)&dispTp);
  }
  this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp);
    this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  }
  if ( !texture )
    goto LABEL_29;
  enemyIconName = (float *)this[1].fields.enemyIconName;
  v32.fields.b = enemyIconName[10];
  v32.fields.a = enemyIconName[11];
  v32.fields.r = enemyIconName[8];
  v32.fields.g = enemyIconName[9];
  UIWidget__set_color((UIWidget_o *)texture, v32, 0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  this = (WaveBattleWaveEnemyInfoItem_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                            texture,
                                            texture->klass->vtable._29_set_shader.methodPtr);
  if ( !this )
    goto LABEL_29;
  this = (WaveBattleWaveEnemyInfoItem_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !this )
    goto LABEL_29;
  if ( !System_String__Equals_62409536(
          (System_String_o *)this,
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v18 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
LABEL_27:
      j_il2cpp_runtime_class_init_0(v18, v17);
      v18 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
LABEL_28:
    v29 = UnityEngine_Shader__Find(v18->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v29,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetEnemyName(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t EnemyNameEffect; // w0
  __int64 v12; // x1
  int32_t v13; // w21
  System_String_o *NameEffectPath; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AssetLoader_LoadEndDataHandler_o *v18; // x22
  __int64 v19; // x1
  UILabel_o *klass; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_4B122EC & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, viewEnemyEnt, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v7, v8);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1BCA7E0(
                                              &Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__,
                                              v9,
                                              v10);
    byte_4B122EC = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_12;
  EnemyNameEffect = ViewWaveEnemyEntity__GetEnemyNameEffect(viewEnemyEnt, 0LL);
  if ( EnemyNameEffect )
  {
    v13 = EnemyNameEffect;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v12);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v13, 0LL);
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v15, v16, v17);
    AssetLoader_LoadEndDataHandler___ctor(v18, v4, Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19);
    AssetManager__loadAssetStorage(NameEffectPath, v18, 1, 0LL);
  }
  klass = (UILabel_o *)v4[3].klass;
  this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__GetBattleName(viewEnemyEnt, 0LL);
  if ( !klass )
LABEL_12:
    sub_1BCAA3C(this, viewEnemyEnt);
  UILabel__set_text(klass, (System_String_o *)this, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetItem(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v16; // x21
  UnityEngine_Component_o *svtImg; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  ViewWaveEnemyEntity_o **v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int v32; // w23
  struct UITexture_o **p_svtImg; // x22
  UISprite_o *enemySp; // x22
  int32_t iconId; // w23
  __int64 v36; // x2
  __int64 v37; // x3
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  ViewWaveEnemyEntity_o *v40; // x8
  UITexture_o *v41; // x24
  int32_t limitCount; // w21
  int32_t svtId; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  const MethodInfo *v51; // x3
  ViewWaveEnemyEntity_o *v52; // x22
  System_Action_o *v53; // x23
  const MethodInfo *v54; // x3
  char v55; // w21
  __int64 v56; // x1
  UISprite_o *dangerSprite; // x21

  if ( (byte_4B122E7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, viewEnemyEnt, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__, v10, v11);
    sub_1BCA7E0(&WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_19225/*"enemy_icon_leader"*/, v14, v15);
    byte_4B122E7 = 1;
  }
  v16 = sub_1BCAA2C(WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo, viewEnemyEnt, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_38;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = viewEnemyEnt;
  v25 = (ViewWaveEnemyEntity_o **)(v16 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)viewEnemyEnt, v26, v27, v28, v29, v30, v31);
  if ( !*(_QWORD *)(v16 + 24) )
    goto LABEL_38;
  v32 = *(_DWORD *)(*(_QWORD *)(v16 + 24) + 44LL);
  p_svtImg = &this->fields.svtImg;
  svtImg = (UnityEngine_Component_o *)this->fields.svtImg;
  if ( !svtImg )
    goto LABEL_38;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
  if ( !svtImg )
    goto LABEL_38;
  if ( v32 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_38;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    if ( !*v25 )
      goto LABEL_38;
    enemySp = (UISprite_o *)this->fields.enemySp;
    iconId = (*v25)->fields.iconId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
    if ( AtlasManager__SetEnemy(enemySp, iconId, 0LL) )
    {
      svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
      if ( !svtImg )
        goto LABEL_38;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)svtImg, 1, 0LL);
      svtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
      if ( !svtImg )
        goto LABEL_38;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)svtImg, 0, 0LL);
      if ( !*v25 )
        goto LABEL_38;
      WaveBattleWaveEnemyInfoItem__SetDispType(
        (WaveBattleWaveEnemyInfoItem_o *)svtImg,
        (*v25)->fields.displayType,
        this->fields.enemySp,
        v38);
    }
    else
    {
      v52 = *(ViewWaveEnemyEntity_o **)(v16 + 24);
      v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v36, v37);
      System_Action___ctor(
        v53,
        (Il2CppObject *)v16,
        Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__,
        0LL);
      WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(this, v52, v53, v54);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    v40 = *v25;
    if ( !*v25 )
      goto LABEL_38;
    v41 = *p_svtImg;
    svtId = v40->fields.svtId;
    limitCount = v40->fields.limitCount;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v18);
    Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v41, svtId, limitCount, limitCount, 0LL);
    *p_svtImg = Manager__loadCommandCard;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.svtImg,
      (int64_t)Manager__loadCommandCard,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    if ( !*v25 )
      goto LABEL_38;
    WaveBattleWaveEnemyInfoItem__SetDispType_33054244(
      (WaveBattleWaveEnemyInfoItem_o *)svtImg,
      (*v25)->fields.displayType,
      this->fields.svtImg,
      v51);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_38;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__SetEnemyName(this, *v25, v39);
  svtImg = (UnityEngine_Component_o *)*v25;
  if ( !*v25 )
    goto LABEL_38;
  svtImg = (UnityEngine_Component_o *)ViewWaveEnemyEntity__IsDispDanger((ViewWaveEnemyEntity_o *)svtImg, 0LL);
  if ( !this->fields.dangerSprite )
    goto LABEL_38;
  v55 = (char)svtImg;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.dangerSprite,
                                        0LL);
  if ( !svtImg )
    goto LABEL_38;
  if ( (v55 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    goto LABEL_35;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
  dangerSprite = this->fields.dangerSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v56);
  AtlasManager__SetPartyOrganizationImage(dangerSprite, (System_String_o *)StringLiteral_19225/*"enemy_icon_leader"*/, 0LL);
  svtImg = (UnityEngine_Component_o *)this->fields.dangerSprite;
  if ( !svtImg )
LABEL_38:
    sub_1BCAA3C(svtImg, v18);
  svtImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))svtImg->klass[2]._1.typeMetadataHandle)(
                                        svtImg,
                                        svtImg->klass[2]._1.interopData);
LABEL_35:
  if ( !*v25 )
    goto LABEL_38;
  svtImg = (UnityEngine_Component_o *)this->fields.classComp;
  if ( !svtImg )
    goto LABEL_38;
  ServantClassIconComponent__SetWithClassOverWrite(
    (ServantClassIconComponent_o *)svtImg,
    (*v25)->fields.svtId,
    (*v25)->fields.limitCount,
    (*v25)->fields.classId,
    0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem___SetEnemyName_b__22_0(
        WaveBattleWaveEnemyInfoItem_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v12; // x19
  __int64 v13; // x1
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4B122EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1BCA7E0(&StringLiteral_22945/*"quest_info"*/, v9, v10);
    byte_4B122EF = 1;
  }
  if ( !assetData
    || (this = (WaveBattleWaveEnemyInfoItem_o *)AssetData__GetObject_object__49237568(
                                                  assetData,
                                                  (System_String_o *)StringLiteral_22945/*"quest_info"*/,
                                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1BCAA3C(this, assetData);
  }
  v12 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  UnityEngine_Object__Instantiate_object__49903816(
    v12,
    transform,
    (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
}


void __fastcall WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0___ctor(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0___SetItem_b__0(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  struct WaveBattleWaveEnemyInfoItem_o *_4__this; // x8
  WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_o *v3; // x19
  struct WaveBattleWaveEnemyInfoItem_o *v4; // x8
  const MethodInfo *v5; // x3
  struct ViewWaveEnemyEntity_o *viewEnemyEnt; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v7; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_o *)v4->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL),
        (viewEnemyEnt = v3->fields.viewEnemyEnt) == 0LL)
    || (v7 = v3->fields.__4__this) == 0LL )
  {
LABEL_8:
    sub_1BCAA3C(this, method);
  }
  WaveBattleWaveEnemyInfoItem__SetDispTypeEnemyTex(
    (WaveBattleWaveEnemyInfoItem_o *)this,
    viewEnemyEnt->fields.displayType,
    v7->fields.enemyTexture,
    v5);
}


void __fastcall WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0___ctor(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0___LoadEnemyTexture_b__0(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_o *this,
        AssetData_o *assetData,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  UnityEngine_Material_o *v25; // x20
  struct WaveBattleWaveEnemyInfoItem_o *v26; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v27; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v28; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__49237568; // x0

  if ( (byte_4B122F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, assetData, method);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_16695/*"_alpha"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v18, v19);
    byte_4B122F0 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *(_QWORD *)&_4__this->fields.isLoadResources = assetData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this->fields.isLoadResources,
    (int64_t)assetData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v21 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5048/*"Custom/SpriteWithMask"*/, 0LL);
  v25 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v22, v23, v24);
  UnityEngine_Material___ctor(v25, v21, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_16;
  _4__this = (AssetData_o *)v26->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v25,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_16;
  _4__this = v27->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)AssetData__GetObject_object__49237568(
                              _4__this,
                              v27->fields.enemyIconName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  if ( !v25 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v25, (UnityEngine_Texture_o *)_4__this, 0LL);
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_16;
  enemyIconAssetData = v28->fields.enemyIconAssetData;
  _4__this = (AssetData_o *)System_String__Concat_62401220(
                              v28->fields.enemyIconName,
                              (System_String_o *)StringLiteral_16695/*"_alpha"*/,
                              0LL);
  if ( !enemyIconAssetData )
    goto LABEL_16;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              enemyIconAssetData,
                              (System_String_o *)_4__this,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  UnityEngine_Material__SetTexture(
    v25,
    (System_String_o *)StringLiteral_16436/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__49237568,
    0LL);
  _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  if ( CommonUI__IsLoadMode((CommonUI_o *)_4__this, 1, 0LL) )
  {
    _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_1BCAA3C(_4__this, assetData);
  }
LABEL_15:
  ActionExtensions__Call(this->fields.callback, 0LL);
}