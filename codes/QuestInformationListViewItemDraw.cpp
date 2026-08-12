void QuestInformationListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct QuestInformationListViewItemDraw_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  QuestInformationListViewItemDraw_c *v32; // x8
  __int64 v33; // x1
  struct QuestInformationListViewItemDraw_StaticFields *v34; // x10
  struct QuestInformationListViewItemDraw_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Array_o *v42; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7

  if ( (byte_596D390 & 1) == 0 )
  {
    sub_2213A60(&QuestInformationListViewItemDraw_TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58);
    sub_2213A60(&StringLiteral_19929/*"enemy_icon_"*/);
    sub_2213A60(&StringLiteral_24091/*"questinfo_enemy_brank"*/);
    sub_2213A60(&StringLiteral_15732/*"Unlit/Transparent Colored"*/);
    sub_2213A60(&StringLiteral_26985/*"？？？"*/);
    sub_2213A60(&StringLiteral_6309/*"Enemys/Icon/"*/);
    byte_596D390 = 1;
  }
  v7 = StringLiteral_24091/*"questinfo_enemy_brank"*/;
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_24091/*"questinfo_enemy_brank"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_26985/*"？？？"*/;
  static_fields = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_26985/*"？？？"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->ENEMY_UNKNOWN_NAME, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_6309/*"Enemys/Icon/"*/;
  v17 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v17->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6309/*"Enemys/Icon/"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->ENEMY_ICON_TEXTURE_PATH, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_19929/*"enemy_icon_"*/;
  v25 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v25->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19929/*"enemy_icon_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->ENEMY_ICON_TEXTURE_PREFIX, v24, v26, v27, v28, v29, v30, v31);
  v32 = QuestInformationListViewItemDraw_TypeInfo;
  v33 = StringLiteral_15732/*"Unlit/Transparent Colored"*/;
  v34 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v34->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_E9D180;
  v35 = v32->static_fields;
  v34->ENEMY_UNKNOWN_CLASSID = 12;
  v35->DEFAULT_SHADER = (struct System_String_o *)v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35->DEFAULT_SHADER, v33, v36, v37, v38, v39, v40, v41);
  v42 = (System_Array_o *)sub_2213B20(float___TypeInfo, 4);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v42,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58,
    0);
  v43 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v43->TARGET_POSITION = (struct System_Single_array *)v42;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v43->TARGET_POSITION, (int32_t)v42, v44, v45, v46, v47, v48, v49);
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
  if ( isSprite )
  {
    if ( viewManager )
      return QuestInformationListViewManager__NewChocoMaterialForSprite(viewManager, (const MethodInfo *)isSprite);
LABEL_6:
    sub_2213CDC(viewManager, isSprite);
  }
  if ( !viewManager )
    goto LABEL_6;
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
  if ( isSprite )
  {
    if ( viewManager )
      return QuestInformationListViewManager__NewColorShadowMaterialForSprite(viewManager, (const MethodInfo *)isSprite);
LABEL_6:
    sub_2213CDC(viewManager, isSprite);
  }
  if ( !viewManager )
    goto LABEL_6;
  return QuestInformationListViewManager__NewColorShadowMaterialForTexture(viewManager, (const MethodInfo *)isSprite);
}


void QuestInformationListViewItemDraw__LoadEnemyTexture(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x21
  Il2CppObject *v26; // x0
  struct System_String_o *v27; // x0
  struct System_String_o **p_enemyIconName; // x19
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x19
  AssetLoader_LoadEndDataHandler_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596D38D & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&QuestInformationListViewItemDraw_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_QuestInformationListViewItemDraw___c__DisplayClass33_0__LoadEnemyTexture_b__0__);
    sub_2213A60(&QuestInformationListViewItemDraw___c__DisplayClass33_0_TypeInfo);
    byte_596D38D = 1;
  }
  v7 = sub_2213CCC(QuestInformationListViewItemDraw___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v22);
  Instance = (CommonUI_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, v9, v23);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v39 = iconId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v39);
  v27 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v26, 0);
  this->fields.enemyIconName = v27;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_enemyIconName, (int32_t)v27, v29, v30, v31, v32, v33, v34);
  v35 = System_String__Concat_75651716(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_QuestInformationListViewItemDraw___c__DisplayClass33_0__LoadEnemyTexture_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37, v38);
  if ( !AssetManager__loadAssetStorage(v35, v36, 1, 0, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(Instance, v9);
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
  __int64 v4; // x1
  __int64 v5; // x2
  QuestInformationListViewItemDraw_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x21
  MissionNaviTransitionBoardItem_o *p_enemyIconAssetData; // x19
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  if ( (byte_596D38E & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&QuestInformationListViewItemDraw_TypeInfo);
    byte_596D38E = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0) )
  {
    v6 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, v4, v5);
      v6 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v9 = System_String__Concat_75651716(v6->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
    AssetManager__releaseAssetStorage(v9, 0);
    this->fields.enemyIconAssetData = 0;
    p_enemyIconAssetData = (MissionNaviTransitionBoardItem_o *)&this->fields.enemyIconAssetData;
    sub_2213A04(p_enemyIconAssetData, 0, v11, v12, v13, v14, v15, v16);
    p_enemyIconAssetData->monitor = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_enemyIconName, 0, v17, v18, v19, v20, v21, v22);
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
  QuestInformationListViewItemDraw_o *v12; // x21
  UnityEngine_Material_o *v13; // x20
  UnityEngine_Color_o SHADOW_COLOR; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_596D38A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&QuestInformationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    this = (QuestInformationListViewItemDraw_o *)sub_2213A60(&StringLiteral_16758/*"_AddColor"*/);
    byte_596D38A = 1;
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
      v12 = (QuestInformationListViewItemDraw_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_83274924((UnityEngine_Material_o *)v12, v13, 0);
      goto LABEL_15;
    case 2:
      if ( !item )
        goto LABEL_22;
      if ( item->fields.colorType < 1 )
      {
        this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
        if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp, sp);
        if ( sp )
        {
          SHADOW_COLOR = QuestInformationListViewItemDraw_TypeInfo->static_fields->SHADOW_COLOR;
          goto LABEL_21;
        }
LABEL_22:
        sub_2213CDC(this, *(_QWORD *)&dispTp);
      }
      if ( !sp )
        goto LABEL_22;
      v15.fields.r = 1.0;
      v15.fields.g = 1.0;
      v15.fields.b = 1.0;
      v15.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sp, v15, 0);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, __int64, const MethodInfo *))v8->klass->vtable._4_GetNewColorShadowMaterial.methodPtr)(
                                                     v8,
                                                     1,
                                                     v8->klass->vtable._4_GetNewColorShadowMaterial.method);
      if ( !this )
        goto LABEL_22;
      v12 = this;
      UnityEngine_Material__SetColor(
        (UnityEngine_Material_o *)this,
        (System_String_o *)StringLiteral_16813/*"_Color"*/,
        item->fields.mainColor,
        0);
      UnityEngine_Material__SetColor(
        (UnityEngine_Material_o *)v12,
        (System_String_o *)StringLiteral_16758/*"_AddColor"*/,
        item->fields.addColor,
        0);
LABEL_15:
      UISpriteAltMat__SetMaterialKeepTexture(sp, (UnityEngine_Material_o *)v12, 0);
      return;
    case 1:
      if ( sp )
      {
        SHADOW_COLOR.fields.r = 1.0;
        SHADOW_COLOR.fields.g = 1.0;
        SHADOW_COLOR.fields.b = 1.0;
        SHADOW_COLOR.fields.a = 1.0;
LABEL_21:
        UIWidget__set_color((UIWidget_o *)sp, SHADOW_COLOR, 0);
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
  UnityEngine_Material_o *v12; // x21
  UnityEngine_Texture_o *v13; // x0
  UITexture_c *klass; // x8
  UITexture_o *v15; // x0
  UnityEngine_Material_o *v16; // x1
  UnityEngine_Material_o *v17; // x20
  UnityEngine_Texture_o *v18; // x0
  UnityEngine_Color_o SHADOW_COLOR; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_596D38C & 1) == 0 )
  {
    sub_2213A60(&QuestInformationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    sub_2213A60(&StringLiteral_16758/*"_AddColor"*/);
    this = (QuestInformationListViewItemDraw_o *)sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596D38C = 1;
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
      v17 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, __int64, const MethodInfo *))v8->klass->vtable._5_GetNewChocoMaterial.methodPtr)(
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
                                                     (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
                                                     0);
      if ( !v17 )
        goto LABEL_27;
      UnityEngine_Material__SetTexture(v17, (System_String_o *)StringLiteral_16914/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._24_get_material.methodPtr)(
                                                     texture,
                                                     texture->klass->vtable._24_get_material.method);
      if ( !this )
        goto LABEL_27;
      v18 = UnityEngine_Material__GetTexture((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16919/*"_MaskTex"*/, 0);
      UnityEngine_Material__SetTexture(v17, (System_String_o *)StringLiteral_16919/*"_MaskTex"*/, v18, 0);
      klass = texture->klass;
      v15 = texture;
      v16 = v17;
      goto LABEL_20;
    case 2:
      if ( !item )
        goto LABEL_27;
      if ( item->fields.colorType < 1 )
      {
        this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
        if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp, texture);
        if ( texture )
        {
          SHADOW_COLOR = QuestInformationListViewItemDraw_TypeInfo->static_fields->SHADOW_COLOR;
          goto LABEL_26;
        }
LABEL_27:
        sub_2213CDC(this, *(_QWORD *)&dispTp);
      }
      if ( !texture )
        goto LABEL_27;
      v20.fields.r = 1.0;
      v20.fields.g = 1.0;
      v20.fields.b = 1.0;
      v20.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v20, 0);
      ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
        texture,
        0,
        texture->klass->vtable._29_set_shader.method);
      v12 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, __int64, const MethodInfo *))v8->klass->vtable._4_GetNewColorShadowMaterial.methodPtr)(
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
                                                     (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
                                                     0);
      if ( !v12 )
        goto LABEL_27;
      UnityEngine_Material__SetTexture(v12, (System_String_o *)StringLiteral_16914/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._24_get_material.methodPtr)(
                                                     texture,
                                                     texture->klass->vtable._24_get_material.method);
      if ( !this )
        goto LABEL_27;
      v13 = UnityEngine_Material__GetTexture((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16919/*"_MaskTex"*/, 0);
      UnityEngine_Material__SetTexture(v12, (System_String_o *)StringLiteral_16919/*"_MaskTex"*/, v13, 0);
      UnityEngine_Material__SetColor(v12, (System_String_o *)StringLiteral_16813/*"_Color"*/, item->fields.mainColor, 0);
      UnityEngine_Material__SetColor(v12, (System_String_o *)StringLiteral_16758/*"_AddColor"*/, item->fields.addColor, 0);
      klass = texture->klass;
      v15 = texture;
      v16 = v12;
LABEL_20:
      ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))klass->vtable._25_set_material.methodPtr)(
        v15,
        v16,
        klass->vtable._25_set_material.method);
      ((void (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._30_MarkAsChanged.methodPtr)(
        texture,
        texture->klass->vtable._30_MarkAsChanged.method);
      return;
    case 1:
      if ( texture )
      {
        SHADOW_COLOR.fields.r = 1.0;
        SHADOW_COLOR.fields.g = 1.0;
        SHADOW_COLOR.fields.b = 1.0;
        SHADOW_COLOR.fields.a = 1.0;
LABEL_26:
        UIWidget__set_color((UIWidget_o *)texture, SHADOW_COLOR, 0);
        return;
      }
      goto LABEL_27;
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestInformationListViewItemDraw__SetDispType_43367988(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v8; // x21
  __int64 v9; // x2
  QuestInformationListViewItemDraw_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  QuestInformationListViewItemDraw_c *v13; // x0
  UnityEngine_Material_o *v14; // x21
  UITexture_c *klass; // x8
  UITexture_o *v16; // x0
  UnityEngine_Material_o *v17; // x1
  UnityEngine_Material_o *v18; // x20
  UnityEngine_Shader_o *v19; // x0
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_596D38B & 1) == 0 )
  {
    sub_2213A60(&QuestInformationListViewItemDraw_TypeInfo);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    this = (QuestInformationListViewItemDraw_o *)sub_2213A60(&StringLiteral_16758/*"_AddColor"*/);
    byte_596D38B = 1;
  }
  if ( dispTp == 3 )
  {
    if ( !texture )
      goto LABEL_33;
    v22.fields.r = 1.0;
    v22.fields.g = 1.0;
    v22.fields.b = 1.0;
    v22.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)texture, v22, 0);
    ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      0,
      texture->klass->vtable._29_set_shader.method);
    v18 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, _QWORD, const MethodInfo *))v8->klass->vtable._5_GetNewChocoMaterial.methodPtr)(
                                      v8,
                                      0,
                                      v8->klass->vtable._5_GetNewChocoMaterial.method);
    this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                                   texture,
                                                   texture->klass->vtable._26_get_mainTexture.method);
    if ( !v18 )
      goto LABEL_33;
    UnityEngine_Material__SetTexture(v18, (System_String_o *)StringLiteral_16914/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
    klass = texture->klass;
    v16 = texture;
    v17 = v18;
LABEL_22:
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))klass->vtable._25_set_material.methodPtr)(
      v16,
      v17,
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
      v20.fields.r = 1.0;
      v20.fields.g = 1.0;
      v20.fields.b = 1.0;
      v20.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v20, 0);
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
        v10 = this;
        if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp, v9);
        if ( v10 )
        {
          if ( !System_String__Equals_75686512(
                  (System_String_o *)v10,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0) )
          {
            v13 = QuestInformationListViewItemDraw_TypeInfo;
            if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
              goto LABEL_31;
            goto LABEL_32;
          }
          return;
        }
      }
    }
LABEL_33:
    sub_2213CDC(this, *(_QWORD *)&dispTp);
  }
  if ( !item )
    goto LABEL_33;
  if ( item->fields.colorType >= 1 )
  {
    if ( !texture )
      goto LABEL_33;
    v21.fields.r = 1.0;
    v21.fields.g = 1.0;
    v21.fields.b = 1.0;
    v21.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)texture, v21, 0);
    ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      0,
      texture->klass->vtable._29_set_shader.method);
    v14 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(QuestInformationListViewItemDraw_o *, _QWORD, const MethodInfo *))v8->klass->vtable._4_GetNewColorShadowMaterial.methodPtr)(
                                      v8,
                                      0,
                                      v8->klass->vtable._4_GetNewColorShadowMaterial.method);
    this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                                   texture,
                                                   texture->klass->vtable._26_get_mainTexture.method);
    if ( !v14 )
      goto LABEL_33;
    UnityEngine_Material__SetTexture(v14, (System_String_o *)StringLiteral_16914/*"_MainTex"*/, (UnityEngine_Texture_o *)this, 0);
    UnityEngine_Material__SetColor(v14, (System_String_o *)StringLiteral_16813/*"_Color"*/, item->fields.mainColor, 0);
    UnityEngine_Material__SetColor(v14, (System_String_o *)StringLiteral_16758/*"_AddColor"*/, item->fields.addColor, 0);
    klass = texture->klass;
    v16 = texture;
    v17 = v14;
    goto LABEL_22;
  }
  this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp, texture);
  if ( !texture )
    goto LABEL_33;
  UIWidget__set_color((UIWidget_o *)texture, QuestInformationListViewItemDraw_TypeInfo->static_fields->SHADOW_COLOR, 0);
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
  if ( !System_String__Equals_75686512(
          (System_String_o *)this,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0) )
  {
    v13 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
LABEL_31:
      j_il2cpp_runtime_class_init_0(v13, v11, v12);
      v13 = QuestInformationListViewItemDraw_TypeInfo;
    }
LABEL_32:
    v19 = UnityEngine_Shader__Find(v13->static_fields->DEFAULT_SHADER, 0);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      v19,
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
  __int64 v8; // x1
  __int64 v9; // x2

  v4 = this;
  if ( (byte_596D38F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__35_0__);
    this = (QuestInformationListViewItemDraw_o *)sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_596D38F = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, item, method);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0);
    v7 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v7,
      (Il2CppObject *)v4,
      Method_QuestInformationListViewItemDraw__SetEnemyName_b__35_0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8, v9);
    AssetManager__loadAssetStorage(NameEffectPath, v7, 1, 0, 0);
  }
  this = (QuestInformationListViewItemDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_2213CDC(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0);
}


void QuestInformationListViewItemDraw__SetItem(
        QuestInformationListViewItemDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x21
  int64_t Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  QuestInformationListViewItem_o **v16; // x20
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *completeMissionTarget; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *MasterData_object; // x23
  int v33; // w8
  int64_t v34; // x24
  __int64 v35; // x26
  __int64 v36; // x8
  __int64 v37; // x8
  __int64 v38; // x8
  struct ListViewObject_o *viewObject; // x8
  struct QuestInformationListViewManager_o *manager; // x1
  QuestInformationListViewManager_c *v41; // x8
  __int64 naturalAligment; // x9
  struct QuestInformationListViewManager_o **p_viewManager; // x0
  __int64 v44; // x2
  QuestInformationListViewItem_o *v45; // x8
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v47; // x8
  int32_t v48; // w1
  bool v49; // w1
  int32_t mEnemyType; // w8
  struct UITexture_o **p_SvtImg; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  TerminalSceneComponent_c *v54; // x0
  UnityEngine_Object_o *mInstance; // x21
  __int64 v56; // x2
  UISprite_o *enemySp; // x21
  __int64 v58; // x8
  UISprite_o *v59; // x21
  const MethodInfo *v60; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  ItemMaster_o *v62; // x21
  bool v63; // w1
  __int64 v64; // x2
  QuestInformationListViewItem_o *v65; // x8
  UITexture_o *v66; // x23
  int32_t targetCnt; // w21
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  System_String_o *v70; // x2
  System_String_o *v71; // x3
  int32_t v72; // w4
  int32_t v73; // w5
  bool v74; // w6
  bool v75; // w7
  const MethodInfo *v76; // x4
  const MethodInfo *v77; // x2
  __int64 v78; // x2
  UISprite_o *v79; // x22
  int32_t iconId; // w23
  const MethodInfo *v81; // x4
  QuestInformationListViewItem_o *v82; // x22
  System_Action_o *v83; // x23
  const MethodInfo *v84; // x3
  const MethodInfo *v85; // x1
  BalanceConfig_c *v86; // x0
  UnityEngine_Object_o *v87; // x20
  __int64 v88; // x2
  UnityEngine_Object_o *SvtImg; // x20
  __int64 v90; // x2
  int32_t *v91; // x8
  __int64 v92; // x1
  __int64 v93; // x2
  Il2CppObject *v94; // x21
  long double v95; // q0
  int32_t v96; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21

  if ( (byte_596D388 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestInformationListViewItemDraw_TypeInfo);
    sub_2213A60(&QuestInformationListViewManager_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__);
    sub_2213A60(&QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo);
    sub_2213A60(&StringLiteral_12590/*"SHOP_BUY_ITEM_HOLD"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596D388 = 1;
  }
  v7 = sub_2213CCC(QuestInformationListViewItemDraw___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_195;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = item;
  v16 = (QuestInformationListViewItem_o **)(v7 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)item, v17, v18, v19, v20, v21, v22);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
  Instance = UnityEngine_Object__op_Inequality(completeMissionTarget, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_195;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_195;
    v33 = *(_DWORD *)(Instance + 24);
    v34 = Instance;
    if ( v33 >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v35 >= v33 )
          goto LABEL_196;
        v36 = *(_QWORD *)(v34 + 32 + 8 * v35);
        if ( !v36 )
          goto LABEL_195;
        if ( !MasterData_object )
          goto LABEL_195;
        Instance = (int64_t)EventMissionMaster__getCompleteMissionList(
                              (EventMissionMaster_o *)MasterData_object,
                              *(_DWORD *)(v36 + 20),
                              0);
        if ( !Instance )
          goto LABEL_195;
        v37 = *(_QWORD *)(Instance + 24);
        if ( v37 )
          break;
        v33 = *(_DWORD *)(v34 + 24);
        if ( (int)++v35 >= v33 )
          goto LABEL_24;
      }
      if ( !(_DWORD)v37 )
LABEL_196:
        sub_2213CE4(Instance);
      v38 = *(_QWORD *)(Instance + 32);
      if ( !v38 )
        goto LABEL_195;
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_195;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v38 + 28), 0);
    }
  }
LABEL_24:
  if ( !*v16 )
    goto LABEL_195;
  viewObject = (*v16)->fields.viewObject;
  if ( !viewObject )
    goto LABEL_195;
  manager = (struct QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( !manager )
    goto LABEL_32;
  v41 = QuestInformationListViewManager_TypeInfo;
  naturalAligment = QuestInformationListViewManager_TypeInfo->_2.naturalAligment;
  if ( manager->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != QuestInformationListViewManager_TypeInfo
    || (this->fields.viewManager = manager,
        p_viewManager = &this->fields.viewManager,
        manager->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[naturalAligment - 1] != v41 )
  {
    sub_221405C(manager, v41, v26, v27);
LABEL_32:
    this->fields.viewManager = 0;
    p_viewManager = &this->fields.viewManager;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_viewManager, (int32_t)manager, v26, v27, v28, v29, v30, v31);
  if ( !mode )
    return;
  v45 = *v16;
  if ( !*v16 )
    goto LABEL_195;
  infoType = v45->fields.infoType;
  if ( infoType == 1 )
  {
    mEnemyType = v45->fields.mEnemyType;
    p_SvtImg = &this->fields.SvtImg;
    Instance = (int64_t)this->fields.SvtImg;
    if ( mEnemyType == 1 )
    {
      if ( !Instance )
        goto LABEL_195;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_195;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      v65 = *v16;
      if ( !*v16 )
        goto LABEL_195;
      v66 = *p_SvtImg;
      targetId = v65->fields.targetId;
      targetCnt = v65->fields.targetCnt;
      if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9, v64);
      Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v66, targetId, targetCnt, targetCnt, 0);
      *p_SvtImg = Manager__loadCommandCard;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.SvtImg,
        (int32_t)Manager__loadCommandCard,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
      if ( !*v16 )
        goto LABEL_195;
      QuestInformationListViewItemDraw__SetDispType_43367988(
        this,
        (*v16)->fields.dispType,
        this->fields.SvtImg,
        *v16,
        v76);
      Instance = (int64_t)this->fields.enemySp;
      if ( !Instance )
        goto LABEL_195;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_195;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    else
    {
      if ( !mEnemyType )
      {
        if ( !Instance )
          goto LABEL_195;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_195;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v52, v53);
        if ( !byte_596A090 )
        {
          sub_2213A60(&TerminalSceneComponent_TypeInfo);
          byte_596A090 = 1;
        }
        v54 = TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v52, v53);
          v54 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v54->static_fields->mInstance;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52, v53);
        if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
        {
          enemySp = (UISprite_o *)this->fields.enemySp;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9, v56);
          if ( !byte_596A090 )
          {
            sub_2213A60(&TerminalSceneComponent_TypeInfo);
            byte_596A090 = 1;
          }
          Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v9, v56);
            Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          }
          v58 = **(_QWORD **)(Instance + 184);
          if ( !v58 || !enemySp )
            goto LABEL_195;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v58 + 304), 0);
        }
        v59 = (UISprite_o *)this->fields.enemySp;
        Instance = (int64_t)QuestInformationListViewItemDraw_TypeInfo;
        if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, v9, v56);
        if ( !v59 )
          goto LABEL_195;
        UISprite__set_spriteName(v59, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0);
        QuestInformationListViewItemDraw__SetDispType(this, 1, this->fields.enemySp, *v16, v60);
        Instance = (int64_t)this->fields.textLb;
        if ( !Instance )
          goto LABEL_195;
        UILabel__set_text(
          (UILabel_o *)Instance,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
          0);
        Instance = (int64_t)this->fields.classComp;
        if ( !Instance )
          goto LABEL_195;
        ServantClassIconComponent__Set(
          (ServantClassIconComponent_o *)Instance,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_CLASSID,
          0,
          0);
        classComp = this->fields.classComp;
        if ( !classComp )
          goto LABEL_195;
        Instance = (int64_t)classComp->fields.nameLabel;
        if ( !Instance )
          goto LABEL_195;
        UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0);
        Instance = (int64_t)this->fields.weeklyMissionTarget;
        if ( !Instance )
          goto LABEL_195;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        Instance = (int64_t)this->fields.limitMissionTarget;
        if ( !Instance )
          goto LABEL_195;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        Instance = (int64_t)this->fields.eventMissionTarget;
        if ( !Instance )
          goto LABEL_195;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !*v16 )
          goto LABEL_195;
        if ( !Instance )
          goto LABEL_195;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.eventMissionTarget, 0);
        Instance = (int64_t)this->fields.completeMissionTarget;
        if ( !Instance )
          goto LABEL_195;
        goto LABEL_109;
      }
      if ( !Instance )
        goto LABEL_195;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_195;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
      Instance = (int64_t)this->fields.enemySp;
      if ( !Instance )
        goto LABEL_195;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_195;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
      if ( !*v16 )
        goto LABEL_195;
      v79 = (UISprite_o *)this->fields.enemySp;
      iconId = (*v16)->fields.iconId;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v78);
      if ( AtlasManager__SetEnemy(v79, iconId, 0) )
      {
        Instance = (int64_t)this->fields.enemySp;
        if ( !Instance )
          goto LABEL_195;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
        Instance = (int64_t)this->fields.enemyTexture;
        if ( !Instance )
          goto LABEL_195;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
        if ( !*v16 )
          goto LABEL_195;
        QuestInformationListViewItemDraw__SetDispType(this, (*v16)->fields.dispType, this->fields.enemySp, *v16, v81);
      }
      else
      {
        v82 = *(QuestInformationListViewItem_o **)(v7 + 24);
        v83 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v83,
          (Il2CppObject *)v7,
          Method_QuestInformationListViewItemDraw___c__DisplayClass26_0__SetItem_b__0__,
          0);
        QuestInformationListViewItemDraw__LoadEnemyTexture(this, v82, v83, v84);
      }
    }
    QuestInformationListViewItemDraw__SetEnemyName(this, *v16, v77);
    if ( !*v16 )
      goto LABEL_195;
    Instance = (int64_t)this->fields.classComp;
    if ( !Instance )
      goto LABEL_195;
    ServantClassIconComponent__SetWithClassOverWrite(
      (ServantClassIconComponent_o *)Instance,
      (*v16)->fields.targetId,
      (*v16)->fields.targetCnt,
      (*v16)->fields.classId,
      (*v16)->fields._IsGrand_k__BackingField,
      0);
    Instance = (int64_t)this->fields.weeklyMissionTarget;
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !*v16 )
      goto LABEL_195;
    if ( !Instance )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.weeklyMissionTarget, 0);
    Instance = (int64_t)this->fields.limitMissionTarget;
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !*v16 )
      goto LABEL_195;
    if ( !Instance )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.limitMissionTarget, 0);
    Instance = (int64_t)this->fields.eventMissionTarget;
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !*v16 )
      goto LABEL_195;
    if ( !Instance )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.eventMissionTarget, 0);
    Instance = (int64_t)this->fields.completeMissionTarget;
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !*v16 || !Instance )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v16)->fields.completeMissionTarget, 0);
    QuestInformationListViewItemDraw__UpdateTargetPosition(this, v85);
    goto LABEL_149;
  }
  if ( infoType )
    goto LABEL_149;
  Instance = (int64_t)this->fields.blankImg;
  if ( v45->fields.mRewardType )
  {
    if ( !Instance )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    v47 = *v16;
    if ( !*v16 )
      goto LABEL_195;
    Instance = (int64_t)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_195;
    v48 = v47->fields.mRewardType == 2 ? 2 : 1;
    ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)Instance, v48, v47->fields.targetId, -1, 0, 0);
    Instance = (int64_t)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_195;
    v49 = 1;
  }
  else
  {
    if ( !Instance )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (int64_t)this->fields.itemIcon;
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_195;
    v49 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v49, 0);
  if ( !*v16 )
    goto LABEL_195;
  if ( (*v16)->fields.mRewardType == 2 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !*v16 )
      goto LABEL_195;
    v62 = (ItemMaster_o *)Instance;
    if ( !Instance )
      goto LABEL_195;
    Instance = ItemMaster__isQP((ItemMaster_o *)Instance, (*v16)->fields.targetId, 0);
    if ( (Instance & 1) != 0 )
      goto LABEL_101;
    if ( !*v16 )
      goto LABEL_195;
    Instance = ItemMaster__isFriendPoint(v62, (*v16)->fields.targetId, 0);
    if ( (Instance & 1) != 0 )
      goto LABEL_101;
    if ( !*v16 )
      goto LABEL_195;
    Instance = ItemMaster__isEventPoint(v62, (*v16)->fields.targetId, 0);
    if ( (Instance & 1) != 0 )
    {
LABEL_101:
      Instance = (int64_t)this->fields.holdNumTitleLb;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          Instance = (int64_t)this->fields.holdNumCntLb;
          if ( Instance )
          {
            Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
              return;
            }
          }
        }
      }
LABEL_195:
      sub_2213CDC(Instance, v9);
    }
    if ( !*v16 )
      goto LABEL_195;
    Instance = ItemMaster__isMana(v62, (*v16)->fields.targetId, 0);
    if ( (Instance & 1) != 0 )
    {
      Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
      if ( !Instance )
        goto LABEL_195;
      v91 = (int32_t *)(Instance + 192);
    }
    else
    {
      if ( !*v16 )
        goto LABEL_195;
      Instance = ItemMaster__isRarePri(v62, (*v16)->fields.targetId, 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
        if ( !Instance )
          goto LABEL_195;
        v91 = (int32_t *)(Instance + 196);
      }
      else
      {
        if ( !*v16 )
          goto LABEL_195;
        if ( ItemMaster__isStone(v62, (*v16)->fields.targetId, 0) )
        {
          Instance = (int64_t)UserGameMaster__getSelfUserGame(0);
          if ( !Instance )
            goto LABEL_195;
          v91 = (int32_t *)(Instance + 184);
        }
        else
        {
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_195;
          v94 = DataManager__GetMasterData_object_(
                  (DataManager_o *)Instance,
                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v95 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v92, v93);
          Instance = sub_2417958(0, v95);
          if ( !*v16 )
            goto LABEL_195;
          if ( !v94 )
            goto LABEL_195;
          Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                (UserItemMaster_o *)v94,
                                Instance,
                                (*v16)->fields.targetId,
                                0);
          if ( !Instance )
            goto LABEL_195;
          v91 = (int32_t *)(Instance + 28);
        }
      }
    }
    v96 = *v91;
    holdNumTitleLb = this->fields.holdNumTitleLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v90);
    Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12590/*"SHOP_BUY_ITEM_HOLD"*/, 0);
    if ( !holdNumTitleLb )
      goto LABEL_195;
    UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0);
    holdNumCntLb = this->fields.holdNumCntLb;
    Instance = (int64_t)LocalizationManager__GetNumberFormat(v96, 0);
    if ( !holdNumCntLb )
      goto LABEL_195;
    UILabel__set_text(holdNumCntLb, (System_String_o *)Instance, 0);
    Instance = (int64_t)this->fields.holdNumTitleLb;
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_195;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (int64_t)this->fields.holdNumCntLb;
    if ( !Instance )
      goto LABEL_195;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_195;
    v63 = 1;
    goto LABEL_111;
  }
  Instance = (int64_t)this->fields.holdNumTitleLb;
  if ( !Instance )
    goto LABEL_195;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_195;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (int64_t)this->fields.holdNumCntLb;
  if ( !Instance )
    goto LABEL_195;
LABEL_109:
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_195;
  v63 = 0;
LABEL_111:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v63, 0);
LABEL_149:
  v86 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9, v44);
    v86 = BalanceConfig_TypeInfo;
  }
  if ( !v86->static_fields->IsKeepEnemyFaceIconPosZ )
  {
    v87 = (UnityEngine_Object_o *)this->fields.enemySp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v44);
    if ( UnityEngine_Object__op_Inequality(v87, 0, 0) )
    {
      Instance = (int64_t)this->fields.enemySp;
      if ( !Instance )
        goto LABEL_195;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_195;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0) )
        ComponentHelper__SetLocalPositionZ((UnityEngine_Component_o *)this->fields.enemySp, 1.0, 0);
    }
    SvtImg = (UnityEngine_Object_o *)this->fields.SvtImg;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v88);
    if ( UnityEngine_Object__op_Inequality(SvtImg, 0, 0) )
    {
      Instance = (int64_t)this->fields.SvtImg;
      if ( !Instance )
        goto LABEL_195;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
      if ( !Instance )
        goto LABEL_195;
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
  __int64 v9; // x2
  UnityEngine_GameObject_o *v10; // x20
  QuestInformationListViewItemDraw_c *v11; // x8
  struct System_Single_array *v12; // x8
  __int64 v13; // x2
  UnityEngine_GameObject_o *v14; // x20
  QuestInformationListViewItemDraw_c *v15; // x8
  struct System_Single_array *v16; // x8
  __int64 v17; // x2
  UnityEngine_GameObject_o *v18; // x19
  QuestInformationListViewItemDraw_c *v19; // x8
  struct System_Single_array *v20; // x8

  if ( (byte_596D389 & 1) == 0 )
  {
    sub_2213A60(&QuestInformationListViewItemDraw_TypeInfo);
    byte_596D389 = 1;
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
    if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, method, v4);
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
    v10 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v11 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, method, v9);
      v11 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v12 = v11->static_fields->TARGET_POSITION;
    if ( !v12 )
      goto LABEL_41;
    if ( v8 >= LODWORD(v12->max_length) )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v10, v12->m_Items[v8++], 0);
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
    v14 = (UnityEngine_GameObject_o *)completeMissionTarget;
    v15 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, method, v13);
      v15 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v16 = v15->static_fields->TARGET_POSITION;
    if ( !v16 )
      goto LABEL_41;
    if ( v8 >= LODWORD(v16->max_length) )
      goto LABEL_42;
    GameObjectExtensions__SetLocalPositionY(v14, v16->m_Items[v8++], 0);
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
      v18 = (UnityEngine_GameObject_o *)completeMissionTarget;
      v19 = QuestInformationListViewItemDraw_TypeInfo;
      if ( !*(&QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, method, v17);
        v19 = QuestInformationListViewItemDraw_TypeInfo;
      }
      v20 = v19->static_fields->TARGET_POSITION;
      if ( v20 )
      {
        if ( v8 < LODWORD(v20->max_length) )
        {
          GameObjectExtensions__SetLocalPositionY(v18, v20->m_Items[v8], 0);
          return;
        }
LABEL_42:
        sub_2213CE4(completeMissionTarget);
      }
    }
LABEL_41:
    sub_2213CDC(completeMissionTarget, method);
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
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_596D391 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (QuestInformationListViewItemDraw_o *)sub_2213A60(&StringLiteral_24068/*"quest_info"*/);
    byte_596D391 = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_object__58532980(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_24068/*"quest_info"*/,
                                                       (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0) )
  {
    sub_2213CDC(this, assetData);
  }
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  UnityEngine_Object__Instantiate_object__59717116(
    v6,
    transform,
    (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
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
    sub_2213CDC(this, method);
  }
  QuestInformationListViewItemDraw__SetDispTypeEnemyTex(
    (QuestInformationListViewItemDraw_o *)this,
    item->fields.dispType,
    *((UITexture_o **)this + 18),
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct QuestInformationListViewItemDraw_o *v13; // x8
  struct QuestInformationListViewItemDraw_o *v14; // x8
  struct QuestInformationListViewItemDraw_o *v15; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__58532980; // x0

  if ( (byte_596D392 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_17207/*"_alpha"*/);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596D392 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].fields.attrib = (struct System_String_o *)assetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this[1].fields.attrib,
    (int32_t)assetData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
  v12 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
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
  _4__this = (AssetData_o *)AssetData__GetObject_object__58532980(
                              _4__this,
                              v14->fields.enemyIconName,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
  if ( !v12
    || (UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)_4__this, 0),
        (v15 = this->fields.__4__this) == 0)
    || (enemyIconAssetData = v15->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_75651716(
                                    v15->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_17207/*"_alpha"*/,
                                    0),
        !enemyIconAssetData)
    || (Object_object__58532980 = AssetData__GetObject_object__58532980(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360),
        UnityEngine_Material__SetTexture(
          v12,
          (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__58532980,
          0),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_2213CDC(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}