void __fastcall HorizontalQuestInformationIconDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x0
  struct HorizontalQuestInformationIconDraw_StaticFields *static_fields; // x8
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  HorizontalQuestInformationIconDraw_c *v15; // x8
  int32_t v16; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A58163 & 1) == 0 )
  {
    sub_1B885B0(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_19027/*"enemy_icon_"*/);
    sub_1B885B0(&StringLiteral_22723/*"questinfo_enemy_brank"*/);
    sub_1B885B0(&StringLiteral_15129/*"Unlit/Transparent Colored"*/);
    sub_1B885B0(&StringLiteral_6013/*"Enemys/Icon/"*/);
    sub_1B885B0(&StringLiteral_13372/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_4A58163 = 1;
  }
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22723/*"questinfo_enemy_brank"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields,
    StringLiteral_22723/*"questinfo_enemy_brank"*/,
    v1,
    v2);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13372/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
  static_fields = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->ENEMY_UNKNOWN_NAME, (int32_t)v3, v5, v6);
  v7 = StringLiteral_6013/*"Enemys/Icon/"*/;
  v8 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v8->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6013/*"Enemys/Icon/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->ENEMY_ICON_TEXTURE_PATH, v7, v9, v10);
  v11 = StringLiteral_19027/*"enemy_icon_"*/;
  v12 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v12->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19027/*"enemy_icon_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->ENEMY_ICON_TEXTURE_PREFIX, v11, v13, v14);
  v15 = HorizontalQuestInformationIconDraw_TypeInfo;
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BB3C80;
  v16 = StringLiteral_15129/*"Unlit/Transparent Colored"*/;
  v17 = v15->static_fields;
  v17->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15129/*"Unlit/Transparent Colored"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->DEFAULT_SHADER, v16, v18, v19);
}


void __fastcall HorizontalQuestInformationIconDraw___ctor(
        HorizontalQuestInformationIconDraw_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconDraw__LoadEnemyTexture(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
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

  if ( (byte_4A58160 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__);
    sub_1B885B0(&HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
    byte_4A58160 = 1;
  }
  v7 = sub_1B887FC(HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, v14);
  Instance = (CommonUI_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v27 = iconId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v15, v16, v17);
  v21 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v20, 0LL);
  this->fields.enemyIconName = v21;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_enemyIconName, (int32_t)v21, v23, v24);
  v25 = System_String__Concat_61707032(
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v25, v26, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1B8880C(Instance, v9);
  }
}


// attributes: thunk
void __fastcall HorizontalQuestInformationIconDraw__OnDestroy(
        HorizontalQuestInformationIconDraw_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, method);
}


void __fastcall HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(
        HorizontalQuestInformationIconDraw_o *this,
        const MethodInfo *method)
{
  System_String_o **p_enemyIconName; // x20
  HorizontalQuestInformationIconDraw_c *v4; // x0
  System_String_o *v5; // x21
  ServantStatusBattleListViewItem_o *p_enemyIconAssetData; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A58161 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&HorizontalQuestInformationIconDraw_TypeInfo);
    byte_4A58161 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v4 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
      v4 = HorizontalQuestInformationIconDraw_TypeInfo;
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
void __fastcall HorizontalQuestInformationIconDraw__SetDispType(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  UnityEngine_Material_o *v12; // x20
  UnityEngine_Material_o *v13; // x21
  struct UISpriteAltMat_o *enemySp; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5815D & 1) == 0 )
  {
    sub_1B885B0(&HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1B885B0(&UnityEngine_Material_TypeInfo);
    byte_4A5815D = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( sp )
      {
        v15.fields.r = 1.0;
        v15.fields.g = 1.0;
        v15.fields.b = 1.0;
        v15.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)sp, v15, 0LL);
        if ( iconListComponent )
        {
          v12 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
                  iconListComponent,
                  *(const MethodInfo **)&dispTp);
          v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_69322740(v13, v12, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v13, 0LL);
          return;
        }
      }
      goto LABEL_17;
    case 2:
      this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
        this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      }
      if ( sp )
      {
        enemySp = this[1].fields.enemySp;
        v10 = *(float *)&enemySp->fields.rightAnchor;
        v11 = *((float *)&enemySp->fields.rightAnchor + 1);
        v8 = *(float *)&enemySp->fields.leftAnchor;
        v9 = *((float *)&enemySp->fields.leftAnchor + 1);
        goto LABEL_15;
      }
LABEL_17:
      sub_1B8880C(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v8 = 1.0;
        v9 = 1.0;
        v10 = 1.0;
        v11 = 1.0;
LABEL_15:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v8, 0LL);
        UISpriteAltMat__ResetMaterial(sp, 0LL);
        return;
      }
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconDraw__SetDispTypeEnemyTex(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  struct UISpriteAltMat_o *enemySp; // x8

  if ( (byte_4A5815F & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconDraw_o *)sub_1B885B0(&HorizontalQuestInformationIconDraw_TypeInfo);
    byte_4A5815F = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
        this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      }
      if ( texture )
      {
        enemySp = this[1].fields.enemySp;
        v8 = *(float *)&enemySp->fields.rightAnchor;
        v9 = *((float *)&enemySp->fields.rightAnchor + 1);
        v6 = *(float *)&enemySp->fields.leftAnchor;
        v7 = *((float *)&enemySp->fields.leftAnchor + 1);
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
void __fastcall HorizontalQuestInformationIconDraw__SetDispType_34027084(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v8; // x20
  HorizontalQuestInformationIconDraw_c *v9; // x0
  UnityEngine_Material_o *v10; // x20
  float *enemySp; // x8
  UnityEngine_Shader_o *v12; // x0
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5815E & 1) == 0 )
  {
    sub_1B885B0(&HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    byte_4A5815E = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v14.fields.r = 1.0;
      v14.fields.g = 1.0;
      v14.fields.b = 1.0;
      v14.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v14, 0LL);
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                                       texture,
                                                       0LL,
                                                       texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( iconListComponent )
      {
        v10 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
                iconListComponent,
                *(const MethodInfo **)&dispTp);
        this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                         texture,
                                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v10 )
        {
          UnityEngine_Material__SetTexture(
            v10,
            (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this,
            0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v10,
            texture->klass->vtable._26_get_mainTexture.methodPtr);
          ((void (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._30_MarkAsChanged.method)(
            texture,
            texture->klass->vtable._31_Awake.methodPtr);
          return;
        }
      }
    }
    goto LABEL_28;
  }
  if ( dispTp != 2 )
  {
    if ( dispTp != 1 )
      return;
    if ( texture )
    {
      v13.fields.r = 1.0;
      v13.fields.g = 1.0;
      v13.fields.b = 1.0;
      v13.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v13, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
        texture,
        0LL,
        texture->klass->vtable._26_get_mainTexture.methodPtr);
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                       texture,
                                                       texture->klass->vtable._29_set_shader.methodPtr);
      if ( this )
      {
        this = (HorizontalQuestInformationIconDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        v8 = this;
        if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
        if ( v8 )
        {
          if ( !System_String__Equals_61715348(
                  (System_String_o *)v8,
                  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v9 = HorizontalQuestInformationIconDraw_TypeInfo;
            if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
              goto LABEL_26;
            goto LABEL_27;
          }
          return;
        }
      }
    }
LABEL_28:
    sub_1B8880C(this, *(_QWORD *)&dispTp);
  }
  this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_28;
  enemySp = (float *)this[1].fields.enemySp;
  v15.fields.b = enemySp[10];
  v15.fields.a = enemySp[11];
  v15.fields.r = enemySp[8];
  v15.fields.g = enemySp[9];
  UIWidget__set_color((UIWidget_o *)texture, v15, 0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                   texture,
                                                   texture->klass->vtable._29_set_shader.methodPtr);
  if ( !this )
    goto LABEL_28;
  this = (HorizontalQuestInformationIconDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !this )
    goto LABEL_28;
  if ( !System_String__Equals_61715348(
          (System_String_o *)this,
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v9 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v9);
      v9 = HorizontalQuestInformationIconDraw_TypeInfo;
    }
LABEL_27:
    v12 = UnityEngine_Shader__Find(v9->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v12,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall HorizontalQuestInformationIconDraw__SetEnemyName(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v4; // x20
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v7; // x22

  v4 = this;
  if ( (byte_4A58162 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A58162 = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0LL);
    v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v7,
      (Il2CppObject *)v4,
      Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v7, 1, 0LL);
  }
  this = (HorizontalQuestInformationIconDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1B8880C(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0LL);
}


void __fastcall HorizontalQuestInformationIconDraw__SetItem(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  __int64 v9; // x22
  int64_t SvtImg; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  QuestInformationListViewItem_o **v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  QuestInformationListViewItem_o *v17; // x0
  int32_t infoType; // w8
  bool v19; // w1
  TerminalSceneComponent_c *v20; // x0
  UnityEngine_Object_o *mInstance; // x20
  UISprite_o *enemySp; // x20
  __int64 v23; // x8
  UISprite_o *v24; // x20
  HorizontalQuestInformationIconDraw_o *v25; // x0
  const MethodInfo *v26; // x4
  ItemIconComponent_o *itemIcon; // x21
  ItemMaster_o *v28; // x21
  bool v29; // w1
  struct UITexture_o **p_SvtImg; // x23
  char v31; // w24
  QuestInformationListViewItem_o *v32; // x8
  UITexture_o *v33; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  const MethodInfo *v39; // x4
  const MethodInfo *v40; // x2
  UISprite_o *v41; // x23
  int32_t iconId; // w24
  const MethodInfo *v43; // x4
  QuestInformationListViewItem_o *v44; // x21
  System_Action_o *v45; // x23
  const MethodInfo *v46; // x3
  int32_t *v47; // x8
  Il2CppObject *MasterData_object; // x21
  int32_t v49; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21

  if ( (byte_4A5815C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__);
    sub_1B885B0(&HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
    sub_1B885B0(&StringLiteral_12012/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_4A5815C = 1;
  }
  v9 = sub_1B887FC(HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_115;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = item;
  v14 = (QuestInformationListViewItem_o **)(v9 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)item, v15, v16);
  if ( mode )
  {
    v17 = *v14;
    if ( *v14 )
    {
      infoType = v17->fields.infoType;
      if ( infoType == 1 )
      {
        if ( QuestInformationListViewItem__isEnemyUnknown(v17, 0LL) )
        {
          SvtImg = (int64_t)this->fields.SvtImg;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
          SvtImg = (int64_t)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
          }
          v20 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v20 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v20->static_fields->mInstance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
          {
            enemySp = (UISprite_o *)this->fields.enemySp;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4A5629D )
            {
              sub_1B885B0(&TerminalSceneComponent_TypeInfo);
              byte_4A5629D = 1;
            }
            SvtImg = (int64_t)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              SvtImg = (int64_t)TerminalSceneComponent_TypeInfo;
            }
            v23 = **(_QWORD **)(SvtImg + 184);
            if ( !v23 || !enemySp )
              goto LABEL_115;
            UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v23 + 304), 0LL);
          }
          v24 = (UISprite_o *)this->fields.enemySp;
          SvtImg = (int64_t)HorizontalQuestInformationIconDraw_TypeInfo;
          if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
          if ( v24 )
          {
            UISprite__set_spriteName(
              v24,
              HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
              0LL);
            HorizontalQuestInformationIconDraw__SetDispType(v25, 1, this->fields.enemySp, iconListComponent, v26);
            SvtImg = (int64_t)this->fields.textLb;
            if ( SvtImg )
            {
              UILabel__set_text(
                (UILabel_o *)SvtImg,
                HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
                0LL);
              return;
            }
          }
LABEL_115:
          sub_1B8880C(SvtImg, v11);
        }
        SvtImg = (int64_t)*v14;
        if ( !*v14 )
          goto LABEL_115;
        SvtImg = QuestInformationListViewItem__isEnemyServant((QuestInformationListViewItem_o *)SvtImg, 0LL);
        p_SvtImg = &this->fields.SvtImg;
        if ( !this->fields.SvtImg )
          goto LABEL_115;
        v31 = SvtImg;
        SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.SvtImg, 0LL);
        if ( !SvtImg )
          goto LABEL_115;
        if ( (v31 & 1) != 0 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          v32 = *v14;
          if ( !*v14 )
            goto LABEL_115;
          v33 = *p_SvtImg;
          targetId = v32->fields.targetId;
          targetCnt = v32->fields.targetCnt;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v33, targetId, targetCnt, targetCnt, 0LL);
          *p_SvtImg = Manager__loadCommandCard;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.SvtImg,
            (int32_t)Manager__loadCommandCard,
            v37,
            v38);
          if ( !*v14 )
            goto LABEL_115;
          HorizontalQuestInformationIconDraw__SetDispType_34027084(
            (HorizontalQuestInformationIconDraw_o *)SvtImg,
            (*v14)->fields.dispType,
            this->fields.SvtImg,
            iconListComponent,
            v39);
          SvtImg = (int64_t)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
          SvtImg = (int64_t)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          if ( !*v14 )
            goto LABEL_115;
          v41 = (UISprite_o *)this->fields.enemySp;
          iconId = (*v14)->fields.iconId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetEnemy(v41, iconId, 0LL) )
          {
            SvtImg = (int64_t)this->fields.enemySp;
            if ( !SvtImg )
              goto LABEL_115;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
            SvtImg = (int64_t)this->fields.enemyTexture;
            if ( !SvtImg )
              goto LABEL_115;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
            if ( !*v14 )
              goto LABEL_115;
            HorizontalQuestInformationIconDraw__SetDispType(
              (HorizontalQuestInformationIconDraw_o *)SvtImg,
              (*v14)->fields.dispType,
              this->fields.enemySp,
              iconListComponent,
              v43);
          }
          else
          {
            v44 = *(QuestInformationListViewItem_o **)(v9 + 24);
            v45 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v45,
              (Il2CppObject *)v9,
              Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__,
              0LL);
            HorizontalQuestInformationIconDraw__LoadEnemyTexture(this, v44, v45, v46);
          }
        }
        HorizontalQuestInformationIconDraw__SetEnemyName(this, *v14, v40);
      }
      else if ( !infoType )
      {
        SvtImg = QuestInformationListViewItem__isRewardUndrop(v17, 0LL);
        if ( !this->fields.blankImg )
          goto LABEL_115;
        if ( (SvtImg & 1) != 0 )
        {
          UnityEngine_GameObject__SetActive(this->fields.blankImg, 1, 0LL);
          SvtImg = (int64_t)this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          v19 = 0;
        }
        else
        {
          UnityEngine_GameObject__SetActive(this->fields.blankImg, 0, 0LL);
          SvtImg = (int64_t)*v14;
          if ( !*v14 )
            goto LABEL_115;
          itemIcon = this->fields.itemIcon;
          SvtImg = QuestInformationListViewItem__GetGiftType((QuestInformationListViewItem_o *)SvtImg, 0LL);
          if ( !*v14 )
            goto LABEL_115;
          if ( !itemIcon )
            goto LABEL_115;
          ItemIconComponent__SetGift_38144896(itemIcon, SvtImg, (*v14)->fields.targetId, -1, 0, 0LL);
          SvtImg = (int64_t)this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          v19 = 1;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v19, 0LL);
        SvtImg = (int64_t)*v14;
        if ( !*v14 )
          goto LABEL_115;
        if ( !QuestInformationListViewItem__isRewardItem((QuestInformationListViewItem_o *)SvtImg, 0LL) )
          goto LABEL_58;
        SvtImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SvtImg )
          goto LABEL_115;
        SvtImg = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SvtImg,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !*v14 )
          goto LABEL_115;
        v28 = (ItemMaster_o *)SvtImg;
        if ( !SvtImg )
          goto LABEL_115;
        SvtImg = ItemMaster__isQP((ItemMaster_o *)SvtImg, (*v14)->fields.targetId, 0LL);
        if ( (SvtImg & 1) != 0 )
          goto LABEL_58;
        if ( !*v14 )
          goto LABEL_115;
        SvtImg = ItemMaster__isFriendPoint(v28, (*v14)->fields.targetId, 0LL);
        if ( (SvtImg & 1) != 0 )
          goto LABEL_58;
        if ( !*v14 )
          goto LABEL_115;
        SvtImg = ItemMaster__isEventPoint(v28, (*v14)->fields.targetId, 0LL);
        if ( (SvtImg & 1) != 0 )
        {
LABEL_58:
          SvtImg = (int64_t)this->fields.holdNumTitleLb;
          if ( SvtImg )
          {
            SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
            if ( SvtImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
              SvtImg = (int64_t)this->fields.holdNumCntLb;
              if ( SvtImg )
              {
                SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
                if ( SvtImg )
                {
                  v29 = 0;
LABEL_63:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v29, 0LL);
                  return;
                }
              }
            }
          }
        }
        else
        {
          if ( !*v14 )
            goto LABEL_115;
          SvtImg = ItemMaster__isMana(v28, (*v14)->fields.targetId, 0LL);
          if ( (SvtImg & 1) != 0 )
          {
            SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0LL);
            if ( !SvtImg )
              goto LABEL_115;
            v47 = (int32_t *)(SvtImg + 184);
          }
          else
          {
            if ( !*v14 )
              goto LABEL_115;
            SvtImg = ItemMaster__isRarePri(v28, (*v14)->fields.targetId, 0LL);
            if ( (SvtImg & 1) != 0 )
            {
              SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !SvtImg )
                goto LABEL_115;
              v47 = (int32_t *)(SvtImg + 188);
            }
            else
            {
              if ( !*v14 )
                goto LABEL_115;
              if ( ItemMaster__isStone(v28, (*v14)->fields.targetId, 0LL) )
              {
                SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( !SvtImg )
                  goto LABEL_115;
                v47 = (int32_t *)(SvtImg + 176);
              }
              else
              {
                SvtImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !SvtImg )
                  goto LABEL_115;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)SvtImg,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                SvtImg = NetworkManager__get_UserId(0LL);
                if ( !*v14 )
                  goto LABEL_115;
                if ( !MasterData_object )
                  goto LABEL_115;
                SvtImg = (int64_t)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    SvtImg,
                                    (*v14)->fields.targetId,
                                    0LL);
                if ( !SvtImg )
                  goto LABEL_115;
                v47 = (int32_t *)(SvtImg + 28);
              }
            }
          }
          v49 = *v47;
          holdNumTitleLb = this->fields.holdNumTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          SvtImg = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12012/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
          if ( holdNumTitleLb )
          {
            UILabel__set_text(holdNumTitleLb, (System_String_o *)SvtImg, 0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            SvtImg = (int64_t)LocalizationManager__GetNumberFormat(v49, 0LL);
            if ( holdNumCntLb )
            {
              UILabel__set_text(holdNumCntLb, (System_String_o *)SvtImg, 0LL);
              SvtImg = (int64_t)this->fields.holdNumTitleLb;
              if ( SvtImg )
              {
                SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
                if ( SvtImg )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
                  SvtImg = (int64_t)this->fields.holdNumCntLb;
                  if ( SvtImg )
                  {
                    SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
                    if ( SvtImg )
                    {
                      v29 = 1;
                      goto LABEL_63;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_115;
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconDraw___SetEnemyName_b__24_0(
        HorizontalQuestInformationIconDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v4; // x19
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v6; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4A58164 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1B885B0(&StringLiteral_22702/*"quest_info"*/);
    byte_4A58164 = 1;
  }
  if ( !assetData
    || (this = (HorizontalQuestInformationIconDraw_o *)AssetData__GetObject_object__48635516(
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


void __fastcall HorizontalQuestInformationIconDraw___c__DisplayClass18_0___ctor(
        HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconDraw___c__DisplayClass18_0___SetItem_b__0(
        HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  struct HorizontalQuestInformationIconDraw_o *_4__this; // x8
  HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *v3; // x19
  struct HorizontalQuestInformationIconDraw_o *v4; // x8
  const MethodInfo *v5; // x3
  struct QuestInformationListViewItem_o *item; // x8
  struct HorizontalQuestInformationIconDraw_o *v7; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *)v4->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL), (item = v3->fields.item) == 0LL)
    || (v7 = v3->fields.__4__this) == 0LL )
  {
LABEL_8:
    sub_1B8880C(this, method);
  }
  HorizontalQuestInformationIconDraw__SetDispTypeEnemyTex(
    (HorizontalQuestInformationIconDraw_o *)this,
    item->fields.dispType,
    v7->fields.enemyTexture,
    v5);
}


void __fastcall HorizontalQuestInformationIconDraw___c__DisplayClass22_0___ctor(
        HorizontalQuestInformationIconDraw___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconDraw___c__DisplayClass22_0___LoadEnemyTexture_b__0(
        HorizontalQuestInformationIconDraw___c__DisplayClass22_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v7; // x21
  UnityEngine_Material_o *v8; // x20
  struct HorizontalQuestInformationIconDraw_o *v9; // x8
  struct HorizontalQuestInformationIconDraw_o *v10; // x8
  struct HorizontalQuestInformationIconDraw_o *v11; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__48635516; // x0

  if ( (byte_4A58165 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_16526/*"_alpha"*/);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A58165 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].klass = (AssetData_c *)assetData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this[1], (int32_t)assetData, (int32_t)method, v3);
  v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
  v8 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v8, v7, 0LL);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_13;
  _4__this = (AssetData_o *)v9->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v8,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_13;
  _4__this = v10->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)AssetData__GetObject_object__48635516(
                              _4__this,
                              v10->fields.enemyIconName,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
  if ( !v8
    || (UnityEngine_Material__set_mainTexture(v8, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v11 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v11->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_61707032(
                                    v11->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16526/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_object__48635516 = AssetData__GetObject_object__48635516(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376),
        UnityEngine_Material__SetTexture(
          v8,
          (System_String_o *)StringLiteral_16267/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__48635516,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1B8880C(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}