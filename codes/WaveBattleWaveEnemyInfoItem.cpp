void __fastcall WaveBattleWaveEnemyInfoItem___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  float v33; // s4
  float v34; // s5
  float v35; // s6
  float v36; // s7
  WaveBattleWaveEnemyInfoItem_c *v37; // x8
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct UnityEngine_Color_o v46; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AF968 & 1) == 0 )
  {
    sub_B52984(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_B52984(&StringLiteral_18504/*"enemy_icon_"*/);
    sub_B52984(&StringLiteral_15113/*"Unlit/Transparent Colored"*/);
    sub_B52984(&StringLiteral_15114/*"Unlit/Transparent Colored_Choco"*/);
    sub_B52984(&StringLiteral_6043/*"Enemys/Icon/"*/);
    sub_B52984(&StringLiteral_4577/*"Custom/SpriteWithMask_Choco"*/);
    byte_42AF968 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_15114/*"Unlit/Transparent Colored_Choco"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15114/*"Unlit/Transparent Colored_Choco"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_4577/*"Custom/SpriteWithMask_Choco"*/;
  v9->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4577/*"Custom/SpriteWithMask_Choco"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->CHOCO_SHADER_SP, v10, v11, v12, v13, v14, v15, v16);
  v17 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6043/*"Enemys/Icon/"*/;
  v17->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6043/*"Enemys/Icon/"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->ENEMY_ICON_TEXTURE_PATH, v18, v19, v20, v21, v22, v23, v24);
  v25 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_18504/*"enemy_icon_"*/;
  v25->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18504/*"enemy_icon_"*/;
  sub_B52920((BattleServantConfConponent_o *)&v25->ENEMY_ICON_TEXTURE_PREFIX, v26, v27, v28, v29, v30, v31, v32);
  v47.fields.r = 0.05;
  v47.fields.a = 1.0;
  v47.fields.g = 0.05;
  v47.fields.b = 0.05;
  v46 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor(v47, v33, v34, v35, v36, (const MethodInfo *)&v46);
  v37 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR = v46;
  v38 = v37->static_fields;
  v39 = (System_Int32_array **)StringLiteral_15113/*"Unlit/Transparent Colored"*/;
  v38->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15113/*"Unlit/Transparent Colored"*/;
  sub_B52920((BattleServantConfConponent_o *)&v38->DEFAULT_SHADER, v39, v40, v41, v42, v43, v44, v45);
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
  __int64 v7; // x21
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  int32_t iconId; // w9
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v25; // x0
  struct System_String_o *v26; // x0
  struct System_String_o **p_enemyIconName; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x20
  int32_t v36; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AF967 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__);
    sub_B52984(&WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo);
    sub_B52984(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_42AF967 = 1;
  }
  v7 = sub_B52A54(WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo);
  WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0___ctor(
    (WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_21;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  if ( CommonUI__IsLoadMode(Instance, 0, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, v22);
  Instance = (CommonUI_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
  }
  if ( !viewEnemyEnt )
LABEL_21:
    sub_B52A5C(Instance, v9);
  iconId = viewEnemyEnt->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v36 = iconId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v26 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v25, 0LL);
  this->fields.enemyIconName = v26;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_B52920((BattleServantConfConponent_o *)p_enemyIconName, (System_Int32_array **)v26, v28, v29, v30, v31, v32, v33);
  v34 = System_String__Concat_44568316(
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v7,
    Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v34, v35, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__IsLoadMode(Instance, 1, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  System_String_o **p_enemyIconName; // x20
  WaveBattleWaveEnemyInfoItem_c *v4; // x0
  System_String_o *v5; // x21
  BattleServantConfConponent_o *p_enemyIconAssetData; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42AF965 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_42AF965 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v4 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
      v4 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
    v5 = System_String__Concat_44568316(v4->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v5, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (BattleServantConfConponent_o *)&this->fields.enemyIconAssetData;
    sub_B52920(p_enemyIconAssetData, 0LL, v7, v8, v9, v10, v11, v12);
    p_enemyIconAssetData->monitor = 0LL;
    sub_B52920((BattleServantConfConponent_o *)p_enemyIconName, 0LL, v13, v14, v15, v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem_c *v6; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x8
  int v12; // s0
  UnityEngine_Texture_o *UIAtlas; // x20
  WaveBattleWaveEnemyInfoItem_c *v17; // x8
  UnityEngine_Shader_o *v18; // x22
  UnityEngine_Material_o *v19; // x21
  UnityEngine_Material_o *v20; // x20

  if ( (byte_42AF962 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B52984(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_B52984(&StringLiteral_16045/*"_ChocoTex"*/);
    sub_B52984(&StringLiteral_12926/*"Shaders/ChocoMap"*/);
    byte_42AF962 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
      if ( sp )
      {
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v12, 0LL);
        UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                             (System_String_o *)StringLiteral_12926/*"Shaders/ChocoMap"*/,
                                             (const MethodInfo_1F7452C *)Method_UnityEngine_Resources_Load_Texture2D___);
        v17 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v17 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        v18 = UnityEngine_Shader__Find(v17->static_fields->CHOCO_SHADER_SP, 0LL);
        v19 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor(v19, v18, 0LL);
        if ( v19 )
        {
          UnityEngine_Material__SetTexture(v19, (System_String_o *)StringLiteral_16045/*"_ChocoTex"*/, UIAtlas, 0LL);
          v20 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_41516484(v20, v19, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v20, 0LL);
          return;
        }
      }
LABEL_21:
      sub_B52A5C(v6, *(_QWORD *)&dispTp);
    case 2:
      v6 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v6 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      if ( sp )
      {
        static_fields = v6->static_fields;
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

  if ( (byte_42AF964 & 1) == 0 )
  {
    sub_B52984(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_42AF964 = 1;
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
        sub_B52A5C(v6, *(_QWORD *)&dispTp);
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
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType_24392848(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  UnityEngine_Object_o *name; // x0
  int v7; // s0
  System_String_o *v11; // x20
  WaveBattleWaveEnemyInfoItem_c *v12; // x0
  int v13; // s0
  UnityEngine_Texture_o *UIAtlas; // x20
  WaveBattleWaveEnemyInfoItem_c *v18; // x8
  UnityEngine_Shader_o *v19; // x22
  UnityEngine_Material_o *v20; // x21
  UnityEngine_Texture_o *v21; // x0
  UnityEngine_Shader_o *v22; // x1

  if ( (byte_42AF963 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_B52984(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_B52984(&StringLiteral_16120/*"_MainTex"*/);
    sub_B52984(&StringLiteral_16045/*"_ChocoTex"*/);
    sub_B52984(&StringLiteral_12926/*"Shaders/ChocoMap"*/);
    byte_42AF963 = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v13, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      UIAtlas = (UnityEngine_Texture_o *)UnityEngine_Resources__Load_UIAtlas_(
                                           (System_String_o *)StringLiteral_12926/*"Shaders/ChocoMap"*/,
                                           (const MethodInfo_1F7452C *)Method_UnityEngine_Resources_Load_Texture2D___);
      v18 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v18 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v19 = UnityEngine_Shader__Find(v18->static_fields->CHOCO_SHADER_TX, 0LL);
      v20 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v20, v19, 0LL);
      if ( v20 )
      {
        UnityEngine_Material__SetTexture(v20, (System_String_o *)StringLiteral_16045/*"_ChocoTex"*/, UIAtlas, 0LL);
        v21 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                         texture,
                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        UnityEngine_Material__SetTexture(v20, (System_String_o *)StringLiteral_16120/*"_MainTex"*/, v21, 0LL);
        ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
          texture,
          v20,
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
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v7, 0LL);
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
        v11 = (System_String_o *)name;
        if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        }
        if ( v11 )
        {
          if ( !System_String__Equals_44555656(
                  v11,
                  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v12 = WaveBattleWaveEnemyInfoItem_TypeInfo;
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
    sub_B52A5C(name, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_44555656(
          (System_String_o *)name,
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v12 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( (BYTE3(WaveBattleWaveEnemyInfoItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_33;
    }
LABEL_32:
    j_il2cpp_runtime_class_init_0(v12);
    v12 = WaveBattleWaveEnemyInfoItem_TypeInfo;
LABEL_33:
    v22 = UnityEngine_Shader__Find(v12->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v22,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetEnemyName(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x20
  int32_t EnemyNameEffect; // w0
  int32_t v6; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v8; // x22
  UILabel_o *monitor; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_42AF966 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_B52984(&Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__);
    byte_42AF966 = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_14;
  EnemyNameEffect = ViewWaveEnemyEntity__GetEnemyNameEffect(viewEnemyEnt, 0LL);
  if ( EnemyNameEffect )
  {
    v6 = EnemyNameEffect;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v6, 0LL);
    v8 = (AssetLoader_LoadEndDataHandler_o *)sub_B52A54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v8, v4, Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(NameEffectPath, v8, 1, 0LL);
  }
  monitor = (UILabel_o *)v4[2].monitor;
  this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__GetBattleName(viewEnemyEnt, 0LL);
  if ( !monitor )
LABEL_14:
    sub_B52A5C(this, viewEnemyEnt);
  UILabel__set_text(monitor, (System_String_o *)this, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetItem(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Component_o *svtImg; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  ViewWaveEnemyEntity_o **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
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
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x3
  ViewWaveEnemyEntity_o *v39; // x22
  System_Action_o *v40; // x23
  const MethodInfo *v41; // x3
  char v42; // w21
  UISprite_o *dangerSprite; // x21

  if ( (byte_42AF961 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__);
    sub_B52984(&WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo);
    sub_B52984(&StringLiteral_18505/*"enemy_icon_leader"*/);
    byte_42AF961 = 1;
  }
  v5 = sub_B52A54(WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo);
  WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0___ctor(
    (WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = viewEnemyEnt;
  v14 = (ViewWaveEnemyEntity_o **)(v5 + 24);
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)viewEnemyEnt,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_41;
  v21 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 44LL);
  p_svtImg = &this->fields.svtImg;
  svtImg = (UnityEngine_Component_o *)this->fields.svtImg;
  if ( !svtImg )
    goto LABEL_41;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
  if ( !svtImg )
    goto LABEL_41;
  if ( v21 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_41;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    if ( !*v14 )
      goto LABEL_41;
    enemySp = (UISprite_o *)this->fields.enemySp;
    iconId = (*v14)->fields.iconId;
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
      if ( !*v14 )
        goto LABEL_41;
      WaveBattleWaveEnemyInfoItem__SetDispType(
        (WaveBattleWaveEnemyInfoItem_o *)svtImg,
        (*v14)->fields.displayType,
        this->fields.enemySp,
        v25);
    }
    else
    {
      v39 = *(ViewWaveEnemyEntity_o **)(v5 + 24);
      v40 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v5,
        Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__,
        0LL);
      WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(this, v39, v40, v41);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    v27 = *v14;
    if ( !*v14 )
      goto LABEL_41;
    v28 = *p_svtImg;
    svtId = v27->fields.svtId;
    limitCount = v27->fields.limitCount;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                        v28,
                                                        svtId,
                                                        limitCount,
                                                        limitCount,
                                                        0LL);
    *p_svtImg = (struct UITexture_o *)Manager__loadCommandCard;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.svtImg,
      Manager__loadCommandCard,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    if ( !*v14 )
      goto LABEL_41;
    WaveBattleWaveEnemyInfoItem__SetDispType_24392848(
      (WaveBattleWaveEnemyInfoItem_o *)svtImg,
      (*v14)->fields.displayType,
      this->fields.svtImg,
      v38);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_41;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__SetEnemyName(this, *v14, v26);
  svtImg = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_41;
  svtImg = (UnityEngine_Component_o *)ViewWaveEnemyEntity__IsDispDanger((ViewWaveEnemyEntity_o *)svtImg, 0LL);
  if ( !this->fields.dangerSprite )
    goto LABEL_41;
  v42 = (char)svtImg;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.dangerSprite,
                                        0LL);
  if ( !svtImg )
    goto LABEL_41;
  if ( (v42 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    goto LABEL_38;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
  dangerSprite = this->fields.dangerSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(dangerSprite, (System_String_o *)StringLiteral_18505/*"enemy_icon_leader"*/, 0LL);
  svtImg = (UnityEngine_Component_o *)this->fields.dangerSprite;
  if ( !svtImg )
LABEL_41:
    sub_B52A5C(svtImg, v7);
  svtImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))svtImg->klass[2]._1.typeMetadataHandle)(
                                        svtImg,
                                        svtImg->klass[2]._1.interopData);
LABEL_38:
  if ( !*v14 )
    goto LABEL_41;
  svtImg = (UnityEngine_Component_o *)this->fields.classComp;
  if ( !svtImg )
    goto LABEL_41;
  ServantClassIconComponent__SetWithClassOverWrite(
    (ServantClassIconComponent_o *)svtImg,
    (*v14)->fields.svtId,
    (*v14)->fields.limitCount,
    (*v14)->fields.classId,
    0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem___SetEnemyName_b__22_0(
        WaveBattleWaveEnemyInfoItem_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem_o *v4; // x19
  UnityEngine_Component_o *textLb; // x8
  UILabel_o *v6; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_42AF969 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_B52984(&StringLiteral_21802/*"quest_info"*/);
    byte_42AF969 = 1;
  }
  if ( !assetData
    || (this = (WaveBattleWaveEnemyInfoItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                  assetData,
                                                  (System_String_o *)StringLiteral_21802/*"quest_info"*/,
                                                  (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_B52A5C(this, assetData);
  }
  v6 = (UILabel_o *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    v6,
    transform,
    (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
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
    sub_B52A5C(this, method);
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
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v6; // x21
  UnityEngine_Material_o *v7; // x20
  struct WaveBattleWaveEnemyInfoItem_o *v8; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v9; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v10; // x8
  AssetData_o *enemyIconAssetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_42AD77F & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_Texture2D____68579976);
    sub_B52984(&UnityEngine_Material_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_16241/*"_alpha"*/);
    sub_B52984(&StringLiteral_4576/*"Custom/SpriteWithMask"*/);
    sub_B52984(&StringLiteral_16122/*"_MaskTex"*/);
    byte_42AD77F = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  _4__this->fields.objectList = (struct UnityEngine_Object_array *)assetData;
  sub_B52920(&_4__this->fields.objectList);
  v6 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4576/*"Custom/SpriteWithMask"*/, 0LL);
  v7 = (UnityEngine_Material_o *)sub_B52A54(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v7, v6, 0LL);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_16;
  _4__this = (AssetData_o *)v8->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v7,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_16;
  _4__this = v9->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                              _4__this,
                              v9->fields.enemyIconName,
                              (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  if ( !v7 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v7, (UnityEngine_Texture_o *)_4__this, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  enemyIconAssetData = v10->fields.enemyIconAssetData;
  _4__this = (AssetData_o *)System_String__Concat_44568316(
                              v10->fields.enemyIconName,
                              (System_String_o *)StringLiteral_16241/*"_alpha"*/,
                              0LL);
  if ( !enemyIconAssetData )
    goto LABEL_16;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              enemyIconAssetData,
                                                              (System_String_o *)_4__this,
                                                              (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_Texture2D____68579976);
  UnityEngine_Material__SetTexture(v7, (System_String_o *)StringLiteral_16122/*"_MaskTex"*/, Object_WarBoardWaitTimeSetting, 0LL);
  _4__this = (AssetData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  if ( CommonUI__IsLoadMode((CommonUI_o *)_4__this, 1, 0LL) )
  {
    _4__this = (AssetData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_B52A5C(_4__this, assetData);
  }
LABEL_15:
  ActionExtensions__Call(this->fields.callback, 0LL);
}