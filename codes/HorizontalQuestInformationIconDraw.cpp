void HorizontalQuestInformationIconDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_String_o *v3; // x0
  struct HorizontalQuestInformationIconDraw_StaticFields *static_fields; // x8
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  HorizontalQuestInformationIconDraw_c *v15; // x8
  int32_t v16; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C3FCE3 & 1) == 0 )
  {
    sub_1C37058(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_19041/*"enemy_icon_"*/);
    sub_1C37058(&StringLiteral_22899/*"questinfo_enemy_brank"*/);
    sub_1C37058(&StringLiteral_15133/*"Unlit/Transparent Colored"*/);
    sub_1C37058(&StringLiteral_6052/*"Enemys/Icon/"*/);
    sub_1C37058(&StringLiteral_13463/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_4C3FCE3 = 1;
  }
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22899/*"questinfo_enemy_brank"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields,
    StringLiteral_22899/*"questinfo_enemy_brank"*/,
    v1,
    v2);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13463/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0);
  static_fields = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->ENEMY_UNKNOWN_NAME, (int32_t)v3, v5, v6);
  v7 = StringLiteral_6052/*"Enemys/Icon/"*/;
  v8 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v8->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6052/*"Enemys/Icon/"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->ENEMY_ICON_TEXTURE_PATH, v7, v9, v10);
  v11 = StringLiteral_19041/*"enemy_icon_"*/;
  v12 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v12->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19041/*"enemy_icon_"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->ENEMY_ICON_TEXTURE_PREFIX, v11, v13, v14);
  v15 = HorizontalQuestInformationIconDraw_TypeInfo;
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_C0DF40;
  v16 = StringLiteral_15133/*"Unlit/Transparent Colored"*/;
  v17 = v15->static_fields;
  v17->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15133/*"Unlit/Transparent Colored"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->DEFAULT_SHADER, v16, v18, v19);
}


void HorizontalQuestInformationIconDraw___ctor(HorizontalQuestInformationIconDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void HorizontalQuestInformationIconDraw__LoadEnemyTexture(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  CommonUI_o *Instance; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v22; // x0
  struct System_String_o *v23; // x0
  struct System_String_o **p_enemyIconName; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_String_o *v27; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x20
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3FCE0 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__);
    sub_1C37058(&HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
    byte_4C3FCE0 = 1;
  }
  v7 = sub_1C372A4(HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v11, v12);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0);
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, v13);
  Instance = (CommonUI_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v29 = iconId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v14, v15, v16, v17, v18, v19);
  v23 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v22, 0);
  this->fields.enemyIconName = v23;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1C36FFC((CGThumbnailListItem_o *)p_enemyIconName, (int32_t)v23, v25, v26);
  v27 = System_String__Concat_63561656(
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v27, v28, 1, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0);
      return;
    }
LABEL_14:
    sub_1C372B4(Instance);
  }
}


// attributes: thunk
void HorizontalQuestInformationIconDraw__OnDestroy(
        HorizontalQuestInformationIconDraw_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, method);
}


void HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(
        HorizontalQuestInformationIconDraw_o *this,
        const MethodInfo *method)
{
  System_String_o **p_enemyIconName; // x20
  HorizontalQuestInformationIconDraw_c *v4; // x0
  System_String_o *v5; // x21
  CGThumbnailListItem_o *p_enemyIconAssetData; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3FCE1 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&HorizontalQuestInformationIconDraw_TypeInfo);
    byte_4C3FCE1 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0) )
  {
    v4 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
      v4 = HorizontalQuestInformationIconDraw_TypeInfo;
    }
    v5 = System_String__Concat_63561656(v4->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v5, 0);
    this->fields.enemyIconAssetData = 0;
    p_enemyIconAssetData = (CGThumbnailListItem_o *)&this->fields.enemyIconAssetData;
    sub_1C36FFC(p_enemyIconAssetData, 0, v7, v8);
    p_enemyIconAssetData->monitor = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)p_enemyIconName, 0, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void HorizontalQuestInformationIconDraw__SetDispType(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  float v8; // s0 OVERLAPPED
  float v9; // s1
  float v10; // s2
  float v11; // s3
  const MethodInfo *v12; // x1
  UnityEngine_Material_o *v13; // x20
  UnityEngine_Material_o *v14; // x21
  struct UISpriteAltMat_o *enemySp; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3FCDD & 1) == 0 )
  {
    sub_1C37058(&HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C37058(&UnityEngine_Material_TypeInfo);
    byte_4C3FCDD = 1;
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
        if ( iconListComponent )
        {
          v13 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(iconListComponent, v12);
          v14 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_71129980(v14, v13, 0);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v14, 0);
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
      sub_1C372B4(this);
    case 1:
      if ( sp )
      {
        v8 = 1.0;
        v9 = 1.0;
        v10 = 1.0;
        v11 = 1.0;
LABEL_15:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v8, 0);
        UISpriteAltMat__ResetMaterial(sp, 0);
        return;
      }
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void HorizontalQuestInformationIconDraw__SetDispTypeEnemyTex(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  float v6; // s0 OVERLAPPED
  float v7; // s1
  float v8; // s2
  float v9; // s3
  struct UISpriteAltMat_o *enemySp; // x8

  if ( (byte_4C3FCDF & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C37058(&HorizontalQuestInformationIconDraw_TypeInfo);
    byte_4C3FCDF = 1;
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
      sub_1C372B4(this);
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


void HorizontalQuestInformationIconDraw__SetDispType_36532852(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v8; // x20
  HorizontalQuestInformationIconDraw_c *v9; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Material_o *v11; // x20
  float *enemySp; // x8
  UnityEngine_Shader_o *v13; // x0
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3FCDE & 1) == 0 )
  {
    sub_1C37058(&HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C37058(&StringLiteral_16264/*"_MainTex"*/);
    byte_4C3FCDE = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v15.fields.r = 1.0;
      v15.fields.g = 1.0;
      v15.fields.b = 1.0;
      v15.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v15, 0);
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
                                                       texture,
                                                       0,
                                                       texture->klass->vtable._29_set_shader.method);
      if ( iconListComponent )
      {
        v11 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(iconListComponent, v10);
        this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                                         texture,
                                                         texture->klass->vtable._26_get_mainTexture.method);
        if ( v11 )
        {
          UnityEngine_Material__SetTexture(
            v11,
            (System_String_o *)StringLiteral_16264/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this,
            0);
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
    }
    goto LABEL_28;
  }
  if ( dispTp != 2 )
  {
    if ( dispTp != 1 )
      return;
    if ( texture )
    {
      v14.fields.r = 1.0;
      v14.fields.g = 1.0;
      v14.fields.b = 1.0;
      v14.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v14, 0);
      ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
        texture,
        0,
        texture->klass->vtable._25_set_material.method);
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._28_get_shader.methodPtr)(
                                                       texture,
                                                       texture->klass->vtable._28_get_shader.method);
      if ( this )
      {
        this = (HorizontalQuestInformationIconDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        v8 = this;
        if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
        if ( v8 )
        {
          if ( !System_String__Equals_63596960(
                  (System_String_o *)v8,
                  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0) )
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
    sub_1C372B4(this);
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
  v16.fields.b = enemySp[10];
  v16.fields.a = enemySp[11];
  v16.fields.r = enemySp[8];
  v16.fields.g = enemySp[9];
  UIWidget__set_color((UIWidget_o *)texture, v16, 0);
  ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
    texture,
    0,
    texture->klass->vtable._25_set_material.method);
  this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._28_get_shader.methodPtr)(
                                                   texture,
                                                   texture->klass->vtable._28_get_shader.method);
  if ( !this )
    goto LABEL_28;
  this = (HorizontalQuestInformationIconDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  if ( !System_String__Equals_63596960(
          (System_String_o *)this,
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0) )
  {
    v9 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v9);
      v9 = HorizontalQuestInformationIconDraw_TypeInfo;
    }
LABEL_27:
    v13 = UnityEngine_Shader__Find(v9->static_fields->DEFAULT_SHADER, 0);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      v13,
      texture->klass->vtable._29_set_shader.method);
  }
}


void HorizontalQuestInformationIconDraw__SetEnemyName(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v4; // x20
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v7; // x22

  v4 = this;
  if ( (byte_4C3FCE2 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    byte_4C3FCE2 = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0);
    v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v7,
      (Il2CppObject *)v4,
      Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v7, 1, 0);
  }
  this = (HorizontalQuestInformationIconDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1C372B4(this);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0);
}


void HorizontalQuestInformationIconDraw__SetItem(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  __int64 v9; // x22
  void *SvtImg; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  QuestInformationListViewItem_o **v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  QuestInformationListViewItem_o *v16; // x8
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v18; // x8
  int32_t v19; // w1
  bool v20; // w1
  int32_t mEnemyType; // w24
  struct UITexture_o **p_SvtImg; // x23
  QuestInformationListViewItem_o *v23; // x8
  UITexture_o *v24; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x4
  const MethodInfo *v31; // x2
  ItemMaster_o *v32; // x21
  bool v33; // w1
  TerminalSceneComponent_c *v34; // x0
  UnityEngine_Object_o *mInstance; // x20
  UISprite_o *v36; // x20
  __int64 v37; // x8
  UISprite_o *v38; // x20
  HorizontalQuestInformationIconDraw_o *v39; // x0
  const MethodInfo *v40; // x4
  UISprite_o *enemySp; // x23
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

  if ( (byte_4C3FCDC & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__);
    sub_1C37058(&HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
    sub_1C37058(&StringLiteral_12074/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_4C3FCDC = 1;
  }
  v9 = sub_1C372A4(HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_120;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = item;
  v13 = (QuestInformationListViewItem_o **)(v9 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)item, v14, v15);
  if ( mode )
  {
    v16 = *v13;
    if ( *v13 )
    {
      infoType = v16->fields.infoType;
      if ( infoType == 1 )
      {
        mEnemyType = v16->fields.mEnemyType;
        if ( mEnemyType )
        {
          p_SvtImg = &this->fields.SvtImg;
          SvtImg = this->fields.SvtImg;
          if ( !SvtImg )
            goto LABEL_120;
          SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_120;
          if ( mEnemyType == 1 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
            v23 = *v13;
            if ( !*v13 )
              goto LABEL_120;
            v24 = *p_SvtImg;
            targetId = v23->fields.targetId;
            targetCnt = v23->fields.targetCnt;
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v24, targetId, targetCnt, targetCnt, 0);
            *p_SvtImg = Manager__loadCommandCard;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SvtImg, (int32_t)Manager__loadCommandCard, v28, v29);
            if ( !*v13 )
              goto LABEL_120;
            HorizontalQuestInformationIconDraw__SetDispType_36532852(
              (HorizontalQuestInformationIconDraw_o *)SvtImg,
              (*v13)->fields.dispType,
              this->fields.SvtImg,
              iconListComponent,
              v30);
            SvtImg = this->fields.enemySp;
            if ( !SvtImg )
              goto LABEL_120;
            SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
            if ( !SvtImg )
              goto LABEL_120;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
            SvtImg = this->fields.enemySp;
            if ( !SvtImg )
              goto LABEL_120;
            SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
            if ( !SvtImg )
              goto LABEL_120;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
            if ( !*v13 )
              goto LABEL_120;
            enemySp = (UISprite_o *)this->fields.enemySp;
            iconId = (*v13)->fields.iconId;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( AtlasManager__SetEnemy(enemySp, iconId, 0) )
            {
              SvtImg = this->fields.enemySp;
              if ( !SvtImg )
                goto LABEL_120;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0);
              SvtImg = this->fields.enemyTexture;
              if ( !SvtImg )
                goto LABEL_120;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0);
              if ( !*v13 )
                goto LABEL_120;
              HorizontalQuestInformationIconDraw__SetDispType(
                (HorizontalQuestInformationIconDraw_o *)SvtImg,
                (*v13)->fields.dispType,
                this->fields.enemySp,
                iconListComponent,
                v43);
            }
            else
            {
              v44 = *(QuestInformationListViewItem_o **)(v9 + 24);
              v45 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
              System_Action___ctor(
                v45,
                (Il2CppObject *)v9,
                Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__,
                0);
              HorizontalQuestInformationIconDraw__LoadEnemyTexture(this, v44, v45, v46);
            }
          }
          HorizontalQuestInformationIconDraw__SetEnemyName(this, *v13, v31);
        }
        else
        {
          SvtImg = this->fields.SvtImg;
          if ( !SvtImg )
            goto LABEL_120;
          SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_120;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
          SvtImg = this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_120;
          SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_120;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C3CF06 )
          {
            sub_1C37058(&TerminalSceneComponent_TypeInfo);
            byte_4C3CF06 = 1;
          }
          v34 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v34 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v34->static_fields->mInstance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
          {
            v36 = (UISprite_o *)this->fields.enemySp;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4C3CF06 )
            {
              sub_1C37058(&TerminalSceneComponent_TypeInfo);
              byte_4C3CF06 = 1;
            }
            SvtImg = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              SvtImg = TerminalSceneComponent_TypeInfo;
            }
            v37 = **((_QWORD **)SvtImg + 23);
            if ( !v37 || !v36 )
              goto LABEL_120;
            UISprite__set_atlas(v36, *(UIAtlas_o **)(v37 + 304), 0);
          }
          v38 = (UISprite_o *)this->fields.enemySp;
          SvtImg = HorizontalQuestInformationIconDraw_TypeInfo;
          if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
          if ( !v38 )
            goto LABEL_120;
          UISprite__set_spriteName(v38, HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0);
          HorizontalQuestInformationIconDraw__SetDispType(v39, 1, this->fields.enemySp, iconListComponent, v40);
          SvtImg = this->fields.textLb;
          if ( !SvtImg )
            goto LABEL_120;
          UILabel__set_text(
            (UILabel_o *)SvtImg,
            HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
            0);
        }
      }
      else if ( !infoType )
      {
        SvtImg = this->fields.blankImg;
        if ( !SvtImg )
          goto LABEL_120;
        if ( v16->fields.mRewardType )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
          v18 = *v13;
          if ( !*v13 )
            goto LABEL_120;
          SvtImg = this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_120;
          v19 = v18->fields.mRewardType == 2 ? 2 : 1;
          ItemIconComponent__SetGift_40921900((ItemIconComponent_o *)SvtImg, v19, v18->fields.targetId, -1, 0, 0);
          SvtImg = this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_120;
          SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_120;
          v20 = 1;
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
          SvtImg = this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_120;
          SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_120;
          v20 = 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v20, 0);
        if ( !*v13 )
          goto LABEL_120;
        if ( (*v13)->fields.mRewardType != 2 )
          goto LABEL_43;
        SvtImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SvtImg )
          goto LABEL_120;
        SvtImg = DataManager__GetMasterData_object_(
                   (DataManager_o *)SvtImg,
                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !*v13 )
          goto LABEL_120;
        v32 = (ItemMaster_o *)SvtImg;
        if ( !SvtImg )
          goto LABEL_120;
        SvtImg = (void *)ItemMaster__isQP((ItemMaster_o *)SvtImg, (*v13)->fields.targetId, 0);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
          goto LABEL_43;
        if ( !*v13 )
          goto LABEL_120;
        SvtImg = (void *)ItemMaster__isFriendPoint(v32, (*v13)->fields.targetId, 0);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
          goto LABEL_43;
        if ( !*v13 )
          goto LABEL_120;
        SvtImg = (void *)ItemMaster__isEventPoint(v32, (*v13)->fields.targetId, 0);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
        {
LABEL_43:
          SvtImg = this->fields.holdNumTitleLb;
          if ( SvtImg )
          {
            SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
            if ( SvtImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
              SvtImg = this->fields.holdNumCntLb;
              if ( SvtImg )
              {
                SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
                if ( SvtImg )
                {
                  v33 = 0;
LABEL_48:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v33, 0);
                  return;
                }
              }
            }
          }
        }
        else
        {
          if ( !*v13 )
            goto LABEL_120;
          SvtImg = (void *)ItemMaster__isMana(v32, (*v13)->fields.targetId, 0);
          if ( ((unsigned __int8)SvtImg & 1) != 0 )
          {
            SvtImg = UserGameMaster__getSelfUserGame(0);
            if ( !SvtImg )
              goto LABEL_120;
            v47 = (int32_t *)((char *)SvtImg + 192);
          }
          else
          {
            if ( !*v13 )
              goto LABEL_120;
            SvtImg = (void *)ItemMaster__isRarePri(v32, (*v13)->fields.targetId, 0);
            if ( ((unsigned __int8)SvtImg & 1) != 0 )
            {
              SvtImg = UserGameMaster__getSelfUserGame(0);
              if ( !SvtImg )
                goto LABEL_120;
              v47 = (int32_t *)((char *)SvtImg + 196);
            }
            else
            {
              if ( !*v13 )
                goto LABEL_120;
              if ( ItemMaster__isStone(v32, (*v13)->fields.targetId, 0) )
              {
                SvtImg = UserGameMaster__getSelfUserGame(0);
                if ( !SvtImg )
                  goto LABEL_120;
                v47 = (int32_t *)((char *)SvtImg + 184);
              }
              else
              {
                SvtImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !SvtImg )
                  goto LABEL_120;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)SvtImg,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4C3CD62 )
                {
                  sub_1C37058(&NetworkManager_TypeInfo);
                  byte_4C3CD62 = 1;
                }
                SvtImg = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  SvtImg = NetworkManager_TypeInfo;
                }
                if ( !*v13 )
                  goto LABEL_120;
                if ( !MasterData_object )
                  goto LABEL_120;
                SvtImg = UserItemMaster__GetEntityDefinitely(
                           (UserItemMaster_o *)MasterData_object,
                           *(_QWORD *)(*((_QWORD *)SvtImg + 23) + 64LL),
                           (*v13)->fields.targetId,
                           0);
                if ( !SvtImg )
                  goto LABEL_120;
                v47 = (int32_t *)((char *)SvtImg + 28);
              }
            }
          }
          v49 = *v47;
          holdNumTitleLb = this->fields.holdNumTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          SvtImg = LocalizationManager__Get((System_String_o *)StringLiteral_12074/*"SHOP_BUY_ITEM_HOLD"*/, 0);
          if ( holdNumTitleLb )
          {
            UILabel__set_text(holdNumTitleLb, (System_String_o *)SvtImg, 0);
            holdNumCntLb = this->fields.holdNumCntLb;
            SvtImg = LocalizationManager__GetNumberFormat(v49, 0);
            if ( holdNumCntLb )
            {
              UILabel__set_text(holdNumCntLb, (System_String_o *)SvtImg, 0);
              SvtImg = this->fields.holdNumTitleLb;
              if ( SvtImg )
              {
                SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
                if ( SvtImg )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
                  SvtImg = this->fields.holdNumCntLb;
                  if ( SvtImg )
                  {
                    SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
                    if ( SvtImg )
                    {
                      v33 = 1;
                      goto LABEL_48;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_120:
        sub_1C372B4(SvtImg);
      }
    }
  }
}


void HorizontalQuestInformationIconDraw___SetEnemyName_b__24_0(
        HorizontalQuestInformationIconDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v4; // x19
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v6; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4C3FCE4 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C37058(&StringLiteral_22878/*"quest_info"*/);
    byte_4C3FCE4 = 1;
  }
  if ( !assetData
    || (this = (HorizontalQuestInformationIconDraw_o *)AssetData__GetObject_object__51154888(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_22878/*"quest_info"*/,
                                                         (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0) )
  {
    sub_1C372B4(this);
  }
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__51855596(
    v6,
    transform,
    (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
}


void HorizontalQuestInformationIconDraw___c__DisplayClass18_0___ctor(
        HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void HorizontalQuestInformationIconDraw___c__DisplayClass18_0___SetItem_b__0(
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
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0), (v4 = v3->fields.__4__this) == 0)
    || (this = (HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *)v4->fields.enemyTexture) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0), (item = v3->fields.item) == 0)
    || (v7 = v3->fields.__4__this) == 0 )
  {
LABEL_8:
    sub_1C372B4(this);
  }
  HorizontalQuestInformationIconDraw__SetDispTypeEnemyTex(
    (HorizontalQuestInformationIconDraw_o *)this,
    item->fields.dispType,
    v7->fields.enemyTexture,
    v5);
}


void HorizontalQuestInformationIconDraw___c__DisplayClass22_0___ctor(
        HorizontalQuestInformationIconDraw___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void HorizontalQuestInformationIconDraw___c__DisplayClass22_0___LoadEnemyTexture_b__0(
        HorizontalQuestInformationIconDraw___c__DisplayClass22_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v7; // x21
  UnityEngine_Material_o *v8; // x20
  struct HorizontalQuestInformationIconDraw_o *v9; // x8
  struct HorizontalQuestInformationIconDraw_o *v10; // x8
  struct HorizontalQuestInformationIconDraw_o *v11; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__51154888; // x0

  if ( (byte_4C3FCE5 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&UnityEngine_Material_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_16535/*"_alpha"*/);
    sub_1C37058(&StringLiteral_4940/*"Custom/SpriteWithMask"*/);
    sub_1C37058(&StringLiteral_16269/*"_MaskTex"*/);
    byte_4C3FCE5 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  *(_QWORD *)&_4__this->fields.alreadySetIsResourcesUnload = assetData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&_4__this->fields.alreadySetIsResourcesUnload,
    (int32_t)assetData,
    (int32_t)method,
    v3);
  v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4940/*"Custom/SpriteWithMask"*/, 0);
  v8 = (UnityEngine_Material_o *)sub_1C372A4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v8, v7, 0);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_13;
  _4__this = (AssetData_o *)v9->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._1_Finalize.method)(
                              _4__this,
                              v8,
                              _4__this->klass[1].vtable._2_GetHashCode.methodPtr);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_13;
  _4__this = v10->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)AssetData__GetObject_object__51154888(
                              _4__this,
                              v10->fields.enemyIconName,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200);
  if ( !v8
    || (UnityEngine_Material__set_mainTexture(v8, (UnityEngine_Texture_o *)_4__this, 0),
        (v11 = this->fields.__4__this) == 0)
    || (enemyIconAssetData = v11->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_63561656(
                                    v11->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16535/*"_alpha"*/,
                                    0),
        !enemyIconAssetData)
    || (Object_object__51154888 = AssetData__GetObject_object__51154888(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200),
        UnityEngine_Material__SetTexture(
          v8,
          (System_String_o *)StringLiteral_16269/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__51154888,
          0),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_1C372B4(_4__this);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}