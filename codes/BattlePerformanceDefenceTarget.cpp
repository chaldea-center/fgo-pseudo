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
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  UILabel_o *name; // x22
  System_String_o *v14; // x23
  System_String_o *v15; // x0
  BattleDefenceTargetHpGaugeComponent_o *hpGauge; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FC30E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&nowHp);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_2402, v10);
    byte_40FC30E = 1;
  }
  if ( maxHp < 1 || uiId <= 0 )
  {
    this->fields.isInitialized = 0;
    BattlePerformanceDefenceTarget__SetDefenceTargetActive(this, *(const MethodInfo **)&nowHp);
  }
  else
  {
    BattlePerformanceDefenceTarget__SetIcon(this, uiId, *(const MethodInfo **)&maxHp);
    v17 = uiId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v12 = System_String__Format((System_String_o *)StringLiteral_2402, v11, 0LL);
    name = this->fields.name;
    v14 = v12;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get(v14, 0LL);
    if ( !name || (UILabel__set_text(name, v15, 0LL), (hpGauge = this->fields.hpGauge) == 0LL) )
      sub_B170D4();
    BattleDefenceTargetHpGaugeComponent__SetInitDefenceTargetValue(hpGauge, nowHp, maxHp, 0LL);
    this->fields.isInitialized = 1;
  }
}


void __fastcall BattlePerformanceDefenceTarget__SetDefenceTargetActive(
        BattlePerformanceDefenceTarget_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
    sub_B170D4();
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
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UISprite_o *icon; // x20
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC30F & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, *(_QWORD *)&uiId);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_2743, v8);
    sub_B16FFC(&StringLiteral_2758, v9);
    sub_B16FFC(&StringLiteral_19306, v10);
    byte_40FC30F = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2743, 0LL);
  if ( !AssetStorage
    || (Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                       AssetStorage,
                                                                       (System_String_o *)StringLiteral_2758,
                                                                       (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784)) == 0LL
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    Object_WarBoardWaitTimeSetting,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
        !this->fields.icon)
    || (UISprite__set_atlas(this->fields.icon, (UIAtlas_o *)Component_srcLineSprite, 0LL),
        icon = this->fields.icon,
        v17 = uiId,
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17),
        v16 = System_String__Format((System_String_o *)StringLiteral_19306, v15, 0LL),
        !icon) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(icon, v16, 0LL);
}


void __fastcall BattlePerformanceDefenceTarget__UpdateBuffIcon(
        BattlePerformanceDefenceTarget_o *this,
        BattleBuffData_ShowBuffData_array *buffArray,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent_o *showBuff; // x0

  showBuff = this->fields.showBuff;
  if ( !showBuff )
    sub_B170D4();
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
    sub_B170D4();
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
  UnityEngine_Animation_o **p_animation; // x21
  UnityEngine_Object_o *animation; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_AnimationState_o *v20; // x0
  bool *p_isContinue; // x23
  UnityEngine_AnimationState_o *v22; // x22
  UnityEngine_AnimationState_o *v23; // x0
  float length; // s0
  UnityEngine_GameObject_o *v25; // x0

  if ( (byte_40FC310 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, *(_QWORD *)&position);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&string_TypeInfo, v6);
    byte_40FC310 = 1;
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
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      *p_animation = (UnityEngine_Animation_o *)Component_srcLineSprite;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.animation,
        Component_srcLineSprite,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    if ( !*p_animation )
LABEL_32:
      sub_B170D4();
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(*p_animation, Empty, 0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
    {
      if ( !*p_animation )
        goto LABEL_32;
      v20 = UnityEngine_Animation__get_Item(*p_animation, Empty, 0LL);
      p_isContinue = &this->fields.isContinue;
      v22 = v20;
      if ( this->fields.isContinue )
      {
        if ( !*p_animation )
          goto LABEL_32;
        v23 = UnityEngine_Animation__get_Item(*p_animation, Empty, 0LL);
        if ( !v23 )
          goto LABEL_32;
        length = UnityEngine_AnimationState__get_length(v23, 0LL);
        if ( !v22 )
          goto LABEL_32;
      }
      else
      {
        length = 0.0;
        if ( !v20 )
          goto LABEL_32;
      }
      UnityEngine_AnimationState__set_time(v22, length, 0LL);
      if ( !*p_animation )
        goto LABEL_32;
      UnityEngine_Animation__Play_49744236(*p_animation, Empty, 0LL);
    }
    else
    {
      p_isContinue = &this->fields.isContinue;
    }
    if ( *p_isContinue )
    {
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v25 )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(v25, 1, 0LL);
      *p_isContinue = 0;
    }
  }
}