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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t v15; // x1
  struct QuestInformationListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct QuestInformationListViewItemDraw_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct QuestInformationListViewItemDraw_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  QuestInformationListViewItemDraw_c *v39; // x8
  struct QuestInformationListViewItemDraw_StaticFields *v40; // x10
  int64_t v41; // x1
  struct QuestInformationListViewItemDraw_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Array_o *v49; // x0
  int64_t v50; // x19
  struct QuestInformationListViewItemDraw_StaticFields *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_RuntimeFieldHandle_o v58; // 0:w1.4

  if ( (byte_4B63AC4 & 1) == 0 )
  {
    sub_1BE4ACC(&QuestInformationListViewItemDraw_TypeInfo, v1);
    sub_1BE4ACC(&float___TypeInfo, v8);
    sub_1BE4ACC(
      &Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58,
      v9);
    sub_1BE4ACC(&StringLiteral_19282/*"enemy_icon_"*/, v10);
    sub_1BE4ACC(&StringLiteral_23044/*"questinfo_enemy_brank"*/, v11);
    sub_1BE4ACC(&StringLiteral_15333/*"Unlit/Transparent Colored"*/, v12);
    sub_1BE4ACC(&StringLiteral_25816/*"？？？"*/, v13);
    sub_1BE4ACC(&StringLiteral_6142/*"Enemys/Icon/"*/, v14);
    byte_4B63AC4 = 1;
  }
  QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_23044/*"questinfo_enemy_brank"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)QuestInformationListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_23044/*"questinfo_enemy_brank"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v15 = StringLiteral_25816/*"？？？"*/;
  static_fields = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = (struct System_String_o *)StringLiteral_25816/*"？？？"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->ENEMY_UNKNOWN_NAME, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_6142/*"Enemys/Icon/"*/;
  v24 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v24->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6142/*"Enemys/Icon/"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v24->ENEMY_ICON_TEXTURE_PATH, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_19282/*"enemy_icon_"*/;
  v32 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v32->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19282/*"enemy_icon_"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v32->ENEMY_ICON_TEXTURE_PREFIX, v31, v33, v34, v35, v36, v37, v38);
  v39 = QuestInformationListViewItemDraw_TypeInfo;
  v40 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v40->ENEMY_UNKNOWN_CLASSID = 12;
  v40->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BE13B0;
  v41 = StringLiteral_15333/*"Unlit/Transparent Colored"*/;
  v42 = v39->static_fields;
  v42->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15333/*"Unlit/Transparent Colored"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v42->DEFAULT_SHADER, v41, v43, v44, v45, v46, v47, v48);
  v49 = (System_Array_o *)sub_1BE4B74(float___TypeInfo, 4LL);
  v58.fields.value = Field__PrivateImplementationDetails__8F796773B56326A3653096CD68407FB306C75260B4E9EC37B8CCB3A5A985DB58;
  v50 = (int64_t)v49;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62606144(v49, v58, 0LL);
  v51 = QuestInformationListViewItemDraw_TypeInfo->static_fields;
  v51->TARGET_POSITION = (struct System_Single_array *)v50;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v51->TARGET_POSITION, v50, v52, v53, v54, v55, v56, v57);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v34; // x0
  struct System_String_o *v35; // x0
  struct System_String_o **p_enemyIconName; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_String_o *v43; // x19
  AssetLoader_LoadEndDataHandler_o *v44; // x20
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B63AC1 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, item);
    sub_1BE4ACC(&int_TypeInfo, v7);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1BE4ACC(&QuestInformationListViewItemDraw_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BE4ACC(&Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__, v11);
    sub_1BE4ACC(&QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo, v12);
    byte_4B63AC1 = 1;
  }
  v13 = sub_1BE4D18(QuestInformationListViewItemDraw___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)callback, v22, v23, v24, v25, v26, v27);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  QuestInformationListViewItemDraw__ReleaseEnemyTexture(this, v28);
  Instance = (CommonUI_o *)QuestInformationListViewItemDraw_TypeInfo;
  if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v45 = iconId;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v29, v30, v31);
  v35 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v34, 0LL);
  this->fields.enemyIconName = v35;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_enemyIconName, (int64_t)v35, v37, v38, v39, v40, v41, v42);
  v43 = System_String__Concat_62698808(
          QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v44 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v44,
    (Il2CppObject *)v13,
    Method_QuestInformationListViewItemDraw___c__DisplayClass30_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v43, v44, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1BE4D28(Instance, v15);
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
  PartyOrganizationUtility_o *p_enemyIconAssetData; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B63AC2 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&QuestInformationListViewItemDraw_TypeInfo, v3);
    byte_4B63AC2 = 1;
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
    v6 = System_String__Concat_62698808(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (PartyOrganizationUtility_o *)&this->fields.enemyIconAssetData;
    sub_1BE4A70(p_enemyIconAssetData, 0LL, v8, v9, v10, v11, v12, v13);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)p_enemyIconName, 0LL, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4B63ABE & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Material_TypeInfo, *(_QWORD *)&dispTp);
    this = (QuestInformationListViewItemDraw_o *)sub_1BE4ACC(&QuestInformationListViewItemDraw_TypeInfo, v8);
    byte_4B63ABE = 1;
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
          v14 = (UnityEngine_Material_o *)sub_1BE4D18(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_70315272(v14, v13, 0LL);
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
      sub_1BE4D28(this, *(_QWORD *)&dispTp);
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

  if ( (byte_4B63AC0 & 1) == 0 )
  {
    this = (QuestInformationListViewItemDraw_o *)sub_1BE4ACC(
                                                   &QuestInformationListViewItemDraw_TypeInfo,
                                                   *(_QWORD *)&dispTp);
    byte_4B63AC0 = 1;
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
      sub_1BE4D28(this, *(_QWORD *)&dispTp);
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
void __fastcall QuestInformationListViewItemDraw__SetDispType_34825680(
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

  if ( (byte_4B63ABF & 1) == 0 )
  {
    sub_1BE4ACC(&QuestInformationListViewItemDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (QuestInformationListViewItemDraw_o *)sub_1BE4ACC(&StringLiteral_16471/*"_MainTex"*/, v8);
    byte_4B63ABF = 1;
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
            (System_String_o *)StringLiteral_16471/*"_MainTex"*/,
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
          if ( !System_String__Equals_62707124(
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
    sub_1BE4D28(this, *(_QWORD *)&dispTp);
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
  if ( !System_String__Equals_62707124(
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
  if ( (byte_4B63AC3 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, item);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BE4ACC(&Method_QuestInformationListViewItemDraw__SetEnemyName_b__32_0__, v6);
    this = (QuestInformationListViewItemDraw_o *)sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v7);
    byte_4B63AC3 = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0LL);
    v10 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    sub_1BE4D28(this, item);
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  QuestInformationListViewItem_o **v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  UnityEngine_Object_o *completeMissionTarget; // x21
  Il2CppObject *MasterData_object; // x21
  int v42; // w8
  void *v43; // x24
  unsigned int v44; // w26
  __int64 v45; // x8
  __int64 v46; // x8
  __int64 v47; // x8
  QuestInformationListViewItem_o *v48; // x8
  struct ListViewObject_o *viewObject; // x9
  QuestInformationListViewManager_o *manager; // x21
  __int64 methodPtr_low; // x10
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
  UITexture_o *Manager__loadCommandCard; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
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
  Il2CppObject *v90; // x21
  int32_t v91; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21
  QuestInformationListViewItemDraw___c__DisplayClass25_0_o *v94; // x0
  const MethodInfo *v95; // x1

  if ( (byte_4B63ABC & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, item);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMissionMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_MstMissionMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v12);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v13);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v14);
    sub_1BE4ACC(&QuestInformationListViewItemDraw_TypeInfo, v15);
    sub_1BE4ACC(&QuestInformationListViewManager_TypeInfo, v16);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v17);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BE4ACC(&TerminalSceneComponent_TypeInfo, v19);
    sub_1BE4ACC(&Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__, v20);
    sub_1BE4ACC(&QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo, v21);
    sub_1BE4ACC(&StringLiteral_12184/*"SHOP_BUY_ITEM_HOLD"*/, v22);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v23);
    byte_4B63ABC = 1;
  }
  v24 = sub_1BE4D18(QuestInformationListViewItemDraw___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v24, 0LL);
  if ( !v24 )
    goto LABEL_169;
  *(_QWORD *)(v24 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 16), (int64_t)this, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v24 + 24) = item;
  v33 = (QuestInformationListViewItem_o **)(v24 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 24), (int64_t)item, v34, v35, v36, v37, v38, v39);
  completeMissionTarget = (UnityEngine_Object_o *)this->fields.completeMissionTarget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Inequality(completeMissionTarget, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_169;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_169;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_MstMissionMaster___);
    if ( !Instance )
      goto LABEL_169;
    Instance = MstMissionMaster__GetEnableMissions((MstMissionMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_169;
    v42 = *((_DWORD *)Instance + 6);
    v43 = Instance;
    if ( v42 >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( v44 >= v42 )
          goto LABEL_170;
        v45 = *((_QWORD *)v43 + (int)v44 + 4);
        if ( !v45 )
          goto LABEL_169;
        if ( !MasterData_object )
          goto LABEL_169;
        Instance = EventMissionMaster__getCompleteMissionList(
                     (EventMissionMaster_o *)MasterData_object,
                     *(_DWORD *)(v45 + 20),
                     0LL);
        if ( !Instance )
          goto LABEL_169;
        v46 = *((_QWORD *)Instance + 3);
        if ( v46 )
          break;
        v42 = *((_DWORD *)v43 + 6);
        if ( (int)++v44 >= v42 )
          goto LABEL_24;
      }
      if ( !(_DWORD)v46 )
LABEL_170:
        sub_1BE4D30(Instance, v26);
      v47 = *((_QWORD *)Instance + 4);
      if ( !v47 )
        goto LABEL_169;
      Instance = this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_169;
      CompleteMissionSprite__InitTarget((CompleteMissionSprite_o *)Instance, *(_DWORD *)(v47 + 28), 0LL);
    }
  }
LABEL_24:
  v48 = *v33;
  if ( !*v33 )
    goto LABEL_169;
  viewObject = v48->fields.viewObject;
  if ( !viewObject )
    goto LABEL_169;
  manager = (QuestInformationListViewManager_o *)viewObject->fields.manager;
  if ( manager
    && ((v26 = QuestInformationListViewManager_TypeInfo,
         methodPtr_low = LOBYTE(QuestInformationListViewManager_TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(manager->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
     || (QuestInformationListViewManager_c *)manager->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestInformationListViewManager_TypeInfo) )
  {
    sub_1BE4FE8(manager);
    QuestInformationListViewItemDraw___c__DisplayClass25_0___ctor(v94, v95);
  }
  else if ( mode )
  {
    infoType = v48->fields.infoType;
    if ( infoType == 1 )
    {
      mEnemyType = v48->fields.mEnemyType;
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
        if ( !byte_4B618A6 )
        {
          sub_1BE4ACC(&TerminalSceneComponent_TypeInfo, v72);
          byte_4B618A6 = 1;
        }
        v73 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v73 = TerminalSceneComponent_TypeInfo;
        }
        mInstance = (UnityEngine_Object_o *)v73->static_fields->mInstance;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
        {
          enemySp = (UISprite_o *)this->fields.enemySp;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4B618A6 )
          {
            sub_1BE4ACC(&TerminalSceneComponent_TypeInfo, v26);
            byte_4B618A6 = 1;
          }
          Instance = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            Instance = TerminalSceneComponent_TypeInfo;
          }
          v76 = **((_QWORD **)Instance + 23);
          if ( !v76 || !enemySp )
            goto LABEL_169;
          UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v76 + 304), 0LL);
        }
        v77 = (UISprite_o *)this->fields.enemySp;
        Instance = QuestInformationListViewItemDraw_TypeInfo;
        if ( !QuestInformationListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationListViewItemDraw_TypeInfo);
        if ( v77 )
        {
          UISprite__set_spriteName(v77, QuestInformationListViewItemDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0LL);
          QuestInformationListViewItemDraw__SetDispType(v78, 1, this->fields.enemySp, manager, v79);
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
                            if ( *v33 )
                            {
                              if ( Instance )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (*v33)->fields.eventMissionTarget,
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
                                  v81 = 0;
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
        sub_1BE4D28(Instance, v26);
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
        v58 = *v33;
        if ( !*v33 )
          goto LABEL_169;
        v59 = *p_SvtImg;
        targetId = v58->fields.targetId;
        targetCnt = v58->fields.targetCnt;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v59, targetId, targetCnt, targetCnt, 0LL);
        *p_SvtImg = Manager__loadCommandCard;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.SvtImg,
          (int64_t)Manager__loadCommandCard,
          v63,
          v64,
          v65,
          v66,
          v67,
          v68);
        if ( !*v33 )
          goto LABEL_169;
        QuestInformationListViewItemDraw__SetDispType_34825680(
          (QuestInformationListViewItemDraw_o *)Instance,
          (*v33)->fields.dispType,
          this->fields.SvtImg,
          manager,
          v69);
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
        if ( !*v33 )
          goto LABEL_169;
        v82 = (UISprite_o *)this->fields.enemySp;
        iconId = (*v33)->fields.iconId;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        if ( AtlasManager__SetEnemy(v82, iconId, 0LL) )
        {
          Instance = this->fields.enemySp;
          if ( !Instance )
            goto LABEL_169;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
          Instance = this->fields.enemyTexture;
          if ( !Instance )
            goto LABEL_169;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
          if ( !*v33 )
            goto LABEL_169;
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
          v86 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(
            v86,
            (Il2CppObject *)v24,
            Method_QuestInformationListViewItemDraw___c__DisplayClass25_0__SetItem_b__0__,
            0LL);
          QuestInformationListViewItemDraw__LoadEnemyTexture(this, v85, v86, v87);
        }
      }
      QuestInformationListViewItemDraw__SetEnemyName(this, *v33, v70);
      if ( !*v33 )
        goto LABEL_169;
      Instance = this->fields.classComp;
      if ( !Instance )
        goto LABEL_169;
      ServantClassIconComponent__SetWithClassOverWrite(
        (ServantClassIconComponent_o *)Instance,
        (*v33)->fields.targetId,
        (*v33)->fields.targetCnt,
        (*v33)->fields.classId,
        0LL);
      Instance = this->fields.weeklyMissionTarget;
      if ( !Instance )
        goto LABEL_169;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v33 )
        goto LABEL_169;
      if ( !Instance )
        goto LABEL_169;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v33)->fields.weeklyMissionTarget, 0LL);
      Instance = this->fields.limitMissionTarget;
      if ( !Instance )
        goto LABEL_169;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v33 )
        goto LABEL_169;
      if ( !Instance )
        goto LABEL_169;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v33)->fields.limitMissionTarget, 0LL);
      Instance = this->fields.eventMissionTarget;
      if ( !Instance )
        goto LABEL_169;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v33 )
        goto LABEL_169;
      if ( !Instance )
        goto LABEL_169;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v33)->fields.eventMissionTarget, 0LL);
      Instance = this->fields.completeMissionTarget;
      if ( !Instance )
        goto LABEL_169;
      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
      if ( !*v33 || !Instance )
        goto LABEL_169;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, (*v33)->fields.completeMissionTarget, 0LL);
      QuestInformationListViewItemDraw__UpdateTargetPosition(this, v88);
    }
    else if ( !infoType )
    {
      Instance = this->fields.blankImg;
      if ( !Instance )
        goto LABEL_169;
      if ( v48->fields.mRewardType )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        v53 = *v33;
        if ( !*v33 )
          goto LABEL_169;
        Instance = this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_169;
        v54 = v53->fields.mRewardType == 2 ? 2 : 1;
        ItemIconComponent__SetGift_39048172((ItemIconComponent_o *)Instance, v54, v53->fields.targetId, -1, 0, 0LL);
        Instance = this->fields.itemIcon;
        if ( !Instance )
          goto LABEL_169;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          goto LABEL_169;
        v55 = 1;
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
        v55 = 0;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v55, 0LL);
      if ( !*v33 )
        goto LABEL_169;
      if ( (*v33)->fields.mRewardType != 2 )
        goto LABEL_67;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( *v33 )
        {
          v71 = (ItemMaster_o *)Instance;
          if ( Instance )
          {
            Instance = (void *)ItemMaster__isQP((ItemMaster_o *)Instance, (*v33)->fields.targetId, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_67;
            if ( !*v33 )
              goto LABEL_169;
            Instance = (void *)ItemMaster__isFriendPoint(v71, (*v33)->fields.targetId, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
              goto LABEL_67;
            if ( !*v33 )
              goto LABEL_169;
            Instance = (void *)ItemMaster__isEventPoint(v71, (*v33)->fields.targetId, 0LL);
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
            if ( !*v33 )
              goto LABEL_169;
            Instance = (void *)ItemMaster__isMana(v71, (*v33)->fields.targetId, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = UserGameMaster__getSelfUserGame(0LL);
              if ( !Instance )
                goto LABEL_169;
              v89 = (int32_t *)((char *)Instance + 184);
            }
            else
            {
              if ( !*v33 )
                goto LABEL_169;
              Instance = (void *)ItemMaster__isRarePri(v71, (*v33)->fields.targetId, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = UserGameMaster__getSelfUserGame(0LL);
                if ( !Instance )
                  goto LABEL_169;
                v89 = (int32_t *)((char *)Instance + 188);
              }
              else
              {
                if ( !*v33 )
                  goto LABEL_169;
                if ( ItemMaster__isStone(v71, (*v33)->fields.targetId, 0LL) )
                {
                  Instance = UserGameMaster__getSelfUserGame(0LL);
                  if ( !Instance )
                    goto LABEL_169;
                  v89 = (int32_t *)((char *)Instance + 176);
                }
                else
                {
                  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( !Instance )
                    goto LABEL_169;
                  v90 = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserItemMaster___);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  if ( !byte_4B61717 )
                  {
                    sub_1BE4ACC(&NetworkManager_TypeInfo, v26);
                    byte_4B61717 = 1;
                  }
                  Instance = NetworkManager_TypeInfo;
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                    Instance = NetworkManager_TypeInfo;
                  }
                  if ( !*v33 )
                    goto LABEL_169;
                  if ( !v90 )
                    goto LABEL_169;
                  Instance = UserItemMaster__GetEntityDefinitely(
                               (UserItemMaster_o *)v90,
                               *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                               (*v33)->fields.targetId,
                               0LL);
                  if ( !Instance )
                    goto LABEL_169;
                  v89 = (int32_t *)((char *)Instance + 28);
                }
              }
            }
            v91 = *v89;
            holdNumTitleLb = this->fields.holdNumTitleLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
            if ( holdNumTitleLb )
            {
              UILabel__set_text(holdNumTitleLb, (System_String_o *)Instance, 0LL);
              holdNumCntLb = this->fields.holdNumCntLb;
              Instance = LocalizationManager__GetNumberFormat(v91, 0LL);
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
                        v81 = 1;
LABEL_110:
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

  if ( (byte_4B63ABD & 1) == 0 )
  {
    sub_1BE4ACC(&QuestInformationListViewItemDraw_TypeInfo, method);
    byte_4B63ABD = 1;
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
        sub_1BE4D30(completeMissionTarget, method);
      }
    }
LABEL_41:
    sub_1BE4D28(completeMissionTarget, method);
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
  if ( (byte_4B63AC5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject____77158408, assetData);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    this = (QuestInformationListViewItemDraw_o *)sub_1BE4ACC(&StringLiteral_23023/*"quest_info"*/, v7);
    byte_4B63AC5 = 1;
  }
  if ( !assetData
    || (this = (QuestInformationListViewItemDraw_o *)AssetData__GetObject_object__49525204(
                                                       assetData,
                                                       (System_String_o *)StringLiteral_23023/*"quest_info"*/,
                                                       (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1BE4D28(this, assetData);
  }
  v9 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__50195216(
    v9,
    transform,
    (const MethodInfo_2FDEB10 *)Method_UnityEngine_Object_Instantiate_GameObject____77247160);
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
    sub_1BE4D28(this, method);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x20
  struct QuestInformationListViewItemDraw_o *v18; // x8
  struct QuestInformationListViewItemDraw_o *v19; // x8
  struct QuestInformationListViewItemDraw_o *v20; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__49525204; // x0

  if ( (byte_4B63AC6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_Texture2D____77158432, assetData);
    sub_1BE4ACC(&UnityEngine_Material_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BE4ACC(&StringLiteral_16736/*"_alpha"*/, v12);
    sub_1BE4ACC(&StringLiteral_5059/*"Custom/SpriteWithMask"*/, v13);
    sub_1BE4ACC(&StringLiteral_16476/*"_MaskTex"*/, v14);
    byte_4B63AC6 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  *(_QWORD *)&_4__this[1].fields.nowVersion = assetData;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&_4__this[1].fields.nowVersion,
    (int64_t)assetData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5059/*"Custom/SpriteWithMask"*/, 0LL);
  v17 = (UnityEngine_Material_o *)sub_1BE4D18(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(v17, v16, 0LL);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_13;
  _4__this = (AssetData_o *)v18->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v17,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_13;
  _4__this = v19->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)AssetData__GetObject_object__49525204(
                              _4__this,
                              v19->fields.enemyIconName,
                              (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_Texture2D____77158432);
  if ( !v17
    || (UnityEngine_Material__set_mainTexture(v17, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v20 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v20->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_62698808(
                                    v20->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16736/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_object__49525204 = AssetData__GetObject_object__49525204(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_Texture2D____77158432),
        UnityEngine_Material__SetTexture(
          v17,
          (System_String_o *)StringLiteral_16476/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__49525204,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1BE4D28(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}