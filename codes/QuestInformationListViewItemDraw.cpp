void __fastcall QuestInformationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w1
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  QuestInformationListViewItemDraw_c *v23; // x8
  struct QuestInformationListViewItemDraw_StaticFields *v24; // x10
  int32_t v25; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Array_o *v29; // x0
  System_Array_o *v30; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_RuntimeFieldHandle_o v34; // 0:w1.4

  if ( (byte_49B7D66 & 1) == 0 )
  {
    sub_1B4CF90(&QuestInformationListViewItemDraw_TypeInfo, v1);
    sub_1B4CF90(&float___TypeInfo, v4);
    sub_1B4CF90(
      &Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58,
      v5);
    sub_1B4CF90(&StringLiteral_18720/*"enemy_icon_"*/, v6);
    sub_1B4CF90(&StringLiteral_22451/*"questinfo_enemy_brank"*/, v7);
    sub_1B4CF90(&StringLiteral_14832/*"Unlit/Transparent Colored"*/, v8);
    sub_1B4CF90(&StringLiteral_25175/*"？？？"*/, v9);
    sub_1B4CF90(&StringLiteral_5942/*"Enemys/Icon/"*/, v10);
    byte_49B7D66 = 1;
  }
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22451/*"questinfo_enemy_brank"*/;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_22451/*"questinfo_enemy_brank"*/,
    v2,
    v3);
  v11 = StringLiteral_25175/*"？？？"*/;
  static_fields = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_25175/*"？？？"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->ENEMY_UNKNOWN_NAME, v11, v13, v14);
  v15 = StringLiteral_5942/*"Enemys/Icon/"*/;
  v16 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v16->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_5942/*"Enemys/Icon/"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v16->ENEMY_ICON_TEXTURE_PATH, v15, v17, v18);
  v19 = StringLiteral_18720/*"enemy_icon_"*/;
  v20 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v20->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18720/*"enemy_icon_"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v20->ENEMY_ICON_TEXTURE_PREFIX, v19, v21, v22);
  v23 = QuestInformationListViewItemDraw_TypeInfo;
  v24 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v24->ENEMY_UNKNOWN_CLASSID = 12;
  v24->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BA9620;
  v25 = StringLiteral_14832/*"Unlit/Transparent Colored"*/;
  v26 = v23->static_fields;
  v26->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_14832/*"Unlit/Transparent Colored"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v26->DEFAULT_SHADER, v25, v27, v28);
  v29 = (System_Array_o *)sub_1B4D038(float___TypeInfo, 4LL);
  v34.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  v30 = v29;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61793784(v29, v34, 0LL);
  v31 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v31->TARGET_POSITION = (struct System_Single_array *)v30;
  sub_1B4CF34((CGThumbnailListItem_o *)&v31->TARGET_POSITION, (int32_t)v30, v32, v33);
}


void __fastcall QuestInformationListViewItemDraw___ctor(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall QuestInformationListViewItemDraw__LoadEnemyTexture(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
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
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
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
  const MethodInfo *v30; // x3
  System_String_o *v31; // x19
  AssetLoader_LoadEndDataHandler_o *v32; // x20
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49B7D63 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, item);
    sub_1B4CF90(&int_TypeInfo, v7);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1B4CF90(&QuestInformationListViewItemDraw_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B4CF90(&Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__, v11);
    sub_1B4CF90(&QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo, v12);
    byte_49B7D63 = 1;
  }
  v13 = sub_1B4D1DC(QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v13 + 24), (int32_t)callback, v18, v19);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v20);
  Instance = (CommonUI_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v33 = iconId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v21, v22, v23);
  v27 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v26, 0LL);
  this->fields.enemyIconName = v27;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1B4CF34((CGThumbnailListItem_o *)p_enemyIconName, (int32_t)v27, v29, v30);
  v31 = System_String__Concat_61093468(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v31, v32, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1B4D1EC(Instance, v15);
  }
}


// attributes: thunk
void __fastcall QuestInformationListViewItemDraw__OnDestroy(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, method);
}


void __fastcall QuestInformationListViewItemDraw__ReleaseEnemyTexture(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o **p_enemyIconName; // x20
  QuestInformationListViewItemDraw_c *v5; // x0
  System_String_o *v6; // x21
  CGThumbnailListItem_o *p_enemyIconAssetData; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_49B7D64 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, method);
    sub_1B4CF90(&QuestInformationListViewItemDraw_TypeInfo, v3);
    byte_49B7D64 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v5 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v5 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v6 = System_String__Concat_61093468(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (CGThumbnailListItem_o *)&this->fields.enemyIconAssetData;
    sub_1B4CF34(p_enemyIconAssetData, 0, v8, v9);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)p_enemyIconName, 0, v10, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewItemDraw__SetDispType(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  __int64 v8; // x1
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s3
  UnityEngine_Material_o *v13; // x20
  UnityEngine_Material_o *v14; // x21
  struct UnityEngine_GameObject_o *blankImg; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B7D60 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    this = (QuestInformationListViewItemDraw_o *)sub_1B4CF90(&QuestInformationListViewItemDraw_TypeInfo, v8);
    byte_49B7D60 = 1;
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
        if ( lManager )
        {
          v13 = QuestInformationListViewManager__NewChocoMaterialForSprite(lManager, *(const MethodInfo **)&dispTp);
          v14 = (UnityEngine_Material_o *)sub_1B4D1DC(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_68667732(v14, v13, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v14, 0LL);
          return;
        }
      }
      goto LABEL_17;
    case 2:
      this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( sp )
      {
        blankImg = this[1].fields.blankImg;
        v11 = *((float *)&blankImg[1].fields + 1);
        v12 = *(float *)&blankImg[2].klass;
        v9 = *((float *)&blankImg[1].monitor + 1);
        v10 = *(float *)&blankImg[1].fields.m_CachedPtr;
        goto LABEL_15;
      }
LABEL_17:
      sub_1B4D1EC(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v9 = 1.0;
        v10 = 1.0;
        v11 = 1.0;
        v12 = 1.0;
LABEL_15:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v9, 0LL);
        UISpriteAltMat__ResetMaterial(sp, 0LL);
        return;
      }
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  struct UnityEngine_GameObject_o *blankImg; // x8

  if ( (byte_49B7D62 & 1) == 0 )
  {
    this = (QuestInformationListViewItemDraw_o *)sub_1B4CF90(
                                                   &QuestInformationListViewItemDraw_TypeInfo,
                                                   *(_QWORD *)&dispTp);
    byte_49B7D62 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( texture )
      {
        blankImg = this[1].fields.blankImg;
        v8 = *((float *)&blankImg[1].fields + 1);
        v9 = *(float *)&blankImg[2].klass;
        v6 = *((float *)&blankImg[1].monitor + 1);
        v7 = *(float *)&blankImg[1].fields.m_CachedPtr;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B4D1EC(this, *(_QWORD *)&dispTp);
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
void __fastcall QuestInformationListViewItemDraw__SetDispType_34484936(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  __int64 v8; // x1
  QuestInformationListViewItemDraw_o *v9; // x20
  QuestInformationListViewItemDraw_c *v10; // x0
  UnityEngine_Material_o *v11; // x20
  float *blankImg; // x8
  UnityEngine_Shader_o *v13; // x0
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49B7D61 & 1) == 0 )
  {
    sub_1B4CF90(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (QuestInformationListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_15954/*"_MainTex"*/, v8);
    byte_49B7D61 = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v15.fields.r = 1.0;
      v15.fields.g = 1.0;
      v15.fields.b = 1.0;
      v15.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v15, 0LL);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                                     texture,
                                                     0LL,
                                                     texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( lManager )
      {
        v11 = QuestInformationListViewManager__NewChocoMaterialForTexture(lManager, *(const MethodInfo **)&dispTp);
        this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                       texture,
                                                       texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v11 )
        {
          UnityEngine_Material__SetTexture(
            v11,
            (System_String_o *)StringLiteral_15954/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this,
            0LL);
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
      UIWidget__set_color((UIWidget_o *)texture, v14, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
        texture,
        0LL,
        texture->klass->vtable._26_get_mainTexture.methodPtr);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                     texture,
                                                     texture->klass->vtable._29_set_shader.methodPtr);
      if ( this )
      {
        this = (QuestInformationListViewItemDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        v9 = this;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        if ( v9 )
        {
          if ( !System_String__Equals_61128772(
                  (System_String_o *)v9,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v10 = QuestInformationListViewItemDraw_TypeInfo;
            if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
              goto LABEL_26;
            goto LABEL_27;
          }
          return;
        }
      }
    }
LABEL_28:
    sub_1B4D1EC(this, *(_QWORD *)&dispTp);
  }
  this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_28;
  blankImg = (float *)this[1].fields.blankImg;
  v16.fields.b = blankImg[11];
  v16.fields.a = blankImg[12];
  v16.fields.r = blankImg[9];
  v16.fields.g = blankImg[10];
  UIWidget__set_color((UIWidget_o *)texture, v16, 0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                 texture,
                                                 texture->klass->vtable._29_set_shader.methodPtr);
  if ( !this )
    goto LABEL_28;
  this = (QuestInformationListViewItemDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !this )
    goto LABEL_28;
  if ( !System_String__Equals_61128772(
          (System_String_o *)this,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v10 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v10);
      v10 = QuestInformationListViewItemDraw_TypeInfo;
    }
LABEL_27:
    v13 = UnityEngine_Shader__Find(v10->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v13,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall QuestInformationListViewItemDraw__SetEnemyName(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v10; // x22

  v4 = this;
  if ( (byte_49B7D65 & 1) == 0 )
  {
    sub_1B4CF90(&AssetManager_TypeInfo, item);
    sub_1B4CF90(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B4CF90(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__32_0__, v6);
    this = (QuestInformationListViewItemDraw_o *)sub_1B4CF90(&ServantAssetLoadManager_TypeInfo, v7);
    byte_49B7D65 = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0LL);
    v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1B4D1DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v10,
      (Il2CppObject *)v4,
      Method_QuestInformationListViewItemDraw__SetEnemyName_b__32_0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v10, 1, 0LL);
  }
  this = (QuestInformationListViewItemDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1B4D1EC(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0LL);
}


void __fastcall QuestInformationListViewItemDraw__SetItem(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x22
  void *Instance; // x0
  QuestInformationListViewManager_c *v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  QuestInformationListViewItem_o **v29; // x20
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_Object_o *completeMissionTarget; // x21
  Il2CppObject *MasterData_object; // x21
  int v34; // w8
  void *v35; // x24
  unsigned int v36; // w26
  __int64 v37; // x8
  __int64 v38; // x8
  __int64 v39; // x8
  QuestInformationListViewItem_o *v40; // x8
  struct ListViewObject_o *viewObject; // x9
  QuestInformationListViewManager_o *manager; // x21
  __int64 methodPtr_low; // x10
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v45; // x8
  int32_t v46; // w1
  bool v47; // w1
  int32_t mEnemyType; // w24
  struct UITexture_o **p_SvtImg; // x23
  QuestInformationListViewItem_o *v50; // x8
  UITexture_o *v51; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x4
  const MethodInfo *v58; // x2
  ItemMaster_o *v59; // x21
  __int64 v60; // x1
  TerminalSceneComponent_c *v61; // x0
  UnityEngine_Object_o *mInstance; // x22
  UISprite_o *enemySp; // x22
  __int64 v64; // x8
  UISprite_o *v65; // x22
  QuestInformationListViewItemDraw_o *v66; // x0
  const MethodInfo *v67; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  bool v69; // w1
  UISprite_o *v70; // x23
  int32_t iconId; // w24
  const MethodInfo *v72; // x4
  QuestInformationListViewItem_o *v73; // x21
  System_Action_o *v74; // x23
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x1
  int32_t *v77; // x8
  Il2CppObject *v78; // x21
  int32_t v79; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21
  QuestInformationListViewItemDraw___c__DisplayClass25_0_o *v82; // x0
  const MethodInfo *v83; // x1

  if ( (byte_49B7D5E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, item);
    sub_1B4CF90(&AtlasManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_MstMissionMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v12);
    sub_1B4CF90(&NetworkManager_TypeInfo, v13);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v14);
    sub_1B4CF90(&QuestInformationListViewItemDraw_TypeInfo, v15);
    sub_1B4CF90(&QuestInformationListViewManager_TypeInfo, v16);
    sub_1B4CF90(&ServantAssetLoadManager_TypeInfo, v17);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v19);
    sub_1B4CF90(&Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__, v20);
    sub_1B4CF90(&QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo, v21);
    sub_1B4CF90(&StringLiteral_11799/*"SHOP_BUY_ITEM_HOLD"*/, v22);
    sub_1B4CF90(&StringLiteral_1/*""*/, v23);
    byte_49B7D5E = 1;
  }
  v24 = sub_1B4D1DC(QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_169;
  *(_QWORD *)(v24 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 16), (int32_t)this, v27, v28);
  *(_QWORD *)(v24 + 24) = item;
  v29 = (QuestInformationListViewItem_o **)(v24 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 24), (int32_t)item, v30, v31);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Inequality(completeMissionTarget, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_169;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_169;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_169;
    Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_169;
    v34 = *((_DWORD *)Instance + 6);
    v35 = Instance;
    if ( v34 >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        if ( v36 >= v34 )
          goto LABEL_170;
        v37 = *((_QWORD *)v35 + (int)v36 + 4);
        if ( !v37 )
          goto LABEL_169;
        if ( !MasterData_object )
          goto LABEL_169;
        Instance = EventMissionMaster__getCompleteMissionList(
                     (EventMissionMaster_o *)MasterData_object,
                     *(_DWORD *)(v37 + 20),
                     0LL);
        if ( !Instance )
          goto LABEL_169;
        v38 = *((_QWORD *)Instance + 3);
        if ( v38 )
          break;
        v34 = *((_DWORD *)v35 + 6);
        if ( (int)++v36 >= v34 )
          goto LABEL_24;
      }
      if ( !(_DWORD)v38 )
LABEL_170:
        sub_1B4D1F4(Instance, v26);
      v39 = *((_QWORD *)Instance + 4);
      if ( !v39 )
        goto LABEL_169;
      Instance = this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_169;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v39 + 28), 0LL);
    }
  }
LABEL_24:
  v40 = *v29;
  if ( !*v29 )
    goto LABEL_169;
  viewObject = v40->fields.viewObject;
  if ( !viewObject )
    goto LABEL_169;
  manager = (QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( manager
    && ((v26 = QuestInformationListViewManager_TypeInfo,
         methodPtr_low = LOBYTE(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewManager_TypeInfo) )
  {
    sub_1B4D4AC(manager);
    QuestInformationListViewItemDraw___c__DisplayClass25_0___ctor(v82, v83);
  }
  else if ( mode )
  {
    infoType = v40->fields.infoType;
    if ( infoType == 1 )
    {
      mEnemyType = v40->fields.mEnemyType;
      if ( !mEnemyType )
      {
        Instance = this->fields.SvtImg;
        if ( !Instance )
          goto LABEL_169;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_169;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        Instance = this->fields.enemySp;
        if ( !Instance )
          goto LABEL_169;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_169;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49B5933 )
        {
          sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v60);
          byte_49B5933 = 1;
        }
        v61 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v61 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v61->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
        {
          enemySp = (UISprite_o *)this->fields.enemySp;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49B5933 )
          {
            sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v26);
            byte_49B5933 = 1;
          }
          Instance = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = TerminalSceneComponent_TypeInfo;
          }
          v64 = **((_QWORD **)Instance + 23);
          if ( !v64 || !enemySp )
            goto LABEL_169;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v64 + 304), 0LL);
        }
        v65 = (UISprite_o *)this->fields.enemySp;
        Instance = QuestInformationListViewItemDraw_TypeInfo;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        if ( v65 )
        {
          UISprite__set_spriteName(v65, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0LL);
          QuestInformationListViewItemDraw__SetDispType(v66, 1, this->fields.enemySp, manager, v67);
          Instance = this->fields.textLb;
          if ( Instance )
          {
            UILabel__set_text(
              (UILabel_o *)Instance,
              QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
              0LL);
            Instance = this->fields.classComp;
            if ( Instance )
            {
              ServantClassIconComponent__Set(
                (ServantClassIconComponent_o *)Instance,
                QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
                0,
                0LL);
              classComp = this->fields.classComp;
              if ( classComp )
              {
                Instance = classComp->fields.nameLabel;
                if ( Instance )
                {
                  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  Instance = this->fields.weeklyMissionTarget;
                  if ( Instance )
                  {
                    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      Instance = this->fields.limitMissionTarget;
                      if ( Instance )
                      {
                        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                        if ( Instance )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                          Instance = this->fields.eventMissionTarget;
                          if ( Instance )
                          {
                            Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                            if ( *v29 )
                            {
                              if ( Instance )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (*v29)->fields.eventMissionTarget,
                                  0LL);
                                Instance = this->fields.completeMissionTarget;
                                if ( Instance )
                                {
LABEL_108:
                                  Instance = UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL);
                                  if ( !Instance )
                                    goto LABEL_169;
                                  v69 = 0;
                                  goto LABEL_110;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_169:
        sub_1B4D1EC(Instance, v26);
      }
      p_SvtImg = &this->fields.SvtImg;
      Instance = this->fields.SvtImg;
      if ( !Instance )
        goto LABEL_169;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_169;
      if ( mEnemyType == 1 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v50 = *v29;
        if ( !*v29 )
          goto LABEL_169;
        v51 = *p_SvtImg;
        targetId = v50->fields.targetId;
        targetCnt = v50->fields.targetCnt;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v51, targetId, targetCnt, targetCnt, 0LL);
        *p_SvtImg = Manager__loadCommandCard;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.SvtImg, (int32_t)Manager__loadCommandCard, v55, v56);
        if ( !*v29 )
          goto LABEL_169;
        QuestInformationListViewItemDraw__SetDispType_34484936(
          (QuestInformationListViewItemDraw_o *)Instance,
          (*v29)->fields.dispType,
          this->fields.SvtImg,
          manager,
          v57);
        Instance = this->fields.enemySp;
        if ( !Instance )
          goto LABEL_169;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_169;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        Instance = this->fields.enemySp;
        if ( !Instance )
          goto LABEL_169;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_169;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( !*v29 )
          goto LABEL_169;
        v70 = (UISprite_o *)this->fields.enemySp;
        iconId = (*v29)->fields.iconId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__SetEnemy(v70, iconId, 0LL) )
        {
          Instance = this->fields.enemySp;
          if ( !Instance )
            goto LABEL_169;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
          Instance = this->fields.enemyTexture;
          if ( !Instance )
            goto LABEL_169;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
          if ( !*v29 )
            goto LABEL_169;
          QuestInformationListViewItemDraw__SetDispType(
            (QuestInformationListViewItemDraw_o *)Instance,
            (*v29)->fields.dispType,
            this->fields.enemySp,
            manager,
            v72);
        }
        else
        {
          v73 = *(QuestInformationListViewItem_o **)(v24 + 24);
          v74 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v74,
            (Il2CppObject *)v24,
            Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__,
            0LL);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v73, v74, v75);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v29, v58);
      if ( !*v29 )
        goto LABEL_169;
      Instance = this->fields.classComp;
      if ( !Instance )
        goto LABEL_169;
      ServantClassIconComponent__SetWithClassOverWrite(
        (ServantClassIconComponent_o *)Instance,
        (*v29)->fields.targetId,
        (*v29)->fields.targetCnt,
        (*v29)->fields.classId,
        0LL);
      Instance = this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_169;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v29 )
        goto LABEL_169;
      if ( !Instance )
        goto LABEL_169;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v29)->fields.weeklyMissionTarget, 0LL);
      Instance = this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_169;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v29 )
        goto LABEL_169;
      if ( !Instance )
        goto LABEL_169;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v29)->fields.limitMissionTarget, 0LL);
      Instance = this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_169;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v29 )
        goto LABEL_169;
      if ( !Instance )
        goto LABEL_169;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v29)->fields.eventMissionTarget, 0LL);
      Instance = this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_169;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v29 || !Instance )
        goto LABEL_169;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v29)->fields.completeMissionTarget, 0LL);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v76);
    }
    else if ( !infoType )
    {
      Instance = this->fields.blankImg;
      if ( !Instance )
        goto LABEL_169;
      if ( v40->fields.mRewardType )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        v45 = *v29;
        if ( !*v29 )
          goto LABEL_169;
        Instance = this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_169;
        v46 = v45->fields.mRewardType == 2 ? 2 : 1;
        ItemIconComponent__SetGift_38682396((ItemIconComponent_o *)Instance, v46, v45->fields.targetId, -1, 0, 0LL);
        Instance = this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_169;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_169;
        v47 = 1;
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_169;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_169;
        v47 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v47, 0LL);
      if ( !*v29 )
        goto LABEL_169;
      if ( (*v29)->fields.mRewardType != 2 )
        goto LABEL_67;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( *v29 )
        {
          v59 = (ItemMaster_o *)Instance;
          if ( Instance )
          {
            Instance = (void *)ItemMaster__isQP((ItemMaster_o *)Instance, (*v29)->fields.targetId, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_67;
            if ( !*v29 )
              goto LABEL_169;
            Instance = (void *)ItemMaster__isFriendPoint(v59, (*v29)->fields.targetId, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_67;
            if ( !*v29 )
              goto LABEL_169;
            Instance = (void *)ItemMaster__isEventPoint(v59, (*v29)->fields.targetId, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_67:
              Instance = this->fields.holdNumTitleLb;
              if ( !Instance )
                goto LABEL_169;
              Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_169;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              Instance = this->fields.holdNumCntLb;
              if ( !Instance )
                goto LABEL_169;
              goto LABEL_108;
            }
            if ( !*v29 )
              goto LABEL_169;
            Instance = (void *)ItemMaster__isMana(v59, (*v29)->fields.targetId, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_169;
              v77 = (int32_t *)((char *)Instance + 184);
            }
            else
            {
              if ( !*v29 )
                goto LABEL_169;
              Instance = (void *)ItemMaster__isRarePri(v59, (*v29)->fields.targetId, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = UserGameMaster__getSelfUserGame(0LL);
                if ( !Instance )
                  goto LABEL_169;
                v77 = (int32_t *)((char *)Instance + 188);
              }
              else
              {
                if ( !*v29 )
                  goto LABEL_169;
                if ( ItemMaster__isStone(v59, (*v29)->fields.targetId, 0LL) )
                {
                  Instance = UserGameMaster__getSelfUserGame(0LL);
                  if ( !Instance )
                    goto LABEL_169;
                  v77 = (int32_t *)((char *)Instance + 176);
                }
                else
                {
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_169;
                  v78 = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_49B57A5 )
                  {
                    sub_1B4CF90(&NetworkManager_TypeInfo, v26);
                    byte_49B57A5 = 1;
                  }
                  Instance = NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    Instance = NetworkManager_TypeInfo;
                  }
                  if ( !*v29 )
                    goto LABEL_169;
                  if ( !v78 )
                    goto LABEL_169;
                  Instance = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)v78,
                               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                               (*v29)->fields.targetId,
                               0LL);
                  if ( !Instance )
                    goto LABEL_169;
                  v77 = (int32_t *)((char *)Instance + 28);
                }
              }
            }
            v79 = *v77;
            holdNumTitleLb = this->fields.holdNumTitleLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11799/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
            if ( holdNumTitleLb )
            {
              UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
              holdNumCntLb = this->fields.holdNumCntLb;
              Instance = LocalizationManager__GetNumberFormat(v79, 0LL);
              if ( holdNumCntLb )
              {
                UILabel__set_text(holdNumCntLb, (System_String_o *)Instance, 0LL);
                Instance = this->fields.holdNumTitleLb;
                if ( Instance )
                {
                  Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( Instance )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                    Instance = this->fields.holdNumCntLb;
                    if ( Instance )
                    {
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      if ( Instance )
                      {
                        v69 = 1;
LABEL_110:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v69, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_169;
    }
  }
}


void __fastcall QuestInformationListViewItemDraw__UpdateTargetPosition(
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

  if ( (byte_49B7D5F & 1) == 0 )
  {
    sub_1B4CF90(&QuestInformationListViewItemDraw_TypeInfo, method);
    byte_49B7D5F = 1;
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_41;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_41;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_41;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
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
    if ( !TARGET_POSITION->max_length )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v4, TARGET_POSITION->m_Items[1], 0LL);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_41;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_41;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_41;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
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
    if ( v7 >= v10->max_length )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v8, v10->m_Items[++v7], 0LL);
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_41;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_41;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_41;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
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
    if ( v7 >= v13->max_length )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v11, v13->m_Items[++v7], 0LL);
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_41;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_41;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
    if ( completeMissionTarget )
    {
      completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           completeMissionTarget,
                                                           0LL);
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
        if ( v7 < v16->max_length )
        {
          GameObjectExtensions__SetLocalPositionY(v14, v16->m_Items[v7 + 1], 0LL);
          return;
        }
LABEL_42:
        sub_1B4D1F4(completeMissionTarget, method);
      }
    }
LABEL_41:
    sub_1B4D1EC(completeMissionTarget, method);
  }
}


void __fastcall QuestInformationListViewItemDraw___SetEnemyName_b__32_0(
        QuestInformationListViewItemDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v9; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_49B7D67 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_GameObject____75492000, assetData);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    this = (QuestInformationListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_22430/*"quest_info"*/, v7);
    byte_49B7D67 = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_object__49169892(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_22430/*"quest_info"*/,
                                                       (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_GameObject____75492000),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1B4D1EC(this, assetData);
  }
  v9 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__49839864(
    v9,
    transform,
    (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass25_0___ctor(
        QuestInformationListViewItemDraw___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass25_0___SetItem_b__0(
        QuestInformationListViewItemDraw___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  struct QuestInformationListViewItemDraw_o *_4__this; // x8
  QuestInformationListViewItemDraw___c__DisplayClass25_0_o *v3; // x19
  struct QuestInformationListViewItemDraw_o *v4; // x8
  const MethodInfo *v5; // x3
  struct QuestInformationListViewItem_o *item; // x8
  struct QuestInformationListViewItemDraw_o *v7; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (QuestInformationListViewItemDraw___c__DisplayClass25_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (QuestInformationListViewItemDraw___c__DisplayClass25_0_o *)v4->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL), (item = v3->fields.item) == 0LL)
    || (v7 = v3->fields.__4__this) == 0LL )
  {
LABEL_8:
    sub_1B4D1EC(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    v7->fields.enemyTexture,
    v5);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass30_0___ctor(
        QuestInformationListViewItemDraw___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass30_0___LoadEnemyTexture_b__0(
        QuestInformationListViewItemDraw___c__DisplayClass30_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x20
  struct QuestInformationListViewItemDraw_o *v14; // x8
  struct QuestInformationListViewItemDraw_o *v15; // x8
  struct QuestInformationListViewItemDraw_o *v16; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__49169892; // x0

  if ( (byte_49B7D68 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AssetData_GetObject_Texture2D____75492024, assetData);
    sub_1B4CF90(&UnityEngine_Material_TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B4CF90(&StringLiteral_16220/*"_alpha"*/, v8);
    sub_1B4CF90(&StringLiteral_4880/*"Custom/SpriteWithMask"*/, v9);
    sub_1B4CF90(&StringLiteral_15959/*"_MaskTex"*/, v10);
    byte_49B7D68 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  *(_QWORD *)&_4__this[1].fields.nowVersion = assetData;
  sub_1B4CF34((CGThumbnailListItem_o *)&_4__this[1].fields.nowVersion, (int32_t)assetData, (int32_t)method, v3);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4880/*"Custom/SpriteWithMask"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_1B4D1DC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v13, v12, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_13;
  _4__this = (AssetData_o *)v14->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v13,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_13;
  _4__this = v15->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)AssetData__GetObject_object__49169892(
                              _4__this,
                              v15->fields.enemyIconName,
                              (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_Texture2D____75492024);
  if ( !v13
    || (UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v16 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v16->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_61093468(
                                    v16->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16220/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_object__49169892 = AssetData__GetObject_object__49169892(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_2EE45E4 *)Method_AssetData_GetObject_Texture2D____75492024),
        UnityEngine_Material__SetTexture(
          v13,
          (System_String_o *)StringLiteral_15959/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__49169892,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1B4D1EC(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}