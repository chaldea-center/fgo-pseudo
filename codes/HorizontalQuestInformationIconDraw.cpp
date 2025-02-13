void __fastcall HorizontalQuestInformationIconDraw___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  System_String_o *v7; // x0
  struct HorizontalQuestInformationIconDraw_StaticFields *static_fields; // x8
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct HorizontalQuestInformationIconDraw_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct HorizontalQuestInformationIconDraw_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  HorizontalQuestInformationIconDraw_c *v31; // x8
  int64_t v32; // x1
  struct HorizontalQuestInformationIconDraw_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4BD93F1 & 1) == 0 )
  {
    sub_1C21E38(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_19355/*"enemy_icon_"*/);
    sub_1C21E38(&StringLiteral_23136/*"questinfo_enemy_brank"*/);
    sub_1C21E38(&StringLiteral_15392/*"Unlit/Transparent Colored"*/);
    sub_1C21E38(&StringLiteral_6174/*"Enemys/Icon/"*/);
    sub_1C21E38(&StringLiteral_13628/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_4BD93F1 = 1;
  }
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_23136/*"questinfo_enemy_brank"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields,
    StringLiteral_23136/*"questinfo_enemy_brank"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13628/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
  static_fields = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = v7;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->ENEMY_UNKNOWN_NAME,
    (int64_t)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_6174/*"Enemys/Icon/"*/;
  v16 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v16->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6174/*"Enemys/Icon/"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->ENEMY_ICON_TEXTURE_PATH, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_19355/*"enemy_icon_"*/;
  v24 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v24->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19355/*"enemy_icon_"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->ENEMY_ICON_TEXTURE_PREFIX, v23, v25, v26, v27, v28, v29, v30);
  v31 = HorizontalQuestInformationIconDraw_TypeInfo;
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BFD7D0;
  v32 = StringLiteral_15392/*"Unlit/Transparent Colored"*/;
  v33 = v31->static_fields;
  v33->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15392/*"Unlit/Transparent Colored"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v33->DEFAULT_SHADER, v32, v34, v35, v36, v37, v38, v39);
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
  __int64 v7; // x21
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v28; // x0
  struct System_String_o *v29; // x0
  struct System_String_o **p_enemyIconName; // x19
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_String_o *v37; // x19
  AssetLoader_LoadEndDataHandler_o *v38; // x20
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BD93EE & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__);
    sub_1C21E38(&HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
    byte_4BD93EE = 1;
  }
  v7 = sub_1C22084(HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)callback, v16, v17, v18, v19, v20, v21);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, v22);
  Instance = (CommonUI_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v39 = iconId;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v23, v24, v25);
  v29 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v28, 0LL);
  this->fields.enemyIconName = v29;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_enemyIconName, (int64_t)v29, v31, v32, v33, v34, v35, v36);
  v37 = System_String__Concat_63115476(
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v38 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v38,
    (Il2CppObject *)v7,
    Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v37, v38, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1C22094(Instance, v9);
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
  System_String_o **p_enemyIconName; // x20
  HorizontalQuestInformationIconDraw_c *v4; // x0
  System_String_o *v5; // x21
  PartyOrganizationUtility_o *p_enemyIconAssetData; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BD93EF & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&HorizontalQuestInformationIconDraw_TypeInfo);
    byte_4BD93EF = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v4 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
      v4 = HorizontalQuestInformationIconDraw_TypeInfo;
    }
    v5 = System_String__Concat_63115476(v4->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v5, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (PartyOrganizationUtility_o *)&this->fields.enemyIconAssetData;
    sub_1C21DDC(p_enemyIconAssetData, 0LL, v7, v8, v9, v10, v11, v12);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_enemyIconName, 0LL, v13, v14, v15, v16, v17, v18);
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
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  UnityEngine_Material_o *v12; // x20
  UnityEngine_Material_o *v13; // x21
  struct UISpriteAltMat_o *enemySp; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD93EB & 1) == 0 )
  {
    sub_1C21E38(&HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C21E38(&UnityEngine_Material_TypeInfo);
    byte_4BD93EB = 1;
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
        if ( iconListComponent )
        {
          v12 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
                  iconListComponent,
                  *(const MethodInfo **)&dispTp);
          v13 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_70732884(v13, v12, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v13, 0LL);
          return;
        }
      }
      goto LABEL_17;
    case 2:
      this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
        this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      }
      if ( sp )
      {
        enemySp = this[1].fields.enemySp;
        v10 = *(float *)&enemySp->fields.rightAnchor;
        v11 = *((float *)&enemySp->fields.rightAnchor + 1);
        v8 = *(float *)&enemySp->fields.leftAnchor;
        v9 = *((float *)&enemySp->fields.leftAnchor + 1);
        goto LABEL_15;
      }
LABEL_17:
      sub_1C22094(this, *(_QWORD *)&dispTp);
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

  if ( (byte_4BD93ED & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C21E38(&HorizontalQuestInformationIconDraw_TypeInfo);
    byte_4BD93ED = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
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
      sub_1C22094(this, *(_QWORD *)&dispTp);
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
void __fastcall HorizontalQuestInformationIconDraw__SetDispType_35110384(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v8; // x20
  HorizontalQuestInformationIconDraw_c *v9; // x0
  UnityEngine_Material_o *v10; // x20
  float *enemySp; // x8
  UnityEngine_Shader_o *v12; // x0
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD93EC & 1) == 0 )
  {
    sub_1C21E38(&HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C21E38(&StringLiteral_16540/*"_MainTex"*/);
    byte_4BD93EC = 1;
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
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                                       texture,
                                                       0LL,
                                                       texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( iconListComponent )
      {
        v10 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
                iconListComponent,
                *(const MethodInfo **)&dispTp);
        this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                         texture,
                                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v10 )
        {
          UnityEngine_Material__SetTexture(
            v10,
            (System_String_o *)StringLiteral_16540/*"_MainTex"*/,
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
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                       texture,
                                                       texture->klass->vtable._29_set_shader.methodPtr);
      if ( this )
      {
        this = (HorizontalQuestInformationIconDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        v8 = this;
        if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
        if ( v8 )
        {
          if ( !System_String__Equals_63123792(
                  (System_String_o *)v8,
                  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v9 = HorizontalQuestInformationIconDraw_TypeInfo;
            if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
              goto LABEL_26;
            goto LABEL_27;
          }
          return;
        }
      }
    }
LABEL_28:
    sub_1C22094(this, *(_QWORD *)&dispTp);
  }
  this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_28;
  enemySp = (float *)this[1].fields.enemySp;
  v15.fields.b = enemySp[10];
  v15.fields.a = enemySp[11];
  v15.fields.r = enemySp[8];
  v15.fields.g = enemySp[9];
  UIWidget__set_color((UIWidget_o *)texture, v15, 0LL);
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
  if ( !System_String__Equals_63123792(
          (System_String_o *)this,
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v9 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v9);
      v9 = HorizontalQuestInformationIconDraw_TypeInfo;
    }
LABEL_27:
    v12 = UnityEngine_Shader__Find(v9->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v12,
      texture->klass->vtable._30_MarkAsChanged.methodPtr);
  }
}


void __fastcall HorizontalQuestInformationIconDraw__SetEnemyName(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v4; // x20
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v7; // x22

  v4 = this;
  if ( (byte_4BD93F0 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BD93F0 = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0LL);
    v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v7,
      (Il2CppObject *)v4,
      Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v7, 1, 0LL);
  }
  this = (HorizontalQuestInformationIconDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1C22094(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0LL);
}


void __fastcall HorizontalQuestInformationIconDraw__SetItem(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  __int64 v9; // x22
  UnityEngine_Component_o *SvtImg; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  QuestInformationListViewItem_o **v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  QuestInformationListViewItem_o *v25; // x0
  int32_t infoType; // w8
  bool v27; // w1
  TerminalSceneComponent_c *v28; // x0
  UnityEngine_Object_o *mInstance; // x20
  UISprite_o *enemySp; // x20
  __int64 v31; // x8
  UISprite_o *v32; // x20
  HorizontalQuestInformationIconDraw_o *v33; // x0
  const MethodInfo *v34; // x4
  ItemIconComponent_o *itemIcon; // x21
  ItemMaster_o *v36; // x21
  bool v37; // w1
  struct UITexture_o **p_SvtImg; // x23
  char v39; // w24
  QuestInformationListViewItem_o *v40; // x8
  UITexture_o *v41; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  const MethodInfo *v51; // x4
  const MethodInfo *v52; // x2
  UISprite_o *v53; // x23
  int32_t iconId; // w24
  const MethodInfo *v55; // x4
  QuestInformationListViewItem_o *v56; // x21
  System_Action_o *v57; // x23
  const MethodInfo *v58; // x3
  int32_t *p_m_CachedPtr; // x8
  Il2CppObject *MasterData_object; // x21
  int32_t v61; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21

  if ( (byte_4BD93EA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__);
    sub_1C21E38(&HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
    sub_1C21E38(&StringLiteral_12233/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_4BD93EA = 1;
  }
  v9 = sub_1C22084(HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_119;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = item;
  v18 = (QuestInformationListViewItem_o **)(v9 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)item, v19, v20, v21, v22, v23, v24);
  if ( mode )
  {
    v25 = *v18;
    if ( *v18 )
    {
      infoType = v25->fields.infoType;
      if ( infoType == 1 )
      {
        if ( QuestInformationListViewItem__isEnemyUnknown(v25, 0LL) )
        {
          SvtImg = (UnityEngine_Component_o *)this->fields.SvtImg;
          if ( !SvtImg )
            goto LABEL_119;
          SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_119;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
          SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_119;
          SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_119;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BD7183 )
          {
            sub_1C21E38(&TerminalSceneComponent_TypeInfo);
            byte_4BD7183 = 1;
          }
          v28 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v28 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v28->static_fields->mInstance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
          {
            enemySp = (UISprite_o *)this->fields.enemySp;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4BD7183 )
            {
              sub_1C21E38(&TerminalSceneComponent_TypeInfo);
              byte_4BD7183 = 1;
            }
            SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            }
            v31 = **(_QWORD **)&SvtImg[7].fields.m_CachedPtr;
            if ( !v31 || !enemySp )
              goto LABEL_119;
            UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v31 + 304), 0LL);
          }
          v32 = (UISprite_o *)this->fields.enemySp;
          SvtImg = (UnityEngine_Component_o *)HorizontalQuestInformationIconDraw_TypeInfo;
          if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
          if ( v32 )
          {
            UISprite__set_spriteName(
              v32,
              HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
              0LL);
            HorizontalQuestInformationIconDraw__SetDispType(v33, 1, this->fields.enemySp, iconListComponent, v34);
            SvtImg = (UnityEngine_Component_o *)this->fields.textLb;
            if ( SvtImg )
            {
              UILabel__set_text(
                (UILabel_o *)SvtImg,
                HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
                0LL);
              return;
            }
          }
LABEL_119:
          sub_1C22094(SvtImg, v11);
        }
        SvtImg = (UnityEngine_Component_o *)*v18;
        if ( !*v18 )
          goto LABEL_119;
        SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItem__isEnemyServant(
                                              (QuestInformationListViewItem_o *)SvtImg,
                                              0LL);
        p_SvtImg = &this->fields.SvtImg;
        if ( !this->fields.SvtImg )
          goto LABEL_119;
        v39 = (char)SvtImg;
        SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.SvtImg,
                                              0LL);
        if ( !SvtImg )
          goto LABEL_119;
        if ( (v39 & 1) != 0 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          v40 = *v18;
          if ( !*v18 )
            goto LABEL_119;
          v41 = *p_SvtImg;
          targetId = v40->fields.targetId;
          targetCnt = v40->fields.targetCnt;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v41, targetId, targetCnt, targetCnt, 0LL);
          *p_SvtImg = Manager__loadCommandCard;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.SvtImg,
            (int64_t)Manager__loadCommandCard,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50);
          if ( !*v18 )
            goto LABEL_119;
          HorizontalQuestInformationIconDraw__SetDispType_35110384(
            (HorizontalQuestInformationIconDraw_o *)SvtImg,
            (*v18)->fields.dispType,
            this->fields.SvtImg,
            iconListComponent,
            v51);
          SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_119;
          SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_119;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
          SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_119;
          SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_119;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          if ( !*v18 )
            goto LABEL_119;
          v53 = (UISprite_o *)this->fields.enemySp;
          iconId = (*v18)->fields.iconId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetEnemy(v53, iconId, 0LL) )
          {
            SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
            if ( !SvtImg )
              goto LABEL_119;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
            SvtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
            if ( !SvtImg )
              goto LABEL_119;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
            if ( !*v18 )
              goto LABEL_119;
            HorizontalQuestInformationIconDraw__SetDispType(
              (HorizontalQuestInformationIconDraw_o *)SvtImg,
              (*v18)->fields.dispType,
              this->fields.enemySp,
              iconListComponent,
              v55);
          }
          else
          {
            v56 = *(QuestInformationListViewItem_o **)(v9 + 24);
            v57 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
            System_Action___ctor(
              v57,
              (Il2CppObject *)v9,
              Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__,
              0LL);
            HorizontalQuestInformationIconDraw__LoadEnemyTexture(this, v56, v57, v58);
          }
        }
        HorizontalQuestInformationIconDraw__SetEnemyName(this, *v18, v52);
      }
      else if ( !infoType )
      {
        SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItem__isRewardUndrop(v25, 0LL);
        if ( !this->fields.blankImg )
          goto LABEL_119;
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
        {
          UnityEngine_GameObject__SetActive(this->fields.blankImg, 1, 0LL);
          SvtImg = (UnityEngine_Component_o *)this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_119;
          SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_119;
          v27 = 0;
        }
        else
        {
          UnityEngine_GameObject__SetActive(this->fields.blankImg, 0, 0LL);
          SvtImg = (UnityEngine_Component_o *)*v18;
          if ( !*v18 )
            goto LABEL_119;
          itemIcon = this->fields.itemIcon;
          SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItem__GetGiftType(
                                                (QuestInformationListViewItem_o *)SvtImg,
                                                0LL);
          if ( !*v18 )
            goto LABEL_119;
          if ( !itemIcon )
            goto LABEL_119;
          ItemIconComponent__SetGift_39386620(itemIcon, (int32_t)SvtImg, (*v18)->fields.targetId, -1, 0, 0LL);
          SvtImg = (UnityEngine_Component_o *)this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_119;
          SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_119;
          v27 = 1;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v27, 0LL);
        SvtImg = (UnityEngine_Component_o *)*v18;
        if ( !*v18 )
          goto LABEL_119;
        if ( !QuestInformationListViewItem__isRewardItem((QuestInformationListViewItem_o *)SvtImg, 0LL) )
          goto LABEL_58;
        SvtImg = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SvtImg )
          goto LABEL_119;
        SvtImg = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)SvtImg,
                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !*v18 )
          goto LABEL_119;
        v36 = (ItemMaster_o *)SvtImg;
        if ( !SvtImg )
          goto LABEL_119;
        SvtImg = (UnityEngine_Component_o *)ItemMaster__isQP((ItemMaster_o *)SvtImg, (*v18)->fields.targetId, 0LL);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
          goto LABEL_58;
        if ( !*v18 )
          goto LABEL_119;
        SvtImg = (UnityEngine_Component_o *)ItemMaster__isFriendPoint(v36, (*v18)->fields.targetId, 0LL);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
          goto LABEL_58;
        if ( !*v18 )
          goto LABEL_119;
        SvtImg = (UnityEngine_Component_o *)ItemMaster__isEventPoint(v36, (*v18)->fields.targetId, 0LL);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
        {
LABEL_58:
          SvtImg = (UnityEngine_Component_o *)this->fields.holdNumTitleLb;
          if ( SvtImg )
          {
            SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
            if ( SvtImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0LL);
              SvtImg = (UnityEngine_Component_o *)this->fields.holdNumCntLb;
              if ( SvtImg )
              {
                SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
                if ( SvtImg )
                {
                  v37 = 0;
LABEL_63:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v37, 0LL);
                  return;
                }
              }
            }
          }
        }
        else
        {
          if ( !*v18 )
            goto LABEL_119;
          SvtImg = (UnityEngine_Component_o *)ItemMaster__isMana(v36, (*v18)->fields.targetId, 0LL);
          if ( ((unsigned __int8)SvtImg & 1) != 0 )
          {
            SvtImg = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
            if ( !SvtImg )
              goto LABEL_119;
            p_m_CachedPtr = &SvtImg[7].fields.m_CachedPtr;
          }
          else
          {
            if ( !*v18 )
              goto LABEL_119;
            SvtImg = (UnityEngine_Component_o *)ItemMaster__isRarePri(v36, (*v18)->fields.targetId, 0LL);
            if ( ((unsigned __int8)SvtImg & 1) != 0 )
            {
              SvtImg = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
              if ( !SvtImg )
                goto LABEL_119;
              p_m_CachedPtr = (int32_t *)(&SvtImg[7].fields + 1);
            }
            else
            {
              if ( !*v18 )
                goto LABEL_119;
              if ( ItemMaster__isStone(v36, (*v18)->fields.targetId, 0LL) )
              {
                SvtImg = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
                if ( !SvtImg )
                  goto LABEL_119;
                p_m_CachedPtr = (int32_t *)&SvtImg[7].monitor;
              }
              else
              {
                SvtImg = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !SvtImg )
                  goto LABEL_119;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)SvtImg,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4BD6FF5 )
                {
                  sub_1C21E38(&NetworkManager_TypeInfo);
                  byte_4BD6FF5 = 1;
                }
                SvtImg = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  SvtImg = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
                }
                if ( !*v18 )
                  goto LABEL_119;
                if ( !MasterData_object )
                  goto LABEL_119;
                SvtImg = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                      (UserItemMaster_o *)MasterData_object,
                                                      *(_QWORD *)(*(_QWORD *)&SvtImg[7].fields.m_CachedPtr + 64LL),
                                                      (*v18)->fields.targetId,
                                                      0LL);
                if ( !SvtImg )
                  goto LABEL_119;
                p_m_CachedPtr = (int32_t *)&SvtImg[1].klass + 1;
              }
            }
          }
          v61 = *p_m_CachedPtr;
          holdNumTitleLb = this->fields.holdNumTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          SvtImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12233/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
          if ( holdNumTitleLb )
          {
            UILabel__set_text(holdNumTitleLb, (System_String_o *)SvtImg, 0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            SvtImg = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormat(v61, 0LL);
            if ( holdNumCntLb )
            {
              UILabel__set_text(holdNumCntLb, (System_String_o *)SvtImg, 0LL);
              SvtImg = (UnityEngine_Component_o *)this->fields.holdNumTitleLb;
              if ( SvtImg )
              {
                SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
                if ( SvtImg )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
                  SvtImg = (UnityEngine_Component_o *)this->fields.holdNumCntLb;
                  if ( SvtImg )
                  {
                    SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
                    if ( SvtImg )
                    {
                      v37 = 1;
                      goto LABEL_63;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_119;
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
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v6; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4BD93F2 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C21E38(&StringLiteral_23115/*"quest_info"*/);
    byte_4BD93F2 = 1;
  }
  if ( !assetData
    || (this = (HorizontalQuestInformationIconDraw_o *)AssetData__GetObject_object__49880776(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_23115/*"quest_info"*/,
                                                         (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1C22094(this, assetData);
  }
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__50551272(
    v6,
    transform,
    (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
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
    sub_1C22094(this, method);
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
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct HorizontalQuestInformationIconDraw_o *v13; // x8
  struct HorizontalQuestInformationIconDraw_o *v14; // x8
  struct HorizontalQuestInformationIconDraw_o *v15; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__49880776; // x0

  if ( (byte_4BD93F3 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_Texture2D____77626312);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_16806/*"_alpha"*/);
    sub_1C21E38(&StringLiteral_5081/*"Custom/SpriteWithMask"*/);
    sub_1C21E38(&StringLiteral_16545/*"_MaskTex"*/);
    byte_4BD93F3 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].klass = (AssetData_c *)assetData;
  sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this[1], (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5081/*"Custom/SpriteWithMask"*/, 0LL);
  v12 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
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
  _4__this = (AssetData_o *)AssetData__GetObject_object__49880776(
                              _4__this,
                              v14->fields.enemyIconName,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312);
  if ( !v12
    || (UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v15 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v15->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_63115476(
                                    v15->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16806/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_object__49880776 = AssetData__GetObject_object__49880776(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_Texture2D____77626312),
        UnityEngine_Material__SetTexture(
          v12,
          (System_String_o *)StringLiteral_16545/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__49880776,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1C22094(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}