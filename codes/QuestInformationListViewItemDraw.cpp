void QuestInformationListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  QuestInformationListViewItemDraw_c *v31; // x8
  struct QuestInformationListViewItemDraw_StaticFields *v32; // x10
  int32_t v33; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Array_o *v41; // x0
  System_RuntimeFieldHandle_o v42; // x1
  System_Array_o *v43; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7

  if ( (byte_4CC4113 & 1) == 0 )
  {
    sub_1C713B0(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C713B0(&float___TypeInfo);
    sub_1C713B0(&Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58);
    sub_1C713B0(&StringLiteral_19100/*"enemy_icon_"*/);
    sub_1C713B0(&StringLiteral_23010/*"questinfo_enemy_brank"*/);
    sub_1C713B0(&StringLiteral_15136/*"Unlit/Transparent Colored"*/);
    sub_1C713B0(&StringLiteral_25715/*"？？？"*/);
    sub_1C713B0(&StringLiteral_6044/*"Enemys/Icon/"*/);
    byte_4CC4113 = 1;
  }
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_23010/*"questinfo_enemy_brank"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_23010/*"questinfo_enemy_brank"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_25715/*"？？？"*/;
  static_fields = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_25715/*"？？？"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->ENEMY_UNKNOWN_NAME, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_6044/*"Enemys/Icon/"*/;
  v16 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v16->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6044/*"Enemys/Icon/"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->ENEMY_ICON_TEXTURE_PATH, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_19100/*"enemy_icon_"*/;
  v24 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v24->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19100/*"enemy_icon_"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v24->ENEMY_ICON_TEXTURE_PREFIX, v23, v25, v26, v27, v28, v29, v30);
  v31 = QuestInformationListViewItemDraw_TypeInfo;
  v32 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v32->ENEMY_UNKNOWN_CLASSID = 12;
  v32->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_CEE4C0;
  v33 = StringLiteral_15136/*"Unlit/Transparent Colored"*/;
  v34 = v31->static_fields;
  v34->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15136/*"Unlit/Transparent Colored"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v34->DEFAULT_SHADER, v33, v35, v36, v37, v38, v39, v40);
  v41 = (System_Array_o *)sub_1C71458(float___TypeInfo, 4);
  v42.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  v43 = v41;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64730948(v41, v42, 0);
  v44 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v44->TARGET_POSITION = (struct System_Single_array *)v43;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v44->TARGET_POSITION, (int32_t)v43, v45, v46, v47, v48, v49, v50);
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
    sub_1C71608(0, isSprite);
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
    sub_1C71608(0, isSprite);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v25; // x0
  struct System_String_o *v26; // x0
  struct System_String_o **p_enemyIconName; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x20
  int32_t v36; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CC4110 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_QuestInformationListViewItemDraw___c__DisplayClass33_0__LoadEnemyTexture_b__0__);
    sub_1C713B0(&QuestInformationListViewItemDraw___c__DisplayClass33_0_TypeInfo);
    byte_4CC4110 = 1;
  }
  v7 = sub_1C715FC(QuestInformationListViewItemDraw___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v22);
  Instance = (CommonUI_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v36 = iconId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v26 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v25, 0);
  this->fields.enemyIconName = v26;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_enemyIconName, (int32_t)v26, v28, v29, v30, v31, v32, v33);
  v34 = System_String__Concat_64031724(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v7,
    Method_QuestInformationListViewItemDraw___c__DisplayClass33_0__LoadEnemyTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v34, v35, 1, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0);
      return;
    }
LABEL_14:
    sub_1C71608(Instance, v9);
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
  GrandQuestFolderBoardItem_o *p_enemyIconAssetData; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4CC4111 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4CC4111 = 1;
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
    v5 = System_String__Concat_64031724(v4->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v5, 0);
    this->fields.enemyIconAssetData = 0;
    p_enemyIconAssetData = (GrandQuestFolderBoardItem_o *)&this->fields.enemyIconAssetData;
    sub_1C71354(p_enemyIconAssetData, 0, v7, v8, v9, v10, v11, v12);
    p_enemyIconAssetData->monitor = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_enemyIconName, 0, v13, v14, v15, v16, v17, v18);
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
  if ( (byte_4CC410D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_16173/*"_Color"*/);
    this = (QuestInformationListViewItemDraw_o *)sub_1C713B0(&StringLiteral_16121/*"_AddColor"*/);
    byte_4CC410D = 1;
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
      v14 = (QuestInformationListViewItemDraw_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_71587172((UnityEngine_Material_o *)v14, v13, 0);
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
        sub_1C71608(this, *(_QWORD *)&dispTp);
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
        (System_String_o *)StringLiteral_16173/*"_Color"*/,
        item->fields.mainColor,
        0);
      UnityEngine_Material__SetColor(
        (UnityEngine_Material_o *)v14,
        (System_String_o *)StringLiteral_16121/*"_AddColor"*/,
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
  if ( (byte_4CC410F & 1) == 0 )
  {
    sub_1C713B0(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_16173/*"_Color"*/);
    sub_1C713B0(&StringLiteral_16265/*"_MainTex"*/);
    sub_1C713B0(&StringLiteral_16121/*"_AddColor"*/);
    this = (QuestInformationListViewItemDraw_o *)sub_1C713B0(&StringLiteral_16270/*"_MaskTex"*/);
    byte_4CC410F = 1;
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
                                                     (System_String_o *)StringLiteral_16265/*"_MainTex"*/,
                                                     0);
      if ( !v13 )
        goto LABEL_27;
      UnityEngine_Material__SetTexture(v13, (System_String_o *)StringLiteral_16265/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._24_get_material.methodPtr)(
                                                     texture,
                                                     texture->klass->vtable._24_get_material.method);
      if ( !this )
        goto LABEL_27;
      v14 = UnityEngine_Material__GetTexture((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16270/*"_MaskTex"*/, 0);
      UnityEngine_Material__SetTexture(v13, (System_String_o *)StringLiteral_16270/*"_MaskTex"*/, v14, 0);
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
        sub_1C71608(this, *(_QWORD *)&dispTp);
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
                                                     (System_String_o *)StringLiteral_16265/*"_MainTex"*/,
                                                     0);
      if ( !v18 )
        goto LABEL_27;
      UnityEngine_Material__SetTexture(v18, (System_String_o *)StringLiteral_16265/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._24_get_material.methodPtr)(
                                                     texture,
                                                     texture->klass->vtable._24_get_material.method);
      if ( !this )
        goto LABEL_27;
      v19 = UnityEngine_Material__GetTexture((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16270/*"_MaskTex"*/, 0);
      UnityEngine_Material__SetTexture(v18, (System_String_o *)StringLiteral_16270/*"_MaskTex"*/, v19, 0);
      UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16173/*"_Color"*/, item->fields.mainColor, 0);
      UnityEngine_Material__SetColor(v18, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, item->fields.addColor, 0);
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
void QuestInformationListViewItemDraw__SetDispType_36821908(
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
  if ( (byte_4CC410E & 1) == 0 )
  {
    sub_1C713B0(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C713B0(&StringLiteral_16173/*"_Color"*/);
    sub_1C713B0(&StringLiteral_16265/*"_MainTex"*/);
    this = (QuestInformationListViewItemDraw_o *)sub_1C713B0(&StringLiteral_16121/*"_AddColor"*/);
    byte_4CC410E = 1;
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
    UnityEngine_Material__SetTexture(v11, (System_String_o *)StringLiteral_16265/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
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
          if ( !System_String__Equals_64067044(
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
    sub_1C71608(this, *(_QWORD *)&dispTp);
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
    UnityEngine_Material__SetTexture(v15, (System_String_o *)StringLiteral_16265/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
    UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16173/*"_Color"*/, item->fields.mainColor, 0);
    UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, item->fields.addColor, 0);
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
  if ( !System_String__Equals_64067044(
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
  if ( (byte_4CC4112 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__35_0__);
    this = (QuestInformationListViewItemDraw_o *)sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    byte_4CC4112 = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0);
    v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    sub_1C71608(this, item);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  QuestInformationListViewItem_o **v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Object_o *completeMissionTarget; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Il2CppObject *MasterData_object; // x23
  int v31; // w8
  void *v32; // x24
  unsigned int v33; // w26
  __int64 v34; // x8
  __int64 v35; // x8
  __int64 v36; // x8
  struct ListViewObject_o *viewObject; // x8
  struct QuestInformationListViewManager_o *manager; // x1
  QuestInformationListViewManager_c *v39; // x8
  __int64 naturalAligment; // x9
  struct QuestInformationListViewManager_o **p_viewManager; // x0
  QuestInformationListViewItem_o *v42; // x8
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v44; // x8
  int32_t v45; // w1
  bool v46; // w1
  int32_t mEnemyType; // w23
  struct UITexture_o **p_SvtImg; // x22
  QuestInformationListViewItem_o *v49; // x8
  UITexture_o *v50; // x24
  int32_t targetCnt; // w21
  int32_t targetId; // w23
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  const MethodInfo *v60; // x4
  const MethodInfo *v61; // x2
  ItemMaster_o *v62; // x21
  TerminalSceneComponent_c *v63; // x0
  UnityEngine_Object_o *mInstance; // x21
  UISprite_o *v65; // x21
  __int64 v66; // x8
  UISprite_o *v67; // x21
  const MethodInfo *v68; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  bool v70; // w1
  UISprite_o *enemySp; // x22
  int32_t iconId; // w23
  const MethodInfo *v73; // x4
  QuestInformationListViewItem_o *v74; // x22
  System_Action_o *v75; // x23
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x1
  BalanceConfig_c *v78; // x0
  UnityEngine_Object_o *v79; // x20
  UnityEngine_Object_o *SvtImg; // x20
  int32_t *v81; // x8
  Il2CppObject *v82; // x21
  int32_t v83; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21

  if ( (byte_4CC410B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1C713B0(&QuestInformationListViewManager_TypeInfo);
    sub_1C713B0(&ServantAssetLoadManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__);
    sub_1C713B0(&QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo);
    sub_1C713B0(&StringLiteral_12079/*"SHOP_BUY_ITEM_HOLD"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC410B = 1;
  }
  v7 = sub_1C715FC(QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_196;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  v16 = (QuestInformationListViewItem_o **)(v7 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)item, v17, v18, v19, v20, v21, v22);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Inequality(completeMissionTarget, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_196;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_196;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_196;
    Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_196;
    v31 = *((_DWORD *)Instance + 6);
    v32 = Instance;
    if ( v31 >= 1 )
    {
      v33 = 0;
      while ( 1 )
      {
        if ( v33 >= v31 )
          goto LABEL_197;
        v34 = *((_QWORD *)v32 + (int)v33 + 4);
        if ( !v34 )
          goto LABEL_196;
        if ( !MasterData_object )
          goto LABEL_196;
        Instance = EventMissionMaster__getCompleteMissionList(
                     (EventMissionMaster_o *)MasterData_object,
                     *(_DWORD *)(v34 + 20),
                     0);
        if ( !Instance )
          goto LABEL_196;
        v35 = *((_QWORD *)Instance + 3);
        if ( v35 )
          break;
        v31 = *((_DWORD *)v32 + 6);
        if ( (int)++v33 >= v31 )
          goto LABEL_24;
      }
      if ( !(_DWORD)v35 )
LABEL_197:
        sub_1C71610(Instance);
      v36 = *((_QWORD *)Instance + 4);
      if ( !v36 )
        goto LABEL_196;
      Instance = this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_196;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v36 + 28), 0);
    }
  }
LABEL_24:
  if ( !*v16 )
    goto LABEL_196;
  viewObject = (*v16)->fields.viewObject;
  if ( !viewObject )
    goto LABEL_196;
  manager = (struct QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( !manager )
    goto LABEL_32;
  v39 = QuestInformationListViewManager_TypeInfo;
  naturalAligment = QuestInformationListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != QuestInformationListViewManager_TypeInfo
    || (this->fields.viewManager = manager,
        p_viewManager = &this->fields.viewManager,
        manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != v39 )
  {
    sub_1C719A4(manager);
LABEL_32:
    this->fields.viewManager = manager;
    p_viewManager = &this->fields.viewManager;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_viewManager, (int32_t)manager, v24, v25, v26, v27, v28, v29);
  if ( !mode )
    return;
  v42 = *v16;
  if ( !*v16 )
    goto LABEL_196;
  infoType = v42->fields.infoType;
  if ( infoType == 1 )
  {
    mEnemyType = v42->fields.mEnemyType;
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
        v49 = *v16;
        if ( !*v16 )
          goto LABEL_196;
        v50 = *p_SvtImg;
        targetId = v49->fields.targetId;
        targetCnt = v49->fields.targetCnt;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v50, targetId, targetCnt, targetCnt, 0);
        *p_SvtImg = Manager__loadCommandCard;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&this->fields.SvtImg,
          (int32_t)Manager__loadCommandCard,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
        if ( !*v16 )
          goto LABEL_196;
        QuestInformationListViewItemDraw__SetDispType_36821908(
          this,
          (*v16)->fields.dispType,
          this->fields.SvtImg,
          *v16,
          v60);
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
        if ( !*v16 )
          goto LABEL_196;
        enemySp = (UISprite_o *)this->fields.enemySp;
        iconId = (*v16)->fields.iconId;
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
          if ( !*v16 )
            goto LABEL_196;
          QuestInformationListViewItemDraw__SetDispType(this, (*v16)->fields.dispType, this->fields.enemySp, *v16, v73);
        }
        else
        {
          v74 = *(QuestInformationListViewItem_o **)(v7 + 24);
          v75 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v75,
            (Il2CppObject *)v7,
            Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__,
            0);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v74, v75, v76);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v16, v61);
      if ( !*v16 )
        goto LABEL_196;
      Instance = this->fields.classComp;
      if ( !Instance )
        goto LABEL_196;
      ServantClassIconComponent__SetWithClassOverWrite(
        (ServantClassIconComponent_o *)Instance,
        (*v16)->fields.targetId,
        (*v16)->fields.targetCnt,
        (*v16)->fields.classId,
        (*v16)->fields._IsGrand_k__BackingField,
        0);
      Instance = this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !*v16 )
        goto LABEL_196;
      if ( !Instance )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.weeklyMissionTarget, 0);
      Instance = this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !*v16 )
        goto LABEL_196;
      if ( !Instance )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.limitMissionTarget, 0);
      Instance = this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !*v16 )
        goto LABEL_196;
      if ( !Instance )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.eventMissionTarget, 0);
      Instance = this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !*v16 || !Instance )
        goto LABEL_196;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.completeMissionTarget, 0);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v77);
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
    if ( !byte_4CC12CE )
    {
      sub_1C713B0(&TerminalSceneComponent_TypeInfo);
      byte_4CC12CE = 1;
    }
    v63 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v63 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v63->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    {
      v65 = (UISprite_o *)this->fields.enemySp;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4CC12CE )
      {
        sub_1C713B0(&TerminalSceneComponent_TypeInfo);
        byte_4CC12CE = 1;
      }
      Instance = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = TerminalSceneComponent_TypeInfo;
      }
      v66 = **((_QWORD **)Instance + 23);
      if ( !v66 || !v65 )
        goto LABEL_196;
      UISprite__set_atlas(v65, *(UIAtlas_o **)(v66 + 304), 0);
    }
    v67 = (UISprite_o *)this->fields.enemySp;
    Instance = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    if ( !v67 )
      goto LABEL_196;
    UISprite__set_spriteName(v67, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0);
    QuestInformationListViewItemDraw__SetDispType(this, 1, this->fields.enemySp, *v16, v68);
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
    if ( !*v16 )
      goto LABEL_196;
    if ( !Instance )
      goto LABEL_196;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.eventMissionTarget, 0);
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
    if ( v42->fields.mRewardType )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      v44 = *v16;
      if ( !*v16 )
        goto LABEL_196;
      Instance = this->fields.itemIcon;
      if ( !Instance )
        goto LABEL_196;
      v45 = v44->fields.mRewardType == 2 ? 2 : 1;
      ItemIconComponent__SetGift_41196280((ItemIconComponent_o *)Instance, v45, v44->fields.targetId, -1, 0, 0);
      Instance = this->fields.itemIcon;
      if ( !Instance )
        goto LABEL_196;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_196;
      v46 = 1;
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
      v46 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v46, 0);
    if ( !*v16 )
      goto LABEL_196;
    if ( (*v16)->fields.mRewardType == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( !*v16 )
        goto LABEL_196;
      v62 = (ItemMaster_o *)Instance;
      if ( !Instance )
        goto LABEL_196;
      Instance = (void *)ItemMaster__isQP((ItemMaster_o *)Instance, (*v16)->fields.targetId, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_71;
      if ( !*v16 )
        goto LABEL_196;
      Instance = (void *)ItemMaster__isFriendPoint(v62, (*v16)->fields.targetId, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        goto LABEL_71;
      if ( !*v16 )
        goto LABEL_196;
      Instance = (void *)ItemMaster__isEventPoint(v62, (*v16)->fields.targetId, 0);
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
        sub_1C71608(Instance, v9);
      }
      if ( !*v16 )
        goto LABEL_196;
      Instance = (void *)ItemMaster__isMana(v62, (*v16)->fields.targetId, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        Instance = UserGameMaster__getSelfUserGame(0);
        if ( !Instance )
          goto LABEL_196;
        v81 = (int32_t *)((char *)Instance + 192);
      }
      else
      {
        if ( !*v16 )
          goto LABEL_196;
        Instance = (void *)ItemMaster__isRarePri(v62, (*v16)->fields.targetId, 0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = UserGameMaster__getSelfUserGame(0);
          if ( !Instance )
            goto LABEL_196;
          v81 = (int32_t *)((char *)Instance + 196);
        }
        else
        {
          if ( !*v16 )
            goto LABEL_196;
          if ( ItemMaster__isStone(v62, (*v16)->fields.targetId, 0) )
          {
            Instance = UserGameMaster__getSelfUserGame(0);
            if ( !Instance )
              goto LABEL_196;
            v81 = (int32_t *)((char *)Instance + 184);
          }
          else
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_196;
            v82 = DataManager__GetMasterData_object_(
                    (DataManager_o *)Instance,
                    (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4CC112A )
            {
              sub_1C713B0(&NetworkManager_TypeInfo);
              byte_4CC112A = 1;
            }
            Instance = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager_TypeInfo;
            }
            if ( !*v16 )
              goto LABEL_196;
            if ( !v82 )
              goto LABEL_196;
            Instance = UserItemMaster__GetEntityDefinitely(
                         (UserItemMaster_o *)v82,
                         *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                         (*v16)->fields.targetId,
                         0);
            if ( !Instance )
              goto LABEL_196;
            v81 = (int32_t *)((char *)Instance + 28);
          }
        }
      }
      v83 = *v81;
      holdNumTitleLb = this->fields.holdNumTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12079/*"SHOP_BUY_ITEM_HOLD"*/, 0);
      if ( !holdNumTitleLb )
        goto LABEL_196;
      UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0);
      holdNumCntLb = this->fields.holdNumCntLb;
      Instance = LocalizationManager__GetNumberFormat(v83, 0);
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
      v70 = 1;
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
  v70 = 0;
LABEL_119:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v70, 0);
LABEL_146:
  v78 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v78 = BalanceConfig_TypeInfo;
  }
  if ( !v78->static_fields->IsKeepEnemyFaceIconPosZ )
  {
    v79 = (UnityEngine_Object_o *)this->fields.enemySp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v79, 0, 0) )
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
  UnityEngine_GameObject_o *v4; // x20
  QuestInformationListViewItemDraw_c *v5; // x8
  struct System_Single_array *TARGET_POSITION; // x8
  unsigned int v7; // w21
  UnityEngine_GameObject_o *v8; // x20
  QuestInformationListViewItemDraw_c *v9; // x8
  struct System_Single_array *v10; // x8
  UnityEngine_GameObject_o *v11; // x20
  QuestInformationListViewItemDraw_c *v12; // x8
  struct System_Single_array *v13; // x8
  UnityEngine_GameObject_o *v14; // x19
  QuestInformationListViewItemDraw_c *v15; // x8
  struct System_Single_array *v16; // x8

  if ( (byte_4CC410C & 1) == 0 )
  {
    sub_1C713B0(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4CC410C = 1;
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
    v4 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v5 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v5 = QuestInformationListViewItemDraw_TypeInfo;
    }
    TARGET_POSITION = v5->static_fields->TARGET_POSITION;
    if ( !TARGET_POSITION )
      goto LABEL_41;
    if ( !LODWORD(TARGET_POSITION->max_length) )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v4, TARGET_POSITION->m_Items[0], 0);
    v7 = 1;
  }
  else
  {
    v7 = 0;
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
    v8 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v9 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v9 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v10 = v9->static_fields->TARGET_POSITION;
    if ( !v10 )
      goto LABEL_41;
    if ( v7 >= LODWORD(v10->max_length) )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v8, v10->m_Items[v7++], 0);
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
    v11 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v12 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v12 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v13 = v12->static_fields->TARGET_POSITION;
    if ( !v13 )
      goto LABEL_41;
    if ( v7 >= LODWORD(v13->max_length) )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v11, v13->m_Items[v7++], 0);
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
      v14 = (UnityEngine_GameObject_o *)completeMissionTarget;
      v15 = QuestInformationListViewItemDraw_TypeInfo;
      if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v15 = QuestInformationListViewItemDraw_TypeInfo;
      }
      v16 = v15->static_fields->TARGET_POSITION;
      if ( v16 )
      {
        if ( v7 < LODWORD(v16->max_length) )
        {
          GameObjectExtensions__SetLocalPositionY(v14, v16->m_Items[v7], 0);
          return;
        }
LABEL_42:
        sub_1C71610(completeMissionTarget);
      }
    }
LABEL_41:
    sub_1C71608(completeMissionTarget, method);
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
  if ( (byte_4CC4114 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_GameObject____78636968);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject____78725064);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (QuestInformationListViewItemDraw_o *)sub_1C713B0(&StringLiteral_22989/*"quest_info"*/);
    byte_4CC4114 = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_object__51560868(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_22989/*"quest_info"*/,
                                                       (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_GameObject____78636968),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0) )
  {
    sub_1C71608(this, assetData);
  }
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__52264420(
    v6,
    transform,
    (const MethodInfo_31D7DE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78725064);
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
    sub_1C71608(this, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct QuestInformationListViewItemDraw_o *v13; // x8
  struct QuestInformationListViewItemDraw_o *v14; // x8
  struct QuestInformationListViewItemDraw_o *v15; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__51560868; // x0

  if ( (byte_4CC4115 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    sub_1C713B0(&UnityEngine_Material_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&StringLiteral_16536/*"_alpha"*/);
    sub_1C713B0(&StringLiteral_4933/*"Custom/SpriteWithMask"*/);
    sub_1C713B0(&StringLiteral_16270/*"_MaskTex"*/);
    byte_4CC4115 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].fields.attrib = (struct System_String_o *)assetData;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&_4__this[1].fields.attrib,
    (int32_t)assetData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4933/*"Custom/SpriteWithMask"*/, 0);
  v12 = (UnityEngine_Material_o *)sub_1C715FC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v12, v11, 0);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_13;
  _4__this = (AssetData_o *)v13->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._1_Finalize.method)(
                              _4__this,
                              v12,
                              _4__this->klass[1].vtable._2_GetHashCode.methodPtr);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_13;
  _4__this = v14->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)AssetData__GetObject_object__51560868(
                              _4__this,
                              v14->fields.enemyIconName,
                              (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000);
  if ( !v12
    || (UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)_4__this, 0),
        (v15 = this->fields.__4__this) == 0)
    || (enemyIconAssetData = v15->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_64031724(
                                    v15->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16536/*"_alpha"*/,
                                    0),
        !enemyIconAssetData)
    || (Object_object__51560868 = AssetData__GetObject_object__51560868(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000),
        UnityEngine_Material__SetTexture(
          v12,
          (System_String_o *)StringLiteral_16270/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__51560868,
          0),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_1C71608(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}