void __fastcall QuestInformationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v14; // w3
  int32_t v15; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  QuestInformationListViewItemDraw_c *v23; // x8
  struct QuestInformationListViewItemDraw_StaticFields *v24; // x10
  int32_t v25; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Array_o *v29; // x0
  System_Array_o *v30; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_RuntimeFieldHandle_o v34; // 0:w1.4

  if ( (byte_49F9498 & 1) == 0 )
  {
    sub_1B640C8(&QuestInformationListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&float___TypeInfo, v4);
    sub_1B640C8(
      &Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58,
      v5);
    sub_1B640C8(&StringLiteral_18954/*"enemy_icon_"*/, v6);
    sub_1B640C8(&StringLiteral_22630/*"questinfo_enemy_brank"*/, v7);
    sub_1B640C8(&StringLiteral_15058/*"Unlit/Transparent Colored"*/, v8);
    sub_1B640C8(&StringLiteral_25365/*"？？？"*/, v9);
    sub_1B640C8(&StringLiteral_5987/*"Enemys/Icon/"*/, v10);
    byte_49F9498 = 1;
  }
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22630/*"questinfo_enemy_brank"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_22630/*"questinfo_enemy_brank"*/,
    v2,
    v3);
  v11 = StringLiteral_25365/*"？？？"*/;
  static_fields = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_25365/*"？？？"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->ENEMY_UNKNOWN_NAME, v11, v13, v14);
  v15 = StringLiteral_5987/*"Enemys/Icon/"*/;
  v16 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v16->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_5987/*"Enemys/Icon/"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->ENEMY_ICON_TEXTURE_PATH, v15, v17, v18);
  v19 = StringLiteral_18954/*"enemy_icon_"*/;
  v20 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v20->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18954/*"enemy_icon_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->ENEMY_ICON_TEXTURE_PREFIX, v19, v21, v22);
  v23 = QuestInformationListViewItemDraw_TypeInfo;
  v24 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v24->ENEMY_UNKNOWN_CLASSID = 12;
  v24->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BA2490;
  v25 = StringLiteral_15058/*"Unlit/Transparent Colored"*/;
  v26 = v23->static_fields;
  v26->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15058/*"Unlit/Transparent Colored"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->DEFAULT_SHADER, v25, v27, v28);
  v29 = (System_Array_o *)sub_1B64170(float___TypeInfo, 4LL);
  v34.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  v30 = v29;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61282732(v29, v34, 0LL);
  v31 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v31->TARGET_POSITION = (struct System_Single_array *)v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v31->TARGET_POSITION, (int32_t)v30, v32, v33);
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v22; // x0
  struct System_String_o *v23; // x0
  struct System_String_o **p_enemyIconName; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  AssetLoader_LoadEndDataHandler_o *v30; // x20
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49F9495 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, item);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1B640C8(&QuestInformationListViewItemDraw_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__, v11);
    sub_1B640C8(&QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo, v12);
    byte_49F9495 = 1;
  }
  v13 = sub_1B64314(QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo, item, callback);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)callback, v17, v18);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v19);
  Instance = (CommonUI_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v31 = iconId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v23 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v22, 0LL);
  this->fields.enemyIconName = v23;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_enemyIconName, (int32_t)v23, v25, v26);
  v27 = System_String__Concat_61375396(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v13,
    Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v27, v30, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(Instance);
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
  ServantStatusBattleListViewItem_o *p_enemyIconAssetData; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49F9496 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&QuestInformationListViewItemDraw_TypeInfo, v3);
    byte_49F9496 = 1;
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
    v6 = System_String__Concat_61375396(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (ServantStatusBattleListViewItem_o *)&this->fields.enemyIconAssetData;
    sub_1B6406C(p_enemyIconAssetData, 0, v8, v9);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_enemyIconName, 0, v10, v11);
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
  const MethodInfo *v13; // x1
  UnityEngine_Material_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Material_o *v17; // x21
  struct UnityEngine_GameObject_o *blankImg; // x8
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9492 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    this = (QuestInformationListViewItemDraw_o *)sub_1B640C8(&QuestInformationListViewItemDraw_TypeInfo, v8);
    byte_49F9492 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( sp )
      {
        v19.fields.r = 1.0;
        v19.fields.g = 1.0;
        v19.fields.b = 1.0;
        v19.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)sp, v19, 0LL);
        if ( lManager )
        {
          v14 = QuestInformationListViewManager__NewChocoMaterialForSprite(lManager, v13);
          v17 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v15, v16);
          UnityEngine_Material___ctor_68991096(v17, v14, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v17, 0LL);
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
      sub_1B64324(this);
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

  if ( (byte_49F9494 & 1) == 0 )
  {
    this = (QuestInformationListViewItemDraw_o *)sub_1B640C8(
                                                   &QuestInformationListViewItemDraw_TypeInfo,
                                                   *(_QWORD *)&dispTp);
    byte_49F9494 = 1;
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
      sub_1B64324(this);
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
void __fastcall QuestInformationListViewItemDraw__SetDispType_33765172(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  __int64 v8; // x1
  QuestInformationListViewItemDraw_o *v9; // x20
  QuestInformationListViewItemDraw_c *v10; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Material_o *v12; // x20
  float *blankImg; // x8
  UnityEngine_Shader_o *v14; // x0
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9493 & 1) == 0 )
  {
    sub_1B640C8(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (QuestInformationListViewItemDraw_o *)sub_1B640C8(&StringLiteral_16193/*"_MainTex"*/, v8);
    byte_49F9493 = 1;
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
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                                     texture,
                                                     0LL,
                                                     texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( lManager )
      {
        v12 = QuestInformationListViewManager__NewChocoMaterialForTexture(lManager, v11);
        this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                       texture,
                                                       texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v12 )
        {
          UnityEngine_Material__SetTexture(
            v12,
            (System_String_o *)StringLiteral_16193/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this,
            0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v12,
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
      v15.fields.r = 1.0;
      v15.fields.g = 1.0;
      v15.fields.b = 1.0;
      v15.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v15, 0LL);
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
          if ( !System_String__Equals_61383712(
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
    sub_1B64324(this);
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
  v17.fields.b = blankImg[11];
  v17.fields.a = blankImg[12];
  v17.fields.r = blankImg[9];
  v17.fields.g = blankImg[10];
  UIWidget__set_color((UIWidget_o *)texture, v17, 0LL);
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
  if ( !System_String__Equals_61383712(
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
    v14 = UnityEngine_Shader__Find(v10->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v14,
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
  __int64 v10; // x1
  __int64 v11; // x2
  AssetLoader_LoadEndDataHandler_o *v12; // x22

  v4 = this;
  if ( (byte_49F9497 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, item);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B640C8(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__32_0__, v6);
    this = (QuestInformationListViewItemDraw_o *)sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v7);
    byte_49F9497 = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0LL);
    v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11);
    AssetLoader_LoadEndDataHandler___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_QuestInformationListViewItemDraw__SetEnemyName_b__32_0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v12, 1, 0LL);
  }
  this = (QuestInformationListViewItemDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1B64324(this);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int64_t Instance; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  QuestInformationListViewItem_o **v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  UnityEngine_Object_o *completeMissionTarget; // x21
  Il2CppObject *MasterData_object; // x21
  __int64 v33; // x1
  int v34; // w8
  int64_t v35; // x24
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
  int32_t v56; // w3
  const MethodInfo *v57; // x4
  const MethodInfo *v58; // x2
  ItemMaster_o *v59; // x21
  __int64 v60; // x1
  TerminalSceneComponent_c *v61; // x0
  UnityEngine_Object_o *mInstance; // x22
  __int64 v63; // x1
  UISprite_o *enemySp; // x22
  __int64 v65; // x8
  UISprite_o *v66; // x22
  QuestInformationListViewItemDraw_o *v67; // x0
  const MethodInfo *v68; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  bool v70; // w1
  UISprite_o *v71; // x23
  int32_t iconId; // w24
  __int64 v73; // x1
  __int64 v74; // x2
  const MethodInfo *v75; // x4
  QuestInformationListViewItem_o *v76; // x21
  System_Action_o *v77; // x23
  const MethodInfo *v78; // x3
  const MethodInfo *v79; // x1
  int32_t *v80; // x8
  Il2CppObject *v81; // x21
  int32_t v82; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21
  QuestInformationListViewItemDraw___c__DisplayClass25_0_o *v85; // x0
  const MethodInfo *v86; // x1

  if ( (byte_49F9490 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, item);
    sub_1B640C8(&AtlasManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_MstMissionMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&QuestInformationListViewItemDraw_TypeInfo, v15);
    sub_1B640C8(&QuestInformationListViewManager_TypeInfo, v16);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v19);
    sub_1B640C8(&Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__, v20);
    sub_1B640C8(&QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_11957/*"SHOP_BUY_ITEM_HOLD"*/, v22);
    sub_1B640C8(&StringLiteral_1/*""*/, v23);
    byte_49F9490 = 1;
  }
  v24 = sub_1B64314(QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo, item, *(_QWORD *)&mode);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_165;
  *(_QWORD *)(v24 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)this, v26, v27);
  *(_QWORD *)(v24 + 24) = item;
  v28 = (QuestInformationListViewItem_o **)(v24 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 24), (int32_t)item, v29, v30);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(completeMissionTarget, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_165;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_165;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_165;
    Instance = (int64_t)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_165;
    v34 = *(_DWORD *)(Instance + 24);
    v35 = Instance;
    if ( v34 >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        if ( v36 >= v34 )
          goto LABEL_166;
        v37 = *(_QWORD *)(v35 + 8LL * (int)v36 + 32);
        if ( !v37 )
          goto LABEL_165;
        if ( !MasterData_object )
          goto LABEL_165;
        Instance = (int64_t)EventMissionMaster__getCompleteMissionList(
                              (EventMissionMaster_o *)MasterData_object,
                              *(_DWORD *)(v37 + 20),
                              0LL);
        if ( !Instance )
          goto LABEL_165;
        v38 = *(_QWORD *)(Instance + 24);
        if ( v38 )
          break;
        v34 = *(_DWORD *)(v35 + 24);
        if ( (int)++v36 >= v34 )
          goto LABEL_24;
      }
      if ( !(_DWORD)v38 )
LABEL_166:
        sub_1B6432C(Instance, v33);
      v39 = *(_QWORD *)(Instance + 32);
      if ( !v39 )
        goto LABEL_165;
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v39 + 28), 0LL);
    }
  }
LABEL_24:
  v40 = *v28;
  if ( !*v28 )
    goto LABEL_165;
  viewObject = v40->fields.viewObject;
  if ( !viewObject )
    goto LABEL_165;
  manager = (QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( manager
    && ((methodPtr_low = LOBYTE(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewManager_TypeInfo) )
  {
    sub_1B645E4(manager);
    QuestInformationListViewItemDraw___c__DisplayClass25_0___ctor(v85, v86);
  }
  else if ( mode )
  {
    infoType = v40->fields.infoType;
    if ( infoType == 1 )
    {
      mEnemyType = v40->fields.mEnemyType;
      if ( !mEnemyType )
      {
        Instance = (int64_t)this->fields.SvtImg;
        if ( !Instance )
          goto LABEL_165;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_165;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_49F76BD )
        {
          sub_1B640C8(&TerminalSceneComponent_TypeInfo, v60);
          byte_49F76BD = 1;
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
          if ( !byte_49F76BD )
          {
            sub_1B640C8(&TerminalSceneComponent_TypeInfo, v63);
            byte_49F76BD = 1;
          }
          Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          }
          v65 = **(_QWORD **)(Instance + 184);
          if ( !v65 || !enemySp )
            goto LABEL_165;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v65 + 304), 0LL);
        }
        v66 = (UISprite_o *)this->fields.enemySp;
        Instance = (int64_t)QuestInformationListViewItemDraw_TypeInfo;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        if ( v66 )
        {
          UISprite__set_spriteName(v66, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0LL);
          QuestInformationListViewItemDraw__SetDispType(v67, 1, this->fields.enemySp, manager, v68);
          Instance = (int64_t)this->fields.textLb;
          if ( Instance )
          {
            UILabel__set_text(
              (UILabel_o *)Instance,
              QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
              0LL);
            Instance = (int64_t)this->fields.classComp;
            if ( Instance )
            {
              ServantClassIconComponent__Set(
                (ServantClassIconComponent_o *)Instance,
                QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
                0LL);
              classComp = this->fields.classComp;
              if ( classComp )
              {
                Instance = (int64_t)classComp->fields.nameLabel;
                if ( Instance )
                {
                  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                  Instance = (int64_t)this->fields.weeklyMissionTarget;
                  if ( Instance )
                  {
                    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                    if ( Instance )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      Instance = (int64_t)this->fields.limitMissionTarget;
                      if ( Instance )
                      {
                        Instance = (int64_t)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Instance,
                                              0LL);
                        if ( Instance )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                          Instance = (int64_t)this->fields.eventMissionTarget;
                          if ( Instance )
                          {
                            Instance = (int64_t)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)Instance,
                                                  0LL);
                            if ( *v28 )
                            {
                              if ( Instance )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (*v28)->fields.eventMissionTarget,
                                  0LL);
                                Instance = (int64_t)this->fields.completeMissionTarget;
                                if ( Instance )
                                {
LABEL_108:
                                  Instance = (int64_t)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                                  if ( !Instance )
                                    goto LABEL_165;
                                  v70 = 0;
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
LABEL_165:
        sub_1B64324(Instance);
      }
      p_SvtImg = &this->fields.SvtImg;
      Instance = (int64_t)this->fields.SvtImg;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_165;
      if ( mEnemyType == 1 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v50 = *v28;
        if ( !*v28 )
          goto LABEL_165;
        v51 = *p_SvtImg;
        targetId = v50->fields.targetId;
        targetCnt = v50->fields.targetCnt;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v51, targetId, targetCnt, targetCnt, 0LL);
        *p_SvtImg = Manager__loadCommandCard;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.SvtImg,
          (int32_t)Manager__loadCommandCard,
          v55,
          v56);
        if ( !*v28 )
          goto LABEL_165;
        QuestInformationListViewItemDraw__SetDispType_33765172(
          (QuestInformationListViewItemDraw_o *)Instance,
          (*v28)->fields.dispType,
          this->fields.SvtImg,
          manager,
          v57);
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_165;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_165;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_165;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( !*v28 )
          goto LABEL_165;
        v71 = (UISprite_o *)this->fields.enemySp;
        iconId = (*v28)->fields.iconId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__SetEnemy(v71, iconId, 0LL) )
        {
          Instance = (int64_t)this->fields.enemySp;
          if ( !Instance )
            goto LABEL_165;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.enemyTexture;
          if ( !Instance )
            goto LABEL_165;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
          if ( !*v28 )
            goto LABEL_165;
          QuestInformationListViewItemDraw__SetDispType(
            (QuestInformationListViewItemDraw_o *)Instance,
            (*v28)->fields.dispType,
            this->fields.enemySp,
            manager,
            v75);
        }
        else
        {
          v76 = *(QuestInformationListViewItem_o **)(v24 + 24);
          v77 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v73, v74);
          System_Action___ctor(
            v77,
            (Il2CppObject *)v24,
            Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__,
            0LL);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v76, v77, v78);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v28, v58);
      if ( !*v28 )
        goto LABEL_165;
      Instance = (int64_t)this->fields.classComp;
      if ( !Instance )
        goto LABEL_165;
      ServantClassIconComponent__SetWithClassOverWrite(
        (ServantClassIconComponent_o *)Instance,
        (*v28)->fields.targetId,
        (*v28)->fields.targetCnt,
        (*v28)->fields.classId,
        0LL);
      Instance = (int64_t)this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v28 )
        goto LABEL_165;
      if ( !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v28)->fields.weeklyMissionTarget, 0LL);
      Instance = (int64_t)this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v28 )
        goto LABEL_165;
      if ( !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v28)->fields.limitMissionTarget, 0LL);
      Instance = (int64_t)this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v28 )
        goto LABEL_165;
      if ( !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v28)->fields.eventMissionTarget, 0LL);
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v28 || !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v28)->fields.completeMissionTarget, 0LL);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v79);
    }
    else if ( !infoType )
    {
      Instance = (int64_t)this->fields.blankImg;
      if ( !Instance )
        goto LABEL_165;
      if ( v40->fields.mRewardType )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        v45 = *v28;
        if ( !*v28 )
          goto LABEL_165;
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_165;
        v46 = v45->fields.mRewardType == 2 ? 2 : 1;
        ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)Instance, v46, v45->fields.targetId, -1, 0, 0LL);
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_165;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_165;
        v47 = 1;
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_165;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_165;
        v47 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v47, 0LL);
      if ( !*v28 )
        goto LABEL_165;
      if ( (*v28)->fields.mRewardType != 2 )
        goto LABEL_67;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( *v28 )
        {
          v59 = (ItemMaster_o *)Instance;
          if ( Instance )
          {
            Instance = ItemMaster__isQP((ItemMaster_o *)Instance, (*v28)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_67;
            if ( !*v28 )
              goto LABEL_165;
            Instance = ItemMaster__isFriendPoint(v59, (*v28)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_67;
            if ( !*v28 )
              goto LABEL_165;
            Instance = ItemMaster__isEventPoint(v59, (*v28)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
            {
LABEL_67:
              Instance = (int64_t)this->fields.holdNumTitleLb;
              if ( !Instance )
                goto LABEL_165;
              Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_165;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              Instance = (int64_t)this->fields.holdNumCntLb;
              if ( !Instance )
                goto LABEL_165;
              goto LABEL_108;
            }
            if ( !*v28 )
              goto LABEL_165;
            Instance = ItemMaster__isMana(v59, (*v28)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_165;
              v80 = (int32_t *)(Instance + 184);
            }
            else
            {
              if ( !*v28 )
                goto LABEL_165;
              Instance = ItemMaster__isRarePri(v59, (*v28)->fields.targetId, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( !Instance )
                  goto LABEL_165;
                v80 = (int32_t *)(Instance + 188);
              }
              else
              {
                if ( !*v28 )
                  goto LABEL_165;
                if ( ItemMaster__isStone(v59, (*v28)->fields.targetId, 0LL) )
                {
                  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                  if ( !Instance )
                    goto LABEL_165;
                  v80 = (int32_t *)(Instance + 176);
                }
                else
                {
                  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_165;
                  v81 = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*v28 )
                    goto LABEL_165;
                  if ( !v81 )
                    goto LABEL_165;
                  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                        (UserItemMaster_o *)v81,
                                        Instance,
                                        (*v28)->fields.targetId,
                                        0LL);
                  if ( !Instance )
                    goto LABEL_165;
                  v80 = (int32_t *)(Instance + 28);
                }
              }
            }
            v82 = *v80;
            holdNumTitleLb = this->fields.holdNumTitleLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11957/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
            if ( holdNumTitleLb )
            {
              UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
              holdNumCntLb = this->fields.holdNumCntLb;
              Instance = (int64_t)LocalizationManager__GetNumberFormat(v82, 0LL);
              if ( holdNumCntLb )
              {
                UILabel__set_text(holdNumCntLb, (System_String_o *)Instance, 0LL);
                Instance = (int64_t)this->fields.holdNumTitleLb;
                if ( Instance )
                {
                  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  if ( Instance )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
                    Instance = (int64_t)this->fields.holdNumCntLb;
                    if ( Instance )
                    {
                      Instance = (int64_t)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
                      if ( Instance )
                      {
                        v70 = 1;
LABEL_110:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v70, 0LL);
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
      goto LABEL_165;
    }
  }
}


void __fastcall QuestInformationListViewItemDraw__UpdateTargetPosition(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *completeMissionTarget; // x0
  __int64 v4; // x1
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

  if ( (byte_49F9491 & 1) == 0 )
  {
    sub_1B640C8(&QuestInformationListViewItemDraw_TypeInfo, method);
    byte_49F9491 = 1;
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
        sub_1B6432C(completeMissionTarget, v4);
      }
    }
LABEL_41:
    sub_1B64324(completeMissionTarget);
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
  if ( (byte_49F9499 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, assetData);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    this = (QuestInformationListViewItemDraw_o *)sub_1B640C8(&StringLiteral_22610/*"quest_info"*/, v7);
    byte_49F9499 = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_object__48347676(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_22610/*"quest_info"*/,
                                                       (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1B64324(this);
  }
  v9 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__49003980(
    v9,
    transform,
    (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
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
    sub_1B64324(this);
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Material_o *v15; // x20
  struct QuestInformationListViewItemDraw_o *v16; // x8
  struct QuestInformationListViewItemDraw_o *v17; // x8
  struct QuestInformationListViewItemDraw_o *v18; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__48347676; // x0

  if ( (byte_49F949A & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, assetData);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_16457/*"_alpha"*/, v8);
    sub_1B640C8(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v9);
    sub_1B640C8(&StringLiteral_16198/*"_MaskTex"*/, v10);
    byte_49F949A = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  *(_QWORD *)&_4__this[1].fields.nowVersion = assetData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&_4__this[1].fields.nowVersion,
    (int32_t)assetData,
    (int32_t)method,
    v3);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
  v15 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v13, v14);
  UnityEngine_Material___ctor(v15, v12, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_13;
  _4__this = (AssetData_o *)v16->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v15,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_13;
  _4__this = v17->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)AssetData__GetObject_object__48347676(
                              _4__this,
                              v17->fields.enemyIconName,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v15
    || (UnityEngine_Material__set_mainTexture(v15, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v18 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v18->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_61375396(
                                    v18->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16457/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_object__48347676 = AssetData__GetObject_object__48347676(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984),
        UnityEngine_Material__SetTexture(
          v15,
          (System_String_o *)StringLiteral_16198/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__48347676,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1B64324(_4__this);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}