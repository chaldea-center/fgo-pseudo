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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *completedAnimPrefab; // x22
  struct UnityEngine_GameObject_o *v21; // x22
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  srcLineSprite_o *v31; // x22
  System_Action_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Action_o *v39; // x20
  System_Collections_IEnumerator_o *v40; // x1

  if ( (byte_438C1C4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__);
    sub_B775C4(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__);
    sub_B775C4(&EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo);
    byte_438C1C4 = 1;
  }
  v5 = sub_B77694(EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo);
  EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___ctor(
    (EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endAction;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)endAction, v14, v15, v16, v17, v18, v19);
  completedAnimPrefab = (UnityEngine_Object_o *)this->fields.completedAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(completedAnimPrefab, 0LL, 0LL) )
    goto LABEL_18;
  v21 = this->fields.completedAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  progressBarCompleteSprite = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)v21,
                                                           (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_23;
  v22 = (UnityEngine_GameObject_o *)progressBarCompleteSprite;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_32813688(v22, gameObject, 0LL);
  if ( !v22 )
    goto LABEL_23;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v22,
                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  *(_QWORD *)(v5 + 32) = Component_srcLineSprite;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), Component_srcLineSprite, v25, v26, v27, v28, v29, v30);
  if ( UnityEngine_Object__op_Equality(*(UnityEngine_Object_o **)(v5 + 32), 0LL, 0LL) )
    goto LABEL_18;
  v31 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v22,
          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v31, 0LL, 0LL) )
  {
LABEL_18:
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
LABEL_23:
    sub_B7769C(progressBarCompleteSprite, v7);
  }
  v32 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__,
    0LL);
  if ( !v31 )
    goto LABEL_23;
  *(_QWORD *)&v31->fields.mtIsUpdate = v32;
  sub_B77560(
    (BattleServantConfConponent_o *)&v31->fields.mtIsUpdate,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v39 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__,
    0LL);
  v40 = BasicHelper__DelayCall(0.066, v39, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v40, 0LL);
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
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  int32_t Level; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438C1C3 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8532/*"LEVEL_INFO"*/);
    byte_438C1C3 = 1;
  }
  if ( this->fields.progressData )
  {
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8532/*"LEVEL_INFO"*/, 0LL);
    progressData = this->fields.progressData;
    if ( !progressData
      || (v10 = v6,
          Level = progressData->fields.Level,
          v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Level, v8),
          v6 = System_String__Format(v10, v11, 0LL),
          !buffLevelLabel) )
    {
      sub_B7769C(v6, v7);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UISprite_o *progressBarSprite; // x8
  float mFillAmount; // s0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  float v23; // s1
  struct UnityEngine_GameObject_o *progressBarAnimPrefab; // x21
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v27; // x21
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_IEnumerator_o *v35; // x1

  if ( (byte_438C1C2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__);
    sub_B775C4(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo);
    byte_438C1C2 = 1;
  }
  v5 = sub_B77694(EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo);
  EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___ctor(
    (EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_17;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = endAction;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)endAction, v14, v15, v16, v17, v18, v19);
  progressBarSprite = this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_17;
  mFillAmount = progressBarSprite->fields.mFillAmount;
  *(float *)(v5 + 24) = mFillAmount;
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_17;
  v23 = (float)(progressData->fields.Level - this->fields.minLevel)
      / (float)(this->fields.maxLevel - this->fields.minLevel);
  *(float *)(v5 + 28) = v23;
  if ( mFillAmount == v23 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 32), 0LL);
    return;
  }
  progressBarAnimPrefab = this->fields.progressBarAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
         (UnityEngine_UI_Dropdown_DropdownItem_o *)progressBarAnimPrefab,
         (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_17;
  v25 = (UnityEngine_GameObject_o *)v6;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_32813688(v25, gameObject, 0LL);
  v27 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__,
    0LL);
  if ( !v25 )
    goto LABEL_17;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v25,
                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v6 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)Component_srcLineSprite,
                                                   0LL,
                                                   0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v35 = BasicHelper__DelayCall(0.7, v27, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v35, 0LL);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_17:
    sub_B7769C(v6, v7);
  *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v27;
  sub_B77560(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
    sub_B7769C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCircleProgressDrawComponent__Setup(
        EventInfoCircleProgressDrawComponent_o *this,
        EventInfoCircleProgressControl_o *circleProgressCtrl,
        EventInfoCircleProgressControl_ProgressData_o *progressData,
        bool isExtraCircle,
        bool isInitCompleted,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  UILabel_o *nameLabel; // x0
  struct EventPointBuffEntity_o *EventPointBuffEnt; // x8
  System_String_o **v22; // x8
  UILabel_o *buffLevelLabel; // x23
  System_String_o *v24; // x24
  __int64 v25; // x2
  Il2CppObject *v26; // x0
  __int64 v27; // x2
  struct EventPointBuffEntity_o *v28; // x8
  UISprite_o *buffIconSprite; // x23
  Il2CppObject *v30; // x0
  struct EventInfoCircleProgressDrawComponent_ImageInfo_array *imageInfoList; // x24
  __int64 v32; // x8
  unsigned __int64 v33; // x25
  EventInfoCircleProgressDrawComponent_ImageInfo_o *v34; // x28
  UnityEngine_Object_o *Sprite; // x23
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct UnityEngine_GameObject_o *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0
  int v51; // [xsp+8h] [xbp-58h] BYREF
  int32_t OldLevel; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_438C1C0 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_8532/*"LEVEL_INFO"*/);
    sub_B775C4(&StringLiteral_17074/*"bit_circlemeter_gain"*/);
    sub_B775C4(&StringLiteral_17458/*"bufficon_{0:D2}"*/);
    sub_B775C4(&StringLiteral_17073/*"bit_circlemeter_comptext"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C1C0 = 1;
  }
  this->fields.circleProgressCtrl = circleProgressCtrl;
  this->fields.isExtraCircle = isExtraCircle;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.circleProgressCtrl,
    (System_Int32_array **)circleProgressCtrl,
    (System_String_array **)progressData,
    (System_String_array **)isExtraCircle,
    (System_Boolean_array **)isInitCompleted,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( progressData )
  {
    this->fields.progressData = progressData;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.progressData,
      (System_Int32_array **)progressData,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_35;
    EventPointBuffEnt = progressData->fields.EventPointBuffEnt;
    v22 = EventPointBuffEnt ? &EventPointBuffEnt->fields.name : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text(nameLabel, *v22, 0LL);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_35;
    UILabel__SetCondensedScale(nameLabel, this->fields.nameLabelMaxWidth, 0LL);
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_8532/*"LEVEL_INFO"*/, 0LL);
    OldLevel = progressData->fields.OldLevel;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OldLevel, v25);
    nameLabel = (UILabel_o *)System_String__Format(v24, v26, 0LL);
    if ( !buffLevelLabel )
      goto LABEL_35;
    UILabel__set_text(buffLevelLabel, (System_String_o *)nameLabel, 0LL);
    v28 = progressData->fields.EventPointBuffEnt;
    if ( v28 )
      LODWORD(v28) = v28->fields.skillIconId;
    buffIconSprite = this->fields.buffIconSprite;
    v51 = (int)v28;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v27);
    nameLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_17458/*"bufficon_{0:D2}"*/, v30, 0LL);
    if ( !circleProgressCtrl )
      goto LABEL_35;
    EventInfoCircleProgressControl__SetSprite(circleProgressCtrl, buffIconSprite, (System_String_o *)nameLabel, 0LL);
    imageInfoList = this->fields.imageInfoList;
    if ( !imageInfoList )
      goto LABEL_35;
    v32 = *(_QWORD *)&imageInfoList->max_length;
    if ( (int)v32 >= 1 )
    {
      v33 = 0LL;
      do
      {
        if ( v33 >= (unsigned int)v32 )
        {
          v50 = sub_B776C8(nameLabel);
          sub_B77668(v50, 0LL);
        }
        v34 = imageInfoList->m_Items[v33];
        if ( v34 )
        {
          Sprite = (UnityEngine_Object_o *)v34->fields.Sprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          nameLabel = (UILabel_o *)UnityEngine_Object__op_Equality(Sprite, 0LL, 0LL);
          if ( ((unsigned __int8)nameLabel & 1) == 0 )
            EventInfoCircleProgressControl__SetSprite(
              circleProgressCtrl,
              v34->fields.Sprite,
              v34->fields.SpriteName,
              0LL);
        }
        LODWORD(v32) = imageInfoList->max_length;
        ++v33;
      }
      while ( (__int64)v33 < (int)v32 );
    }
    EventInfoCircleProgressDrawComponent__SetupLeaderIcon(this, v19);
    nameLabel = (UILabel_o *)this->fields.progressBarCompleteSprite;
    if ( !nameLabel )
      goto LABEL_35;
    nameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nameLabel, 0LL);
    if ( !nameLabel )
      goto LABEL_35;
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
                                             (System_String_o *)StringLiteral_17074/*"bit_circlemeter_gain"*/,
                                             0LL),
          this->fields.progressBarAnimPrefab = GameObjectFromEventUIAssetData,
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.progressBarAnimPrefab,
            (System_Int32_array **)GameObjectFromEventUIAssetData,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42),
          (nameLabel = (UILabel_o *)this->fields.circleProgressCtrl) == 0LL) )
    {
LABEL_35:
      sub_B7769C(nameLabel, v19);
    }
    v43 = EventInfoUIBase__GetGameObjectFromEventUIAssetData(
            (EventInfoUIBase_o *)nameLabel,
            (System_String_o *)StringLiteral_17073/*"bit_circlemeter_comptext"*/,
            0LL);
    this->fields.completedAnimPrefab = v43;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.completedAnimPrefab,
      (System_Int32_array **)v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
}


void __fastcall EventInfoCircleProgressDrawComponent__SetupLeaderIcon(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v5; // x1
  int32_t klass_high; // w8
  UnityEngine_Component_o *leaderIconSprite2; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  EventInfoCircleProgressControl_o *circleProgressCtrl; // x20
  UISprite_o *leaderIconSprite; // x19
  Il2CppObject *v11; // x0
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438C1C1 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_19815/*"img_LeaderIcon{0:D2}"*/);
    byte_438C1C1 = 1;
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
      sub_B7769C(SelfUserGame, v5);
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
    circleProgressCtrl = this->fields.circleProgressCtrl;
    leaderIconSprite = this->fields.leaderIconSprite;
    v12 = (int)progressData;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v2);
    SelfUserGame = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_19815/*"img_LeaderIcon{0:D2}"*/, v11, 0LL);
    if ( !circleProgressCtrl )
      goto LABEL_16;
    EventInfoCircleProgressControl__SetSprite(
      circleProgressCtrl,
      leaderIconSprite,
      (System_String_o *)SelfUserGame,
      0LL);
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
        sub_B7769C(SelfUserGame, v4);
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
  Il2CppObject *v3; // x20
  UnityEngine_Component_o *progressBarSprite; // x0
  __int64 v5; // x1
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventInfoCircleProgressDrawComponent_o *v8; // x8
  EasingObject_o *klass; // x21
  float progressBarAnimDuration; // s8
  System_Action_o *v11; // x22
  System_Action_o *_9__2; // x20

  if ( (byte_4388654 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B775C4(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__);
    sub_B775C4(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__);
    sub_B775C4(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo);
    byte_4388654 = 1;
  }
  v3 = (Il2CppObject *)sub_B77694(EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_11;
  v3[1].monitor = this;
  sub_B77560(&v3[1].monitor);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  progressBarSprite = (UnityEngine_Component_o *)_4__this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(progressBarSprite, 0LL);
  v3[1].klass = (Il2CppClass *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                 gameObject,
                                 (const MethodInfo_1DECD48 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B77560(&v3[1]);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_11;
  klass = (EasingObject_o *)v3[1].klass;
  progressBarAnimDuration = v8->fields.progressBarAnimDuration;
  v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    v3,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__,
    0LL);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B77560(&this->fields.__9__2);
  }
  if ( !klass )
LABEL_11:
    sub_B7769C(progressBarSprite, v5);
  EasingObject__Play(klass, progressBarAnimDuration, v11, _9__2, 0.0, 0, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___PlayProgressBarAnim_b__2(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressDrawComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  EventInfoCircleProgressDrawComponent__PlayLevelUpAnim(_4__this, this->fields.endAction, 0LL);
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
  EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_o *v4; // x19
  float v5; // s0
  struct EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *v6; // x8
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (easingObj = this->fields.easingObj, v4 = this, !easingObj)
    || (v5 = UnityEngine_Mathf__Lerp(
               CS___8__locals1->fields.from,
               CS___8__locals1->fields.to,
               easingObj->fields.mStartTime,
               0LL),
        (v6 = v4->fields.CS___8__locals1) == 0LL)
    || (_4__this = v6->fields.__4__this) == 0LL
    || (this = (EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_o *)_4__this->fields.progressBarSprite) == 0LL )
  {
    sub_B7769C(this, method);
  }
  UIBasicSprite__set_fillAmount((UIBasicSprite_o *)this, v5, 0LL);
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
    sub_B7769C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  ActionExtensions__Call(v3->fields.endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___PlayCompleteAnim_b__1(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0

  if ( (byte_4388655 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17073/*"bit_circlemeter_comptext"*/);
    byte_4388655 = 1;
  }
  anim = this->fields.anim;
  if ( !anim )
    sub_B7769C(0LL, method);
  UnityEngine_Animation__Play_51745976(anim, (System_String_o *)StringLiteral_17073/*"bit_circlemeter_comptext"*/, 0LL);
}