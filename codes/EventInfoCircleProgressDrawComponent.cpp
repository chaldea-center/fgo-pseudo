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
  __int64 v5; // x21
  UnityEngine_Component_o *progressBarCompleteSprite; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  UnityEngine_Object_o *completedAnimPrefab; // x22
  Il2CppObject *v13; // x22
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x22
  System_Action_o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_Action_o *v23; // x20
  System_Collections_IEnumerator_o *v24; // x1

  if ( (byte_4A5BAD8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__);
    sub_1B885B0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__);
    sub_1B885B0(&EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo);
    byte_4A5BAD8 = 1;
  }
  v5 = sub_1B887FC(EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)endAction, v10, v11);
  completedAnimPrefab = (UnityEngine_Object_o *)this->fields.completedAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(completedAnimPrefab, 0LL, 0LL) )
    goto LABEL_15;
  v13 = (Il2CppObject *)this->fields.completedAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  progressBarCompleteSprite = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                                           v13,
                                                           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_20;
  v14 = (UnityEngine_GameObject_o *)progressBarCompleteSprite;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_33730068(v14, gameObject, 0LL);
  if ( !v14 )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v14,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  *(_QWORD *)(v5 + 32) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)Component_object, v17, v18);
  if ( UnityEngine_Object__op_Equality(*(UnityEngine_Object_o **)(v5 + 32), 0LL, 0LL) )
    goto LABEL_15;
  v19 = UnityEngine_GameObject__GetComponent_object_(
          v14,
          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
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
        ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0LL);
        return;
      }
    }
LABEL_20:
    sub_1B8880C(progressBarCompleteSprite, v7);
  }
  v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__,
    0LL);
  if ( !v19 )
    goto LABEL_20;
  v19[2].monitor = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19[2].monitor, (int32_t)v20, v21, v22);
  v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__,
    0LL);
  v24 = BasicHelper__DelayCall(0.066, v23, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__PlayLevelUpAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UILabel_o *buffLevelLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v12; // x21
  Il2CppObject *v13; // x0
  int32_t Level; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5BAD7 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8236/*"LEVEL_INFO"*/);
    byte_4A5BAD7 = 1;
  }
  if ( this->fields.progressData )
  {
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8236/*"LEVEL_INFO"*/, 0LL);
    progressData = this->fields.progressData;
    if ( !progressData
      || (v12 = v6,
          Level = progressData->fields.Level,
          v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Level, v8, v9, v10),
          v6 = System_String__Format(v12, v13, 0LL),
          !buffLevelLabel) )
    {
      sub_1B8880C(v6, v7);
    }
    UILabel__set_text(buffLevelLabel, v6, 0LL);
  }
  ActionExtensions__Call(endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct UISprite_o *progressBarSprite; // x8
  float mFillAmount; // s0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  float v15; // s1
  Il2CppObject *progressBarAnimPrefab; // x21
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v19; // x21
  Il2CppObject *Component_object; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_IEnumerator_o *v23; // x1

  if ( (byte_4A5BAD6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__);
    sub_1B885B0(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo);
    byte_4A5BAD6 = 1;
  }
  v5 = sub_1B887FC(EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 32) = endAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)endAction, v10, v11);
  progressBarSprite = this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_16;
  mFillAmount = progressBarSprite->fields.mFillAmount;
  *(float *)(v5 + 24) = mFillAmount;
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  v15 = (float)(progressData->fields.Level - this->fields.minLevel)
      / (float)(this->fields.maxLevel - this->fields.minLevel);
  *(float *)(v5 + 28) = v15;
  if ( mFillAmount == v15 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 32), 0LL);
    return;
  }
  progressBarAnimPrefab = (Il2CppObject *)this->fields.progressBarAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         progressBarAnimPrefab,
         (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_16;
  v17 = (UnityEngine_GameObject_o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_33730068(v17, gameObject, 0LL);
  v19 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__,
    0LL);
  if ( !v17 )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v17,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v6 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v23 = BasicHelper__DelayCall(0.7, v19, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v23, 0LL);
    return;
  }
  if ( !Component_object )
LABEL_16:
    sub_1B8880C(v6, v7);
  Component_object[2].monitor = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v19, v21, v22);
}


void __fastcall EventInfoCircleProgressDrawComponent__SetActive(
        EventInfoCircleProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v5);
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
  int32_t v11; // w2
  char v12; // w3
  const MethodInfo *v13; // x1
  UILabel_o *nameLabel; // x0
  struct EventPointBuffEntity_o *EventPointBuffEnt; // x8
  System_String_o **v16; // x8
  UILabel_o *buffLevelLabel; // x23
  System_String_o *v18; // x24
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct EventPointBuffEntity_o *v26; // x8
  UISprite_o *buffIconSprite; // x23
  Il2CppObject *v28; // x0
  struct EventInfoCircleProgressDrawComponent_ImageInfo_array *imageInfoList; // x24
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  EventInfoCircleProgressDrawComponent_ImageInfo_o *v32; // x28
  UnityEngine_Object_o *Sprite; // x23
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  int32_t v35; // w2
  char v36; // w3
  struct UnityEngine_GameObject_o *v37; // x0
  int32_t v38; // w2
  char v39; // w3
  int v40; // [xsp+8h] [xbp-58h] BYREF
  int32_t OldLevel; // [xsp+Ch] [xbp-54h] BYREF

  v10 = isExtraCircle;
  if ( (byte_4A5BAD4 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8236/*"LEVEL_INFO"*/);
    sub_1B885B0(&StringLiteral_17212/*"bit_circlemeter_gain"*/);
    sub_1B885B0(&StringLiteral_17640/*"bufficon_{0:D2}"*/);
    sub_1B885B0(&StringLiteral_17211/*"bit_circlemeter_comptext"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BAD4 = 1;
  }
  this->fields.circleProgressCtrl = circleProgressCtrl;
  this->fields.isExtraCircle = v10;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.circleProgressCtrl,
    (int32_t)circleProgressCtrl,
    (int32_t)progressData,
    isExtraCircle);
  if ( progressData )
  {
    this->fields.progressData = progressData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.progressData, (int32_t)progressData, v11, v12);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_33;
    EventPointBuffEnt = progressData->fields.EventPointBuffEnt;
    v16 = EventPointBuffEnt ? &EventPointBuffEnt->fields.name : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text(nameLabel, *v16, 0LL);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_33;
    UILabel__SetCondensedScale(nameLabel, this->fields.nameLabelMaxWidth, 0LL);
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8236/*"LEVEL_INFO"*/, 0LL);
    OldLevel = progressData->fields.OldLevel;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OldLevel, v19, v20, v21);
    nameLabel = (UILabel_o *)System_String__Format(v18, v22, 0LL);
    if ( !buffLevelLabel )
      goto LABEL_33;
    UILabel__set_text(buffLevelLabel, (System_String_o *)nameLabel, 0LL);
    v26 = progressData->fields.EventPointBuffEnt;
    if ( v26 )
      LODWORD(v26) = v26->fields.skillIconId;
    buffIconSprite = this->fields.buffIconSprite;
    v40 = (int)v26;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v23, v24, v25);
    nameLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_17640/*"bufficon_{0:D2}"*/, v28, 0LL);
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
    v30 = *(_QWORD *)&imageInfoList->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = 0LL;
      do
      {
        if ( v31 >= (unsigned int)v30 )
          sub_1B88814(nameLabel, v13);
        v32 = imageInfoList->m_Items[v31];
        if ( v32 )
        {
          Sprite = (UnityEngine_Object_o *)v32->fields.Sprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          nameLabel = (UILabel_o *)UnityEngine_Object__op_Equality(Sprite, 0LL, 0LL);
          if ( ((unsigned __int8)nameLabel & 1) == 0 )
            nameLabel = (UILabel_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                       (EventInfoUIBase_o *)circleProgressCtrl,
                                       v32->fields.Sprite,
                                       v32->fields.SpriteName,
                                       0LL);
        }
        LODWORD(v30) = imageInfoList->max_length;
        ++v31;
      }
      while ( (__int64)v31 < (int)v30 );
    }
    EventInfoCircleProgressDrawComponent__SetupLeaderIcon(this, v13);
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
                                             (System_String_o *)StringLiteral_17212/*"bit_circlemeter_gain"*/,
                                             0LL),
          this->fields.progressBarAnimPrefab = GameObjectFromEventUIAssetData,
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields.progressBarAnimPrefab,
            (int32_t)GameObjectFromEventUIAssetData,
            v35,
            v36),
          (nameLabel = (UILabel_o *)this->fields.circleProgressCtrl) == 0LL) )
    {
LABEL_33:
      sub_1B8880C(nameLabel, v13);
    }
    v37 = EventInfoUIBase__GetGameObjectFromEventUIAssetData(
            (EventInfoUIBase_o *)nameLabel,
            (System_String_o *)StringLiteral_17211/*"bit_circlemeter_comptext"*/,
            0LL);
    this->fields.completedAnimPrefab = v37;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.completedAnimPrefab, (int32_t)v37, v38, v39);
  }
}


void __fastcall EventInfoCircleProgressDrawComponent__SetupLeaderIcon(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t klass_high; // w8
  UnityEngine_Component_o *leaderIconSprite2; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  EventInfoUIBase_o *circleProgressCtrl; // x20
  UISprite_o *leaderIconSprite; // x19
  Il2CppObject *v13; // x0
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A5BAD5 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_20242/*"img_LeaderIcon{0:D2}"*/);
    byte_4A5BAD5 = 1;
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
      sub_1B8880C(SelfUserGame, v7);
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
    v14 = (int)progressData;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v2, v3, v4);
    SelfUserGame = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20242/*"img_LeaderIcon{0:D2}"*/, v13, 0LL);
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
  __int64 v4; // x1
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
        sub_1B8880C(SelfUserGame, v4);
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
  __int64 v3; // x20
  UnityEngine_Component_o *progressBarSprite; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct EventInfoCircleProgressDrawComponent_o *v13; // x8
  EasingObject_o *v14; // x21
  float progressBarAnimDuration; // s8
  System_Action_o *v16; // x22
  System_Action_o *_9__2; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5BAD9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__);
    sub_1B885B0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__);
    sub_1B885B0(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo);
    byte_4A5BAD9 = 1;
  }
  v3 = sub_1B887FC(EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  progressBarSprite = (UnityEngine_Component_o *)_4__this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(progressBarSprite, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)Component_object, v11, v12);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_11;
  v14 = *(EasingObject_o **)(v3 + 16);
  progressBarAnimDuration = v13->fields.progressBarAnimDuration;
  v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v3,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__,
    0LL);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v18, v19);
  }
  if ( !v14 )
LABEL_11:
    sub_1B8880C(progressBarSprite, v5);
  EasingObject__Play(v14, progressBarAnimDuration, v16, _9__2, 0.0, 0, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___PlayProgressBarAnim_b__2(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  ActionExtensions__Call(v3->fields.endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___PlayCompleteAnim_b__1(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0

  if ( (byte_4A5BADA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17211/*"bit_circlemeter_comptext"*/);
    byte_4A5BADA = 1;
  }
  anim = this->fields.anim;
  if ( !anim )
    sub_1B8880C(0LL, method);
  UnityEngine_Animation__Play_69204472(anim, (System_String_o *)StringLiteral_17211/*"bit_circlemeter_comptext"*/, 0LL);
}