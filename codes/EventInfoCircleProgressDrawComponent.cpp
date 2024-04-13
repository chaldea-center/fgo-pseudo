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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x21
  UnityEngine_Component_o *progressBarCompleteSprite; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *completedAnimPrefab; // x22
  struct UnityEngine_GameObject_o *v43; // x22
  UnityEngine_GameObject_o *v44; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  srcLineSprite_o *v53; // x22
  System_Action_o *v54; // x20
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Action_o *v61; // x20
  System_Collections_IEnumerator_o *v62; // x1

  if ( (byte_42E948E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(
      &Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__,
      v18,
      v19,
      v20);
    sub_B5D5C4(
      &Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo, v24, v25, v26);
    byte_42E948E = 1;
  }
  v27 = sub_B5D694(EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo);
  EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___ctor(
    (EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_23;
  *(_QWORD *)(v27 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)endAction, v36, v37, v38, v39, v40, v41);
  completedAnimPrefab = (UnityEngine_Object_o *)this->fields.completedAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(completedAnimPrefab, 0LL, 0LL) )
    goto LABEL_18;
  v43 = this->fields.completedAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  progressBarCompleteSprite = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                           (UnityEngine_UI_Dropdown_DropdownItem_o *)v43,
                                                           (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_23;
  v44 = (UnityEngine_GameObject_o *)progressBarCompleteSprite;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_32436524(v44, gameObject, 0LL);
  if ( !v44 )
    goto LABEL_23;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v44,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  *(_QWORD *)(v27 + 32) = Component_srcLineSprite;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 32), Component_srcLineSprite, v47, v48, v49, v50, v51, v52);
  if ( UnityEngine_Object__op_Equality(*(UnityEngine_Object_o **)(v27 + 32), 0LL, 0LL) )
    goto LABEL_18;
  v53 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
          v44,
          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v53, 0LL, 0LL) )
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
        ActionExtensions__Call(*(System_Action_o **)(v27 + 24), 0LL);
        return;
      }
    }
LABEL_23:
    sub_B5D69C(progressBarCompleteSprite, v29);
  }
  v54 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v27,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__,
    0LL);
  if ( !v53 )
    goto LABEL_23;
  *(_QWORD *)&v53->fields.mtIsUpdate = v54;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v53->fields.mtIsUpdate,
    (System_Int32_array **)v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v27,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__,
    0LL);
  v62 = BasicHelper__DelayCall(0.066, v61, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v62, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__PlayLevelUpAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UILabel_o *buffLevelLabel; // x20
  System_String_o *v13; // x0
  __int64 v14; // x1
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v16; // x21
  Il2CppObject *v17; // x0
  int32_t Level; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E948D & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_8461/*"LEVEL_INFO"*/, v9, v10, v11);
    byte_42E948D = 1;
  }
  if ( this->fields.progressData )
  {
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
    progressData = this->fields.progressData;
    if ( !progressData
      || (v16 = v13,
          Level = progressData->fields.Level,
          v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Level),
          v13 = System_String__Format(v16, v17, 0LL),
          !buffLevelLabel) )
    {
      sub_B5D69C(v13, v14);
    }
    UILabel__set_text(buffLevelLabel, v13, 0LL);
  }
  ActionExtensions__Call(endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
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
  __int64 v21; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UISprite_o *progressBarSprite; // x8
  float mFillAmount; // s0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  float v39; // s1
  struct UnityEngine_GameObject_o *progressBarAnimPrefab; // x21
  UnityEngine_GameObject_o *v41; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *v43; // x21
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_IEnumerator_o *v51; // x1

  if ( (byte_42E948C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo, v18, v19, v20);
    byte_42E948C = 1;
  }
  v21 = sub_B5D694(EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo);
  EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___ctor(
    (EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_17;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 32) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)endAction, v30, v31, v32, v33, v34, v35);
  progressBarSprite = this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_17;
  mFillAmount = progressBarSprite->fields.mFillAmount;
  *(float *)(v21 + 24) = mFillAmount;
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_17;
  v39 = (float)(progressData->fields.Level - this->fields.minLevel)
      / (float)(this->fields.maxLevel - this->fields.minLevel);
  *(float *)(v21 + 28) = v39;
  if ( mFillAmount == v39 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v21 + 32), 0LL);
    return;
  }
  progressBarAnimPrefab = this->fields.progressBarAnimPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v22 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
          (UnityEngine_UI_Dropdown_DropdownItem_o *)progressBarAnimPrefab,
          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_17;
  v41 = (UnityEngine_GameObject_o *)v22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_32436524(v41, gameObject, 0LL);
  v43 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v21,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__,
    0LL);
  if ( !v41 )
    goto LABEL_17;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v41,
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v22 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Component_srcLineSprite,
                                                    0LL,
                                                    0LL);
  if ( ((unsigned __int8)v22 & 1) != 0 )
  {
    v51 = BasicHelper__DelayCall(0.7, v43, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v51, 0LL);
    return;
  }
  if ( !Component_srcLineSprite )
LABEL_17:
    sub_B5D69C(v22, v23);
  *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
    (System_Int32_array **)v43,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
    sub_B5D69C(0LL, v5);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  UILabel_o *nameLabel; // x0
  struct EventPointBuffEntity_o *EventPointBuffEnt; // x8
  System_String_o **v43; // x8
  UILabel_o *buffLevelLabel; // x23
  System_String_o *v45; // x24
  Il2CppObject *v46; // x0
  struct EventPointBuffEntity_o *v47; // x8
  UISprite_o *buffIconSprite; // x23
  Il2CppObject *v49; // x0
  struct EventInfoCircleProgressDrawComponent_ImageInfo_array *imageInfoList; // x24
  __int64 v51; // x8
  unsigned __int64 v52; // x25
  EventInfoCircleProgressDrawComponent_ImageInfo_o *v53; // x28
  UnityEngine_Object_o *Sprite; // x23
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct UnityEngine_GameObject_o *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  __int64 v69; // x0
  int v70; // [xsp+8h] [xbp-58h] BYREF
  int32_t OldLevel; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E948A & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)circleProgressCtrl, (_DWORD)progressData, isExtraCircle);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_8461/*"LEVEL_INFO"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_16948/*"bit_circlemeter_gain"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_17328/*"bufficon_{0:D2}"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_16947/*"bit_circlemeter_comptext"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_1/*""*/, v31, v32, v33);
    byte_42E948A = 1;
  }
  this->fields.circleProgressCtrl = circleProgressCtrl;
  this->fields.isExtraCircle = isExtraCircle;
  sub_B5D560(
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.progressData,
      (System_Int32_array **)progressData,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_35;
    EventPointBuffEnt = progressData->fields.EventPointBuffEnt;
    v43 = EventPointBuffEnt ? &EventPointBuffEnt->fields.name : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text(nameLabel, *v43, 0LL);
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
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_8461/*"LEVEL_INFO"*/, 0LL);
    OldLevel = progressData->fields.OldLevel;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OldLevel);
    nameLabel = (UILabel_o *)System_String__Format(v45, v46, 0LL);
    if ( !buffLevelLabel )
      goto LABEL_35;
    UILabel__set_text(buffLevelLabel, (System_String_o *)nameLabel, 0LL);
    v47 = progressData->fields.EventPointBuffEnt;
    if ( v47 )
      LODWORD(v47) = v47->fields.skillIconId;
    buffIconSprite = this->fields.buffIconSprite;
    v70 = (int)v47;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
    nameLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_17328/*"bufficon_{0:D2}"*/, v49, 0LL);
    if ( !circleProgressCtrl )
      goto LABEL_35;
    EventInfoCircleProgressControl__SetSprite(circleProgressCtrl, buffIconSprite, (System_String_o *)nameLabel, 0LL);
    imageInfoList = this->fields.imageInfoList;
    if ( !imageInfoList )
      goto LABEL_35;
    v51 = *(_QWORD *)&imageInfoList->max_length;
    if ( (int)v51 >= 1 )
    {
      v52 = 0LL;
      do
      {
        if ( v52 >= (unsigned int)v51 )
        {
          v69 = sub_B5D6C8(nameLabel);
          sub_B5D668(v69, 0LL);
        }
        v53 = imageInfoList->m_Items[v52];
        if ( v53 )
        {
          Sprite = (UnityEngine_Object_o *)v53->fields.Sprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          nameLabel = (UILabel_o *)UnityEngine_Object__op_Equality(Sprite, 0LL, 0LL);
          if ( ((unsigned __int8)nameLabel & 1) == 0 )
            EventInfoCircleProgressControl__SetSprite(
              circleProgressCtrl,
              v53->fields.Sprite,
              v53->fields.SpriteName,
              0LL);
        }
        LODWORD(v51) = imageInfoList->max_length;
        ++v52;
      }
      while ( (__int64)v52 < (int)v51 );
    }
    EventInfoCircleProgressDrawComponent__SetupLeaderIcon(this, v40);
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
                                             (System_String_o *)StringLiteral_16948/*"bit_circlemeter_gain"*/,
                                             0LL),
          this->fields.progressBarAnimPrefab = GameObjectFromEventUIAssetData,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.progressBarAnimPrefab,
            (System_Int32_array **)GameObjectFromEventUIAssetData,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61),
          (nameLabel = (UILabel_o *)this->fields.circleProgressCtrl) == 0LL) )
    {
LABEL_35:
      sub_B5D69C(nameLabel, v40);
    }
    v62 = EventInfoUIBase__GetGameObjectFromEventUIAssetData(
            (EventInfoUIBase_o *)nameLabel,
            (System_String_o *)StringLiteral_16947/*"bit_circlemeter_comptext"*/,
            0LL);
    this->fields.completedAnimPrefab = v62;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.completedAnimPrefab,
      (System_Int32_array **)v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
  }
}


void __fastcall EventInfoCircleProgressDrawComponent__SetupLeaderIcon(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v9; // x1
  int32_t klass_high; // w8
  UnityEngine_Component_o *leaderIconSprite2; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  EventInfoCircleProgressControl_o *circleProgressCtrl; // x20
  UISprite_o *leaderIconSprite; // x19
  Il2CppObject *v15; // x0
  int v16; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E948B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19666/*"img_LeaderIcon{0:D2}"*/, v5, v6, v7);
    byte_42E948B = 1;
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
      sub_B5D69C(SelfUserGame, v9);
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
    v16 = (int)progressData;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    SelfUserGame = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_19666/*"img_LeaderIcon{0:D2}"*/, v15, 0LL);
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
        sub_B5D69C(SelfUserGame, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  Il2CppObject *v17; // x20
  UnityEngine_Component_o *progressBarSprite; // x0
  __int64 v19; // x1
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventInfoCircleProgressDrawComponent_o *v22; // x8
  EasingObject_o *klass; // x21
  float progressBarAnimDuration; // s8
  System_Action_o *v25; // x22
  System_Action_o *_9__2; // x20

  if ( (byte_42E6528 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5, v6, v7);
    sub_B5D5C4(
      &Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo, v14, v15, v16);
    byte_42E6528 = 1;
  }
  v17 = (Il2CppObject *)sub_B5D694(EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo);
  System_Object___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_11;
  v17[1].monitor = this;
  sub_B5D560(&v17[1].monitor);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  progressBarSprite = (UnityEngine_Component_o *)_4__this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(progressBarSprite, 0LL);
  v17[1].klass = (Il2CppClass *)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                  gameObject,
                                  (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  sub_B5D560(&v17[1]);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_11;
  klass = (EasingObject_o *)v17[1].klass;
  progressBarAnimDuration = v22->fields.progressBarAnimDuration;
  v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    v17,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__,
    0LL);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !klass )
LABEL_11:
    sub_B5D69C(progressBarSprite, v19);
  EasingObject__Play(klass, progressBarAnimDuration, v25, _9__2, 0.0, 0, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___PlayProgressBarAnim_b__2(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  EventInfoCircleProgressDrawComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  ActionExtensions__Call(v3->fields.endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___PlayCompleteAnim_b__1(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Animation_o *anim; // x0

  if ( (byte_42E6529 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16947/*"bit_circlemeter_comptext"*/, (_DWORD)method, v2, v3);
    byte_42E6529 = 1;
  }
  anim = this->fields.anim;
  if ( !anim )
    sub_B5D69C(0LL, method);
  UnityEngine_Animation__Play_51249124(anim, (System_String_o *)StringLiteral_16947/*"bit_circlemeter_comptext"*/, 0LL);
}