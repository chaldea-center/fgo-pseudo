void QuestInformationListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  QuestInformationListViewItemDraw_c *v15; // x8
  struct QuestInformationListViewItemDraw_StaticFields *v16; // x10
  int32_t v17; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Array_o *v21; // x0
  System_RuntimeFieldHandle_o v22; // x1
  System_Array_o *v23; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C24053 & 1) == 0 )
  {
    sub_1C2D490(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58);
    sub_1C2D490(&StringLiteral_19029/*"enemy_icon_"*/);
    sub_1C2D490(&StringLiteral_22878/*"questinfo_enemy_brank"*/);
    sub_1C2D490(&StringLiteral_15128/*"Unlit/Transparent Colored"*/);
    sub_1C2D490(&StringLiteral_25560/*"？？？"*/);
    sub_1C2D490(&StringLiteral_6043/*"Enemys/Icon/"*/);
    byte_4C24053 = 1;
  }
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22878/*"questinfo_enemy_brank"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_22878/*"questinfo_enemy_brank"*/,
    v1,
    v2);
  v3 = StringLiteral_25560/*"？？？"*/;
  static_fields = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_25560/*"？？？"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->ENEMY_UNKNOWN_NAME, v3, v5, v6);
  v7 = StringLiteral_6043/*"Enemys/Icon/"*/;
  v8 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v8->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6043/*"Enemys/Icon/"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->ENEMY_ICON_TEXTURE_PATH, v7, v9, v10);
  v11 = StringLiteral_19029/*"enemy_icon_"*/;
  v12 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v12->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19029/*"enemy_icon_"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->ENEMY_ICON_TEXTURE_PREFIX, v11, v13, v14);
  v15 = QuestInformationListViewItemDraw_TypeInfo;
  v16 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v16->ENEMY_UNKNOWN_CLASSID = 12;
  v16->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_C08C00;
  v17 = StringLiteral_15128/*"Unlit/Transparent Colored"*/;
  v18 = v15->static_fields;
  v18->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15128/*"Unlit/Transparent Colored"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v18->DEFAULT_SHADER, v17, v19, v20);
  v21 = (System_Array_o *)sub_1C2D538(float___TypeInfo, 4);
  v22.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  v23 = v21;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v21, v22, 0);
  v24 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v24->TARGET_POSITION = (struct System_Single_array *)v23;
  sub_1C2D434((CGThumbnailListItem_o *)&v24->TARGET_POSITION, (int32_t)v23, v25, v26);
}


void QuestInformationListViewItemDraw___ctor(QuestInformationListViewItemDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Material_o *QuestInformationListViewItemDraw__GetNewChocoMaterial(
        QuestInformationListViewItemDraw_o *this,
        bool isSprite,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *viewManager; // x0

  viewManager = this->fields.viewManager;
  if ( !viewManager )
    sub_1C2D6EC(0, isSprite);
  if ( isSprite )
    return QuestInformationListViewManager__NewChocoMaterialForSprite(viewManager, (const MethodInfo *)isSprite);
  else
    return QuestInformationListViewManager__NewChocoMaterialForTexture(viewManager, (const MethodInfo *)isSprite);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Material_o *QuestInformationListViewItemDraw__GetNewColorShadowMaterial(
        QuestInformationListViewItemDraw_o *this,
        bool isSprite,
        const MethodInfo *method)
{
  QuestInformationListViewManager_o *viewManager; // x0

  viewManager = this->fields.viewManager;
  if ( !viewManager )
    sub_1C2D6EC(0, isSprite);
  if ( isSprite )
    return QuestInformationListViewManager__NewColorShadowMaterialForSprite(viewManager, (const MethodInfo *)isSprite);
  else
    return QuestInformationListViewManager__NewColorShadowMaterialForTexture(viewManager, (const MethodInfo *)isSprite);
}


void QuestInformationListViewItemDraw__LoadEnemyTexture(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
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
  const MethodInfo *v24; // x3
  System_String_o *v25; // x19
  AssetLoader_LoadEndDataHandler_o *v26; // x20
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C24050 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_QuestInformationListViewItemDraw___c__DisplayClass33_0__LoadEnemyTexture_b__0__);
    sub_1C2D490(&QuestInformationListViewItemDraw___c__DisplayClass33_0_TypeInfo);
    byte_4C24050 = 1;
  }
  v7 = sub_1C2D6DC(QuestInformationListViewItemDraw___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v14);
  Instance = (CommonUI_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v27 = iconId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v15, v16, v17);
  v21 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v20, 0);
  this->fields.enemyIconName = v21;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1C2D434((CGThumbnailListItem_o *)p_enemyIconName, (int32_t)v21, v23, v24);
  v25 = System_String__Concat_63457864(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_QuestInformationListViewItemDraw___c__DisplayClass33_0__LoadEnemyTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v25, v26, 1, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0);
      return;
    }
LABEL_14:
    sub_1C2D6EC(Instance, v9);
  }
}


// attributes: thunk
void QuestInformationListViewItemDraw__OnDestroy(QuestInformationListViewItemDraw_o *this, const MethodInfo *method)
{
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, method);
}


void QuestInformationListViewItemDraw__ReleaseEnemyTexture(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_String_o **p_enemyIconName; // x20
  QuestInformationListViewItemDraw_c *v4; // x0
  System_String_o *v5; // x21
  CGThumbnailListItem_o *p_enemyIconAssetData; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C24051 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4C24051 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0) )
  {
    v4 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v4 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v5 = System_String__Concat_63457864(v4->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v5, 0);
    this->fields.enemyIconAssetData = 0;
    p_enemyIconAssetData = (CGThumbnailListItem_o *)&this->fields.enemyIconAssetData;
    sub_1C2D434(p_enemyIconAssetData, 0, v7, v8);
    p_enemyIconAssetData->monitor = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_enemyIconName, 0, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestInformationListViewItemDraw__SetDispType(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v8; // x21
  float v9; // s0 OVERLAPPED
  float v10; // s1
  float v11; // s2
  float v12; // s3
  UnityEngine_Material_o *v13; // x20
  QuestInformationListViewItemDraw_o *v14; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4C2404D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    this = (QuestInformationListViewItemDraw_o *)sub_1C2D490(&StringLiteral_16117/*"_AddColor"*/);
    byte_4C2404D = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( !sp )
        goto LABEL_22;
      v16.fields.r = 1.0;
      v16.fields.g = 1.0;
      v16.fields.b = 1.0;
      v16.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sp, v16, 0);
      v13 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, __int64, const MethodInfo *))v8->klass->vtable._5_GetNewChocoMaterial.methodPtr)(
                                        v8,
                                        1,
                                        v8->klass->vtable._5_GetNewChocoMaterial.method);
      v14 = (QuestInformationListViewItemDraw_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_71026932((UnityEngine_Material_o *)v14, v13, 0);
      goto LABEL_15;
    case 2:
      if ( !item )
        goto LABEL_22;
      if ( item->fields.colorType < 1 )
      {
        this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
          this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
        }
        if ( sp )
        {
          m_CancellationTokenSource = this[1].fields.m_CancellationTokenSource;
          v11 = *((float *)&m_CancellationTokenSource->fields._disposed + 1);
          v12 = *(float *)&m_CancellationTokenSource->fields._executingCallback;
          v9 = *(float *)&m_CancellationTokenSource->fields._threadIDExecutingCallbacks;
          v10 = *(float *)&m_CancellationTokenSource->fields._disposed;
          goto LABEL_21;
        }
LABEL_22:
        sub_1C2D6EC(this, *(_QWORD *)&dispTp);
      }
      if ( !sp )
        goto LABEL_22;
      v17.fields.r = 1.0;
      v17.fields.g = 1.0;
      v17.fields.b = 1.0;
      v17.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sp, v17, 0);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, __int64, const MethodInfo *))v8->klass->vtable._4_GetNewColorShadowMaterial.methodPtr)(
                                                     v8,
                                                     1,
                                                     v8->klass->vtable._4_GetNewColorShadowMaterial.method);
      if ( !this )
        goto LABEL_22;
      v14 = this;
      UnityEngine_Material__SetColor(
        (UnityEngine_Material_o *)this,
        (System_String_o *)StringLiteral_16169/*"_Color"*/,
        item->fields.mainColor,
        0);
      UnityEngine_Material__SetColor(
        (UnityEngine_Material_o *)v14,
        (System_String_o *)StringLiteral_16117/*"_AddColor"*/,
        item->fields.addColor,
        0);
LABEL_15:
      UISpriteAltMat__SetMaterialKeepTexture(sp, (UnityEngine_Material_o *)v14, 0);
      return;
    case 1:
      if ( sp )
      {
        v9 = 1.0;
        v10 = 1.0;
        v11 = 1.0;
        v12 = 1.0;
LABEL_21:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v9, 0);
        UISpriteAltMat__ResetMaterial(sp, 0);
        return;
      }
      goto LABEL_22;
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v8; // x21
  float v9; // s0 OVERLAPPED
  float v10; // s1
  float v11; // s2
  float v12; // s3
  UnityEngine_Material_o *v13; // x20
  UnityEngine_Texture_o *v14; // x0
  UITexture_c *klass; // x8
  UITexture_o *v16; // x0
  UnityEngine_Material_o *v17; // x1
  UnityEngine_Material_o *v18; // x21
  UnityEngine_Texture_o *v19; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4C2404F & 1) == 0 )
  {
    sub_1C2D490(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    sub_1C2D490(&StringLiteral_16260/*"_MainTex"*/);
    sub_1C2D490(&StringLiteral_16117/*"_AddColor"*/);
    this = (QuestInformationListViewItemDraw_o *)sub_1C2D490(&StringLiteral_16265/*"_MaskTex"*/);
    byte_4C2404F = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( !texture )
        goto LABEL_27;
      v21.fields.r = 1.0;
      v21.fields.g = 1.0;
      v21.fields.b = 1.0;
      v21.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v21, 0);
      ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
        texture,
        0,
        texture->klass->vtable._29_set_shader.method);
      v13 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, __int64, const MethodInfo *))v8->klass->vtable._5_GetNewChocoMaterial.methodPtr)(
                                        v8,
                                        1,
                                        v8->klass->vtable._5_GetNewChocoMaterial.method);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._24_get_material.methodPtr)(
                                                     texture,
                                                     texture->klass->vtable._24_get_material.method);
      if ( !this )
        goto LABEL_27;
      this = (QuestInformationListViewItemDraw_o *)UnityEngine_Material__GetTexture(
                                                     (UnityEngine_Material_o *)this,
                                                     (System_String_o *)StringLiteral_16260/*"_MainTex"*/,
                                                     0);
      if ( !v13 )
        goto LABEL_27;
      UnityEngine_Material__SetTexture(v13, (System_String_o *)StringLiteral_16260/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._24_get_material.methodPtr)(
                                                     texture,
                                                     texture->klass->vtable._24_get_material.method);
      if ( !this )
        goto LABEL_27;
      v14 = UnityEngine_Material__GetTexture((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16265/*"_MaskTex"*/, 0);
      UnityEngine_Material__SetTexture(v13, (System_String_o *)StringLiteral_16265/*"_MaskTex"*/, v14, 0);
      klass = texture->klass;
      v16 = texture;
      v17 = v13;
      goto LABEL_20;
    case 2:
      if ( !item )
        goto LABEL_27;
      if ( item->fields.colorType < 1 )
      {
        this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
          this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
        }
        if ( texture )
        {
          m_CancellationTokenSource = this[1].fields.m_CancellationTokenSource;
          v11 = *((float *)&m_CancellationTokenSource->fields._disposed + 1);
          v12 = *(float *)&m_CancellationTokenSource->fields._executingCallback;
          v9 = *(float *)&m_CancellationTokenSource->fields._threadIDExecutingCallbacks;
          v10 = *(float *)&m_CancellationTokenSource->fields._disposed;
          goto LABEL_26;
        }
LABEL_27:
        sub_1C2D6EC(this, *(_QWORD *)&dispTp);
      }
      if ( !texture )
        goto LABEL_27;
      v22.fields.r = 1.0;
      v22.fields.g = 1.0;
      v22.fields.b = 1.0;
      v22.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v22, 0);
      ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
        texture,
        0,
        texture->klass->vtable._29_set_shader.method);
      v18 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, __int64, const MethodInfo *))v8->klass->vtable._4_GetNewColorShadowMaterial.methodPtr)(
                                        v8,
                                        1,
                                        v8->klass->vtable._4_GetNewColorShadowMaterial.method);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._24_get_material.methodPtr)(
                                                     texture,
                                                     texture->klass->vtable._24_get_material.method);
      if ( !this )
        goto LABEL_27;
      this = (QuestInformationListViewItemDraw_o *)UnityEngine_Material__GetTexture(
                                                     (UnityEngine_Material_o *)this,
                                                     (System_String_o *)StringLiteral_16260/*"_MainTex"*/,
                                                     0);
      if ( !v18 )
        goto LABEL_27;
      UnityEngine_Material__SetTexture(v18, (System_String_o *)StringLiteral_16260/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._24_get_material.methodPtr)(
                                                     texture,
                                                     texture->klass->vtable._24_get_material.method);
      if ( !this )
        goto LABEL_27;
      v19 = UnityEngine_Material__GetTexture((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16265/*"_MaskTex"*/, 0);
      UnityEngine_Material__SetTexture(v18, (System_String_o *)StringLiteral_16265/*"_MaskTex"*/, v19, 0);
      UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16169/*"_Color"*/, item->fields.mainColor, 0);
      UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16117/*"_AddColor"*/, item->fields.addColor, 0);
      klass = texture->klass;
      v16 = texture;
      v17 = v18;
LABEL_20:
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))klass->vtable._25_set_material.methodPtr)(
        v16,
        v17,
        klass->vtable._25_set_material.method);
      ((void (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._30_MarkAsChanged.methodPtr)(
        texture,
        texture->klass->vtable._30_MarkAsChanged.method);
      return;
    case 1:
      if ( texture )
      {
        v9 = 1.0;
        v10 = 1.0;
        v11 = 1.0;
        v12 = 1.0;
LABEL_26:
        UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v9, 0);
        return;
      }
      goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestInformationListViewItemDraw__SetDispType_36348032(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v8; // x21
  QuestInformationListViewItemDraw_o *v9; // x20
  QuestInformationListViewItemDraw_c *v10; // x0
  UnityEngine_Material_o *v11; // x20
  UITexture_c *klass; // x8
  UITexture_o *v13; // x0
  UnityEngine_Material_o *v14; // x1
  UnityEngine_Material_o *v15; // x21
  UnityEngine_Shader_o *v16; // x0
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4C2404E & 1) == 0 )
  {
    sub_1C2D490(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    sub_1C2D490(&StringLiteral_16260/*"_MainTex"*/);
    this = (QuestInformationListViewItemDraw_o *)sub_1C2D490(&StringLiteral_16117/*"_AddColor"*/);
    byte_4C2404E = 1;
  }
  if ( dispTp == 3 )
  {
    if ( !texture )
      goto LABEL_33;
    v18.fields.r = 1.0;
    v18.fields.g = 1.0;
    v18.fields.b = 1.0;
    v18.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)texture, v18, 0);
    ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      0,
      texture->klass->vtable._29_set_shader.method);
    v11 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, _QWORD, const MethodInfo *))v8->klass->vtable._5_GetNewChocoMaterial.methodPtr)(
                                      v8,
                                      0,
                                      v8->klass->vtable._5_GetNewChocoMaterial.method);
    this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                                   texture,
                                                   texture->klass->vtable._26_get_mainTexture.method);
    if ( !v11 )
      goto LABEL_33;
    UnityEngine_Material__SetTexture(v11, (System_String_o *)StringLiteral_16260/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
    klass = texture->klass;
    v13 = texture;
    v14 = v11;
LABEL_22:
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))klass->vtable._25_set_material.methodPtr)(
      v13,
      v14,
      klass->vtable._25_set_material.method);
    ((void (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._30_MarkAsChanged.methodPtr)(
      texture,
      texture->klass->vtable._30_MarkAsChanged.method);
    return;
  }
  if ( dispTp != 2 )
  {
    if ( dispTp != 1 )
      return;
    if ( texture )
    {
      v17.fields.r = 1.0;
      v17.fields.g = 1.0;
      v17.fields.b = 1.0;
      v17.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v17, 0);
      ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
        texture,
        0,
        texture->klass->vtable._25_set_material.method);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._28_get_shader.methodPtr)(
                                                     texture,
                                                     texture->klass->vtable._28_get_shader.method);
      if ( this )
      {
        this = (QuestInformationListViewItemDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        v9 = this;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        if ( v9 )
        {
          if ( !System_String__Equals_63493168(
                  (System_String_o *)v9,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0) )
          {
            v10 = QuestInformationListViewItemDraw_TypeInfo;
            if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
              goto LABEL_31;
            goto LABEL_32;
          }
          return;
        }
      }
    }
LABEL_33:
    sub_1C2D6EC(this, *(_QWORD *)&dispTp);
  }
  if ( !item )
    goto LABEL_33;
  if ( item->fields.colorType >= 1 )
  {
    if ( !texture )
      goto LABEL_33;
    v19.fields.r = 1.0;
    v19.fields.g = 1.0;
    v19.fields.b = 1.0;
    v19.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)texture, v19, 0);
    ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      0,
      texture->klass->vtable._29_set_shader.method);
    v15 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, _QWORD, const MethodInfo *))v8->klass->vtable._4_GetNewColorShadowMaterial.methodPtr)(
                                      v8,
                                      0,
                                      v8->klass->vtable._4_GetNewColorShadowMaterial.method);
    this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                                   texture,
                                                   texture->klass->vtable._26_get_mainTexture.method);
    if ( !v15 )
      goto LABEL_33;
    UnityEngine_Material__SetTexture(v15, (System_String_o *)StringLiteral_16260/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
    UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16169/*"_Color"*/, item->fields.mainColor, 0);
    UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16117/*"_AddColor"*/, item->fields.addColor, 0);
    klass = texture->klass;
    v13 = texture;
    v14 = v15;
    goto LABEL_22;
  }
  this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_33;
  UIWidget__set_color(
    (UIWidget_o *)texture,
    *(UnityEngine_Color_o *)&this[1].fields.m_CancellationTokenSource->fields._threadIDExecutingCallbacks,
    0);
  ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
    texture,
    0,
    texture->klass->vtable._25_set_material.method);
  this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._28_get_shader.methodPtr)(
                                                 texture,
                                                 texture->klass->vtable._28_get_shader.method);
  if ( !this )
    goto LABEL_33;
  this = (QuestInformationListViewItemDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !this )
    goto LABEL_33;
  if ( !System_String__Equals_63493168(
          (System_String_o *)this,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0) )
  {
    v10 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_31:
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestInformationListViewItemDraw_TypeInfo;
    }
LABEL_32:
    v16 = UnityEngine_Shader__Find(v10->static_fields->DEFAULT_SHADER, 0);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      v16,
      texture->klass->vtable._29_set_shader.method);
  }
}


void QuestInformationListViewItemDraw__SetEnemyName(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v4; // x20
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v7; // x22

  v4 = this;
  if ( (byte_4C24052 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__35_0__);
    this = (QuestInformationListViewItemDraw_o *)sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C24052 = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0);
    v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v7,
      (Il2CppObject *)v4,
      Method_QuestInformationListViewItemDraw__SetEnemyName_b__35_0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v7, 1, 0);
  }
  this = (QuestInformationListViewItemDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1C2D6EC(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0);
}


void QuestInformationListViewItemDraw__SetItem(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x21
  void *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  QuestInformationListViewItem_o **v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *completeMissionTarget; // x23
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  Il2CppObject *MasterData_object; // x23
  int v19; // w8
  void *v20; // x24
  unsigned int v21; // w26
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  struct ListViewObject_o *viewObject; // x8
  struct QuestInformationListViewManager_o *manager; // x1
  QuestInformationListViewManager_c *v27; // x8
  __int64 naturalAligment; // x9
  struct QuestInformationListViewManager_o **p_viewManager; // x0
  QuestInformationListViewItem_o *v30; // x8
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v32; // x8
  int32_t v33; // w1
  bool v34; // w1
  int32_t mEnemyType; // w23
  struct UITexture_o **p_SvtImg; // x22
  QuestInformationListViewItem_o *v37; // x8
  UITexture_o *v38; // x24
  int32_t targetCnt; // w21
  int32_t targetId; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x4
  const MethodInfo *v45; // x2
  ItemMaster_o *v46; // x21
  TerminalSceneComponent_c *v47; // x0
  UnityEngine_Object_o *mInstance; // x21
  UISprite_o *v49; // x21
  __int64 v50; // x8
  UISprite_o *v51; // x21
  const MethodInfo *v52; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  bool v54; // w1
  UISprite_o *enemySp; // x22
  int32_t iconId; // w23
  const MethodInfo *v57; // x4
  QuestInformationListViewItem_o *v58; // x22
  System_Action_o *v59; // x23
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x1
  BalanceConfig_c *v62; // x0
  UnityEngine_Object_o *v63; // x20
  UnityEngine_Object_o *SvtImg; // x20
  int32_t *v65; // x8
  Il2CppObject *v66; // x21
  int32_t v67; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21

  if ( (byte_4C2404B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C2D490(&QuestInformationListViewManager_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalSceneComponent_TypeInfo);
    sub_1C2D490(&Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__);
    sub_1C2D490(&QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo);
    sub_1C2D490(&StringLiteral_12070/*"SHOP_BUY_ITEM_HOLD"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2404B = 1;
  }
  v7 = sub_1C2D6DC(QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_196;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = item;
  v12 = (QuestInformationListViewItem_o **)(v7 + 24);
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)item, v13, v14);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Inequality(completeMissionTarget, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_196;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_196;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_196;
    Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_196;
    v19 = *((_DWORD *)Instance + 6);
    v20 = Instance;
    if ( v19 >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= v19 )
          goto LABEL_197;
        v22 = *((_QWORD *)v20 + (int)v21 + 4);
        if ( !v22 )
          goto LABEL_196;
        if ( !MasterData_object )
          goto LABEL_196;
        Instance = EventMissionMaster__getCompleteMissionList(
                     (EventMissionMaster_o *)MasterData_object,
                     *(_DWORD *)(v22 + 20),
                     0);
        if ( !Instance )
          goto LABEL_196;
        v23 = *((_QWORD *)Instance + 3);
        if ( v23 )
          break;
        v19 = *((_DWORD *)v20 + 6);
        if ( (int)++v21 >= v19 )
          goto LABEL_24;
      }
      if ( !(_DWORD)v23 )
LABEL_197:
        sub_1C2D6F4(Instance, v9, v16);
      v24 = *((_QWORD *)Instance + 4);
      if ( !v24 )
        goto LABEL_196;
      Instance = this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_196;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v24 + 28), 0);
    }
  }
LABEL_24:
  if ( !*v12 )
    goto LABEL_196;
  viewObject = (*v12)->fields.viewObject;
  if ( !viewObject )
    goto LABEL_196;
  manager = (struct QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( !manager )
    goto LABEL_32;
  v27 = QuestInformationListViewManager_TypeInfo;
  naturalAligment = QuestInformationListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != QuestInformationListViewManager_TypeInfo
    || (this->fields.viewManager = manager,
        p_viewManager = &this->fields.viewManager,
        manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != v27 )
  {
    sub_1C2D9AC(manager);
LABEL_32:
    this->fields.viewManager = manager;
    p_viewManager = &this->fields.viewManager;
  }
  sub_1C2D434((CGThumbnailListItem_o *)p_viewManager, (int32_t)manager, v16, v17);
  if ( !mode )
    return;
  v30 = *v12;
  if ( !*v12 )
    goto LABEL_196;
  infoType = v30->fields.infoType;
  if ( infoType == 1 )
  {
    mEnemyType = v30->fields.mEnemyType;
    if ( mEnemyType )
    {
      p_SvtImg = &this->fields.SvtImg;
      Instance = this->fields.SvtImg;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_196;
      if ( mEnemyType == 1 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        v37 = *v12;
        if ( !*v12 )
          goto LABEL_196;
        v38 = *p_SvtImg;
        targetId = v37->fields.targetId;
        targetCnt = v37->fields.targetCnt;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v38, targetId, targetCnt, targetCnt, 0);
        *p_SvtImg = Manager__loadCommandCard;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.SvtImg, (int32_t)Manager__loadCommandCard, v42, v43);
        if ( !*v12 )
          goto LABEL_196;
        QuestInformationListViewItemDraw__SetDispType_36348032(
          this,
          (*v12)->fields.dispType,
          this->fields.SvtImg,
          *v12,
          v44);
        Instance = this->fields.enemySp;
        if ( !Instance )
          goto LABEL_196;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_196;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        Instance = this->fields.enemySp;
        if ( !Instance )
          goto LABEL_196;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_196;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        if ( !*v12 )
          goto LABEL_196;
        enemySp = (UISprite_o *)this->fields.enemySp;
        iconId = (*v12)->fields.iconId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__SetEnemy(enemySp, iconId, 0) )
        {
          Instance = this->fields.enemySp;
          if ( !Instance )
            goto LABEL_196;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
          Instance = this->fields.enemyTexture;
          if ( !Instance )
            goto LABEL_196;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
          if ( !*v12 )
            goto LABEL_196;
          QuestInformationListViewItemDraw__SetDispType(this, (*v12)->fields.dispType, this->fields.enemySp, *v12, v57);
        }
        else
        {
          v58 = *(QuestInformationListViewItem_o **)(v7 + 24);
          v59 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v59,
            (Il2CppObject *)v7,
            Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__,
            0);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v58, v59, v60);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v12, v45);
      if ( !*v12 )
        goto LABEL_196;
      Instance = this->fields.classComp;
      if ( !Instance )
        goto LABEL_196;
      ServantClassIconComponent__SetWithClassOverWrite(
        (ServantClassIconComponent_o *)Instance,
        (*v12)->fields.targetId,
        (*v12)->fields.targetCnt,
        (*v12)->fields.classId,
        (*v12)->fields._IsGrand_k__BackingField,
        0);
      Instance = this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !*v12 )
        goto LABEL_196;
      if ( !Instance )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v12)->fields.weeklyMissionTarget, 0);
      Instance = this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !*v12 )
        goto LABEL_196;
      if ( !Instance )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v12)->fields.limitMissionTarget, 0);
      Instance = this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !*v12 )
        goto LABEL_196;
      if ( !Instance )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v12)->fields.eventMissionTarget, 0);
      Instance = this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !*v12 || !Instance )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v12)->fields.completeMissionTarget, 0);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v61);
      goto LABEL_146;
    }
    Instance = this->fields.SvtImg;
    if ( !Instance )
      goto LABEL_196;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_196;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = this->fields.enemySp;
    if ( !Instance )
      goto LABEL_196;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_196;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C21383 )
    {
      sub_1C2D490(&TerminalSceneComponent_TypeInfo);
      byte_4C21383 = 1;
    }
    v47 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v47 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v47->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    {
      v49 = (UISprite_o *)this->fields.enemySp;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C21383 )
      {
        sub_1C2D490(&TerminalSceneComponent_TypeInfo);
        byte_4C21383 = 1;
      }
      Instance = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = TerminalSceneComponent_TypeInfo;
      }
      v50 = **((_QWORD **)Instance + 23);
      if ( !v50 || !v49 )
        goto LABEL_196;
      UISprite__set_atlas(v49, *(UIAtlas_o **)(v50 + 304), 0);
    }
    v51 = (UISprite_o *)this->fields.enemySp;
    Instance = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    if ( !v51 )
      goto LABEL_196;
    UISprite__set_spriteName(v51, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0);
    QuestInformationListViewItemDraw__SetDispType(this, 1, this->fields.enemySp, *v12, v52);
    Instance = this->fields.textLb;
    if ( !Instance )
      goto LABEL_196;
    UILabel__set_text(
      (UILabel_o *)Instance,
      QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
      0);
    Instance = this->fields.classComp;
    if ( !Instance )
      goto LABEL_196;
    ServantClassIconComponent__Set(
      (ServantClassIconComponent_o *)Instance,
      QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
      0,
      0);
    classComp = this->fields.classComp;
    if ( !classComp )
      goto LABEL_196;
    Instance = classComp->fields.nameLabel;
    if ( !Instance )
      goto LABEL_196;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
    Instance = this->fields.weeklyMissionTarget;
    if ( !Instance )
      goto LABEL_196;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_196;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = this->fields.limitMissionTarget;
    if ( !Instance )
      goto LABEL_196;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_196;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = this->fields.eventMissionTarget;
    if ( !Instance )
      goto LABEL_196;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !*v12 )
      goto LABEL_196;
    if ( !Instance )
      goto LABEL_196;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v12)->fields.eventMissionTarget, 0);
    Instance = this->fields.completeMissionTarget;
    if ( !Instance )
      goto LABEL_196;
  }
  else
  {
    if ( infoType )
      goto LABEL_146;
    Instance = this->fields.blankImg;
    if ( !Instance )
      goto LABEL_196;
    if ( v30->fields.mRewardType )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v32 = *v12;
      if ( !*v12 )
        goto LABEL_196;
      Instance = this->fields.itemIcon;
      if ( !Instance )
        goto LABEL_196;
      v33 = v32->fields.mRewardType == 2 ? 2 : 1;
      ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)Instance, v33, v32->fields.targetId, -1, 0, 0);
      Instance = this->fields.itemIcon;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_196;
      v34 = 1;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = this->fields.itemIcon;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_196;
      v34 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v34, 0);
    if ( !*v12 )
      goto LABEL_196;
    if ( (*v12)->fields.mRewardType == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !*v12 )
        goto LABEL_196;
      v46 = (ItemMaster_o *)Instance;
      if ( !Instance )
        goto LABEL_196;
      Instance = (void *)ItemMaster__isQP((ItemMaster_o *)Instance, (*v12)->fields.targetId, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_71;
      if ( !*v12 )
        goto LABEL_196;
      Instance = (void *)ItemMaster__isFriendPoint(v46, (*v12)->fields.targetId, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_71;
      if ( !*v12 )
        goto LABEL_196;
      Instance = (void *)ItemMaster__isEventPoint(v46, (*v12)->fields.targetId, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
LABEL_71:
        Instance = this->fields.holdNumTitleLb;
        if ( Instance )
        {
          Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          if ( Instance )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
            Instance = this->fields.holdNumCntLb;
            if ( Instance )
            {
              Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
              if ( Instance )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                return;
              }
            }
          }
        }
LABEL_196:
        sub_1C2D6EC(Instance, v9);
      }
      if ( !*v12 )
        goto LABEL_196;
      Instance = (void *)ItemMaster__isMana(v46, (*v12)->fields.targetId, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = UserGameMaster__getSelfUserGame(0);
        if ( !Instance )
          goto LABEL_196;
        v65 = (int32_t *)((char *)Instance + 192);
      }
      else
      {
        if ( !*v12 )
          goto LABEL_196;
        Instance = (void *)ItemMaster__isRarePri(v46, (*v12)->fields.targetId, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = UserGameMaster__getSelfUserGame(0);
          if ( !Instance )
            goto LABEL_196;
          v65 = (int32_t *)((char *)Instance + 196);
        }
        else
        {
          if ( !*v12 )
            goto LABEL_196;
          if ( ItemMaster__isStone(v46, (*v12)->fields.targetId, 0) )
          {
            Instance = UserGameMaster__getSelfUserGame(0);
            if ( !Instance )
              goto LABEL_196;
            v65 = (int32_t *)((char *)Instance + 184);
          }
          else
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_196;
            v66 = DataManager__GetMasterData_object_(
                    (DataManager_o *)Instance,
                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C211E1 )
            {
              sub_1C2D490(&NetworkManager_TypeInfo);
              byte_4C211E1 = 1;
            }
            Instance = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager_TypeInfo;
            }
            if ( !*v12 )
              goto LABEL_196;
            if ( !v66 )
              goto LABEL_196;
            Instance = UserItemMaster__GetEntityDefinitely(
                         (UserItemMaster_o *)v66,
                         *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                         (*v12)->fields.targetId,
                         0);
            if ( !Instance )
              goto LABEL_196;
            v65 = (int32_t *)((char *)Instance + 28);
          }
        }
      }
      v67 = *v65;
      holdNumTitleLb = this->fields.holdNumTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12070/*"SHOP_BUY_ITEM_HOLD"*/, 0);
      if ( !holdNumTitleLb )
        goto LABEL_196;
      UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0);
      holdNumCntLb = this->fields.holdNumCntLb;
      Instance = LocalizationManager__GetNumberFormat(v67, 0);
      if ( !holdNumCntLb )
        goto LABEL_196;
      UILabel__set_text(holdNumCntLb, (System_String_o *)Instance, 0);
      Instance = this->fields.holdNumTitleLb;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      Instance = this->fields.holdNumCntLb;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_196;
      v54 = 1;
      goto LABEL_119;
    }
    Instance = this->fields.holdNumTitleLb;
    if ( !Instance )
      goto LABEL_196;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_196;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = this->fields.holdNumCntLb;
    if ( !Instance )
      goto LABEL_196;
  }
  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_196;
  v54 = 0;
LABEL_119:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v54, 0);
LABEL_146:
  v62 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v62 = BalanceConfig_TypeInfo;
  }
  if ( !v62->static_fields->IsKeepEnemyFaceIconPosZ )
  {
    v63 = (UnityEngine_Object_o *)this->fields.enemySp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v63, 0, 0) )
    {
      Instance = this->fields.enemySp;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_196;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
        ComponentHelper__SetLocalPositionZ((UnityEngine_Component_o *)this->fields.enemySp, 1.0, 0);
    }
    SvtImg = (UnityEngine_Object_o *)this->fields.SvtImg;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(SvtImg, 0, 0) )
    {
      Instance = this->fields.SvtImg;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_196;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
        ComponentHelper__SetLocalPositionZ((UnityEngine_Component_o *)this->fields.SvtImg, 1.0, 0);
    }
  }
}


void QuestInformationListViewItemDraw__UpdateTargetPosition(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *completeMissionTarget; // x0
  __int64 v4; // x2
  UnityEngine_GameObject_o *v5; // x20
  QuestInformationListViewItemDraw_c *v6; // x8
  struct System_Single_array *TARGET_POSITION; // x8
  unsigned int v8; // w21
  UnityEngine_GameObject_o *v9; // x20
  QuestInformationListViewItemDraw_c *v10; // x8
  struct System_Single_array *v11; // x8
  UnityEngine_GameObject_o *v12; // x20
  QuestInformationListViewItemDraw_c *v13; // x8
  struct System_Single_array *v14; // x8
  UnityEngine_GameObject_o *v15; // x19
  QuestInformationListViewItemDraw_c *v16; // x8
  struct System_Single_array *v17; // x8

  if ( (byte_4C2404C & 1) == 0 )
  {
    sub_1C2D490(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4C2404C = 1;
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_41;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0);
  if ( !completeMissionTarget )
    goto LABEL_41;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_41;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0);
    v5 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v6 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v6 = QuestInformationListViewItemDraw_TypeInfo;
    }
    TARGET_POSITION = v6->static_fields->TARGET_POSITION;
    if ( !TARGET_POSITION )
      goto LABEL_41;
    if ( !LODWORD(TARGET_POSITION->max_length) )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v5, TARGET_POSITION->m_Items[0], 0);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_41;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0);
  if ( !completeMissionTarget )
    goto LABEL_41;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_41;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0);
    v9 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v10 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v10 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v11 = v10->static_fields->TARGET_POSITION;
    if ( !v11 )
      goto LABEL_41;
    if ( v8 >= LODWORD(v11->max_length) )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v9, v11->m_Items[v8++], 0);
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_41;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0);
  if ( !completeMissionTarget )
    goto LABEL_41;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_41;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0);
    v12 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v13 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v13 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v14 = v13->static_fields->TARGET_POSITION;
    if ( !v14 )
      goto LABEL_41;
    if ( v8 >= LODWORD(v14->max_length) )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v12, v14->m_Items[v8++], 0);
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_41;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0);
  if ( !completeMissionTarget )
    goto LABEL_41;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
    if ( completeMissionTarget )
    {
      completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0);
      v15 = (UnityEngine_GameObject_o *)completeMissionTarget;
      v16 = QuestInformationListViewItemDraw_TypeInfo;
      if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v16 = QuestInformationListViewItemDraw_TypeInfo;
      }
      v17 = v16->static_fields->TARGET_POSITION;
      if ( v17 )
      {
        if ( v8 < LODWORD(v17->max_length) )
        {
          GameObjectExtensions__SetLocalPositionY(v15, v17->m_Items[v8], 0);
          return;
        }
LABEL_42:
        sub_1C2D6F4(completeMissionTarget, method, v4);
      }
    }
LABEL_41:
    sub_1C2D6EC(completeMissionTarget, method);
  }
}


void QuestInformationListViewItemDraw___SetEnemyName_b__35_0(
        QuestInformationListViewItemDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v4; // x19
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v6; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4C24054 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (QuestInformationListViewItemDraw_o *)sub_1C2D490(&StringLiteral_22857/*"quest_info"*/);
    byte_4C24054 = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_object__51051712(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_22857/*"quest_info"*/,
                                                       (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0) )
  {
    sub_1C2D6EC(this, assetData);
  }
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__51752420(
    v6,
    transform,
    (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
}


void QuestInformationListViewItemDraw___c__DisplayClass26_0___ctor(
        QuestInformationListViewItemDraw___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestInformationListViewItemDraw___c__DisplayClass26_0___SetItem_b__0(
        QuestInformationListViewItemDraw___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct QuestInformationListViewItemDraw_o *_4__this; // x8
  QuestInformationListViewItemDraw___c__DisplayClass26_0_o *v3; // x19
  struct QuestInformationListViewItemDraw_o *v4; // x8
  const MethodInfo *v5; // x4
  QuestInformationListViewItem_o *item; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0), (v4 = v3->fields.__4__this) == 0)
    || (this = (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)v4->fields.enemyTexture) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0), (item = v3->fields.item) == 0)
    || (this = (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)v3->fields.__4__this) == 0 )
  {
LABEL_8:
    sub_1C2D6EC(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[4].fields.__4__this,
    item,
    v5);
}


void QuestInformationListViewItemDraw___c__DisplayClass33_0___ctor(
        QuestInformationListViewItemDraw___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestInformationListViewItemDraw___c__DisplayClass33_0___LoadEnemyTexture_b__0(
        QuestInformationListViewItemDraw___c__DisplayClass33_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v7; // x21
  UnityEngine_Material_o *v8; // x20
  struct QuestInformationListViewItemDraw_o *v9; // x8
  struct QuestInformationListViewItemDraw_o *v10; // x8
  struct QuestInformationListViewItemDraw_o *v11; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__51051712; // x0

  if ( (byte_4C24055 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&UnityEngine_Material_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_16531/*"_alpha"*/);
    sub_1C2D490(&StringLiteral_4932/*"Custom/SpriteWithMask"*/);
    sub_1C2D490(&StringLiteral_16265/*"_MaskTex"*/);
    byte_4C24055 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].fields.attrib = (struct System_String_o *)assetData;
  sub_1C2D434((CGThumbnailListItem_o *)&_4__this[1].fields.attrib, (int32_t)assetData, (int32_t)method, v3);
  v7 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4932/*"Custom/SpriteWithMask"*/, 0);
  v8 = (UnityEngine_Material_o *)sub_1C2D6DC(UnityEngine_Material_TypeInfo);
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
  _4__this = (AssetData_o *)AssetData__GetObject_object__51051712(
                              _4__this,
                              v10->fields.enemyIconName,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112);
  if ( !v8
    || (UnityEngine_Material__set_mainTexture(v8, (UnityEngine_Texture_o *)_4__this, 0),
        (v11 = this->fields.__4__this) == 0)
    || (enemyIconAssetData = v11->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_63457864(
                                    v11->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16531/*"_alpha"*/,
                                    0),
        !enemyIconAssetData)
    || (Object_object__51051712 = AssetData__GetObject_object__51051712(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112),
        UnityEngine_Material__SetTexture(
          v8,
          (System_String_o *)StringLiteral_16265/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__51051712,
          0),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_1C2D6EC(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}