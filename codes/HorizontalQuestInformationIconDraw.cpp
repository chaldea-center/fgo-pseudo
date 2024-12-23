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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *v14; // x0
  struct HorizontalQuestInformationIconDraw_StaticFields *static_fields; // x8
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct HorizontalQuestInformationIconDraw_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  struct HorizontalQuestInformationIconDraw_StaticFields *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  HorizontalQuestInformationIconDraw_c *v38; // x8
  int64_t v39; // x1
  struct HorizontalQuestInformationIconDraw_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B63A92 & 1) == 0 )
  {
    sub_1BE4ACC(&HorizontalQuestInformationIconDraw_TypeInfo, v1);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_19282/*"enemy_icon_"*/, v9);
    sub_1BE4ACC(&StringLiteral_23044/*"questinfo_enemy_brank"*/, v10);
    sub_1BE4ACC(&StringLiteral_15333/*"Unlit/Transparent Colored"*/, v11);
    sub_1BE4ACC(&StringLiteral_6142/*"Enemys/Icon/"*/, v12);
    sub_1BE4ACC(&StringLiteral_13572/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, v13);
    byte_4B63A92 = 1;
  }
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_23044/*"questinfo_enemy_brank"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields,
    StringLiteral_23044/*"questinfo_enemy_brank"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_13572/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
  static_fields = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = v14;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->ENEMY_UNKNOWN_NAME,
    (int64_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = StringLiteral_6142/*"Enemys/Icon/"*/;
  v23 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v23->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6142/*"Enemys/Icon/"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v23->ENEMY_ICON_TEXTURE_PATH, v22, v24, v25, v26, v27, v28, v29);
  v30 = StringLiteral_19282/*"enemy_icon_"*/;
  v31 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v31->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19282/*"enemy_icon_"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v31->ENEMY_ICON_TEXTURE_PREFIX, v30, v32, v33, v34, v35, v36, v37);
  v38 = HorizontalQuestInformationIconDraw_TypeInfo;
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BE13B0;
  v39 = StringLiteral_15333/*"Unlit/Transparent Colored"*/;
  v40 = v38->static_fields;
  v40->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15333/*"Unlit/Transparent Colored"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v40->DEFAULT_SHADER, v39, v41, v42, v43, v44, v45, v46);
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

  if ( (byte_4B63A8F & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, item);
    sub_1BE4ACC(&HorizontalQuestInformationIconDraw_TypeInfo, v7);
    sub_1BE4ACC(&int_TypeInfo, v8);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BE4ACC(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__, v11);
    sub_1BE4ACC(&HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo, v12);
    byte_4B63A8F = 1;
  }
  v13 = sub_1BE4D18(HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
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
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, v28);
  Instance = (CommonUI_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v45 = iconId;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v29, v30, v31);
  v35 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v34, 0LL);
  this->fields.enemyIconName = v35;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1BE4A70((PartyOrganizationUtility_o *)p_enemyIconName, (int64_t)v35, v37, v38, v39, v40, v41, v42);
  v43 = System_String__Concat_62698808(
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v44 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v44,
    (Il2CppObject *)v13,
    Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__,
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
  __int64 v3; // x1
  System_String_o **p_enemyIconName; // x20
  HorizontalQuestInformationIconDraw_c *v5; // x0
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

  if ( (byte_4B63A90 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&HorizontalQuestInformationIconDraw_TypeInfo, v3);
    byte_4B63A90 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0LL) )
  {
    v5 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
      v5 = HorizontalQuestInformationIconDraw_TypeInfo;
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
void __fastcall HorizontalQuestInformationIconDraw__SetDispType(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  __int64 v8; // x1
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s3
  UnityEngine_Material_o *v13; // x20
  UnityEngine_Material_o *v14; // x21
  struct UISpriteAltMat_o *enemySp; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B63A8C & 1) == 0 )
  {
    sub_1BE4ACC(&HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1BE4ACC(&UnityEngine_Material_TypeInfo, v8);
    byte_4B63A8C = 1;
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
        if ( iconListComponent )
        {
          v13 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
                  iconListComponent,
                  *(const MethodInfo **)&dispTp);
          v14 = (UnityEngine_Material_o *)sub_1BE4D18(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_70315272(v14, v13, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v14, 0LL);
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
        v11 = *(float *)&enemySp->fields.rightAnchor;
        v12 = *((float *)&enemySp->fields.rightAnchor + 1);
        v9 = *(float *)&enemySp->fields.leftAnchor;
        v10 = *((float *)&enemySp->fields.leftAnchor + 1);
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

  if ( (byte_4B63A8E & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconDraw_o *)sub_1BE4ACC(
                                                     &HorizontalQuestInformationIconDraw_TypeInfo,
                                                     *(_QWORD *)&dispTp);
    byte_4B63A8E = 1;
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
void __fastcall HorizontalQuestInformationIconDraw__SetDispType_34797524(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  __int64 v8; // x1
  HorizontalQuestInformationIconDraw_o *v9; // x20
  HorizontalQuestInformationIconDraw_c *v10; // x0
  UnityEngine_Material_o *v11; // x20
  float *enemySp; // x8
  UnityEngine_Shader_o *v13; // x0
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B63A8D & 1) == 0 )
  {
    sub_1BE4ACC(&HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1BE4ACC(&StringLiteral_16471/*"_MainTex"*/, v8);
    byte_4B63A8D = 1;
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
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
                                                       texture,
                                                       0LL,
                                                       texture->klass->vtable._30_MarkAsChanged.methodPtr);
      if ( iconListComponent )
      {
        v11 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
                iconListComponent,
                *(const MethodInfo **)&dispTp);
        this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
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
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._28_get_shader.method)(
                                                       texture,
                                                       texture->klass->vtable._29_set_shader.methodPtr);
      if ( this )
      {
        this = (HorizontalQuestInformationIconDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
        v9 = this;
        if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
        if ( v9 )
        {
          if ( !System_String__Equals_62707124(
                  (System_String_o *)v9,
                  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0LL) )
          {
            v10 = HorizontalQuestInformationIconDraw_TypeInfo;
            if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
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
  this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  }
  if ( !texture )
    goto LABEL_28;
  enemySp = (float *)this[1].fields.enemySp;
  v16.fields.b = enemySp[10];
  v16.fields.a = enemySp[11];
  v16.fields.r = enemySp[8];
  v16.fields.g = enemySp[9];
  UIWidget__set_color((UIWidget_o *)texture, v16, 0LL);
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
  if ( !System_String__Equals_62707124(
          (System_String_o *)this,
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0LL) )
  {
    v10 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v10);
      v10 = HorizontalQuestInformationIconDraw_TypeInfo;
    }
LABEL_27:
    v13 = UnityEngine_Shader__Find(v10->static_fields->DEFAULT_SHADER, 0LL);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, Il2CppMethodPointer))texture->klass->vtable._29_set_shader.method)(
      texture,
      v13,
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
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v10; // x22

  v4 = this;
  if ( (byte_4B63A91 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, item);
    sub_1BE4ACC(&Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__, v5);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v7);
    byte_4B63A91 = 1;
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
      Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v10, 1, 0LL);
  }
  this = (HorizontalQuestInformationIconDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1BE4D28(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0LL);
}


void __fastcall HorizontalQuestInformationIconDraw__SetItem(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
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
  __int64 v22; // x22
  UnityEngine_Component_o *SvtImg; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  QuestInformationListViewItem_o **v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  QuestInformationListViewItem_o *v38; // x0
  int32_t infoType; // w8
  bool v40; // w1
  __int64 v41; // x1
  TerminalSceneComponent_c *v42; // x0
  UnityEngine_Object_o *mInstance; // x20
  UISprite_o *enemySp; // x20
  __int64 v45; // x8
  UISprite_o *v46; // x20
  HorizontalQuestInformationIconDraw_o *v47; // x0
  const MethodInfo *v48; // x4
  ItemIconComponent_o *itemIcon; // x21
  ItemMaster_o *v50; // x21
  bool v51; // w1
  struct UITexture_o **p_SvtImg; // x23
  char v53; // w24
  QuestInformationListViewItem_o *v54; // x8
  UITexture_o *v55; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  const MethodInfo *v65; // x4
  const MethodInfo *v66; // x2
  UISprite_o *v67; // x23
  int32_t iconId; // w24
  const MethodInfo *v69; // x4
  QuestInformationListViewItem_o *v70; // x21
  System_Action_o *v71; // x23
  const MethodInfo *v72; // x3
  int32_t *p_m_CachedPtr; // x8
  Il2CppObject *MasterData_object; // x21
  int32_t v75; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21

  if ( (byte_4B63A8B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, item);
    sub_1BE4ACC(&AtlasManager_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ItemMaster___, v10);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1BE4ACC(&HorizontalQuestInformationIconDraw_TypeInfo, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v14);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v15);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v16);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1BE4ACC(&TerminalSceneComponent_TypeInfo, v18);
    sub_1BE4ACC(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__, v19);
    sub_1BE4ACC(&HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo, v20);
    sub_1BE4ACC(&StringLiteral_12184/*"SHOP_BUY_ITEM_HOLD"*/, v21);
    byte_4B63A8B = 1;
  }
  v22 = sub_1BE4D18(HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_119;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = item;
  v31 = (QuestInformationListViewItem_o **)(v22 + 24);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 24), (int64_t)item, v32, v33, v34, v35, v36, v37);
  if ( mode )
  {
    v38 = *v31;
    if ( *v31 )
    {
      infoType = v38->fields.infoType;
      if ( infoType == 1 )
      {
        if ( QuestInformationListViewItem__isEnemyUnknown(v38, 0LL) )
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
          if ( !byte_4B618A6 )
          {
            sub_1BE4ACC(&TerminalSceneComponent_TypeInfo, v41);
            byte_4B618A6 = 1;
          }
          v42 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v42 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v42->static_fields->mInstance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
          {
            enemySp = (UISprite_o *)this->fields.enemySp;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4B618A6 )
            {
              sub_1BE4ACC(&TerminalSceneComponent_TypeInfo, v24);
              byte_4B618A6 = 1;
            }
            SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              SvtImg = (UnityEngine_Component_o *)TerminalSceneComponent_TypeInfo;
            }
            v45 = **(_QWORD **)&SvtImg[7].fields.m_CachedPtr;
            if ( !v45 || !enemySp )
              goto LABEL_119;
            UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v45 + 304), 0LL);
          }
          v46 = (UISprite_o *)this->fields.enemySp;
          SvtImg = (UnityEngine_Component_o *)HorizontalQuestInformationIconDraw_TypeInfo;
          if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
          if ( v46 )
          {
            UISprite__set_spriteName(
              v46,
              HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
              0LL);
            HorizontalQuestInformationIconDraw__SetDispType(v47, 1, this->fields.enemySp, iconListComponent, v48);
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
          sub_1BE4D28(SvtImg, v24);
        }
        SvtImg = (UnityEngine_Component_o *)*v31;
        if ( !*v31 )
          goto LABEL_119;
        SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItem__isEnemyServant(
                                              (QuestInformationListViewItem_o *)SvtImg,
                                              0LL);
        p_SvtImg = &this->fields.SvtImg;
        if ( !this->fields.SvtImg )
          goto LABEL_119;
        v53 = (char)SvtImg;
        SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)this->fields.SvtImg,
                                              0LL);
        if ( !SvtImg )
          goto LABEL_119;
        if ( (v53 & 1) != 0 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          v54 = *v31;
          if ( !*v31 )
            goto LABEL_119;
          v55 = *p_SvtImg;
          targetId = v54->fields.targetId;
          targetCnt = v54->fields.targetCnt;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v55, targetId, targetCnt, targetCnt, 0LL);
          *p_SvtImg = Manager__loadCommandCard;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&this->fields.SvtImg,
            (int64_t)Manager__loadCommandCard,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          if ( !*v31 )
            goto LABEL_119;
          HorizontalQuestInformationIconDraw__SetDispType_34797524(
            (HorizontalQuestInformationIconDraw_o *)SvtImg,
            (*v31)->fields.dispType,
            this->fields.SvtImg,
            iconListComponent,
            v65);
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
          if ( !*v31 )
            goto LABEL_119;
          v67 = (UISprite_o *)this->fields.enemySp;
          iconId = (*v31)->fields.iconId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetEnemy(v67, iconId, 0LL) )
          {
            SvtImg = (UnityEngine_Component_o *)this->fields.enemySp;
            if ( !SvtImg )
              goto LABEL_119;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
            SvtImg = (UnityEngine_Component_o *)this->fields.enemyTexture;
            if ( !SvtImg )
              goto LABEL_119;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
            if ( !*v31 )
              goto LABEL_119;
            HorizontalQuestInformationIconDraw__SetDispType(
              (HorizontalQuestInformationIconDraw_o *)SvtImg,
              (*v31)->fields.dispType,
              this->fields.enemySp,
              iconListComponent,
              v69);
          }
          else
          {
            v70 = *(QuestInformationListViewItem_o **)(v22 + 24);
            v71 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
            System_Action___ctor(
              v71,
              (Il2CppObject *)v22,
              Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__,
              0LL);
            HorizontalQuestInformationIconDraw__LoadEnemyTexture(this, v70, v71, v72);
          }
        }
        HorizontalQuestInformationIconDraw__SetEnemyName(this, *v31, v66);
      }
      else if ( !infoType )
      {
        SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItem__isRewardUndrop(v38, 0LL);
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
          v40 = 0;
        }
        else
        {
          UnityEngine_GameObject__SetActive(this->fields.blankImg, 0, 0LL);
          SvtImg = (UnityEngine_Component_o *)*v31;
          if ( !*v31 )
            goto LABEL_119;
          itemIcon = this->fields.itemIcon;
          SvtImg = (UnityEngine_Component_o *)QuestInformationListViewItem__GetGiftType(
                                                (QuestInformationListViewItem_o *)SvtImg,
                                                0LL);
          if ( !*v31 )
            goto LABEL_119;
          if ( !itemIcon )
            goto LABEL_119;
          ItemIconComponent__SetGift_39048172(itemIcon, (int32_t)SvtImg, (*v31)->fields.targetId, -1, 0, 0LL);
          SvtImg = (UnityEngine_Component_o *)this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_119;
          SvtImg = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_119;
          v40 = 1;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v40, 0LL);
        SvtImg = (UnityEngine_Component_o *)*v31;
        if ( !*v31 )
          goto LABEL_119;
        if ( !QuestInformationListViewItem__isRewardItem((QuestInformationListViewItem_o *)SvtImg, 0LL) )
          goto LABEL_58;
        SvtImg = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SvtImg )
          goto LABEL_119;
        SvtImg = (UnityEngine_Component_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)SvtImg,
                                              (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !*v31 )
          goto LABEL_119;
        v50 = (ItemMaster_o *)SvtImg;
        if ( !SvtImg )
          goto LABEL_119;
        SvtImg = (UnityEngine_Component_o *)ItemMaster__isQP((ItemMaster_o *)SvtImg, (*v31)->fields.targetId, 0LL);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
          goto LABEL_58;
        if ( !*v31 )
          goto LABEL_119;
        SvtImg = (UnityEngine_Component_o *)ItemMaster__isFriendPoint(v50, (*v31)->fields.targetId, 0LL);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
          goto LABEL_58;
        if ( !*v31 )
          goto LABEL_119;
        SvtImg = (UnityEngine_Component_o *)ItemMaster__isEventPoint(v50, (*v31)->fields.targetId, 0LL);
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
                  v51 = 0;
LABEL_63:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v51, 0LL);
                  return;
                }
              }
            }
          }
        }
        else
        {
          if ( !*v31 )
            goto LABEL_119;
          SvtImg = (UnityEngine_Component_o *)ItemMaster__isMana(v50, (*v31)->fields.targetId, 0LL);
          if ( ((unsigned __int8)SvtImg & 1) != 0 )
          {
            SvtImg = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
            if ( !SvtImg )
              goto LABEL_119;
            p_m_CachedPtr = &SvtImg[7].fields.m_CachedPtr;
          }
          else
          {
            if ( !*v31 )
              goto LABEL_119;
            SvtImg = (UnityEngine_Component_o *)ItemMaster__isRarePri(v50, (*v31)->fields.targetId, 0LL);
            if ( ((unsigned __int8)SvtImg & 1) != 0 )
            {
              SvtImg = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
              if ( !SvtImg )
                goto LABEL_119;
              p_m_CachedPtr = (int32_t *)(&SvtImg[7].fields + 1);
            }
            else
            {
              if ( !*v31 )
                goto LABEL_119;
              if ( ItemMaster__isStone(v50, (*v31)->fields.targetId, 0LL) )
              {
                SvtImg = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
                if ( !SvtImg )
                  goto LABEL_119;
                p_m_CachedPtr = (int32_t *)&SvtImg[7].monitor;
              }
              else
              {
                SvtImg = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !SvtImg )
                  goto LABEL_119;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)SvtImg,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserItemMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4B61717 )
                {
                  sub_1BE4ACC(&NetworkManager_TypeInfo, v24);
                  byte_4B61717 = 1;
                }
                SvtImg = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  SvtImg = (UnityEngine_Component_o *)NetworkManager_TypeInfo;
                }
                if ( !*v31 )
                  goto LABEL_119;
                if ( !MasterData_object )
                  goto LABEL_119;
                SvtImg = (UnityEngine_Component_o *)UserItemMaster__GetEntityDefinitely(
                                                      (UserItemMaster_o *)MasterData_object,
                                                      *(_QWORD *)(*(_QWORD *)&SvtImg[7].fields.m_CachedPtr + 64LL),
                                                      (*v31)->fields.targetId,
                                                      0LL);
                if ( !SvtImg )
                  goto LABEL_119;
                p_m_CachedPtr = (int32_t *)&SvtImg[1].klass + 1;
              }
            }
          }
          v75 = *p_m_CachedPtr;
          holdNumTitleLb = this->fields.holdNumTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          SvtImg = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12184/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
          if ( holdNumTitleLb )
          {
            UILabel__set_text(holdNumTitleLb, (System_String_o *)SvtImg, 0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            SvtImg = (UnityEngine_Component_o *)LocalizationManager__GetNumberFormat(v75, 0LL);
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
                      v51 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v9; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4B63A93 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject____77158408, assetData);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject____77247160, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1BE4ACC(&StringLiteral_23023/*"quest_info"*/, v7);
    byte_4B63A93 = 1;
  }
  if ( !assetData
    || (this = (HorizontalQuestInformationIconDraw_o *)AssetData__GetObject_object__49525204(
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
    sub_1BE4D28(this, method);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v16; // x21
  UnityEngine_Material_o *v17; // x20
  struct HorizontalQuestInformationIconDraw_o *v18; // x8
  struct HorizontalQuestInformationIconDraw_o *v19; // x8
  struct HorizontalQuestInformationIconDraw_o *v20; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__49525204; // x0

  if ( (byte_4B63A94 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_Texture2D____77158432, assetData);
    sub_1BE4ACC(&UnityEngine_Material_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1BE4ACC(&StringLiteral_16736/*"_alpha"*/, v12);
    sub_1BE4ACC(&StringLiteral_5059/*"Custom/SpriteWithMask"*/, v13);
    sub_1BE4ACC(&StringLiteral_16476/*"_MaskTex"*/, v14);
    byte_4B63A94 = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].klass = (AssetData_c *)assetData;
  sub_1BE4A70((PartyOrganizationUtility_o *)&_4__this[1], (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
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