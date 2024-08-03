void __fastcall EventInfoCircleProgressDrawComponent___ctor(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  this->fields.nameLabelMaxWidth = 57;
  *(_QWORD *)&this->fields.minLevel = 0x500000001LL;
  this->fields.progressBarAnimDuration = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__Awake(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoCircleProgressDrawComponent__PlayCompleteAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  UnityEngine_Component_o *progressBarCompleteSprite; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *completedAnimPrefab; // x22
  Il2CppObject *v19; // x22
  UnityEngine_GameObject_o *v20; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x20
  System_Collections_IEnumerator_o *v34; // x1

  if ( (byte_49FCF6C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, endAction);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__, v9);
    sub_1B640C8(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__, v10);
    sub_1B640C8(&EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo, v11);
    byte_49FCF6C = 1;
  }
  v12 = sub_1B64314(EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo, endAction, method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_20;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v12 + 24) = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)endAction, v16, v17);
  completedAnimPrefab = (UnityEngine_Object_o *)this->fields.completedAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(completedAnimPrefab, 0LL, 0LL) )
    goto LABEL_15;
  v19 = (Il2CppObject *)this->fields.completedAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  progressBarCompleteSprite = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                                           v19,
                                                           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_20;
  v20 = (UnityEngine_GameObject_o *)progressBarCompleteSprite;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_33381252(v20, gameObject, 0LL);
  if ( !v20 )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v20,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  *(_QWORD *)(v12 + 32) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)Component_object, v23, v24);
  if ( UnityEngine_Object__op_Equality(*(UnityEngine_Object_o **)(v12 + 32), 0LL, 0LL) )
    goto LABEL_15;
  v25 = UnityEngine_GameObject__GetComponent_object_(
          v20,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
  {
LABEL_15:
    progressBarCompleteSprite = (UnityEngine_Component_o *)this->fields.progressBarCompleteSprite;
    if ( progressBarCompleteSprite )
    {
      progressBarCompleteSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               progressBarCompleteSprite,
                                                               0LL);
      if ( progressBarCompleteSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressBarCompleteSprite, 1, 0LL);
        ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
        return;
      }
    }
LABEL_20:
    sub_1B64324(progressBarCompleteSprite);
  }
  v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v12,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__,
    0LL);
  if ( !v25 )
    goto LABEL_20;
  v25[2].monitor = v28;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25[2].monitor, (int32_t)v28, v29, v30);
  v33 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(
    v33,
    (Il2CppObject *)v12,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__,
    0LL);
  v34 = BasicHelper__DelayCall(0.066, v33, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v34, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__PlayLevelUpAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *buffLevelLabel; // x20
  System_String_o *v8; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  int32_t Level; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FCF6B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, endAction);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_8198/*"LEVEL_INFO"*/, v6);
    byte_49FCF6B = 1;
  }
  if ( this->fields.progressData )
  {
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8198/*"LEVEL_INFO"*/, 0LL);
    progressData = this->fields.progressData;
    if ( !progressData
      || (v10 = v8,
          Level = progressData->fields.Level,
          v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Level),
          v8 = System_String__Format(v10, v11, 0LL),
          !buffLevelLabel) )
    {
      sub_1B64324(v8);
    }
    UILabel__set_text(buffLevelLabel, v8, 0LL);
  }
  ActionExtensions__Call(endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  struct UISprite_o *progressBarSprite; // x8
  float mFillAmount; // s0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  float v19; // s1
  Il2CppObject *progressBarAnimPrefab; // x21
  UnityEngine_GameObject_o *v21; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *v25; // x21
  Il2CppObject *Component_object; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_IEnumerator_o *v29; // x1

  if ( (byte_49FCF6A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, endAction);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__, v8);
    sub_1B640C8(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo, v9);
    byte_49FCF6A = 1;
  }
  v10 = sub_1B64314(EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo, endAction, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_16;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 32) = endAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)endAction, v14, v15);
  progressBarSprite = this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_16;
  mFillAmount = progressBarSprite->fields.mFillAmount;
  *(float *)(v10 + 24) = mFillAmount;
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  v19 = (float)(progressData->fields.Level - this->fields.minLevel)
      / (float)(this->fields.maxLevel - this->fields.minLevel);
  *(float *)(v10 + 28) = v19;
  if ( mFillAmount == v19 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v10 + 32), 0LL);
    return;
  }
  progressBarAnimPrefab = (Il2CppObject *)this->fields.progressBarAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__Instantiate_object_(
          progressBarAnimPrefab,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_16;
  v21 = (UnityEngine_GameObject_o *)v11;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_33381252(v21, gameObject, 0LL);
  v25 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v10,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__,
    0LL);
  if ( !v21 )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v21,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v11 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v29 = BasicHelper__DelayCall(0.7, v25, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v29, 0LL);
    return;
  }
  if ( !Component_object )
LABEL_16:
    sub_1B64324(v11);
  Component_object[2].monitor = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v25, v27, v28);
}


void __fastcall EventInfoCircleProgressDrawComponent__SetActive(
        EventInfoCircleProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__Setup(
        EventInfoCircleProgressDrawComponent_o *this,
        EventInfoCircleProgressControl_o *circleProgressCtrl,
        EventInfoCircleProgressControl_ProgressData_o *progressData,
        bool isExtraCircle,
        bool isInitCompleted,
        const MethodInfo *method)
{
  bool v10; // w23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  int32_t v18; // w2
  char v19; // w3
  UILabel_o *nameLabel; // x0
  struct EventPointBuffEntity_o *EventPointBuffEnt; // x8
  System_String_o **v22; // x8
  UILabel_o *buffLevelLabel; // x23
  System_String_o *v24; // x24
  Il2CppObject *v25; // x0
  struct EventPointBuffEntity_o *v26; // x8
  UISprite_o *buffIconSprite; // x23
  Il2CppObject *v28; // x0
  const MethodInfo *v29; // x1
  struct EventInfoCircleProgressDrawComponent_ImageInfo_array *imageInfoList; // x24
  __int64 v31; // x8
  unsigned __int64 v32; // x25
  EventInfoCircleProgressDrawComponent_ImageInfo_o *v33; // x28
  UnityEngine_Object_o *Sprite; // x23
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  int32_t v36; // w2
  char v37; // w3
  struct UnityEngine_GameObject_o *v38; // x0
  int32_t v39; // w2
  char v40; // w3
  int v41; // [xsp+8h] [xbp-58h] BYREF
  int32_t OldLevel; // [xsp+Ch] [xbp-54h] BYREF

  v10 = isExtraCircle;
  if ( (byte_49FCF68 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, circleProgressCtrl);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_8198/*"LEVEL_INFO"*/, v13);
    sub_1B640C8(&StringLiteral_17144/*"bit_circlemeter_gain"*/, v14);
    sub_1B640C8(&StringLiteral_17570/*"bufficon_{0:D2}"*/, v15);
    sub_1B640C8(&StringLiteral_17143/*"bit_circlemeter_comptext"*/, v16);
    sub_1B640C8(&StringLiteral_1/*""*/, v17);
    byte_49FCF68 = 1;
  }
  this->fields.circleProgressCtrl = circleProgressCtrl;
  this->fields.isExtraCircle = v10;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.circleProgressCtrl,
    (int32_t)circleProgressCtrl,
    (int32_t)progressData,
    isExtraCircle);
  if ( progressData )
  {
    this->fields.progressData = progressData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.progressData, (int32_t)progressData, v18, v19);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_33;
    EventPointBuffEnt = progressData->fields.EventPointBuffEnt;
    v22 = EventPointBuffEnt ? &EventPointBuffEnt->fields.name : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text(nameLabel, *v22, 0LL);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_33;
    UILabel__SetCondensedScale(nameLabel, this->fields.nameLabelMaxWidth, 0LL);
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8198/*"LEVEL_INFO"*/, 0LL);
    OldLevel = progressData->fields.OldLevel;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OldLevel);
    nameLabel = (UILabel_o *)System_String__Format(v24, v25, 0LL);
    if ( !buffLevelLabel )
      goto LABEL_33;
    UILabel__set_text(buffLevelLabel, (System_String_o *)nameLabel, 0LL);
    v26 = progressData->fields.EventPointBuffEnt;
    if ( v26 )
      LODWORD(v26) = v26->fields.skillIconId;
    buffIconSprite = this->fields.buffIconSprite;
    v41 = (int)v26;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    nameLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_17570/*"bufficon_{0:D2}"*/, v28, 0LL);
    if ( !circleProgressCtrl )
      goto LABEL_33;
    nameLabel = (UILabel_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                               (EventInfoUIBase_o *)circleProgressCtrl,
                               buffIconSprite,
                               (System_String_o *)nameLabel,
                               0LL);
    imageInfoList = this->fields.imageInfoList;
    if ( !imageInfoList )
      goto LABEL_33;
    v31 = *(_QWORD *)&imageInfoList->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = 0LL;
      do
      {
        if ( v32 >= (unsigned int)v31 )
          sub_1B6432C(nameLabel, v29);
        v33 = imageInfoList->m_Items[v32];
        if ( v33 )
        {
          Sprite = (UnityEngine_Object_o *)v33->fields.Sprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          nameLabel = (UILabel_o *)UnityEngine_Object__op_Equality(Sprite, 0LL, 0LL);
          if ( ((unsigned __int8)nameLabel & 1) == 0 )
            nameLabel = (UILabel_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                       (EventInfoUIBase_o *)circleProgressCtrl,
                                       v33->fields.Sprite,
                                       v33->fields.SpriteName,
                                       0LL);
        }
        LODWORD(v31) = imageInfoList->max_length;
        ++v32;
      }
      while ( (__int64)v32 < (int)v31 );
    }
    EventInfoCircleProgressDrawComponent__SetupLeaderIcon(this, v29);
    nameLabel = (UILabel_o *)this->fields.progressBarCompleteSprite;
    if ( !nameLabel )
      goto LABEL_33;
    nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
    if ( !nameLabel )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, isInitCompleted, 0LL);
    nameLabel = (UILabel_o *)this->fields.progressBarSprite;
    if ( !nameLabel
      || (UIBasicSprite__set_fillAmount(
            (UIBasicSprite_o *)nameLabel,
            (float)(progressData->fields.OldLevel - this->fields.minLevel)
          / (float)(this->fields.maxLevel - this->fields.minLevel),
            0LL),
          (nameLabel = (UILabel_o *)this->fields.circleProgressCtrl) == 0LL)
      || (GameObjectFromEventUIAssetData = EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                             (EventInfoUIBase_o *)nameLabel,
                                             (System_String_o *)StringLiteral_17144/*"bit_circlemeter_gain"*/,
                                             0LL),
          this->fields.progressBarAnimPrefab = GameObjectFromEventUIAssetData,
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields.progressBarAnimPrefab,
            (int32_t)GameObjectFromEventUIAssetData,
            v36,
            v37),
          (nameLabel = (UILabel_o *)this->fields.circleProgressCtrl) == 0LL) )
    {
LABEL_33:
      sub_1B64324(nameLabel);
    }
    v38 = EventInfoUIBase__GetGameObjectFromEventUIAssetData(
            (EventInfoUIBase_o *)nameLabel,
            (System_String_o *)StringLiteral_17143/*"bit_circlemeter_comptext"*/,
            0LL);
    this->fields.completedAnimPrefab = v38;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.completedAnimPrefab, (int32_t)v38, v39, v40);
  }
}


void __fastcall EventInfoCircleProgressDrawComponent__SetupLeaderIcon(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *SelfUserGame; // x0
  int32_t klass_high; // w8
  UnityEngine_Component_o *leaderIconSprite2; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  EventInfoUIBase_o *circleProgressCtrl; // x20
  UISprite_o *leaderIconSprite; // x19
  Il2CppObject *v10; // x0
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_49FCF69 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&StringLiteral_20162/*"img_LeaderIcon{0:D2}"*/, v3);
    byte_49FCF69 = 1;
  }
  if ( this->fields.isExtraCircle )
  {
    SelfUserGame = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_16;
    klass_high = HIDWORD(SelfUserGame[3].klass);
    SelfUserGame = (UnityEngine_Component_o *)this->fields.leaderIconSprite;
    this->fields.genderType = klass_high;
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SelfUserGame, 0LL);
    if ( !SelfUserGame )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, this->fields.genderType == 1, 0LL);
    leaderIconSprite2 = (UnityEngine_Component_o *)this->fields.leaderIconSprite2;
    if ( leaderIconSprite2 )
    {
      SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(leaderIconSprite2, 0LL);
      if ( SelfUserGame )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, this->fields.genderType == 2, 0LL);
        return;
      }
LABEL_16:
      sub_1B64324(SelfUserGame);
    }
  }
  else
  {
    progressData = this->fields.progressData;
    if ( progressData )
    {
      progressData = (struct EventInfoCircleProgressControl_ProgressData_o *)progressData->fields.EventPointBuffEnt;
      if ( progressData )
        LODWORD(progressData) = progressData->fields.DispState;
    }
    circleProgressCtrl = (EventInfoUIBase_o *)this->fields.circleProgressCtrl;
    leaderIconSprite = this->fields.leaderIconSprite;
    v11 = (int)progressData;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    SelfUserGame = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20162/*"img_LeaderIcon{0:D2}"*/, v10, 0LL);
    if ( !circleProgressCtrl )
      goto LABEL_16;
    EventInfoUIBase__SetSpriteByLocalAtlas(circleProgressCtrl, leaderIconSprite, (System_String_o *)SelfUserGame, 0LL);
  }
}


void __fastcall EventInfoCircleProgressDrawComponent__Update(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *SelfUserGame; // x0
  int32_t klass_high; // w8
  UnityEngine_Component_o *leaderIconSprite2; // x0

  if ( this->fields.isExtraCircle )
  {
    SelfUserGame = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_10;
    klass_high = HIDWORD(SelfUserGame[3].klass);
    if ( this->fields.genderType != klass_high )
    {
      SelfUserGame = (UnityEngine_Component_o *)this->fields.leaderIconSprite;
      this->fields.genderType = klass_high;
      if ( !SelfUserGame )
        goto LABEL_10;
      SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SelfUserGame, 0LL);
      if ( !SelfUserGame )
        goto LABEL_10;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, this->fields.genderType == 1, 0LL);
      leaderIconSprite2 = (UnityEngine_Component_o *)this->fields.leaderIconSprite2;
      if ( leaderIconSprite2 )
      {
        SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(leaderIconSprite2, 0LL);
        if ( SelfUserGame )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, this->fields.genderType == 2, 0LL);
          return;
        }
LABEL_10:
        sub_1B64324(SelfUserGame);
      }
    }
  }
}


UISprite_o *__fastcall EventInfoCircleProgressDrawComponent__get_BgSprite(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bgSprite;
}


UISprite_o *__fastcall EventInfoCircleProgressDrawComponent__get_BuffIconSprite(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.buffIconSprite;
}


int32_t __fastcall EventInfoCircleProgressDrawComponent__get_MaxLevel(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.maxLevel;
}


int32_t __fastcall EventInfoCircleProgressDrawComponent__get_MinLevel(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.minLevel;
}


UISprite_o *__fastcall EventInfoCircleProgressDrawComponent__get_ProgressBarBgSprite(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.progressBarBgSprite;
}


UISprite_o *__fastcall EventInfoCircleProgressDrawComponent__get_ProgressBarSprite(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.progressBarSprite;
}


void __fastcall EventInfoCircleProgressDrawComponent_ImageInfo___ctor(
        EventInfoCircleProgressDrawComponent_ImageInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___ctor(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___PlayProgressBarAnim_b__0(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  UnityEngine_Component_o *progressBarSprite; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  struct EventInfoCircleProgressDrawComponent_o *v19; // x8
  EasingObject_o *v20; // x21
  float progressBarAnimDuration; // s8
  System_Action_o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_o *_9__2; // x20
  int32_t v26; // w2
  int32_t v27; // w3

  if ( (byte_49FCF6D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v4);
    sub_1B640C8(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__, v5);
    sub_1B640C8(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__, v6);
    sub_1B640C8(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo, v7);
    byte_49FCF6D = 1;
  }
  v8 = sub_1B64314(EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  *(_QWORD *)(v8 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)this, v10, v11);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  progressBarSprite = (UnityEngine_Component_o *)_4__this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(progressBarSprite, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v8 + 16) = Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)Component_object, v15, v16);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_11;
  v20 = *(EasingObject_o **)(v8 + 16);
  progressBarAnimDuration = v19->fields.progressBarAnimDuration;
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v8,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__,
    0LL);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v23, v24);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v26, v27);
  }
  if ( !v20 )
LABEL_11:
    sub_1B64324(progressBarSprite);
  EasingObject__Play(v20, progressBarAnimDuration, v22, _9__2, 0.0, 0, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___PlayProgressBarAnim_b__2(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B64324(this);
  EventInfoCircleProgressDrawComponent__PlayLevelUpAnim(this->fields.__4__this, this->fields.endAction, v2);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass38_1___ctor(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass38_1___PlayProgressBarAnim_b__1(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *CS___8__locals1; // x8
  struct EasingObject_o *easingObj; // x9
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x10
  float mNow; // s2
  float v6; // s3
  bool v7; // nf
  float v8; // s2

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (easingObj = this->fields.easingObj) == 0LL
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (this = (EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_o *)_4__this->fields.progressBarSprite) == 0LL )
  {
    sub_1B64324(this);
  }
  mNow = easingObj->fields.mNow;
  v6 = fminf(mNow, 1.0);
  v7 = mNow < 0.0;
  v8 = 0.0;
  if ( !v7 )
    v8 = v6;
  UIBasicSprite__set_fillAmount(
    (UIBasicSprite_o *)this,
    CS___8__locals1->fields.from + (float)((float)(CS___8__locals1->fields.to - CS___8__locals1->fields.from) * v8),
    0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___ctor(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___PlayCompleteAnim_b__0(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8
  EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *)_4__this->fields.progressBarCompleteSprite) == 0LL)
    || (this = (EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0LL)) == 0LL )
  {
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  ActionExtensions__Call(v3->fields.endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___PlayCompleteAnim_b__1(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0

  if ( (byte_49FCF6E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17143/*"bit_circlemeter_comptext"*/, method);
    byte_49FCF6E = 1;
  }
  anim = this->fields.anim;
  if ( !anim )
    sub_1B64324(0LL);
  UnityEngine_Animation__Play_68872828(anim, (System_String_o *)StringLiteral_17143/*"bit_circlemeter_comptext"*/, 0LL);
}