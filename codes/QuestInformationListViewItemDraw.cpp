void __fastcall QuestInformationListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  int64_t v22; // x1
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct QuestInformationListViewItemDraw_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  struct QuestInformationListViewItemDraw_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  QuestInformationListViewItemDraw_c *v46; // x8
  struct QuestInformationListViewItemDraw_StaticFields *v47; // x10
  int64_t v48; // x1
  struct QuestInformationListViewItemDraw_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Array_o *v56; // x0
  int64_t v57; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_RuntimeFieldHandle_o v65; // 0:w1.4

  if ( (byte_4B1314C & 1) == 0 )
  {
    sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&float___TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58,
      v10,
      v11);
    sub_1BCA7E0(&StringLiteral_19224/*"enemy_icon_"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_22966/*"questinfo_enemy_brank"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_15295/*"Unlit/Transparent Colored"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_25722/*"？？？"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_6127/*"Enemys/Icon/"*/, v20, v21);
    byte_4B1314C = 1;
  }
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22966/*"questinfo_enemy_brank"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_22966/*"questinfo_enemy_brank"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v22 = StringLiteral_25722/*"？？？"*/;
  static_fields = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_25722/*"？？？"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->ENEMY_UNKNOWN_NAME, v22, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_6127/*"Enemys/Icon/"*/;
  v31 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v31->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6127/*"Enemys/Icon/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v31->ENEMY_ICON_TEXTURE_PATH, v30, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_19224/*"enemy_icon_"*/;
  v39 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v39->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19224/*"enemy_icon_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->ENEMY_ICON_TEXTURE_PREFIX, v38, v40, v41, v42, v43, v44, v45);
  v46 = QuestInformationListViewItemDraw_TypeInfo;
  v47 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v47->ENEMY_UNKNOWN_CLASSID = 12;
  v47->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BD1E40;
  v48 = StringLiteral_15295/*"Unlit/Transparent Colored"*/;
  v49 = v46->static_fields;
  v49->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15295/*"Unlit/Transparent Colored"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v49->DEFAULT_SHADER, v48, v50, v51, v52, v53, v54, v55);
  v56 = (System_Array_o *)sub_1BCA888(float___TypeInfo, 4LL);
  v65.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  v57 = (int64_t)v56;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v56, v65, 0LL);
  v58 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v58->TARGET_POSITION = (struct System_Single_array *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&v58->TARGET_POSITION, v57, v59, v60, v61, v62, v63, v64);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  CommonUI_o *Instance; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  const MethodInfo *v34; // x1
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v37; // x0
  struct System_String_o *v38; // x0
  struct System_String_o **p_enemyIconName; // x19
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_String_o *v46; // x19
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  AssetLoader_LoadEndDataHandler_o *v50; // x20
  __int64 v51; // x1
  int32_t v52; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B13149 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, item, callback);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
    sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__, v15, v16);
    sub_1BCA7E0(&QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo, v17, v18);
    byte_4B13149 = 1;
  }
  v19 = sub_1BCAA2C(QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo, item, callback, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_14;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)callback, v28, v29, v30, v31, v32, v33);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v34);
  Instance = (CommonUI_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, v21);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v52 = iconId;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v38 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v37, 0LL);
  this->fields.enemyIconName = v38;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1BCA784((PartyOrganizationUtility_o *)p_enemyIconName, (int64_t)v38, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_62401220(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v50 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v47, v48, v49);
  AssetLoader_LoadEndDataHandler___ctor(
    v50,
    (Il2CppObject *)v19,
    Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v51);
  if ( !AssetManager__loadAssetStorage(v46, v50, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(Instance, v21);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o **p_enemyIconName; // x20
  __int64 v7; // x1
  QuestInformationListViewItemDraw_c *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  PartyOrganizationUtility_o *p_enemyIconAssetData; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B1314A & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, v4, v5);
    byte_4B1314A = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v8 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, v7);
      v8 = QuestInformationListViewItemDraw_TypeInfo;
    }
    v10 = System_String__Concat_62401220(v8->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
    AssetManager__releaseAssetStorage(v10, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (PartyOrganizationUtility_o *)&this->fields.enemyIconAssetData;
    sub_1BCA784(p_enemyIconAssetData, 0LL, v12, v13, v14, v15, v16, v17);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_enemyIconName, 0LL, v18, v19, v20, v21, v22, v23);
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
  __int64 v9; // x2
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  UnityEngine_Material_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  UnityEngine_Material_o *v18; // x21
  struct UnityEngine_GameObject_o *blankImg; // x8
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13146 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp, sp);
    this = (QuestInformationListViewItemDraw_o *)sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, v8, v9);
    byte_4B13146 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( sp )
      {
        v20.fields.r = 1.0;
        v20.fields.g = 1.0;
        v20.fields.b = 1.0;
        v20.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)sp, v20, 0LL);
        if ( lManager )
        {
          v14 = QuestInformationListViewManager__NewChocoMaterialForSprite(lManager, *(const MethodInfo **)&dispTp);
          v18 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v15, v16, v17);
          UnityEngine_Material___ctor_70017516(v18, v14, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v18, 0LL);
          return;
        }
      }
      goto LABEL_17;
    case 2:
      this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
        this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      }
      if ( sp )
      {
        blankImg = this[1].fields.blankImg;
        v12 = *((float *)&blankImg[1].fields + 1);
        v13 = *(float *)&blankImg[2].klass;
        v10 = *((float *)&blankImg[1].monitor + 1);
        v11 = *(float *)&blankImg[1].fields.m_CachedPtr;
        goto LABEL_15;
      }
LABEL_17:
      sub_1BCAA3C(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v10 = 1.0;
        v11 = 1.0;
        v12 = 1.0;
        v13 = 1.0;
LABEL_15:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v10, 0LL);
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

  if ( (byte_4B13148 & 1) == 0 )
  {
    this = (QuestInformationListViewItemDraw_o *)sub_1BCA7E0(
                                                   &QuestInformationListViewItemDraw_TypeInfo,
                                                   *(_QWORD *)&dispTp,
                                                   texture);
    byte_4B13148 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
      if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
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
      sub_1BCAA3C(this, *(_QWORD *)&dispTp);
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
void __fastcall QuestInformationListViewItemDraw__SetDispType_34666820(
        QuestInformationListViewItemDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        QuestInformationListViewManager_o *lManager,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  QuestInformationListViewItemDraw_o *v10; // x20
  __int64 v11; // x1
  QuestInformationListViewItemDraw_c *v12; // x0
  UnityEngine_Material_o *v13; // x20
  float *blankImg; // x8
  UnityEngine_Shader_o *v15; // x0
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13147 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp, texture);
    this = (QuestInformationListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v8, v9);
    byte_4B13147 = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v17.fields.r = 1.0;
      v17.fields.g = 1.0;
      v17.fields.b = 1.0;
      v17.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v17, 0LL);
      this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                                     texture,
                                                     0LL,
                                                     texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( lManager )
      {
        v13 = QuestInformationListViewManager__NewChocoMaterialForTexture(lManager, *(const MethodInfo **)&dispTp);
        this = (QuestInformationListViewItemDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                       texture,
                                                       texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v13 )
        {
          UnityEngine_Material__SetTexture(
            v13,
            (System_String_o *)StringLiteral_16431/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this,
            0LL);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
            texture,
            v13,
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
      v16.fields.r = 1.0;
      v16.fields.g = 1.0;
      v16.fields.b = 1.0;
      v16.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v16, 0LL);
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
        v10 = this;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
        if ( v10 )
        {
          if ( !System_String__Equals_62409536(
                  (System_String_o *)v10,
                  QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v12 = QuestInformationListViewItemDraw_TypeInfo;
            if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
              goto LABEL_26;
            goto LABEL_27;
          }
          return;
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(this, *(_QWORD *)&dispTp);
  }
  this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (QuestInformationListViewItemDraw_o *)QuestInformationListViewItemDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_28;
  blankImg = (float *)this[1].fields.blankImg;
  v18.fields.b = blankImg[11];
  v18.fields.a = blankImg[12];
  v18.fields.r = blankImg[9];
  v18.fields.g = blankImg[10];
  UIWidget__set_color((UIWidget_o *)texture, v18, 0LL);
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
  if ( !System_String__Equals_62409536(
          (System_String_o *)this,
          QuestInformationListViewItemDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v12 = QuestInformationListViewItemDraw_TypeInfo;
    if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v12, v11);
      v12 = QuestInformationListViewItemDraw_TypeInfo;
    }
LABEL_27:
    v15 = UnityEngine_Shader__Find(v12->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v15,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  AssetLoader_LoadEndDataHandler_o *v16; // x22
  __int64 v17; // x1

  v4 = this;
  if ( (byte_4B1314B & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, item, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__32_0__, v7, v8);
    this = (QuestInformationListViewItemDraw_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v9, v10);
    byte_4B1314B = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, item);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0LL);
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    AssetLoader_LoadEndDataHandler___ctor(
      v16,
      (Il2CppObject *)v4,
      Method_QuestInformationListViewItemDraw__SetEnemyName_b__32_0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
    AssetManager__loadAssetStorage(NameEffectPath, v16, 1, 0LL);
  }
  this = (QuestInformationListViewItemDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1BCAA3C(this, item);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x22
  int64_t Instance; // x0
  QuestInformationListViewManager_c *v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  QuestInformationListViewItem_o **v50; // x20
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x1
  UnityEngine_Object_o *completeMissionTarget; // x21
  Il2CppObject *MasterData_object; // x21
  int v60; // w8
  int64_t v61; // x24
  unsigned int v62; // w26
  __int64 v63; // x8
  __int64 v64; // x8
  __int64 v65; // x8
  QuestInformationListViewItem_o *v66; // x8
  struct ListViewObject_o *viewObject; // x9
  QuestInformationListViewManager_o *manager; // x21
  __int64 methodPtr_low; // x10
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v71; // x8
  int32_t v72; // w1
  bool v73; // w1
  int32_t mEnemyType; // w24
  struct UITexture_o **p_SvtImg; // x23
  QuestInformationListViewItem_o *v76; // x8
  UITexture_o *v77; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  const MethodInfo *v87; // x4
  const MethodInfo *v88; // x2
  ItemMaster_o *v89; // x21
  __int64 v90; // x1
  __int64 v91; // x2
  TerminalSceneComponent_c *v92; // x0
  UnityEngine_Object_o *mInstance; // x22
  __int64 v94; // x2
  UISprite_o *enemySp; // x22
  __int64 v96; // x8
  UISprite_o *v97; // x22
  QuestInformationListViewItemDraw_o *v98; // x0
  const MethodInfo *v99; // x4
  struct ServantClassIconComponent_o *classComp; // x8
  bool v101; // w1
  UISprite_o *v102; // x23
  int32_t iconId; // w24
  __int64 v104; // x2
  __int64 v105; // x3
  const MethodInfo *v106; // x4
  QuestInformationListViewItem_o *v107; // x21
  System_Action_o *v108; // x23
  const MethodInfo *v109; // x3
  const MethodInfo *v110; // x1
  int32_t *v111; // x8
  __int64 v112; // x1
  Il2CppObject *v113; // x21
  int32_t v114; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21
  QuestInformationListViewItemDraw___c__DisplayClass25_0_o *v117; // x0
  const MethodInfo *v118; // x1

  if ( (byte_4B13144 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, v23, v24);
    sub_1BCA7E0(&QuestInformationListViewManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__, v33, v34);
    sub_1BCA7E0(&QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_12152/*"SHOP_BUY_ITEM_HOLD"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v39, v40);
    byte_4B13144 = 1;
  }
  v41 = sub_1BCAA2C(QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo, item, *(_QWORD *)&mode, method);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  if ( !v41 )
    goto LABEL_165;
  *(_QWORD *)(v41 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), (int64_t)this, v44, v45, v46, v47, v48, v49);
  *(_QWORD *)(v41 + 24) = item;
  v50 = (QuestInformationListViewItem_o **)(v41 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 24), (int64_t)item, v51, v52, v53, v54, v55, v56);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
  Instance = UnityEngine_Object__op_Inequality(completeMissionTarget, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_165;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_165;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_165;
    Instance = (int64_t)MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_165;
    v60 = *(_DWORD *)(Instance + 24);
    v61 = Instance;
    if ( v60 >= 1 )
    {
      v62 = 0;
      while ( 1 )
      {
        if ( v62 >= v60 )
          goto LABEL_166;
        v63 = *(_QWORD *)(v61 + 8LL * (int)v62 + 32);
        if ( !v63 )
          goto LABEL_165;
        if ( !MasterData_object )
          goto LABEL_165;
        Instance = (int64_t)EventMissionMaster__getCompleteMissionList(
                              (EventMissionMaster_o *)MasterData_object,
                              *(_DWORD *)(v63 + 20),
                              0LL);
        if ( !Instance )
          goto LABEL_165;
        v64 = *(_QWORD *)(Instance + 24);
        if ( v64 )
          break;
        v60 = *(_DWORD *)(v61 + 24);
        if ( (int)++v62 >= v60 )
          goto LABEL_24;
      }
      if ( !(_DWORD)v64 )
LABEL_166:
        sub_1BCAA44(Instance, v43);
      v65 = *(_QWORD *)(Instance + 32);
      if ( !v65 )
        goto LABEL_165;
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v65 + 28), 0LL);
    }
  }
LABEL_24:
  v66 = *v50;
  if ( !*v50 )
    goto LABEL_165;
  viewObject = v66->fields.viewObject;
  if ( !viewObject )
    goto LABEL_165;
  manager = (QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( manager
    && ((v43 = QuestInformationListViewManager_TypeInfo,
         methodPtr_low = LOBYTE(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewManager_TypeInfo) )
  {
    sub_1BCACFC(manager);
    QuestInformationListViewItemDraw___c__DisplayClass25_0___ctor(v117, v118);
  }
  else if ( mode )
  {
    infoType = v66->fields.infoType;
    if ( infoType == 1 )
    {
      mEnemyType = v66->fields.mEnemyType;
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
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v90);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v90, v91);
          byte_4B10F83 = 1;
        }
        v92 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v90);
          v92 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v92->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90);
        if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
        {
          enemySp = (UISprite_o *)this->fields.enemySp;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v43);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v43, v94);
            byte_4B10F83 = 1;
          }
          Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v43);
            Instance = (int64_t)TerminalSceneComponent_TypeInfo;
          }
          v96 = **(_QWORD **)(Instance + 184);
          if ( !v96 || !enemySp )
            goto LABEL_165;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v96 + 304), 0LL);
        }
        v97 = (UISprite_o *)this->fields.enemySp;
        Instance = (int64_t)QuestInformationListViewItemDraw_TypeInfo;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, v43);
        if ( v97 )
        {
          UISprite__set_spriteName(v97, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0LL);
          QuestInformationListViewItemDraw__SetDispType(v98, 1, this->fields.enemySp, manager, v99);
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
                            if ( *v50 )
                            {
                              if ( Instance )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (*v50)->fields.eventMissionTarget,
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
                                  v101 = 0;
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
        sub_1BCAA3C(Instance, v43);
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
        v76 = *v50;
        if ( !*v50 )
          goto LABEL_165;
        v77 = *p_SvtImg;
        targetId = v76->fields.targetId;
        targetCnt = v76->fields.targetCnt;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v43);
        Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v77, targetId, targetCnt, targetCnt, 0LL);
        *p_SvtImg = Manager__loadCommandCard;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.SvtImg,
          (int64_t)Manager__loadCommandCard,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86);
        if ( !*v50 )
          goto LABEL_165;
        QuestInformationListViewItemDraw__SetDispType_34666820(
          (QuestInformationListViewItemDraw_o *)Instance,
          (*v50)->fields.dispType,
          this->fields.SvtImg,
          manager,
          v87);
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
        if ( !*v50 )
          goto LABEL_165;
        v102 = (UISprite_o *)this->fields.enemySp;
        iconId = (*v50)->fields.iconId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43);
        if ( AtlasManager__SetEnemy(v102, iconId, 0LL) )
        {
          Instance = (int64_t)this->fields.enemySp;
          if ( !Instance )
            goto LABEL_165;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.enemyTexture;
          if ( !Instance )
            goto LABEL_165;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
          if ( !*v50 )
            goto LABEL_165;
          QuestInformationListViewItemDraw__SetDispType(
            (QuestInformationListViewItemDraw_o *)Instance,
            (*v50)->fields.dispType,
            this->fields.enemySp,
            manager,
            v106);
        }
        else
        {
          v107 = *(QuestInformationListViewItem_o **)(v41 + 24);
          v108 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v104, v105);
          System_Action___ctor(
            v108,
            (Il2CppObject *)v41,
            Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__,
            0LL);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v107, v108, v109);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v50, v88);
      if ( !*v50 )
        goto LABEL_165;
      Instance = (int64_t)this->fields.classComp;
      if ( !Instance )
        goto LABEL_165;
      ServantClassIconComponent__SetWithClassOverWrite(
        (ServantClassIconComponent_o *)Instance,
        (*v50)->fields.targetId,
        (*v50)->fields.targetCnt,
        (*v50)->fields.classId,
        0LL);
      Instance = (int64_t)this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v50 )
        goto LABEL_165;
      if ( !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v50)->fields.weeklyMissionTarget, 0LL);
      Instance = (int64_t)this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v50 )
        goto LABEL_165;
      if ( !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v50)->fields.limitMissionTarget, 0LL);
      Instance = (int64_t)this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v50 )
        goto LABEL_165;
      if ( !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v50)->fields.eventMissionTarget, 0LL);
      Instance = (int64_t)this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_165;
      Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v50 || !Instance )
        goto LABEL_165;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v50)->fields.completeMissionTarget, 0LL);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v110);
    }
    else if ( !infoType )
    {
      Instance = (int64_t)this->fields.blankImg;
      if ( !Instance )
        goto LABEL_165;
      if ( v66->fields.mRewardType )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        v71 = *v50;
        if ( !*v50 )
          goto LABEL_165;
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_165;
        v72 = v71->fields.mRewardType == 2 ? 2 : 1;
        ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)Instance, v72, v71->fields.targetId, -1, 0, 0LL);
        Instance = (int64_t)this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_165;
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_165;
        v73 = 1;
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
        v73 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v73, 0LL);
      if ( !*v50 )
        goto LABEL_165;
      if ( (*v50)->fields.mRewardType != 2 )
        goto LABEL_67;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( *v50 )
        {
          v89 = (ItemMaster_o *)Instance;
          if ( Instance )
          {
            Instance = ItemMaster__isQP((ItemMaster_o *)Instance, (*v50)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_67;
            if ( !*v50 )
              goto LABEL_165;
            Instance = ItemMaster__isFriendPoint(v89, (*v50)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
              goto LABEL_67;
            if ( !*v50 )
              goto LABEL_165;
            Instance = ItemMaster__isEventPoint(v89, (*v50)->fields.targetId, 0LL);
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
            if ( !*v50 )
              goto LABEL_165;
            Instance = ItemMaster__isMana(v89, (*v50)->fields.targetId, 0LL);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_165;
              v111 = (int32_t *)(Instance + 184);
            }
            else
            {
              if ( !*v50 )
                goto LABEL_165;
              Instance = ItemMaster__isRarePri(v89, (*v50)->fields.targetId, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( !Instance )
                  goto LABEL_165;
                v111 = (int32_t *)(Instance + 188);
              }
              else
              {
                if ( !*v50 )
                  goto LABEL_165;
                if ( ItemMaster__isStone(v89, (*v50)->fields.targetId, 0LL) )
                {
                  Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                  if ( !Instance )
                    goto LABEL_165;
                  v111 = (int32_t *)(Instance + 176);
                }
                else
                {
                  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_165;
                  v113 = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v112);
                  Instance = NetworkManager__get_UserId(0LL);
                  if ( !*v50 )
                    goto LABEL_165;
                  if ( !v113 )
                    goto LABEL_165;
                  Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                        (UserItemMaster_o *)v113,
                                        Instance,
                                        (*v50)->fields.targetId,
                                        0LL);
                  if ( !Instance )
                    goto LABEL_165;
                  v111 = (int32_t *)(Instance + 28);
                }
              }
            }
            v114 = *v111;
            holdNumTitleLb = this->fields.holdNumTitleLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
            Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12152/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
            if ( holdNumTitleLb )
            {
              UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
              holdNumCntLb = this->fields.holdNumCntLb;
              Instance = (int64_t)LocalizationManager__GetNumberFormat(v114, 0LL);
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
                        v101 = 1;
LABEL_110:
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v101, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Component_o *completeMissionTarget; // x0
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

  if ( (byte_4B13145 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestInformationListViewItemDraw_TypeInfo, method, v2);
    byte_4B13145 = 1;
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
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, method);
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
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, method);
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
      j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, method);
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
        j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo, method);
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
        sub_1BCAA44(completeMissionTarget, method);
      }
    }
LABEL_41:
    sub_1BCAA3C(completeMissionTarget, method);
  }
}


void __fastcall QuestInformationListViewItemDraw___SetEnemyName_b__32_0(
        QuestInformationListViewItemDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  QuestInformationListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v12; // x19
  __int64 v13; // x1
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4B1314D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (QuestInformationListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_22945/*"quest_info"*/, v9, v10);
    byte_4B1314D = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_object__49237568(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_22945/*"quest_info"*/,
                                                       (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1BCAA3C(this, assetData);
  }
  v12 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  UnityEngine_Object__Instantiate_object__49903816(
    v12,
    transform,
    (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
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
    sub_1BCAA3C(this, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  UnityEngine_Material_o *v25; // x20
  struct QuestInformationListViewItemDraw_o *v26; // x8
  struct QuestInformationListViewItemDraw_o *v27; // x8
  struct QuestInformationListViewItemDraw_o *v28; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__49237568; // x0

  if ( (byte_4B1314E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, assetData, method);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_16695/*"_alpha"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v18, v19);
    byte_4B1314E = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  *(_QWORD *)&_4__this[1].fields.nowVersion = assetData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&_4__this[1].fields.nowVersion,
    (int64_t)assetData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v21 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5048/*"Custom/SpriteWithMask"*/, 0LL);
  v25 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v22, v23, v24);
  UnityEngine_Material___ctor(v25, v21, 0LL);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_13;
  _4__this = (AssetData_o *)v26->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v25,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_13;
  _4__this = v27->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)AssetData__GetObject_object__49237568(
                              _4__this,
                              v27->fields.enemyIconName,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720);
  if ( !v25
    || (UnityEngine_Material__set_mainTexture(v25, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v28 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v28->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_62401220(
                                    v28->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16695/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720),
        UnityEngine_Material__SetTexture(
          v25,
          (System_String_o *)StringLiteral_16436/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__49237568,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}