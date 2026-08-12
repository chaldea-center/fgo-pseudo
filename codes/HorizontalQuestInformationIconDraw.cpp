void HorizontalQuestInformationIconDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x0
  struct HorizontalQuestInformationIconDraw_StaticFields *static_fields; // x8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  struct HorizontalQuestInformationIconDraw_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  HorizontalQuestInformationIconDraw_c *v34; // x8
  __int64 v35; // x1
  struct HorizontalQuestInformationIconDraw_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_596D309 & 1) == 0 )
  {
    sub_2213A60(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_19929/*"enemy_icon_"*/);
    sub_2213A60(&StringLiteral_24091/*"questinfo_enemy_brank"*/);
    sub_2213A60(&StringLiteral_15732/*"Unlit/Transparent Colored"*/);
    sub_2213A60(&StringLiteral_6309/*"Enemys/Icon/"*/);
    sub_2213A60(&StringLiteral_14020/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/);
    byte_596D309 = 1;
  }
  v7 = StringLiteral_24091/*"questinfo_enemy_brank"*/;
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP = (struct System_String_o *)StringLiteral_24091/*"questinfo_enemy_brank"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_14020/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, 0);
  static_fields = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  static_fields->ENEMY_UNKNOWN_NAME = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->ENEMY_UNKNOWN_NAME,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = StringLiteral_6309/*"Enemys/Icon/"*/;
  v19 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v19->ENEMY_ICON_TEXTURE_PATH = (struct System_String_o *)StringLiteral_6309/*"Enemys/Icon/"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->ENEMY_ICON_TEXTURE_PATH, v18, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_19929/*"enemy_icon_"*/;
  v27 = HorizontalQuestInformationIconDraw_TypeInfo->static_fields;
  v27->ENEMY_ICON_TEXTURE_PREFIX = (struct System_String_o *)StringLiteral_19929/*"enemy_icon_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->ENEMY_ICON_TEXTURE_PREFIX, v26, v28, v29, v30, v31, v32, v33);
  v34 = HorizontalQuestInformationIconDraw_TypeInfo;
  v35 = StringLiteral_15732/*"Unlit/Transparent Colored"*/;
  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR = (struct UnityEngine_Color_o)xmmword_E9D180;
  v36 = v34->static_fields;
  v36->DEFAULT_SHADER = (struct System_String_o *)v35;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->DEFAULT_SHADER, v35, v37, v38, v39, v40, v41, v42);
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

  if ( (byte_596D306 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__);
    sub_2213A60(&HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
    byte_596D306 = 1;
  }
  v7 = sub_2213CCC(HorizontalQuestInformationIconDraw___c__DisplayClass22_0_TypeInfo);
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
  HorizontalQuestInformationIconDraw__ReleaseEnemyTexture(this, v22);
  Instance = (CommonUI_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !*(&HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, v9, v23);
  if ( !item )
    goto LABEL_14;
  iconId = item->fields.iconId;
  ENEMY_ICON_TEXTURE_PREFIX = (Il2CppObject *)HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PREFIX;
  v39 = iconId;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v39);
  v27 = System_String__Concat(ENEMY_ICON_TEXTURE_PREFIX, v26, 0);
  this->fields.enemyIconName = v27;
  p_enemyIconName = &this->fields.enemyIconName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_enemyIconName, (int32_t)v27, v29, v30, v31, v32, v33, v34);
  v35 = System_String__Concat_75651716(
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_ICON_TEXTURE_PATH,
          *p_enemyIconName,
          0);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_HorizontalQuestInformationIconDraw___c__DisplayClass22_0__LoadEnemyTexture_b__0__,
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
  __int64 v4; // x1
  __int64 v5; // x2
  HorizontalQuestInformationIconDraw_c *v6; // x0
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

  if ( (byte_596D307 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&HorizontalQuestInformationIconDraw_TypeInfo);
    byte_596D307 = 1;
  }
  p_enemyIconName = &this->fields.enemyIconName;
  if ( !System_String__IsNullOrEmpty(this->fields.enemyIconName, 0) )
  {
    v6 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !*(&HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, v4, v5);
      v6 = HorizontalQuestInformationIconDraw_TypeInfo;
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
void HorizontalQuestInformationIconDraw__SetDispType(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UISpriteAltMat_o *sp,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  UnityEngine_Material_o *v11; // x20
  UnityEngine_Material_o *v12; // x21
  UnityEngine_Color_o SHADOW_COLOR; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D303 & 1) == 0 )
  {
    sub_2213A60(&HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_2213A60(&UnityEngine_Material_TypeInfo);
    byte_596D303 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      if ( !sp )
        goto LABEL_17;
      v14.fields.r = 1.0;
      v14.fields.g = 1.0;
      v14.fields.b = 1.0;
      v14.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)sp, v14, 0);
      if ( !iconListComponent )
        goto LABEL_17;
      v11 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
              iconListComponent,
              *(const MethodInfo **)&dispTp);
      v12 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor_83274924(v12, v11, 0);
      UISpriteAltMat__SetMaterialKeepTexture(sp, v12, 0);
      break;
    case 2:
      this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      if ( !*(&HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp, sp);
      if ( sp )
      {
        SHADOW_COLOR = HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR;
        goto LABEL_12;
      }
LABEL_17:
      sub_2213CDC(this, *(_QWORD *)&dispTp);
    case 1:
      if ( sp )
      {
        SHADOW_COLOR.fields.r = 1.0;
        SHADOW_COLOR.fields.g = 1.0;
        SHADOW_COLOR.fields.b = 1.0;
        SHADOW_COLOR.fields.a = 1.0;
LABEL_12:
        UIWidget__set_color((UIWidget_o *)sp, SHADOW_COLOR, 0);
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
  UnityEngine_Color_o SHADOW_COLOR; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D305 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconDraw_o *)sub_2213A60(&HorizontalQuestInformationIconDraw_TypeInfo);
    byte_596D305 = 1;
  }
  switch ( dispTp )
  {
    case 3:
      goto LABEL_6;
    case 2:
      this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
      if ( !*(&HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp, texture);
      if ( texture )
      {
        SHADOW_COLOR = HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR;
        goto LABEL_12;
      }
LABEL_14:
      sub_2213CDC(this, *(_QWORD *)&dispTp);
    case 1:
LABEL_6:
      if ( texture )
      {
        SHADOW_COLOR.fields.r = 1.0;
        SHADOW_COLOR.fields.g = 1.0;
        SHADOW_COLOR.fields.b = 1.0;
        SHADOW_COLOR.fields.a = 1.0;
LABEL_12:
        UIWidget__set_color((UIWidget_o *)texture, SHADOW_COLOR, 0);
        return;
      }
      goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void HorizontalQuestInformationIconDraw__SetDispType_43271588(
        HorizontalQuestInformationIconDraw_o *this,
        int32_t dispTp,
        UITexture_o *texture,
        HorizontalQuestInformationIconListComponent_o *iconListComponent,
        const MethodInfo *method)
{
  __int64 v8; // x2
  HorizontalQuestInformationIconDraw_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  HorizontalQuestInformationIconDraw_c *v12; // x0
  UnityEngine_Material_o *v13; // x20
  UnityEngine_Shader_o *v14; // x0
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D304 & 1) == 0 )
  {
    sub_2213A60(&HorizontalQuestInformationIconDraw_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_2213A60(&StringLiteral_16914/*"_MainTex"*/);
    byte_596D304 = 1;
  }
  if ( dispTp == 3 )
  {
    if ( texture )
    {
      v16.fields.r = 1.0;
      v16.fields.g = 1.0;
      v16.fields.b = 1.0;
      v16.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v16, 0);
      this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, _QWORD, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
                                                       texture,
                                                       0,
                                                       texture->klass->vtable._29_set_shader.method);
      if ( iconListComponent )
      {
        v13 = HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
                iconListComponent,
                *(const MethodInfo **)&dispTp);
        this = (HorizontalQuestInformationIconDraw_o *)((__int64 (__fastcall *)(UITexture_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                                         texture,
                                                         texture->klass->vtable._26_get_mainTexture.method);
        if ( v13 )
        {
          UnityEngine_Material__SetTexture(
            v13,
            (System_String_o *)StringLiteral_16914/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this,
            0);
          ((void (__fastcall *)(UITexture_o *, UnityEngine_Material_o *, const MethodInfo *))texture->klass->vtable._25_set_material.methodPtr)(
            texture,
            v13,
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
      v15.fields.r = 1.0;
      v15.fields.g = 1.0;
      v15.fields.b = 1.0;
      v15.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)texture, v15, 0);
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
        v9 = this;
        if ( !*(&HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp, v8);
        if ( v9 )
        {
          if ( !System_String__Equals_75686512(
                  (System_String_o *)v9,
                  HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
                  0) )
          {
            v12 = HorizontalQuestInformationIconDraw_TypeInfo;
            if ( !*(&HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished + 1) )
              goto LABEL_26;
            goto LABEL_27;
          }
          return;
        }
      }
    }
LABEL_28:
    sub_2213CDC(this, *(_QWORD *)&dispTp);
  }
  this = (HorizontalQuestInformationIconDraw_o *)HorizontalQuestInformationIconDraw_TypeInfo;
  if ( !*(&HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, *(_QWORD *)&dispTp, texture);
  if ( !texture )
    goto LABEL_28;
  UIWidget__set_color(
    (UIWidget_o *)texture,
    HorizontalQuestInformationIconDraw_TypeInfo->static_fields->SHADOW_COLOR,
    0);
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
  if ( !System_String__Equals_75686512(
          (System_String_o *)this,
          HorizontalQuestInformationIconDraw_TypeInfo->static_fields->DEFAULT_SHADER,
          0) )
  {
    v12 = HorizontalQuestInformationIconDraw_TypeInfo;
    if ( !*(&HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished + 1) )
    {
LABEL_26:
      j_il2cpp_runtime_class_init_0(v12, v10, v11);
      v12 = HorizontalQuestInformationIconDraw_TypeInfo;
    }
LABEL_27:
    v14 = UnityEngine_Shader__Find(v12->static_fields->DEFAULT_SHADER, 0);
    ((void (__fastcall *)(UITexture_o *, UnityEngine_Shader_o *, const MethodInfo *))texture->klass->vtable._29_set_shader.methodPtr)(
      texture,
      v14,
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
  __int64 v8; // x1
  __int64 v9; // x2

  v4 = this;
  if ( (byte_596D308 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_596D308 = 1;
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
      Method_HorizontalQuestInformationIconDraw__SetEnemyName_b__24_0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8, v9);
    AssetManager__loadAssetStorage(NameEffectPath, v7, 1, 0, 0);
  }
  this = (HorizontalQuestInformationIconDraw_o *)v4->fields.textLb;
  if ( !this )
LABEL_12:
    sub_2213CDC(this, item);
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
  int64_t SvtImg; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  QuestInformationListViewItem_o **v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  QuestInformationListViewItem_o *v25; // x0
  int32_t infoType; // w8
  bool isRewardUndrop; // w8
  bool v28; // w1
  __int64 v29; // x1
  __int64 v30; // x2
  TerminalSceneComponent_c *v31; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v33; // x2
  UISprite_o *enemySp; // x20
  __int64 v35; // x8
  UISprite_o *v36; // x20
  HorizontalQuestInformationIconDraw_o *v37; // x0
  const MethodInfo *v38; // x4
  ItemIconComponent_o *itemIcon; // x21
  ItemMaster_o *v40; // x21
  bool v41; // w1
  bool isEnemyServant; // w8
  struct UITexture_o **p_SvtImg; // x23
  __int64 v44; // x2
  QuestInformationListViewItem_o *v45; // x8
  UITexture_o *v46; // x24
  int32_t targetCnt; // w22
  int32_t targetId; // w25
  UITexture_o *Manager__loadCommandCard; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  const MethodInfo *v56; // x4
  const MethodInfo *v57; // x2
  __int64 v58; // x2
  UISprite_o *v59; // x23
  int32_t iconId; // w24
  const MethodInfo *v61; // x4
  QuestInformationListViewItem_o *v62; // x21
  System_Action_o *v63; // x23
  const MethodInfo *v64; // x3
  __int64 v65; // x2
  int32_t *v66; // x8
  __int64 v67; // x1
  __int64 v68; // x2
  Il2CppObject *MasterData_object; // x21
  long double v70; // q0
  int32_t v71; // w20
  UILabel_o *holdNumTitleLb; // x21
  UILabel_o *holdNumCntLb; // x21

  if ( (byte_596D302 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&HorizontalQuestInformationIconDraw_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__);
    sub_2213A60(&HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
    sub_2213A60(&StringLiteral_12590/*"SHOP_BUY_ITEM_HOLD"*/);
    byte_596D302 = 1;
  }
  v9 = sub_2213CCC(HorizontalQuestInformationIconDraw___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_118;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = item;
  v18 = (QuestInformationListViewItem_o **)(v9 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)item, v19, v20, v21, v22, v23, v24);
  if ( mode )
  {
    v25 = *v18;
    if ( *v18 )
    {
      infoType = v25->fields.infoType;
      if ( infoType == 1 )
      {
        if ( QuestInformationListViewItem__isEnemyUnknown(v25, 0) )
        {
          SvtImg = (int64_t)this->fields.SvtImg;
          if ( !SvtImg )
            goto LABEL_118;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_118;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
          SvtImg = (int64_t)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_118;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_118;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v29, v30);
          if ( !byte_596A090 )
          {
            sub_2213A60(&TerminalSceneComponent_TypeInfo);
            byte_596A090 = 1;
          }
          v31 = TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v29, v30);
            v31 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = (UnityEngine_Object_o *)v31->static_fields->mInstance;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
          if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
          {
            enemySp = (UISprite_o *)this->fields.enemySp;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11, v33);
            if ( !byte_596A090 )
            {
              sub_2213A60(&TerminalSceneComponent_TypeInfo);
              byte_596A090 = 1;
            }
            SvtImg = (int64_t)TerminalSceneComponent_TypeInfo;
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11, v33);
              SvtImg = (int64_t)TerminalSceneComponent_TypeInfo;
            }
            v35 = **(_QWORD **)(SvtImg + 184);
            if ( !v35 || !enemySp )
              goto LABEL_118;
            UISprite__set_atlas(enemySp, *(UIAtlas_o **)(v35 + 304), 0);
          }
          v36 = (UISprite_o *)this->fields.enemySp;
          SvtImg = (int64_t)HorizontalQuestInformationIconDraw_TypeInfo;
          if ( !*(&HorizontalQuestInformationIconDraw_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconDraw_TypeInfo, v11, v33);
          if ( v36 )
          {
            UISprite__set_spriteName(
              v36,
              HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_SP,
              0);
            HorizontalQuestInformationIconDraw__SetDispType(v37, 1, this->fields.enemySp, iconListComponent, v38);
            SvtImg = (int64_t)this->fields.textLb;
            if ( SvtImg )
            {
              UILabel__set_text(
                (UILabel_o *)SvtImg,
                HorizontalQuestInformationIconDraw_TypeInfo->static_fields->ENEMY_UNKNOWN_NAME,
                0);
              return;
            }
          }
LABEL_118:
          sub_2213CDC(SvtImg, v11);
        }
        SvtImg = (int64_t)*v18;
        if ( !*v18 )
          goto LABEL_118;
        isEnemyServant = QuestInformationListViewItem__isEnemyServant((QuestInformationListViewItem_o *)SvtImg, 0);
        p_SvtImg = &this->fields.SvtImg;
        SvtImg = (int64_t)this->fields.SvtImg;
        if ( isEnemyServant )
        {
          if ( !SvtImg )
            goto LABEL_118;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_118;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
          v45 = *v18;
          if ( !*v18 )
            goto LABEL_118;
          v46 = *p_SvtImg;
          targetId = v45->fields.targetId;
          targetCnt = v45->fields.targetCnt;
          if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v11, v44);
          Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(v46, targetId, targetCnt, targetCnt, 0);
          *p_SvtImg = Manager__loadCommandCard;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.SvtImg,
            (int32_t)Manager__loadCommandCard,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
          if ( !*v18 )
            goto LABEL_118;
          HorizontalQuestInformationIconDraw__SetDispType_43271588(
            (HorizontalQuestInformationIconDraw_o *)SvtImg,
            (*v18)->fields.dispType,
            this->fields.SvtImg,
            iconListComponent,
            v56);
          SvtImg = (int64_t)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_118;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_118;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
        }
        else
        {
          if ( !SvtImg )
            goto LABEL_118;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_118;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
          SvtImg = (int64_t)this->fields.enemySp;
          if ( !SvtImg )
            goto LABEL_118;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_118;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
          if ( !*v18 )
            goto LABEL_118;
          v59 = (UISprite_o *)this->fields.enemySp;
          iconId = (*v18)->fields.iconId;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v58);
          if ( AtlasManager__SetEnemy(v59, iconId, 0) )
          {
            SvtImg = (int64_t)this->fields.enemySp;
            if ( !SvtImg )
              goto LABEL_118;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 1, 0);
            SvtImg = (int64_t)this->fields.enemyTexture;
            if ( !SvtImg )
              goto LABEL_118;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)SvtImg, 0, 0);
            if ( !*v18 )
              goto LABEL_118;
            HorizontalQuestInformationIconDraw__SetDispType(
              (HorizontalQuestInformationIconDraw_o *)SvtImg,
              (*v18)->fields.dispType,
              this->fields.enemySp,
              iconListComponent,
              v61);
          }
          else
          {
            v62 = *(QuestInformationListViewItem_o **)(v9 + 24);
            v63 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(
              v63,
              (Il2CppObject *)v9,
              Method_HorizontalQuestInformationIconDraw___c__DisplayClass18_0__SetItem_b__0__,
              0);
            HorizontalQuestInformationIconDraw__LoadEnemyTexture(this, v62, v63, v64);
          }
        }
        HorizontalQuestInformationIconDraw__SetEnemyName(this, *v18, v57);
      }
      else if ( !infoType )
      {
        isRewardUndrop = QuestInformationListViewItem__isRewardUndrop(v25, 0);
        SvtImg = (int64_t)this->fields.blankImg;
        if ( isRewardUndrop )
        {
          if ( !SvtImg )
            goto LABEL_118;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
          SvtImg = (int64_t)this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_118;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_118;
          v28 = 0;
        }
        else
        {
          if ( !SvtImg )
            goto LABEL_118;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
          SvtImg = (int64_t)*v18;
          if ( !*v18 )
            goto LABEL_118;
          itemIcon = this->fields.itemIcon;
          SvtImg = QuestInformationListViewItem__GetGiftType((QuestInformationListViewItem_o *)SvtImg, 0);
          if ( !*v18 )
            goto LABEL_118;
          if ( !itemIcon )
            goto LABEL_118;
          ItemIconComponent__SetGift_47884936(itemIcon, SvtImg, (*v18)->fields.targetId, -1, 0, 0);
          SvtImg = (int64_t)this->fields.itemIcon;
          if ( !SvtImg )
            goto LABEL_118;
          SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
          if ( !SvtImg )
            goto LABEL_118;
          v28 = 1;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v28, 0);
        SvtImg = (int64_t)*v18;
        if ( !*v18 )
          goto LABEL_118;
        if ( !QuestInformationListViewItem__isRewardItem((QuestInformationListViewItem_o *)SvtImg, 0) )
          goto LABEL_59;
        SvtImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !SvtImg )
          goto LABEL_118;
        SvtImg = (int64_t)DataManager__GetMasterData_object_(
                            (DataManager_o *)SvtImg,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !*v18 )
          goto LABEL_118;
        v40 = (ItemMaster_o *)SvtImg;
        if ( !SvtImg )
          goto LABEL_118;
        SvtImg = ItemMaster__isQP((ItemMaster_o *)SvtImg, (*v18)->fields.targetId, 0);
        if ( (SvtImg & 1) != 0 )
          goto LABEL_59;
        if ( !*v18 )
          goto LABEL_118;
        SvtImg = ItemMaster__isFriendPoint(v40, (*v18)->fields.targetId, 0);
        if ( (SvtImg & 1) != 0 )
          goto LABEL_59;
        if ( !*v18 )
          goto LABEL_118;
        SvtImg = ItemMaster__isEventPoint(v40, (*v18)->fields.targetId, 0);
        if ( (SvtImg & 1) != 0 )
        {
LABEL_59:
          SvtImg = (int64_t)this->fields.holdNumTitleLb;
          if ( SvtImg )
          {
            SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
            if ( SvtImg )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 0, 0);
              SvtImg = (int64_t)this->fields.holdNumCntLb;
              if ( SvtImg )
              {
                SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
                if ( SvtImg )
                {
                  v41 = 0;
LABEL_64:
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, v41, 0);
                  return;
                }
              }
            }
          }
        }
        else
        {
          if ( !*v18 )
            goto LABEL_118;
          SvtImg = ItemMaster__isMana(v40, (*v18)->fields.targetId, 0);
          if ( (SvtImg & 1) != 0 )
          {
            SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0);
            if ( !SvtImg )
              goto LABEL_118;
            v66 = (int32_t *)(SvtImg + 192);
          }
          else
          {
            if ( !*v18 )
              goto LABEL_118;
            SvtImg = ItemMaster__isRarePri(v40, (*v18)->fields.targetId, 0);
            if ( (SvtImg & 1) != 0 )
            {
              SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0);
              if ( !SvtImg )
                goto LABEL_118;
              v66 = (int32_t *)(SvtImg + 196);
            }
            else
            {
              if ( !*v18 )
                goto LABEL_118;
              if ( ItemMaster__isStone(v40, (*v18)->fields.targetId, 0) )
              {
                SvtImg = (int64_t)UserGameMaster__getSelfUserGame(0);
                if ( !SvtImg )
                  goto LABEL_118;
                v66 = (int32_t *)(SvtImg + 184);
              }
              else
              {
                SvtImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !SvtImg )
                  goto LABEL_118;
                MasterData_object = DataManager__GetMasterData_object_(
                                      (DataManager_o *)SvtImg,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
                if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                  *(__n128 *)&v70 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v67, v68);
                SvtImg = sub_2417958(0, v70);
                if ( !*v18 )
                  goto LABEL_118;
                if ( !MasterData_object )
                  goto LABEL_118;
                SvtImg = (int64_t)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    SvtImg,
                                    (*v18)->fields.targetId,
                                    0);
                if ( !SvtImg )
                  goto LABEL_118;
                v66 = (int32_t *)(SvtImg + 28);
              }
            }
          }
          v71 = *v66;
          holdNumTitleLb = this->fields.holdNumTitleLb;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v65);
          SvtImg = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12590/*"SHOP_BUY_ITEM_HOLD"*/, 0);
          if ( holdNumTitleLb )
          {
            UILabel__set_text(holdNumTitleLb, (System_String_o *)SvtImg, 0);
            holdNumCntLb = this->fields.holdNumCntLb;
            SvtImg = (int64_t)LocalizationManager__GetNumberFormat(v71, 0);
            if ( holdNumCntLb )
            {
              UILabel__set_text(holdNumCntLb, (System_String_o *)SvtImg, 0);
              SvtImg = (int64_t)this->fields.holdNumTitleLb;
              if ( SvtImg )
              {
                SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
                if ( SvtImg )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SvtImg, 1, 0);
                  SvtImg = (int64_t)this->fields.holdNumCntLb;
                  if ( SvtImg )
                  {
                    SvtImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SvtImg, 0);
                    if ( SvtImg )
                    {
                      v41 = 1;
                      goto LABEL_64;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_118;
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
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Transform_o *transform; // x20

  v4 = this;
  if ( (byte_596D30A & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (HorizontalQuestInformationIconDraw_o *)sub_2213A60(&StringLiteral_24068/*"quest_info"*/);
    byte_596D30A = 1;
  }
  if ( !assetData
    || (this = (HorizontalQuestInformationIconDraw_o *)AssetData__GetObject_object__58532980(
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
    sub_2213CDC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *_4__this; // x0
  UnityEngine_Shader_o *v11; // x21
  UnityEngine_Material_o *v12; // x20
  struct HorizontalQuestInformationIconDraw_o *v13; // x8
  struct HorizontalQuestInformationIconDraw_o *v14; // x8
  struct HorizontalQuestInformationIconDraw_o *v15; // x8
  AssetData_o *enemyIconAssetData; // x21
  Il2CppObject *Object_object__58532980; // x0

  if ( (byte_596D30B & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_17207/*"_alpha"*/);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596D30B = 1;
  }
  _4__this = (AssetData_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  *(_QWORD *)&_4__this->fields.alreadySetIsResourcesUnload = assetData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&_4__this->fields.alreadySetIsResourcesUnload,
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