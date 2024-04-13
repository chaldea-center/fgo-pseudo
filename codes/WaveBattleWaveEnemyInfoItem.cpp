void __fastcall WaveBattleWaveEnemyInfoItem___cctor(const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v24; // x1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  float v49; // s4
  float v50; // s5
  float v51; // s6
  float v52; // s7
  WaveBattleWaveEnemyInfoItem_c *v53; // x8
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v54; // x0
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct UnityEngine_Color_o v62; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E737A & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleWaveEnemyInfoItem_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18599/*"enemy_icon_"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15172/*"Unlit/Transparent Colored"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_15173/*"Unlit/Transparent Colored_Choco"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_6079/*"Enemys/Icon/"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_4610/*"Custom/SpriteWithMask_Choco"*/, v20, v21, v22);
    byte_42E737A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v24 = (System_Int32_array **)StringLiteral_15173/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15173/*"Unlit/Transparent Colored_Choco"*/;
  sub_B5D560(static_fields, v24, v2, v3, v4, v5, v6, v7);
  v25 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_4610/*"Custom/SpriteWithMask_Choco"*/;
  v25->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4610/*"Custom/SpriteWithMask_Choco"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v25->CHOCO_SHADER_SP, v26, v27, v28, v29, v30, v31, v32);
  v33 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_6079/*"Enemys/Icon/"*/;
  v33->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6079/*"Enemys/Icon/"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v33->ENEMY_ICON_TEXTURE_PATH, v34, v35, v36, v37, v38, v39, v40);
  v41 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_18599/*"enemy_icon_"*/;
  v41->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18599/*"enemy_icon_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v41->ENEMY_ICON_TEXTURE_PREFIX, v42, v43, v44, v45, v46, v47, v48);
  v63.fields.r = 0.05;
  v63.fields.a = 1.0;
  v63.fields.g = 0.05;
  v63.fields.b = 0.05;
  v62 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v63, v49, v50, v51, v52, (const MethodInfo *)&v62);
  v53 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR = v62;
  v54 = v53->static_fields;
  v55 = (System_Int32_array **)StringLiteral_15172/*"Unlit/Transparent Colored"*/;
  v54->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15172/*"Unlit/Transparent Colored"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v54->DEFAULT_SHADER, v55, v56, v57, v58, v59, v60, v61);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x21
  CommonUI_o *Instance; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  int32_t iconId; // w9
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v43; // x0
  struct System_String_o *v44; // x0
  struct System_String_o **p_enemyIconName; // x19
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *v52; // x19
  AssetLoader_LoadEndDataHandler_o *v53; // x20
  int32_t v54; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E7379 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)viewEnemyEnt, (_DWORD)callback, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__, v16, v17, v18);
    sub_B5D5C4(&WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&WaveBattleWaveEnemyInfoItem_TypeInfo, v22, v23, v24);
    byte_42E7379 = 1;
  }
  v25 = sub_B5D694(WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo);
  WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0___ctor(
    (WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_21;
  *(_QWORD *)(v25 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)callback, v34, v35, v36, v37, v38, v39);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( CommonUI__IsLoadMode(Instance, 0, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, v40);
  Instance = (CommonUI_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
  }
  if ( !viewEnemyEnt )
LABEL_21:
    sub_B5D69C(Instance, v27);
  iconId = viewEnemyEnt->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v54 = iconId;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
  v44 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v43, 0LL);
  this->fields.enemyIconName = v44;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_B5D560((BattleServantConfConponent_o *)p_enemyIconName, (System_Int32_array **)v44, v46, v47, v48, v49, v50, v51);
  v52 = System_String__Concat_44577788(
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v53 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v53,
    (Il2CppObject *)v25,
    Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v52, v53, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__IsLoadMode(Instance, 1, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o **p_enemyIconName; // x20
  WaveBattleWaveEnemyInfoItem_c *v9; // x0
  System_String_o *v10; // x21
  BattleServantConfConponent_o *p_enemyIconAssetData; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E7377 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WaveBattleWaveEnemyInfoItem_TypeInfo, v5, v6, v7);
    byte_42E7377 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v9 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
      v9 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
    v10 = System_String__Concat_44577788(v9->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v10, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (BattleServantConfConponent_o *)&this->fields.enemyIconAssetData;
    sub_B5D560(p_enemyIconAssetData, 0LL, v12, v13, v14, v15, v16, v17);
    p_enemyIconAssetData->monitor = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_enemyIconName, 0LL, v18, v19, v20, v21, v22, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WaveBattleWaveEnemyInfoItem_c *v18; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x8
  int v24; // s0
  UnityEngine_Texture_o *UIAtlas; // x20
  WaveBattleWaveEnemyInfoItem_c *v29; // x8
  UnityEngine_Shader_o *v30; // x22
  UnityEngine_Material_o *v31; // x21
  UnityEngine_Material_o *v32; // x20

  if ( (byte_42E7374 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, dispTp, (_DWORD)sp, method);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v6, v7, v8);
    sub_B5D5C4(&WaveBattleWaveEnemyInfoItem_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v15, v16, v17);
    byte_42E7374 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
      if ( sp )
      {
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v24, 0LL);
        UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                             (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                             (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
        v29 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v29 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        v30 = UnityEngine_Shader__Find(v29->static_fields->CHOCO_SHADER_SP, 0LL);
        v31 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor(v31, v30, 0LL);
        if ( v31 )
        {
          UnityEngine_Material__SetTexture(v31, (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/, UIAtlas, 0LL);
          v32 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_41620632(v32, v31, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v32, 0LL);
          return;
        }
      }
LABEL_21:
      sub_B5D69C(v18, *(_QWORD *)&dispTp);
    case 2:
      v18 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v18 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      if ( sp )
      {
        static_fields = v18->static_fields;
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
  WaveBattleWaveEnemyInfoItem_c *v6; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x8

  if ( (byte_42E7376 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleWaveEnemyInfoItem_TypeInfo, dispTp, (_DWORD)texture, method);
    byte_42E7376 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      v6 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v6 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      if ( !texture )
LABEL_15:
        sub_B5D69C(v6, *(_QWORD *)&dispTp);
      static_fields = v6->static_fields;
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
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType_22710596(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *name; // x0
  int v22; // s0
  System_String_o *v26; // x20
  WaveBattleWaveEnemyInfoItem_c *v27; // x0
  int v28; // s0
  UnityEngine_Texture_o *UIAtlas; // x20
  WaveBattleWaveEnemyInfoItem_c *v33; // x8
  UnityEngine_Shader_o *v34; // x22
  UnityEngine_Material_o *v35; // x21
  UnityEngine_Texture_o *v36; // x0
  UnityEngine_Shader_o *v37; // x1

  if ( (byte_42E7375 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, dispTp, (_DWORD)texture, method);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_Texture2D___, v6, v7, v8);
    sub_B5D5C4(&WaveBattleWaveEnemyInfoItem_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16130/*"_ChocoTex"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12985/*"Shaders/ChocoMap"*/, v18, v19, v20);
    byte_42E7375 = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v28, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                           (System_String_o *)StringLiteral_12985/*"Shaders/ChocoMap"*/,
                                           (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_Texture2D___);
      v33 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v33 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v34 = UnityEngine_Shader__Find(v33->static_fields->CHOCO_SHADER_TX, 0LL);
      v35 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v35, v34, 0LL);
      if ( v35 )
      {
        UnityEngine_Material__SetTexture(v35, (System_String_o *)StringLiteral_16130/*"_ChocoTex"*/, UIAtlas, 0LL);
        v36 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                         texture,
                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        UnityEngine_Material__SetTexture(v35, (System_String_o *)StringLiteral_16205/*"_MainTex"*/, v36, 0LL);
        ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
          texture,
          v35,
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
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v22, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
        texture,
        0LL,
        texture->klass->vtable._26_get_mainTexture.methodPtr);
      name = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                       texture,
                                       texture->klass->vtable._29_set_shader.methodPtr);
      if ( name )
      {
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        v26 = (System_String_o *)name;
        if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        }
        if ( v26 )
        {
          if ( !System_String__Equals_44565128(
                  v26,
                  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v27 = WaveBattleWaveEnemyInfoItem_TypeInfo;
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
    sub_B5D69C(name, *(_QWORD *)&dispTp);
  }
  name = (UnityEngine_Object_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
    name = (UnityEngine_Object_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  }
  if ( !texture )
    goto LABEL_34;
  UIWidget__set_color(
    (UIWidget_o *)texture,
    *(UnityEngine_Color_o *)(*(_QWORD *)&name[7].fields.m_CachedPtr + 32LL),
    0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  name = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                   texture,
                                   texture->klass->vtable._29_set_shader.methodPtr);
  if ( !name )
    goto LABEL_34;
  name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
  if ( !name )
    goto LABEL_34;
  if ( !System_String__Equals_44565128(
          (System_String_o *)name,
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v27 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_33;
    }
LABEL_32:
    j_il2cpp_runtime_class_init_0(v27);
    v27 = WaveBattleWaveEnemyInfoItem_TypeInfo;
LABEL_33:
    v37 = UnityEngine_Shader__Find(v27->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v37,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetEnemyName(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t EnemyNameEffect; // w0
  int32_t v16; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v18; // x22
  UILabel_o *monitor; // x20

  v5 = (Il2CppObject *)this;
  if ( (byte_42E7378 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)viewEnemyEnt, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v9, v10, v11);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_B5D5C4(
                                              &Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__,
                                              v12,
                                              v13,
                                              v14);
    byte_42E7378 = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_14;
  EnemyNameEffect = ViewWaveEnemyEntity__GetEnemyNameEffect(viewEnemyEnt, 0LL);
  if ( EnemyNameEffect )
  {
    v16 = EnemyNameEffect;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v16, 0LL);
    v18 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v18, v5, Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(NameEffectPath, v18, 1, 0LL);
  }
  monitor = (UILabel_o *)v5[2].monitor;
  this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__GetBattleName(viewEnemyEnt, 0LL);
  if ( !monitor )
LABEL_14:
    sub_B5D69C(this, viewEnemyEnt);
  UILabel__set_text(monitor, (System_String_o *)this, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetItem(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x21
  UnityEngine_Component_o *svtImg; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  ViewWaveEnemyEntity_o **v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int v37; // w23
  struct UITexture_o **p_svtImg; // x22
  UISprite_o *enemySp; // x22
  int32_t iconId; // w23
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
  const MethodInfo *v54; // x3
  ViewWaveEnemyEntity_o *v55; // x22
  System_Action_o *v56; // x23
  const MethodInfo *v57; // x3
  char v58; // w21
  UISprite_o *dangerSprite; // x21

  if ( (byte_42E7373 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)viewEnemyEnt, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__, v12, v13, v14);
    sub_B5D5C4(&WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_18600/*"enemy_icon_leader"*/, v18, v19, v20);
    byte_42E7373 = 1;
  }
  v21 = sub_B5D694(WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo);
  WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0___ctor(
    (WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_41;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = viewEnemyEnt;
  v30 = (ViewWaveEnemyEntity_o **)(v21 + 24);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v21 + 24),
    (System_Int32_array **)viewEnemyEnt,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !*(_QWORD *)(v21 + 24) )
    goto LABEL_41;
  v37 = *(_DWORD *)(*(_QWORD *)(v21 + 24) + 44LL);
  p_svtImg = &this->fields.svtImg;
  svtImg = (UnityEngine_Component_o *)this->fields.svtImg;
  if ( !svtImg )
    goto LABEL_41;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
  if ( !svtImg )
    goto LABEL_41;
  if ( v37 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_41;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    if ( !*v30 )
      goto LABEL_41;
    enemySp = (UISprite_o *)this->fields.enemySp;
    iconId = (*v30)->fields.iconId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    if ( AtlasManager__SetEnemy(enemySp, iconId, 0LL) )
    {
      svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
      if ( !svtImg )
        goto LABEL_41;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)svtImg, 1, 0LL);
      svtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
      if ( !svtImg )
        goto LABEL_41;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)svtImg, 0, 0LL);
      if ( !*v30 )
        goto LABEL_41;
      WaveBattleWaveEnemyInfoItem__SetDispType(
        (WaveBattleWaveEnemyInfoItem_o *)svtImg,
        (*v30)->fields.displayType,
        this->fields.enemySp,
        v41);
    }
    else
    {
      v55 = *(ViewWaveEnemyEntity_o **)(v21 + 24);
      v56 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v56,
        (Il2CppObject *)v21,
        Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__,
        0LL);
      WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(this, v55, v56, v57);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    v43 = *v30;
    if ( !*v30 )
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.svtImg,
      Manager__loadCommandCard,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    if ( !*v30 )
      goto LABEL_41;
    WaveBattleWaveEnemyInfoItem__SetDispType_22710596(
      (WaveBattleWaveEnemyInfoItem_o *)svtImg,
      (*v30)->fields.displayType,
      this->fields.svtImg,
      v54);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_41;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__SetEnemyName(this, *v30, v42);
  svtImg = (UnityEngine_Component_o *)*v30;
  if ( !*v30 )
    goto LABEL_41;
  svtImg = (UnityEngine_Component_o *)ViewWaveEnemyEntity__IsDispDanger((ViewWaveEnemyEntity_o *)svtImg, 0LL);
  if ( !this->fields.dangerSprite )
    goto LABEL_41;
  v58 = (char)svtImg;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.dangerSprite,
                                        0LL);
  if ( !svtImg )
    goto LABEL_41;
  if ( (v58 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    goto LABEL_38;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
  dangerSprite = this->fields.dangerSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(dangerSprite, (System_String_o *)StringLiteral_18600/*"enemy_icon_leader"*/, 0LL);
  svtImg = (UnityEngine_Component_o *)this->fields.dangerSprite;
  if ( !svtImg )
LABEL_41:
    sub_B5D69C(svtImg, v23);
  svtImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))svtImg->klass[2]._1.typeMetadataHandle)(
                                        svtImg,
                                        svtImg->klass[2]._1.interopData);
LABEL_38:
  if ( !*v30 )
    goto LABEL_41;
  svtImg = (UnityEngine_Component_o *)this->fields.classComp;
  if ( !svtImg )
    goto LABEL_41;
  ServantClassIconComponent__SetWithClassOverWrite(
    (ServantClassIconComponent_o *)svtImg,
    (*v30)->fields.svtId,
    (*v30)->fields.limitCount,
    (*v30)->fields.classId,
    0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem___SetEnemyName_b__22_0(
        WaveBattleWaveEnemyInfoItem_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WaveBattleWaveEnemyInfoItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Component_o *textLb; // x8
  UILabel_o *v16; // x19
  UnityEngine_Transform_o *transform; // x20

  v5 = this;
  if ( (byte_42E737B & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_B5D5C4(&StringLiteral_21915/*"quest_info"*/, v12, v13, v14);
    byte_42E737B = 1;
  }
  if ( !assetData
    || (this = (WaveBattleWaveEnemyInfoItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                  assetData,
                                                  (System_String_o *)StringLiteral_21915/*"quest_info"*/,
                                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504),
        (textLb = (UnityEngine_Component_o *)v5->fields.textLb) == 0LL) )
  {
    sub_B5D69C(this, assetData);
  }
  v16 = (UILabel_o *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    v16,
    transform,
    (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
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
  struct ViewWaveEnemyEntity_o *viewEnemyEnt; // x8

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
    || (this = (WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_o *)v3->fields.__4__this) == 0LL )
  {
LABEL_8:
    sub_B5D69C(this, method);
  }
  WaveBattleWaveEnemyInfoItem__SetDispTypeEnemyTex(
    (WaveBattleWaveEnemyInfoItem_o *)this,
    viewEnemyEnt->fields.displayType,
    (UITexture_o *)this[2].klass,
    0LL);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v22; // x21
  UnityEngine_Material_o *v23; // x20
  struct WaveBattleWaveEnemyInfoItem_o *v24; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v25; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v26; // x8
  AssetData_o *enemyIconAssetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_42E5FFD & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16326/*"_alpha"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v18, v19, v20);
    byte_42E5FFD = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  _4__this->fields.objectList = (struct UnityEngine_Object_array *)assetData;
  sub_B5D560(&_4__this->fields.objectList);
  v22 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
  v23 = (UnityEngine_Material_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v23, v22, 0LL);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_16;
  _4__this = (AssetData_o *)v24->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v23,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_16;
  _4__this = v25->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                              _4__this,
                              v25->fields.enemyIconName,
                              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  if ( !v23 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v23, (UnityEngine_Texture_o *)_4__this, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_16;
  enemyIconAssetData = v26->fields.enemyIconAssetData;
  _4__this = (AssetData_o *)System_String__Concat_44577788(
                              v26->fields.enemyIconName,
                              (System_String_o *)StringLiteral_16326/*"_alpha"*/,
                              0LL);
  if ( !enemyIconAssetData )
    goto LABEL_16;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              enemyIconAssetData,
                                                              (System_String_o *)_4__this,
                                                              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
  UnityEngine_Material__SetTexture(v23, (System_String_o *)StringLiteral_16207/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
  _4__this = (AssetData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  if ( CommonUI__IsLoadMode((CommonUI_o *)_4__this, 1, 0LL) )
  {
    _4__this = (AssetData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_B5D69C(_4__this, assetData);
  }
LABEL_15:
  ActionExtensions__Call(this->fields.callback, 0LL);
}