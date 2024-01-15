void __fastcall WaveBattleWaveEnemyInfoItem___cctor(const MethodInfo *method)
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
  __int64 v11; // x1
  __int64 v12; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v14; // x1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v15; // x0
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v23; // x0
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  float v39; // s4
  float v40; // s5
  float v41; // s6
  float v42; // s7
  WaveBattleWaveEnemyInfoItem_c *v43; // x8
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct UnityEngine_Color_o v52; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F6760 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattleWaveEnemyInfoItem_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18301/*"enemy_icon_"*/, v8);
    sub_B16FFC(&StringLiteral_14954/*"Unlit/Transparent Colored"*/, v9);
    sub_B16FFC(&StringLiteral_14955/*"Unlit/Transparent Colored_Choco"*/, v10);
    sub_B16FFC(&StringLiteral_5982/*"Enemys/Icon/"*/, v11);
    sub_B16FFC(&StringLiteral_4520/*"Custom/SpriteWithMask_Choco"*/, v12);
    byte_40F6760 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_14955/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_14955/*"Unlit/Transparent Colored_Choco"*/;
  sub_B16F98(static_fields, v14, v2, v3, v4, v5, v6, v7);
  v15 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v16 = (System_Int32_array **)StringLiteral_4520/*"Custom/SpriteWithMask_Choco"*/;
  v15->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4520/*"Custom/SpriteWithMask_Choco"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v15->CHOCO_SHADER_SP, v16, v17, v18, v19, v20, v21, v22);
  v23 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v24 = (System_Int32_array **)StringLiteral_5982/*"Enemys/Icon/"*/;
  v23->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_5982/*"Enemys/Icon/"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v23->ENEMY_ICON_TEXTURE_PATH, v24, v25, v26, v27, v28, v29, v30);
  v31 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_18301/*"enemy_icon_"*/;
  v31->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18301/*"enemy_icon_"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v31->ENEMY_ICON_TEXTURE_PREFIX, v32, v33, v34, v35, v36, v37, v38);
  v53.fields.r = 0.05;
  v53.fields.a = 1.0;
  v53.fields.g = 0.05;
  v53.fields.b = 0.05;
  v52 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v53, v39, v40, v41, v42, (const MethodInfo *)&v52);
  v43 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR = v52;
  v44 = v43->static_fields;
  v45 = (System_Int32_array **)StringLiteral_14954/*"Unlit/Transparent Colored"*/;
  v44->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_14954/*"Unlit/Transparent Colored"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v44->DEFAULT_SHADER, v45, v46, v47, v48, v49, v50, v51);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CommonUI_o *Instance; // x0
  const MethodInfo *v28; // x1
  CommonUI_o *v29; // x0
  int32_t iconId; // w9
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v32; // x0
  struct System_String_o *v33; // x0
  struct System_String_o **p_enemyIconName; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *v41; // x19
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  AssetLoader_LoadEndDataHandler_o *v46; // x20
  CommonUI_o *v47; // x0
  CommonUI_o *v48; // x0
  int32_t v49; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F675F & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, viewEnemyEnt);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__, v11);
    sub_B16FFC(&WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo, v12);
    sub_B16FFC(&WaveBattleWaveEnemyInfoItem_TypeInfo, v13);
    byte_40F675F = 1;
  }
  v14 = sub_B170CC(WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo, viewEnemyEnt, callback, method, v4);
  WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0___ctor(
    (WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_21;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( CommonUI__IsLoadMode(Instance, 0, 0LL) )
  {
    v29 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v29 )
      goto LABEL_21;
    CommonUI__SetLoadMode(v29, 1, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, v28);
  if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
  }
  if ( !viewEnemyEnt )
LABEL_21:
    sub_B170D4();
  iconId = viewEnemyEnt->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v49 = iconId;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
  v33 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v32, 0LL);
  this->fields.enemyIconName = v33;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_B16F98((BattleServantConfConponent_o *)p_enemyIconName, (System_Int32_array **)v33, v35, v36, v37, v38, v39, v40);
  v41 = System_String__Concat_43743732(
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v46 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v42, v43, v44, v45);
  AssetLoader_LoadEndDataHandler___ctor(
    v46,
    (Il2CppObject *)v14,
    Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v41, v46, 1, 0LL) )
  {
    v47 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v47 )
    {
      if ( !CommonUI__IsLoadMode(v47, 1, 0LL) )
        return;
      v48 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v48 )
      {
        CommonUI__SetLoadMode(v48, 0, 0LL);
        return;
      }
    }
    goto LABEL_21;
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
  BattleServantConfConponent_o *p_enemyIconAssetData; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F675D & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&WaveBattleWaveEnemyInfoItem_TypeInfo, v3);
    byte_40F675D = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v5 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
      v5 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
    v6 = System_String__Concat_43743732(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (BattleServantConfConponent_o *)&this->fields.enemyIconAssetData;
    sub_B16F98(p_enemyIconAssetData, 0LL, v8, v9, v10, v11, v12, v13);
    p_enemyIconAssetData->monitor = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_enemyIconName, 0LL, v14, v15, v16, v17, v18, v19);
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
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  WaveBattleWaveEnemyInfoItem_c *v14; // x0
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x8
  int v16; // s0
  UnityEngine_Texture_o *UIAtlas; // x20
  WaveBattleWaveEnemyInfoItem_c *v21; // x8
  UnityEngine_Shader_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UnityEngine_Material_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  UnityEngine_Material_o *v32; // x20

  if ( (byte_40F675A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v6);
    sub_B16FFC(&WaveBattleWaveEnemyInfoItem_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_15875/*"_ChocoTex"*/, v8);
    sub_B16FFC(&StringLiteral_12773/*"Shaders/ChocoMap"*/, v9);
    byte_40F675A = 1;
  }
  switch ( dispTp )
  {
    case 3:
      *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
      if ( sp )
      {
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v16, 0LL);
        UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                             (System_String_o *)StringLiteral_12773/*"Shaders/ChocoMap"*/,
                                             (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
        v21 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v21 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        v22 = UnityEngine_Shader__Find(v21->static_fields->CHOCO_SHADER_SP, 0LL);
        v27 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v23, v24, v25, v26);
        UnityEngine_Material___ctor(v27, v22, 0LL);
        if ( v27 )
        {
          UnityEngine_Material__SetTexture(v27, (System_String_o *)StringLiteral_15875/*"_ChocoTex"*/, UIAtlas, 0LL);
          v32 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v28, v29, v30, v31);
          UnityEngine_Material___ctor_40718828(v32, v27, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v32, 0LL);
          return;
        }
      }
LABEL_21:
      sub_B170D4();
    case 2:
      v14 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v14 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      if ( sp )
      {
        static_fields = v14->static_fields;
        r = static_fields->SHADOW_COLOR.fields.r;
        g = static_fields->SHADOW_COLOR.fields.g;
        b = static_fields->SHADOW_COLOR.fields.b;
        a = static_fields->SHADOW_COLOR.fields.a;
LABEL_13:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&r, 0LL);
        UISpriteAltMat__ResetMaterial(sp, 0LL);
        return;
      }
      goto LABEL_21;
    case 1:
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( !sp )
        goto LABEL_21;
      goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispTypeEnemyTex(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  WaveBattleWaveEnemyInfoItem_c *v10; // x0
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x8

  if ( (byte_40F675C & 1) == 0 )
  {
    sub_B16FFC(&WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp);
    byte_40F675C = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      v10 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v10 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      if ( !texture )
LABEL_15:
        sub_B170D4();
      static_fields = v10->static_fields;
      r = static_fields->SHADOW_COLOR.fields.r;
      g = static_fields->SHADOW_COLOR.fields.g;
      b = static_fields->SHADOW_COLOR.fields.b;
      a = static_fields->SHADOW_COLOR.fields.a;
      goto LABEL_13;
    case 1:
LABEL_6:
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( !texture )
        goto LABEL_15;
LABEL_13:
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&r, 0LL);
      break;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType_18349000(
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
  int v11; // s0
  UnityEngine_Object_o *v15; // x0
  System_String_o *name; // x20
  WaveBattleWaveEnemyInfoItem_c *v17; // x0
  WaveBattleWaveEnemyInfoItem_c *v18; // x0
  UnityEngine_Object_o *v19; // x0
  System_String_o *v20; // x0
  int v21; // s0
  UnityEngine_Texture_o *UIAtlas; // x20
  WaveBattleWaveEnemyInfoItem_c *v26; // x8
  UnityEngine_Shader_o *v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  UnityEngine_Material_o *v32; // x21
  UnityEngine_Texture_o *v33; // x0
  UnityEngine_Shader_o *v34; // x1

  if ( (byte_40F675B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_Texture2D___, v6);
    sub_B16FFC(&WaveBattleWaveEnemyInfoItem_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_15950/*"_MainTex"*/, v8);
    sub_B16FFC(&StringLiteral_15875/*"_ChocoTex"*/, v9);
    sub_B16FFC(&StringLiteral_12773/*"Shaders/ChocoMap"*/, v10);
    byte_40F675B = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v21, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                           (System_String_o *)StringLiteral_12773/*"Shaders/ChocoMap"*/,
                                           (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_Texture2D___);
      v26 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v26 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v27 = UnityEngine_Shader__Find(v26->static_fields->CHOCO_SHADER_TX, 0LL);
      v32 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v28, v29, v30, v31);
      UnityEngine_Material___ctor(v32, v27, 0LL);
      if ( v32 )
      {
        UnityEngine_Material__SetTexture(v32, (System_String_o *)StringLiteral_15875/*"_ChocoTex"*/, UIAtlas, 0LL);
        v33 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                         texture,
                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        UnityEngine_Material__SetTexture(v32, (System_String_o *)StringLiteral_15950/*"_MainTex"*/, v33, 0LL);
        ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
          texture,
          v32,
          texture->klass->vtable._26_get_mainTexture.methodPtr);
        ((void (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._30_MarkAsChanged.method)(
          texture,
          texture->klass->vtable._31_Awake.methodPtr);
        return;
      }
    }
    goto LABEL_34;
  }
  if ( dispTp != 2 )
  {
    if ( dispTp != 1 )
      return;
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v11, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
        texture,
        0LL,
        texture->klass->vtable._26_get_mainTexture.methodPtr);
      v15 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                      texture,
                                      texture->klass->vtable._29_set_shader.methodPtr);
      if ( v15 )
      {
        name = UnityEngine_Object__get_name(v15, 0LL);
        if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        }
        if ( name )
        {
          if ( !System_String__Equals_43731072(
                  name,
                  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v17 = WaveBattleWaveEnemyInfoItem_TypeInfo;
            if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
              || WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
            {
              goto LABEL_33;
            }
            goto LABEL_32;
          }
          return;
        }
      }
    }
LABEL_34:
    sub_B170D4();
  }
  v18 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
    v18 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  }
  if ( !texture )
    goto LABEL_34;
  UIWidget__set_color((UIWidget_o *)texture, v18->static_fields->SHADOW_COLOR, 0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  v19 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                  texture,
                                  texture->klass->vtable._29_set_shader.methodPtr);
  if ( !v19 )
    goto LABEL_34;
  v20 = UnityEngine_Object__get_name(v19, 0LL);
  if ( !v20 )
    goto LABEL_34;
  if ( !System_String__Equals_43731072(v20, WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER, 0LL) )
  {
    v17 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_33;
    }
LABEL_32:
    j_il2cpp_runtime_class_init_0(v17);
    v17 = WaveBattleWaveEnemyInfoItem_TypeInfo;
LABEL_33:
    v34 = UnityEngine_Shader__Find(v17->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v34,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetEnemyName(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t EnemyNameEffect; // w0
  int32_t v9; // w21
  System_String_o *NameEffectPath; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  AssetLoader_LoadEndDataHandler_o *v15; // x22
  UILabel_o *textLb; // x20
  System_String_o *BattleName; // x0

  if ( (byte_40F675E & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, viewEnemyEnt);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B16FFC(&Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__, v7);
    byte_40F675E = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_14;
  EnemyNameEffect = ViewWaveEnemyEntity__GetEnemyNameEffect(viewEnemyEnt, 0LL);
  if ( EnemyNameEffect )
  {
    v9 = EnemyNameEffect;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v9, 0LL);
    v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12, v13, v14);
    AssetLoader_LoadEndDataHandler___ctor(
      v15,
      (Il2CppObject *)this,
      Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(NameEffectPath, v15, 1, 0LL);
  }
  textLb = this->fields.textLb;
  BattleName = ViewWaveEnemyEntity__GetBattleName(viewEnemyEnt, 0LL);
  if ( !textLb )
LABEL_14:
    sub_B170D4();
  UILabel__set_text(textLb, BattleName, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetItem(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ViewWaveEnemyEntity_o **v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // w23
  UnityEngine_Component_o *svtImg; // x0
  struct UITexture_o **p_svtImg; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *enemySp; // x0
  UnityEngine_GameObject_o *v31; // x0
  UISprite_o *v32; // x22
  int32_t iconId; // w23
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  UnityEngine_Behaviour_o *v38; // x0
  UnityEngine_Behaviour_o *enemyTexture; // x0
  WaveBattleWaveEnemyInfoItem_o *v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x2
  ViewWaveEnemyEntity_o *v43; // x8
  UITexture_o *v44; // x24
  int32_t limitCount; // w21
  int32_t svtId; // w23
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  WaveBattleWaveEnemyInfoItem_o *v54; // x0
  const MethodInfo *v55; // x3
  UnityEngine_Component_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  ViewWaveEnemyEntity_o *v58; // x22
  System_Action_o *v59; // x23
  const MethodInfo *v60; // x3
  bool IsDispDanger; // w0
  bool v62; // w21
  UnityEngine_GameObject_o *v63; // x0
  UISprite_o *dangerSprite; // x21
  struct UISprite_o *v65; // x0
  ServantClassIconComponent_o *classComp; // x0

  if ( (byte_40F6759 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, viewEnemyEnt);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v8);
    sub_B16FFC(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__, v9);
    sub_B16FFC(&WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_18302/*"enemy_icon_leader"*/, v11);
    byte_40F6759 = 1;
  }
  v12 = sub_B170CC(WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo, viewEnemyEnt, method, v3, v4);
  WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0___ctor(
    (WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_41;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = viewEnemyEnt;
  v19 = (ViewWaveEnemyEntity_o **)(v12 + 24);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)viewEnemyEnt,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !*(_QWORD *)(v12 + 24) )
    goto LABEL_41;
  v26 = *(_DWORD *)(*(_QWORD *)(v12 + 24) + 44LL);
  p_svtImg = &this->fields.svtImg;
  svtImg = (UnityEngine_Component_o *)this->fields.svtImg;
  if ( !svtImg )
    goto LABEL_41;
  gameObject = UnityEngine_Component__get_gameObject(svtImg, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  if ( v26 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    enemySp = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !enemySp )
      goto LABEL_41;
    v31 = UnityEngine_Component__get_gameObject(enemySp, 0LL);
    if ( !v31 )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(v31, 1, 0LL);
    if ( !*v19 )
      goto LABEL_41;
    v32 = (UISprite_o *)this->fields.enemySp;
    iconId = (*v19)->fields.iconId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEnemy(v32, iconId, 0LL) )
    {
      v38 = (UnityEngine_Behaviour_o *)this->fields.enemySp;
      if ( !v38 )
        goto LABEL_41;
      UnityEngine_Behaviour__set_enabled(v38, 1, 0LL);
      enemyTexture = (UnityEngine_Behaviour_o *)this->fields.enemyTexture;
      if ( !enemyTexture )
        goto LABEL_41;
      UnityEngine_Behaviour__set_enabled(enemyTexture, 0, 0LL);
      if ( !*v19 )
        goto LABEL_41;
      WaveBattleWaveEnemyInfoItem__SetDispType(v40, (*v19)->fields.displayType, this->fields.enemySp, v41);
    }
    else
    {
      v58 = *(ViewWaveEnemyEntity_o **)(v12 + 24);
      v59 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v34, v35, v36, v37);
      System_Action___ctor(
        v59,
        (Il2CppObject *)v12,
        Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__,
        0LL);
      WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(this, v58, v59, v60);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v43 = *v19;
    if ( !*v19 )
      goto LABEL_41;
    v44 = *p_svtImg;
    svtId = v43->fields.svtId;
    limitCount = v43->fields.limitCount;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                        v44,
                                                        svtId,
                                                        limitCount,
                                                        limitCount,
                                                        0LL);
    *p_svtImg = (struct UITexture_o *)Manager__loadCommandCard;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.svtImg,
      Manager__loadCommandCard,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    if ( !*v19 )
      goto LABEL_41;
    WaveBattleWaveEnemyInfoItem__SetDispType_18349000(v54, (*v19)->fields.displayType, this->fields.svtImg, v55);
    v56 = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !v56 )
      goto LABEL_41;
    v57 = UnityEngine_Component__get_gameObject(v56, 0LL);
    if ( !v57 )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(v57, 0, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__SetEnemyName(this, *v19, v42);
  if ( !*v19 )
    goto LABEL_41;
  IsDispDanger = ViewWaveEnemyEntity__IsDispDanger(*v19, 0LL);
  if ( !this->fields.dangerSprite )
    goto LABEL_41;
  v62 = IsDispDanger;
  v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.dangerSprite, 0LL);
  if ( !v63 )
    goto LABEL_41;
  if ( !v62 )
  {
    UnityEngine_GameObject__SetActive(v63, 0, 0LL);
    goto LABEL_38;
  }
  UnityEngine_GameObject__SetActive(v63, 1, 0LL);
  dangerSprite = this->fields.dangerSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(dangerSprite, (System_String_o *)StringLiteral_18302/*"enemy_icon_leader"*/, 0LL);
  v65 = this->fields.dangerSprite;
  if ( !v65 )
LABEL_41:
    sub_B170D4();
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v65->klass->vtable._33_MakePixelPerfect.method)(
    v65,
    v65->klass->vtable._34_get_minWidth.methodPtr);
LABEL_38:
  if ( !*v19 )
    goto LABEL_41;
  classComp = this->fields.classComp;
  if ( !classComp )
    goto LABEL_41;
  ServantClassIconComponent__SetWithClassOverWrite(
    classComp,
    (*v19)->fields.svtId,
    (*v19)->fields.limitCount,
    (*v19)->fields.classId,
    0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem___SetEnemyName_b__22_0(
        WaveBattleWaveEnemyInfoItem_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Component_o *textLb; // x8
  UILabel_o *v10; // x19
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_40F6761 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, assetData);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_21532/*"quest_info"*/, v7);
    byte_40F6761 = 1;
  }
  if ( !assetData
    || (Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           assetData,
                                           (System_String_o *)StringLiteral_21532/*"quest_info"*/,
                                           (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784),
        (textLb = (UnityEngine_Component_o *)this->fields.textLb) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = (UILabel_o *)Object_WarBoardWaitTimeSetting;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    v10,
    transform,
    (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
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
  UnityEngine_Behaviour_o *enemySp; // x0
  struct WaveBattleWaveEnemyInfoItem_o *v5; // x8
  UnityEngine_Behaviour_o *enemyTexture; // x0
  struct ViewWaveEnemyEntity_o *viewEnemyEnt; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v8; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (enemySp = (UnityEngine_Behaviour_o *)_4__this->fields.enemySp) == 0LL
    || (UnityEngine_Behaviour__set_enabled(enemySp, 0, 0LL), (v5 = this->fields.__4__this) == 0LL)
    || (enemyTexture = (UnityEngine_Behaviour_o *)v5->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled(enemyTexture, 1, 0LL), (viewEnemyEnt = this->fields.viewEnemyEnt) == 0LL)
    || (v8 = this->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  WaveBattleWaveEnemyInfoItem__SetDispTypeEnemyTex(v8, viewEnemyEnt->fields.displayType, v8->fields.enemyTexture, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct WaveBattleWaveEnemyInfoItem_o *_4__this; // x0
  UnityEngine_Shader_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UnityEngine_Material_o *v21; // x20
  struct WaveBattleWaveEnemyInfoItem_o *v22; // x8
  struct UITexture_o *enemyTexture; // x0
  struct WaveBattleWaveEnemyInfoItem_o *v24; // x8
  AssetData_o *enemyIconAssetData; // x0
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  struct WaveBattleWaveEnemyInfoItem_o *v27; // x8
  AssetData_o *v28; // x21
  System_String_o *v29; // x0
  UnityEngine_Texture_o *v30; // x0
  CommonUI_o *Instance; // x0
  CommonUI_o *v32; // x0

  if ( (byte_40F789C & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, assetData);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_16070/*"_alpha"*/, v12);
    sub_B16FFC(&StringLiteral_4519/*"Custom/SpriteWithMask"*/, v13);
    sub_B16FFC(&StringLiteral_15952/*"_MaskTex"*/, v14);
    byte_40F789C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  _4__this->fields.enemyIconAssetData = assetData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.enemyIconAssetData,
    (System_Int32_array **)assetData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519/*"Custom/SpriteWithMask"*/, 0LL);
  v21 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v17, v18, v19, v20);
  UnityEngine_Material___ctor(v21, v16, 0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_16;
  enemyTexture = v22->fields.enemyTexture;
  if ( !enemyTexture )
    goto LABEL_16;
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))enemyTexture->klass->vtable._25_set_material.method)(
    enemyTexture,
    v21,
    enemyTexture->klass->vtable._26_get_mainTexture.methodPtr);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_16;
  enemyIconAssetData = v24->fields.enemyIconAssetData;
  if ( !enemyIconAssetData )
    goto LABEL_16;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              enemyIconAssetData,
                                                              v24->fields.enemyIconName,
                                                              (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v21 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v21, Object_WarBoardWaitTimeSetting, 0LL);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_16;
  v28 = v27->fields.enemyIconAssetData;
  v29 = System_String__Concat_43743732(v27->fields.enemyIconName, (System_String_o *)StringLiteral_16070/*"_alpha"*/, 0LL);
  if ( !v28 )
    goto LABEL_16;
  v30 = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                   v28,
                                   v29,
                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  UnityEngine_Material__SetTexture(v21, (System_String_o *)StringLiteral_15952/*"_MaskTex"*/, v30, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  if ( CommonUI__IsLoadMode(Instance, 1, 0LL) )
  {
    v32 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v32 )
    {
      CommonUI__SetLoadMode(v32, 0, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_15:
  ActionExtensions__Call(this->fields.callback, 0LL);
}