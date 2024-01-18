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

  if ( (byte_41873FE & 1) == 0 )
  {
    sub_B2C35C(&WaveBattleWaveEnemyInfoItem_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18370/*"enemy_icon_"*/, v8);
    sub_B2C35C(&StringLiteral_15014/*"Unlit/Transparent Colored"*/, v9);
    sub_B2C35C(&StringLiteral_15015/*"Unlit/Transparent Colored_Choco"*/, v10);
    sub_B2C35C(&StringLiteral_6000/*"Enemys/Icon/"*/, v11);
    sub_B2C35C(&StringLiteral_4538/*"Custom/SpriteWithMask_Choco"*/, v12);
    byte_41873FE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_15015/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15015/*"Unlit/Transparent Colored_Choco"*/;
  sub_B2C2F8(static_fields, v14, v2, v3, v4, v5, v6, v7);
  v15 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v16 = (System_Int32_array **)StringLiteral_4538/*"Custom/SpriteWithMask_Choco"*/;
  v15->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4538/*"Custom/SpriteWithMask_Choco"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v15->CHOCO_SHADER_SP, v16, v17, v18, v19, v20, v21, v22);
  v23 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v24 = (System_Int32_array **)StringLiteral_6000/*"Enemys/Icon/"*/;
  v23->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6000/*"Enemys/Icon/"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->ENEMY_ICON_TEXTURE_PATH, v24, v25, v26, v27, v28, v29, v30);
  v31 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_18370/*"enemy_icon_"*/;
  v31->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18370/*"enemy_icon_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v31->ENEMY_ICON_TEXTURE_PREFIX, v32, v33, v34, v35, v36, v37, v38);
  v53.fields.r = 0.05;
  v53.fields.a = 1.0;
  v53.fields.g = 0.05;
  v53.fields.b = 0.05;
  v52 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v53, v39, v40, v41, v42, (const MethodInfo *)&v52);
  v43 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR = v52;
  v44 = v43->static_fields;
  v45 = (System_Int32_array **)StringLiteral_15014/*"Unlit/Transparent Colored"*/;
  v44->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15014/*"Unlit/Transparent Colored"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v44->DEFAULT_SHADER, v45, v46, v47, v48, v49, v50, v51);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  int32_t iconId; // w9
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v31; // x0
  struct System_String_o *v32; // x0
  struct System_String_o **p_enemyIconName; // x19
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_o *v40; // x19
  AssetLoader_LoadEndDataHandler_o *v41; // x20
  int32_t v42; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_41873FD & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, viewEnemyEnt);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__, v10);
    sub_B2C35C(&WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo, v11);
    sub_B2C35C(&WaveBattleWaveEnemyInfoItem_TypeInfo, v12);
    byte_41873FD = 1;
  }
  v13 = sub_B2C42C(WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo);
  WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0___ctor(
    (WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_21;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( CommonUI__IsLoadMode(Instance, 0, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, v28);
  Instance = (CommonUI_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
  }
  if ( !viewEnemyEnt )
LABEL_21:
    sub_B2C434(Instance, v15);
  iconId = viewEnemyEnt->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v42 = iconId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v32 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v31, 0LL);
  this->fields.enemyIconName = v32;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_B2C2F8((BattleServantConfConponent_o *)p_enemyIconName, (System_Int32_array **)v32, v34, v35, v36, v37, v38, v39);
  v40 = System_String__Concat_44305532(
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v41,
    (Il2CppObject *)v13,
    Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v40, v41, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__IsLoadMode(Instance, 1, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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

  if ( (byte_41873FB & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&WaveBattleWaveEnemyInfoItem_TypeInfo, v3);
    byte_41873FB = 1;
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
    v6 = System_String__Concat_44305532(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (BattleServantConfConponent_o *)&this->fields.enemyIconAssetData;
    sub_B2C2F8(p_enemyIconAssetData, 0LL, v8, v9, v10, v11, v12, v13);
    p_enemyIconAssetData->monitor = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_enemyIconName, 0LL, v14, v15, v16, v17, v18, v19);
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
  WaveBattleWaveEnemyInfoItem_c *v10; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x8
  int v16; // s0
  UnityEngine_Texture_o *UIAtlas; // x20
  WaveBattleWaveEnemyInfoItem_c *v21; // x8
  UnityEngine_Shader_o *v22; // x22
  UnityEngine_Material_o *v23; // x21
  UnityEngine_Material_o *v24; // x20

  if ( (byte_41873F8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v6);
    sub_B2C35C(&WaveBattleWaveEnemyInfoItem_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_15938/*"_ChocoTex"*/, v8);
    sub_B2C35C(&StringLiteral_12829/*"Shaders/ChocoMap"*/, v9);
    byte_41873F8 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
      if ( sp )
      {
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v16, 0LL);
        UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                             (System_String_o *)StringLiteral_12829/*"Shaders/ChocoMap"*/,
                                             (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
        v21 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v21 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        v22 = UnityEngine_Shader__Find(v21->static_fields->CHOCO_SHADER_SP, 0LL);
        v23 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor(v23, v22, 0LL);
        if ( v23 )
        {
          UnityEngine_Material__SetTexture(v23, (System_String_o *)StringLiteral_15938/*"_ChocoTex"*/, UIAtlas, 0LL);
          v24 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_40686000(v24, v23, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v24, 0LL);
          return;
        }
      }
LABEL_21:
      sub_B2C434(v10, *(_QWORD *)&dispTp);
    case 2:
      v10 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v10 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      if ( sp )
      {
        static_fields = v10->static_fields;
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

  if ( (byte_41873FA & 1) == 0 )
  {
    sub_B2C35C(&WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp);
    byte_41873FA = 1;
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
        sub_B2C434(v6, *(_QWORD *)&dispTp);
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
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType_24510660(
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
  UnityEngine_Object_o *name; // x0
  int v12; // s0
  System_String_o *v16; // x20
  WaveBattleWaveEnemyInfoItem_c *v17; // x0
  int v18; // s0
  UnityEngine_Texture_o *UIAtlas; // x20
  WaveBattleWaveEnemyInfoItem_c *v23; // x8
  UnityEngine_Shader_o *v24; // x22
  UnityEngine_Material_o *v25; // x21
  UnityEngine_Texture_o *v26; // x0
  UnityEngine_Shader_o *v27; // x1

  if ( (byte_41873F9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_Texture2D___, v6);
    sub_B2C35C(&WaveBattleWaveEnemyInfoItem_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, v8);
    sub_B2C35C(&StringLiteral_15938/*"_ChocoTex"*/, v9);
    sub_B2C35C(&StringLiteral_12829/*"Shaders/ChocoMap"*/, v10);
    byte_41873F9 = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v18, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                           (System_String_o *)StringLiteral_12829/*"Shaders/ChocoMap"*/,
                                           (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      v23 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v23 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v24 = UnityEngine_Shader__Find(v23->static_fields->CHOCO_SHADER_TX, 0LL);
      v25 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v25, v24, 0LL);
      if ( v25 )
      {
        UnityEngine_Material__SetTexture(v25, (System_String_o *)StringLiteral_15938/*"_ChocoTex"*/, UIAtlas, 0LL);
        v26 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                         texture,
                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        UnityEngine_Material__SetTexture(v25, (System_String_o *)StringLiteral_16013/*"_MainTex"*/, v26, 0LL);
        ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
          texture,
          v25,
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
    *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v12, 0LL);
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
        v16 = (System_String_o *)name;
        if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        }
        if ( v16 )
        {
          if ( !System_String__Equals_44292872(
                  v16,
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
    sub_B2C434(name, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_44292872(
          (System_String_o *)name,
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
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
    v27 = UnityEngine_Shader__Find(v17->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v27,
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
  UILabel_o *monitor; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_41873FC & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, viewEnemyEnt);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v6);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_B2C35C(&Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__, v7);
    byte_41873FC = 1;
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
    v11 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v11, v4, Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(NameEffectPath, v11, 1, 0LL);
  }
  monitor = (UILabel_o *)v4[2].monitor;
  this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__GetBattleName(viewEnemyEnt, 0LL);
  if ( !monitor )
LABEL_14:
    sub_B2C434(this, viewEnemyEnt);
  UILabel__set_text(monitor, (System_String_o *)this, 0LL);
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
  struct UITexture_o **p_svtImg; // x22
  UISprite_o *enemySp; // x22
  int32_t iconId; // w23
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x2
  ViewWaveEnemyEntity_o *v32; // x8
  UITexture_o *v33; // x24
  int32_t limitCount; // w21
  int32_t svtId; // w23
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x3
  ViewWaveEnemyEntity_o *v44; // x22
  System_Action_o *v45; // x23
  const MethodInfo *v46; // x3
  char v47; // w21
  UISprite_o *dangerSprite; // x21

  if ( (byte_41873F7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, viewEnemyEnt);
    sub_B2C35C(&AtlasManager_TypeInfo, v5);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B2C35C(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__, v7);
    sub_B2C35C(&WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_18371/*"enemy_icon_leader"*/, v9);
    byte_41873F7 = 1;
  }
  v10 = sub_B2C42C(WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo);
  WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0___ctor(
    (WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_o *)v10,
    0LL);
  if ( !v10 )
    goto LABEL_41;
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = viewEnemyEnt;
  v19 = (ViewWaveEnemyEntity_o **)(v10 + 24);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v10 + 24),
    (System_Int32_array **)viewEnemyEnt,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !*(_QWORD *)(v10 + 24) )
    goto LABEL_41;
  v26 = *(_DWORD *)(*(_QWORD *)(v10 + 24) + 44LL);
  p_svtImg = &this->fields.svtImg;
  svtImg = (UnityEngine_Component_o *)this->fields.svtImg;
  if ( !svtImg )
    goto LABEL_41;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
  if ( !svtImg )
    goto LABEL_41;
  if ( v26 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_41;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    if ( !*v19 )
      goto LABEL_41;
    enemySp = (UISprite_o *)this->fields.enemySp;
    iconId = (*v19)->fields.iconId;
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
      if ( !*v19 )
        goto LABEL_41;
      WaveBattleWaveEnemyInfoItem__SetDispType(
        (WaveBattleWaveEnemyInfoItem_o *)svtImg,
        (*v19)->fields.displayType,
        this->fields.enemySp,
        v30);
    }
    else
    {
      v44 = *(ViewWaveEnemyEntity_o **)(v10 + 24);
      v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v45,
        (Il2CppObject *)v10,
        Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__,
        0LL);
      WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(this, v44, v45, v46);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    v32 = *v19;
    if ( !*v19 )
      goto LABEL_41;
    v33 = *p_svtImg;
    svtId = v32->fields.svtId;
    limitCount = v32->fields.limitCount;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                        v33,
                                                        svtId,
                                                        limitCount,
                                                        limitCount,
                                                        0LL);
    *p_svtImg = (struct UITexture_o *)Manager__loadCommandCard;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.svtImg,
      Manager__loadCommandCard,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    if ( !*v19 )
      goto LABEL_41;
    WaveBattleWaveEnemyInfoItem__SetDispType_24510660(
      (WaveBattleWaveEnemyInfoItem_o *)svtImg,
      (*v19)->fields.displayType,
      this->fields.svtImg,
      v43);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_41;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__SetEnemyName(this, *v19, v31);
  svtImg = (UnityEngine_Component_o *)*v19;
  if ( !*v19 )
    goto LABEL_41;
  svtImg = (UnityEngine_Component_o *)ViewWaveEnemyEntity__IsDispDanger((ViewWaveEnemyEntity_o *)svtImg, 0LL);
  if ( !this->fields.dangerSprite )
    goto LABEL_41;
  v47 = (char)svtImg;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.dangerSprite,
                                        0LL);
  if ( !svtImg )
    goto LABEL_41;
  if ( (v47 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    goto LABEL_38;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
  dangerSprite = this->fields.dangerSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(dangerSprite, (System_String_o *)StringLiteral_18371/*"enemy_icon_leader"*/, 0LL);
  svtImg = (UnityEngine_Component_o *)this->fields.dangerSprite;
  if ( !svtImg )
LABEL_41:
    sub_B2C434(svtImg, v12);
  svtImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))svtImg->klass[2]._1.typeMetadataHandle)(
                                        svtImg,
                                        svtImg->klass[2]._1.interopData);
LABEL_38:
  if ( !*v19 )
    goto LABEL_41;
  svtImg = (UnityEngine_Component_o *)this->fields.classComp;
  if ( !svtImg )
    goto LABEL_41;
  ServantClassIconComponent__SetWithClassOverWrite(
    (ServantClassIconComponent_o *)svtImg,
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
  WaveBattleWaveEnemyInfoItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *textLb; // x8
  UILabel_o *v9; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_41873FF & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, assetData);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_B2C35C(&StringLiteral_21624/*"quest_info"*/, v7);
    byte_41873FF = 1;
  }
  if ( !assetData
    || (this = (WaveBattleWaveEnemyInfoItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                  assetData,
                                                  (System_String_o *)StringLiteral_21624/*"quest_info"*/,
                                                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_B2C434(this, assetData);
  }
  v9 = (UILabel_o *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    v9,
    transform,
    (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
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
    sub_B2C434(this, method);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct WaveBattleWaveEnemyInfoItem_o *v13; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v14; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v15; // x8
  AssetData_o *enemyIconAssetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_4185562 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, assetData);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_16133/*"_alpha"*/, v7);
    sub_B2C35C(&StringLiteral_4537/*"Custom/SpriteWithMask"*/, v8);
    sub_B2C35C(&StringLiteral_16015/*"_MaskTex"*/, v9);
    byte_4185562 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  _4__this->fields.objectList = (struct UnityEngine_Object_array *)assetData;
  sub_B2C2F8(&_4__this->fields.objectList, assetData);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4537/*"Custom/SpriteWithMask"*/, 0LL);
  v12 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v12, v11, 0LL);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_16;
  _4__this = (AssetData_o *)v13->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v12,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_16;
  _4__this = v14->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                              _4__this,
                              v14->fields.enemyIconName,
                              (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v12 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)_4__this, 0LL);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  enemyIconAssetData = v15->fields.enemyIconAssetData;
  _4__this = (AssetData_o *)System_String__Concat_44305532(
                              v15->fields.enemyIconName,
                              (System_String_o *)StringLiteral_16133/*"_alpha"*/,
                              0LL);
  if ( !enemyIconAssetData )
    goto LABEL_16;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              enemyIconAssetData,
                                                              (System_String_o *)_4__this,
                                                              (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  UnityEngine_Material__SetTexture(v12, (System_String_o *)StringLiteral_16015/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
  _4__this = (AssetData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  if ( CommonUI__IsLoadMode((CommonUI_o *)_4__this, 1, 0LL) )
  {
    _4__this = (AssetData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_B2C434(_4__this, assetData);
  }
LABEL_15:
  ActionExtensions__Call(this->fields.callback, 0LL);
}