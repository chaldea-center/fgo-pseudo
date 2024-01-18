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
  System_Array_o *v55; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct UnityEngine_Color_o v63; // [xsp+0h] [xbp-20h] BYREF
  System_RuntimeFieldHandle_o v64; // 0:w1.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4186EAC & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&float___TypeInfo, v8);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58,
      v9);
    sub_B2C35C(&StringLiteral_18370/*"enemy_icon_"*/, v10);
    sub_B2C35C(&StringLiteral_21643/*"questinfo_enemy_brank"*/, v11);
    sub_B2C35C(&StringLiteral_15014/*"Unlit/Transparent Colored"*/, v12);
    sub_B2C35C(&StringLiteral_23965/*"？？？"*/, v13);
    sub_B2C35C(&StringLiteral_6000/*"Enemys/Icon/"*/, v14);
    byte_4186EAC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v16 = (System_Int32_array **)StringLiteral_21643/*"questinfo_enemy_brank"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21643/*"questinfo_enemy_brank"*/;
  sub_B2C2F8(static_fields, v16, v2, v3, v4, v5, v6, v7);
  v17 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_23965/*"？？？"*/;
  v17->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_23965/*"？？？"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v17->ENEMY_UNKNOWN_NAME, v18, v19, v20, v21, v22, v23, v24);
  v25 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_6000/*"Enemys/Icon/"*/;
  v25->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6000/*"Enemys/Icon/"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v25->ENEMY_ICON_TEXTURE_PATH, v26, v27, v28, v29, v30, v31, v32);
  v33 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_18370/*"enemy_icon_"*/;
  v33->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18370/*"enemy_icon_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v33->ENEMY_ICON_TEXTURE_PREFIX, v34, v35, v36, v37, v38, v39, v40);
  v41 = QuestInformationListViewItemDraw_TypeInfo;
  v65.fields.a = 1.0;
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID = 12;
  v41->static_fields->DEF_FONT_SIZE = 15;
  v65.fields.r = 0.05;
  v63 = (struct UnityEngine_Color_o)0LL;
  v65.fields.g = 0.05;
  v65.fields.b = 0.05;
  UnityEngine_Color___ctor(v65, v42, v43, v44, v45, (const MethodInfo *)&v63);
  v46 = QuestInformationListViewItemDraw_TypeInfo;
  QuestInformationListViewItemDraw_TypeInfo->static_fields->SHADOW_COLOR = v63;
  v47 = v46->static_fields;
  v48 = (System_Int32_array **)StringLiteral_15014/*"Unlit/Transparent Colored"*/;
  v47->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15014/*"Unlit/Transparent Colored"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v47->DEFAULT_SHADER, v48, v49, v50, v51, v52, v53, v54);
  v55 = (System_Array_o *)sub_B2C374(float___TypeInfo, 4LL);
  v64.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v55, v64, 0LL);
  v56 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v56->TARGET_POSITION = (struct System_Single_array *)v55;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v56->TARGET_POSITION,
    (System_Int32_array **)v55,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
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
  AssetLoader_LoadEndDataHandler_o *v41; // x20
  int32_t v42; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4186EA9 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, item);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B2C35C(&Method_QuestInformationListViewItemDraw___c__DisplayClass31_0__LoadEnemyTexture_b__0__, v11);
    sub_B2C35C(&QuestInformationListViewItemDraw___c__DisplayClass31_0_TypeInfo, v12);
    byte_4186EA9 = 1;
  }
  v13 = sub_B2C42C(QuestInformationListViewItemDraw___c__DisplayClass31_0_TypeInfo);
  QuestInformationListViewItemDraw___c__DisplayClass31_0___ctor(
    (QuestInformationListViewItemDraw___c__DisplayClass31_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_16;
  *(_QWORD *)(v13 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v28);
  Instance = (CommonUI_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  }
  if ( !item )
    goto LABEL_16;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v42 = iconId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v32 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v31, 0LL);
  this->fields.enemyIconName = v32;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_B2C2F8((BattleServantConfConponent_o *)p_enemyIconName, (System_Int32_array **)v32, v34, v35, v36, v37, v38, v39);
  v40 = System_String__Concat_44305532(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v41,
    (Il2CppObject *)v13,
    Method_QuestInformationListViewItemDraw___c__DisplayClass31_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v40, v41, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B2C434(Instance, v15);
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

  if ( (byte_4186EAA & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, v3);
    byte_4186EAA = 1;
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
    v6 = System_String__Concat_44305532(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (BattleServantConfConponent_o *)&this->fields.enemyIconAssetData;
    sub_B2C2F8(p_enemyIconAssetData, 0LL, v8, v9, v10, v11, v12, v13);
    p_enemyIconAssetData->monitor = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_enemyIconName, 0LL, v14, v15, v16, v17, v18, v19);
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
  QuestInformationListViewItemDraw_c *v9; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x8
  int v15; // s0
  UnityEngine_Material_o *v19; // x20
  UnityEngine_Material_o *v20; // x21

  if ( (byte_4186EA6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, v8);
    byte_4186EA6 = 1;
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
          v19 = QuestInformationListViewManager__NewChocoMaterialForSprite(lManager, *(const MethodInfo **)&dispTp);
          v20 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_40686000(v20, v19, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v20, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B2C434(v9, *(_QWORD *)&dispTp);
    case 2:
      v9 = QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v9 = QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( sp )
      {
        static_fields = v9->static_fields;
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
  QuestInformationListViewItemDraw_c *v6; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4186EA8 & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    byte_4186EA8 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      v6 = QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v6 = QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( !texture )
LABEL_15:
        sub_B2C434(v6, *(_QWORD *)&dispTp);
      static_fields = v6->static_fields;
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
void __fastcall QuestInformationListViewItemDraw__SetDispType_23906852(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UnityEngine_Texture_o *name; // x0
  int v10; // s0
  System_String_o *v14; // x20
  QuestInformationListViewItemDraw_c *v15; // x0
  int v16; // s0
  UnityEngine_Material_o *v20; // x20
  UnityEngine_Shader_o *v21; // x1

  if ( (byte_4186EA7 & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, v8);
    byte_4186EA7 = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v16, 0LL);
      name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                        texture,
                                        0LL,
                                        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( lManager )
      {
        v20 = QuestInformationListViewManager__NewChocoMaterialForTexture(lManager, *(const MethodInfo **)&dispTp);
        name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                          texture,
                                          texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v20 )
        {
          UnityEngine_Material__SetTexture(v20, (System_String_o *)StringLiteral_16013/*"_MainTex"*/, name, 0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v20,
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
    *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v10, 0LL);
      ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
        texture,
        0LL,
        texture->klass->vtable._26_get_mainTexture.methodPtr);
      name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                        texture,
                                        texture->klass->vtable._29_set_shader.methodPtr);
      if ( name )
      {
        name = (UnityEngine_Texture_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)name, 0LL);
        v14 = (System_String_o *)name;
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( v14 )
        {
          if ( !System_String__Equals_44292872(
                  v14,
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
    sub_B2C434(name, *(_QWORD *)&dispTp);
  }
  name = (UnityEngine_Texture_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
    name = (UnityEngine_Texture_o *)QuestInformationListViewItemDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_32;
  UIWidget__set_color(
    (UIWidget_o *)texture,
    *(UnityEngine_Color_o *)(*(_QWORD *)&name[7].fields.m_CachedPtr + 40LL),
    0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                    texture,
                                    texture->klass->vtable._29_set_shader.methodPtr);
  if ( !name )
    goto LABEL_32;
  name = (UnityEngine_Texture_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)name, 0LL);
  if ( !name )
    goto LABEL_32;
  if ( !System_String__Equals_44292872(
          (System_String_o *)name,
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
    v21 = UnityEngine_Shader__Find(v15->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v21,
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
  if ( (byte_4186EAB & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, item);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__33_0__, v6);
    this = (QuestInformationListViewItemDraw_o *)sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v7);
    byte_4186EAB = 1;
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
    v10 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v10,
      (Il2CppObject *)v4,
      Method_QuestInformationListViewItemDraw__SetEnemyName_b__33_0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(NameEffectPath, v10, 1, 0LL);
  }
  this = (QuestInformationListViewItemDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_14:
    sub_B2C434(this, item);
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
  int64_t Instance; // x0
  QuestInformationListViewManager_c *v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  QuestInformationListViewItem_o **v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Object_o *completeMissionTarget; // x21
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int v42; // w8
  int64_t v43; // x24
  unsigned int v44; // w26
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47; // x8
  QuestInformationListViewItem_o *v48; // x8
  struct ListViewObject_o *viewObject; // x9
  QuestInformationListViewManager_o *manager; // x21
  __int64 v51; // x10
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v53; // x8
  int32_t v54; // w1
  bool v55; // w1
  int32_t mEnemyType; // w24
  struct UITexture_o **p_SvtImg; // x23
  QuestInformationListViewItem_o *v58; // x8
  UITexture_o *v59; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x4
  const MethodInfo *v70; // x2
  ItemMaster_o *v71; // x21
  __int64 v72; // x1
  TerminalSceneComponent_c *v73; // x0
  UnityEngine_Object_o *mInstance; // x22
  UISprite_o *enemySp; // x22
  __int64 v76; // x8
  UISprite_o *v77; // x22
  QuestInformationListViewItemDraw_o *v78; // x0
  const MethodInfo *v79; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  bool v81; // w1
  UISprite_o *v82; // x23
  int32_t iconId; // w24
  const MethodInfo *v84; // x4
  QuestInformationListViewItem_o *v85; // x21
  System_Action_o *v86; // x23
  const MethodInfo *v87; // x3
  const MethodInfo *v88; // x1
  int32_t *v89; // x8
  UserItemMaster_o *v90; // x21
  int32_t v91; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21
  __int64 v94; // x0
  QuestInformationListViewItemDraw_o *v95; // x0
  int32_t v96; // w1
  UISpriteAltMat_o *v97; // x2
  QuestInformationListViewManager_o *v98; // x3
  const MethodInfo *v99; // x4

  if ( (byte_4186EA4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, item);
    sub_B2C35C(&AtlasManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_MstMissionMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, v15);
    sub_B2C35C(&QuestInformationListViewManager_TypeInfo, v16);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v19);
    sub_B2C35C(&Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__, v20);
    sub_B2C35C(&QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_12117/*"SHOP_BUY_ITEM_HOLD"*/, v22);
    sub_B2C35C(&StringLiteral_1/*""*/, v23);
    byte_4186EA4 = 1;
  }
  v24 = sub_B2C42C(QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  QuestInformationListViewItemDraw___c__DisplayClass26_0___ctor(
    (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_176;
  *(_QWORD *)(v24 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 16), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 24) = item;
  v33 = (QuestInformationListViewItem_o **)(v24 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)item, v34, v35, v36, v37, v38, v39);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(completeMissionTarget, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_176;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_176;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_176;
    Instance = (int64_t)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_176;
    v42 = *(_DWORD *)(Instance + 24);
    v43 = Instance;
    if ( v42 >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= v42 )
          goto LABEL_177;
        v45 = *(_QWORD *)(v43 + 8LL * (int)v44 + 32);
        if ( !v45 )
          goto LABEL_176;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_176;
        Instance = (int64_t)EventMissionMaster__getCompleteMissionList(
                              MasterData_WarQuestSelectionMaster,
                              *(_DWORD *)(v45 + 20),
                              0LL);
        if ( !Instance )
          goto LABEL_176;
        v46 = *(_QWORD *)(Instance + 24);
        if ( v46 )
          break;
        v42 = *(_DWORD *)(v43 + 24);
        if ( (int)++v44 >= v42 )
          goto LABEL_25;
      }
      if ( !(_DWORD)v46 )
      {
LABEL_177:
        v94 = sub_B2C460(Instance);
        sub_B2C400(v94, 0LL);
      }
      v47 = *(_QWORD *)(Instance + 32);
      if ( !v47 )
        goto LABEL_176;
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v47 + 28), 0LL);
    }
  }
LABEL_25:
  v48 = *v33;
  if ( !*v33 )
    goto LABEL_176;
  viewObject = v48->fields.viewObject;
  if ( !viewObject )
    goto LABEL_176;
  manager = (QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( manager
    && ((v26 = QuestInformationListViewManager_TypeInfo,
         v51 = *(&QuestInformationListViewManager_TypeInfo->_2.bitflags2 + 1),
         *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v51)
     || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[v51 - 1] != QuestInformationListViewManager_TypeInfo) )
  {
    v95 = (QuestInformationListViewItemDraw_o *)sub_B2C728(manager);
    QuestInformationListViewItemDraw__SetDispType(v95, v96, v97, v98, v99);
  }
  else if ( mode )
  {
    infoType = v48->fields.infoType;
    if ( infoType == 1 )
    {
      mEnemyType = v48->fields.mEnemyType;
      if ( !mEnemyType )
      {
        Instance = (int64_t)this->fields.SvtImg;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v72);
          byte_4183C65 = 1;
        }
        v73 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v73 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v73->static_fields->mInstance;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
        {
          enemySp = (UISprite_o *)this->fields.enemySp;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v26);
            byte_4183C65 = 1;
          }
          Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          }
          v76 = **(_QWORD **)(Instance + 184);
          if ( !v76 || !enemySp )
            goto LABEL_176;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v76 + 296), 0LL);
        }
        v77 = (UISprite_o *)this->fields.enemySp;
        Instance = (int64_t)QuestInformationListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( v77 )
        {
          UISprite__set_spriteName(v77, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0LL);
          QuestInformationListViewItemDraw__SetDispType(v78, 1, this->fields.enemySp, manager, v79);
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
                            if ( *v33 )
                            {
                              if ( Instance )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (*v33)->fields.eventMissionTarget,
                                  0LL);
                                Instance = (int64_t)this->fields.completeMissionTarget;
                                if ( Instance )
                                {
LABEL_116:
                                  Instance = (int64_t)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                                  if ( !Instance )
                                    goto LABEL_176;
                                  v81 = 0;
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
        sub_B2C434(Instance, v26);
      }
      p_SvtImg = &this->fields.SvtImg;
      Instance = (int64_t)this->fields.SvtImg;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !Instance )
        goto LABEL_176;
      if ( mEnemyType == 1 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        v58 = *v33;
        if ( !*v33 )
          goto LABEL_176;
        v59 = *p_SvtImg;
        targetId = v58->fields.targetId;
        targetCnt = v58->fields.targetCnt;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                            v59,
                                                            targetId,
                                                            targetCnt,
                                                            targetCnt,
                                                            0LL);
        *p_SvtImg = (struct UITexture_o *)Manager__loadCommandCard;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.SvtImg,
          Manager__loadCommandCard,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
        if ( !*v33 )
          goto LABEL_176;
        QuestInformationListViewItemDraw__SetDispType_23906852(
          (QuestInformationListViewItemDraw_o *)Instance,
          (*v33)->fields.dispType,
          this->fields.SvtImg,
          manager,
          v69);
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        if ( !*v33 )
          goto LABEL_176;
        v82 = (UISprite_o *)this->fields.enemySp;
        iconId = (*v33)->fields.iconId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEnemy(v82, iconId, 0LL) )
        {
          Instance = (int64_t)this->fields.enemySp;
          if ( !Instance )
            goto LABEL_176;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.enemyTexture;
          if ( !Instance )
            goto LABEL_176;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
          if ( !*v33 )
            goto LABEL_176;
          QuestInformationListViewItemDraw__SetDispType(
            (QuestInformationListViewItemDraw_o *)Instance,
            (*v33)->fields.dispType,
            this->fields.enemySp,
            manager,
            v84);
        }
        else
        {
          v85 = *(QuestInformationListViewItem_o **)(v24 + 24);
          v86 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v86,
            (Il2CppObject *)v24,
            Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__,
            0LL);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v85, v86, v87);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v33, v70);
      if ( !*v33 )
        goto LABEL_176;
      Instance = (int64_t)this->fields.classComp;
      if ( !Instance )
        goto LABEL_176;
      ServantClassIconComponent__SetWithClassOverWrite(
        (ServantClassIconComponent_o *)Instance,
        (*v33)->fields.targetId,
        (*v33)->fields.targetCnt,
        (*v33)->fields.classId,
        0LL);
      Instance = (int64_t)this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v33 )
        goto LABEL_176;
      if ( !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v33)->fields.weeklyMissionTarget, 0LL);
      Instance = (int64_t)this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v33 )
        goto LABEL_176;
      if ( !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v33)->fields.limitMissionTarget, 0LL);
      Instance = (int64_t)this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v33 )
        goto LABEL_176;
      if ( !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v33)->fields.eventMissionTarget, 0LL);
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v33 || !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v33)->fields.completeMissionTarget, 0LL);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v88);
    }
    else if ( !infoType )
    {
      Instance = (int64_t)this->fields.blankImg;
      if ( !Instance )
        goto LABEL_176;
      if ( v48->fields.mRewardType )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        v53 = *v33;
        if ( !*v33 )
          goto LABEL_176;
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_176;
        v54 = v53->fields.mRewardType == 2 ? 2 : 1;
        ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v54, v53->fields.targetId, -1, 0, 0LL);
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        v55 = 1;
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        v55 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v55, 0LL);
      if ( !*v33 )
        goto LABEL_176;
      if ( (*v33)->fields.mRewardType != 2 )
        goto LABEL_69;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( *v33 )
        {
          v71 = (ItemMaster_o *)Instance;
          if ( Instance )
          {
            Instance = ItemMaster__isQP((ItemMaster_o *)Instance, (*v33)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_69;
            if ( !*v33 )
              goto LABEL_176;
            Instance = ItemMaster__isFriendPoint(v71, (*v33)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_69;
            if ( !*v33 )
              goto LABEL_176;
            Instance = ItemMaster__isEventPoint(v71, (*v33)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
            {
LABEL_69:
              Instance = (int64_t)this->fields.holdNumTitleLb;
              if ( !Instance )
                goto LABEL_176;
              Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_176;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              Instance = (int64_t)this->fields.holdNumCntLb;
              if ( !Instance )
                goto LABEL_176;
              goto LABEL_116;
            }
            if ( !*v33 )
              goto LABEL_176;
            Instance = ItemMaster__isMana(v71, (*v33)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_176;
              v89 = (int32_t *)(Instance + 176);
            }
            else
            {
              if ( !*v33 )
                goto LABEL_176;
              Instance = ItemMaster__isRarePri(v71, (*v33)->fields.targetId, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( !Instance )
                  goto LABEL_176;
                v89 = (int32_t *)(Instance + 180);
              }
              else
              {
                if ( !*v33 )
                  goto LABEL_176;
                if ( ItemMaster__isStone(v71, (*v33)->fields.targetId, 0LL) )
                {
                  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                  if ( !Instance )
                    goto LABEL_176;
                  v89 = (int32_t *)(Instance + 168);
                }
                else
                {
                  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_176;
                  v90 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*v33 )
                    goto LABEL_176;
                  if ( !v90 )
                    goto LABEL_176;
                  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v90, Instance, (*v33)->fields.targetId, 0LL);
                  if ( !Instance )
                    goto LABEL_176;
                  v89 = (int32_t *)(Instance + 28);
                }
              }
            }
            v91 = *v89;
            holdNumTitleLb = this->fields.holdNumTitleLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12117/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
            if ( holdNumTitleLb )
            {
              UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
              holdNumCntLb = this->fields.holdNumCntLb;
              Instance = (int64_t)LocalizationManager__GetNumberFormat(v91, 0LL);
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
                        v81 = 1;
LABEL_118:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v81, 0LL);
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
  __int64 v17; // x0

  if ( (byte_4186EA5 & 1) == 0 )
  {
    sub_B2C35C(&QuestInformationListViewItemDraw_TypeInfo, method);
    byte_4186EA5 = 1;
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_45;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.completeMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_45;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
    v4 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v5 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v5 = QuestInformationListViewItemDraw_TypeInfo;
    }
    TARGET_POSITION = v5->static_fields->TARGET_POSITION;
    if ( !TARGET_POSITION )
      goto LABEL_45;
    if ( !TARGET_POSITION->max_length )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPositionY(v4, TARGET_POSITION->m_Items[1], 0LL);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_45;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.limitMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_45;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
    v8 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v9 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v9 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v10 = v9->static_fields->TARGET_POSITION;
    if ( !v10 )
      goto LABEL_45;
    if ( v7 >= v10->max_length )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPositionY(v8, v10->m_Items[++v7], 0LL);
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_45;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)completeMissionTarget, 0LL) )
  {
    completeMissionTarget = (UnityEngine_Component_o *)this->fields.eventMissionTarget;
    if ( !completeMissionTarget )
      goto LABEL_45;
    completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
    v11 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v12 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v12 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v13 = v12->static_fields->TARGET_POSITION;
    if ( !v13 )
      goto LABEL_45;
    if ( v7 >= v13->max_length )
      goto LABEL_46;
    GameObjectExtensions__SetLocalPositionY(v11, v13->m_Items[++v7], 0LL);
  }
  completeMissionTarget = (UnityEngine_Component_o *)this->fields.weeklyMissionTarget;
  if ( !completeMissionTarget )
    goto LABEL_45;
  completeMissionTarget = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(completeMissionTarget, 0LL);
  if ( !completeMissionTarget )
    goto LABEL_45;
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
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
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
LABEL_46:
        v17 = sub_B2C460(completeMissionTarget);
        sub_B2C400(v17, 0LL);
      }
    }
LABEL_45:
    sub_B2C434(completeMissionTarget, method);
  }
}


void __fastcall QuestInformationListViewItemDraw___SetEnemyName_b__33_0(
        QuestInformationListViewItemDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *textLb; // x8
  UILabel_o *v9; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4186EAD & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, assetData);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    this = (QuestInformationListViewItemDraw_o *)sub_B2C35C(&StringLiteral_21624/*"quest_info"*/, v7);
    byte_4186EAD = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_21624/*"quest_info"*/,
                                                       (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_B2C434(this, assetData);
  }
  v9 = (UILabel_o *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    v9,
    transform,
    (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
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
  QuestInformationListViewItemDraw___c__DisplayClass26_0_o *v3; // x19
  struct QuestInformationListViewItemDraw_o *v4; // x8
  struct QuestInformationListViewItem_o *item; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)v4->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL), (item = v3->fields.item) == 0LL)
    || (this = (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)v3->fields.__4__this) == 0LL )
  {
LABEL_8:
    sub_B2C434(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[4].monitor,
    0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct QuestInformationListViewItemDraw_o *v13; // x8
  struct QuestInformationListViewItemDraw_o *v14; // x8
  struct QuestInformationListViewItemDraw_o *v15; // x8
  AssetData_o *enemyIconAssetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_41852FE & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, assetData);
    sub_B2C35C(&UnityEngine_Material_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_16133/*"_alpha"*/, v7);
    sub_B2C35C(&StringLiteral_4537/*"Custom/SpriteWithMask"*/, v8);
    sub_B2C35C(&StringLiteral_16015/*"_MaskTex"*/, v9);
    byte_41852FE = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].fields.attrib = (struct System_String_o *)assetData;
  sub_B2C2F8(&_4__this[1].fields.attrib, assetData);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4537/*"Custom/SpriteWithMask"*/, 0LL);
  v12 = (UnityEngine_Material_o *)sub_B2C42C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v12, v11, 0LL);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_13;
  _4__this = (AssetData_o *)v13->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v12,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_13;
  _4__this = v14->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                              _4__this,
                              v14->fields.enemyIconName,
                              (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
  if ( !v12
    || (UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v15 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v15->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_44305532(
                                    v15->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16133/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    enemyIconAssetData,
                                                                    (System_String_o *)_4__this,
                                                                    (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648),
        UnityEngine_Material__SetTexture(
          v12,
          (System_String_o *)StringLiteral_16015/*"_MaskTex"*/,
          Object_WarBoardWaitTimeSetting,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_B2C434(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}