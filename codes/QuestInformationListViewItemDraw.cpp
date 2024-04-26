void __fastcall QuestInformationListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct QuestInformationListViewItemDraw_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
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
  QuestInformationListViewItemDraw_c *v33; // x8
  float v34; // s4
  float v35; // s5
  float v36; // s6
  float v37; // s7
  QuestInformationListViewItemDraw_c *v38; // x8
  struct QuestInformationListViewItemDraw_StaticFields *v39; // x0
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Array_o *v47; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct UnityEngine_Color_o v55; // [xsp+0h] [xbp-20h] BYREF
  System_RuntimeFieldHandle_o v56; // 0:w1.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435250D & 1) == 0 )
  {
    sub_B70694(&QuestInformationListViewItemDraw_TypeInfo);
    sub_B70694(&float___TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58);
    sub_B70694(&StringLiteral_18649/*"enemy_icon_"*/);
    sub_B70694(&StringLiteral_22002/*"questinfo_enemy_brank"*/);
    sub_B70694(&StringLiteral_15201/*"Unlit/Transparent Colored"*/);
    sub_B70694(&StringLiteral_24365/*"？？？"*/);
    sub_B70694(&StringLiteral_6092/*"Enemys/Icon/"*/);
    byte_435250D = 1;
  }
  static_fields = (BattleServantConfConponent_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_22002/*"questinfo_enemy_brank"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22002/*"questinfo_enemy_brank"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_24365/*"？？？"*/;
  v9->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_24365/*"？？？"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->ENEMY_UNKNOWN_NAME, v10, v11, v12, v13, v14, v15, v16);
  v17 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6092/*"Enemys/Icon/"*/;
  v17->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6092/*"Enemys/Icon/"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->ENEMY_ICON_TEXTURE_PATH, v18, v19, v20, v21, v22, v23, v24);
  v25 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_18649/*"enemy_icon_"*/;
  v25->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18649/*"enemy_icon_"*/;
  sub_B70630((BattleServantConfConponent_o *)&v25->ENEMY_ICON_TEXTURE_PREFIX, v26, v27, v28, v29, v30, v31, v32);
  v33 = QuestInformationListViewItemDraw_TypeInfo;
  v57.fields.a = 1.0;
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID = 12;
  v33->static_fields->DEF_FONT_SIZE = 15;
  v57.fields.r = 0.05;
  v55 = (struct UnityEngine_Color_o)0LL;
  v57.fields.g = 0.05;
  v57.fields.b = 0.05;
  UnityEngine_Color___ctor(v57, v34, v35, v36, v37, (const MethodInfo *)&v55);
  v38 = QuestInformationListViewItemDraw_TypeInfo;
  QuestInformationListViewItemDraw_TypeInfo->static_fields->SHADOW_COLOR = v55;
  v39 = v38->static_fields;
  v40 = (System_Int32_array **)StringLiteral_15201/*"Unlit/Transparent Colored"*/;
  v39->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15201/*"Unlit/Transparent Colored"*/;
  sub_B70630((BattleServantConfConponent_o *)&v39->DEFAULT_SHADER, v40, v41, v42, v43, v44, v45, v46);
  v47 = (System_Array_o *)sub_B706AC(float___TypeInfo, 4LL);
  v56.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v47, v56, 0LL);
  v48 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v48->TARGET_POSITION = (struct System_Single_array *)v47;
  sub_B70630(
    (BattleServantConfConponent_o *)&v48->TARGET_POSITION,
    (System_Int32_array **)v47,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  int32_t iconId; // w9
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v26; // x0
  struct System_String_o *v27; // x0
  struct System_String_o **p_enemyIconName; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *v35; // x19
  AssetLoader_LoadEndDataHandler_o *v36; // x20
  int32_t v37; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_435250A & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&QuestInformationListViewItemDraw_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_QuestInformationListViewItemDraw___c__DisplayClass31_0__LoadEnemyTexture_b__0__);
    sub_B70694(&QuestInformationListViewItemDraw___c__DisplayClass31_0_TypeInfo);
    byte_435250A = 1;
  }
  v7 = sub_B70764(QuestInformationListViewItemDraw___c__DisplayClass31_0_TypeInfo);
  QuestInformationListViewItemDraw___c__DisplayClass31_0___ctor(
    (QuestInformationListViewItemDraw___c__DisplayClass31_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v22);
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
  v37 = iconId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v23);
  v27 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v26, 0LL);
  this->fields.enemyIconName = v27;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_B70630((BattleServantConfConponent_o *)p_enemyIconName, (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
  v35 = System_String__Concat_44758168(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_QuestInformationListViewItemDraw___c__DisplayClass31_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v35, v36, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_16:
    sub_B7076C(Instance, v9);
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
  BattleServantConfConponent_o *p_enemyIconAssetData; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_435250B & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&QuestInformationListViewItemDraw_TypeInfo);
    byte_435250B = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v4 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
      v4 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v5 = System_String__Concat_44758168(v4->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v5, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (BattleServantConfConponent_o *)&this->fields.enemyIconAssetData;
    sub_B70630(p_enemyIconAssetData, 0LL, v7, v8, v9, v10, v11, v12);
    p_enemyIconAssetData->monitor = 0LL;
    sub_B70630((BattleServantConfConponent_o *)p_enemyIconName, 0LL, v13, v14, v15, v16, v17, v18);
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
  QuestInformationListViewItemDraw_c *v8; // x0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x8
  int v14; // s0
  UnityEngine_Material_o *v18; // x20
  UnityEngine_Material_o *v19; // x21

  if ( (byte_4352507 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Material_TypeInfo);
    sub_B70694(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4352507 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
      if ( sp )
      {
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v14, 0LL);
        if ( lManager )
        {
          v18 = QuestInformationListViewManager__NewChocoMaterialForSprite(lManager, *(const MethodInfo **)&dispTp);
          v19 = (UnityEngine_Material_o *)sub_B70764(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_41118404(v19, v18, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v19, 0LL);
          return;
        }
      }
LABEL_18:
      sub_B7076C(v8, *(_QWORD *)&dispTp);
    case 2:
      v8 = QuestInformationListViewItemDraw_TypeInfo;
      if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        v8 = QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( sp )
      {
        static_fields = v8->static_fields;
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

  if ( (byte_4352509 & 1) == 0 )
  {
    sub_B70694(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4352509 = 1;
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
        sub_B7076C(v6, *(_QWORD *)&dispTp);
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
void __fastcall QuestInformationListViewItemDraw__SetDispType_26106568(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  UnityEngine_Texture_o *name; // x0
  int v9; // s0
  System_String_o *v13; // x20
  QuestInformationListViewItemDraw_c *v14; // x0
  int v15; // s0
  UnityEngine_Material_o *v19; // x20
  UnityEngine_Shader_o *v20; // x1

  if ( (byte_4352508 & 1) == 0 )
  {
    sub_B70694(&QuestInformationListViewItemDraw_TypeInfo);
    sub_B70694(&StringLiteral_16241/*"_MainTex"*/);
    byte_4352508 = 1;
  }
  if ( dispTp == 3 )
  {
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
    if ( texture )
    {
      UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v15, 0LL);
      name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                        texture,
                                        0LL,
                                        texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( lManager )
      {
        v19 = QuestInformationListViewManager__NewChocoMaterialForTexture(lManager, *(const MethodInfo **)&dispTp);
        name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                          texture,
                                          texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v19 )
        {
          UnityEngine_Material__SetTexture(v19, (System_String_o *)StringLiteral_16241/*"_MainTex"*/, name, 0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v19,
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
      name = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                        texture,
                                        texture->klass->vtable._29_set_shader.methodPtr);
      if ( name )
      {
        name = (UnityEngine_Texture_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)name, 0LL);
        v13 = (System_String_o *)name;
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( v13 )
        {
          if ( !System_String__Equals_44745508(
                  v13,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v14 = QuestInformationListViewItemDraw_TypeInfo;
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
    sub_B7076C(name, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_44745508(
          (System_String_o *)name,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v14 = QuestInformationListViewItemDraw_TypeInfo;
    if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_31;
    }
LABEL_30:
    j_il2cpp_runtime_class_init_0(v14);
    v14 = QuestInformationListViewItemDraw_TypeInfo;
LABEL_31:
    v20 = UnityEngine_Shader__Find(v14->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v20,
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
  if ( (byte_435250C & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__33_0__);
    this = (QuestInformationListViewItemDraw_o *)sub_B70694(&ServantAssetLoadManager_TypeInfo);
    byte_435250C = 1;
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
    v7 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v7,
      (Il2CppObject *)v4,
      Method_QuestInformationListViewItemDraw__SetEnemyName_b__33_0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(NameEffectPath, v7, 1, 0LL);
  }
  this = (QuestInformationListViewItemDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_14:
    sub_B7076C(this, item);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  QuestInformationListViewItem_o **v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *completeMissionTarget; // x21
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x21
  int v25; // w8
  int64_t v26; // x24
  unsigned int v27; // w26
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  QuestInformationListViewItem_o *v31; // x8
  struct ListViewObject_o *viewObject; // x9
  QuestInformationListViewManager_o *manager; // x21
  __int64 v34; // x10
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v36; // x8
  int32_t v37; // w1
  bool v38; // w1
  int32_t mEnemyType; // w24
  struct UITexture_o **p_SvtImg; // x23
  QuestInformationListViewItem_o *v41; // x8
  UITexture_o *v42; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  System_Int32_array **Manager__loadCommandCard; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x4
  const MethodInfo *v53; // x2
  ItemMaster_o *v54; // x21
  TerminalSceneComponent_c *v55; // x0
  UnityEngine_Object_o *mInstance; // x22
  UISprite_o *enemySp; // x22
  __int64 v58; // x8
  UISprite_o *v59; // x22
  QuestInformationListViewItemDraw_o *v60; // x0
  const MethodInfo *v61; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  bool v63; // w1
  UISprite_o *v64; // x23
  int32_t iconId; // w24
  const MethodInfo *v66; // x4
  QuestInformationListViewItem_o *v67; // x21
  System_Action_o *v68; // x23
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x1
  int32_t *v71; // x8
  UserItemMaster_o *v72; // x21
  int32_t v73; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21
  __int64 v76; // x0
  QuestInformationListViewItemDraw_o *v77; // x0
  int32_t v78; // w1
  UISpriteAltMat_o *v79; // x2
  QuestInformationListViewManager_o *v80; // x3
  const MethodInfo *v81; // x4

  if ( (byte_4352505 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&QuestInformationListViewItemDraw_TypeInfo);
    sub_B70694(&QuestInformationListViewManager_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__);
    sub_B70694(&QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo);
    sub_B70694(&StringLiteral_12285/*"SHOP_BUY_ITEM_HOLD"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4352505 = 1;
  }
  v7 = sub_B70764(QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  QuestInformationListViewItemDraw___c__DisplayClass26_0___ctor(
    (QuestInformationListViewItemDraw___c__DisplayClass26_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_176;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  v16 = (QuestInformationListViewItem_o **)(v7 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)item, v17, v18, v19, v20, v21, v22);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(completeMissionTarget, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_176;
    MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_176;
    Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_176;
    Instance = (int64_t)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_176;
    v25 = *(_DWORD *)(Instance + 24);
    v26 = Instance;
    if ( v25 >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= v25 )
          goto LABEL_177;
        v28 = *(_QWORD *)(v26 + 8LL * (int)v27 + 32);
        if ( !v28 )
          goto LABEL_176;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_176;
        Instance = (int64_t)EventMissionMaster__getCompleteMissionList(
                              MasterData_WarQuestSelectionMaster,
                              *(_DWORD *)(v28 + 20),
                              0LL);
        if ( !Instance )
          goto LABEL_176;
        v29 = *(_QWORD *)(Instance + 24);
        if ( v29 )
          break;
        v25 = *(_DWORD *)(v26 + 24);
        if ( (int)++v27 >= v25 )
          goto LABEL_25;
      }
      if ( !(_DWORD)v29 )
      {
LABEL_177:
        v76 = sub_B70798(Instance);
        sub_B70738(v76, 0LL);
      }
      v30 = *(_QWORD *)(Instance + 32);
      if ( !v30 )
        goto LABEL_176;
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v30 + 28), 0LL);
    }
  }
LABEL_25:
  v31 = *v16;
  if ( !*v16 )
    goto LABEL_176;
  viewObject = v31->fields.viewObject;
  if ( !viewObject )
    goto LABEL_176;
  manager = (QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( manager
    && ((v9 = QuestInformationListViewManager_TypeInfo,
         v34 = *(&QuestInformationListViewManager_TypeInfo->_2.bitflags2 + 1),
         *(&manager->klass->_2.bitflags2 + 1) < (unsigned int)v34)
     || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[v34 - 1] != QuestInformationListViewManager_TypeInfo) )
  {
    v77 = (QuestInformationListViewItemDraw_o *)sub_B70A60(manager);
    QuestInformationListViewItemDraw__SetDispType(v77, v78, v79, v80, v81);
  }
  else if ( mode )
  {
    infoType = v31->fields.infoType;
    if ( infoType == 1 )
    {
      mEnemyType = v31->fields.mEnemyType;
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
        if ( !byte_434DEA1 )
        {
          sub_B70694(&TerminalSceneComponent_TypeInfo);
          byte_434DEA1 = 1;
        }
        v55 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v55 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v55->static_fields->mInstance;
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
          if ( !byte_434DEA1 )
          {
            sub_B70694(&TerminalSceneComponent_TypeInfo);
            byte_434DEA1 = 1;
          }
          Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          }
          v58 = **(_QWORD **)(Instance + 184);
          if ( !v58 || !enemySp )
            goto LABEL_176;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v58 + 296), 0LL);
        }
        v59 = (UISprite_o *)this->fields.enemySp;
        Instance = (int64_t)QuestInformationListViewItemDraw_TypeInfo;
        if ( (BYTE3(QuestInformationListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        }
        if ( v59 )
        {
          UISprite__set_spriteName(v59, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0LL);
          QuestInformationListViewItemDraw__SetDispType(v60, 1, this->fields.enemySp, manager, v61);
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
                            if ( *v16 )
                            {
                              if ( Instance )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (*v16)->fields.eventMissionTarget,
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
                                  v63 = 0;
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
        sub_B7076C(Instance, v9);
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
        v41 = *v16;
        if ( !*v16 )
          goto LABEL_176;
        v42 = *p_SvtImg;
        targetId = v41->fields.targetId;
        targetCnt = v41->fields.targetCnt;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        Manager__loadCommandCard = (System_Int32_array **)ServantAssetLoadManager__loadCommandCard(
                                                            v42,
                                                            targetId,
                                                            targetCnt,
                                                            targetCnt,
                                                            0LL);
        *p_SvtImg = (struct UITexture_o *)Manager__loadCommandCard;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.SvtImg,
          Manager__loadCommandCard,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
        if ( !*v16 )
          goto LABEL_176;
        QuestInformationListViewItemDraw__SetDispType_26106568(
          (QuestInformationListViewItemDraw_o *)Instance,
          (*v16)->fields.dispType,
          this->fields.SvtImg,
          manager,
          v52);
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
        if ( !*v16 )
          goto LABEL_176;
        v64 = (UISprite_o *)this->fields.enemySp;
        iconId = (*v16)->fields.iconId;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        if ( AtlasManager__SetEnemy(v64, iconId, 0LL) )
        {
          Instance = (int64_t)this->fields.enemySp;
          if ( !Instance )
            goto LABEL_176;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.enemyTexture;
          if ( !Instance )
            goto LABEL_176;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
          if ( !*v16 )
            goto LABEL_176;
          QuestInformationListViewItemDraw__SetDispType(
            (QuestInformationListViewItemDraw_o *)Instance,
            (*v16)->fields.dispType,
            this->fields.enemySp,
            manager,
            v66);
        }
        else
        {
          v67 = *(QuestInformationListViewItem_o **)(v7 + 24);
          v68 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v68,
            (Il2CppObject *)v7,
            Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__,
            0LL);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v67, v68, v69);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v16, v53);
      if ( !*v16 )
        goto LABEL_176;
      Instance = (int64_t)this->fields.classComp;
      if ( !Instance )
        goto LABEL_176;
      ServantClassIconComponent__SetWithClassOverWrite(
        (ServantClassIconComponent_o *)Instance,
        (*v16)->fields.targetId,
        (*v16)->fields.targetCnt,
        (*v16)->fields.classId,
        0LL);
      Instance = (int64_t)this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v16 )
        goto LABEL_176;
      if ( !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.weeklyMissionTarget, 0LL);
      Instance = (int64_t)this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v16 )
        goto LABEL_176;
      if ( !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.limitMissionTarget, 0LL);
      Instance = (int64_t)this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v16 )
        goto LABEL_176;
      if ( !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.eventMissionTarget, 0LL);
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_176;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v16 || !Instance )
        goto LABEL_176;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.completeMissionTarget, 0LL);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v70);
    }
    else if ( !infoType )
    {
      Instance = (int64_t)this->fields.blankImg;
      if ( !Instance )
        goto LABEL_176;
      if ( v31->fields.mRewardType )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        v36 = *v16;
        if ( !*v16 )
          goto LABEL_176;
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_176;
        v37 = v36->fields.mRewardType == 2 ? 2 : 1;
        ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v37, v36->fields.targetId, -1, 0, 0LL);
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_176;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_176;
        v38 = 1;
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
        v38 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v38, 0LL);
      if ( !*v16 )
        goto LABEL_176;
      if ( (*v16)->fields.mRewardType != 2 )
        goto LABEL_69;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( *v16 )
        {
          v54 = (ItemMaster_o *)Instance;
          if ( Instance )
          {
            Instance = ItemMaster__isQP((ItemMaster_o *)Instance, (*v16)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_69;
            if ( !*v16 )
              goto LABEL_176;
            Instance = ItemMaster__isFriendPoint(v54, (*v16)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_69;
            if ( !*v16 )
              goto LABEL_176;
            Instance = ItemMaster__isEventPoint(v54, (*v16)->fields.targetId, 0LL);
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
            if ( !*v16 )
              goto LABEL_176;
            Instance = ItemMaster__isMana(v54, (*v16)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_176;
              v71 = (int32_t *)(Instance + 176);
            }
            else
            {
              if ( !*v16 )
                goto LABEL_176;
              Instance = ItemMaster__isRarePri(v54, (*v16)->fields.targetId, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( !Instance )
                  goto LABEL_176;
                v71 = (int32_t *)(Instance + 180);
              }
              else
              {
                if ( !*v16 )
                  goto LABEL_176;
                if ( ItemMaster__isStone(v54, (*v16)->fields.targetId, 0LL) )
                {
                  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                  if ( !Instance )
                    goto LABEL_176;
                  v71 = (int32_t *)(Instance + 168);
                }
                else
                {
                  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_176;
                  v72 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  }
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*v16 )
                    goto LABEL_176;
                  if ( !v72 )
                    goto LABEL_176;
                  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(v72, Instance, (*v16)->fields.targetId, 0LL);
                  if ( !Instance )
                    goto LABEL_176;
                  v71 = (int32_t *)(Instance + 28);
                }
              }
            }
            v73 = *v71;
            holdNumTitleLb = this->fields.holdNumTitleLb;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12285/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
            if ( holdNumTitleLb )
            {
              UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
              holdNumCntLb = this->fields.holdNumCntLb;
              Instance = (int64_t)LocalizationManager__GetNumberFormat(v73, 0LL);
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
                        v63 = 1;
LABEL_118:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v63, 0LL);
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

  if ( (byte_4352506 & 1) == 0 )
  {
    sub_B70694(&QuestInformationListViewItemDraw_TypeInfo);
    byte_4352506 = 1;
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
        v17 = sub_B70798(completeMissionTarget);
        sub_B70738(v17, 0LL);
      }
    }
LABEL_45:
    sub_B7076C(completeMissionTarget, method);
  }
}


void __fastcall QuestInformationListViewItemDraw___SetEnemyName_b__33_0(
        QuestInformationListViewItemDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v4; // x19
  UnityEngine_Component_o *textLb; // x8
  UILabel_o *v6; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_435250E & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (QuestInformationListViewItemDraw_o *)sub_B70694(&StringLiteral_21982/*"quest_info"*/);
    byte_435250E = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_21982/*"quest_info"*/,
                                                       (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_B7076C(this, assetData);
  }
  v6 = (UILabel_o *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Instantiate_UILabel_(
    v6,
    transform,
    (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
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
    sub_B7076C(this, method);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct QuestInformationListViewItemDraw_o *v13; // x8
  struct QuestInformationListViewItemDraw_o *v14; // x8
  struct QuestInformationListViewItemDraw_o *v15; // x8
  AssetData_o *enemyIconAssetData; // x21
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x0

  if ( (byte_4351AFE & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_Texture2D____69232744);
    sub_B70694(&UnityEngine_Material_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_16370/*"_alpha"*/);
    sub_B70694(&StringLiteral_4619/*"Custom/SpriteWithMask"*/);
    sub_B70694(&StringLiteral_16243/*"_MaskTex"*/);
    byte_4351AFE = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].fields.attrib = (struct System_String_o *)assetData;
  sub_B70630(
    (BattleServantConfConponent_o *)&_4__this[1].fields.attrib,
    (System_Int32_array **)assetData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4619/*"Custom/SpriteWithMask"*/, 0LL);
  v12 = (UnityEngine_Material_o *)sub_B70764(UnityEngine_Material_TypeInfo);
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
                              (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744);
  if ( !v12
    || (UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v15 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v15->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_44758168(
                                    v15->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16370/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                    enemyIconAssetData,
                                                                    (System_String_o *)_4__this,
                                                                    (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744),
        UnityEngine_Material__SetTexture(
          v12,
          (System_String_o *)StringLiteral_16243/*"_MaskTex"*/,
          Object_WarBoardWaitTimeSetting,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_B7076C(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}