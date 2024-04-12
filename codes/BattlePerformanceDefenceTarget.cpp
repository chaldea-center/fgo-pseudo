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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  UILabel_o *name; // x22
  System_String_o *v14; // x23
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42B25CE & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2443/*"BATTLE_DEFENCE_TARGET_NAME_{0}"*/);
    byte_42B25CE = 1;
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
    v15 = uiId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v12 = System_String__Format((System_String_o *)StringLiteral_2443/*"BATTLE_DEFENCE_TARGET_NAME_{0}"*/, v11, 0LL);
    name = this->fields.name;
    v14 = v12;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v14, 0LL);
    if ( !name
      || (UILabel__set_text(name, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.name) == 0LL)
      || (UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.hpGauge) == 0LL) )
    {
LABEL_15:
      sub_B52A5C(gameObject, v10);
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
    sub_B52A5C(0LL, v4);
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
    sub_B52A5C(0LL, nowHp);
  BattleDefenceTargetHpGaugeComponent__SetHpGauge(hpGauge, nowHp, 0LL);
}


void __fastcall BattlePerformanceDefenceTarget__SetIcon(
        BattlePerformanceDefenceTarget_o *this,
        int32_t uiId,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v6; // x1
  UISprite_o *icon; // x21
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B25CF & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_2786/*"Battle/Common"*/);
    sub_B52984(&StringLiteral_2801/*"BattleAssetUIAtlas"*/);
    sub_B52984(&StringLiteral_19526/*"icon{0}"*/);
    byte_42B25CF = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2786/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_2801/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)AssetStorage,
                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !this->fields.icon
    || (UISprite__set_atlas(this->fields.icon, (UIAtlas_o *)AssetStorage, 0LL),
        icon = this->fields.icon,
        v9 = uiId,
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9),
        AssetStorage = (AssetData_o *)System_String__Format((System_String_o *)StringLiteral_19526/*"icon{0}"*/, v8, 0LL),
        !icon)
    || (UISprite__set_spriteName(icon, (System_String_o *)AssetStorage, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.icon) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(AssetStorage, v6);
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
    sub_B52A5C(0LL, buffArray);
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
    sub_B52A5C(0LL, nowHp);
  BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(hpGauge, nowHp, 0LL);
}


void __fastcall BattlePerformanceDefenceTarget__UpdateUIPotition(
        BattlePerformanceDefenceTarget_o *this,
        int32_t position,
        const MethodInfo *method)
{
  struct System_String_StaticFields *p_moveToCommandCardName; // x8
  System_String_o *Empty; // x20
  struct UnityEngine_Animation_o **p_animation; // x21
  UnityEngine_Object_o *animation; // x22
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_TrackedReference_o *Item; // x0
  bool *p_isContinue; // x23
  UnityEngine_AnimationState_o *v20; // x22
  float length; // s0

  if ( (byte_42B25D0 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&string_TypeInfo);
    byte_42B25D0 = 1;
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
                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      *p_animation = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.animation,
        Component_srcLineSprite,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    gameObject = (UnityEngine_GameObject_o *)*p_animation;
    if ( !*p_animation )
LABEL_32:
      sub_B52A5C(gameObject, v9);
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
      v20 = (UnityEngine_AnimationState_o *)gameObject;
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
        if ( !v20 )
          goto LABEL_32;
      }
      else
      {
        length = 0.0;
        if ( !gameObject )
          goto LABEL_32;
      }
      UnityEngine_AnimationState__set_time(v20, length, 0LL);
      gameObject = (UnityEngine_GameObject_o *)*p_animation;
      if ( !*p_animation )
        goto LABEL_32;
      UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)gameObject, Empty, 0LL);
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