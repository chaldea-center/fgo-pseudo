void __fastcall QuestInformationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v16; // x1
  struct QuestInformationListViewItemDraw_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct QuestInformationListViewItemDraw_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct QuestInformationListViewItemDraw_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  QuestInformationListViewItemDraw_c *v41; // x8
  float v42; // s4
  float v43; // s5
  float v44; // s6
  float v45; // s7
  QuestInformationListViewItemDraw_c *v46; // x8
  struct QuestInformationListViewItemDraw_StaticFields *v47; // x0
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x2
  System_Array_o *v56; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct UnityEngine_Color_o v64; // [xsp+0h] [xbp-20h] BYREF
  System_RuntimeFieldHandle_o v65; // 0:w1.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F95BA & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&float___TypeInfo, v8);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58,
      v9);
    sub_B16FFC(&StringLiteral_18301, v10);
    sub_B16FFC(&StringLiteral_21551, v11);
    sub_B16FFC(&StringLiteral_14954, v12);
    sub_B16FFC(&StringLiteral_23865, v13);
    sub_B16FFC(&StringLiteral_5982, v14);
    byte_40F95BA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v16 = (System_Int32_array **)StringLiteral_21551;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21551;
  sub_B16F98(static_fields, v16, v2, v3, v4, v5, v6, v7);
  v17 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_23865;
  v17->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_23865;
  sub_B16F98((BattleServantConfConponent_o *)&v17->ENEMY_UNKNOWN_NAME, v18, v19, v20, v21, v22, v23, v24);
  v25 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_5982;
  v25->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_5982;
  sub_B16F98((BattleServantConfConponent_o *)&v25->ENEMY_ICON_TEXTURE_PATH, v26, v27, v28, v29, v30, v31, v32);
  v33 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_18301;
  v33->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18301;
  sub_B16F98((BattleServantConfConponent_o *)&v33->ENEMY_ICON_TEXTURE_PREFIX, v34, v35, v36, v37, v38, v39, v40);
  v41 = QuestInformationListViewItemDraw_TypeInfo;
  v66.fields.a = 1.0;
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID = 12;
  v41->static_fields->DEF_FONT_SIZE = 15;
  v66.fields.r = 0.05;
  v64 = (struct UnityEngine_Color_o)0LL;
  v66.fields.g = 0.05;
  v66.fields.b = 0.05;
  UnityEngine_Color___ctor(v66, v42, v43, v44, v45, (const MethodInfo *)&v64);
  v46 = QuestInformationListViewItemDraw_TypeInfo;
  QuestInformationListViewItemDraw_TypeInfo->static_fields->SHADOW_COLOR = v64;
  v47 = v46->static_fields;
  v48 = (System_Int32_array **)StringLiteral_14954;
  v47->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_14954;
  sub_B16F98((BattleServantConfConponent_o *)&v47->DEFAULT_SHADER, v48, v49, v50, v51, v52, v53, v54);
  v56 = (System_Array_o *)sub_B17014(float___TypeInfo, 4LL, v55);
  v65.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v56, v65, 0LL);
  v57 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v57->TARGET_POSITION = (struct System_Single_array *)v56;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v57->TARGET_POSITION,
    (System_Int32_array **)v56,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CommonUI_o *Instance; // x0
  const MethodInfo *v28; // x1
  int32_t iconId; // w9
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v31; // x0
  struct System_String_o *v32; // x0
  struct System_String_o **p_enemyIconName; // x19
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_o *v40; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  AssetLoader_LoadEndDataHandler_o *v45; // x20
  CommonUI_o *v46; // x0
  int32_t v47; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F95B7 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, item);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&Method_QuestInformationListViewItemDraw___c__DisplayClass31_0__LoadEnemyTexture_b__0__, v12);
    sub_B16FFC(&QuestInformationListViewItemDraw___c__DisplayClass31_0_TypeInfo, v13);
    byte_40F95B7 = 1;
  }
  v14 = sub_B170CC(QuestInformationListViewItemDraw___c__DisplayClass31_0_TypeInfo, item, callback, method, v4);
  QuestInformationListViewItemDraw___c__DisplayClass31_0___ctor(
    (QuestInformationListViewItemDraw___c__DisplayClass31_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_16;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v28);
  if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  }
  if ( !item )
    goto LABEL_16;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v47 = iconId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v32 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v31, 0LL);
  this->fields.enemyIconName = v32;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_B16F98((BattleServantConfConponent_o *)p_enemyIconName, (System_Int32_array **)v32, v34, v35, v36, v37, v38, v39);
  v40 = System_String__Concat_43743732(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v45 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v41, v42, v43, v44);
  AssetLoader_LoadEndDataHandler___ctor(
    v45,
    (Il2CppObject *)v14,
    Method_QuestInformationListViewItemDraw___c__DisplayClass31_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v40, v45, 1, 0LL) )
  {
    v46 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( v46 )
    {
      CommonUI__SetLoadMode(v46, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
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
  BattleServantConfConponent_o *p_enemyIconAssetData; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F95B8 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, v3);
    byte_40F95B8 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v5 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v5 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v6 = System_String__Concat_43743732(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (BattleServantConfConponent_o *)&this->fields.enemyIconAssetData;
    sub_B16F98(p_enemyIconAssetData, 0LL, v8, v9, v10, v11, v12, v13);
    p_enemyIconAssetData->monitor = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_enemyIconName, 0LL, v14, v15, v16, v17, v18, v19);
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
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  QuestInformationListViewItemDraw_c *v13; // x0
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x8
  int v15; // s0
  const MethodInfo *v19; // x1
  UnityEngine_Material_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_Material_o *v25; // x21

  if ( (byte_40F95B4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, v8);
    byte_40F95B4 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
      if ( sp )
      {
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v15, 0LL);
        if ( lManager )
        {
          v20 = QuestInformationListViewManager__NewChocoMaterialForSprite(lManager, v19);
          v25 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v21, v22, v23, v24);
          UnityEngine_Material___ctor_40718828(v25, v20, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v25, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B170D4();
    case 2:
      v13 = QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v13 = QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( sp )
      {
        static_fields = v13->static_fields;
        r = static_fields->SHADOW_COLOR.fields.r;
        g = static_fields->SHADOW_COLOR.fields.g;
        b = static_fields->SHADOW_COLOR.fields.b;
        a = static_fields->SHADOW_COLOR.fields.a;
LABEL_13:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&r, 0LL);
        UISpriteAltMat__ResetMaterial(sp, 0LL);
        return;
      }
      goto LABEL_18;
    case 1:
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( !sp )
        goto LABEL_18;
      goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  QuestInformationListViewItemDraw_c *v10; // x0
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_40F95B6 & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    byte_40F95B6 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      v10 = QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v10 = QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( !texture )
LABEL_15:
        sub_B170D4();
      static_fields = v10->static_fields;
      r = static_fields->SHADOW_COLOR.fields.r;
      g = static_fields->SHADOW_COLOR.fields.g;
      b = static_fields->SHADOW_COLOR.fields.b;
      a = static_fields->SHADOW_COLOR.fields.a;
      goto LABEL_13;
    case 1:
LABEL_6:
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( !texture )
        goto LABEL_15;
LABEL_13:
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&r, 0LL);
      break;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewItemDraw__SetDispType_23949612(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  __int64 v8; // x1
  int v9; // s0
  UnityEngine_Object_o *v13; // x0
  System_String_o *name; // x20
  QuestInformationListViewItemDraw_c *v15; // x0
  QuestInformationListViewItemDraw_c *v16; // x0
  UnityEngine_Object_o *v17; // x0
  System_String_o *v18; // x0
  int v19; // s0
  const MethodInfo *v23; // x1
  UnityEngine_Material_o *v24; // x20
  UnityEngine_Texture_o *v25; // x0
  UnityEngine_Shader_o *v26; // x1

  if ( (byte_40F95B5 & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    sub_B16FFC(&StringLiteral_15950, v8);
    byte_40F95B5 = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v19, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
        texture,
        0LL,
        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( lManager )
      {
        v24 = QuestInformationListViewManager__NewChocoMaterialForTexture(lManager, v23);
        v25 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                         texture,
                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v24 )
        {
          UnityEngine_Material__SetTexture(v24, (System_String_o *)StringLiteral_15950, v25, 0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v24,
            texture->klass->vtable._26_get_mainTexture.methodPtr);
          ((void (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._30_MarkAsChanged.method)(
            texture,
            texture->klass->vtable._31_Awake.methodPtr);
          return;
        }
      }
    }
    goto LABEL_32;
  }
  if ( dispTp != 2 )
  {
    if ( dispTp != 1 )
      return;
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v9, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
        texture,
        0LL,
        texture->klass->vtable._26_get_mainTexture.methodPtr);
      v13 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                      texture,
                                      texture->klass->vtable._29_set_shader.methodPtr);
      if ( v13 )
      {
        name = UnityEngine_Object__get_name(v13, 0LL);
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( name )
        {
          if ( !System_String__Equals_43731072(
                  name,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v15 = QuestInformationListViewItemDraw_TypeInfo;
            if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
              || QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              goto LABEL_31;
            }
            goto LABEL_30;
          }
          return;
        }
      }
    }
LABEL_32:
    sub_B170D4();
  }
  v16 = QuestInformationListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    v16 = QuestInformationListViewItemDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_32;
  UIWidget__set_color((UIWidget_o *)texture, v16->static_fields->SHADOW_COLOR, 0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  v17 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                  texture,
                                  texture->klass->vtable._29_set_shader.methodPtr);
  if ( !v17 )
    goto LABEL_32;
  v18 = UnityEngine_Object__get_name(v17, 0LL);
  if ( !v18 )
    goto LABEL_32;
  if ( !System_String__Equals_43731072(
          v18,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v15 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_31;
    }
LABEL_30:
    j_il2cpp_runtime_class_init_0(v15);
    v15 = QuestInformationListViewItemDraw_TypeInfo;
LABEL_31:
    v26 = UnityEngine_Shader__Find(v15->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v26,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall QuestInformationListViewItemDraw__SetEnemyName(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  AssetLoader_LoadEndDataHandler_o *v14; // x22
  UILabel_o *textLb; // x0

  if ( (byte_40F95B9 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, item);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B16FFC(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__33_0__, v6);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v7);
    byte_40F95B9 = 1;
  }
  if ( !item )
    goto LABEL_14;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0LL);
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11, v12, v13);
    AssetLoader_LoadEndDataHandler___ctor(
      v14,
      (Il2CppObject *)this,
      Method_QuestInformationListViewItemDraw__SetEnemyName_b__33_0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(NameEffectPath, v14, 1, 0LL);
  }
  textLb = this->fields.textLb;
  if ( !textLb )
LABEL_14:
    sub_B170D4();
  UILabel__set_text(textLb, item->fields.nameText, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestInformationListViewItemDraw__SetItem(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  QuestInformationListViewItem_o **v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *completeMissionTarget; // x21
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v42; // x0
  MstMissionMaster_o *v43; // x0
  _DWORD *EnableMissions; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  int v47; // w8
  _DWORD *v48; // x24
  unsigned int v49; // w26
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  CompleteMissionSprite_o *v53; // x0
  QuestInformationListViewItem_o *v54; // x8
  struct ListViewObject_o *viewObject; // x9
  QuestInformationListViewManager_o *manager; // x21
  __int64 v57; // x10
  int32_t infoType; // w9
  UnityEngine_GameObject_o *blankImg; // x0
  QuestInformationListViewItem_o *v60; // x8
  ItemIconComponent_o *itemIcon; // x0
  int32_t v62; // w1
  UnityEngine_Component_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  bool v65; // w1
  int32_t mEnemyType; // w24
  UnityEngine_Component_o *v67; // x0
  struct UITexture_o **p_SvtImg; // x23
  UnityEngine_GameObject_o *v69; // x0
  QuestInformationListViewItem_o *v70; // x8
  UITexture_o *v71; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  QuestInformationListViewItemDraw_o *v81; // x0
  const MethodInfo *v82; // x4
  UnityEngine_Component_o *v83; // x0
  UnityEngine_GameObject_o *v84; // x0
  const MethodInfo *v85; // x2
  UnityEngine_Component_o *v86; // x0
  WebViewManager_o *v87; // x0
  ItemMaster_o *v88; // x0
  ItemMaster_o *v89; // x21
  UnityEngine_Component_o *holdNumTitleLb; // x0
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_Component_o *holdNumCntLb; // x0
  UnityEngine_Component_o *SvtImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *enemySp; // x0
  UnityEngine_GameObject_o *v96; // x0
  __int64 v97; // x1
  TerminalSceneComponent_c *v98; // x0
  UnityEngine_Object_o *mInstance; // x22
  __int64 v100; // x1
  UISprite_o *v101; // x22
  TerminalSceneComponent_c *v102; // x0
  struct TerminalSceneComponent_o *v103; // x8
  UISprite_o *v104; // x22
  QuestInformationListViewItemDraw_o *v105; // x0
  const MethodInfo *v106; // x4
  UILabel_o *textLb; // x0
  ServantClassIconComponent_o *classComp; // x0
  struct ServantClassIconComponent_o *v109; // x8
  UILabel_o *nameLabel; // x0
  UnityEngine_Component_o *weeklyMissionTarget; // x0
  UnityEngine_GameObject_o *v112; // x0
  UnityEngine_Component_o *limitMissionTarget; // x0
  UnityEngine_GameObject_o *v114; // x0
  UnityEngine_Component_o *eventMissionTarget; // x0
  UnityEngine_GameObject_o *v116; // x0
  UnityEngine_GameObject_o *v117; // x0
  bool v118; // w1
  UnityEngine_Component_o *v119; // x0
  UnityEngine_GameObject_o *v120; // x0
  UISprite_o *v121; // x23
  int32_t iconId; // w24
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  UnityEngine_Behaviour_o *v127; // x0
  UnityEngine_Behaviour_o *enemyTexture; // x0
  QuestInformationListViewItemDraw_o *v129; // x0
  const MethodInfo *v130; // x4
  QuestInformationListViewItem_o *v131; // x21
  System_Action_o *v132; // x23
  const MethodInfo *v133; // x3
  ServantClassIconComponent_o *v134; // x0
  UnityEngine_Component_o *v135; // x0
  UnityEngine_GameObject_o *v136; // x0
  UnityEngine_Component_o *v137; // x0
  UnityEngine_GameObject_o *v138; // x0
  UnityEngine_Component_o *v139; // x0
  UnityEngine_GameObject_o *v140; // x0
  UnityEngine_Component_o *v141; // x0
  UnityEngine_GameObject_o *v142; // x0
  const MethodInfo *v143; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t *p_mana; // x8
  UserGameEntity_o *v146; // x0
  UserGameEntity_o *v147; // x0
  WebViewManager_o *v148; // x0
  UserItemMaster_o *v149; // x21
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t v152; // w20
  UILabel_o *v153; // x21
  System_String_o *v154; // x0
  UILabel_o *v155; // x21
  System_String_o *NumberFormat; // x0
  UnityEngine_Component_o *v157; // x0
  UnityEngine_GameObject_o *v158; // x0
  UnityEngine_Component_o *v159; // x0
  QuestInformationListViewItemDraw_o *v160; // x0
  int32_t v161; // w1
  UISpriteAltMat_o *v162; // x2
  QuestInformationListViewManager_o *v163; // x3
  const MethodInfo *v164; // x4

  if ( (byte_40F95B2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, item);
    sub_B16FFC(&AtlasManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_MstMissionMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, v16);
    sub_B16FFC(&QuestInformationListViewManager_TypeInfo, v17);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v20);
    sub_B16FFC(&Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__, v21);
    sub_B16FFC(&QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_12066, v23);
    sub_B16FFC(&StringLiteral_1, v24);
    byte_40F95B2 = 1;
  }
  v25 = sub_B170CC(QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo, item, *(_QWORD *)&mode, method, v4);
  QuestInformationListViewItemDraw___c__DisplayClass26_0___ctor(
    (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_176;
  *(_QWORD *)(v25 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)(v25 + 24) = item;
  v32 = (QuestInformationListViewItem_o **)(v25 + 24);
  sub_B16F98((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)item, v33, v34, v35, v36, v37, v38);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(completeMissionTarget, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_176;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    v42 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v42 )
      goto LABEL_176;
    v43 = (MstMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v42,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !v43 )
      goto LABEL_176;
    EnableMissions = MstMissionMaster__GetEnableMissions(v43, 0LL);
    if ( !EnableMissions )
      goto LABEL_176;
    v47 = EnableMissions[6];
    v48 = EnableMissions;
    if ( v47 >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        if ( v49 >= v47 )
          goto LABEL_177;
        v50 = *(_QWORD *)&v48[2 * v49 + 8];
        if ( !v50 )
          goto LABEL_176;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_176;
        EnableMissions = EventMissionMaster__getCompleteMissionList(
                           MasterData_WarQuestSelectionMaster,
                           *(_DWORD *)(v50 + 20),
                           0LL);
        if ( !EnableMissions )
          goto LABEL_176;
        v51 = *((_QWORD *)EnableMissions + 3);
        if ( v51 )
          break;
        v47 = v48[6];
        if ( (int)++v49 >= v47 )
          goto LABEL_25;
      }
      if ( !(_DWORD)v51 )
      {
LABEL_177:
        sub_B17100(EnableMissions, v45, v46);
        sub_B170A0();
      }
      v52 = *((_QWORD *)EnableMissions + 4);
      if ( !v52 )
        goto LABEL_176;
      v53 = this->fields.completeMissionTarget;
      if ( !v53 )
        goto LABEL_176;
      CompleteMissionSprite__InitTarget(v53, *(_DWORD *)(v52 + 28), 0LL);
    }
  }
LABEL_25:
  v54 = *v32;
  if ( !*v32 )
    goto LABEL_176;
  viewObject = v54->fields.viewObject;
  if ( !viewObject )
    goto LABEL_176;
  manager = (QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( manager
    && ((v57 = *(&QuestInformationListViewManager_TypeInfo->_2.bitflags2 + 1),
         *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v57)
     || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[v57 - 1] != QuestInformationListViewManager_TypeInfo) )
  {
    v160 = (QuestInformationListViewItemDraw_o *)sub_B173C8(manager);
    QuestInformationListViewItemDraw__SetDispType(v160, v161, v162, v163, v164);
  }
  else if ( mode )
  {
    infoType = v54->fields.infoType;
    if ( infoType == 1 )
    {
      mEnemyType = v54->fields.mEnemyType;
      if ( !mEnemyType )
      {
        SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
        if ( !SvtImg )
          goto LABEL_176;
        gameObject = UnityEngine_Component__get_gameObject(SvtImg, 0LL);
        if ( !gameObject )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        enemySp = (UnityEngine_Component_o *)this->fields.enemySp;
        if ( !enemySp )
          goto LABEL_176;
        v96 = UnityEngine_Component__get_gameObject(enemySp, 0LL);
        if ( !v96 )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive(v96, 1, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v97);
          byte_40F6042 = 1;
        }
        v98 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v98 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v98->static_fields->mInstance;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
        {
          v101 = (UISprite_o *)this->fields.enemySp;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v100);
            byte_40F6042 = 1;
          }
          v102 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v102 = TerminalSceneComponent_TypeInfo;
          }
          v103 = v102->static_fields->mInstance;
          if ( !v103 || !v101 )
            goto LABEL_176;
          UISprite__set_atlas(v101, v103->fields.mTerminalAtlas, 0LL);
        }
        v104 = (UISprite_o *)this->fields.enemySp;
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( v104 )
        {
          UISprite__set_spriteName(
            v104,
            QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
            0LL);
          QuestInformationListViewItemDraw__SetDispType(v105, 1, this->fields.enemySp, manager, v106);
          textLb = this->fields.textLb;
          if ( textLb )
          {
            UILabel__set_text(textLb, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME, 0LL);
            classComp = this->fields.classComp;
            if ( classComp )
            {
              ServantClassIconComponent__Set(
                classComp,
                QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
                0LL);
              v109 = this->fields.classComp;
              if ( v109 )
              {
                nameLabel = v109->fields.nameLabel;
                if ( nameLabel )
                {
                  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1, 0LL);
                  weeklyMissionTarget = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
                  if ( weeklyMissionTarget )
                  {
                    v112 = UnityEngine_Component__get_gameObject(weeklyMissionTarget, 0LL);
                    if ( v112 )
                    {
                      UnityEngine_GameObject__SetActive(v112, 0, 0LL);
                      limitMissionTarget = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
                      if ( limitMissionTarget )
                      {
                        v114 = UnityEngine_Component__get_gameObject(limitMissionTarget, 0LL);
                        if ( v114 )
                        {
                          UnityEngine_GameObject__SetActive(v114, 0, 0LL);
                          eventMissionTarget = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
                          if ( eventMissionTarget )
                          {
                            v116 = UnityEngine_Component__get_gameObject(eventMissionTarget, 0LL);
                            if ( *v32 )
                            {
                              if ( v116 )
                              {
                                UnityEngine_GameObject__SetActive(v116, (*v32)->fields.eventMissionTarget, 0LL);
                                holdNumCntLb = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
                                if ( holdNumCntLb )
                                {
LABEL_116:
                                  v117 = UnityEngine_Component__get_gameObject(holdNumCntLb, 0LL);
                                  if ( !v117 )
                                    goto LABEL_176;
                                  v118 = 0;
                                  goto LABEL_118;
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
LABEL_176:
        sub_B170D4();
      }
      p_SvtImg = &this->fields.SvtImg;
      v67 = (UnityEngine_Component_o *)this->fields.SvtImg;
      if ( !v67 )
        goto LABEL_176;
      v69 = UnityEngine_Component__get_gameObject(v67, 0LL);
      if ( !v69 )
        goto LABEL_176;
      if ( mEnemyType == 1 )
      {
        UnityEngine_GameObject__SetActive(v69, 1, 0LL);
        v70 = *v32;
        if ( !*v32 )
          goto LABEL_176;
        v71 = *p_SvtImg;
        targetId = v70->fields.targetId;
        targetCnt = v70->fields.targetCnt;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                            v71,
                                                            targetId,
                                                            targetCnt,
                                                            targetCnt,
                                                            0LL);
        *p_SvtImg = (struct UITexture_o *)Manager__loadCommandCard;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.SvtImg,
          Manager__loadCommandCard,
          v75,
          v76,
          v77,
          v78,
          v79,
          v80);
        if ( !*v32 )
          goto LABEL_176;
        QuestInformationListViewItemDraw__SetDispType_23949612(
          v81,
          (*v32)->fields.dispType,
          this->fields.SvtImg,
          manager,
          v82);
        v83 = (UnityEngine_Component_o *)this->fields.enemySp;
        if ( !v83 )
          goto LABEL_176;
        v84 = UnityEngine_Component__get_gameObject(v83, 0LL);
        if ( !v84 )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive(v84, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(v69, 0, 0LL);
        v119 = (UnityEngine_Component_o *)this->fields.enemySp;
        if ( !v119 )
          goto LABEL_176;
        v120 = UnityEngine_Component__get_gameObject(v119, 0LL);
        if ( !v120 )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive(v120, 1, 0LL);
        if ( !*v32 )
          goto LABEL_176;
        v121 = (UISprite_o *)this->fields.enemySp;
        iconId = (*v32)->fields.iconId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEnemy(v121, iconId, 0LL) )
        {
          v127 = (UnityEngine_Behaviour_o *)this->fields.enemySp;
          if ( !v127 )
            goto LABEL_176;
          UnityEngine_Behaviour__set_enabled(v127, 1, 0LL);
          enemyTexture = (UnityEngine_Behaviour_o *)this->fields.enemyTexture;
          if ( !enemyTexture )
            goto LABEL_176;
          UnityEngine_Behaviour__set_enabled(enemyTexture, 0, 0LL);
          if ( !*v32 )
            goto LABEL_176;
          QuestInformationListViewItemDraw__SetDispType(
            v129,
            (*v32)->fields.dispType,
            this->fields.enemySp,
            manager,
            v130);
        }
        else
        {
          v131 = *(QuestInformationListViewItem_o **)(v25 + 24);
          v132 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v123, v124, v125, v126);
          System_Action___ctor(
            v132,
            (Il2CppObject *)v25,
            Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__,
            0LL);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v131, v132, v133);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v32, v85);
      if ( !*v32 )
        goto LABEL_176;
      v134 = this->fields.classComp;
      if ( !v134 )
        goto LABEL_176;
      ServantClassIconComponent__SetWithClassOverWrite(
        v134,
        (*v32)->fields.targetId,
        (*v32)->fields.targetCnt,
        (*v32)->fields.classId,
        0LL);
      v135 = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
      if ( !v135 )
        goto LABEL_176;
      v136 = UnityEngine_Component__get_gameObject(v135, 0LL);
      if ( !*v32 )
        goto LABEL_176;
      if ( !v136 )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive(v136, (*v32)->fields.weeklyMissionTarget, 0LL);
      v137 = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
      if ( !v137 )
        goto LABEL_176;
      v138 = UnityEngine_Component__get_gameObject(v137, 0LL);
      if ( !*v32 )
        goto LABEL_176;
      if ( !v138 )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive(v138, (*v32)->fields.limitMissionTarget, 0LL);
      v139 = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
      if ( !v139 )
        goto LABEL_176;
      v140 = UnityEngine_Component__get_gameObject(v139, 0LL);
      if ( !*v32 )
        goto LABEL_176;
      if ( !v140 )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive(v140, (*v32)->fields.eventMissionTarget, 0LL);
      v141 = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
      if ( !v141 )
        goto LABEL_176;
      v142 = UnityEngine_Component__get_gameObject(v141, 0LL);
      if ( !*v32 || !v142 )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive(v142, (*v32)->fields.completeMissionTarget, 0LL);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v143);
    }
    else if ( !infoType )
    {
      blankImg = this->fields.blankImg;
      if ( !blankImg )
        goto LABEL_176;
      if ( v54->fields.mRewardType )
      {
        UnityEngine_GameObject__SetActive(blankImg, 0, 0LL);
        v60 = *v32;
        if ( !*v32 )
          goto LABEL_176;
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_176;
        v62 = v60->fields.mRewardType == 2 ? 2 : 1;
        ItemIconComponent__SetGift(itemIcon, v62, v60->fields.targetId, -1, 0, 0LL);
        v63 = (UnityEngine_Component_o *)this->fields.itemIcon;
        if ( !v63 )
          goto LABEL_176;
        v64 = UnityEngine_Component__get_gameObject(v63, 0LL);
        if ( !v64 )
          goto LABEL_176;
        v65 = 1;
      }
      else
      {
        UnityEngine_GameObject__SetActive(blankImg, 1, 0LL);
        v86 = (UnityEngine_Component_o *)this->fields.itemIcon;
        if ( !v86 )
          goto LABEL_176;
        v64 = UnityEngine_Component__get_gameObject(v86, 0LL);
        if ( !v64 )
          goto LABEL_176;
        v65 = 0;
      }
      UnityEngine_GameObject__SetActive(v64, v65, 0LL);
      if ( !*v32 )
        goto LABEL_176;
      if ( (*v32)->fields.mRewardType != 2 )
        goto LABEL_69;
      v87 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v87 )
      {
        v88 = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v87,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( *v32 )
        {
          v89 = v88;
          if ( v88 )
          {
            if ( ItemMaster__isQP(v88, (*v32)->fields.targetId, 0LL) )
              goto LABEL_69;
            if ( !*v32 )
              goto LABEL_176;
            if ( ItemMaster__isFriendPoint(v89, (*v32)->fields.targetId, 0LL) )
              goto LABEL_69;
            if ( !*v32 )
              goto LABEL_176;
            if ( ItemMaster__isEventPoint(v89, (*v32)->fields.targetId, 0LL) )
            {
LABEL_69:
              holdNumTitleLb = (UnityEngine_Component_o *)this->fields.holdNumTitleLb;
              if ( !holdNumTitleLb )
                goto LABEL_176;
              v91 = UnityEngine_Component__get_gameObject(holdNumTitleLb, 0LL);
              if ( !v91 )
                goto LABEL_176;
              UnityEngine_GameObject__SetActive(v91, 0, 0LL);
              holdNumCntLb = (UnityEngine_Component_o *)this->fields.holdNumCntLb;
              if ( !holdNumCntLb )
                goto LABEL_176;
              goto LABEL_116;
            }
            if ( !*v32 )
              goto LABEL_176;
            if ( ItemMaster__isMana(v89, (*v32)->fields.targetId, 0LL) )
            {
              SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
              if ( !SelfUserGame )
                goto LABEL_176;
              p_mana = &SelfUserGame->fields.mana;
            }
            else
            {
              if ( !*v32 )
                goto LABEL_176;
              if ( ItemMaster__isRarePri(v89, (*v32)->fields.targetId, 0LL) )
              {
                v146 = UserGameMaster__getSelfUserGame(0LL);
                if ( !v146 )
                  goto LABEL_176;
                p_mana = &v146->fields.rarePri;
              }
              else
              {
                if ( !*v32 )
                  goto LABEL_176;
                if ( ItemMaster__isStone(v89, (*v32)->fields.targetId, 0LL) )
                {
                  v147 = UserGameMaster__getSelfUserGame(0LL);
                  if ( !v147 )
                    goto LABEL_176;
                  p_mana = &v147->fields.stone;
                }
                else
                {
                  v148 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !v148 )
                    goto LABEL_176;
                  v149 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)v148,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  UserId = NetworkManager__get_UserId(0LL);
                  if ( !*v32 )
                    goto LABEL_176;
                  if ( !v149 )
                    goto LABEL_176;
                  EntityDefinitely = UserItemMaster__GetEntityDefinitely(v149, UserId, (*v32)->fields.targetId, 0LL);
                  if ( !EntityDefinitely )
                    goto LABEL_176;
                  p_mana = &EntityDefinitely->fields.num;
                }
              }
            }
            v152 = *p_mana;
            v153 = this->fields.holdNumTitleLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v154 = LocalizationManager__Get((System_String_o *)StringLiteral_12066, 0LL);
            if ( v153 )
            {
              UILabel__set_text(v153, v154, 0LL);
              v155 = this->fields.holdNumCntLb;
              NumberFormat = LocalizationManager__GetNumberFormat(v152, 0LL);
              if ( v155 )
              {
                UILabel__set_text(v155, NumberFormat, 0LL);
                v157 = (UnityEngine_Component_o *)this->fields.holdNumTitleLb;
                if ( v157 )
                {
                  v158 = UnityEngine_Component__get_gameObject(v157, 0LL);
                  if ( v158 )
                  {
                    UnityEngine_GameObject__SetActive(v158, 1, 0LL);
                    v159 = (UnityEngine_Component_o *)this->fields.holdNumCntLb;
                    if ( v159 )
                    {
                      v117 = UnityEngine_Component__get_gameObject(v159, 0LL);
                      if ( v117 )
                      {
                        v118 = 1;
LABEL_118:
                        UnityEngine_GameObject__SetActive(v117, v118, 0LL);
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
      goto LABEL_176;
    }
  }
}


void __fastcall QuestInformationListViewItemDraw__UpdateTargetPosition(
        QuestInformationListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *completeMissionTarget; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *v9; // x20
  QuestInformationListViewItemDraw_c *v10; // x8
  struct System_Single_array *TARGET_POSITION; // x8
  unsigned int v12; // w21
  UnityEngine_Component_o *limitMissionTarget; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x20
  QuestInformationListViewItemDraw_c *v17; // x8
  struct System_Single_array *v18; // x8
  UnityEngine_Component_o *eventMissionTarget; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x20
  QuestInformationListViewItemDraw_c *v23; // x8
  struct System_Single_array *v24; // x8
  UnityEngine_Component_o *weeklyMissionTarget; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x19
  QuestInformationListViewItemDraw_c *v29; // x8
  struct System_Single_array *v30; // x8

  if ( (byte_40F95B3 & 1) == 0 )
  {
    sub_B16FFC(&QuestInformationListViewItemDraw_TypeInfo, method);
    byte_40F95B3 = 1;
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !gameObject )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    v5 = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
    if ( !v5 )
      goto LABEL_45;
    v6 = UnityEngine_Component__get_gameObject(v5, 0LL);
    v9 = v6;
    v10 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v10 = QuestInformationListViewItemDraw_TypeInfo;
    }
    TARGET_POSITION = v10->static_fields->TARGET_POSITION;
    if ( !TARGET_POSITION )
      goto LABEL_45;
    if ( !TARGET_POSITION->max_length )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPositionY(v9, TARGET_POSITION->m_Items[1], 0LL);
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  limitMissionTarget = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
  if ( !limitMissionTarget )
    goto LABEL_45;
  v14 = UnityEngine_Component__get_gameObject(limitMissionTarget, 0LL);
  if ( !v14 )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf(v14, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
    if ( !v15 )
      goto LABEL_45;
    v6 = UnityEngine_Component__get_gameObject(v15, 0LL);
    v16 = v6;
    v17 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v17 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v18 = v17->static_fields->TARGET_POSITION;
    if ( !v18 )
      goto LABEL_45;
    if ( v12 >= v18->max_length )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPositionY(v16, v18->m_Items[++v12], 0LL);
  }
  eventMissionTarget = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
  if ( !eventMissionTarget )
    goto LABEL_45;
  v20 = UnityEngine_Component__get_gameObject(eventMissionTarget, 0LL);
  if ( !v20 )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf(v20, 0LL) )
  {
    v21 = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
    if ( !v21 )
      goto LABEL_45;
    v6 = UnityEngine_Component__get_gameObject(v21, 0LL);
    v22 = v6;
    v23 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v23 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v24 = v23->static_fields->TARGET_POSITION;
    if ( !v24 )
      goto LABEL_45;
    if ( v12 >= v24->max_length )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPositionY(v22, v24->m_Items[++v12], 0LL);
  }
  weeklyMissionTarget = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
  if ( !weeklyMissionTarget )
    goto LABEL_45;
  v26 = UnityEngine_Component__get_gameObject(weeklyMissionTarget, 0LL);
  if ( !v26 )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf(v26, 0LL) )
  {
    v27 = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
    if ( v27 )
    {
      v6 = UnityEngine_Component__get_gameObject(v27, 0LL);
      v28 = v6;
      v29 = QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v29 = QuestInformationListViewItemDraw_TypeInfo;
      }
      v30 = v29->static_fields->TARGET_POSITION;
      if ( v30 )
      {
        if ( v12 < v30->max_length )
        {
          GameObjectExtensions__SetLocalPositionY(v28, v30->m_Items[v12 + 1], 0LL);
          return;
        }
LABEL_46:
        sub_B17100(v6, v7, v8);
        sub_B170A0();
      }
    }
LABEL_45:
    sub_B170D4();
  }
}


void __fastcall QuestInformationListViewItemDraw___SetEnemyName_b__33_0(
        QuestInformationListViewItemDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardWaitTimeSetting_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Component_o *textLb; // x8
  UILabel_o *v10; // x19
  UnityEngine_Transform_o *transform; // x20

  if ( (byte_40F95BB & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, assetData);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_21532, v7);
    byte_40F95BB = 1;
  }
  if ( !assetData
    || (Object_WarBoardWaitTimeSetting = AssetData__GetObject_WarBoardWaitTimeSetting_(
                                           assetData,
                                           (System_String_o *)StringLiteral_21532,
                                           (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784),
        (textLb = (UnityEngine_Component_o *)this->fields.textLb) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = (UILabel_o *)Object_WarBoardWaitTimeSetting;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    v10,
    transform,
    (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass26_0___ctor(
        QuestInformationListViewItemDraw___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass26_0___SetItem_b__0(
        QuestInformationListViewItemDraw___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct QuestInformationListViewItemDraw_o *_4__this; // x8
  UnityEngine_Behaviour_o *enemySp; // x0
  struct QuestInformationListViewItemDraw_o *v5; // x8
  UnityEngine_Behaviour_o *enemyTexture; // x0
  struct QuestInformationListViewItem_o *item; // x8
  struct QuestInformationListViewItemDraw_o *v8; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (enemySp = (UnityEngine_Behaviour_o *)_4__this->fields.enemySp) == 0LL
    || (UnityEngine_Behaviour__set_enabled(enemySp, 0, 0LL), (v5 = this->fields.__4__this) == 0LL)
    || (enemyTexture = (UnityEngine_Behaviour_o *)v5->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled(enemyTexture, 1, 0LL), (item = this->fields.item) == 0LL)
    || (v8 = this->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(v8, item->fields.dispType, v8->fields.enemyTexture, 0LL);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass31_0___ctor(
        QuestInformationListViewItemDraw___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestInformationListViewItemDraw___c__DisplayClass31_0___LoadEnemyTexture_b__0(
        QuestInformationListViewItemDraw___c__DisplayClass31_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct QuestInformationListViewItemDraw_o *_4__this; // x0
  UnityEngine_Shader_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UnityEngine_Material_o *v21; // x20
  struct QuestInformationListViewItemDraw_o *v22; // x8
  struct UITexture_o *enemyTexture; // x0
  struct QuestInformationListViewItemDraw_o *v24; // x8
  AssetData_o *enemyIconAssetData; // x0
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0
  struct QuestInformationListViewItemDraw_o *v27; // x8
  AssetData_o *v28; // x21
  System_String_o *v29; // x0
  UnityEngine_Texture_o *v30; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FA305 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, assetData);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_16070, v12);
    sub_B16FFC(&StringLiteral_4519, v13);
    sub_B16FFC(&StringLiteral_15952, v14);
    byte_40FA305 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this->fields.enemyIconAssetData = assetData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&_4__this->fields.enemyIconAssetData,
    (System_Int32_array **)assetData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519, 0LL);
  v21 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v17, v18, v19, v20);
  UnityEngine_Material___ctor(v21, v16, 0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_13;
  enemyTexture = v22->fields.enemyTexture;
  if ( !enemyTexture )
    goto LABEL_13;
  ((void (__fastcall *)(struct UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))enemyTexture->klass->vtable._25_set_material.method)(
    enemyTexture,
    v21,
    enemyTexture->klass->vtable._26_get_mainTexture.methodPtr);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_13;
  enemyIconAssetData = v24->fields.enemyIconAssetData;
  if ( !enemyIconAssetData )
    goto LABEL_13;
  Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                              enemyIconAssetData,
                                                              v24->fields.enemyIconName,
                                                              (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
  if ( !v21
    || (UnityEngine_Material__set_mainTexture(v21, Object_WarBoardWaitTimeSetting, 0LL),
        (v27 = this->fields.__4__this) == 0LL)
    || (v28 = v27->fields.enemyIconAssetData,
        v29 = System_String__Concat_43743732(v27->fields.enemyIconName, (System_String_o *)StringLiteral_16070, 0LL),
        !v28)
    || (v30 = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                         v28,
                                         v29,
                                         (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808),
        UnityEngine_Material__SetTexture(v21, (System_String_o *)StringLiteral_15952, v30, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}