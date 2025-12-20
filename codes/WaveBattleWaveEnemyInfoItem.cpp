void WaveBattleWaveEnemyInfoItem___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  WaveBattleWaveEnemyInfoItem_c *v31; // x8
  int32_t v32; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7

  if ( (byte_4D284C5 & 1) == 0 )
  {
    sub_1C94098(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_1C94098(&StringLiteral_19184/*"enemy_icon_"*/);
    sub_1C94098(&StringLiteral_23124/*"questinfo_enemy_brank"*/);
    sub_1C94098(&StringLiteral_15189/*"Unlit/Transparent Colored"*/);
    sub_1C94098(&StringLiteral_15190/*"Unlit/Transparent Colored_Choco"*/);
    sub_1C94098(&StringLiteral_6056/*"Enemys/Icon/"*/);
    sub_1C94098(&StringLiteral_4944/*"Custom/SpriteWithMask_Choco"*/);
    byte_4D284C5 = 1;
  }
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15190/*"Unlit/Transparent Colored_Choco"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields,
    StringLiteral_15190/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_4944/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4944/*"Custom/SpriteWithMask_Choco"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->CHOCO_SHADER_SP, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_6056/*"Enemys/Icon/"*/;
  v16 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v16->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6056/*"Enemys/Icon/"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->ENEMY_ICON_TEXTURE_PATH, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_19184/*"enemy_icon_"*/;
  v24 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v24->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19184/*"enemy_icon_"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v24->ENEMY_ICON_TEXTURE_PREFIX, v23, v25, v26, v27, v28, v29, v30);
  v31 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_CFE140;
  v32 = StringLiteral_15189/*"Unlit/Transparent Colored"*/;
  v33 = v31->static_fields;
  v33->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15189/*"Unlit/Transparent Colored"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v33->DEFAULT_SHADER, v32, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_23124/*"questinfo_enemy_brank"*/;
  v41 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v41->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_23124/*"questinfo_enemy_brank"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v41->ENEMY_UNKNOWN_SP, v40, v42, v43, v44, v45, v46, v47);
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID = 97;
}


void WaveBattleWaveEnemyInfoItem___ctor(WaveBattleWaveEnemyInfoItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void WaveBattleWaveEnemyInfoItem__Awake(WaveBattleWaveEnemyInfoItem_o *this, const MethodInfo *method)
{
  ;
}


void WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v25; // x0
  struct System_String_o *v26; // x0
  struct System_String_o **p_enemyIconName; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x20
  int32_t v36; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D284C3 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0__LoadEnemyTexture_b__0__);
    sub_1C94098(&WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0_TypeInfo);
    sub_1C94098(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_4D284C3 = 1;
  }
  v7 = sub_1C942E4(WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( CommonUI__IsLoadMode(Instance, 0, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CommonUI__SetLoadMode(Instance, 1, 0);
  }
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, v22);
  Instance = (CommonUI_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
  if ( !viewEnemyEnt )
LABEL_19:
    sub_1C942F0(Instance, v9);
  iconId = viewEnemyEnt->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v36 = iconId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v26 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v25, 0);
  this->fields.enemyIconName = v26;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_enemyIconName, (int32_t)v26, v28, v29, v30, v31, v32, v33);
  v34 = System_String__Concat_64417744(
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v7,
    Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0__LoadEnemyTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v34, v35, 1, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__IsLoadMode(Instance, 1, 0) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0);
        return;
      }
    }
    goto LABEL_19;
  }
}


// attributes: thunk
void WaveBattleWaveEnemyInfoItem__OnDestroy(WaveBattleWaveEnemyInfoItem_o *this, const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, method);
}


void WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(WaveBattleWaveEnemyInfoItem_o *this, const MethodInfo *method)
{
  System_String_o **p_enemyIconName; // x20
  WaveBattleWaveEnemyInfoItem_c *v4; // x0
  System_String_o *v5; // x21
  GrandQuestFolderBoardItem_o *p_enemyIconAssetData; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D284C1 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_4D284C1 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0) )
  {
    v4 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
      v4 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
    v5 = System_String__Concat_64417744(v4->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v5, 0);
    this->fields.enemyIconAssetData = 0;
    p_enemyIconAssetData = (GrandQuestFolderBoardItem_o *)&this->fields.enemyIconAssetData;
    sub_1C9403C(p_enemyIconAssetData, 0, v7, v8, v9, v10, v11, v12);
    p_enemyIconAssetData->monitor = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_enemyIconName, 0, v13, v14, v15, v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveEnemyInfoItem__SetDispType(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        const MethodInfo *method)
{
  float v6; // s0 OVERLAPPED
  float v7; // s1
  float v8; // s2
  float v9; // s3
  Il2CppObject *object; // x20
  WaveBattleWaveEnemyInfoItem_c *v11; // x8
  UnityEngine_Shader_o *v12; // x22
  UnityEngine_Material_o *v13; // x21
  UnityEngine_Material_o *v14; // x20
  struct System_String_o *enemyIconName; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D284BE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C94098(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_1C94098(&StringLiteral_16210/*"_ChocoTex"*/);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1C94098(&StringLiteral_12891/*"Shaders/ChocoMap"*/);
    byte_4D284BE = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( sp )
      {
        v16.fields.r = 1.0;
        v16.fields.g = 1.0;
        v16.fields.b = 1.0;
        v16.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)sp, v16, 0);
        object = UnityEngine_Resources__Load_object_(
                   (System_String_o *)StringLiteral_12891/*"Shaders/ChocoMap"*/,
                   (const MethodInfo_3239828 *)Method_UnityEngine_Resources_Load_Texture2D___);
        v11 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v11 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_SP, 0);
        v13 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor(v13, v12, 0);
        if ( v13 )
        {
          UnityEngine_Material__SetTexture(
            v13,
            (System_String_o *)StringLiteral_16210/*"_ChocoTex"*/,
            (UnityEngine_Texture_o *)object,
            0);
          v14 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_71973536(v14, v13, 0);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v14, 0);
          return;
        }
      }
      goto LABEL_19;
    case 2:
      this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      if ( sp )
      {
        enemyIconName = this[1].fields.enemyIconName;
        v8 = *(float *)&enemyIconName[1].fields._stringLength;
        v9 = *(float *)&enemyIconName[1].fields._firstChar;
        v6 = *(float *)&enemyIconName[1].monitor;
        v7 = *((float *)&enemyIconName[1].monitor + 1);
        goto LABEL_17;
      }
LABEL_19:
      sub_1C942F0(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v6 = 1.0;
        v7 = 1.0;
        v8 = 1.0;
        v9 = 1.0;
LABEL_17:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v6, 0);
        UISpriteAltMat__ResetMaterial(sp, 0);
        return;
      }
      goto LABEL_19;
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveEnemyInfoItem__SetDispTypeEnemyTex(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  float v6; // s0 OVERLAPPED
  float v7; // s1
  float v8; // s2
  float v9; // s3
  struct System_String_o *enemyIconName; // x8

  if ( (byte_4D284C0 & 1) == 0 )
  {
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1C94098(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_4D284C0 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
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
      sub_1C942F0(this, *(_QWORD *)&dispTp);
    case 1:
LABEL_6:
      if ( texture )
      {
        v6 = 1.0;
        v7 = 1.0;
        v8 = 1.0;
        v9 = 1.0;
LABEL_12:
        UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v6, 0);
        return;
      }
      goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveEnemyInfoItem__SetDispType_35339468(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem_o *v6; // x20
  WaveBattleWaveEnemyInfoItem_c *v7; // x0
  Il2CppObject *object; // x20
  WaveBattleWaveEnemyInfoItem_c *v9; // x8
  UnityEngine_Shader_o *v10; // x22
  UnityEngine_Material_o *v11; // x21
  UnityEngine_Texture_o *v12; // x0
  float *enemyIconName; // x8
  UnityEngine_Shader_o *v14; // x0
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D284BF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1C94098(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_1C94098(&StringLiteral_16321/*"_MainTex"*/);
    sub_1C94098(&StringLiteral_16210/*"_ChocoTex"*/);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1C94098(&StringLiteral_12891/*"Shaders/ChocoMap"*/);
    byte_4D284BF = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v16.fields.r = 1.0;
      v16.fields.g = 1.0;
      v16.fields.b = 1.0;
      v16.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v16, 0);
      ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
        texture,
        0,
        texture->klass->vtable._29_set_shader.method);
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12891/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_3239828 *)Method_UnityEngine_Resources_Load_Texture2D___);
      v9 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v9 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v10 = UnityEngine_Shader__Find(v9->static_fields->CHOCO_SHADER_TX, 0);
      v11 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v11, v10, 0);
      if ( v11 )
      {
        UnityEngine_Material__SetTexture(
          v11,
          (System_String_o *)StringLiteral_16210/*"_ChocoTex"*/,
          (UnityEngine_Texture_o *)object,
          0);
        v12 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                         texture,
                                         texture->klass->vtable._26_get_mainTexture.method);
        UnityEngine_Material__SetTexture(v11, (System_String_o *)StringLiteral_16321/*"_MainTex"*/, v12, 0);
        ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
          texture,
          v11,
          texture->klass->vtable._25_set_material.method);
        ((void (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._30_MarkAsChanged.methodPtr)(
          texture,
          texture->klass->vtable._30_MarkAsChanged.method);
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
      v15.fields.r = 1.0;
      v15.fields.g = 1.0;
      v15.fields.b = 1.0;
      v15.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v15, 0);
      ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
        texture,
        0,
        texture->klass->vtable._25_set_material.method);
      this = (WaveBattleWaveEnemyInfoItem_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._28_get_shader.methodPtr)(
                                                texture,
                                                texture->klass->vtable._28_get_shader.method);
      if ( this )
      {
        this = (WaveBattleWaveEnemyInfoItem_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        v6 = this;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        if ( v6 )
        {
          if ( !System_String__Equals_64453064(
                  (System_String_o *)v6,
                  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
                  0) )
          {
            v7 = WaveBattleWaveEnemyInfoItem_TypeInfo;
            if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
              goto LABEL_27;
            goto LABEL_28;
          }
          return;
        }
      }
    }
LABEL_29:
    sub_1C942F0(this, *(_QWORD *)&dispTp);
  }
  this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  }
  if ( !texture )
    goto LABEL_29;
  enemyIconName = (float *)this[1].fields.enemyIconName;
  v17.fields.b = enemyIconName[10];
  v17.fields.a = enemyIconName[11];
  v17.fields.r = enemyIconName[8];
  v17.fields.g = enemyIconName[9];
  UIWidget__set_color((UIWidget_o *)texture, v17, 0);
  ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
    texture,
    0,
    texture->klass->vtable._25_set_material.method);
  this = (WaveBattleWaveEnemyInfoItem_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._28_get_shader.methodPtr)(
                                            texture,
                                            texture->klass->vtable._28_get_shader.method);
  if ( !this )
    goto LABEL_29;
  this = (WaveBattleWaveEnemyInfoItem_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !this )
    goto LABEL_29;
  if ( !System_String__Equals_64453064(
          (System_String_o *)this,
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
          0) )
  {
    v7 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
LABEL_27:
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
LABEL_28:
    v14 = UnityEngine_Shader__Find(v7->static_fields->DEFAULT_SHADER, 0);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      v14,
      texture->klass->vtable._29_set_shader.method);
  }
}


void WaveBattleWaveEnemyInfoItem__SetEnemyName(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  int32_t EnemyNameEffect; // w0
  int32_t v6; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v8; // x22
  UILabel_o *klass; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_4D284C2 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1C94098(&Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__24_0__);
    byte_4D284C2 = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_12;
  EnemyNameEffect = ViewWaveEnemyEntity__GetEnemyNameEffect(viewEnemyEnt, 0);
  if ( EnemyNameEffect )
  {
    v6 = EnemyNameEffect;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v6, 0);
    v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v8, v4, Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__24_0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v8, 1, 0);
  }
  klass = (UILabel_o *)v4[3].klass;
  this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__GetBattleName(viewEnemyEnt, 0);
  if ( !klass )
LABEL_12:
    sub_1C942F0(this, viewEnemyEnt);
  UILabel__set_text(klass, (System_String_o *)this, 0);
}


void WaveBattleWaveEnemyInfoItem__SetItem(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Component_o *svtImg; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  ViewWaveEnemyEntity_o **v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int v21; // w23
  struct UITexture_o **p_svtImg; // x22
  UISprite_o *enemySp; // x22
  int32_t iconId; // w23
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  ViewWaveEnemyEntity_o *v27; // x8
  UITexture_o *v28; // x24
  int32_t limitCount; // w21
  int32_t svtId; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  const MethodInfo *v38; // x3
  ViewWaveEnemyEntity_o *v39; // x22
  System_Action_o *v40; // x23
  const MethodInfo *v41; // x3
  ServantClassIconComponent_o *classComp; // x21
  int32_t m_CachedPtr; // w22
  int32_t monitor_high; // w24
  int32_t monitor; // w23
  const MethodInfo *v46; // x2
  char v47; // w20
  UISprite_o *dangerSprite; // x20

  if ( (byte_4D284BD & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0__SetItem_b__0__);
    sub_1C94098(&WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_TypeInfo);
    sub_1C94098(&StringLiteral_19185/*"enemy_icon_leader"*/);
    byte_4D284BD = 1;
  }
  v5 = sub_1C942E4(WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = viewEnemyEnt;
  v14 = (ViewWaveEnemyEntity_o **)(v5 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)viewEnemyEnt, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_37;
  v21 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 44LL);
  p_svtImg = &this->fields.svtImg;
  svtImg = (UnityEngine_Component_o *)this->fields.svtImg;
  if ( !svtImg )
    goto LABEL_37;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0);
  if ( !svtImg )
    goto LABEL_37;
  if ( v21 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_37;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0);
    if ( !svtImg )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0);
    if ( !*v14 )
      goto LABEL_37;
    enemySp = (UISprite_o *)this->fields.enemySp;
    iconId = (*v14)->fields.iconId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEnemy(enemySp, iconId, 0) )
    {
      svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
      if ( !svtImg )
        goto LABEL_37;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)svtImg, 1, 0);
      svtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
      if ( !svtImg )
        goto LABEL_37;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)svtImg, 0, 0);
      if ( !*v14 )
        goto LABEL_37;
      WaveBattleWaveEnemyInfoItem__SetDispType(
        (WaveBattleWaveEnemyInfoItem_o *)svtImg,
        (*v14)->fields.displayType,
        this->fields.enemySp,
        v25);
    }
    else
    {
      v39 = *(ViewWaveEnemyEntity_o **)(v5 + 24);
      v40 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v5,
        Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0__SetItem_b__0__,
        0);
      WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(this, v39, v40, v41);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0);
    v27 = *v14;
    if ( !*v14 )
      goto LABEL_37;
    v28 = *p_svtImg;
    svtId = v27->fields.svtId;
    limitCount = v27->fields.limitCount;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v28, svtId, limitCount, limitCount, 0);
    *p_svtImg = Manager__loadCommandCard;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.svtImg,
      (int32_t)Manager__loadCommandCard,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    if ( !*v14 )
      goto LABEL_37;
    WaveBattleWaveEnemyInfoItem__SetDispType_35339468(
      (WaveBattleWaveEnemyInfoItem_o *)svtImg,
      (*v14)->fields.displayType,
      this->fields.svtImg,
      v38);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_37;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0);
    if ( !svtImg )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0);
  }
  WaveBattleWaveEnemyInfoItem__SetEnemyName(this, *v14, v26);
  svtImg = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_37;
  classComp = this->fields.classComp;
  monitor_high = HIDWORD(svtImg[1].monitor);
  m_CachedPtr = svtImg[1].fields.m_CachedPtr;
  monitor = (int32_t)svtImg[1].monitor;
  svtImg = (UnityEngine_Component_o *)ViewWaveEnemyEntity__IsGrand((ViewWaveEnemyEntity_o *)svtImg, 0);
  if ( !classComp )
    goto LABEL_37;
  ServantClassIconComponent__SetWithClassOverWrite(
    classComp,
    monitor_high,
    m_CachedPtr,
    monitor,
    (unsigned __int8)svtImg & 1,
    0);
  WaveBattleWaveEnemyInfoItem__SetUnknownDisp(this, *v14, v46);
  svtImg = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_37;
  svtImg = (UnityEngine_Component_o *)ViewWaveEnemyEntity__IsDispDanger((ViewWaveEnemyEntity_o *)svtImg, 0);
  if ( !this->fields.dangerSprite )
    goto LABEL_37;
  v47 = (char)svtImg;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.dangerSprite,
                                        0);
  if ( !svtImg )
    goto LABEL_37;
  if ( (v47 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0);
    dangerSprite = this->fields.dangerSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(dangerSprite, (System_String_o *)StringLiteral_19185/*"enemy_icon_leader"*/, 0);
    svtImg = (UnityEngine_Component_o *)this->fields.dangerSprite;
    if ( svtImg )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))svtImg->klass[2]._1.parent)(
        svtImg,
        svtImg->klass[2]._1.generic_class);
      return;
    }
LABEL_37:
    sub_1C942F0(svtImg, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0);
}


void WaveBattleWaveEnemyInfoItem__SetUnknownDisp(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem_o *v4; // x19
  System_Collections_Generic_Dictionary_string__object__o *UnknownDispInfo; // x0
  System_Collections_Generic_Dictionary_string__object__o *v6; // x22
  bool IsUnknownDispInfo; // w24
  bool v8; // w23
  bool v9; // w21
  char v10; // w20
  ServantClassIconComponent_o *classComp; // x22
  struct ServantClassIconComponent_o *v12; // x8
  UILabel_o *nameLabel; // x22
  UILabel_o *textLb; // x21
  TerminalSceneComponent_c *v15; // x0
  UnityEngine_Object_o *mInstance; // x20
  UISprite_o *enemySp; // x20
  System_String_c *klass; // x8
  UISprite_o *v19; // x20
  WaveBattleWaveEnemyInfoItem_o *v20; // x0
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_4D284C4 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    sub_1C94098(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1C94098(&StringLiteral_15563/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/);
    byte_4D284C4 = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_53;
  UnknownDispInfo = ViewWaveEnemyEntity__GetUnknownDispInfo(viewEnemyEnt, 0);
  if ( UnknownDispInfo )
  {
    v6 = UnknownDispInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    if ( !this )
      goto LABEL_53;
    if ( ReachedWaveInfoMaster__GetReachedWave((ReachedWaveInfoMaster_o *)this, viewEnemyEnt->fields.questId, 0) < viewEnemyEnt->fields.wave )
    {
      IsUnknownDispInfo = ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 0, v6, 0);
      v8 = ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 1, v6, 0);
      v9 = ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 2, v6, 0);
      this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 3, v6, 0);
      v10 = (char)this;
      if ( IsUnknownDispInfo )
      {
        classComp = v4->fields.classComp;
        this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        if ( !classComp )
          goto LABEL_53;
        ServantClassIconComponent__Set(
          classComp,
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
          1,
          0);
      }
      if ( v8 )
      {
        v12 = v4->fields.classComp;
        if ( !v12 )
          goto LABEL_53;
        nameLabel = v12->fields.nameLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (WaveBattleWaveEnemyInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15563/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0);
        if ( !nameLabel )
          goto LABEL_53;
        UILabel__set_text(nameLabel, (System_String_o *)this, 0);
      }
      if ( v9 )
      {
        textLb = v4->fields.textLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (WaveBattleWaveEnemyInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15563/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0);
        if ( !textLb )
          goto LABEL_53;
        UILabel__set_text(textLb, (System_String_o *)this, 0);
      }
      if ( (v10 & 1) != 0 )
      {
        this = (WaveBattleWaveEnemyInfoItem_o *)v4->fields.svtImg;
        if ( !this )
          goto LABEL_53;
        this = (WaveBattleWaveEnemyInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (WaveBattleWaveEnemyInfoItem_o *)v4->fields.enemySp;
        if ( !this )
          goto LABEL_53;
        this = (WaveBattleWaveEnemyInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D264E4 )
        {
          sub_1C94098(&TerminalSceneComponent_TypeInfo);
          byte_4D264E4 = 1;
        }
        v15 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v15 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v15->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
        {
          enemySp = (UISprite_o *)v4->fields.enemySp;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D264E4 )
          {
            sub_1C94098(&TerminalSceneComponent_TypeInfo);
            byte_4D264E4 = 1;
          }
          this = (WaveBattleWaveEnemyInfoItem_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            this = (WaveBattleWaveEnemyInfoItem_o *)TerminalSceneComponent_TypeInfo;
          }
          klass = this[1].fields.enemyIconName->klass;
          if ( !klass || !enemySp )
            goto LABEL_53;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)&klass->_2.naturalAligment, 0);
        }
        v19 = (UISprite_o *)v4->fields.enemySp;
        this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        if ( v19 )
        {
          UISprite__set_spriteName(v19, WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0);
          WaveBattleWaveEnemyInfoItem__SetDispType(v20, 1, v4->fields.enemySp, v21);
          return;
        }
LABEL_53:
        sub_1C942F0(this, viewEnemyEnt);
      }
    }
  }
}


void WaveBattleWaveEnemyInfoItem___SetEnemyName_b__24_0(
        WaveBattleWaveEnemyInfoItem_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem_o *v4; // x19
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v6; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4D284C6 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1C94098(&StringLiteral_23103/*"quest_info"*/);
    byte_4D284C6 = 1;
  }
  if ( !assetData
    || (this = (WaveBattleWaveEnemyInfoItem_o *)AssetData__GetObject_object__51893132(
                                                  assetData,
                                                  (System_String_o *)StringLiteral_23103/*"quest_info"*/,
                                                  (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0) )
  {
    sub_1C942F0(this, assetData);
  }
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__52598436(
    v6,
    transform,
    (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
}


void WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0___ctor(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0___SetItem_b__0(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  struct WaveBattleWaveEnemyInfoItem_o *_4__this; // x8
  WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_o *v3; // x19
  struct WaveBattleWaveEnemyInfoItem_o *v4; // x8
  const MethodInfo *v5; // x3
  struct ViewWaveEnemyEntity_o *viewEnemyEnt; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v7; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0), (v4 = v3->fields.__4__this) == 0)
    || (this = (WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_o *)v4->fields.enemyTexture) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0),
        (viewEnemyEnt = v3->fields.viewEnemyEnt) == 0)
    || (v7 = v3->fields.__4__this) == 0 )
  {
LABEL_8:
    sub_1C942F0(this, method);
  }
  WaveBattleWaveEnemyInfoItem__SetDispTypeEnemyTex(
    (WaveBattleWaveEnemyInfoItem_o *)this,
    viewEnemyEnt->fields.displayType,
    v7->fields.enemyTexture,
    v5);
}


void WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0___ctor(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0___LoadEnemyTexture_b__0(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct WaveBattleWaveEnemyInfoItem_o *v13; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v14; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v15; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__51893132; // x0

  if ( (byte_4D284C7 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_16594/*"_alpha"*/);
    sub_1C94098(&StringLiteral_4943/*"Custom/SpriteWithMask"*/);
    sub_1C94098(&StringLiteral_16326/*"_MaskTex"*/);
    byte_4D284C7 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *(_QWORD *)&_4__this->fields.isLoadResources = assetData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.isLoadResources,
    (int32_t)assetData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4943/*"Custom/SpriteWithMask"*/, 0);
  v12 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v12, v11, 0);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_16;
  _4__this = (AssetData_o *)v13->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._1_Finalize.method)(
                              _4__this,
                              v12,
                              _4__this->klass[1].vtable._2_GetHashCode.methodPtr);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_16;
  _4__this = v14->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)AssetData__GetObject_object__51893132(
                              _4__this,
                              v14->fields.enemyIconName,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
  if ( !v12 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)_4__this, 0);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  enemyIconAssetData = v15->fields.enemyIconAssetData;
  _4__this = (AssetData_o *)System_String__Concat_64417744(
                              v15->fields.enemyIconName,
                              (System_String_o *)StringLiteral_16594/*"_alpha"*/,
                              0);
  if ( !enemyIconAssetData )
    goto LABEL_16;
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              enemyIconAssetData,
                              (System_String_o *)_4__this,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
  UnityEngine_Material__SetTexture(
    v12,
    (System_String_o *)StringLiteral_16326/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__51893132,
    0);
  _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  if ( CommonUI__IsLoadMode((CommonUI_o *)_4__this, 1, 0) )
  {
    _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0);
      goto LABEL_15;
    }
LABEL_16:
    sub_1C942F0(_4__this, assetData);
  }
LABEL_15:
  ActionExtensions__Call(this->fields.callback, 0);
}