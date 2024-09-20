void __fastcall WaveBattleWaveEnemyInfoItem___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  WaveBattleWaveEnemyInfoItem_c *v15; // x8
  int32_t v16; // w1
  struct WaveBattleWaveEnemyInfoItem_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A57310 & 1) == 0 )
  {
    sub_1B885B0(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_1B885B0(&StringLiteral_19027/*"enemy_icon_"*/);
    sub_1B885B0(&StringLiteral_15129/*"Unlit/Transparent Colored"*/);
    sub_1B885B0(&StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/);
    sub_1B885B0(&StringLiteral_6013/*"Enemys/Icon/"*/);
    sub_1B885B0(&StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/);
    byte_4A57310 = 1;
  }
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields,
    StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2);
  v3 = StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->CHOCO_SHADER_SP, v3, v5, v6);
  v7 = StringLiteral_6013/*"Enemys/Icon/"*/;
  v8 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v8->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6013/*"Enemys/Icon/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->ENEMY_ICON_TEXTURE_PATH, v7, v9, v10);
  v11 = StringLiteral_19027/*"enemy_icon_"*/;
  v12 = WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields;
  v12->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19027/*"enemy_icon_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->ENEMY_ICON_TEXTURE_PREFIX, v11, v13, v14);
  v15 = WaveBattleWaveEnemyInfoItem_TypeInfo;
  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BB3C80;
  v16 = StringLiteral_15129/*"Unlit/Transparent Colored"*/;
  v17 = v15->static_fields;
  v17->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15129/*"Unlit/Transparent Colored"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->DEFAULT_SHADER, v16, v18, v19);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v20; // x0
  struct System_String_o *v21; // x0
  struct System_String_o **p_enemyIconName; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x19
  AssetLoader_LoadEndDataHandler_o *v26; // x20
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5730F & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__);
    sub_1B885B0(&WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo);
    sub_1B885B0(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_4A5730F = 1;
  }
  v7 = sub_1B887FC(WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( CommonUI__IsLoadMode(Instance, 0, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CommonUI__SetLoadMode(Instance, 1, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__ReleaseEnemyTexture(this, v14);
  Instance = (CommonUI_o *)WaveBattleWaveEnemyInfoItem_TypeInfo;
  if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
  if ( !viewEnemyEnt )
LABEL_19:
    sub_1B8880C(Instance, v9);
  iconId = viewEnemyEnt->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v27 = iconId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v15, v16, v17);
  v21 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v20, 0LL);
  this->fields.enemyIconName = v21;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_enemyIconName, (int32_t)v21, v23, v24);
  v25 = System_String__Concat_61707032(
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass23_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v25, v26, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( !CommonUI__IsLoadMode(Instance, 1, 0LL) )
        return;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  System_String_o **p_enemyIconName; // x20
  WaveBattleWaveEnemyInfoItem_c *v4; // x0
  System_String_o *v5; // x21
  ServantStatusBattleListViewItem_o *p_enemyIconAssetData; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5730D & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_4A5730D = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v4 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
      v4 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
    v5 = System_String__Concat_61707032(v4->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v5, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (ServantStatusBattleListViewItem_o *)&this->fields.enemyIconAssetData;
    sub_1B88554(p_enemyIconAssetData, 0, v7, v8);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_enemyIconName, 0, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType(
        WaveBattleWaveEnemyInfoItem_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        const MethodInfo *method)
{
  float v6; // s0
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

  if ( (byte_4A5730A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    byte_4A5730A = 1;
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
        UIWidget__set_color((UIWidget_o *)sp, v16, 0LL);
        object = UnityEngine_Resources__Load_object_(
                   (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                   (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
        v11 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
          v11 = WaveBattleWaveEnemyInfoItem_TypeInfo;
        }
        v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_SP, 0LL);
        v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor(v13, v12, 0LL);
        if ( v13 )
        {
          UnityEngine_Material__SetTexture(
            v13,
            (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/,
            (UnityEngine_Texture_o *)object,
            0LL);
          v14 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_69322740(v14, v13, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v14, 0LL);
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
      sub_1B8880C(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v6 = 1.0;
        v7 = 1.0;
        v8 = 1.0;
        v9 = 1.0;
LABEL_17:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v6, 0LL);
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

  if ( (byte_4A5730C & 1) == 0 )
  {
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B885B0(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    byte_4A5730C = 1;
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
      sub_1B8880C(this, *(_QWORD *)&dispTp);
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
void __fastcall WaveBattleWaveEnemyInfoItem__SetDispType_32396048(
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

  if ( (byte_4A5730B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&WaveBattleWaveEnemyInfoItem_TypeInfo);
    sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    byte_4A5730B = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v16.fields.r = 1.0;
      v16.fields.g = 1.0;
      v16.fields.b = 1.0;
      v16.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v16, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      v9 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        v9 = WaveBattleWaveEnemyInfoItem_TypeInfo;
      }
      v10 = UnityEngine_Shader__Find(v9->static_fields->CHOCO_SHADER_TX, 0LL);
      v11 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(v11, v10, 0LL);
      if ( v11 )
      {
        UnityEngine_Material__SetTexture(
          v11,
          (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/,
          (UnityEngine_Texture_o *)object,
          0LL);
        v12 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                         texture,
                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        UnityEngine_Material__SetTexture(v11, (System_String_o *)StringLiteral_16262/*"_MainTex"*/, v12, 0LL);
        ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
          texture,
          v11,
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
      v15.fields.r = 1.0;
      v15.fields.g = 1.0;
      v15.fields.b = 1.0;
      v15.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v15, 0LL);
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
        v6 = this;
        if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(WaveBattleWaveEnemyInfoItem_TypeInfo);
        if ( v6 )
        {
          if ( !System_String__Equals_61715348(
                  (System_String_o *)v6,
                  WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
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
    sub_1B8880C(this, *(_QWORD *)&dispTp);
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
  UIWidget__set_color((UIWidget_o *)texture, v17, 0LL);
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
  if ( !System_String__Equals_61715348(
          (System_String_o *)this,
          WaveBattleWaveEnemyInfoItem_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v7 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    if ( !WaveBattleWaveEnemyInfoItem_TypeInfo->_2.cctor_finished )
    {
LABEL_27:
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WaveBattleWaveEnemyInfoItem_TypeInfo;
    }
LABEL_28:
    v14 = UnityEngine_Shader__Find(v7->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v14,
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
  UILabel_o *klass; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_4A5730E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B885B0(&Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__);
    byte_4A5730E = 1;
  }
  if ( !viewEnemyEnt )
    goto LABEL_12;
  EnemyNameEffect = ViewWaveEnemyEntity__GetEnemyNameEffect(viewEnemyEnt, 0LL);
  if ( EnemyNameEffect )
  {
    v6 = EnemyNameEffect;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v6, 0LL);
    v8 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v8, v4, Method_WaveBattleWaveEnemyInfoItem__SetEnemyName_b__22_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v8, 1, 0LL);
  }
  klass = (UILabel_o *)v4[3].klass;
  this = (WaveBattleWaveEnemyInfoItem_o *)ViewWaveEnemyEntity__GetBattleName(viewEnemyEnt, 0LL);
  if ( !klass )
LABEL_12:
    sub_1B8880C(this, viewEnemyEnt);
  UILabel__set_text(klass, (System_String_o *)this, 0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem__SetItem(
        WaveBattleWaveEnemyInfoItem_o *this,
        ViewWaveEnemyEntity_o *viewEnemyEnt,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Component_o *svtImg; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ViewWaveEnemyEntity_o **v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  int v13; // w23
  struct UITexture_o **p_svtImg; // x22
  UISprite_o *enemySp; // x22
  int32_t iconId; // w23
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  ViewWaveEnemyEntity_o *v19; // x8
  UITexture_o *v20; // x24
  int32_t limitCount; // w21
  int32_t svtId; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x3
  ViewWaveEnemyEntity_o *v27; // x22
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x3
  char v30; // w21
  UISprite_o *dangerSprite; // x21

  if ( (byte_4A57309 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__);
    sub_1B885B0(&WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo);
    sub_1B885B0(&StringLiteral_19028/*"enemy_icon_leader"*/);
    byte_4A57309 = 1;
  }
  v5 = sub_1B887FC(WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_38;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = viewEnemyEnt;
  v10 = (ViewWaveEnemyEntity_o **)(v5 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)viewEnemyEnt, v11, v12);
  if ( !*(_QWORD *)(v5 + 24) )
    goto LABEL_38;
  v13 = *(_DWORD *)(*(_QWORD *)(v5 + 24) + 44LL);
  p_svtImg = &this->fields.svtImg;
  svtImg = (UnityEngine_Component_o *)this->fields.svtImg;
  if ( !svtImg )
    goto LABEL_38;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
  if ( !svtImg )
    goto LABEL_38;
  if ( v13 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_38;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    if ( !*v10 )
      goto LABEL_38;
    enemySp = (UISprite_o *)this->fields.enemySp;
    iconId = (*v10)->fields.iconId;
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
      if ( !*v10 )
        goto LABEL_38;
      WaveBattleWaveEnemyInfoItem__SetDispType(
        (WaveBattleWaveEnemyInfoItem_o *)svtImg,
        (*v10)->fields.displayType,
        this->fields.enemySp,
        v17);
    }
    else
    {
      v27 = *(ViewWaveEnemyEntity_o **)(v5 + 24);
      v28 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v28,
        (Il2CppObject *)v5,
        Method_WaveBattleWaveEnemyInfoItem___c__DisplayClass17_0__SetItem_b__0__,
        0LL);
      WaveBattleWaveEnemyInfoItem__LoadEnemyTexture(this, v27, v28, v29);
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
    v19 = *v10;
    if ( !*v10 )
      goto LABEL_38;
    v20 = *p_svtImg;
    svtId = v19->fields.svtId;
    limitCount = v19->fields.limitCount;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v20, svtId, limitCount, limitCount, 0LL);
    *p_svtImg = Manager__loadCommandCard;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.svtImg, (int32_t)Manager__loadCommandCard, v24, v25);
    if ( !*v10 )
      goto LABEL_38;
    WaveBattleWaveEnemyInfoItem__SetDispType_32396048(
      (WaveBattleWaveEnemyInfoItem_o *)svtImg,
      (*v10)->fields.displayType,
      this->fields.svtImg,
      v26);
    svtImg = (UnityEngine_Component_o *)this->fields.enemySp;
    if ( !svtImg )
      goto LABEL_38;
    svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(svtImg, 0LL);
    if ( !svtImg )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
  }
  WaveBattleWaveEnemyInfoItem__SetEnemyName(this, *v10, v18);
  svtImg = (UnityEngine_Component_o *)*v10;
  if ( !*v10 )
    goto LABEL_38;
  svtImg = (UnityEngine_Component_o *)ViewWaveEnemyEntity__IsDispDanger((ViewWaveEnemyEntity_o *)svtImg, 0LL);
  if ( !this->fields.dangerSprite )
    goto LABEL_38;
  v30 = (char)svtImg;
  svtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.dangerSprite,
                                        0LL);
  if ( !svtImg )
    goto LABEL_38;
  if ( (v30 & 1) == 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 0, 0LL);
    goto LABEL_35;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtImg, 1, 0LL);
  dangerSprite = this->fields.dangerSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(dangerSprite, (System_String_o *)StringLiteral_19028/*"enemy_icon_leader"*/, 0LL);
  svtImg = (UnityEngine_Component_o *)this->fields.dangerSprite;
  if ( !svtImg )
LABEL_38:
    sub_1B8880C(svtImg, v7);
  svtImg = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))svtImg->klass[2]._1.typeMetadataHandle)(
                                        svtImg,
                                        svtImg->klass[2]._1.interopData);
LABEL_35:
  if ( !*v10 )
    goto LABEL_38;
  svtImg = (UnityEngine_Component_o *)this->fields.classComp;
  if ( !svtImg )
    goto LABEL_38;
  ServantClassIconComponent__SetWithClassOverWrite(
    (ServantClassIconComponent_o *)svtImg,
    (*v10)->fields.svtId,
    (*v10)->fields.limitCount,
    (*v10)->fields.classId,
    0LL);
}


void __fastcall WaveBattleWaveEnemyInfoItem___SetEnemyName_b__22_0(
        WaveBattleWaveEnemyInfoItem_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  WaveBattleWaveEnemyInfoItem_o *v4; // x19
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v6; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4A57311 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (WaveBattleWaveEnemyInfoItem_o *)sub_1B885B0(&StringLiteral_22702/*"quest_info"*/);
    byte_4A57311 = 1;
  }
  if ( !assetData
    || (this = (WaveBattleWaveEnemyInfoItem_o *)AssetData__GetObject_object__48635516(
                                                  assetData,
                                                  (System_String_o *)StringLiteral_22702/*"quest_info"*/,
                                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1B8880C(this, assetData);
  }
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__49297800(
    v6,
    transform,
    (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
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
    sub_1B8880C(this, method);
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
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v7; // x21
  UnityEngine_Material_o *v8; // x20
  struct WaveBattleWaveEnemyInfoItem_o *v9; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v10; // x8
  struct WaveBattleWaveEnemyInfoItem_o *v11; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__48635516; // x0

  if ( (byte_4A57312 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_16526/*"_alpha"*/);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A57312 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  *(_QWORD *)&_4__this->fields.isLoadResources = assetData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&_4__this->fields.isLoadResources,
    (int32_t)assetData,
    (int32_t)method,
    v3);
  v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
  v8 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v8, v7, 0LL);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_16;
  _4__this = (AssetData_o *)v9->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v8,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_16;
  _4__this = v10->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_16;
  _4__this = (AssetData_o *)AssetData__GetObject_object__48635516(
                              _4__this,
                              v10->fields.enemyIconName,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v8 )
    goto LABEL_16;
  UnityEngine_Material__set_mainTexture(v8, (UnityEngine_Texture_o *)_4__this, 0LL);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_16;
  enemyIconAssetData = v11->fields.enemyIconAssetData;
  _4__this = (AssetData_o *)System_String__Concat_61707032(
                              v11->fields.enemyIconName,
                              (System_String_o *)StringLiteral_16526/*"_alpha"*/,
                              0LL);
  if ( !enemyIconAssetData )
    goto LABEL_16;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              enemyIconAssetData,
                              (System_String_o *)_4__this,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  UnityEngine_Material__SetTexture(
    v8,
    (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
    (UnityEngine_Texture_o *)Object_object__48635516,
    0LL);
  _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_16;
  if ( CommonUI__IsLoadMode((CommonUI_o *)_4__this, 1, 0LL) )
  {
    _4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( _4__this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
      goto LABEL_15;
    }
LABEL_16:
    sub_1B8880C(_4__this, assetData);
  }
LABEL_15:
  ActionExtensions__Call(this->fields.callback, 0LL);
}