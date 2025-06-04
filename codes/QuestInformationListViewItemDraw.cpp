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

  if ( (byte_4AFEDBE & 1) == 0 )
  {
    sub_1BC3008(&QuestInformationListViewItemDraw_TypeInfo, v1);
    sub_1BC3008(&float___TypeInfo, v4);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58,
      v5);
    sub_1BC3008(&StringLiteral_18859/*"enemy_icon_"*/, v6);
    sub_1BC3008(&StringLiteral_22673/*"questinfo_enemy_brank"*/, v7);
    sub_1BC3008(&StringLiteral_14999/*"Unlit/Transparent Colored"*/, v8);
    sub_1BC3008(&StringLiteral_25338/*"？？？"*/, v9);
    sub_1BC3008(&StringLiteral_5996/*"Enemys/Icon/"*/, v10);
    byte_4AFEDBE = 1;
  }
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22673/*"questinfo_enemy_brank"*/;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_22673/*"questinfo_enemy_brank"*/,
    v2,
    v3);
  v11 = StringLiteral_25338/*"？？？"*/;
  static_fields = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_25338/*"？？？"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->ENEMY_UNKNOWN_NAME, v11, v13, v14);
  v15 = StringLiteral_5996/*"Enemys/Icon/"*/;
  v16 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v16->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_5996/*"Enemys/Icon/"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v16->ENEMY_ICON_TEXTURE_PATH, v15, v17, v18);
  v19 = StringLiteral_18859/*"enemy_icon_"*/;
  v20 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v20->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18859/*"enemy_icon_"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v20->ENEMY_ICON_TEXTURE_PREFIX, v19, v21, v22);
  v23 = QuestInformationListViewItemDraw_TypeInfo;
  v24 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v24->ENEMY_UNKNOWN_CLASSID = 12;
  v24->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BDDB00;
  v25 = StringLiteral_14999/*"Unlit/Transparent Colored"*/;
  v26 = v23->static_fields;
  v26->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_14999/*"Unlit/Transparent Colored"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->DEFAULT_SHADER, v25, v27, v28);
  v29 = (System_Array_o *)sub_1BC30B0(float___TypeInfo, 4LL);
  v34.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  v30 = v29;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v29, v34, 0LL);
  v31 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v31->TARGET_POSITION = (struct System_Single_array *)v30;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v31->TARGET_POSITION, (int32_t)v30, v32, v33);
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

  if ( (byte_4AFEDBB & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, item);
    sub_1BC3008(&int_TypeInfo, v7);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1BC3008(&QuestInformationListViewItemDraw_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BC3008(&Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__, v11);
    sub_1BC3008(&QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo, v12);
    byte_4AFEDBB = 1;
  }
  v13 = sub_1BC3254(QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 24), (int32_t)callback, v18, v19);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)p_enemyIconName, (int32_t)v27, v29, v30);
  v31 = System_String__Concat_62348648(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v13,
    Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v31, v32, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1BC3264(Instance, v15);
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

  if ( (byte_4AFEDBC & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&QuestInformationListViewItemDraw_TypeInfo, v3);
    byte_4AFEDBC = 1;
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
    v6 = System_String__Concat_62348648(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (CGThumbnailListItem_o *)&this->fields.enemyIconAssetData;
    sub_1BC2FAC(p_enemyIconAssetData, 0, v8, v9);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1BC2FAC((CGThumbnailListItem_o *)p_enemyIconName, 0, v10, v11);
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

  if ( (byte_4AFEDB8 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    this = (QuestInformationListViewItemDraw_o *)sub_1BC3008(&QuestInformationListViewItemDraw_TypeInfo, v8);
    byte_4AFEDB8 = 1;
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
          v14 = (UnityEngine_Material_o *)sub_1BC3254(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_69897528(v14, v13, 0LL);
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
      sub_1BC3264(this, *(_QWORD *)&dispTp);
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

  if ( (byte_4AFEDBA & 1) == 0 )
  {
    this = (QuestInformationListViewItemDraw_o *)sub_1BC3008(
                                                   &QuestInformationListViewItemDraw_TypeInfo,
                                                   *(_QWORD *)&dispTp);
    byte_4AFEDBA = 1;
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
      sub_1BC3264(this, *(_QWORD *)&dispTp);
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
void __fastcall QuestInformationListViewItemDraw__SetDispType_35575024(
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

  if ( (byte_4AFEDB9 & 1) == 0 )
  {
    sub_1BC3008(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (QuestInformationListViewItemDraw_o *)sub_1BC3008(&StringLiteral_16116/*"_MainTex"*/, v8);
    byte_4AFEDB9 = 1;
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
            (System_String_o *)StringLiteral_16116/*"_MainTex"*/,
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
          if ( !System_String__Equals_62383952(
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
    sub_1BC3264(this, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_62383952(
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
  if ( (byte_4AFEDBD & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, item);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BC3008(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__32_0__, v6);
    this = (QuestInformationListViewItemDraw_o *)sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v7);
    byte_4AFEDBD = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0LL);
    v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    sub_1BC3264(this, item);
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
  __int64 v24; // x1
  __int64 v25; // x23
  void *Instance; // x0
  QuestInformationListViewManager_c *v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  QuestInformationListViewItem_o **v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *completeMissionTarget; // x21
  Il2CppObject *MasterData_object; // x21
  __int64 v35; // x2
  int v36; // w8
  void *v37; // x24
  unsigned int v38; // w25
  __int64 v39; // x8
  __int64 v40; // x8
  __int64 v41; // x8
  QuestInformationListViewItem_o *v42; // x8
  struct ListViewObject_o *viewObject; // x9
  QuestInformationListViewManager_o *manager; // x21
  __int64 methodPtr_low; // x10
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v47; // x8
  int32_t v48; // w1
  bool v49; // w1
  int32_t mEnemyType; // w24
  struct UITexture_o **p_SvtImg; // x22
  QuestInformationListViewItem_o *v52; // x8
  UITexture_o *v53; // x25
  int32_t targetCnt; // w23
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x4
  const MethodInfo *v60; // x2
  ItemMaster_o *v61; // x21
  __int64 v62; // x1
  TerminalSceneComponent_c *v63; // x0
  UnityEngine_Object_o *mInstance; // x22
  UISprite_o *v65; // x22
  __int64 v66; // x8
  UISprite_o *v67; // x22
  QuestInformationListViewItemDraw_o *v68; // x0
  const MethodInfo *v69; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  bool v71; // w1
  UISprite_o *enemySp; // x22
  int32_t iconId; // w24
  const MethodInfo *v74; // x4
  QuestInformationListViewItem_o *v75; // x21
  System_Action_o *v76; // x22
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x1
  BalanceConfig_c *v79; // x0
  UnityEngine_Object_o *v80; // x20
  UnityEngine_Object_o *SvtImg; // x20
  int32_t *v82; // x8
  Il2CppObject *v83; // x21
  int32_t v84; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21
  QuestInformationListViewItemDraw___c__DisplayClass25_0_o *v87; // x0
  const MethodInfo *v88; // x1

  if ( (byte_4AFEDB6 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, item);
    sub_1BC3008(&AtlasManager_TypeInfo, v7);
    sub_1BC3008(&BalanceConfig_TypeInfo, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMasterData_MstMissionMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserItemMaster___, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&NetworkManager_TypeInfo, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    sub_1BC3008(&QuestInformationListViewItemDraw_TypeInfo, v16);
    sub_1BC3008(&QuestInformationListViewManager_TypeInfo, v17);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v18);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BC3008(&TerminalSceneComponent_TypeInfo, v20);
    sub_1BC3008(&Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__, v21);
    sub_1BC3008(&QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo, v22);
    sub_1BC3008(&StringLiteral_11960/*"SHOP_BUY_ITEM_HOLD"*/, v23);
    sub_1BC3008(&StringLiteral_1/*""*/, v24);
    byte_4AFEDB6 = 1;
  }
  v25 = sub_1BC3254(QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_191;
  *(_QWORD *)(v25 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v25 + 16), (int32_t)this, v28, v29);
  *(_QWORD *)(v25 + 24) = item;
  v30 = (QuestInformationListViewItem_o **)(v25 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v25 + 24), (int32_t)item, v31, v32);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Inequality(completeMissionTarget, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_191;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_191;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_191;
    Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_191;
    v36 = *((_DWORD *)Instance + 6);
    v37 = Instance;
    if ( v36 >= 1 )
    {
      v38 = 0;
      while ( 1 )
      {
        if ( v38 >= v36 )
          goto LABEL_192;
        v39 = *((_QWORD *)v37 + (int)v38 + 4);
        if ( !v39 )
          goto LABEL_191;
        if ( !MasterData_object )
          goto LABEL_191;
        Instance = EventMissionMaster__getCompleteMissionList(
                     (EventMissionMaster_o *)MasterData_object,
                     *(_DWORD *)(v39 + 20),
                     0LL);
        if ( !Instance )
          goto LABEL_191;
        v40 = *((_QWORD *)Instance + 3);
        if ( v40 )
          break;
        v36 = *((_DWORD *)v37 + 6);
        if ( (int)++v38 >= v36 )
          goto LABEL_24;
      }
      if ( !(_DWORD)v40 )
LABEL_192:
        sub_1BC326C(Instance, v27, v35);
      v41 = *((_QWORD *)Instance + 4);
      if ( !v41 )
        goto LABEL_191;
      Instance = this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_191;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v41 + 28), 0LL);
    }
  }
LABEL_24:
  v42 = *v30;
  if ( !*v30 )
    goto LABEL_191;
  viewObject = v42->fields.viewObject;
  if ( !viewObject )
    goto LABEL_191;
  manager = (QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( manager )
  {
    v27 = QuestInformationListViewManager_TypeInfo;
    methodPtr_low = LOBYTE(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewManager_TypeInfo )
    {
      sub_1BC3524(manager);
      QuestInformationListViewItemDraw___c__DisplayClass25_0___ctor(v87, v88);
      return;
    }
  }
  if ( mode )
  {
    infoType = v42->fields.infoType;
    if ( infoType == 1 )
    {
      mEnemyType = v42->fields.mEnemyType;
      if ( mEnemyType )
      {
        p_SvtImg = &this->fields.SvtImg;
        Instance = this->fields.SvtImg;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_191;
        if ( mEnemyType == 1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          v52 = *v30;
          if ( !*v30 )
            goto LABEL_191;
          v53 = *p_SvtImg;
          targetId = v52->fields.targetId;
          targetCnt = v52->fields.targetCnt;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v53, targetId, targetCnt, targetCnt, 0LL);
          *p_SvtImg = Manager__loadCommandCard;
          sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.SvtImg, (int32_t)Manager__loadCommandCard, v57, v58);
          if ( !*v30 )
            goto LABEL_191;
          QuestInformationListViewItemDraw__SetDispType_35575024(
            (QuestInformationListViewItemDraw_o *)Instance,
            (*v30)->fields.dispType,
            this->fields.SvtImg,
            manager,
            v59);
          Instance = this->fields.enemySp;
          if ( !Instance )
            goto LABEL_191;
          Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_191;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          Instance = this->fields.enemySp;
          if ( !Instance )
            goto LABEL_191;
          Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_191;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          if ( !*v30 )
            goto LABEL_191;
          enemySp = (UISprite_o *)this->fields.enemySp;
          iconId = (*v30)->fields.iconId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetEnemy(enemySp, iconId, 0LL) )
          {
            Instance = this->fields.enemySp;
            if ( !Instance )
              goto LABEL_191;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
            Instance = this->fields.enemyTexture;
            if ( !Instance )
              goto LABEL_191;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
            if ( !*v30 )
              goto LABEL_191;
            QuestInformationListViewItemDraw__SetDispType(
              (QuestInformationListViewItemDraw_o *)Instance,
              (*v30)->fields.dispType,
              this->fields.enemySp,
              manager,
              v74);
          }
          else
          {
            v75 = *(QuestInformationListViewItem_o **)(v25 + 24);
            v76 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
            System_Action___ctor(
              v76,
              (Il2CppObject *)v25,
              Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__,
              0LL);
            QuestInformationListViewItemDraw__LoadEnemyTexture(this, v75, v76, v77);
          }
        }
        QuestInformationListViewItemDraw__SetEnemyName(this, *v30, v60);
        if ( !*v30 )
          goto LABEL_191;
        Instance = this->fields.classComp;
        if ( !Instance )
          goto LABEL_191;
        ServantClassIconComponent__SetWithClassOverWrite(
          (ServantClassIconComponent_o *)Instance,
          (*v30)->fields.targetId,
          (*v30)->fields.targetCnt,
          (*v30)->fields.classId,
          (*v30)->fields._IsGrand_k__BackingField,
          0LL);
        Instance = this->fields.weeklyMissionTarget;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !*v30 )
          goto LABEL_191;
        if ( !Instance )
          goto LABEL_191;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v30)->fields.weeklyMissionTarget, 0LL);
        Instance = this->fields.limitMissionTarget;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !*v30 )
          goto LABEL_191;
        if ( !Instance )
          goto LABEL_191;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v30)->fields.limitMissionTarget, 0LL);
        Instance = this->fields.eventMissionTarget;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !*v30 )
          goto LABEL_191;
        if ( !Instance )
          goto LABEL_191;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v30)->fields.eventMissionTarget, 0LL);
        Instance = this->fields.completeMissionTarget;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !*v30 || !Instance )
          goto LABEL_191;
        UnityEngine_GameObject__SetActive(
          (UnityEngine_GameObject_o *)Instance,
          (*v30)->fields.completeMissionTarget,
          0LL);
        QuestInformationListViewItemDraw__UpdateTargetPosition(this, v78);
        goto LABEL_141;
      }
      Instance = this->fields.SvtImg;
      if ( !Instance )
        goto LABEL_191;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_191;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      Instance = this->fields.enemySp;
      if ( !Instance )
        goto LABEL_191;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_191;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4AFC38D )
      {
        sub_1BC3008(&TerminalSceneComponent_TypeInfo, v62);
        byte_4AFC38D = 1;
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
      if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
      {
        v65 = (UISprite_o *)this->fields.enemySp;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4AFC38D )
        {
          sub_1BC3008(&TerminalSceneComponent_TypeInfo, v27);
          byte_4AFC38D = 1;
        }
        Instance = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          Instance = TerminalSceneComponent_TypeInfo;
        }
        v66 = **((_QWORD **)Instance + 23);
        if ( !v66 || !v65 )
          goto LABEL_191;
        UISprite__set_atlas(v65, *(UIAtlas_o **)(v66 + 304), 0LL);
      }
      v67 = (UISprite_o *)this->fields.enemySp;
      Instance = QuestInformationListViewItemDraw_TypeInfo;
      if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      if ( !v67 )
        goto LABEL_191;
      UISprite__set_spriteName(v67, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0LL);
      QuestInformationListViewItemDraw__SetDispType(v68, 1, this->fields.enemySp, manager, v69);
      Instance = this->fields.textLb;
      if ( !Instance )
        goto LABEL_191;
      UILabel__set_text(
        (UILabel_o *)Instance,
        QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
        0LL);
      Instance = this->fields.classComp;
      if ( !Instance )
        goto LABEL_191;
      ServantClassIconComponent__Set(
        (ServantClassIconComponent_o *)Instance,
        QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
        0,
        0LL);
      classComp = this->fields.classComp;
      if ( !classComp )
        goto LABEL_191;
      Instance = classComp->fields.nameLabel;
      if ( !Instance )
        goto LABEL_191;
      UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      Instance = this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_191;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_191;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      Instance = this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_191;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_191;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      Instance = this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_191;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v30 )
        goto LABEL_191;
      if ( !Instance )
        goto LABEL_191;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v30)->fields.eventMissionTarget, 0LL);
      Instance = this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_191;
    }
    else
    {
      if ( infoType )
        goto LABEL_141;
      Instance = this->fields.blankImg;
      if ( !Instance )
        goto LABEL_191;
      if ( v42->fields.mRewardType )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        v47 = *v30;
        if ( !*v30 )
          goto LABEL_191;
        Instance = this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_191;
        v48 = v47->fields.mRewardType == 2 ? 2 : 1;
        ItemIconComponent__SetGift_39952716((ItemIconComponent_o *)Instance, v48, v47->fields.targetId, -1, 0, 0LL);
        Instance = this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_191;
        v49 = 1;
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_191;
        v49 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v49, 0LL);
      if ( !*v30 )
        goto LABEL_191;
      if ( (*v30)->fields.mRewardType == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_191;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !*v30 )
          goto LABEL_191;
        v61 = (ItemMaster_o *)Instance;
        if ( !Instance )
          goto LABEL_191;
        Instance = (void *)ItemMaster__isQP((ItemMaster_o *)Instance, (*v30)->fields.targetId, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_66;
        if ( !*v30 )
          goto LABEL_191;
        Instance = (void *)ItemMaster__isFriendPoint(v61, (*v30)->fields.targetId, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_66;
        if ( !*v30 )
          goto LABEL_191;
        Instance = (void *)ItemMaster__isEventPoint(v61, (*v30)->fields.targetId, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
LABEL_66:
          Instance = this->fields.holdNumTitleLb;
          if ( Instance )
          {
            Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              Instance = this->fields.holdNumCntLb;
              if ( Instance )
              {
                Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( Instance )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                  return;
                }
              }
            }
          }
LABEL_191:
          sub_1BC3264(Instance, v27);
        }
        if ( !*v30 )
          goto LABEL_191;
        Instance = (void *)ItemMaster__isMana(v61, (*v30)->fields.targetId, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = UserGameMaster__getSelfUserGame(0LL);
          if ( !Instance )
            goto LABEL_191;
          v82 = (int32_t *)((char *)Instance + 192);
        }
        else
        {
          if ( !*v30 )
            goto LABEL_191;
          Instance = (void *)ItemMaster__isRarePri(v61, (*v30)->fields.targetId, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = UserGameMaster__getSelfUserGame(0LL);
            if ( !Instance )
              goto LABEL_191;
            v82 = (int32_t *)((char *)Instance + 196);
          }
          else
          {
            if ( !*v30 )
              goto LABEL_191;
            if ( ItemMaster__isStone(v61, (*v30)->fields.targetId, 0LL) )
            {
              Instance = UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_191;
              v82 = (int32_t *)((char *)Instance + 184);
            }
            else
            {
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_191;
              v83 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserItemMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4AFC1F1 )
              {
                sub_1BC3008(&NetworkManager_TypeInfo, v27);
                byte_4AFC1F1 = 1;
              }
              Instance = NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = NetworkManager_TypeInfo;
              }
              if ( !*v30 )
                goto LABEL_191;
              if ( !v83 )
                goto LABEL_191;
              Instance = UserItemMaster__GetEntityDefinitely(
                           (UserItemMaster_o *)v83,
                           *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                           (*v30)->fields.targetId,
                           0LL);
              if ( !Instance )
                goto LABEL_191;
              v82 = (int32_t *)((char *)Instance + 28);
            }
          }
        }
        v84 = *v82;
        holdNumTitleLb = this->fields.holdNumTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11960/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
        if ( !holdNumTitleLb )
          goto LABEL_191;
        UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
        holdNumCntLb = this->fields.holdNumCntLb;
        Instance = LocalizationManager__GetNumberFormat(v84, 0LL);
        if ( !holdNumCntLb )
          goto LABEL_191;
        UILabel__set_text(holdNumCntLb, (System_String_o *)Instance, 0LL);
        Instance = this->fields.holdNumTitleLb;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_191;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = this->fields.holdNumCntLb;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_191;
        v71 = 1;
        goto LABEL_114;
      }
      Instance = this->fields.holdNumTitleLb;
      if ( !Instance )
        goto LABEL_191;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_191;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      Instance = this->fields.holdNumCntLb;
      if ( !Instance )
        goto LABEL_191;
    }
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_191;
    v71 = 0;
LABEL_114:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v71, 0LL);
LABEL_141:
    v79 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v79 = BalanceConfig_TypeInfo;
    }
    if ( !v79->static_fields->IsKeepEnemyFaceIconPosZ )
    {
      v80 = (UnityEngine_Object_o *)this->fields.enemySp;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
      {
        Instance = this->fields.enemySp;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_191;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
          ComponentHelper__SetLocalPositionZ((UnityEngine_Component_o *)this->fields.enemySp, 1.0, 0LL);
      }
      SvtImg = (UnityEngine_Object_o *)this->fields.SvtImg;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(SvtImg, 0LL, 0LL) )
      {
        Instance = this->fields.SvtImg;
        if ( !Instance )
          goto LABEL_191;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_191;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
          ComponentHelper__SetLocalPositionZ((UnityEngine_Component_o *)this->fields.SvtImg, 1.0, 0LL);
      }
    }
  }
}


void __fastcall QuestInformationListViewItemDraw__UpdateTargetPosition(
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

  if ( (byte_4AFEDB7 & 1) == 0 )
  {
    sub_1BC3008(&QuestInformationListViewItemDraw_TypeInfo, method);
    byte_4AFEDB7 = 1;
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
    if ( !TARGET_POSITION->max_length )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v5, TARGET_POSITION->m_Items[1], 0LL);
    v8 = 1;
  }
  else
  {
    v8 = 0;
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
    if ( v8 >= v11->max_length )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v9, v11->m_Items[++v8], 0LL);
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
    if ( v8 >= v14->max_length )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v12, v14->m_Items[++v8], 0LL);
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
        if ( v8 < v17->max_length )
        {
          GameObjectExtensions__SetLocalPositionY(v15, v17->m_Items[v8 + 1], 0LL);
          return;
        }
LABEL_42:
        sub_1BC326C(completeMissionTarget, method, v4);
      }
    }
LABEL_41:
    sub_1BC3264(completeMissionTarget, method);
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
  if ( (byte_4AFEDBF & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, assetData);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    this = (QuestInformationListViewItemDraw_o *)sub_1BC3008(&StringLiteral_22652/*"quest_info"*/, v7);
    byte_4AFEDBF = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_object__50213776(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_22652/*"quest_info"*/,
                                                       (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1BC3264(this, assetData);
  }
  v9 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__50900816(
    v9,
    transform,
    (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
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
    sub_1BC3264(this, method);
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
  Il2CppObject *Object_object__50213776; // x0

  if ( (byte_4AFEDC0 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_Texture2D____76809696, assetData);
    sub_1BC3008(&UnityEngine_Material_TypeInfo, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BC3008(&StringLiteral_16387/*"_alpha"*/, v8);
    sub_1BC3008(&StringLiteral_4899/*"Custom/SpriteWithMask"*/, v9);
    sub_1BC3008(&StringLiteral_16121/*"_MaskTex"*/, v10);
    byte_4AFEDC0 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  *(_QWORD *)&_4__this[1].fields.nowVersion = assetData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&_4__this[1].fields.nowVersion, (int32_t)assetData, (int32_t)method, v3);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4899/*"Custom/SpriteWithMask"*/, 0LL);
  v13 = (UnityEngine_Material_o *)sub_1BC3254(UnityEngine_Material_TypeInfo);
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
  _4__this = (AssetData_o *)AssetData__GetObject_object__50213776(
                              _4__this,
                              v15->fields.enemyIconName,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696);
  if ( !v13
    || (UnityEngine_Material__set_mainTexture(v13, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v16 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v16->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_62348648(
                                    v16->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16387/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_object__50213776 = AssetData__GetObject_object__50213776(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_Texture2D____76809696),
        UnityEngine_Material__SetTexture(
          v13,
          (System_String_o *)StringLiteral_16121/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__50213776,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1BC3264(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}