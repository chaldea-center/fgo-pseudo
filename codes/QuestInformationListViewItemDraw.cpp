void __fastcall QuestInformationListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  QuestInformationListViewItemDraw_c *v15; // x8
  struct QuestInformationListViewItemDraw_StaticFields *v16; // x10
  int32_t v17; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Array_o *v21; // x0
  System_Array_o *v22; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_RuntimeFieldHandle_o v26; // 0:w1.4

  if ( (byte_4A58195 & 1) == 0 )
  {
    sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1B885B0(&float___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58);
    sub_1B885B0(&StringLiteral_19027/*"enemy_icon_"*/);
    sub_1B885B0(&StringLiteral_22723/*"questinfo_enemy_brank"*/);
    sub_1B885B0(&StringLiteral_15129/*"Unlit/Transparent Colored"*/);
    sub_1B885B0(&StringLiteral_25467/*"？？？"*/);
    sub_1B885B0(&StringLiteral_6013/*"Enemys/Icon/"*/);
    byte_4A58195 = 1;
  }
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22723/*"questinfo_enemy_brank"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_22723/*"questinfo_enemy_brank"*/,
    v1,
    v2);
  v3 = StringLiteral_25467/*"？？？"*/;
  static_fields = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_25467/*"？？？"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->ENEMY_UNKNOWN_NAME, v3, v5, v6);
  v7 = StringLiteral_6013/*"Enemys/Icon/"*/;
  v8 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v8->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6013/*"Enemys/Icon/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->ENEMY_ICON_TEXTURE_PATH, v7, v9, v10);
  v11 = StringLiteral_19027/*"enemy_icon_"*/;
  v12 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v12->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19027/*"enemy_icon_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->ENEMY_ICON_TEXTURE_PREFIX, v11, v13, v14);
  v15 = QuestInformationListViewItemDraw_TypeInfo;
  v16 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v16->ENEMY_UNKNOWN_CLASSID = 12;
  v16->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BB3C80;
  v17 = StringLiteral_15129/*"Unlit/Transparent Colored"*/;
  v18 = v15->static_fields;
  v18->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15129/*"Unlit/Transparent Colored"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v18->DEFAULT_SHADER, v17, v19, v20);
  v21 = (System_Array_o *)sub_1B88658(float___TypeInfo, 4LL);
  v26.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  v22 = v21;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v21, v26, 0LL);
  v23 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v23->TARGET_POSITION = (struct System_Single_array *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->TARGET_POSITION, (int32_t)v22, v24, v25);
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

  if ( (byte_4A58192 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__);
    sub_1B885B0(&QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo);
    byte_4A58192 = 1;
  }
  v7 = sub_1B887FC(QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo);
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
  v21 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v20, 0LL);
  this->fields.enemyIconName = v21;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_enemyIconName, (int32_t)v21, v23, v24);
  v25 = System_String__Concat_61707032(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__,
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
  System_String_o **p_enemyIconName; // x20
  QuestInformationListViewItemDraw_c *v4; // x0
  System_String_o *v5; // x21
  ServantStatusBattleListViewItem_o *p_enemyIconAssetData; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A58193 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4A58193 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v4 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v4 = QuestInformationListViewItemDraw_TypeInfo;
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
void __fastcall QuestInformationListViewItemDraw__SetDispType(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  UnityEngine_Material_o *v12; // x20
  UnityEngine_Material_o *v13; // x21
  struct UnityEngine_GameObject_o *blankImg; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5818F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    this = (QuestInformationListViewItemDraw_o *)sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4A5818F = 1;
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
        if ( lManager )
        {
          v12 = QuestInformationListViewManager__NewChocoMaterialForSprite(lManager, *(const MethodInfo **)&dispTp);
          v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_69322740(v13, v12, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v13, 0LL);
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
        v10 = *((float *)&blankImg[1].fields + 1);
        v11 = *(float *)&blankImg[2].klass;
        v8 = *((float *)&blankImg[1].monitor + 1);
        v9 = *(float *)&blankImg[1].fields.m_CachedPtr;
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

  if ( (byte_4A58191 & 1) == 0 )
  {
    this = (QuestInformationListViewItemDraw_o *)sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4A58191 = 1;
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
void __fastcall QuestInformationListViewItemDraw__SetDispType_34052444(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v8; // x20
  QuestInformationListViewItemDraw_c *v9; // x0
  UnityEngine_Material_o *v10; // x20
  float *blankImg; // x8
  UnityEngine_Shader_o *v12; // x0
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A58190 & 1) == 0 )
  {
    sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    this = (QuestInformationListViewItemDraw_o *)sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    byte_4A58190 = 1;
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
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                                     texture,
                                                     0LL,
                                                     texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( lManager )
      {
        v10 = QuestInformationListViewManager__NewChocoMaterialForTexture(lManager, *(const MethodInfo **)&dispTp);
        this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
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
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                     texture,
                                                     texture->klass->vtable._29_set_shader.methodPtr);
      if ( this )
      {
        this = (QuestInformationListViewItemDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        v8 = this;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        if ( v8 )
        {
          if ( !System_String__Equals_61715348(
                  (System_String_o *)v8,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v9 = QuestInformationListViewItemDraw_TypeInfo;
            if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
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
  this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_28;
  blankImg = (float *)this[1].fields.blankImg;
  v15.fields.b = blankImg[11];
  v15.fields.a = blankImg[12];
  v15.fields.r = blankImg[9];
  v15.fields.g = blankImg[10];
  UIWidget__set_color((UIWidget_o *)texture, v15, 0LL);
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
  if ( !System_String__Equals_61715348(
          (System_String_o *)this,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v9 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestInformationListViewItemDraw_TypeInfo;
    }
LABEL_27:
    v12 = UnityEngine_Shader__Find(v9->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v12,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall QuestInformationListViewItemDraw__SetEnemyName(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v4; // x20
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v7; // x22

  v4 = this;
  if ( (byte_4A58194 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__32_0__);
    this = (QuestInformationListViewItemDraw_o *)sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A58194 = 1;
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
      Method_QuestInformationListViewItemDraw__SetEnemyName_b__32_0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v7, 1, 0LL);
  }
  this = (QuestInformationListViewItemDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1B8880C(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0LL);
}


void __fastcall QuestInformationListViewItemDraw__SetItem(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t Instance; // x0
  QuestInformationListViewManager_c *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  QuestInformationListViewItem_o **v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Object_o *completeMissionTarget; // x21
  Il2CppObject *MasterData_object; // x21
  int v17; // w8
  int64_t v18; // x24
  unsigned int v19; // w26
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  QuestInformationListViewItem_o *v23; // x8
  struct ListViewObject_o *viewObject; // x9
  QuestInformationListViewManager_o *manager; // x21
  __int64 methodPtr_low; // x10
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v28; // x8
  int32_t v29; // w1
  bool v30; // w1
  int32_t mEnemyType; // w24
  struct UITexture_o **p_SvtImg; // x23
  QuestInformationListViewItem_o *v33; // x8
  UITexture_o *v34; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *v40; // x4
  const MethodInfo *v41; // x2
  ItemMaster_o *v42; // x21
  TerminalSceneComponent_c *v43; // x0
  UnityEngine_Object_o *mInstance; // x22
  UISprite_o *enemySp; // x22
  __int64 v46; // x8
  UISprite_o *v47; // x22
  QuestInformationListViewItemDraw_o *v48; // x0
  const MethodInfo *v49; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  bool v51; // w1
  UISprite_o *v52; // x23
  int32_t iconId; // w24
  const MethodInfo *v54; // x4
  QuestInformationListViewItem_o *v55; // x21
  System_Action_o *v56; // x23
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x1
  int32_t *v59; // x8
  Il2CppObject *v60; // x21
  int32_t v61; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21
  QuestInformationListViewItemDraw___c__DisplayClass25_0_o *v64; // x0
  const MethodInfo *v65; // x1

  if ( (byte_4A5818D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    sub_1B885B0(&QuestInformationListViewManager_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__);
    sub_1B885B0(&QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo);
    sub_1B885B0(&StringLiteral_12012/*"SHOP_BUY_ITEM_HOLD"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5818D = 1;
  }
  v7 = sub_1B887FC(QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_165;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = item;
  v12 = (QuestInformationListViewItem_o **)(v7 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)item, v13, v14);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(completeMissionTarget, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_165;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_165;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_165;
    Instance = (int64_t)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_165;
    v17 = *(_DWORD *)(Instance + 24);
    v18 = Instance;
    if ( v17 >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= v17 )
          goto LABEL_166;
        v20 = *(_QWORD *)(v18 + 8LL * (int)v19 + 32);
        if ( !v20 )
          goto LABEL_165;
        if ( !MasterData_object )
          goto LABEL_165;
        Instance = (int64_t)EventMissionMaster__getCompleteMissionList(
                              (EventMissionMaster_o *)MasterData_object,
                              *(_DWORD *)(v20 + 20),
                              0LL);
        if ( !Instance )
          goto LABEL_165;
        v21 = *(_QWORD *)(Instance + 24);
        if ( v21 )
          break;
        v17 = *(_DWORD *)(v18 + 24);
        if ( (int)++v19 >= v17 )
          goto LABEL_24;
      }
      if ( !(_DWORD)v21 )
LABEL_166:
        sub_1B88814(Instance, v9);
      v22 = *(_QWORD *)(Instance + 32);
      if ( !v22 )
        goto LABEL_165;
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v22 + 28), 0LL);
    }
  }
LABEL_24:
  v23 = *v12;
  if ( !*v12 )
    goto LABEL_165;
  viewObject = v23->fields.viewObject;
  if ( !viewObject )
    goto LABEL_165;
  manager = (QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( manager
    && ((v9 = QuestInformationListViewManager_TypeInfo,
         methodPtr_low = LOBYTE(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewManager_TypeInfo) )
  {
    sub_1B88ACC(manager);
    QuestInformationListViewItemDraw___c__DisplayClass25_0___ctor(v64, v65);
  }
  else if ( mode )
  {
    infoType = v23->fields.infoType;
    if ( infoType == 1 )
    {
      mEnemyType = v23->fields.mEnemyType;
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
        if ( !byte_4A5629D )
        {
          sub_1B885B0(&TerminalSceneComponent_TypeInfo);
          byte_4A5629D = 1;
        }
        v43 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v43 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v43->static_fields->mInstance;
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
          Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          }
          v46 = **(_QWORD **)(Instance + 184);
          if ( !v46 || !enemySp )
            goto LABEL_165;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v46 + 304), 0LL);
        }
        v47 = (UISprite_o *)this->fields.enemySp;
        Instance = (int64_t)QuestInformationListViewItemDraw_TypeInfo;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        if ( v47 )
        {
          UISprite__set_spriteName(v47, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0LL);
          QuestInformationListViewItemDraw__SetDispType(v48, 1, this->fields.enemySp, manager, v49);
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
                            if ( *v12 )
                            {
                              if ( Instance )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (*v12)->fields.eventMissionTarget,
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
                                  v51 = 0;
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
        sub_1B8880C(Instance, v9);
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
        v33 = *v12;
        if ( !*v12 )
          goto LABEL_165;
        v34 = *p_SvtImg;
        targetId = v33->fields.targetId;
        targetCnt = v33->fields.targetCnt;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v34, targetId, targetCnt, targetCnt, 0LL);
        *p_SvtImg = Manager__loadCommandCard;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.SvtImg,
          (int32_t)Manager__loadCommandCard,
          v38,
          v39);
        if ( !*v12 )
          goto LABEL_165;
        QuestInformationListViewItemDraw__SetDispType_34052444(
          (QuestInformationListViewItemDraw_o *)Instance,
          (*v12)->fields.dispType,
          this->fields.SvtImg,
          manager,
          v40);
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
        if ( !*v12 )
          goto LABEL_165;
        v52 = (UISprite_o *)this->fields.enemySp;
        iconId = (*v12)->fields.iconId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__SetEnemy(v52, iconId, 0LL) )
        {
          Instance = (int64_t)this->fields.enemySp;
          if ( !Instance )
            goto LABEL_165;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.enemyTexture;
          if ( !Instance )
            goto LABEL_165;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
          if ( !*v12 )
            goto LABEL_165;
          QuestInformationListViewItemDraw__SetDispType(
            (QuestInformationListViewItemDraw_o *)Instance,
            (*v12)->fields.dispType,
            this->fields.enemySp,
            manager,
            v54);
        }
        else
        {
          v55 = *(QuestInformationListViewItem_o **)(v7 + 24);
          v56 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v56,
            (Il2CppObject *)v7,
            Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__,
            0LL);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v55, v56, v57);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v12, v41);
      if ( !*v12 )
        goto LABEL_165;
      Instance = (int64_t)this->fields.classComp;
      if ( !Instance )
        goto LABEL_165;
      ServantClassIconComponent__SetWithClassOverWrite(
        (ServantClassIconComponent_o *)Instance,
        (*v12)->fields.targetId,
        (*v12)->fields.targetCnt,
        (*v12)->fields.classId,
        0LL);
      Instance = (int64_t)this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v12 )
        goto LABEL_165;
      if ( !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v12)->fields.weeklyMissionTarget, 0LL);
      Instance = (int64_t)this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v12 )
        goto LABEL_165;
      if ( !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v12)->fields.limitMissionTarget, 0LL);
      Instance = (int64_t)this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v12 )
        goto LABEL_165;
      if ( !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v12)->fields.eventMissionTarget, 0LL);
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v12 || !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v12)->fields.completeMissionTarget, 0LL);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v58);
    }
    else if ( !infoType )
    {
      Instance = (int64_t)this->fields.blankImg;
      if ( !Instance )
        goto LABEL_165;
      if ( v23->fields.mRewardType )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        v28 = *v12;
        if ( !*v12 )
          goto LABEL_165;
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_165;
        v29 = v28->fields.mRewardType == 2 ? 2 : 1;
        ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)Instance, v29, v28->fields.targetId, -1, 0, 0LL);
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_165;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_165;
        v30 = 1;
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
        v30 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v30, 0LL);
      if ( !*v12 )
        goto LABEL_165;
      if ( (*v12)->fields.mRewardType != 2 )
        goto LABEL_67;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( *v12 )
        {
          v42 = (ItemMaster_o *)Instance;
          if ( Instance )
          {
            Instance = ItemMaster__isQP((ItemMaster_o *)Instance, (*v12)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_67;
            if ( !*v12 )
              goto LABEL_165;
            Instance = ItemMaster__isFriendPoint(v42, (*v12)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_67;
            if ( !*v12 )
              goto LABEL_165;
            Instance = ItemMaster__isEventPoint(v42, (*v12)->fields.targetId, 0LL);
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
            if ( !*v12 )
              goto LABEL_165;
            Instance = ItemMaster__isMana(v42, (*v12)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_165;
              v59 = (int32_t *)(Instance + 184);
            }
            else
            {
              if ( !*v12 )
                goto LABEL_165;
              Instance = ItemMaster__isRarePri(v42, (*v12)->fields.targetId, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( !Instance )
                  goto LABEL_165;
                v59 = (int32_t *)(Instance + 188);
              }
              else
              {
                if ( !*v12 )
                  goto LABEL_165;
                if ( ItemMaster__isStone(v42, (*v12)->fields.targetId, 0LL) )
                {
                  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                  if ( !Instance )
                    goto LABEL_165;
                  v59 = (int32_t *)(Instance + 176);
                }
                else
                {
                  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_165;
                  v60 = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*v12 )
                    goto LABEL_165;
                  if ( !v60 )
                    goto LABEL_165;
                  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                        (UserItemMaster_o *)v60,
                                        Instance,
                                        (*v12)->fields.targetId,
                                        0LL);
                  if ( !Instance )
                    goto LABEL_165;
                  v59 = (int32_t *)(Instance + 28);
                }
              }
            }
            v61 = *v59;
            holdNumTitleLb = this->fields.holdNumTitleLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12012/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
            if ( holdNumTitleLb )
            {
              UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
              holdNumCntLb = this->fields.holdNumCntLb;
              Instance = (int64_t)LocalizationManager__GetNumberFormat(v61, 0LL);
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
                        v51 = 1;
LABEL_110:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v51, 0LL);
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

  if ( (byte_4A5818E & 1) == 0 )
  {
    sub_1B885B0(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4A5818E = 1;
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
        sub_1B88814(completeMissionTarget, method);
      }
    }
LABEL_41:
    sub_1B8880C(completeMissionTarget, method);
  }
}


void __fastcall QuestInformationListViewItemDraw___SetEnemyName_b__32_0(
        QuestInformationListViewItemDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v4; // x19
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v6; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4A58196 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (QuestInformationListViewItemDraw_o *)sub_1B885B0(&StringLiteral_22702/*"quest_info"*/);
    byte_4A58196 = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_object__48635516(
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
    sub_1B8880C(this, method);
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
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v7; // x21
  UnityEngine_Material_o *v8; // x20
  struct QuestInformationListViewItemDraw_o *v9; // x8
  struct QuestInformationListViewItemDraw_o *v10; // x8
  struct QuestInformationListViewItemDraw_o *v11; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__48635516; // x0

  if ( (byte_4A58197 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_16526/*"_alpha"*/);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A58197 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  *(_QWORD *)&_4__this[1].fields.nowVersion = assetData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&_4__this[1].fields.nowVersion,
    (int32_t)assetData,
    (int32_t)method,
    v3);
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