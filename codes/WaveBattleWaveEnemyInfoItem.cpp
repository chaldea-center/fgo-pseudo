void WaveBattleWaveEnemyInfoItem___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  WaveBattleWaveEnemyInfoItem_c *v32; // x8
  __int64 v33; // x1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7

  if ( (byte_596C3D3 & 1) == 0 )
  {
    sub_2213A60(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_2213A60(&StringLiteral_19929/*"enemy_icon_"*/);
    sub_2213A60(&StringLiteral_24091/*"questinfo_enemy_brank"*/);
    sub_2213A60(&StringLiteral_15732/*"Unlit/Transparent Colored"*/);
    sub_2213A60(&StringLiteral_15735/*"Unlit/Transparent Colored_Choco"*/);
    sub_2213A60(&StringLiteral_6309/*"Enemys/Icon/"*/);
    sub_2213A60(&StringLiteral_5129/*"Custom/SpriteWithMask_Choco"*/);
    byte_596C3D3 = 1;
  }
  v7 = StringLiteral_15735/*"Unlit/Transparent Colored_Choco"*/;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15735/*"Unlit/Transparent Colored_Choco"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_5129/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_5129/*"Custom/SpriteWithMask_Choco"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->CHOCO_SHADER_SP, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_6309/*"Enemys/Icon/"*/;
  v17 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v17->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6309/*"Enemys/Icon/"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->ENEMY_ICON_TEXTURE_PATH, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_19929/*"enemy_icon_"*/;
  v25 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v25->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19929/*"enemy_icon_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->ENEMY_ICON_TEXTURE_PREFIX, v24, v26, v27, v28, v29, v30, v31);
  v32 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  v33 = StringLiteral_15732/*"Unlit/Transparent Colored"*/;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_E9D180;
  v34 = v32->static_fields;
  v34->DEFAULT_SHADER = (struct System_String_o *)v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->DEFAULT_SHADER, v33, v35, v36, v37, v38, v39, v40);
  v41 = StringLiteral_24091/*"questinfo_enemy_brank"*/;
  v42 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v42->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_24091/*"questinfo_enemy_brank"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v42->ENEMY_UNKNOWN_SP, v41, v43, v44, v45, v46, v47, v48);
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
  __int64 v7; // x20
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v26; // x0
  struct System_String_o *v27; // x0
  struct System_String_o **p_enemyIconName; // x19
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x19
  AssetLoader_LoadEndDataHandler_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596C3D1 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0__LoadEnemyTexture_b__0__);
    sub_2213A60(&WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0_TypeInfo);
    sub_2213A60(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_596C3D1 = 1;
  }
  v7 = sub_2213CCC(WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( CommonUI__IsLoadMode(Instance, 0, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CommonUI__SetLoadMode(Instance, 1, 0);
  }
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, v22);
  Instance = (CommonUI_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, v9, v23);
  if ( !viewEnemyEnt )
LABEL_19:
    sub_2213CDC(Instance, v9);
  iconId = viewEnemyEnt->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v39 = iconId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v39);
  v27 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v26, 0);
  this->fields.enemyIconName = v27;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_enemyIconName, (int32_t)v27, v29, v30, v31, v32, v33, v34);
  v35 = System_String__Concat_75651716(
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass25_0__LoadEnemyTexture_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37, v38);
  if ( !AssetManager__loadAssetStorage(v35, v36, 1, 0, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__IsLoadMode(Instance, 1, 0) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v4; // x1
  __int64 v5; // x2
  WaveBattleWaveEnemyInfoItem_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x21
  MissionNaviTransitionBoardItem_o *p_enemyIconAssetData; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596C3CF & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_596C3CF = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0) )
  {
    v6 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, v4, v5);
      v6 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
    v9 = System_String__Concat_75651716(v6->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
    AssetManager__releaseAssetStorage(v9, 0);
    this->fields.enemyIconAssetData = 0;
    p_enemyIconAssetData = (MissionNaviTransitionBoardItem_o *)&this->fields.enemyIconAssetData;
    sub_2213A04(p_enemyIconAssetData, 0, v11, v12, v13, v14, v15, v16);
    p_enemyIconAssetData->monitor = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_enemyIconName, 0, v17, v18, v19, v20, v21, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveEnemyInfoItem__SetDispType(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        const MethodInfo *method)
{
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *object; // x20
  WaveBattleWaveEnemyInfoItem_c *v14; // x8
  UnityEngine_Shader_o *v15; // x22
  UnityEngine_Material_o *v16; // x21
  UnityEngine_Material_o *v17; // x20
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596C3CC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_2213A60(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_2213A60(&StringLiteral_16795/*"_ChocoTex"*/);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_2213A60(&StringLiteral_13377/*"Shaders/ChocoMap"*/);
    byte_596C3CC = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( !sp )
        goto LABEL_19;
      v18.fields.r = 1.0;
      v18.fields.g = 1.0;
      v18.fields.b = 1.0;
      v18.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sp, v18, 0);
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_13377/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      v14 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, v11, v12);
        v14 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v15 = UnityEngine_Shader__Find(v14->static_fields->CHOCO_SHADER_SP, 0);
      v16 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v16, v15, 0);
      if ( !v16 )
        goto LABEL_19;
      UnityEngine_Material__SetTexture(v16, (System_String_o *)StringLiteral_16795/*"_ChocoTex"*/, (UnityEngine_Texture_o *)object, 0);
      v17 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_83274924(v17, v16, 0);
      UISpriteAltMat__SetMaterialKeepTexture(sp, v17, 0);
      break;
    case 2:
      this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp, sp);
      if ( sp )
      {
        static_fields = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
        b = static_fields->SHADOW_COLOR.fields.b;
        a = static_fields->SHADOW_COLOR.fields.a;
        r = static_fields->SHADOW_COLOR.fields.r;
        g = static_fields->SHADOW_COLOR.fields.g;
        goto LABEL_12;
      }
LABEL_19:
      sub_2213CDC(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        r = 1.0;
        g = 1.0;
        b = 1.0;
        a = 1.0;
LABEL_12:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&r, 0);
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
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x8

  if ( (byte_596C3CE & 1) == 0 )
  {
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_2213A60(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_596C3CE = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp, texture);
      if ( texture )
      {
        static_fields = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
        b = static_fields->SHADOW_COLOR.fields.b;
        a = static_fields->SHADOW_COLOR.fields.a;
        r = static_fields->SHADOW_COLOR.fields.r;
        g = static_fields->SHADOW_COLOR.fields.g;
        goto LABEL_12;
      }
LABEL_14:
      sub_2213CDC(this, *(_QWORD *)&dispTp);
    case 1:
LABEL_6:
      if ( texture )
      {
        r = 1.0;
        g = 1.0;
        b = 1.0;
        a = 1.0;
LABEL_12:
        UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&r, 0);
        return;
      }
      goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleWaveEnemyInfoItem__SetDispType_41502520(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  __int64 v6; // x2
  WaveBattleWaveEnemyInfoItem_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  WaveBattleWaveEnemyInfoItem_c *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *object; // x20
  WaveBattleWaveEnemyInfoItem_c *v14; // x8
  UnityEngine_Shader_o *v15; // x22
  UnityEngine_Material_o *v16; // x21
  UnityEngine_Texture_o *v17; // x0
  UnityEngine_Shader_o *v18; // x0
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596C3CD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_2213A60(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    sub_2213A60(&StringLiteral_16795/*"_ChocoTex"*/);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_2213A60(&StringLiteral_13377/*"Shaders/ChocoMap"*/);
    byte_596C3CD = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v20.fields.r = 1.0;
      v20.fields.g = 1.0;
      v20.fields.b = 1.0;
      v20.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v20, 0);
      ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
        texture,
        0,
        texture->klass->vtable._29_set_shader.method);
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_13377/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      v14 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, v11, v12);
        v14 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v15 = UnityEngine_Shader__Find(v14->static_fields->CHOCO_SHADER_TX, 0);
      v16 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v16, v15, 0);
      if ( v16 )
      {
        UnityEngine_Material__SetTexture(
          v16,
          (System_String_o *)StringLiteral_16795/*"_ChocoTex"*/,
          (UnityEngine_Texture_o *)object,
          0);
        v17 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                         texture,
                                         texture->klass->vtable._26_get_mainTexture.method);
        UnityEngine_Material__SetTexture(v16, (System_String_o *)StringLiteral_16914/*"_MainTex"*/, v17, 0);
        ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
          texture,
          v16,
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
      v19.fields.r = 1.0;
      v19.fields.g = 1.0;
      v19.fields.b = 1.0;
      v19.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v19, 0);
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
        v7 = this;
        if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp, v6);
        if ( v7 )
        {
          if ( !System_String__Equals_75686512(
                  (System_String_o *)v7,
                  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
                  0) )
          {
            v10 = WaveBattleWaveEnemyInfoItem_TypeInfo;
            if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
              goto LABEL_27;
            goto LABEL_28;
          }
          return;
        }
      }
    }
LABEL_29:
    sub_2213CDC(this, *(_QWORD *)&dispTp);
  }
  this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp, texture);
  if ( !texture )
    goto LABEL_29;
  UIWidget__set_color((UIWidget_o *)texture, WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR, 0);
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
  if ( !System_String__Equals_75686512(
          (System_String_o *)this,
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
          0) )
  {
    v10 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
    {
LABEL_27:
      j_il2cpp_runtime_class_init_0(v10, v8, v9);
      v10 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
LABEL_28:
    v18 = UnityEngine_Shader__Find(v10->static_fields->DEFAULT_SHADER, 0);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      v18,
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
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  UILabel_o *klass; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_596C3D0 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_2213A60(&Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__24_0__);
    byte_596C3D0 = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_12;
  EnemyNameEffect = ViewWaveEnemyEntity__GetEnemyNameEffect(viewEnemyEnt, 0);
  if ( EnemyNameEffect )
  {
    v8 = EnemyNameEffect;
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v6, v7);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v8, 0);
    v10 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v10, v4, Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__24_0__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v11, v12);
    AssetManager__loadAssetStorage(NameEffectPath, v10, 1, 0, 0);
  }
  klass = (UILabel_o *)v4[3].klass;
  this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__GetBattleName(viewEnemyEnt, 0);
  if ( !klass )
LABEL_12:
    sub_2213CDC(this, viewEnemyEnt);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  ViewWaveEnemyEntity_o **v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UITexture_o **p_svtImg; // x22
  __int64 v22; // x2
  UISprite_o *enemySp; // x22
  int32_t iconId; // w23
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  __int64 v27; // x2
  ViewWaveEnemyEntity_o *v28; // x8
  UITexture_o *v29; // x23
  int32_t limitCount; // w21
  int32_t svtId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x3
  ViewWaveEnemyEntity_o *v40; // x22
  System_Action_o *v41; // x23
  const MethodInfo *v42; // x3
  int32_t m_CachedPtr; // w22
  int32_t monitor_high; // w24
  ServantClassIconComponent_o *classComp; // x21
  int32_t monitor; // w23
  const MethodInfo *v47; // x2
  bool IsDispDanger; // w8
  __int64 v49; // x1
  __int64 v50; // x2
  UISprite_o *dangerSprite; // x20

  if ( (byte_596C3CB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0__SetItem_b__0__);
    sub_2213A60(&WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_TypeInfo);
    sub_2213A60(&StringLiteral_19930/*"enemy_icon_leader"*/);
    byte_596C3CB = 1;
  }
  v5 = sub_2213CCC(WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_41;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = viewEnemyEnt;
  v14 = (ViewWaveEnemyEntity_o **)(v5 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)viewEnemyEnt, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_41;
  p_svtImg = &this->fields.svtImg;
  svtImg = (UnityEngine_Component_o *)this->fields.svtImg;
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 24) + 44LL) )
  {
    if ( !svtImg )
      goto LABEL_41;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0);
    if ( !svtImg )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_41;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0);
    if ( !svtImg )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0);
    if ( !*v14 )
      goto LABEL_41;
    enemySp = (UISprite_o *)this->fields.enemySp;
    iconId = (*v14)->fields.iconId;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7, v22);
    if ( AtlasManager__SetEnemy(enemySp, iconId, 0) )
    {
      svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
      if ( !svtImg )
        goto LABEL_41;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)svtImg, 1, 0);
      svtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
      if ( !svtImg )
        goto LABEL_41;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)svtImg, 0, 0);
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
      v40 = *(ViewWaveEnemyEntity_o **)(v5 + 24);
      v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v41,
        (Il2CppObject *)v5,
        Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass19_0__SetItem_b__0__,
        0);
      WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(this, v40, v41, v42);
    }
  }
  else
  {
    if ( !svtImg )
      goto LABEL_41;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0);
    if ( !svtImg )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0);
    v28 = *v14;
    if ( !*v14 )
      goto LABEL_41;
    v29 = *p_svtImg;
    svtId = v28->fields.svtId;
    limitCount = v28->fields.limitCount;
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7, v27);
    Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v29, svtId, limitCount, limitCount, 0);
    *p_svtImg = Manager__loadCommandCard;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.svtImg,
      (int32_t)Manager__loadCommandCard,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    if ( !*v14 )
      goto LABEL_41;
    WaveBattleWaveEnemyInfoItem__SetDispType_41502520(
      (WaveBattleWaveEnemyInfoItem_o *)svtImg,
      (*v14)->fields.displayType,
      this->fields.svtImg,
      v39);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_41;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0);
    if ( !svtImg )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0);
  }
  WaveBattleWaveEnemyInfoItem__SetEnemyName(this, *v14, v26);
  svtImg = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_41;
  monitor_high = HIDWORD(svtImg[1].monitor);
  m_CachedPtr = svtImg[1].fields.m_CachedPtr;
  classComp = this->fields.classComp;
  monitor = (int32_t)svtImg[1].monitor;
  svtImg = (UnityEngine_Component_o *)ViewWaveEnemyEntity__IsGrand((ViewWaveEnemyEntity_o *)svtImg, 0);
  if ( !classComp )
    goto LABEL_41;
  ServantClassIconComponent__SetWithClassOverWrite(
    classComp,
    monitor_high,
    m_CachedPtr,
    monitor,
    (unsigned __int8)svtImg & 1,
    0);
  WaveBattleWaveEnemyInfoItem__SetUnknownDisp(this, *v14, v47);
  svtImg = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_41;
  IsDispDanger = ViewWaveEnemyEntity__IsDispDanger((ViewWaveEnemyEntity_o *)svtImg, 0);
  svtImg = (UnityEngine_Component_o *)this->fields.dangerSprite;
  if ( IsDispDanger )
  {
    if ( svtImg )
    {
      svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0);
      if ( svtImg )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0);
        dangerSprite = this->fields.dangerSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v49, v50);
        AtlasManager__SetPartyOrganizationImage(dangerSprite, (System_String_o *)StringLiteral_19930/*"enemy_icon_leader"*/, 0);
        svtImg = (UnityEngine_Component_o *)this->fields.dangerSprite;
        if ( svtImg )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, void *))svtImg->klass[2]._1.parent)(
            svtImg,
            svtImg->klass[2]._1.generic_class);
          return;
        }
      }
    }
LABEL_41:
    sub_2213CDC(svtImg, v7);
  }
  if ( !svtImg )
    goto LABEL_41;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0);
  if ( !svtImg )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0);
}


void WaveBattleWaveEnemyInfoItem__SetUnknownDisp(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem_o *v4; // x19
  System_Collections_Generic_Dictionary_string__object__o *UnknownDispInfo; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_string__object__o *v8; // x22
  bool IsUnknownDispInfo; // w24
  bool v10; // w23
  bool v11; // w21
  __int64 v12; // x2
  char v13; // w20
  ServantClassIconComponent_o *classComp; // x22
  struct ServantClassIconComponent_o *v15; // x8
  UILabel_o *nameLabel; // x22
  UILabel_o *textLb; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  TerminalSceneComponent_c *v20; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v22; // x2
  UISprite_o *enemySp; // x20
  System_String_c *klass; // x8
  UISprite_o *v25; // x20
  WaveBattleWaveEnemyInfoItem_o *v26; // x0
  const MethodInfo *v27; // x3

  v4 = this;
  if ( (byte_596C3D2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_2213A60(&StringLiteral_16118/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/);
    byte_596C3D2 = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_53;
  UnknownDispInfo = ViewWaveEnemyEntity__GetUnknownDispInfo(viewEnemyEnt, 0);
  if ( UnknownDispInfo )
  {
    v8 = UnknownDispInfo;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
    this = (WaveBattleWaveEnemyInfoItem_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ReachedWaveInfoMaster___);
    if ( !this )
      goto LABEL_53;
    if ( ReachedWaveInfoMaster__GetReachedWave((ReachedWaveInfoMaster_o *)this, viewEnemyEnt->fields.questId, 0) < viewEnemyEnt->fields.wave )
    {
      IsUnknownDispInfo = ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 0, v8, 0);
      v10 = ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 1, v8, 0);
      v11 = ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 2, v8, 0);
      this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__IsUnknownDispInfo(viewEnemyEnt, 3, v8, 0);
      v13 = (char)this;
      if ( IsUnknownDispInfo )
      {
        classComp = v4->fields.classComp;
        this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, viewEnemyEnt, v12);
        if ( !classComp )
          goto LABEL_53;
        ServantClassIconComponent__Set(
          classComp,
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
          1,
          0);
      }
      if ( v10 )
      {
        v15 = v4->fields.classComp;
        if ( !v15 )
          goto LABEL_53;
        nameLabel = v15->fields.nameLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, viewEnemyEnt, v12);
        this = (WaveBattleWaveEnemyInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16118/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0);
        if ( !nameLabel )
          goto LABEL_53;
        UILabel__set_text(nameLabel, (System_String_o *)this, 0);
      }
      if ( v11 )
      {
        textLb = v4->fields.textLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, viewEnemyEnt, v12);
        this = (WaveBattleWaveEnemyInfoItem_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16118/*"WAVE_BATTLE_HIDE_ENEMY_NAME"*/, 0);
        if ( !textLb )
          goto LABEL_53;
        UILabel__set_text(textLb, (System_String_o *)this, 0);
      }
      if ( (v13 & 1) != 0 )
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
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v18, v19);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        v20 = TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v18, v19);
          v20 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v20->static_fields->mInstance;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
        if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
        {
          enemySp = (UISprite_o *)v4->fields.enemySp;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, viewEnemyEnt, v22);
          if ( !byte_596A090 )
          {
            sub_2213A60(&TerminalSceneComponent_TypeInfo);
            byte_596A090 = 1;
          }
          this = (WaveBattleWaveEnemyInfoItem_o *)TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, viewEnemyEnt, v22);
            this = (WaveBattleWaveEnemyInfoItem_o *)TerminalSceneComponent_TypeInfo;
          }
          klass = this[1].fields.enemyIconName->klass;
          if ( !klass || !enemySp )
            goto LABEL_53;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)&klass->_2.naturalAligment, 0);
        }
        v25 = (UISprite_o *)v4->fields.enemySp;
        this = (WaveBattleWaveEnemyInfoItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !*(&WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo, viewEnemyEnt, v22);
        if ( v25 )
        {
          UISprite__set_spriteName(v25, WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0);
          WaveBattleWaveEnemyInfoItem__SetDispType(v26, 1, v4->fields.enemySp, v27);
          return;
        }
LABEL_53:
        sub_2213CDC(this, viewEnemyEnt);
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
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_596C3D4 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_2213A60(&StringLiteral_24068/*"quest_info"*/);
    byte_596C3D4 = 1;
  }
  if ( !assetData
    || (this = (WaveBattleWaveEnemyInfoItem_o *)AssetData__GetObject_object__58532980(
                                                  assetData,
                                                  (System_String_o *)StringLiteral_24068/*"quest_info"*/,
                                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0) )
  {
    sub_2213CDC(this, assetData);
  }
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  UnityEngine_Object__Instantiate_object__59717116(
    v6,
    transform,
    (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
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
    sub_2213CDC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct WaveBattleWaveEnemyInfoItem_o *v13; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v14; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v15; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__58532980; // x0

  if ( (byte_596C3D5 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_17207/*"_alpha"*/);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596C3D5 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *(_QWORD *)&_4__this->fields.isLoadResources = assetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.isLoadResources,
    (int32_t)assetData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
  v12 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
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
  _4__this = (AssetData_o *)AssetData__GetObject_object__58532980(
                              _4__this,
                              v14->fields.enemyIconName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  if ( !v12 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)_4__this, 0);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_16;
  enemyIconAssetData = v15->fields.enemyIconAssetData;
  _4__this = (AssetData_o *)System_String__Concat_75651716(
                              v15->fields.enemyIconName,
                              (System_String_o *)StringLiteral_17207/*"_alpha"*/,
                              0);
  if ( !enemyIconAssetData )
    goto LABEL_16;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              enemyIconAssetData,
                              (System_String_o *)_4__this,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  UnityEngine_Material__SetTexture(
    v12,
    (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__58532980,
    0);
  _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  if ( CommonUI__IsLoadMode((CommonUI_o *)_4__this, 1, 0) )
  {
    _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0);
      goto LABEL_15;
    }
LABEL_16:
    sub_2213CDC(_4__this, assetData);
  }
LABEL_15:
  ActionExtensions__Call(this->fields.callback, 0);
}