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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *completedAnimPrefab; // x22
  struct UnityEngine_GameObject_o *v28; // x22
  UnityEngine_UI_Dropdown_DropdownItem_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  srcLineSprite_o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  UnityEngine_Component_o *progressBarCompleteSprite; // x0
  UnityEngine_GameObject_o *v45; // x0
  System_Action_o *v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *v57; // x20
  System_Collections_IEnumerator_o *v58; // x1

  if ( (byte_40FA0DD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAction);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__, v11);
    sub_B16FFC(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__, v12);
    sub_B16FFC(&EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo, v13);
    byte_40FA0DD = 1;
  }
  v14 = sub_B170CC(EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo, endAction, method, v3, v4);
  EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___ctor(
    (EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_23;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)endAction, v21, v22, v23, v24, v25, v26);
  completedAnimPrefab = (UnityEngine_Object_o *)this->fields.completedAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(completedAnimPrefab, 0LL, 0LL) )
    goto LABEL_18;
  v28 = this->fields.completedAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v29 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
          (UnityEngine_UI_Dropdown_DropdownItem_o *)v28,
          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_23;
  v30 = (UnityEngine_GameObject_o *)v29;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_27425996(v30, gameObject, 0LL);
  if ( !v30 )
    goto LABEL_23;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v30,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  *(_QWORD *)(v14 + 32) = Component_srcLineSprite;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 32), Component_srcLineSprite, v33, v34, v35, v36, v37, v38);
  if ( UnityEngine_Object__op_Equality(*(UnityEngine_Object_o **)(v14 + 32), 0LL, 0LL) )
    goto LABEL_18;
  v39 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v30,
          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v39, 0LL, 0LL) )
  {
LABEL_18:
    progressBarCompleteSprite = (UnityEngine_Component_o *)this->fields.progressBarCompleteSprite;
    if ( progressBarCompleteSprite )
    {
      v45 = UnityEngine_Component__get_gameObject(progressBarCompleteSprite, 0LL);
      if ( v45 )
      {
        UnityEngine_GameObject__SetActive(v45, 1, 0LL);
        ActionExtensions__Call(*(System_Action_o **)(v14 + 24), 0LL);
        return;
      }
    }
LABEL_23:
    sub_B170D4();
  }
  v46 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
  System_Action___ctor(
    v46,
    (Il2CppObject *)v14,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__,
    0LL);
  if ( !v39 )
    goto LABEL_23;
  *(_QWORD *)&v39->fields.mtIsUpdate = v46;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v39->fields.mtIsUpdate,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v57 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
  System_Action___ctor(
    v57,
    (Il2CppObject *)v14,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__,
    0LL);
  v58 = BasicHelper__DelayCall(0.066, v57, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v58, 0LL);
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
  System_String_o *v12; // x0
  int32_t Level; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FA0DC & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, endAction);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8348, v6);
    byte_40FA0DC = 1;
  }
  if ( this->fields.progressData )
  {
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8348, 0LL);
    progressData = this->fields.progressData;
    if ( !progressData
      || (v10 = v8,
          Level = progressData->fields.Level,
          v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Level),
          v12 = System_String__Format(v10, v11, 0LL),
          !buffLevelLabel) )
    {
      sub_B170D4();
    }
    UILabel__set_text(buffLevelLabel, v12, 0LL);
  }
  ActionExtensions__Call(endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UISprite_o *progressBarSprite; // x8
  float mFillAmount; // s0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  float v28; // s1
  struct UnityEngine_GameObject_o *progressBarAnimPrefab; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_Action_o *v37; // x21
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_IEnumerator_o *v45; // x1

  if ( (byte_40FA0DB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAction);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__, v10);
    sub_B16FFC(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo, v11);
    byte_40FA0DB = 1;
  }
  v12 = sub_B170CC(EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo, endAction, method, v3, v4);
  EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___ctor(
    (EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *)v12,
    0LL);
  if ( !v12 )
    goto LABEL_17;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 32) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)endAction, v19, v20, v21, v22, v23, v24);
  progressBarSprite = this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_17;
  mFillAmount = progressBarSprite->fields.mFillAmount;
  *(float *)(v12 + 24) = mFillAmount;
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_17;
  v28 = (float)(progressData->fields.Level - this->fields.minLevel)
      / (float)(this->fields.maxLevel - this->fields.minLevel);
  *(float *)(v12 + 28) = v28;
  if ( mFillAmount == v28 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v12 + 32), 0LL);
    return;
  }
  progressBarAnimPrefab = this->fields.progressBarAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v30 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
          (UnityEngine_UI_Dropdown_DropdownItem_o *)progressBarAnimPrefab,
          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_17;
  v31 = (UnityEngine_GameObject_o *)v30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_27425996(v31, gameObject, 0LL);
  v37 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v33, v34, v35, v36);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v12,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__,
    0LL);
  if ( !v31 )
    goto LABEL_17;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v31,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    v45 = BasicHelper__DelayCall(0.7, v37, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v45, 0LL);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_17:
    sub_B170D4();
  *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v37;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
    (System_Int32_array **)v37,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
}


void __fastcall EventInfoCircleProgressDrawComponent__SetActive(
        EventInfoCircleProgressDrawComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UILabel_o *nameLabel; // x0
  struct EventPointBuffEntity_o *EventPointBuffEnt; // x8
  System_String_o **v28; // x8
  UILabel_o *v29; // x0
  UILabel_o *buffLevelLabel; // x23
  System_String_o *v31; // x24
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  struct EventPointBuffEntity_o *v34; // x8
  UISprite_o *buffIconSprite; // x23
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  _BOOL8 v38; // x0
  const MethodInfo *v39; // x1
  __int64 v40; // x2
  struct EventInfoCircleProgressDrawComponent_ImageInfo_array *imageInfoList; // x24
  __int64 v42; // x8
  unsigned __int64 v43; // x25
  EventInfoCircleProgressDrawComponent_ImageInfo_o *v44; // x28
  UnityEngine_Object_o *Sprite; // x23
  UnityEngine_Component_o *progressBarCompleteSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIBasicSprite_o *progressBarSprite; // x0
  EventInfoUIBase_o *v49; // x0
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  EventInfoUIBase_o *v57; // x0
  struct UnityEngine_GameObject_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int v65; // [xsp+8h] [xbp-58h] BYREF
  int32_t OldLevel; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FA0D9 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, circleProgressCtrl);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_8348, v15);
    sub_B16FFC(&StringLiteral_16678, v16);
    sub_B16FFC(&StringLiteral_17052, v17);
    sub_B16FFC(&StringLiteral_16677, v18);
    sub_B16FFC(&StringLiteral_1, v19);
    byte_40FA0D9 = 1;
  }
  this->fields.circleProgressCtrl = circleProgressCtrl;
  this->fields.isExtraCircle = isExtraCircle;
  sub_B16F98(
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.progressData,
      (System_Int32_array **)progressData,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_35;
    EventPointBuffEnt = progressData->fields.EventPointBuffEnt;
    v28 = EventPointBuffEnt ? &EventPointBuffEnt->fields.name : (System_String_o **)&StringLiteral_1;
    UILabel__set_text(nameLabel, *v28, 0LL);
    v29 = this->fields.nameLabel;
    if ( !v29 )
      goto LABEL_35;
    UILabel__SetCondensedScale(v29, this->fields.nameLabelMaxWidth, 0LL);
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8348, 0LL);
    OldLevel = progressData->fields.OldLevel;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OldLevel);
    v33 = System_String__Format(v31, v32, 0LL);
    if ( !buffLevelLabel )
      goto LABEL_35;
    UILabel__set_text(buffLevelLabel, v33, 0LL);
    v34 = progressData->fields.EventPointBuffEnt;
    if ( v34 )
      LODWORD(v34) = v34->fields.skillIconId;
    buffIconSprite = this->fields.buffIconSprite;
    v65 = (int)v34;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
    v37 = System_String__Format((System_String_o *)StringLiteral_17052, v36, 0LL);
    if ( !circleProgressCtrl )
      goto LABEL_35;
    EventInfoCircleProgressControl__SetSprite(circleProgressCtrl, buffIconSprite, v37, 0LL);
    imageInfoList = this->fields.imageInfoList;
    if ( !imageInfoList )
      goto LABEL_35;
    v42 = *(_QWORD *)&imageInfoList->max_length;
    if ( (int)v42 >= 1 )
    {
      v43 = 0LL;
      do
      {
        if ( v43 >= (unsigned int)v42 )
        {
          sub_B17100(v38, v39, v40);
          sub_B170A0();
        }
        v44 = imageInfoList->m_Items[v43];
        if ( v44 )
        {
          Sprite = (UnityEngine_Object_o *)v44->fields.Sprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v38 = UnityEngine_Object__op_Equality(Sprite, 0LL, 0LL);
          if ( !v38 )
            EventInfoCircleProgressControl__SetSprite(
              circleProgressCtrl,
              v44->fields.Sprite,
              v44->fields.SpriteName,
              0LL);
        }
        LODWORD(v42) = imageInfoList->max_length;
        ++v43;
      }
      while ( (__int64)v43 < (int)v42 );
    }
    EventInfoCircleProgressDrawComponent__SetupLeaderIcon(this, v39);
    progressBarCompleteSprite = (UnityEngine_Component_o *)this->fields.progressBarCompleteSprite;
    if ( !progressBarCompleteSprite )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject(progressBarCompleteSprite, 0LL);
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive(gameObject, isInitCompleted, 0LL);
    progressBarSprite = (UIBasicSprite_o *)this->fields.progressBarSprite;
    if ( !progressBarSprite
      || (UIBasicSprite__set_fillAmount(
            progressBarSprite,
            (float)(progressData->fields.OldLevel - this->fields.minLevel)
          / (float)(this->fields.maxLevel - this->fields.minLevel),
            0LL),
          (v49 = (EventInfoUIBase_o *)this->fields.circleProgressCtrl) == 0LL)
      || (GameObjectFromEventUIAssetData = EventInfoUIBase__GetGameObjectFromEventUIAssetData(
                                             v49,
                                             (System_String_o *)StringLiteral_16678,
                                             0LL),
          this->fields.progressBarAnimPrefab = GameObjectFromEventUIAssetData,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.progressBarAnimPrefab,
            (System_Int32_array **)GameObjectFromEventUIAssetData,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56),
          (v57 = (EventInfoUIBase_o *)this->fields.circleProgressCtrl) == 0LL) )
    {
LABEL_35:
      sub_B170D4();
    }
    v58 = EventInfoUIBase__GetGameObjectFromEventUIAssetData(v57, (System_String_o *)StringLiteral_16677, 0LL);
    this->fields.completedAnimPrefab = v58;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.completedAnimPrefab,
      (System_Int32_array **)v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
}


void __fastcall EventInfoCircleProgressDrawComponent__SetupLeaderIcon(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int32_t genderType; // w8
  UnityEngine_Component_o *leaderIconSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *leaderIconSprite2; // x0
  UnityEngine_GameObject_o *v9; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  EventInfoCircleProgressControl_o *circleProgressCtrl; // x20
  UISprite_o *v12; // x19
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FA0DA & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_19347, v3);
    byte_40FA0DA = 1;
  }
  if ( this->fields.isExtraCircle )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_16;
    genderType = SelfUserGame->fields.genderType;
    leaderIconSprite = (UnityEngine_Component_o *)this->fields.leaderIconSprite;
    this->fields.genderType = genderType;
    if ( !leaderIconSprite )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(leaderIconSprite, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, this->fields.genderType == 1, 0LL);
    leaderIconSprite2 = (UnityEngine_Component_o *)this->fields.leaderIconSprite2;
    if ( leaderIconSprite2 )
    {
      v9 = UnityEngine_Component__get_gameObject(leaderIconSprite2, 0LL);
      if ( v9 )
      {
        UnityEngine_GameObject__SetActive(v9, this->fields.genderType == 2, 0LL);
        return;
      }
LABEL_16:
      sub_B170D4();
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
    v12 = this->fields.leaderIconSprite;
    v15 = (int)progressData;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v14 = System_String__Format((System_String_o *)StringLiteral_19347, v13, 0LL);
    if ( !circleProgressCtrl )
      goto LABEL_16;
    EventInfoCircleProgressControl__SetSprite(circleProgressCtrl, v12, v14, 0LL);
  }
}


void __fastcall EventInfoCircleProgressDrawComponent__Update(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  int32_t genderType; // w8
  UnityEngine_Component_o *leaderIconSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *leaderIconSprite2; // x0
  UnityEngine_GameObject_o *v8; // x0

  if ( this->fields.isExtraCircle )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_10;
    genderType = SelfUserGame->fields.genderType;
    if ( this->fields.genderType != genderType )
    {
      leaderIconSprite = (UnityEngine_Component_o *)this->fields.leaderIconSprite;
      this->fields.genderType = genderType;
      if ( !leaderIconSprite )
        goto LABEL_10;
      gameObject = UnityEngine_Component__get_gameObject(leaderIconSprite, 0LL);
      if ( !gameObject )
        goto LABEL_10;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.genderType == 1, 0LL);
      leaderIconSprite2 = (UnityEngine_Component_o *)this->fields.leaderIconSprite2;
      if ( leaderIconSprite2 )
      {
        v8 = UnityEngine_Component__get_gameObject(leaderIconSprite2, 0LL);
        if ( v8 )
        {
          UnityEngine_GameObject__SetActive(v8, this->fields.genderType == 2, 0LL);
          return;
        }
LABEL_10:
        sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8
  UnityEngine_Component_o *progressBarSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct EventInfoCircleProgressDrawComponent_o *v31; // x8
  EasingObject_o *v32; // x21
  float progressBarAnimDuration; // s8
  System_Action_o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Action_o *_9__2; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_40F6FC2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v6);
    sub_B16FFC(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__, v7);
    sub_B16FFC(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__, v8);
    sub_B16FFC(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo, v9);
    byte_40F6FC2 = 1;
  }
  v10 = sub_B170CC(EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  progressBarSprite = (UnityEngine_Component_o *)_4__this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(progressBarSprite, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v10 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), Component_UIWidget, v21, v22, v23, v24, v25, v26);
  v31 = this->fields.__4__this;
  if ( !v31 )
    goto LABEL_11;
  v32 = *(EasingObject_o **)(v10 + 16);
  progressBarAnimDuration = v31->fields.progressBarAnimDuration;
  v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v10,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__,
    0LL);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  if ( !v32 )
LABEL_11:
    sub_B170D4();
  EasingObject__Play(v32, progressBarAnimDuration, v34, _9__2, 0.0, 0, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___PlayProgressBarAnim_b__2(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressDrawComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
  float v5; // s0
  struct EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *v6; // x8
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8
  UIBasicSprite_o *progressBarSprite; // x0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (easingObj = this->fields.easingObj) == 0LL
    || (v5 = UnityEngine_Mathf__Lerp(
               CS___8__locals1->fields.from,
               CS___8__locals1->fields.to,
               easingObj->fields.mStartTime,
               0LL),
        (v6 = this->fields.CS___8__locals1) == 0LL)
    || (_4__this = v6->fields.__4__this) == 0LL
    || (progressBarSprite = (UIBasicSprite_o *)_4__this->fields.progressBarSprite) == 0LL )
  {
    sub_B170D4();
  }
  UIBasicSprite__set_fillAmount(progressBarSprite, v5, 0LL);
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
  UnityEngine_Component_o *progressBarCompleteSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (progressBarCompleteSprite = (UnityEngine_Component_o *)_4__this->fields.progressBarCompleteSprite) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(progressBarCompleteSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___PlayCompleteAnim_b__1(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0

  if ( (byte_40F6FC3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16677, method);
    byte_40F6FC3 = 1;
  }
  anim = this->fields.anim;
  if ( !anim )
    sub_B170D4();
  UnityEngine_Animation__Play_49744236(anim, (System_String_o *)StringLiteral_16677, 0LL);
}