void BattlePerformanceDefenceTarget___ctor(BattlePerformanceDefenceTarget_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattlePerformanceDefenceTarget__SetData(
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
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CF1C26 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2733/*"BATTLE_DEFENCE_TARGET_NAME_{0}"*/);
    byte_4CF1C26 = 1;
  }
  if ( maxHp < 1 || uiId <= 0 )
  {
    this->fields.isInitialized = 0;
    BattlePerformanceDefenceTarget__SetDefenceTargetActive(this, *(const MethodInfo **)&nowHp);
  }
  else
  {
    BattlePerformanceDefenceTarget__SetIcon(this, uiId, *(const MethodInfo **)&maxHp);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v15 = uiId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v12 = System_String__Format((System_String_o *)StringLiteral_2733/*"BATTLE_DEFENCE_TARGET_NAME_{0}"*/, v11, 0);
    name = this->fields.name;
    v14 = v12;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v14, 0);
    if ( !name
      || (UILabel__set_text(name, (System_String_o *)gameObject, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.name) == 0)
      || (UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.hpGauge) == 0) )
    {
LABEL_14:
      sub_1C7BD40(gameObject, v10);
    }
    BattleDefenceTargetHpGaugeComponent__SetInitDefenceTargetValue(
      (BattleDefenceTargetHpGaugeComponent_o *)gameObject,
      nowHp,
      maxHp,
      0);
    this->fields.isInitialized = 1;
  }
}


void BattlePerformanceDefenceTarget__SetDefenceTargetActive(
        BattlePerformanceDefenceTarget_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, this->fields.isInitialized, 0);
}


void BattlePerformanceDefenceTarget__SetHpGauge(
        BattlePerformanceDefenceTarget_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  BattleDefenceTargetHpGaugeComponent_o *hpGauge; // x0

  hpGauge = this->fields.hpGauge;
  if ( !hpGauge )
    sub_1C7BD40(0, nowHp);
  BattleDefenceTargetHpGaugeComponent__SetHpGauge(hpGauge, nowHp, 0);
}


void BattlePerformanceDefenceTarget__SetIcon(
        BattlePerformanceDefenceTarget_o *this,
        int32_t uiId,
        const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  __int64 v6; // x1
  UISprite_o *icon; // x21
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CF1C27 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3088/*"Battle/Common"*/);
    sub_1C7BAE8(&StringLiteral_3109/*"BattleAssetUIAtlas"*/);
    sub_1C7BAE8(&StringLiteral_20419/*"icon{0}"*/);
    byte_4CF1C27 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3088/*"Battle/Common"*/, 0);
  if ( !AssetStorage )
    goto LABEL_11;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__51713432(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3109/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
  if ( !AssetStorage )
    goto LABEL_11;
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)AssetStorage,
                                  (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !this->fields.icon
    || (UISprite__set_atlas(this->fields.icon, (UIAtlas_o *)AssetStorage, 0),
        icon = this->fields.icon,
        v9 = uiId,
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9),
        AssetStorage = (AssetData_o *)System_String__Format((System_String_o *)StringLiteral_20419/*"icon{0}"*/, v8, 0),
        !icon)
    || (UISprite__set_spriteName(icon, (System_String_o *)AssetStorage, 0),
        (AssetStorage = (AssetData_o *)this->fields.icon) == 0) )
  {
LABEL_11:
    sub_1C7BD40(AssetStorage, v6);
  }
  ((void (__fastcall *)(AssetData_o *, void *))AssetStorage->klass[2]._1.parent)(
    AssetStorage,
    AssetStorage->klass[2]._1.generic_class);
}


void BattlePerformanceDefenceTarget__UpdateBuffIcon(
        BattlePerformanceDefenceTarget_o *this,
        BattleBuffData_ShowBuffData_array *buffArray,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent_o *showBuff; // x0

  showBuff = this->fields.showBuff;
  if ( !showBuff )
    sub_1C7BD40(0, buffArray);
  BattleServantShowBuffComponent__setBuffList(showBuff, buffArray, 0);
}


void BattlePerformanceDefenceTarget__UpdateHpGauge(
        BattlePerformanceDefenceTarget_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  BattleDefenceTargetHpGaugeComponent_o *hpGauge; // x0

  hpGauge = this->fields.hpGauge;
  if ( !hpGauge )
    sub_1C7BD40(0, nowHp);
  BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(hpGauge, nowHp, 0);
}


void BattlePerformanceDefenceTarget__UpdateUIPotition(
        BattlePerformanceDefenceTarget_o *this,
        int32_t position,
        const MethodInfo *method)
{
  struct System_String_StaticFields *p_moveToCommandCardName; // x9
  System_String_o *Empty; // x20
  struct UnityEngine_Animation_o **p_animation; // x21
  UnityEngine_Object_o *animation; // x22
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_AnimationState_o *v19; // x22
  float length; // s0

  if ( (byte_4CF1C28 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    byte_4CF1C28 = 1;
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(animation, 0, 0) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_30;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      *p_animation = (struct UnityEngine_Animation_o *)Component_object;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.animation,
        (int32_t)Component_object,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    gameObject = (UnityEngine_GameObject_o *)*p_animation;
    if ( !*p_animation )
LABEL_30:
      sub_1C7BD40(gameObject, v9);
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)gameObject,
                                               Empty,
                                               0);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
    {
      gameObject = (UnityEngine_GameObject_o *)*p_animation;
      if ( !*p_animation )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)gameObject,
                                                 Empty,
                                                 0);
      v19 = (UnityEngine_AnimationState_o *)gameObject;
      if ( this->fields.isContinue )
      {
        gameObject = (UnityEngine_GameObject_o *)*p_animation;
        if ( !*p_animation )
          goto LABEL_30;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)gameObject,
                                                   Empty,
                                                   0);
        if ( !gameObject )
          goto LABEL_30;
        length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0);
        if ( !v19 )
          goto LABEL_30;
      }
      else
      {
        length = 0.0;
        if ( !gameObject )
          goto LABEL_30;
      }
      UnityEngine_AnimationState__set_time(v19, length, 0);
      gameObject = (UnityEngine_GameObject_o *)*p_animation;
      if ( !*p_animation )
        goto LABEL_30;
      UnityEngine_Animation__Play_71613624((UnityEngine_Animation_o *)gameObject, Empty, 0);
    }
    if ( this->fields.isContinue )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      this->fields.isContinue = 0;
    }
  }
}