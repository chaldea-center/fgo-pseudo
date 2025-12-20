void HorizontalQuestInformationIconDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_String_o *v7; // x0
  struct HorizontalQuestInformationIconDraw_StaticFields *static_fields; // x8
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  HorizontalQuestInformationIconDraw_c *v31; // x8
  int32_t v32; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

  if ( (byte_4D29489 & 1) == 0 )
  {
    sub_1C94098(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_19184/*"enemy_icon_"*/);
    sub_1C94098(&StringLiteral_23124/*"questinfo_enemy_brank"*/);
    sub_1C94098(&StringLiteral_15189/*"Unlit/Transparent Colored"*/);
    sub_1C94098(&StringLiteral_6056/*"Enemys/Icon/"*/);
    sub_1C94098(&StringLiteral_13518/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_4D29489 = 1;
  }
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_23124/*"questinfo_enemy_brank"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields,
    StringLiteral_23124/*"questinfo_enemy_brank"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13518/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0);
  static_fields = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = v7;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->ENEMY_UNKNOWN_NAME,
    (int32_t)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_6056/*"Enemys/Icon/"*/;
  v16 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v16->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6056/*"Enemys/Icon/"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->ENEMY_ICON_TEXTURE_PATH, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_19184/*"enemy_icon_"*/;
  v24 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v24->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19184/*"enemy_icon_"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v24->ENEMY_ICON_TEXTURE_PREFIX, v23, v25, v26, v27, v28, v29, v30);
  v31 = HorizontalQuestInformationIconDraw_TypeInfo;
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_CFE140;
  v32 = StringLiteral_15189/*"Unlit/Transparent Colored"*/;
  v33 = v31->static_fields;
  v33->DEFAULT_SHADER = (struct System_String_o *)StringLiteral_15189/*"Unlit/Transparent Colored"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v33->DEFAULT_SHADER, v32, v34, v35, v36, v37, v38, v39);
}


void HorizontalQuestInformationIconDraw___ctor(HorizontalQuestInformationIconDraw_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void HorizontalQuestInformationIconDraw__LoadEnemyTexture(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x21
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  int32_t iconId; // w10
  Il2CppObject *ENEMY_ICON_TEXTURE_PREFIX; // x20
  Il2CppObject *v25; // x0
  struct System_String_o *v26; // x0
  struct System_String_o **p_enemyIconName; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x20
  int32_t v36; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D29486 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__);
    sub_1C94098(&HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
    byte_4D29486 = 1;
  }
  v7 = sub_1C942E4(HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 1, 0);
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, v22);
  Instance = (CommonUI_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v36 = iconId;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v26 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v25, 0);
  this->fields.enemyIconName = v26;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_enemyIconName, (int32_t)v26, v28, v29, v30, v31, v32, v33);
  v34 = System_String__Concat_64417744(
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0);
  v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v35,
    (Il2CppObject *)v7,
    Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v34, v35, 1, 0) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0);
      return;
    }
LABEL_14:
    sub_1C942F0(Instance, v9);
  }
}


// attributes: thunk
void HorizontalQuestInformationIconDraw__OnDestroy(
        HorizontalQuestInformationIconDraw_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, method);
}


void HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(
        HorizontalQuestInformationIconDraw_o *this,
        const MethodInfo *method)
{
  System_String_o **p_enemyIconName; // x20
  HorizontalQuestInformationIconDraw_c *v4; // x0
  System_String_o *v5; // x21
  GrandQuestFolderBoardItem_o *p_enemyIconAssetData; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D29487 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&HorizontalQuestInformationIconDraw_TypeInfo);
    byte_4D29487 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0) )
  {
    v4 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
      v4 = HorizontalQuestInformationIconDraw_TypeInfo;
    }
    v5 = System_String__Concat_64417744(v4->static_fields->ENEMY_ICON_TEXTURE_PATH, *p_enemyIconName, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v5, 0);
    this->fields.enemyIconAssetData = 0;
    p_enemyIconAssetData = (GrandQuestFolderBoardItem_o *)&this->fields.enemyIconAssetData;
    sub_1C9403C(p_enemyIconAssetData, 0, v7, v8, v9, v10, v11, v12);
    p_enemyIconAssetData->monitor = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_enemyIconName, 0, v13, v14, v15, v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void HorizontalQuestInformationIconDraw__SetDispType(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  float v8; // s0 OVERLAPPED
  float v9; // s1
  float v10; // s2
  float v11; // s3
  UnityEngine_Material_o *v12; // x20
  UnityEngine_Material_o *v13; // x21
  struct UISpriteAltMat_o *enemySp; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D29483 & 1) == 0 )
  {
    sub_1C94098(&HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C94098(&UnityEngine_Material_TypeInfo);
    byte_4D29483 = 1;
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
        UIWidget__set_color((UIWidget_o *)sp, v15, 0);
        if ( iconListComponent )
        {
          v12 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
                  iconListComponent,
                  *(const MethodInfo **)&dispTp);
          v13 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_71973536(v13, v12, 0);
          UISpriteAltMat__SetMaterialKeepTexture(sp, v13, 0);
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
      sub_1C942F0(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        v8 = 1.0;
        v9 = 1.0;
        v10 = 1.0;
        v11 = 1.0;
LABEL_15:
        UIWidget__set_color((UIWidget_o *)sp, *(UnityEngine_Color_o *)&v8, 0);
        UISpriteAltMat__ResetMaterial(sp, 0);
        return;
      }
      goto LABEL_17;
  }
}


// local variable allocation has failed, the output may be wrong!
void HorizontalQuestInformationIconDraw__SetDispTypeEnemyTex(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        const MethodInfo *method)
{
  float v6; // s0 OVERLAPPED
  float v7; // s1
  float v8; // s2
  float v9; // s3
  struct UISpriteAltMat_o *enemySp; // x8

  if ( (byte_4D29485 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C94098(&HorizontalQuestInformationIconDraw_TypeInfo);
    byte_4D29485 = 1;
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
      sub_1C942F0(this, *(_QWORD *)&dispTp);
    case 1:
LABEL_6:
      if ( texture )
      {
        v6 = 1.0;
        v7 = 1.0;
        v8 = 1.0;
        v9 = 1.0;
LABEL_12:
        UIWidget__set_color((UIWidget_o *)texture, *(UnityEngine_Color_o *)&v6, 0);
        return;
      }
      goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void HorizontalQuestInformationIconDraw__SetDispType_37153324(
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

  if ( (byte_4D29484 & 1) == 0 )
  {
    sub_1C94098(&HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C94098(&StringLiteral_16321/*"_MainTex"*/);
    byte_4D29484 = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v14.fields.r = 1.0;
      v14.fields.g = 1.0;
      v14.fields.b = 1.0;
      v14.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v14, 0);
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
                                                       texture,
                                                       0,
                                                       texture->klass->vtable._29_set_shader.method);
      if ( iconListComponent )
      {
        v10 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
                iconListComponent,
                *(const MethodInfo **)&dispTp);
        this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                                         texture,
                                                         texture->klass->vtable._26_get_mainTexture.method);
        if ( v10 )
        {
          UnityEngine_Material__SetTexture(
            v10,
            (System_String_o *)StringLiteral_16321/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this,
            0);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
            texture,
            v10,
            texture->klass->vtable._25_set_material.method);
          ((void (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._30_MarkAsChanged.methodPtr)(
            texture,
            texture->klass->vtable._30_MarkAsChanged.method);
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
      UIWidget__set_color((UIWidget_o *)texture, v13, 0);
      ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
        texture,
        0,
        texture->klass->vtable._25_set_material.method);
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._28_get_shader.methodPtr)(
                                                       texture,
                                                       texture->klass->vtable._28_get_shader.method);
      if ( this )
      {
        this = (HorizontalQuestInformationIconDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        v8 = this;
        if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
        if ( v8 )
        {
          if ( !System_String__Equals_64453064(
                  (System_String_o *)v8,
                  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0) )
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
    sub_1C942F0(this, *(_QWORD *)&dispTp);
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
  UIWidget__set_color((UIWidget_o *)texture, v15, 0);
  ((void (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
    texture,
    0,
    texture->klass->vtable._25_set_material.method);
  this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._28_get_shader.methodPtr)(
                                                   texture,
                                                   texture->klass->vtable._28_get_shader.method);
  if ( !this )
    goto LABEL_28;
  this = (HorizontalQuestInformationIconDraw_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  if ( !System_String__Equals_64453064(
          (System_String_o *)this,
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0) )
  {
    v9 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v9);
      v9 = HorizontalQuestInformationIconDraw_TypeInfo;
    }
LABEL_27:
    v12 = UnityEngine_Shader__Find(v9->static_fields->DEFAULT_SHADER, 0);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      v12,
      texture->klass->vtable._29_set_shader.method);
  }
}


void HorizontalQuestInformationIconDraw__SetEnemyName(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v4; // x20
  int32_t enemyNameEffectId; // w21
  System_String_o *NameEffectPath; // x21
  AssetLoader_LoadEndDataHandler_o *v7; // x22

  v4 = this;
  if ( (byte_4D29488 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    byte_4D29488 = 1;
  }
  if ( !item )
    goto LABEL_12;
  enemyNameEffectId = item->fields.enemyNameEffectId;
  if ( enemyNameEffectId )
  {
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    NameEffectPath = ServantAssetLoadManager__getNameEffectPath(enemyNameEffectId, 0);
    v7 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v7,
      (Il2CppObject *)v4,
      Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(NameEffectPath, v7, 1, 0);
  }
  this = (HorizontalQuestInformationIconDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_1C942F0(this, item);
  UILabel__set_text((UILabel_o *)this, item->fields.nameText, 0);
}


void HorizontalQuestInformationIconDraw__SetItem(
        HorizontalQuestInformationIconDraw_o *this,
        QuestInformationListViewItem_o *item,
        int32_t mode,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  __int64 v9; // x22
  void *SvtImg; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  QuestInformationListViewItem_o **v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  QuestInformationListViewItem_o *v25; // x8
  int32_t infoType; // w9
  QuestInformationListViewItem_o *v27; // x8
  int32_t v28; // w1
  bool v29; // w1
  int32_t mEnemyType; // w24
  struct UITexture_o **p_SvtImg; // x23
  QuestInformationListViewItem_o *v32; // x8
  UITexture_o *v33; // x25
  int32_t targetCnt; // w22
  int32_t targetId; // w24
  UITexture_o *Manager__loadCommandCard; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  const MethodInfo *v43; // x4
  const MethodInfo *v44; // x2
  ItemMaster_o *v45; // x21
  bool v46; // w1
  TerminalSceneComponent_c *v47; // x0
  UnityEngine_Object_o *mInstance; // x20
  UISprite_o *v49; // x20
  __int64 v50; // x8
  UISprite_o *v51; // x20
  HorizontalQuestInformationIconDraw_o *v52; // x0
  const MethodInfo *v53; // x4
  UISprite_o *enemySp; // x23
  int32_t iconId; // w24
  const MethodInfo *v56; // x4
  QuestInformationListViewItem_o *v57; // x21
  System_Action_o *v58; // x23
  const MethodInfo *v59; // x3
  int32_t *v60; // x8
  Il2CppObject *MasterData_object; // x21
  int32_t v62; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21

  if ( (byte_4D29482 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C94098(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&ServantAssetLoadManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    sub_1C94098(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__);
    sub_1C94098(&HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
    sub_1C94098(&StringLiteral_12121/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_4D29482 = 1;
  }
  v9 = sub_1C942E4(HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_120;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = item;
  v18 = (QuestInformationListViewItem_o **)(v9 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)item, v19, v20, v21, v22, v23, v24);
  if ( mode )
  {
    v25 = *v18;
    if ( *v18 )
    {
      infoType = v25->fields.infoType;
      if ( infoType == 1 )
      {
        mEnemyType = v25->fields.mEnemyType;
        if ( mEnemyType )
        {
          p_SvtImg = &this->fields.SvtImg;
          SvtImg = this->fields.SvtImg;
          if ( !SvtImg )
            goto LABEL_120;
          SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_120;
          if ( mEnemyType == 1 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
            v32 = *v18;
            if ( !*v18 )
              goto LABEL_120;
            v33 = *p_SvtImg;
            targetId = v32->fields.targetId;
            targetCnt = v32->fields.targetCnt;
            if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v33, targetId, targetCnt, targetCnt, 0);
            *p_SvtImg = Manager__loadCommandCard;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&this->fields.SvtImg,
              (int32_t)Manager__loadCommandCard,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            if ( !*v18 )
              goto LABEL_120;
            HorizontalQuestInformationIconDraw__SetDispType_37153324(
              (HorizontalQuestInformationIconDraw_o *)SvtImg,
              (*v18)->fields.dispType,
              this->fields.SvtImg,
              iconListComponent,
              v43);
            SvtImg = this->fields.enemySp;
            if ( !SvtImg )
              goto LABEL_120;
            SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
            if ( !SvtImg )
              goto LABEL_120;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
            SvtImg = this->fields.enemySp;
            if ( !SvtImg )
              goto LABEL_120;
            SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
            if ( !SvtImg )
              goto LABEL_120;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
            if ( !*v18 )
              goto LABEL_120;
            enemySp = (UISprite_o *)this->fields.enemySp;
            iconId = (*v18)->fields.iconId;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            if ( AtlasManager__SetEnemy(enemySp, iconId, 0) )
            {
              SvtImg = this->fields.enemySp;
              if ( !SvtImg )
                goto LABEL_120;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0);
              SvtImg = this->fields.enemyTexture;
              if ( !SvtImg )
                goto LABEL_120;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0);
              if ( !*v18 )
                goto LABEL_120;
              HorizontalQuestInformationIconDraw__SetDispType(
                (HorizontalQuestInformationIconDraw_o *)SvtImg,
                (*v18)->fields.dispType,
                this->fields.enemySp,
                iconListComponent,
                v56);
            }
            else
            {
              v57 = *(QuestInformationListViewItem_o **)(v9 + 24);
              v58 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
              System_Action___ctor(
                v58,
                (Il2CppObject *)v9,
                Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__,
                0);
              HorizontalQuestInformationIconDraw__LoadEnemyTexture(this, v57, v58, v59);
            }
          }
          HorizontalQuestInformationIconDraw__SetEnemyName(this, *v18, v44);
        }
        else
        {
          SvtImg = this->fields.SvtImg;
          if ( !SvtImg )
            goto LABEL_120;
          SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_120;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
          SvtImg = this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_120;
          SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_120;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D264E4 )
          {
            sub_1C94098(&TerminalSceneComponent_TypeInfo);
            byte_4D264E4 = 1;
          }
          v47 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v47 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v47->static_fields->mInstance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
          {
            v49 = (UISprite_o *)this->fields.enemySp;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4D264E4 )
            {
              sub_1C94098(&TerminalSceneComponent_TypeInfo);
              byte_4D264E4 = 1;
            }
            SvtImg = TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              SvtImg = TerminalSceneComponent_TypeInfo;
            }
            v50 = **((_QWORD **)SvtImg + 23);
            if ( !v50 || !v49 )
              goto LABEL_120;
            UISprite__set_atlas(v49, *(UIAtlas_o **)(v50 + 304), 0);
          }
          v51 = (UISprite_o *)this->fields.enemySp;
          SvtImg = HorizontalQuestInformationIconDraw_TypeInfo;
          if ( !HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo);
          if ( !v51 )
            goto LABEL_120;
          UISprite__set_spriteName(v51, HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP, 0);
          HorizontalQuestInformationIconDraw__SetDispType(v52, 1, this->fields.enemySp, iconListComponent, v53);
          SvtImg = this->fields.textLb;
          if ( !SvtImg )
            goto LABEL_120;
          UILabel__set_text(
            (UILabel_o *)SvtImg,
            HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
            0);
        }
      }
      else if ( !infoType )
      {
        SvtImg = this->fields.blankImg;
        if ( !SvtImg )
          goto LABEL_120;
        if ( v25->fields.mRewardType )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
          v27 = *v18;
          if ( !*v18 )
            goto LABEL_120;
          SvtImg = this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_120;
          v28 = v27->fields.mRewardType == 2 ? 2 : 1;
          ItemIconComponent__SetGift_41674460((ItemIconComponent_o *)SvtImg, v28, v27->fields.targetId, -1, 0, 0);
          SvtImg = this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_120;
          SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_120;
          v29 = 1;
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
          SvtImg = this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_120;
          SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_120;
          v29 = 0;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v29, 0);
        if ( !*v18 )
          goto LABEL_120;
        if ( (*v18)->fields.mRewardType != 2 )
          goto LABEL_43;
        SvtImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SvtImg )
          goto LABEL_120;
        SvtImg = DataManager__GetMasterData_object_(
                   (DataManager_o *)SvtImg,
                   (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !*v18 )
          goto LABEL_120;
        v45 = (ItemMaster_o *)SvtImg;
        if ( !SvtImg )
          goto LABEL_120;
        SvtImg = (void *)ItemMaster__isQP((ItemMaster_o *)SvtImg, (*v18)->fields.targetId, 0);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
          goto LABEL_43;
        if ( !*v18 )
          goto LABEL_120;
        SvtImg = (void *)ItemMaster__isFriendPoint(v45, (*v18)->fields.targetId, 0);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
          goto LABEL_43;
        if ( !*v18 )
          goto LABEL_120;
        SvtImg = (void *)ItemMaster__isEventPoint(v45, (*v18)->fields.targetId, 0);
        if ( ((unsigned __int8)SvtImg & 1) != 0 )
        {
LABEL_43:
          SvtImg = this->fields.holdNumTitleLb;
          if ( SvtImg )
          {
            SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
            if ( SvtImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
              SvtImg = this->fields.holdNumCntLb;
              if ( SvtImg )
              {
                SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
                if ( SvtImg )
                {
                  v46 = 0;
LABEL_48:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v46, 0);
                  return;
                }
              }
            }
          }
        }
        else
        {
          if ( !*v18 )
            goto LABEL_120;
          SvtImg = (void *)ItemMaster__isMana(v45, (*v18)->fields.targetId, 0);
          if ( ((unsigned __int8)SvtImg & 1) != 0 )
          {
            SvtImg = UserGameMaster__getSelfUserGame(0);
            if ( !SvtImg )
              goto LABEL_120;
            v60 = (int32_t *)((char *)SvtImg + 192);
          }
          else
          {
            if ( !*v18 )
              goto LABEL_120;
            SvtImg = (void *)ItemMaster__isRarePri(v45, (*v18)->fields.targetId, 0);
            if ( ((unsigned __int8)SvtImg & 1) != 0 )
            {
              SvtImg = UserGameMaster__getSelfUserGame(0);
              if ( !SvtImg )
                goto LABEL_120;
              v60 = (int32_t *)((char *)SvtImg + 196);
            }
            else
            {
              if ( !*v18 )
                goto LABEL_120;
              if ( ItemMaster__isStone(v45, (*v18)->fields.targetId, 0) )
              {
                SvtImg = UserGameMaster__getSelfUserGame(0);
                if ( !SvtImg )
                  goto LABEL_120;
                v60 = (int32_t *)((char *)SvtImg + 184);
              }
              else
              {
                SvtImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !SvtImg )
                  goto LABEL_120;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)SvtImg,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4D2633A )
                {
                  sub_1C94098(&NetworkManager_TypeInfo);
                  byte_4D2633A = 1;
                }
                SvtImg = NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  SvtImg = NetworkManager_TypeInfo;
                }
                if ( !*v18 )
                  goto LABEL_120;
                if ( !MasterData_object )
                  goto LABEL_120;
                SvtImg = UserItemMaster__GetEntityDefinitely(
                           (UserItemMaster_o *)MasterData_object,
                           *(_QWORD *)(*((_QWORD *)SvtImg + 23) + 64LL),
                           (*v18)->fields.targetId,
                           0);
                if ( !SvtImg )
                  goto LABEL_120;
                v60 = (int32_t *)((char *)SvtImg + 28);
              }
            }
          }
          v62 = *v60;
          holdNumTitleLb = this->fields.holdNumTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          SvtImg = LocalizationManager__Get((System_String_o *)StringLiteral_12121/*"SHOP_BUY_ITEM_HOLD"*/, 0);
          if ( holdNumTitleLb )
          {
            UILabel__set_text(holdNumTitleLb, (System_String_o *)SvtImg, 0);
            holdNumCntLb = this->fields.holdNumCntLb;
            SvtImg = LocalizationManager__GetNumberFormat(v62, 0);
            if ( holdNumCntLb )
            {
              UILabel__set_text(holdNumCntLb, (System_String_o *)SvtImg, 0);
              SvtImg = this->fields.holdNumTitleLb;
              if ( SvtImg )
              {
                SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
                if ( SvtImg )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
                  SvtImg = this->fields.holdNumCntLb;
                  if ( SvtImg )
                  {
                    SvtImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
                    if ( SvtImg )
                    {
                      v46 = 1;
                      goto LABEL_48;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_120:
        sub_1C942F0(SvtImg, v11);
      }
    }
  }
}


void HorizontalQuestInformationIconDraw___SetEnemyName_b__24_0(
        HorizontalQuestInformationIconDraw_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconDraw_o *v4; // x19
  UnityEngine_Component_o *textLb; // x8
  Il2CppObject *v6; // x19
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_4D2948A & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_1C94098(&StringLiteral_23103/*"quest_info"*/);
    byte_4D2948A = 1;
  }
  if ( !assetData
    || (this = (HorizontalQuestInformationIconDraw_o *)AssetData__GetObject_object__51893132(
                                                         assetData,
                                                         (System_String_o *)StringLiteral_23103/*"quest_info"*/,
                                                         (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816),
        (textLb = (UnityEngine_Component_o *)v4->fields.textLb) == 0) )
  {
    sub_1C942F0(this, assetData);
  }
  v6 = (Il2CppObject *)this;
  transform = UnityEngine_Component__get_transform(textLb, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Instantiate_object__52598436(
    v6,
    transform,
    (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
}


void HorizontalQuestInformationIconDraw___c__DisplayClass18_0___ctor(
        HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void HorizontalQuestInformationIconDraw___c__DisplayClass18_0___SetItem_b__0(
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
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0), (v4 = v3->fields.__4__this) == 0)
    || (this = (HorizontalQuestInformationIconDraw___c__DisplayClass18_0_o *)v4->fields.enemyTexture) == 0
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0), (item = v3->fields.item) == 0)
    || (v7 = v3->fields.__4__this) == 0 )
  {
LABEL_8:
    sub_1C942F0(this, method);
  }
  HorizontalQuestInformationIconDraw__SetDispTypeEnemyTex(
    (HorizontalQuestInformationIconDraw_o *)this,
    item->fields.dispType,
    v7->fields.enemyTexture,
    v5);
}


void HorizontalQuestInformationIconDraw___c__DisplayClass22_0___ctor(
        HorizontalQuestInformationIconDraw___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void HorizontalQuestInformationIconDraw___c__DisplayClass22_0___LoadEnemyTexture_b__0(
        HorizontalQuestInformationIconDraw___c__DisplayClass22_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct HorizontalQuestInformationIconDraw_o *v13; // x8
  struct HorizontalQuestInformationIconDraw_o *v14; // x8
  struct HorizontalQuestInformationIconDraw_o *v15; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__51893132; // x0

  if ( (byte_4D2948B & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_Texture2D____79044848);
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_16594/*"_alpha"*/);
    sub_1C94098(&StringLiteral_4943/*"Custom/SpriteWithMask"*/);
    sub_1C94098(&StringLiteral_16326/*"_MaskTex"*/);
    byte_4D2948B = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  *(_QWORD *)&_4__this->fields.alreadySetIsResourcesUnload = assetData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&_4__this->fields.alreadySetIsResourcesUnload,
    (int32_t)assetData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4943/*"Custom/SpriteWithMask"*/, 0);
  v12 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
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
  _4__this = (AssetData_o *)AssetData__GetObject_object__51893132(
                              _4__this,
                              v14->fields.enemyIconName,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848);
  if ( !v12
    || (UnityEngine_Material__set_mainTexture(v12, (UnityEngine_Texture_o *)_4__this, 0),
        (v15 = this->fields.__4__this) == 0)
    || (enemyIconAssetData = v15->fields.enemyIconAssetData,
        _4__this = (AssetData_o *)System_String__Concat_64417744(
                                    v15->fields.enemyIconName,
                                    (System_String_o *)StringLiteral_16594/*"_alpha"*/,
                                    0),
        !enemyIconAssetData)
    || (Object_object__51893132 = AssetData__GetObject_object__51893132(
                                    enemyIconAssetData,
                                    (System_String_o *)_4__this,
                                    (const MethodInfo_317D38C *)Method_AssetData_GetObject_Texture2D____79044848),
        UnityEngine_Material__SetTexture(
          v12,
          (System_String_o *)StringLiteral_16326/*"_MaskTex"*/,
          (UnityEngine_Texture_o *)Object_object__51893132,
          0),
        (_4__this = (AssetData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_1C942F0(_4__this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}