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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  UILabel_o *name; // x22
  System_String_o *v19; // x23
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1916A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&nowHp, *(_QWORD *)&maxHp);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_2874/*"BATTLE_DEFENCE_TARGET_NAME_{0}"*/, v11, v12);
    byte_4B1916A = 1;
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
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v20 = uiId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v16 = System_String__Format((System_String_o *)StringLiteral_2874/*"BATTLE_DEFENCE_TARGET_NAME_{0}"*/, v15, 0LL);
    name = this->fields.name;
    v19 = v16;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v19, 0LL);
    if ( !name
      || (UILabel__set_text(name, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.name) == 0LL)
      || (UILabel__UpdateCondensedScaleComponent((UILabel_o *)gameObject, 0LL),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.hpGauge) == 0LL) )
    {
LABEL_14:
      sub_1BCAA3C(gameObject, v14);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, this->fields.isInitialized, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceDefenceTarget__SetHpGauge(
        BattlePerformanceDefenceTarget_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  BattleDefenceTargetHpGaugeComponent_o *hpGauge; // x0

  hpGauge = this->fields.hpGauge;
  if ( !hpGauge )
    sub_1BCAA3C(0LL, *(_QWORD *)&nowHp);
  BattleDefenceTargetHpGaugeComponent__SetHpGauge(hpGauge, nowHp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceDefenceTarget__SetIcon(
        BattlePerformanceDefenceTarget_o *this,
        int32_t uiId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  AssetData_o *AssetStorage; // x0
  __int64 v18; // x1
  UISprite_o *icon; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1916B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, *(_QWORD *)&uiId, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_20413/*"icon{0}"*/, v15, v16);
    byte_4B1916B = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, *(_QWORD *)&uiId);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3233/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_11;
  AssetStorage = (AssetData_o *)AssetData__GetObject_object__49237568(
                                  AssetStorage,
                                  (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !AssetStorage )
    goto LABEL_11;
  AssetStorage = (AssetData_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)AssetStorage,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !this->fields.icon
    || (UISprite__set_atlas(this->fields.icon, (UIAtlas_o *)AssetStorage, 0LL),
        icon = this->fields.icon,
        v21 = uiId,
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21),
        AssetStorage = (AssetData_o *)System_String__Format((System_String_o *)StringLiteral_20413/*"icon{0}"*/, v20, 0LL),
        !icon)
    || (UISprite__set_spriteName(icon, (System_String_o *)AssetStorage, 0LL),
        (AssetStorage = (AssetData_o *)this->fields.icon) == 0LL) )
  {
LABEL_11:
    sub_1BCAA3C(AssetStorage, v18);
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
    sub_1BCAA3C(0LL, buffArray);
  BattleServantShowBuffComponent__setBuffList(showBuff, buffArray, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceDefenceTarget__UpdateHpGauge(
        BattlePerformanceDefenceTarget_o *this,
        int32_t nowHp,
        const MethodInfo *method)
{
  BattleDefenceTargetHpGaugeComponent_o *hpGauge; // x0

  hpGauge = this->fields.hpGauge;
  if ( !hpGauge )
    sub_1BCAA3C(0LL, *(_QWORD *)&nowHp);
  BattleDefenceTargetHpGaugeComponent__UpdateDefenceTargetValue(hpGauge, nowHp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceDefenceTarget__UpdateUIPotition(
        BattlePerformanceDefenceTarget_o *this,
        int32_t position,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_String_StaticFields *p_moveToCommandCardName; // x9
  System_String_o *Empty; // x20
  struct UnityEngine_Animation_o **p_animation; // x21
  UnityEngine_Object_o *animation; // x22
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_AnimationState_o *v23; // x22
  float length; // s0

  if ( (byte_4B1916C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, *(_QWORD *)&position, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&string_TypeInfo, v7, v8);
    byte_4B1916C = 1;
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&position);
    if ( UnityEngine_Object__op_Equality(animation, 0LL, 0LL) )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           gameObject,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
      *p_animation = (struct UnityEngine_Animation_o *)Component_object;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.animation,
        (int64_t)Component_object,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    gameObject = (UnityEngine_GameObject_o *)*p_animation;
    if ( !*p_animation )
LABEL_30:
      sub_1BCAA3C(gameObject, v13);
    Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                               (UnityEngine_Animation_o *)gameObject,
                                               Empty,
                                               0LL);
    if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_GameObject_o *)*p_animation;
      if ( !*p_animation )
        goto LABEL_30;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)gameObject,
                                                 Empty,
                                                 0LL);
      v23 = (UnityEngine_AnimationState_o *)gameObject;
      if ( this->fields.isContinue )
      {
        gameObject = (UnityEngine_GameObject_o *)*p_animation;
        if ( !*p_animation )
          goto LABEL_30;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                   (UnityEngine_Animation_o *)gameObject,
                                                   Empty,
                                                   0LL);
        if ( !gameObject )
          goto LABEL_30;
        length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)gameObject, 0LL);
        if ( !v23 )
          goto LABEL_30;
      }
      else
      {
        length = 0.0;
        if ( !gameObject )
          goto LABEL_30;
      }
      UnityEngine_AnimationState__set_time(v23, length, 0LL);
      gameObject = (UnityEngine_GameObject_o *)*p_animation;
      if ( !*p_animation )
        goto LABEL_30;
      UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)gameObject, Empty, 0LL);
    }
    if ( this->fields.isContinue )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_30;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      this->fields.isContinue = 0;
    }
  }
}