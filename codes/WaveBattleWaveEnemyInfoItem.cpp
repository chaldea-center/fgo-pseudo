void __fastcall WaveBattleWaveEnemyInfoItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t v10; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  WaveBattleWaveEnemyInfoItem_c *v22; // x8
  int32_t v23; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4A4A3A7 & 1) == 0 )
  {
    sub_1B863B8(&WaveBattleWaveEnemyInfoItem_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_18803/*"enemy_icon_"*/, v4);
    sub_1B863B8(&StringLiteral_22574/*"questinfo_enemy_brank"*/, v5);
    sub_1B863B8(&StringLiteral_14906/*"Unlit/Transparent Colored"*/, v6);
    sub_1B863B8(&StringLiteral_14907/*"Unlit/Transparent Colored_Choco"*/, v7);
    sub_1B863B8(&StringLiteral_5982/*"Enemys/Icon/"*/, v8);
    sub_1B863B8(&StringLiteral_4911/*"Custom/SpriteWithMask_Choco"*/, v9);
    byte_4A4A3A7 = 1;
  }
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_14907/*"Unlit/Transparent Colored_Choco"*/;
  sub_1B8635C((CGThumbnailListItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields, StringLiteral_14907/*"Unlit/Transparent Colored_Choco"*/, v2, v3);
  v10 = StringLiteral_4911/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4911/*"Custom/SpriteWithMask_Choco"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->CHOCO_SHADER_SP, v10, v12, v13);
  v14 = StringLiteral_5982/*"Enemys/Icon/"*/;
  v15 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v15->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_5982/*"Enemys/Icon/"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v15->ENEMY_ICON_TEXTURE_PATH, v14, v16, v17);
  v18 = StringLiteral_18803/*"enemy_icon_"*/;
  v19 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v19->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18803/*"enemy_icon_"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v19->ENEMY_ICON_TEXTURE_PREFIX, v18, v20, v21);
  v22 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BC21A0;
  v23 = StringLiteral_14906/*"Unlit/Transparent Colored"*/;
  v24 = v22->static_fields;
  v24->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_14906/*"Unlit/Transparent Colored"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v24->DEFAULT_SHADER, v23, v25, v26);
  v27 = StringLiteral_22574/*"questinfo_enemy_brank"*/;
  v28 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v28->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22574/*"questinfo_enemy_brank"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v28->ENEMY_UNKNOWN_SP, v27, v29, v30);
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID = 97;
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v26; // x0
  struct System_String_o *v27; // x0
  struct System_String_o **p_enemyIconName; // x19
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_String_o *v31; // x19
  AssetLoader_LoadEndDataHandler_o *v32; // x20
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4A3A5 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, viewEnemyEnt);
    sub_1B863B8(&int_TypeInfo, v7);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B863B8(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0__LoadEnemyTexture_b__0__, v10);
    sub_1B863B8(&WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0_TypeInfo, v11);
    sub_1B863B8(&WaveBattleWaveEnemyInfoItem_TypeInfo, v12);
    byte_4A4A3A5 = 1;
  }
  v13 = sub_1B86604(WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_19;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = callback;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)callback, v18, v19);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( CommonUI__IsLoadMode(Instance, 0, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, v20);
  Instance = (CommonUI_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
  if ( !viewEnemyEnt )
LABEL_19:
    sub_1B86614(Instance, v15);
  iconId = viewEnemyEnt->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v33 = iconId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v21, v22, v23);
  v27 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v26, 0LL);
  this->fields.enemyIconName = v27;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1B8635C((CGThumbnailListItem_o *)p_enemyIconName, (int32_t)v27, v29, v30);
  v31 = System_String__Concat_61645176(
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v31, v32, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__IsLoadMode(Instance, 1, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v3; // x1
  System_String_o **p_enemyIconName; // x20
  WaveBattleWaveEnemyInfoItem_c *v5; // x0
  System_String_o *v6; // x21
  CGThumbnailListItem_o *p_enemyIconAssetData; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A4A3A3 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&WaveBattleWaveEnemyInfoItem_TypeInfo, v3);
    byte_4A4A3A3 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v5 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
      v5 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
    v6 = System_String__Concat_61645176(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (CGThumbnailListItem_o *)&this->fields.enemyIconAssetData;
    sub_1B8635C(p_enemyIconAssetData, 0, v8, v9);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)p_enemyIconName, 0, v10, v11);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  Il2CppObject *object; // x20
  WaveBattleWaveEnemyInfoItem_c *v15; // x8
  UnityEngine_Shader_o *v16; // x22
  UnityEngine_Material_o *v17; // x21
  UnityEngine_Material_o *v18; // x20
  struct System_String_o *enemyIconName; // x8
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A4A3A0 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_1B863B8(&Method_UnityEngine_Resources_Load_Texture2D___, v6);
    sub_1B863B8(&WaveBattleWaveEnemyInfoItem_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_15923/*"_ChocoTex"*/, v8);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B863B8(&StringLiteral_12614/*"Shaders/ChocoMap"*/, v9);
    byte_4A4A3A0 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( sp )
      {
        v20.fields.r = 1.0;
        v20.fields.g = 1.0;
        v20.fields.b = 1.0;
        v20.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)sp, v20, 0LL);
        object = UnityEngine_Resources__Load_object_(
                   (System_String_o *)StringLiteral_12614/*"Shaders/ChocoMap"*/,
                   (const MethodInfo_30059F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
        v15 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v15 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_SP, 0LL);
        v17 = (UnityEngine_Material_o *)sub_1B86604(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor(v17, v16, 0LL);
        if ( v17 )
        {
          UnityEngine_Material__SetTexture(
            v17,
            (System_String_o *)StringLiteral_15923/*"_ChocoTex"*/,
            (UnityEngine_Texture_o *)object,
            0LL);
          v18 = (UnityEngine_Material_o *)sub_1B86604(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_69219356(v18, v17, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v18, 0LL);
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
        v12 = *(float *)&enemyIconName[1].fields._stringLength;
        v13 = *(float *)&enemyIconName[1].fields._firstChar;
        v10 = *(float *)&enemyIconName[1].monitor;
        v11 = *((float *)&enemyIconName[1].monitor + 1);
        goto LABEL_17;
      }
LABEL_19:
      sub_1B86614(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v10 = 1.0;
        v11 = 1.0;
        v12 = 1.0;
        v13 = 1.0;
LABEL_17:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v10, 0LL);
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

  if ( (byte_4A4A3A2 & 1) == 0 )
  {
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B863B8(&WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp);
    byte_4A4A3A2 = 1;
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
      sub_1B86614(this, *(_QWORD *)&dispTp);
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
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType_33048056(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WaveBattleWaveEnemyInfoItem_o *v11; // x20
  WaveBattleWaveEnemyInfoItem_c *v12; // x0
  Il2CppObject *object; // x20
  WaveBattleWaveEnemyInfoItem_c *v14; // x8
  UnityEngine_Shader_o *v15; // x22
  UnityEngine_Material_o *v16; // x21
  UnityEngine_Texture_o *v17; // x0
  float *enemyIconName; // x8
  UnityEngine_Shader_o *v19; // x0
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A4A3A1 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_1B863B8(&Method_UnityEngine_Resources_Load_Texture2D___, v6);
    sub_1B863B8(&WaveBattleWaveEnemyInfoItem_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_16027/*"_MainTex"*/, v8);
    sub_1B863B8(&StringLiteral_15923/*"_ChocoTex"*/, v9);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B863B8(&StringLiteral_12614/*"Shaders/ChocoMap"*/, v10);
    byte_4A4A3A1 = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v21.fields.r = 1.0;
      v21.fields.g = 1.0;
      v21.fields.b = 1.0;
      v21.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v21, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12614/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_30059F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      v14 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v14 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v15 = UnityEngine_Shader__Find(v14->static_fields->CHOCO_SHADER_TX, 0LL);
      v16 = (UnityEngine_Material_o *)sub_1B86604(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v16, v15, 0LL);
      if ( v16 )
      {
        UnityEngine_Material__SetTexture(
          v16,
          (System_String_o *)StringLiteral_15923/*"_ChocoTex"*/,
          (UnityEngine_Texture_o *)object,
          0LL);
        v17 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                         texture,
                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        UnityEngine_Material__SetTexture(v16, (System_String_o *)StringLiteral_16027/*"_MainTex"*/, v17, 0LL);
        ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
          texture,
          v16,
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
      v20.fields.r = 1.0;
      v20.fields.g = 1.0;
      v20.fields.b = 1.0;
      v20.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v20, 0LL);
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
        v11 = this;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        if ( v11 )
        {
          if ( !System_String__Equals_61680480(
                  (System_String_o *)v11,
                  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v12 = WaveBattleWaveEnemyInfoItem_TypeInfo;
            if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
              goto LABEL_27;
            goto LABEL_28;
          }
          return;
        }
      }
    }
LABEL_29:
    sub_1B86614(this, *(_QWORD *)&dispTp);
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
  v22.fields.b = enemyIconName[10];
  v22.fields.a = enemyIconName[11];
  v22.fields.r = enemyIconName[8];
  v22.fields.g = enemyIconName[9];
  UIWidget__set_color((UIWidget_o *)texture, v22, 0LL);
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
  if ( !System_String__Equals_61680480(
          (System_String_o *)this,
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v12 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
LABEL_27:
      j_il2cpp_runtime_class_init_0(v12);
      v12 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
LABEL_28:
    v19 = UnityEngine_Shader__Find(v12->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v19,
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
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t EnemyNameEffect; // w0
  int32_t v9; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v11; // x22
  UILabel_o *klass; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_4A4A3A4 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, viewEnemyEnt);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v6);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B863B8(&Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__24_0__, v7);
    byte_4A4A3A4 = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_12;
  EnemyNameEffect = ViewWaveEnemyEntity__GetEnemyNameEffect(viewEnemyEnt, 0LL);
  if ( EnemyNameEffect )
  {
    v9 = EnemyNameEffect;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v9, 0LL);
    v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v11, v4, Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__24_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v11, 1, 0LL);
  }
  klass = (UILabel_o *)v4[3].klass;
  this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__GetBattleName(viewEnemyEnt, 0LL);
  if ( !klass )
LABEL_12:
    sub_1B86614(this, viewEnemyEnt);
  UILabel__set_text(klass, (System_String_o *)this, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetItem(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  UnityEngine_Component_o *svtImg; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  ViewWaveEnemyEntity_o **v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w23
  struct UITexture_o **p_svtImg; // x22
  UISprite_o *enemySp; // x22
  int32_t iconId; // w23
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  ViewWaveEnemyEntity_o *v24; // x8
  UITexture_o *v25; // x24
  int32_t limitCount; // w21
  int32_t svtId; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  ViewWaveEnemyEntity_o *v32; // x22
  System_Action_o *v33; // x23
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  char v36; // w20
  UISprite_o *dangerSprite; // x20

  if ( (byte_4A4A39F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, viewEnemyEnt);
    sub_1B863B8(&AtlasManager_TypeInfo, v5);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1B863B8(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0__SetItem_b__0__, v7);
    sub_1B863B8(&WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_18804/*"enemy_icon_leader"*/, v9);
    byte_4A4A39F = 1;
  }
  v10 = sub_1B86604(WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_37;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = viewEnemyEnt;
  v15 = (ViewWaveEnemyEntity_o **)(v10 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)viewEnemyEnt, v16, v17);
  if ( !*(_QWORD *)(v10 + 24) )
    goto LABEL_37;
  v18 = *(_DWORD *)(*(_QWORD *)(v10 + 24) + 44LL);
  p_svtImg = &this->fields.svtImg;
  svtImg = (UnityEngine_Component_o *)this->fields.svtImg;
  if ( !svtImg )
    goto LABEL_37;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
  if ( !svtImg )
    goto LABEL_37;
  if ( v18 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_37;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    if ( !*v15 )
      goto LABEL_37;
    enemySp = (UISprite_o *)this->fields.enemySp;
    iconId = (*v15)->fields.iconId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( AtlasManager__SetEnemy(enemySp, iconId, 0LL) )
    {
      svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
      if ( !svtImg )
        goto LABEL_37;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)svtImg, 1, 0LL);
      svtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
      if ( !svtImg )
        goto LABEL_37;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)svtImg, 0, 0LL);
      if ( !*v15 )
        goto LABEL_37;
      WaveBattleWaveEnemyInfoItem__SetDispType(
        (WaveBattleWaveEnemyInfoItem_o *)svtImg,
        (*v15)->fields.displayType,
        this->fields.enemySp,
        v22);
    }
    else
    {
      v32 = *(ViewWaveEnemyEntity_o **)(v10 + 24);
      v33 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        (Il2CppObject *)v10,
        Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0__SetItem_b__0__,
        0LL);
      WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(this, v32, v33, v34);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    v24 = *v15;
    if ( !*v15 )
      goto LABEL_37;
    v25 = *p_svtImg;
    svtId = v24->fields.svtId;
    limitCount = v24->fields.limitCount;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v25, svtId, limitCount, limitCount, 0LL);
    *p_svtImg = Manager__loadCommandCard;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtImg, (int32_t)Manager__loadCommandCard, v29, v30);
    if ( !*v15 )
      goto LABEL_37;
    WaveBattleWaveEnemyInfoItem__SetDispType_33048056(
      (WaveBattleWaveEnemyInfoItem_o *)svtImg,
      (*v15)->fields.displayType,
      this->fields.svtImg,
      v31);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_37;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__SetEnemyName(this, *v15, v23);
  if ( !*v15 )
    goto LABEL_37;
  svtImg = (UnityEngine_Component_o *)this->fields.classComp;
  if ( !svtImg )
    goto LABEL_37;
  ServantClassIconComponent__SetWithClassOverWrite(
    (ServantClassIconComponent_o *)svtImg,
    (*v15)->fields.svtId,
    (*v15)->fields.limitCount,
    (*v15)->fields.classId,
    0LL);
  WaveBattleWaveEnemyInfoItem__SetUnknownDisp(this, *v15, v35);
  svtImg = (UnityEngine_Component_o *)*v15;
  if ( !*v15 )
    goto LABEL_37;
  svtImg = (UnityEngine_Component_o *)ViewWaveEnemyEntity__IsDispDanger((ViewWaveEnemyEntity_o *)svtImg, 0LL);
  if ( !this->fields.dangerSprite )
    goto LABEL_37;
  v36 = (char)svtImg;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.dangerSprite,
                                        0LL);
  if ( !svtImg )
    goto LABEL_37;
  if ( (v36 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    dangerSprite = this->fields.dangerSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetPartyOrganizationImage(dangerSprite, (System_String_o *)StringLiteral_18804/*"enemy_icon_leader"*/, 0LL);
    svtImg = (UnityEngine_Component_o *)this->fields.dangerSprite;
    if ( svtImg )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))svtImg->klass[2]._1.typeMetadataHandle)(
        svtImg,
        svtImg->klass[2]._1.interopData);
      return;
    }
LABEL_37:
    sub_1B86614(svtImg, v12);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetUnknownDisp(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_string__object__o *UnknownDispInfo; // x0
  System_Collections_Generic_Dictionary_string__object__o *v12; // x22
  bool IsUnknownDispInfo; // w24
  bool v14; // w23
  bool v15; // w21
  char v16; // w20
  ServantClassIconComponent_o *classComp; // x22
  struct ServantClassIconComponent_o *v18; // x8
  UILabel_o *nameLabel; // x22
  UILabel_o *textLb; // x21
  __int64 v21; // x1
  TerminalSceneComponent_c *v22; // x0
  UnityEngine_Object_o *mInstance; // x20
  UISprite_o *enemySp; // x20
  System_String_c *klass; // x8
  UISprite_o *v26; // x20
  WaveBattleWaveEnemyInfoItem_o *v27; // x0
  const MethodInfo *v28; // x3

  v4 = this;
  if ( (byte_4A4A3A6 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___, viewEnemyEnt);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&TerminalSceneComponent_TypeInfo, v8);
    sub_1B863B8(&WaveBattleWaveEnemyInfoItem_TypeInfo, v9);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B863B8(&StringLiteral_15288/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, v10);
    byte_4A4A3A6 = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_53;
  UnknownDispInfo = ViewWaveEnemyEntity__GetUnknownDispInfo(viewEnemyEnt, 0LL);
  if ( UnknownDispInfo )
  {
    v12 = UnknownDispInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    if ( !this )
      goto LABEL_53;
    if ( ReachedWaveInfoMaster__GetReachedWave((ReachedWaveInfoMaster_o *)this, viewEnemyEnt->fields.questId, 0LL) < viewEnemyEnt->fields.wave )
    {
      IsUnknownDispInfo = ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 0, v12, 0LL);
      v14 = ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 1, v12, 0LL);
      v15 = ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 2, v12, 0LL);
      this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 3, v12, 0LL);
      v16 = (char)this;
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
          0LL);
      }
      if ( v14 )
      {
        v18 = v4->fields.classComp;
        if ( !v18 )
          goto LABEL_53;
        nameLabel = v18->fields.nameLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (WaveBattleWaveEnemyInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15288/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0LL);
        if ( !nameLabel )
          goto LABEL_53;
        UILabel__set_text(nameLabel, (System_String_o *)this, 0LL);
      }
      if ( v15 )
      {
        textLb = v4->fields.textLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (WaveBattleWaveEnemyInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15288/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0LL);
        if ( !textLb )
          goto LABEL_53;
        UILabel__set_text(textLb, (System_String_o *)this, 0LL);
      }
      if ( (v16 & 1) != 0 )
      {
        this = (WaveBattleWaveEnemyInfoItem_o *)v4->fields.svtImg;
        if ( !this )
          goto LABEL_53;
        this = (WaveBattleWaveEnemyInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (WaveBattleWaveEnemyInfoItem_o *)v4->fields.enemySp;
        if ( !this )
          goto LABEL_53;
        this = (WaveBattleWaveEnemyInfoItem_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
        if ( !this )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4A48DB8 )
        {
          sub_1B863B8(&TerminalSceneComponent_TypeInfo, v21);
          byte_4A48DB8 = 1;
        }
        v22 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v22 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v22->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
        {
          enemySp = (UISprite_o *)v4->fields.enemySp;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A48DB8 )
          {
            sub_1B863B8(&TerminalSceneComponent_TypeInfo, viewEnemyEnt);
            byte_4A48DB8 = 1;
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
          UISprite__set_atlas(enemySp, (UIAtlas_o *)klass->vtable._0_Equals.methodPtr, 0LL);
        }
        v26 = (UISprite_o *)v4->fields.enemySp;
        this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        if ( v26 )
        {
          UISprite__set_spriteName(v26, WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0LL);
          WaveBattleWaveEnemyInfoItem__SetDispType(v27, 1, v4->fields.enemySp, v28);
          return;
        }
LABEL_53:
        sub_1B86614(this, viewEnemyEnt);
      }
    }
  }
}


void __fastcall WaveBattleWaveEnemyInfoItem___SetEnemyName_b__24_0(
        WaveBattleWaveEnemyInfoItem_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v9; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4A4A3A8 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, assetData);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B863B8(&StringLiteral_22553/*"quest_info"*/, v7);
    byte_4A4A3A8 = 1;
  }
  if ( !assetData
    || (this = (WaveBattleWaveEnemyInfoItem_o *)AssetData__GetObject_object__49610244(
                                                  assetData,
                                                  (System_String_o *)StringLiteral_22553/*"quest_info"*/,
                                                  (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1B86614(this, assetData);
  }
  v9 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__50290416(
    v9,
    transform,
    (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
}


void __fastcall WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0___ctor(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0___SetItem_b__0(
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
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_o *)v4->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL),
        (viewEnemyEnt = v3->fields.viewEnemyEnt) == 0LL)
    || (v7 = v3->fields.__4__this) == 0LL )
  {
LABEL_8:
    sub_1B86614(this, method);
  }
  WaveBattleWaveEnemyInfoItem__SetDispTypeEnemyTex(
    (WaveBattleWaveEnemyInfoItem_o *)this,
    viewEnemyEnt->fields.displayType,
    v7->fields.enemyTexture,
    v5);
}


void __fastcall WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0___ctor(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0___LoadEnemyTexture_b__0(
        WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x20
  struct WaveBattleWaveEnemyInfoItem_o *v14; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v15; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v16; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__49610244; // x0

  if ( (byte_4A4A3A9 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_Texture2D____76085320, assetData);
    sub_1B863B8(&UnityEngine_Material_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_16293/*"_alpha"*/, v8);
    sub_1B863B8(&StringLiteral_4910/*"Custom/SpriteWithMask"*/, v9);
    sub_1B863B8(&StringLiteral_16032/*"_MaskTex"*/, v10);
    byte_4A4A3A9 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *(_QWORD *)&_4__this->fields.isLoadResources = assetData;
  sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.isLoadResources, (int32_t)assetData, (int32_t)method, v3);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4910/*"Custom/SpriteWithMask"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_1B86604(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_16;
  _4__this = (AssetData_o *)v14->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v13,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  _4__this = v15->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)AssetData__GetObject_object__49610244(
                              _4__this,
                              v15->fields.enemyIconName,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_Texture2D____76085320);
  if ( !v13 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)_4__this, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_16;
  enemyIconAssetData = v16->fields.enemyIconAssetData;
  _4__this = (AssetData_o *)System_String__Concat_61645176(
                              v16->fields.enemyIconName,
                              (System_String_o *)StringLiteral_16293/*"_alpha"*/,
                              0LL);
  if ( !enemyIconAssetData )
    goto LABEL_16;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              enemyIconAssetData,
                              (System_String_o *)_4__this,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_Texture2D____76085320);
  UnityEngine_Material__SetTexture(
    v13,
    (System_String_o *)StringLiteral_16032/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__49610244,
    0LL);
  _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  if ( CommonUI__IsLoadMode((CommonUI_o *)_4__this, 1, 0LL) )
  {
    _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_1B86614(_4__this, assetData);
  }
LABEL_15:
  ActionExtensions__Call(this->fields.callback, 0LL);
}