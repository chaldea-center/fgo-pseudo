void __fastcall HorizontalQuestInformationIconDraw___cctor(const MethodInfo *method)
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
  System_String_o *v21; // x0
  struct HorizontalQuestInformationIconDraw_StaticFields *static_fields; // x8
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  struct HorizontalQuestInformationIconDraw_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  struct HorizontalQuestInformationIconDraw_StaticFields *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  HorizontalQuestInformationIconDraw_c *v45; // x8
  int64_t v46; // x1
  struct HorizontalQuestInformationIconDraw_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4B1311A & 1) == 0 )
  {
    sub_1BCA7E0(&HorizontalQuestInformationIconDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_19224/*"enemy_icon_"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_22966/*"questinfo_enemy_brank"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_15295/*"Unlit/Transparent Colored"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_6127/*"Enemys/Icon/"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_13535/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, v18, v19);
    byte_4B1311A = 1;
  }
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22966/*"questinfo_enemy_brank"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields,
    StringLiteral_22966/*"questinfo_enemy_brank"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13535/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
  static_fields = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = v21;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->ENEMY_UNKNOWN_NAME,
    (int64_t)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = StringLiteral_6127/*"Enemys/Icon/"*/;
  v30 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v30->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6127/*"Enemys/Icon/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v30->ENEMY_ICON_TEXTURE_PATH, v29, v31, v32, v33, v34, v35, v36);
  v37 = StringLiteral_19224/*"enemy_icon_"*/;
  v38 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v38->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19224/*"enemy_icon_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v38->ENEMY_ICON_TEXTURE_PREFIX, v37, v39, v40, v41, v42, v43, v44);
  v45 = HorizontalQuestInformationIconDraw_TypeInfo;
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BD1E40;
  v46 = StringLiteral_15295/*"Unlit/Transparent Colored"*/;
  v47 = v45->static_fields;
  v47->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15295/*"Unlit/Transparent Colored"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v47->DEFAULT_SHADER, v46, v48, v49, v50, v51, v52, v53);
}


void __fastcall HorizontalQuestInformationIconDraw___ctor(
        HorizontalQuestInformationIconDraw_o *this,
        const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconDraw__LoadEnemyTexture(
        HorizontalQuestInformationIconDraw_o *this,
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

  if ( (byte_4B13117 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, item, callback);
    sub_1BCA7E0(&HorizontalQuestInformationIconDraw_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__, v15, v16);
    sub_1BCA7E0(&HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo, v17, v18);
    byte_4B13117 = 1;
  }
  v19 = sub_1BCAA2C(HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo, item, callback, method);
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
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, v34);
  Instance = (CommonUI_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, v21);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v52 = iconId;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
  v38 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v37, 0LL);
  this->fields.enemyIconName = v38;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1BCA784((PartyOrganizationUtility_o *)p_enemyIconName, (int64_t)v38, v40, v41, v42, v43, v44, v45);
  v46 = System_String__Concat_62401220(
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v50 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v47, v48, v49);
  AssetLoader_LoadEndDataHandler___ctor(
    v50,
    (Il2CppObject *)v19,
    Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__,
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
void __fastcall HorizontalQuestInformationIconDraw__OnDestroy(
        HorizontalQuestInformationIconDraw_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, method);
}


void __fastcall HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(
        HorizontalQuestInformationIconDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o **p_enemyIconName; // x20
  __int64 v7; // x1
  HorizontalQuestInformationIconDraw_c *v8; // x0
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

  if ( (byte_4B13118 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&HorizontalQuestInformationIconDraw_TypeInfo, v4, v5);
    byte_4B13118 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v8 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, v7);
      v8 = HorizontalQuestInformationIconDraw_TypeInfo;
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
void __fastcall HorizontalQuestInformationIconDraw__SetDispType(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
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
  struct UISpriteAltMat_o *enemySp; // x8
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13114 & 1) == 0 )
  {
    sub_1BCA7E0(&HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp, sp);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v8, v9);
    byte_4B13114 = 1;
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
        if ( iconListComponent )
        {
          v14 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
                  iconListComponent,
                  *(const MethodInfo **)&dispTp);
          v18 = (UnityEngine_Material_o *)sub_1BCAA2C(UnityEngine_Material_TypeInfo, v15, v16, v17);
          UnityEngine_Material___ctor_70017516(v18, v14, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v18, 0LL);
          return;
        }
      }
      goto LABEL_17;
    case 2:
      this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp);
        this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      }
      if ( sp )
      {
        enemySp = this[1].fields.enemySp;
        v12 = *(float *)&enemySp->fields.rightAnchor;
        v13 = *((float *)&enemySp->fields.rightAnchor + 1);
        v10 = *(float *)&enemySp->fields.leftAnchor;
        v11 = *((float *)&enemySp->fields.leftAnchor + 1);
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
void __fastcall HorizontalQuestInformationIconDraw__SetDispTypeEnemyTex(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  struct UISpriteAltMat_o *enemySp; // x8

  if ( (byte_4B13116 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconDraw_o *)sub_1BCA7E0(
                                                     &HorizontalQuestInformationIconDraw_TypeInfo,
                                                     *(_QWORD *)&dispTp,
                                                     texture);
    byte_4B13116 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp);
        this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      }
      if ( texture )
      {
        enemySp = this[1].fields.enemySp;
        v8 = *(float *)&enemySp->fields.rightAnchor;
        v9 = *((float *)&enemySp->fields.rightAnchor + 1);
        v6 = *(float *)&enemySp->fields.leftAnchor;
        v7 = *((float *)&enemySp->fields.leftAnchor + 1);
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
void __fastcall HorizontalQuestInformationIconDraw__SetDispType_34638904(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  HorizontalQuestInformationIconDraw_o *v10; // x20
  __int64 v11; // x1
  HorizontalQuestInformationIconDraw_c *v12; // x0
  UnityEngine_Material_o *v13; // x20
  float *enemySp; // x8
  UnityEngine_Shader_o *v15; // x0
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B13115 & 1) == 0 )
  {
    sub_1BCA7E0(&HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp, texture);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1BCA7E0(&StringLiteral_16431/*"_MainTex"*/, v8, v9);
    byte_4B13115 = 1;
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
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                                       texture,
                                                       0LL,
                                                       texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( iconListComponent )
      {
        v13 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
                iconListComponent,
                *(const MethodInfo **)&dispTp);
        this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
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
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                       texture,
                                                       texture->klass->vtable._29_set_shader.methodPtr);
      if ( this )
      {
        this = (HorizontalQuestInformationIconDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        v10 = this;
        if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp);
        if ( v10 )
        {
          if ( !System_String__Equals_62409536(
                  (System_String_o *)v10,
                  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v12 = HorizontalQuestInformationIconDraw_TypeInfo;
            if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
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
  this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_28;
  enemySp = (float *)this[1].fields.enemySp;
  v18.fields.b = enemySp[10];
  v18.fields.a = enemySp[11];
  v18.fields.r = enemySp[8];
  v18.fields.g = enemySp[9];
  UIWidget__set_color((UIWidget_o *)texture, v18, 0LL);
  ((void (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._25_set_material.method)(
    texture,
    0LL,
    texture->klass->vtable._26_get_mainTexture.methodPtr);
  this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                   texture,
                                                   texture->klass->vtable._29_set_shader.methodPtr);
  if ( !this )
    goto LABEL_28;
  this = (HorizontalQuestInformationIconDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !this )
    goto LABEL_28;
  if ( !System_String__Equals_62409536(
          (System_String_o *)this,
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v12 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v12, v11);
      v12 = HorizontalQuestInformationIconDraw_TypeInfo;
    }
LABEL_27:
    v15 = UnityEngine_Shader__Find(v12->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v15,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall HorizontalQuestInformationIconDraw__SetEnemyName(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v4; // x20
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
  if ( (byte_4B13119 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, item, method);
    sub_1BCA7E0(&Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__, v5, v6);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v7, v8);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v9, v10);
    byte_4B13119 = 1;
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
      Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
    AssetManager__loadAssetStorage(NameEffectPath, v16, 1, 0LL);
  }
  this = (HorizontalQuestInformationIconDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1BCAA3C(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconDraw__SetItem(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
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
  __int64 v35; // x22
  int64_t SvtImg; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  QuestInformationListViewItem_o **v44; // x20
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  QuestInformationListViewItem_o *v51; // x0
  int32_t infoType; // w8
  bool v53; // w1
  __int64 v54; // x1
  __int64 v55; // x2
  TerminalSceneComponent_c *v56; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v58; // x2
  UISprite_o *enemySp; // x20
  __int64 v60; // x8
  UISprite_o *v61; // x20
  HorizontalQuestInformationIconDraw_o *v62; // x0
  const MethodInfo *v63; // x4
  ItemIconComponent_o *itemIcon; // x21
  ItemMaster_o *v65; // x21
  bool v66; // w1
  struct UITexture_o **p_SvtImg; // x23
  char v68; // w24
  QuestInformationListViewItem_o *v69; // x8
  UITexture_o *v70; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  const MethodInfo *v80; // x4
  const MethodInfo *v81; // x2
  UISprite_o *v82; // x23
  int32_t iconId; // w24
  __int64 v84; // x2
  __int64 v85; // x3
  const MethodInfo *v86; // x4
  QuestInformationListViewItem_o *v87; // x21
  System_Action_o *v88; // x23
  const MethodInfo *v89; // x3
  int32_t *v90; // x8
  __int64 v91; // x1
  Il2CppObject *MasterData_object; // x21
  int32_t v93; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21

  if ( (byte_4B13113 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v13, v14);
    sub_1BCA7E0(&HorizontalQuestInformationIconDraw_TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__, v29, v30);
    sub_1BCA7E0(&HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_12152/*"SHOP_BUY_ITEM_HOLD"*/, v33, v34);
    byte_4B13113 = 1;
  }
  v35 = sub_1BCAA2C(
          HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo,
          item,
          *(_QWORD *)&mode,
          iconListComponent);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  if ( !v35 )
    goto LABEL_115;
  *(_QWORD *)(v35 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 16), (int64_t)this, v38, v39, v40, v41, v42, v43);
  *(_QWORD *)(v35 + 24) = item;
  v44 = (QuestInformationListViewItem_o **)(v35 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 24), (int64_t)item, v45, v46, v47, v48, v49, v50);
  if ( mode )
  {
    v51 = *v44;
    if ( *v44 )
    {
      infoType = v51->fields.infoType;
      if ( infoType == 1 )
      {
        if ( QuestInformationListViewItem__isEnemyUnknown(v51, 0LL) )
        {
          SvtImg = (int64_t)this->fields.SvtImg;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
          SvtImg = (int64_t)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v54);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v54, v55);
            byte_4B10F83 = 1;
          }
          v56 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v54);
            v56 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v56->static_fields->mInstance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
          if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
          {
            enemySp = (UISprite_o *)this->fields.enemySp;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v37);
            if ( !byte_4B10F83 )
            {
              sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v37, v58);
              byte_4B10F83 = 1;
            }
            SvtImg = (int64_t)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v37);
              SvtImg = (int64_t)TerminalSceneComponent_TypeInfo;
            }
            v60 = **(_QWORD **)(SvtImg + 184);
            if ( !v60 || !enemySp )
              goto LABEL_115;
            UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v60 + 304), 0LL);
          }
          v61 = (UISprite_o *)this->fields.enemySp;
          SvtImg = (int64_t)HorizontalQuestInformationIconDraw_TypeInfo;
          if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, v37);
          if ( v61 )
          {
            UISprite__set_spriteName(
              v61,
              HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
              0LL);
            HorizontalQuestInformationIconDraw__SetDispType(v62, 1, this->fields.enemySp, iconListComponent, v63);
            SvtImg = (int64_t)this->fields.textLb;
            if ( SvtImg )
            {
              UILabel__set_text(
                (UILabel_o *)SvtImg,
                HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
                0LL);
              return;
            }
          }
LABEL_115:
          sub_1BCAA3C(SvtImg, v37);
        }
        SvtImg = (int64_t)*v44;
        if ( !*v44 )
          goto LABEL_115;
        SvtImg = QuestInformationListViewItem__isEnemyServant((QuestInformationListViewItem_o *)SvtImg, 0LL);
        p_SvtImg = &this->fields.SvtImg;
        if ( !this->fields.SvtImg )
          goto LABEL_115;
        v68 = SvtImg;
        SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.SvtImg, 0LL);
        if ( !SvtImg )
          goto LABEL_115;
        if ( (v68 & 1) != 0 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          v69 = *v44;
          if ( !*v44 )
            goto LABEL_115;
          v70 = *p_SvtImg;
          targetId = v69->fields.targetId;
          targetCnt = v69->fields.targetCnt;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v37);
          Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v70, targetId, targetCnt, targetCnt, 0LL);
          *p_SvtImg = Manager__loadCommandCard;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.SvtImg,
            (int64_t)Manager__loadCommandCard,
            v74,
            v75,
            v76,
            v77,
            v78,
            v79);
          if ( !*v44 )
            goto LABEL_115;
          HorizontalQuestInformationIconDraw__SetDispType_34638904(
            (HorizontalQuestInformationIconDraw_o *)SvtImg,
            (*v44)->fields.dispType,
            this->fields.SvtImg,
            iconListComponent,
            v80);
          SvtImg = (int64_t)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
          SvtImg = (int64_t)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          if ( !*v44 )
            goto LABEL_115;
          v82 = (UISprite_o *)this->fields.enemySp;
          iconId = (*v44)->fields.iconId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37);
          if ( AtlasManager__SetEnemy(v82, iconId, 0LL) )
          {
            SvtImg = (int64_t)this->fields.enemySp;
            if ( !SvtImg )
              goto LABEL_115;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
            SvtImg = (int64_t)this->fields.enemyTexture;
            if ( !SvtImg )
              goto LABEL_115;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
            if ( !*v44 )
              goto LABEL_115;
            HorizontalQuestInformationIconDraw__SetDispType(
              (HorizontalQuestInformationIconDraw_o *)SvtImg,
              (*v44)->fields.dispType,
              this->fields.enemySp,
              iconListComponent,
              v86);
          }
          else
          {
            v87 = *(QuestInformationListViewItem_o **)(v35 + 24);
            v88 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v84, v85);
            System_Action___ctor(
              v88,
              (Il2CppObject *)v35,
              Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__,
              0LL);
            HorizontalQuestInformationIconDraw__LoadEnemyTexture(this, v87, v88, v89);
          }
        }
        HorizontalQuestInformationIconDraw__SetEnemyName(this, *v44, v81);
      }
      else if ( !infoType )
      {
        SvtImg = QuestInformationListViewItem__isRewardUndrop(v51, 0LL);
        if ( !this->fields.blankImg )
          goto LABEL_115;
        if ( (SvtImg & 1) != 0 )
        {
          UnityEngine_GameObject__SetActive(this->fields.blankImg, 1, 0LL);
          SvtImg = (int64_t)this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          v53 = 0;
        }
        else
        {
          UnityEngine_GameObject__SetActive(this->fields.blankImg, 0, 0LL);
          SvtImg = (int64_t)*v44;
          if ( !*v44 )
            goto LABEL_115;
          itemIcon = this->fields.itemIcon;
          SvtImg = QuestInformationListViewItem__GetGiftType((QuestInformationListViewItem_o *)SvtImg, 0LL);
          if ( !*v44 )
            goto LABEL_115;
          if ( !itemIcon )
            goto LABEL_115;
          ItemIconComponent__SetGift_38855180(itemIcon, SvtImg, (*v44)->fields.targetId, -1, 0, 0LL);
          SvtImg = (int64_t)this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          v53 = 1;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v53, 0LL);
        SvtImg = (int64_t)*v44;
        if ( !*v44 )
          goto LABEL_115;
        if ( !QuestInformationListViewItem__isRewardItem((QuestInformationListViewItem_o *)SvtImg, 0LL) )
          goto LABEL_58;
        SvtImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SvtImg )
          goto LABEL_115;
        SvtImg = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SvtImg,
                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !*v44 )
          goto LABEL_115;
        v65 = (ItemMaster_o *)SvtImg;
        if ( !SvtImg )
          goto LABEL_115;
        SvtImg = ItemMaster__isQP((ItemMaster_o *)SvtImg, (*v44)->fields.targetId, 0LL);
        if ( (SvtImg & 1) != 0 )
          goto LABEL_58;
        if ( !*v44 )
          goto LABEL_115;
        SvtImg = ItemMaster__isFriendPoint(v65, (*v44)->fields.targetId, 0LL);
        if ( (SvtImg & 1) != 0 )
          goto LABEL_58;
        if ( !*v44 )
          goto LABEL_115;
        SvtImg = ItemMaster__isEventPoint(v65, (*v44)->fields.targetId, 0LL);
        if ( (SvtImg & 1) != 0 )
        {
LABEL_58:
          SvtImg = (int64_t)this->fields.holdNumTitleLb;
          if ( SvtImg )
          {
            SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
            if ( SvtImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
              SvtImg = (int64_t)this->fields.holdNumCntLb;
              if ( SvtImg )
              {
                SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
                if ( SvtImg )
                {
                  v66 = 0;
LABEL_63:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v66, 0LL);
                  return;
                }
              }
            }
          }
        }
        else
        {
          if ( !*v44 )
            goto LABEL_115;
          SvtImg = ItemMaster__isMana(v65, (*v44)->fields.targetId, 0LL);
          if ( (SvtImg & 1) != 0 )
          {
            SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0LL);
            if ( !SvtImg )
              goto LABEL_115;
            v90 = (int32_t *)(SvtImg + 184);
          }
          else
          {
            if ( !*v44 )
              goto LABEL_115;
            SvtImg = ItemMaster__isRarePri(v65, (*v44)->fields.targetId, 0LL);
            if ( (SvtImg & 1) != 0 )
            {
              SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !SvtImg )
                goto LABEL_115;
              v90 = (int32_t *)(SvtImg + 188);
            }
            else
            {
              if ( !*v44 )
                goto LABEL_115;
              if ( ItemMaster__isStone(v65, (*v44)->fields.targetId, 0LL) )
              {
                SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( !SvtImg )
                  goto LABEL_115;
                v90 = (int32_t *)(SvtImg + 176);
              }
              else
              {
                SvtImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !SvtImg )
                  goto LABEL_115;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)SvtImg,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v91);
                SvtImg = NetworkManager__get_UserId(0LL);
                if ( !*v44 )
                  goto LABEL_115;
                if ( !MasterData_object )
                  goto LABEL_115;
                SvtImg = (int64_t)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    SvtImg,
                                    (*v44)->fields.targetId,
                                    0LL);
                if ( !SvtImg )
                  goto LABEL_115;
                v90 = (int32_t *)(SvtImg + 28);
              }
            }
          }
          v93 = *v90;
          holdNumTitleLb = this->fields.holdNumTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
          SvtImg = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12152/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
          if ( holdNumTitleLb )
          {
            UILabel__set_text(holdNumTitleLb, (System_String_o *)SvtImg, 0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            SvtImg = (int64_t)LocalizationManager__GetNumberFormat(v93, 0LL);
            if ( holdNumCntLb )
            {
              UILabel__set_text(holdNumCntLb, (System_String_o *)SvtImg, 0LL);
              SvtImg = (int64_t)this->fields.holdNumTitleLb;
              if ( SvtImg )
              {
                SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
                if ( SvtImg )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
                  SvtImg = (int64_t)this->fields.holdNumCntLb;
                  if ( SvtImg )
                  {
                    SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
                    if ( SvtImg )
                    {
                      v66 = 1;
                      goto LABEL_63;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_115;
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconDraw___SetEnemyName_b__24_0(
        HorizontalQuestInformationIconDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v4; // x19
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
  if ( (byte_4B1311B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1BCA7E0(&StringLiteral_22945/*"quest_info"*/, v9, v10);
    byte_4B1311B = 1;
  }
  if ( !assetData
    || (this = (HorizontalQuestInformationIconDraw_o *)AssetData__GetObject_object__49237568(
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


void __fastcall HorizontalQuestInformationIconDraw___c__DisplayClass18_0___ctor(
        HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconDraw___c__DisplayClass18_0___SetItem_b__0(
        HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  struct HorizontalQuestInformationIconDraw_o *_4__this; // x8
  HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *v3; // x19
  struct HorizontalQuestInformationIconDraw_o *v4; // x8
  const MethodInfo *v5; // x3
  struct QuestInformationListViewItem_o *item; // x8
  struct HorizontalQuestInformationIconDraw_o *v7; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *)v4->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL), (item = v3->fields.item) == 0LL)
    || (v7 = v3->fields.__4__this) == 0LL )
  {
LABEL_8:
    sub_1BCAA3C(this, method);
  }
  HorizontalQuestInformationIconDraw__SetDispTypeEnemyTex(
    (HorizontalQuestInformationIconDraw_o *)this,
    item->fields.dispType,
    v7->fields.enemyTexture,
    v5);
}


void __fastcall HorizontalQuestInformationIconDraw___c__DisplayClass22_0___ctor(
        HorizontalQuestInformationIconDraw___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconDraw___c__DisplayClass22_0___LoadEnemyTexture_b__0(
        HorizontalQuestInformationIconDraw___c__DisplayClass22_0_o *this,
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
  struct HorizontalQuestInformationIconDraw_o *v26; // x8
  struct HorizontalQuestInformationIconDraw_o *v27; // x8
  struct HorizontalQuestInformationIconDraw_o *v28; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__49237568; // x0

  if ( (byte_4B1311C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, assetData, method);
    sub_1BCA7E0(&UnityEngine_Material_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&StringLiteral_16695/*"_alpha"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5048/*"Custom/SpriteWithMask"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_16436/*"_MaskTex"*/, v18, v19);
    byte_4B1311C = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].klass = (AssetData_c *)assetData;
  sub_1BCA784((PartyOrganizationUtility_o *)&_4__this[1], (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
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