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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  UILabel_o *name; // x22
  System_String_o *v20; // x23
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E9EF7 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, nowHp, maxHp, *(_QWORD *)&uiId);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2451/*"BATTLE_DEFENCE_TARGET_NAME_{0}"*/, v12, v13, v14);
    byte_42E9EF7 = 1;
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
    v21 = uiId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v18 = System_String__Format((System_String_o *)StringLiteral_2451/*"BATTLE_DEFENCE_TARGET_NAME_{0}"*/, v17, 0LL);
    name = this->fields.name;
    v20 = v18;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v20, 0LL);
    if ( !name
      || (UILabel__set_text(name, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.name) == 0LL)
      || (UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.hpGauge) == 0LL) )
    {
LABEL_15:
      sub_B5D69C(gameObject, v16);
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
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(0LL, nowHp);
  BattleDefenceTargetHpGaugeComponent__SetHpGauge(hpGauge, nowHp, 0LL);
}


void __fastcall BattlePerformanceDefenceTarget__SetIcon(
        BattlePerformanceDefenceTarget_o *this,
        int32_t uiId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  AssetData_o *AssetStorage; // x0
  __int64 v25; // x1
  UISprite_o *icon; // x21
  Il2CppObject *v27; // x0
  int32_t v28; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E9EF8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, uiId, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2808/*"Battle/Common"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2825/*"BattleAssetUIAtlas"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_19624/*"icon{0}"*/, v21, v22, v23);
    byte_42E9EF8 = 1;
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2808/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_2825/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( !AssetStorage )
    goto LABEL_12;
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)AssetStorage,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !this->fields.icon
    || (UISprite__set_atlas(this->fields.icon, (UIAtlas_o *)AssetStorage, 0LL),
        icon = this->fields.icon,
        v28 = uiId,
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28),
        AssetStorage = (AssetData_o *)System_String__Format((System_String_o *)StringLiteral_19624/*"icon{0}"*/, v27, 0LL),
        !icon)
    || (UISprite__set_spriteName(icon, (System_String_o *)AssetStorage, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.icon) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(AssetStorage, v25);
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
    sub_B5D69C(0LL, buffArray);
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
    sub_B5D69C(0LL, nowHp);
  BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(hpGauge, nowHp, 0LL);
}


void __fastcall BattlePerformanceDefenceTarget__UpdateUIPotition(
        BattlePerformanceDefenceTarget_o *this,
        int32_t position,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_String_StaticFields *p_moveToCommandCardName; // x8
  System_String_o *Empty; // x20
  struct UnityEngine_Animation_o **p_animation; // x21
  UnityEngine_Object_o *animation; // x22
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_TrackedReference_o *Item; // x0
  bool *p_isContinue; // x23
  UnityEngine_AnimationState_o *v27; // x22
  float length; // s0

  if ( (byte_42E9EF9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, position, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&string_TypeInfo, v9, v10, v11);
    byte_42E9EF9 = 1;
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
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      *p_animation = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.animation,
        Component_srcLineSprite,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    gameObject = (UnityEngine_GameObject_o *)*p_animation;
    if ( !*p_animation )
LABEL_32:
      sub_B5D69C(gameObject, v16);
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
      v27 = (UnityEngine_AnimationState_o *)gameObject;
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
        if ( !v27 )
          goto LABEL_32;
      }
      else
      {
        length = 0.0;
        if ( !gameObject )
          goto LABEL_32;
      }
      UnityEngine_AnimationState__set_time(v27, length, 0LL);
      gameObject = (UnityEngine_GameObject_o *)*p_animation;
      if ( !*p_animation )
        goto LABEL_32;
      UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)gameObject, Empty, 0LL);
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