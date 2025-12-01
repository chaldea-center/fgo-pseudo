void EventInfoCircleProgressDrawComponent___ctor(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  this->fields.nameLabelMaxWidth = 57;
  *(_QWORD *)&this->fields.minLevel = 0x500000001LL;
  this->fields.progressBarAnimDuration = 0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoCircleProgressDrawComponent__Awake(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void EventInfoCircleProgressDrawComponent__PlayCompleteAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_Component_o *progressBarCompleteSprite; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_Object_o *completedAnimPrefab; // x22
  Il2CppObject *v21; // x22
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject *v31; // x22
  System_Action_o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Action_o *v39; // x20
  System_Collections_IEnumerator_o *v40; // x1

  if ( (byte_4CC77E3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__);
    sub_1C713B0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__);
    sub_1C713B0(&EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo);
    byte_4CC77E3 = 1;
  }
  v5 = sub_1C715FC(EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_20;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  completedAnimPrefab = (UnityEngine_Object_o *)this->fields.completedAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(completedAnimPrefab, 0, 0) )
    goto LABEL_15;
  v21 = (Il2CppObject *)this->fields.completedAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  progressBarCompleteSprite = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                                           v21,
                                                           (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_20;
  v22 = (UnityEngine_GameObject_o *)progressBarCompleteSprite;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0);
  GameObjectExtensions__SafeSetParent_36395768(v22, gameObject, 0);
  if ( !v22 )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v22,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  *(_QWORD *)(v5 + 32) = Component_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)Component_object, v25, v26, v27, v28, v29, v30);
  if ( UnityEngine_Object__op_Equality(*(UnityEngine_Object_o **)(v5 + 32), 0, 0) )
    goto LABEL_15;
  v31 = UnityEngine_GameObject__GetComponent_object_(
          v22,
          (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v31, 0, 0) )
  {
LABEL_15:
    progressBarCompleteSprite = (UnityEngine_Component_o *)this->fields.progressBarCompleteSprite;
    if ( progressBarCompleteSprite )
    {
      progressBarCompleteSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                               progressBarCompleteSprite,
                                                               0);
      if ( progressBarCompleteSprite )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)progressBarCompleteSprite, 1, 0);
        ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
        return;
      }
    }
LABEL_20:
    sub_1C71608(progressBarCompleteSprite, v7);
  }
  v32 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__,
    0);
  if ( !v31 )
    goto LABEL_20;
  v31[2].monitor = v32;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v31[2].monitor, (int32_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__,
    0);
  v40 = BasicHelper__DelayCall(0.066, v39, 1, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v40, 0);
}


void EventInfoCircleProgressDrawComponent__PlayLevelUpAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  UILabel_o *buffLevelLabel; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v9; // x21
  Il2CppObject *v10; // x0
  int32_t Level; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC77E2 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_8264/*"LEVEL_INFO"*/);
    byte_4CC77E2 = 1;
  }
  if ( this->fields.progressData )
  {
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8264/*"LEVEL_INFO"*/, 0);
    progressData = this->fields.progressData;
    if ( !progressData
      || (v9 = v6,
          Level = progressData->fields.Level,
          v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Level),
          v6 = System_String__Format(v9, v10, 0),
          !buffLevelLabel) )
    {
      sub_1C71608(v6, v7);
    }
    UILabel__set_text(buffLevelLabel, v6, 0);
  }
  ActionExtensions__Call(endAction, 0);
}


void EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UISprite_o *progressBarSprite; // x8
  float mFillAmount; // s0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  float v23; // s1
  Il2CppObject *progressBarAnimPrefab; // x21
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v27; // x21
  Il2CppObject *Component_object; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Collections_IEnumerator_o *v35; // x1

  if ( (byte_4CC77E1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__);
    sub_1C713B0(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo);
    byte_4CC77E1 = 1;
  }
  v5 = sub_1C715FC(EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = endAction;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)endAction, v14, v15, v16, v17, v18, v19);
  progressBarSprite = this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_16;
  mFillAmount = progressBarSprite->fields.mFillAmount;
  *(float *)(v5 + 24) = mFillAmount;
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  v23 = (float)(progressData->fields.Level - this->fields.minLevel)
      / (float)(this->fields.maxLevel - this->fields.minLevel);
  *(float *)(v5 + 28) = v23;
  if ( mFillAmount == v23 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 32), 0);
    return;
  }
  progressBarAnimPrefab = (Il2CppObject *)this->fields.progressBarAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__Instantiate_object_(
         progressBarAnimPrefab,
         (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_16;
  v25 = (UnityEngine_GameObject_o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0);
  GameObjectExtensions__SafeSetParent_36395768(v25, gameObject, 0);
  v27 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__,
    0);
  if ( !v25 )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v25,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v6 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v35 = BasicHelper__DelayCall(0.7, v27, 1, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v35, 0);
    return;
  }
  if ( !Component_object )
LABEL_16:
    sub_1C71608(v6, v7);
  Component_object[2].monitor = v27;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&Component_object[2].monitor, (int32_t)v27, v29, v30, v31, v32, v33, v34);
}


void EventInfoCircleProgressDrawComponent__SetActive(
        EventInfoCircleProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoCircleProgressDrawComponent__Setup(
        EventInfoCircleProgressDrawComponent_o *this,
        EventInfoCircleProgressControl_o *circleProgressCtrl,
        EventInfoCircleProgressControl_ProgressData_o *progressData,
        bool isExtraCircle,
        bool isInitCompleted,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  bool v12; // w23
  int32_t v13; // w2
  char v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  UILabel_o *nameLabel; // x0
  struct EventPointBuffEntity_o *EventPointBuffEnt; // x8
  System_String_o **v22; // x8
  UILabel_o *buffLevelLabel; // x23
  System_String_o *v24; // x24
  Il2CppObject *v25; // x0
  struct EventPointBuffEntity_o *v26; // x8
  UISprite_o *buffIconSprite; // x23
  Il2CppObject *v28; // x0
  struct EventInfoCircleProgressDrawComponent_ImageInfo_array *imageInfoList; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v31; // x25
  EventInfoCircleProgressDrawComponent_ImageInfo_o *v32; // x28
  UnityEngine_Object_o *Sprite; // x23
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  int32_t v35; // w2
  char v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct UnityEngine_GameObject_o *v41; // x0
  int32_t v42; // w2
  char v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int v48; // [xsp+8h] [xbp-58h] BYREF
  int32_t OldLevel; // [xsp+Ch] [xbp-54h] BYREF

  v12 = isExtraCircle;
  if ( (byte_4CC77DF & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_8264/*"LEVEL_INFO"*/);
    sub_1C713B0(&StringLiteral_17205/*"bit_circlemeter_gain"*/);
    sub_1C713B0(&StringLiteral_17657/*"bufficon_{0:D2}"*/);
    sub_1C713B0(&StringLiteral_17204/*"bit_circlemeter_comptext"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC77DF = 1;
  }
  this->fields.circleProgressCtrl = circleProgressCtrl;
  this->fields.isExtraCircle = v12;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.circleProgressCtrl,
    (int32_t)circleProgressCtrl,
    (int32_t)progressData,
    isExtraCircle,
    (System_String_o *)isInitCompleted,
    (int32_t)method,
    v6,
    v7);
  if ( progressData )
  {
    this->fields.progressData = progressData;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.progressData,
      (int32_t)progressData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_33;
    EventPointBuffEnt = progressData->fields.EventPointBuffEnt;
    v22 = EventPointBuffEnt ? &EventPointBuffEnt->fields.name : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text(nameLabel, *v22, 0);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_33;
    UILabel__SetCondensedScale(nameLabel, this->fields.nameLabelMaxWidth, 0, 0);
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8264/*"LEVEL_INFO"*/, 0);
    OldLevel = progressData->fields.OldLevel;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OldLevel);
    nameLabel = (UILabel_o *)System_String__Format(v24, v25, 0);
    if ( !buffLevelLabel )
      goto LABEL_33;
    UILabel__set_text(buffLevelLabel, (System_String_o *)nameLabel, 0);
    v26 = progressData->fields.EventPointBuffEnt;
    if ( v26 )
      LODWORD(v26) = v26->fields.skillIconId;
    buffIconSprite = this->fields.buffIconSprite;
    v48 = (int)v26;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
    nameLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_17657/*"bufficon_{0:D2}"*/, v28, 0);
    if ( !circleProgressCtrl )
      goto LABEL_33;
    nameLabel = (UILabel_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                               (EventInfoUIBase_o *)circleProgressCtrl,
                               buffIconSprite,
                               (System_String_o *)nameLabel,
                               0);
    imageInfoList = this->fields.imageInfoList;
    if ( !imageInfoList )
      goto LABEL_33;
    max_length = imageInfoList->max_length;
    if ( (int)max_length >= 1 )
    {
      v31 = 0;
      do
      {
        if ( v31 >= (unsigned int)max_length )
          sub_1C71610(nameLabel);
        v32 = imageInfoList->m_Items[v31];
        if ( v32 )
        {
          Sprite = (UnityEngine_Object_o *)v32->fields.Sprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          nameLabel = (UILabel_o *)UnityEngine_Object__op_Equality(Sprite, 0, 0);
          if ( ((unsigned __int8)nameLabel & 1) == 0 )
            nameLabel = (UILabel_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                       (EventInfoUIBase_o *)circleProgressCtrl,
                                       v32->fields.Sprite,
                                       v32->fields.SpriteName,
                                       0);
        }
        LODWORD(max_length) = imageInfoList->max_length;
        ++v31;
      }
      while ( (__int64)v31 < (int)max_length );
    }
    EventInfoCircleProgressDrawComponent__SetupLeaderIcon(this, v19);
    nameLabel = (UILabel_o *)this->fields.progressBarCompleteSprite;
    if ( !nameLabel )
      goto LABEL_33;
    nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0);
    if ( !nameLabel )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nameLabel, isInitCompleted, 0);
    nameLabel = (UILabel_o *)this->fields.progressBarSprite;
    if ( !nameLabel
      || (UIBasicSprite__set_fillAmount(
            (UIBasicSprite_o *)nameLabel,
            (float)(progressData->fields.OldLevel - this->fields.minLevel)
          / (float)(this->fields.maxLevel - this->fields.minLevel),
            0),
          (nameLabel = (UILabel_o *)this->fields.circleProgressCtrl) == 0)
      || (GameObjectFromEventUIAssetData = EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                             (EventInfoUIBase_o *)nameLabel,
                                             (System_String_o *)StringLiteral_17205/*"bit_circlemeter_gain"*/,
                                             0),
          this->fields.progressBarAnimPrefab = GameObjectFromEventUIAssetData,
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&this->fields.progressBarAnimPrefab,
            (int32_t)GameObjectFromEventUIAssetData,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40),
          (nameLabel = (UILabel_o *)this->fields.circleProgressCtrl) == 0) )
    {
LABEL_33:
      sub_1C71608(nameLabel, v19);
    }
    v41 = EventInfoUIBase__GetGameObjectFromEventUIAssetData(
            (EventInfoUIBase_o *)nameLabel,
            (System_String_o *)StringLiteral_17204/*"bit_circlemeter_comptext"*/,
            0);
    this->fields.completedAnimPrefab = v41;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.completedAnimPrefab,
      (int32_t)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
}


void EventInfoCircleProgressDrawComponent__SetupLeaderIcon(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t klass_high; // w8
  UnityEngine_Component_o *leaderIconSprite2; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  EventInfoUIBase_o *circleProgressCtrl; // x20
  UISprite_o *leaderIconSprite; // x19
  Il2CppObject *v10; // x0
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4CC77E0 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_20373/*"img_LeaderIcon{0:D2}"*/);
    byte_4CC77E0 = 1;
  }
  if ( this->fields.isExtraCircle )
  {
    SelfUserGame = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_16;
    klass_high = HIDWORD(SelfUserGame[3].klass);
    SelfUserGame = (UnityEngine_Component_o *)this->fields.leaderIconSprite;
    this->fields.genderType = klass_high;
    if ( !SelfUserGame )
      goto LABEL_16;
    SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SelfUserGame, 0);
    if ( !SelfUserGame )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, this->fields.genderType == 1, 0);
    leaderIconSprite2 = (UnityEngine_Component_o *)this->fields.leaderIconSprite2;
    if ( leaderIconSprite2 )
    {
      SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(leaderIconSprite2, 0);
      if ( SelfUserGame )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, this->fields.genderType == 2, 0);
        return;
      }
LABEL_16:
      sub_1C71608(SelfUserGame, v4);
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
    SelfUserGame = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20373/*"img_LeaderIcon{0:D2}"*/, v10, 0);
    if ( !circleProgressCtrl )
      goto LABEL_16;
    EventInfoUIBase__SetSpriteByLocalAtlas(circleProgressCtrl, leaderIconSprite, (System_String_o *)SelfUserGame, 0);
  }
}


void EventInfoCircleProgressDrawComponent__Update(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t klass_high; // w8
  UnityEngine_Component_o *leaderIconSprite2; // x0

  if ( this->fields.isExtraCircle )
  {
    SelfUserGame = (UnityEngine_Component_o *)UserGameMaster__getSelfUserGame(0);
    if ( !SelfUserGame )
      goto LABEL_10;
    klass_high = HIDWORD(SelfUserGame[3].klass);
    if ( this->fields.genderType != klass_high )
    {
      SelfUserGame = (UnityEngine_Component_o *)this->fields.leaderIconSprite;
      this->fields.genderType = klass_high;
      if ( !SelfUserGame )
        goto LABEL_10;
      SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(SelfUserGame, 0);
      if ( !SelfUserGame )
        goto LABEL_10;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, this->fields.genderType == 1, 0);
      leaderIconSprite2 = (UnityEngine_Component_o *)this->fields.leaderIconSprite2;
      if ( leaderIconSprite2 )
      {
        SelfUserGame = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(leaderIconSprite2, 0);
        if ( SelfUserGame )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, this->fields.genderType == 2, 0);
          return;
        }
LABEL_10:
        sub_1C71608(SelfUserGame, v4);
      }
    }
  }
}


UISprite_o *EventInfoCircleProgressDrawComponent__get_BgSprite(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bgSprite;
}


UISprite_o *EventInfoCircleProgressDrawComponent__get_BuffIconSprite(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.buffIconSprite;
}


int32_t EventInfoCircleProgressDrawComponent__get_MaxLevel(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.maxLevel;
}


int32_t EventInfoCircleProgressDrawComponent__get_MinLevel(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.minLevel;
}


UISprite_o *EventInfoCircleProgressDrawComponent__get_ProgressBarBgSprite(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.progressBarBgSprite;
}


UISprite_o *EventInfoCircleProgressDrawComponent__get_ProgressBarSprite(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.progressBarSprite;
}


void EventInfoCircleProgressDrawComponent_ImageInfo___ctor(
        EventInfoCircleProgressDrawComponent_ImageInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___ctor(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___PlayProgressBarAnim_b__0(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_Component_o *progressBarSprite; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct EventInfoCircleProgressDrawComponent_o *v21; // x8
  EasingObject_o *v22; // x21
  float progressBarAnimDuration; // s8
  System_Action_o *v24; // x22
  System_Action_o *_9__2; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4CC77E4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C713B0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__);
    sub_1C713B0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__);
    sub_1C713B0(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo);
    byte_4CC77E4 = 1;
  }
  v3 = sub_1C715FC(EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_11;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  progressBarSprite = (UnityEngine_Component_o *)_4__this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(progressBarSprite, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31A49B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v3 + 16) = Component_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Component_object, v15, v16, v17, v18, v19, v20);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_11;
  v22 = *(EasingObject_o **)(v3 + 16);
  progressBarAnimDuration = v21->fields.progressBarAnimDuration;
  v24 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v3,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__,
    0);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v26, v27, v28, v29, v30, v31);
  }
  if ( !v22 )
LABEL_11:
    sub_1C71608(progressBarSprite, v5);
  EasingObject__Play(v22, progressBarAnimDuration, v24, _9__2, 0.0, 0, 0);
}


void EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___PlayProgressBarAnim_b__2(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C71608(this, method);
  EventInfoCircleProgressDrawComponent__PlayLevelUpAnim(this->fields.__4__this, this->fields.endAction, v2);
}


void EventInfoCircleProgressDrawComponent___c__DisplayClass38_1___ctor(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressDrawComponent___c__DisplayClass38_1___PlayProgressBarAnim_b__1(
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
    || (easingObj = this->fields.easingObj) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (this = (EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_o *)_4__this->fields.progressBarSprite) == 0 )
  {
    sub_1C71608(this, method);
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
    0);
}


void EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___ctor(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___PlayCompleteAnim_b__0(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8
  EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *)_4__this->fields.progressBarCompleteSprite) == 0)
    || (this = (EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0)) == 0 )
  {
    sub_1C71608(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  ActionExtensions__Call(v3->fields.endAction, 0);
}


void EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___PlayCompleteAnim_b__1(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0

  if ( (byte_4CC77E5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17204/*"bit_circlemeter_comptext"*/);
    byte_4CC77E5 = 1;
  }
  anim = this->fields.anim;
  if ( !anim )
    sub_1C71608(0, method);
  UnityEngine_Animation__Play_71468084(anim, (System_String_o *)StringLiteral_17204/*"bit_circlemeter_comptext"*/, 0);
}