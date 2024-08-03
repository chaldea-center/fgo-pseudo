void __fastcall HorizontalQuestInformationIconDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x0
  struct HorizontalQuestInformationIconDraw_StaticFields *static_fields; // x8
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  HorizontalQuestInformationIconDraw_c *v22; // x8
  int32_t v23; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_49F9467 & 1) == 0 )
  {
    sub_1B640C8(&HorizontalQuestInformationIconDraw_TypeInfo, v1);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_18954/*"enemy_icon_"*/, v5);
    sub_1B640C8(&StringLiteral_22630/*"questinfo_enemy_brank"*/, v6);
    sub_1B640C8(&StringLiteral_15058/*"Unlit/Transparent Colored"*/, v7);
    sub_1B640C8(&StringLiteral_5987/*"Enemys/Icon/"*/, v8);
    sub_1B640C8(&StringLiteral_13303/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, v9);
    byte_49F9467 = 1;
  }
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_22630/*"questinfo_enemy_brank"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields,
    StringLiteral_22630/*"questinfo_enemy_brank"*/,
    v2,
    v3);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13303/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0LL);
  static_fields = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->ENEMY_UNKNOWN_NAME, (int32_t)v10, v12, v13);
  v14 = StringLiteral_5987/*"Enemys/Icon/"*/;
  v15 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v15->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_5987/*"Enemys/Icon/"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->ENEMY_ICON_TEXTURE_PATH, v14, v16, v17);
  v18 = StringLiteral_18954/*"enemy_icon_"*/;
  v19 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v19->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_18954/*"enemy_icon_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v19->ENEMY_ICON_TEXTURE_PREFIX, v18, v20, v21);
  v22 = HorizontalQuestInformationIconDraw_TypeInfo;
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_BA2490;
  v23 = StringLiteral_15058/*"Unlit/Transparent Colored"*/;
  v24 = v22->static_fields;
  v24->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15058/*"Unlit/Transparent Colored"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->DEFAULT_SHADER, v23, v25, v26);
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
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v22; // x0
  struct System_String_o *v23; // x0
  struct System_String_o **p_enemyIconName; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  AssetLoader_LoadEndDataHandler_o *v30; // x20
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49F9464 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, item);
    sub_1B640C8(&HorizontalQuestInformationIconDraw_TypeInfo, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__, v11);
    sub_1B640C8(&HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo, v12);
    byte_49F9464 = 1;
  }
  v13 = sub_1B64314(HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo, item, callback);
  HorizontalQuestInformationIconDraw___c__DisplayClass22_0___ctor(
    (HorizontalQuestInformationIconDraw___c__DisplayClass22_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)callback, v17, v18);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, v19);
  Instance = (CommonUI_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v31 = iconId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  v23 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v22, 0LL);
  this->fields.enemyIconName = v23;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_enemyIconName, (int32_t)v23, v25, v26);
  v27 = System_String__Concat_61375396(
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0LL);
  v30 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v28, v29);
  AssetLoader_LoadEndDataHandler___ctor(
    v30,
    (Il2CppObject *)v13,
    Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v27, v30, 1, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      return;
    }
LABEL_14:
    sub_1B64324(Instance);
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
  ServantStatusBattleListViewItem_o *p_enemyIconAssetData; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49F9465 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&HorizontalQuestInformationIconDraw_TypeInfo, v3);
    byte_49F9465 = 1;
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
    v6 = System_String__Concat_61375396(v5->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v6, 0LL);
    this->fields.enemyIconAssetData = 0LL;
    p_enemyIconAssetData = (ServantStatusBattleListViewItem_o *)&this->fields.enemyIconAssetData;
    sub_1B6406C(p_enemyIconAssetData, 0, v8, v9);
    p_enemyIconAssetData->monitor = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_enemyIconName, 0, v10, v11);
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
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Material_o *v16; // x21
  struct UISpriteAltMat_o *enemySp; // x8
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F9461 & 1) == 0 )
  {
    sub_1B640C8(&HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1B640C8(&UnityEngine_Material_TypeInfo, v8);
    byte_49F9461 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( sp )
      {
        v18.fields.r = 1.0;
        v18.fields.g = 1.0;
        v18.fields.b = 1.0;
        v18.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)sp, v18, 0LL);
        if ( iconListComponent )
        {
          v13 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(iconListComponent, 0LL);
          v16 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v14, v15);
          UnityEngine_Material___ctor_68991096(v16, v13, 0LL);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v16, 0LL);
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
      sub_1B64324(this);
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

  if ( (byte_49F9463 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconDraw_o *)sub_1B640C8(
                                                     &HorizontalQuestInformationIconDraw_TypeInfo,
                                                     *(_QWORD *)&dispTp);
    byte_49F9463 = 1;
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
      sub_1B64324(this);
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
void __fastcall HorizontalQuestInformationIconDraw__SetDispType_33737496(
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

  if ( (byte_49F9462 & 1) == 0 )
  {
    sub_1B640C8(&HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1B640C8(&StringLiteral_16193/*"_MainTex"*/, v8);
    byte_49F9462 = 1;
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
        v11 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(iconListComponent, 0LL);
        this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                                         texture,
                                                         texture->klass->vtable._27_set_mainTexture.methodPtr);
        if ( v11 )
        {
          UnityEngine_Material__SetTexture(
            v11,
            (System_String_o *)StringLiteral_16193/*"_MainTex"*/,
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
          if ( !System_String__Equals_61383712(
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
    sub_1B64324(this);
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
  if ( !System_String__Equals_61383712(
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
  __int64 v10; // x1
  __int64 v11; // x2
  AssetLoader_LoadEndDataHandler_o *v12; // x22

  v4 = this;
  if ( (byte_49F9466 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, item);
    sub_1B640C8(&Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__, v5);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v7);
    byte_49F9466 = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0LL);
    v12 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11);
    AssetLoader_LoadEndDataHandler___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v12, 1, 0LL);
  }
  this = (HorizontalQuestInformationIconDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1B64324(this);
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
  int64_t SvtImg; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  QuestInformationListViewItem_o **v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  QuestInformationListViewItem_o *v29; // x0
  int32_t infoType; // w8
  bool v31; // w1
  __int64 v32; // x1
  TerminalSceneComponent_c *v33; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v35; // x1
  UISprite_o *enemySp; // x20
  __int64 v37; // x8
  UISprite_o *v38; // x20
  HorizontalQuestInformationIconDraw_o *v39; // x0
  const MethodInfo *v40; // x4
  ItemIconComponent_o *itemIcon; // x21
  ItemMaster_o *v42; // x21
  bool v43; // w1
  struct UITexture_o **p_SvtImg; // x23
  char v45; // w24
  QuestInformationListViewItem_o *v46; // x8
  UITexture_o *v47; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  const MethodInfo *v53; // x4
  const MethodInfo *v54; // x2
  UISprite_o *v55; // x23
  int32_t iconId; // w24
  __int64 v57; // x1
  __int64 v58; // x2
  const MethodInfo *v59; // x4
  QuestInformationListViewItem_o *v60; // x21
  System_Action_o *v61; // x23
  const MethodInfo *v62; // x3
  int32_t *v63; // x8
  Il2CppObject *MasterData_object; // x21
  int32_t v65; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21

  if ( (byte_49F9460 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, item);
    sub_1B640C8(&AtlasManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1B640C8(&HorizontalQuestInformationIconDraw_TypeInfo, v12);
    sub_1B640C8(&LocalizationManager_TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v16);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v18);
    sub_1B640C8(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__, v19);
    sub_1B640C8(&HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_11957/*"SHOP_BUY_ITEM_HOLD"*/, v21);
    byte_49F9460 = 1;
  }
  v22 = sub_1B64314(HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo, item, *(_QWORD *)&mode);
  HorizontalQuestInformationIconDraw___c__DisplayClass18_0___ctor(
    (HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *)v22,
    0LL);
  if ( !v22 )
    goto LABEL_115;
  *(_QWORD *)(v22 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v22 + 24) = item;
  v26 = (QuestInformationListViewItem_o **)(v22 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 24), (int32_t)item, v27, v28);
  if ( mode )
  {
    v29 = *v26;
    if ( *v26 )
    {
      infoType = v29->fields.infoType;
      if ( infoType == 1 )
      {
        if ( QuestInformationListViewItem__isEnemyUnknown(v29, 0LL) )
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
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49F76BD )
          {
            sub_1B640C8(&TerminalSceneComponent_TypeInfo, v32);
            byte_49F76BD = 1;
          }
          v33 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v33 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v33->static_fields->mInstance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
          {
            enemySp = (UISprite_o *)this->fields.enemySp;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_49F76BD )
            {
              sub_1B640C8(&TerminalSceneComponent_TypeInfo, v35);
              byte_49F76BD = 1;
            }
            SvtImg = (int64_t)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              SvtImg = (int64_t)TerminalSceneComponent_TypeInfo;
            }
            v37 = **(_QWORD **)(SvtImg + 184);
            if ( !v37 || !enemySp )
              goto LABEL_115;
            UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v37 + 304), 0LL);
          }
          v38 = (UISprite_o *)this->fields.enemySp;
          SvtImg = (int64_t)HorizontalQuestInformationIconDraw_TypeInfo;
          if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
          if ( v38 )
          {
            UISprite__set_spriteName(
              v38,
              HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
              0LL);
            HorizontalQuestInformationIconDraw__SetDispType(v39, 1, this->fields.enemySp, iconListComponent, v40);
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
          sub_1B64324(SvtImg);
        }
        SvtImg = (int64_t)*v26;
        if ( !*v26 )
          goto LABEL_115;
        SvtImg = QuestInformationListViewItem__isEnemyServant((QuestInformationListViewItem_o *)SvtImg, 0LL);
        p_SvtImg = &this->fields.SvtImg;
        if ( !this->fields.SvtImg )
          goto LABEL_115;
        v45 = SvtImg;
        SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.SvtImg, 0LL);
        if ( !SvtImg )
          goto LABEL_115;
        if ( (v45 & 1) != 0 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0LL);
          v46 = *v26;
          if ( !*v26 )
            goto LABEL_115;
          v47 = *p_SvtImg;
          targetId = v46->fields.targetId;
          targetCnt = v46->fields.targetCnt;
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v47, targetId, targetCnt, targetCnt, 0LL);
          *p_SvtImg = Manager__loadCommandCard;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.SvtImg,
            (int32_t)Manager__loadCommandCard,
            v51,
            v52);
          if ( !*v26 )
            goto LABEL_115;
          HorizontalQuestInformationIconDraw__SetDispType_33737496(
            (HorizontalQuestInformationIconDraw_o *)SvtImg,
            (*v26)->fields.dispType,
            this->fields.SvtImg,
            iconListComponent,
            v53);
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
          if ( !*v26 )
            goto LABEL_115;
          v55 = (UISprite_o *)this->fields.enemySp;
          iconId = (*v26)->fields.iconId;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( AtlasManager__SetEnemy(v55, iconId, 0LL) )
          {
            SvtImg = (int64_t)this->fields.enemySp;
            if ( !SvtImg )
              goto LABEL_115;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0LL);
            SvtImg = (int64_t)this->fields.enemyTexture;
            if ( !SvtImg )
              goto LABEL_115;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0LL);
            if ( !*v26 )
              goto LABEL_115;
            HorizontalQuestInformationIconDraw__SetDispType(
              (HorizontalQuestInformationIconDraw_o *)SvtImg,
              (*v26)->fields.dispType,
              this->fields.enemySp,
              iconListComponent,
              v59);
          }
          else
          {
            v60 = *(QuestInformationListViewItem_o **)(v22 + 24);
            v61 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v57, v58);
            System_Action___ctor(
              v61,
              (Il2CppObject *)v22,
              Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__,
              0LL);
            HorizontalQuestInformationIconDraw__LoadEnemyTexture(this, v60, v61, v62);
          }
        }
        HorizontalQuestInformationIconDraw__SetEnemyName(this, *v26, v54);
      }
      else if ( !infoType )
      {
        SvtImg = QuestInformationListViewItem__isRewardUndrop(v29, 0LL);
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
          v31 = 0;
        }
        else
        {
          UnityEngine_GameObject__SetActive(this->fields.blankImg, 0, 0LL);
          SvtImg = (int64_t)*v26;
          if ( !*v26 )
            goto LABEL_115;
          itemIcon = this->fields.itemIcon;
          SvtImg = QuestInformationListViewItem__GetGiftType((QuestInformationListViewItem_o *)SvtImg, 0LL);
          if ( !*v26 )
            goto LABEL_115;
          if ( !itemIcon )
            goto LABEL_115;
          ItemIconComponent__SetGift_37829292(itemIcon, SvtImg, (*v26)->fields.targetId, -1, 0, 0LL);
          SvtImg = (int64_t)this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_115;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0LL);
          if ( !SvtImg )
            goto LABEL_115;
          v31 = 1;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v31, 0LL);
        SvtImg = (int64_t)*v26;
        if ( !*v26 )
          goto LABEL_115;
        if ( !QuestInformationListViewItem__isRewardItem((QuestInformationListViewItem_o *)SvtImg, 0LL) )
          goto LABEL_58;
        SvtImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SvtImg )
          goto LABEL_115;
        SvtImg = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SvtImg,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !*v26 )
          goto LABEL_115;
        v42 = (ItemMaster_o *)SvtImg;
        if ( !SvtImg )
          goto LABEL_115;
        SvtImg = ItemMaster__isQP((ItemMaster_o *)SvtImg, (*v26)->fields.targetId, 0LL);
        if ( (SvtImg & 1) != 0 )
          goto LABEL_58;
        if ( !*v26 )
          goto LABEL_115;
        SvtImg = ItemMaster__isFriendPoint(v42, (*v26)->fields.targetId, 0LL);
        if ( (SvtImg & 1) != 0 )
          goto LABEL_58;
        if ( !*v26 )
          goto LABEL_115;
        SvtImg = ItemMaster__isEventPoint(v42, (*v26)->fields.targetId, 0LL);
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
                  v43 = 0;
LABEL_63:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v43, 0LL);
                  return;
                }
              }
            }
          }
        }
        else
        {
          if ( !*v26 )
            goto LABEL_115;
          SvtImg = ItemMaster__isMana(v42, (*v26)->fields.targetId, 0LL);
          if ( (SvtImg & 1) != 0 )
          {
            SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0LL);
            if ( !SvtImg )
              goto LABEL_115;
            v63 = (int32_t *)(SvtImg + 184);
          }
          else
          {
            if ( !*v26 )
              goto LABEL_115;
            SvtImg = ItemMaster__isRarePri(v42, (*v26)->fields.targetId, 0LL);
            if ( (SvtImg & 1) != 0 )
            {
              SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0LL);
              if ( !SvtImg )
                goto LABEL_115;
              v63 = (int32_t *)(SvtImg + 188);
            }
            else
            {
              if ( !*v26 )
                goto LABEL_115;
              if ( ItemMaster__isStone(v42, (*v26)->fields.targetId, 0LL) )
              {
                SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0LL);
                if ( !SvtImg )
                  goto LABEL_115;
                v63 = (int32_t *)(SvtImg + 176);
              }
              else
              {
                SvtImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !SvtImg )
                  goto LABEL_115;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)SvtImg,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                SvtImg = NetworkManager__get_UserId(0LL);
                if ( !*v26 )
                  goto LABEL_115;
                if ( !MasterData_object )
                  goto LABEL_115;
                SvtImg = (int64_t)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    SvtImg,
                                    (*v26)->fields.targetId,
                                    0LL);
                if ( !SvtImg )
                  goto LABEL_115;
                v63 = (int32_t *)(SvtImg + 28);
              }
            }
          }
          v65 = *v63;
          holdNumTitleLb = this->fields.holdNumTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          SvtImg = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11957/*"SHOP_BUY_ITEM_HOLD"*/, 0LL);
          if ( holdNumTitleLb )
          {
            UILabel__set_text(holdNumTitleLb, (System_String_o *)SvtImg, 0LL);
            holdNumCntLb = this->fields.holdNumCntLb;
            SvtImg = (int64_t)LocalizationManager__GetNumberFormat(v65, 0LL);
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
                      v43 = 1;
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
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v9; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_49F9468 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, assetData);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1B640C8(&StringLiteral_22610/*"quest_info"*/, v7);
    byte_49F9468 = 1;
  }
  if ( !assetData
    || (this = (HorizontalQuestInformationIconDraw_o *)AssetData__GetObject_object__48347676(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_22610/*"quest_info"*/,
                                                         (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0LL) )
  {
    sub_1B64324(this);
  }
  v9 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__49003980(
    v9,
    transform,
    (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
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
  struct QuestInformationListViewItem_o *item; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  v3 = this;
  this = (HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *)_4__this->fields.enemySp;
  if ( !this
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL)
    || (this = (HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *)v4->fields.enemyTexture) == 0LL
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL), (item = v3->fields.item) == 0LL)
    || (this = (HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *)v3->fields.__4__this) == 0LL )
  {
LABEL_8:
    sub_1B64324(this);
  }
  HorizontalQuestInformationIconDraw__SetDispTypeEnemyTex(
    (HorizontalQuestInformationIconDraw_o *)this,
    item->fields.dispType,
    (UITexture_o *)this[3].monitor,
    0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Material_o *v15; // x20
  struct HorizontalQuestInformationIconDraw_o *v16; // x8
  struct HorizontalQuestInformationIconDraw_o *v17; // x8
  struct HorizontalQuestInformationIconDraw_o *v18; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__48347676; // x0

  if ( (byte_49F946E & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_Texture2D____75705984, assetData);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_16457/*"_alpha"*/, v8);
    sub_1B640C8(&StringLiteral_4952/*"Custom/SpriteWithMask"*/, v9);
    sub_1B640C8(&StringLiteral_16198/*"_MaskTex"*/, v10);
    byte_49F946E = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  _4__this[1].klass = (AssetData_c *)assetData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this[1], (int32_t)assetData, (int32_t)method, v3);
  v12 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4952/*"Custom/SpriteWithMask"*/, 0LL);
  v15 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v13, v14);
  UnityEngine_Material___ctor(v15, v12, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_13;
  _4__this = (AssetData_o *)v16->fields.enemyTexture;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)((__int64 (__fastcall *)(AssetData_o *, UnityEngine_Material_o *, Il2CppMethodPointer))_4__this->klass[1].vtable._2_GetHashCode.method)(
                              _4__this,
                              v15,
                              _4__this->klass[1].vtable._3_ToString.methodPtr);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_13;
  _4__this = v17->fields.enemyIconAssetData;
  if ( !_4__this )
    goto LABEL_13;
  _4__this = (AssetData_o *)AssetData__GetObject_object__48347676(
                              _4__this,
                              v17->fields.enemyIconName,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984);
  if ( !v15
    || (UnityEngine_Material__set_mainTexture(v15, (UnityEngine_Texture_o *)_4__this, 0LL),
        (v18 = this->fields.__4__this) == 0LL)
    || (enemyIconAssetData = v18->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_61375396(
                                    v18->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16457/*"_alpha"*/,
                                    0LL),
        !enemyIconAssetData)
    || (Object_object__48347676 = AssetData__GetObject_object__48347676(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_Texture2D____75705984),
        UnityEngine_Material__SetTexture(
          v15,
          (System_String_o *)StringLiteral_16198/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__48347676,
          0LL),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1B64324(_4__this);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}