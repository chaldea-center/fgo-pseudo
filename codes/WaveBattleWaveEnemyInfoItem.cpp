void __fastcall WaveBattleWaveEnemyInfoItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  WaveBattleWaveEnemyInfoItem_c *v21; // x8
  int32_t v22; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_49FAD51 & 1) == 0 )
  {
    sub_1B64A00(&WaveBattleWaveEnemyInfoItem_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_18957/*"enemy_icon_"*/, v4);
    sub_1B64A00(&StringLiteral_15063/*"Unlit/Transparent Colored"*/, v5);
    sub_1B64A00(&StringLiteral_15064/*"Unlit/Transparent Colored_Choco"*/, v6);
    sub_1B64A00(&StringLiteral_5988/*"Enemys/Icon/"*/, v7);
    sub_1B64A00(&StringLiteral_4954/*"Custom/SpriteWithMask_Choco"*/, v8);
    byte_49FAD51 = 1;
  }
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15064/*"Unlit/Transparent Colored_Choco"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields,
    StringLiteral_15064/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3);
  v9 = StringLiteral_4954/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4954/*"Custom/SpriteWithMask_Choco"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->CHOCO_SHADER_SP, v9, v11, v12);
  v13 = StringLiteral_5988/*"Enemys/Icon/"*/;
  v14 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v14->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_5988/*"Enemys/Icon/"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v14->ENEMY_ICON_TEXTURE_PATH, v13, v15, v16);
  v17 = StringLiteral_18957/*"enemy_icon_"*/;
  v18 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v18->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18957/*"enemy_icon_"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v18->ENEMY_ICON_TEXTURE_PREFIX, v17, v19, v20);
  v21 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BA2840;
  v22 = StringLiteral_15063/*"Unlit/Transparent Colored"*/;
  v23 = v21->static_fields;
  v23->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15063/*"Unlit/Transparent Colored"*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v23->DEFAULT_SHADER, v22, v24, v25);
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
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
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
  int32_t v30; // w3
  System_String_o *v31; // x19
  AssetLoader_LoadEndDataHandler_o *v32; // x20
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FAD50 & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, viewEnemyEnt);
    sub_1B64A00(&int_TypeInfo, v7);
    sub_1B64A00(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B64A00(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__, v10);
    sub_1B64A00(&WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo, v11);
    sub_1B64A00(&WaveBattleWaveEnemyInfoItem_TypeInfo, v12);
    byte_49FAD50 = 1;
  }
  v13 = sub_1B64C4C(WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_19;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)callback, v18, v19);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( CommonUI__IsLoadMode(Instance, 0, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B64C5C(Instance, v15);
  iconId = viewEnemyEnt->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v33 = iconId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v21, v22, v23);
  v27 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v26, 0LL);
  this->fields.enemyIconName = v27;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_enemyIconName, (int32_t)v27, v29, v30);
  v31 = System_String__Concat_61385136(
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64C4C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v31, v32, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__IsLoadMode(Instance, 1, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  ServantStatusBattleListViewItem_o *p_enemyIconAssetData; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FAD4E & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, method);
    sub_1B64A00(&WaveBattleWaveEnemyInfoItem_TypeInfo, v3);
    byte_49FAD4E = 1;
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
    v6 = System_String__Concat_61385136(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (ServantStatusBattleListViewItem_o *)&this->fields.enemyIconAssetData;
    sub_1B649A4(p_enemyIconAssetData, 0, v8, v9);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)p_enemyIconName, 0, v10, v11);
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

  if ( (byte_49FAD4B & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_1B64A00(&Method_UnityEngine_Resources_Load_Texture2D___, v6);
    sub_1B64A00(&WaveBattleWaveEnemyInfoItem_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_16094/*"_ChocoTex"*/, v8);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B64A00(&StringLiteral_12678/*"Shaders/ChocoMap"*/, v9);
    byte_49FAD4B = 1;
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
                   (System_String_o *)StringLiteral_12678/*"Shaders/ChocoMap"*/,
                   (const MethodInfo_2ECE99C *)Method_UnityEngine_Resources_Load_Texture2D___);
        v15 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v15 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        v16 = UnityEngine_Shader__Find(v15->static_fields->CHOCO_SHADER_SP, 0LL);
        v17 = (UnityEngine_Material_o *)sub_1B64C4C(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor(v17, v16, 0LL);
        if ( v17 )
        {
          UnityEngine_Material__SetTexture(
            v17,
            (System_String_o *)StringLiteral_16094/*"_ChocoTex"*/,
            (UnityEngine_Texture_o *)object,
            0LL);
          v18 = (UnityEngine_Material_o *)sub_1B64C4C(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_69000836(v18, v17, 0LL);
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
      sub_1B64C5C(this, *(_QWORD *)&dispTp);
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

  if ( (byte_49FAD4D & 1) == 0 )
  {
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B64A00(&WaveBattleWaveEnemyInfoItem_TypeInfo, *(_QWORD *)&dispTp);
    byte_49FAD4D = 1;
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
      sub_1B64C5C(this, *(_QWORD *)&dispTp);
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
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType_32134464(
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

  if ( (byte_49FAD4C & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_1B64A00(&Method_UnityEngine_Resources_Load_Texture2D___, v6);
    sub_1B64A00(&WaveBattleWaveEnemyInfoItem_TypeInfo, v7);
    sub_1B64A00(&StringLiteral_16196/*"_MainTex"*/, v8);
    sub_1B64A00(&StringLiteral_16094/*"_ChocoTex"*/, v9);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B64A00(&StringLiteral_12678/*"Shaders/ChocoMap"*/, v10);
    byte_49FAD4C = 1;
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
                 (System_String_o *)StringLiteral_12678/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2ECE99C *)Method_UnityEngine_Resources_Load_Texture2D___);
      v14 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v14 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v15 = UnityEngine_Shader__Find(v14->static_fields->CHOCO_SHADER_TX, 0LL);
      v16 = (UnityEngine_Material_o *)sub_1B64C4C(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v16, v15, 0LL);
      if ( v16 )
      {
        UnityEngine_Material__SetTexture(
          v16,
          (System_String_o *)StringLiteral_16094/*"_ChocoTex"*/,
          (UnityEngine_Texture_o *)object,
          0LL);
        v17 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                         texture,
                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        UnityEngine_Material__SetTexture(v16, (System_String_o *)StringLiteral_16196/*"_MainTex"*/, v17, 0LL);
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
          if ( !System_String__Equals_61393452(
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
    sub_1B64C5C(this, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_61393452(
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
  if ( (byte_49FAD4F & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, viewEnemyEnt);
    sub_1B64A00(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B64A00(&ServantAssetLoadManager_TypeInfo, v6);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B64A00(&Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__, v7);
    byte_49FAD4F = 1;
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
    v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64C4C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v11, v4, Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v11, 1, 0LL);
  }
  klass = (UILabel_o *)v4[3].klass;
  this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__GetBattleName(viewEnemyEnt, 0LL);
  if ( !klass )
LABEL_12:
    sub_1B64C5C(this, viewEnemyEnt);
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
  int32_t v14; // w3
  ViewWaveEnemyEntity_o **v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
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
  int32_t v30; // w3
  const MethodInfo *v31; // x3
  ViewWaveEnemyEntity_o *v32; // x22
  System_Action_o *v33; // x23
  const MethodInfo *v34; // x3
  char v35; // w21
  UISprite_o *dangerSprite; // x21

  if ( (byte_49FAD4A & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, viewEnemyEnt);
    sub_1B64A00(&AtlasManager_TypeInfo, v5);
    sub_1B64A00(&ServantAssetLoadManager_TypeInfo, v6);
    sub_1B64A00(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__, v7);
    sub_1B64A00(&WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_18958/*"enemy_icon_leader"*/, v9);
    byte_49FAD4A = 1;
  }
  v10 = sub_1B64C4C(WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_38;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = viewEnemyEnt;
  v15 = (ViewWaveEnemyEntity_o **)(v10 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)viewEnemyEnt, v16, v17);
  if ( !*(_QWORD *)(v10 + 24) )
    goto LABEL_38;
  v18 = *(_DWORD *)(*(_QWORD *)(v10 + 24) + 44LL);
  p_svtImg = &this->fields.svtImg;
  svtImg = (UnityEngine_Component_o *)this->fields.svtImg;
  if ( !svtImg )
    goto LABEL_38;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
  if ( !svtImg )
    goto LABEL_38;
  if ( v18 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_38;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    if ( !*v15 )
      goto LABEL_38;
    enemySp = (UISprite_o *)this->fields.enemySp;
    iconId = (*v15)->fields.iconId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
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
      if ( !*v15 )
        goto LABEL_38;
      WaveBattleWaveEnemyInfoItem__SetDispType(
        (WaveBattleWaveEnemyInfoItem_o *)svtImg,
        (*v15)->fields.displayType,
        this->fields.enemySp,
        v22);
    }
    else
    {
      v32 = *(ViewWaveEnemyEntity_o **)(v10 + 24);
      v33 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        v33,
        (Il2CppObject *)v10,
        Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__,
        0LL);
      WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(this, v32, v33, v34);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    v24 = *v15;
    if ( !*v15 )
      goto LABEL_38;
    v25 = *p_svtImg;
    svtId = v24->fields.svtId;
    limitCount = v24->fields.limitCount;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v25, svtId, limitCount, limitCount, 0LL);
    *p_svtImg = Manager__loadCommandCard;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.svtImg, (int32_t)Manager__loadCommandCard, v29, v30);
    if ( !*v15 )
      goto LABEL_38;
    WaveBattleWaveEnemyInfoItem__SetDispType_32134464(
      (WaveBattleWaveEnemyInfoItem_o *)svtImg,
      (*v15)->fields.displayType,
      this->fields.svtImg,
      v31);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_38;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__SetEnemyName(this, *v15, v23);
  svtImg = (UnityEngine_Component_o *)*v15;
  if ( !*v15 )
    goto LABEL_38;
  svtImg = (UnityEngine_Component_o *)ViewWaveEnemyEntity__IsDispDanger((ViewWaveEnemyEntity_o *)svtImg, 0LL);
  if ( !this->fields.dangerSprite )
    goto LABEL_38;
  v35 = (char)svtImg;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.dangerSprite,
                                        0LL);
  if ( !svtImg )
    goto LABEL_38;
  if ( (v35 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    goto LABEL_35;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
  dangerSprite = this->fields.dangerSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(dangerSprite, (System_String_o *)StringLiteral_18958/*"enemy_icon_leader"*/, 0LL);
  svtImg = (UnityEngine_Component_o *)this->fields.dangerSprite;
  if ( !svtImg )
LABEL_38:
    sub_1B64C5C(svtImg, v12);
  svtImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))svtImg->klass[2]._1.typeMetadataHandle)(
                                        svtImg,
                                        svtImg->klass[2]._1.interopData);
LABEL_35:
  if ( !*v15 )
    goto LABEL_38;
  svtImg = (UnityEngine_Component_o *)this->fields.classComp;
  if ( !svtImg )
    goto LABEL_38;
  ServantClassIconComponent__SetWithClassOverWrite(
    (ServantClassIconComponent_o *)svtImg,
    (*v15)->fields.svtId,
    (*v15)->fields.limitCount,
    (*v15)->fields.classId,
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
  Il2CppObject *v9; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_49FAD52 & 1) == 0 )
  {
    sub_1B64A00(&Method_AssetData_GetObject_GameObject____75715992, assetData);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B64A00(&StringLiteral_22613/*"quest_info"*/, v7);
    byte_49FAD52 = 1;
  }
  if ( !assetData
    || (this = (WaveBattleWaveEnemyInfoItem_o *)AssetData__GetObject_object__48358160(
                                                  assetData,
                                                  (System_String_o *)StringLiteral_22613/*"quest_info"*/,
                                                  (const MethodInfo_2E1E310 *)Method_AssetData_GetObject_GameObject____75715992),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1B64C5C(this, assetData);
  }
  v9 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__49014464(
    v9,
    transform,
    (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
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
    sub_1B64C5C(this, method);
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
  Il2CppObject *Object_object__48358160; // x0

  if ( (byte_49FAD53 & 1) == 0 )
  {
    sub_1B64A00(&Method_AssetData_GetObject_Texture2D____75716016, assetData);
    sub_1B64A00(&UnityEngine_Material_TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B64A00(&StringLiteral_16460/*"_alpha"*/, v8);
    sub_1B64A00(&StringLiteral_4953/*"Custom/SpriteWithMask"*/, v9);
    sub_1B64A00(&StringLiteral_16201/*"_MaskTex"*/, v10);
    byte_49FAD53 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *(_QWORD *)&_4__this->fields.isLoadResources = assetData;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&_4__this->fields.isLoadResources,
    (int32_t)assetData,
    (int32_t)method,
    v3);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4953/*"Custom/SpriteWithMask"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_1B64C4C(UnityEngine_Material_TypeInfo);
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
  _4__this = (AssetData_o *)AssetData__GetObject_object__48358160(
                              _4__this,
                              v15->fields.enemyIconName,
                              (const MethodInfo_2E1E310 *)Method_AssetData_GetObject_Texture2D____75716016);
  if ( !v13 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)_4__this, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_16;
  enemyIconAssetData = v16->fields.enemyIconAssetData;
  _4__this = (AssetData_o *)System_String__Concat_61385136(
                              v16->fields.enemyIconName,
                              (System_String_o *)StringLiteral_16460/*"_alpha"*/,
                              0LL);
  if ( !enemyIconAssetData )
    goto LABEL_16;
  Object_object__48358160 = AssetData__GetObject_object__48358160(
                              enemyIconAssetData,
                              (System_String_o *)_4__this,
                              (const MethodInfo_2E1E310 *)Method_AssetData_GetObject_Texture2D____75716016);
  UnityEngine_Material__SetTexture(
    v13,
    (System_String_o *)StringLiteral_16201/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__48358160,
    0LL);
  _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  if ( CommonUI__IsLoadMode((CommonUI_o *)_4__this, 1, 0LL) )
  {
    _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_1B64C5C(_4__this, assetData);
  }
LABEL_15:
  ActionExtensions__Call(this->fields.callback, 0LL);
}