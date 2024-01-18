void __fastcall BattlePerformanceDefenceTarget___ctor(BattlePerformanceDefenceTarget_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceDefenceTarget__SetData(
        BattlePerformanceDefenceTarget_o *this,
        int32_t nowHp,
        int32_t maxHp,
        int32_t uiId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  UILabel_o *name; // x22
  System_String_o *v16; // x23
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4189E50 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&nowHp);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_2412/*"BATTLE_DEFENCE_TARGET_NAME_{0}"*/, v10);
    byte_4189E50 = 1;
  }
  if ( maxHp < 1 || uiId <= 0 )
  {
    this->fields.isInitialized = 0;
    BattlePerformanceDefenceTarget__SetDefenceTargetActive(this, *(const MethodInfo **)&nowHp);
  }
  else
  {
    BattlePerformanceDefenceTarget__SetIcon(this, uiId, *(const MethodInfo **)&maxHp);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v17 = uiId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v14 = System_String__Format((System_String_o *)StringLiteral_2412/*"BATTLE_DEFENCE_TARGET_NAME_{0}"*/, v13, 0LL);
    name = this->fields.name;
    v16 = v14;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v16, 0LL);
    if ( !name
      || (UILabel__set_text(name, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.name) == 0LL)
      || (UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.hpGauge) == 0LL) )
    {
LABEL_15:
      sub_B2C434(gameObject, v12);
    }
    BattleDefenceTargetHpGaugeComponent__SetInitDefenceTargetValue(
      (BattleDefenceTargetHpGaugeComponent_o *)gameObject,
      nowHp,
      maxHp,
      0LL);
    this->fields.isInitialized = 1;
  }
}


void __fastcall BattlePerformanceDefenceTarget__SetDefenceTargetActive(
        BattlePerformanceDefenceTarget_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, this->fields.isInitialized, 0LL);
}


void __fastcall BattlePerformanceDefenceTarget__SetHpGauge(
        BattlePerformanceDefenceTarget_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  BattleDefenceTargetHpGaugeComponent_o *hpGauge; // x0

  hpGauge = this->fields.hpGauge;
  if ( !hpGauge )
    sub_B2C434(0LL, nowHp);
  BattleDefenceTargetHpGaugeComponent__SetHpGauge(hpGauge, nowHp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceDefenceTarget__SetIcon(
        BattlePerformanceDefenceTarget_o *this,
        int32_t uiId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  AssetData_o *AssetStorage; // x0
  __int64 v12; // x1
  UISprite_o *icon; // x21
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4189E51 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, *(_QWORD *)&uiId);
    sub_B2C35C(&AssetManager_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_2755/*"Battle/Common"*/, v8);
    sub_B2C35C(&StringLiteral_2770/*"BattleAssetUIAtlas"*/, v9);
    sub_B2C35C(&StringLiteral_19380/*"icon{0}"*/, v10);
    byte_4189E51 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2755/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_2770/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)AssetStorage,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !this->fields.icon
    || (UISprite__set_atlas(this->fields.icon, (UIAtlas_o *)AssetStorage, 0LL),
        icon = this->fields.icon,
        v15 = uiId,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15),
        AssetStorage = (AssetData_o *)System_String__Format((System_String_o *)StringLiteral_19380/*"icon{0}"*/, v14, 0LL),
        !icon)
    || (UISprite__set_spriteName(icon, (System_String_o *)AssetStorage, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.icon) == 0LL) )
  {
LABEL_12:
    sub_B2C434(AssetStorage, v12);
  }
  ((void (__fastcall *)(AssetData_o *, void *))AssetStorage->klass[2]._1.typeMetadataHandle)(
    AssetStorage,
    AssetStorage->klass[2]._1.interopData);
}


void __fastcall BattlePerformanceDefenceTarget__UpdateBuffIcon(
        BattlePerformanceDefenceTarget_o *this,
        BattleBuffData_ShowBuffData_array *buffArray,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent_o *showBuff; // x0

  showBuff = this->fields.showBuff;
  if ( !showBuff )
    sub_B2C434(0LL, buffArray);
  BattleServantShowBuffComponent__setBuffList(showBuff, buffArray, 0LL);
}


void __fastcall BattlePerformanceDefenceTarget__UpdateHpGauge(
        BattlePerformanceDefenceTarget_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  BattleDefenceTargetHpGaugeComponent_o *hpGauge; // x0

  hpGauge = this->fields.hpGauge;
  if ( !hpGauge )
    sub_B2C434(0LL, nowHp);
  BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(hpGauge, nowHp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceDefenceTarget__UpdateUIPotition(
        BattlePerformanceDefenceTarget_o *this,
        int32_t position,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_String_StaticFields *p_moveToCommandCardName; // x8
  System_String_o *Empty; // x20
  struct UnityEngine_Animation_o **p_animation; // x21
  UnityEngine_Object_o *animation; // x22
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_TrackedReference_o *Item; // x0
  bool *p_isContinue; // x23
  UnityEngine_AnimationState_o *v22; // x22
  float length; // s0

  if ( (byte_4189E52 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, *(_QWORD *)&position);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&string_TypeInfo, v6);
    byte_4189E52 = 1;
  }
  if ( this->fields.isInitialized )
  {
    if ( position == 2 || position == 1 )
    {
      p_moveToCommandCardName = (struct System_String_StaticFields *)&this->fields.moveToCommandCardName;
    }
    else if ( position )
    {
      p_moveToCommandCardName = string_TypeInfo->static_fields;
    }
    else
    {
      p_moveToCommandCardName = (struct System_String_StaticFields *)&this->fields.moveToTacticalPhaseName;
    }
    Empty = p_moveToCommandCardName->Empty;
    p_animation = &this->fields.animation;
    animation = (UnityEngine_Object_o *)this->fields.animation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(animation, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         gameObject,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      *p_animation = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.animation,
        Component_srcLineSprite,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    gameObject = (UnityEngine_GameObject_o *)*p_animation;
    if ( !*p_animation )
LABEL_32:
      sub_B2C434(gameObject, v11);
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)gameObject,
                                               Empty,
                                               0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)*p_animation;
      if ( !*p_animation )
        goto LABEL_32;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)gameObject,
                                                 Empty,
                                                 0LL);
      p_isContinue = &this->fields.isContinue;
      v22 = (UnityEngine_AnimationState_o *)gameObject;
      if ( this->fields.isContinue )
      {
        gameObject = (UnityEngine_GameObject_o *)*p_animation;
        if ( !*p_animation )
          goto LABEL_32;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)gameObject,
                                                   Empty,
                                                   0LL);
        if ( !gameObject )
          goto LABEL_32;
        length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0LL);
        if ( !v22 )
          goto LABEL_32;
      }
      else
      {
        length = 0.0;
        if ( !gameObject )
          goto LABEL_32;
      }
      UnityEngine_AnimationState__set_time(v22, length, 0LL);
      gameObject = (UnityEngine_GameObject_o *)*p_animation;
      if ( !*p_animation )
        goto LABEL_32;
      UnityEngine_Animation__Play_50201580((UnityEngine_Animation_o *)gameObject, Empty, 0LL);
    }
    else
    {
      p_isContinue = &this->fields.isContinue;
    }
    if ( *p_isContinue )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      *p_isContinue = 0;
    }
  }
}