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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x21
  UnityEngine_Component_o *progressBarCompleteSprite; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  UnityEngine_Object_o *completedAnimPrefab; // x22
  Il2CppObject *v37; // x22
  UnityEngine_GameObject_o *v38; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  Il2CppObject *v48; // x22
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x20
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  System_Action_o *v61; // x20
  System_Collections_IEnumerator_o *v62; // x1

  if ( (byte_4B16A05 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__, v14, v15);
    sub_1BCA7E0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__, v16, v17);
    sub_1BCA7E0(&EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo, v18, v19);
    byte_4B16A05 = 1;
  }
  v20 = sub_1BCAA2C(EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_TypeInfo, endAction, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_20;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)endAction, v29, v30, v31, v32, v33, v34);
  completedAnimPrefab = (UnityEngine_Object_o *)this->fields.completedAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( UnityEngine_Object__op_Equality(completedAnimPrefab, 0LL, 0LL) )
    goto LABEL_15;
  v37 = (Il2CppObject *)this->fields.completedAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  progressBarCompleteSprite = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object_(
                                                           v37,
                                                           (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_20;
  v38 = (UnityEngine_GameObject_o *)progressBarCompleteSprite;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_34336992(v38, gameObject, 0LL);
  if ( !v38 )
    goto LABEL_20;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v38,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  *(_QWORD *)(v20 + 32) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)Component_object, v41, v42, v43, v44, v45, v46);
  if ( UnityEngine_Object__op_Equality(*(UnityEngine_Object_o **)(v20 + 32), 0LL, 0LL) )
    goto LABEL_15;
  v48 = UnityEngine_GameObject__GetComponent_object_(
          v38,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v48, 0LL, 0LL) )
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
        ActionExtensions__Call(*(System_Action_o **)(v20 + 24), 0LL);
        return;
      }
    }
LABEL_20:
    sub_1BCAA3C(progressBarCompleteSprite, v22);
  }
  v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v49, v50);
  System_Action___ctor(
    v51,
    (Il2CppObject *)v20,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__0__,
    0LL);
  if ( !v48 )
    goto LABEL_20;
  v48[2].monitor = v51;
  sub_1BCA784((PartyOrganizationUtility_o *)&v48[2].monitor, (int64_t)v51, v52, v53, v54, v55, v56, v57);
  v61 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v58, v59, v60);
  System_Action___ctor(
    v61,
    (Il2CppObject *)v20,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass40_0__PlayCompleteAnim_b__1__,
    0LL);
  v62 = BasicHelper__DelayCall(0.066, v61, 1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v62, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__PlayLevelUpAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *buffLevelLabel; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  int32_t Level; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B16A04 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, endAction, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_8362/*"LEVEL_INFO"*/, v7, v8);
    byte_4B16A04 = 1;
  }
  if ( this->fields.progressData )
  {
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, endAction);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
    progressData = this->fields.progressData;
    if ( !progressData
      || (v13 = v10,
          Level = progressData->fields.Level,
          v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &Level),
          v10 = System_String__Format(v13, v14, 0LL),
          !buffLevelLabel) )
    {
      sub_1BCAA3C(v10, v11);
    }
    UILabel__set_text(buffLevelLabel, v10, 0LL);
  }
  ActionExtensions__Call(endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent__PlayProgressBarAnim(
        EventInfoCircleProgressDrawComponent_o *this,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct UISprite_o *progressBarSprite; // x8
  float mFillAmount; // s0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  float v34; // s1
  Il2CppObject *progressBarAnimPrefab; // x21
  UnityEngine_GameObject_o *v36; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x21
  Il2CppObject *Component_object; // x20
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Collections_IEnumerator_o *v49; // x1

  if ( (byte_4B16A03 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, endAction, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__,
      v12,
      v13);
    sub_1BCA7E0(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo, v14, v15);
    byte_4B16A03 = 1;
  }
  v16 = sub_1BCAA2C(EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_TypeInfo, endAction, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_16;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 32) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)endAction, v25, v26, v27, v28, v29, v30);
  progressBarSprite = this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_16;
  mFillAmount = progressBarSprite->fields.mFillAmount;
  *(float *)(v16 + 24) = mFillAmount;
  progressData = this->fields.progressData;
  if ( !progressData )
    goto LABEL_16;
  v34 = (float)(progressData->fields.Level - this->fields.minLevel)
      / (float)(this->fields.maxLevel - this->fields.minLevel);
  *(float *)(v16 + 28) = v34;
  if ( mFillAmount == v34 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v16 + 32), 0LL);
    return;
  }
  progressBarAnimPrefab = (Il2CppObject *)this->fields.progressBarAnimPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  v17 = UnityEngine_Object__Instantiate_object_(
          progressBarAnimPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this->fields.progressBarBgSprite )
    goto LABEL_16;
  v36 = (UnityEngine_GameObject_o *)v17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.progressBarBgSprite, 0LL);
  GameObjectExtensions__SafeSetParent_34336992(v36, gameObject, 0LL);
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v16,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__0__,
    0LL);
  if ( !v36 )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       v36,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
  v17 = (Il2CppObject *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    v49 = BasicHelper__DelayCall(0.7, v41, 1, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v49, 0LL);
    return;
  }
  if ( !Component_object )
LABEL_16:
    sub_1BCAA3C(v17, v18);
  Component_object[2].monitor = v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&Component_object[2].monitor, (int64_t)v41, v43, v44, v45, v46, v47, v48);
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
    sub_1BCAA3C(0LL, v5);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  bool v12; // w23
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int64_t v27; // x2
  char v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x1
  UILabel_o *nameLabel; // x0
  struct EventPointBuffEntity_o *EventPointBuffEnt; // x8
  System_String_o **v36; // x8
  __int64 v37; // x1
  UILabel_o *buffLevelLabel; // x23
  System_String_o *v39; // x24
  Il2CppObject *v40; // x0
  struct EventPointBuffEntity_o *v41; // x8
  UISprite_o *buffIconSprite; // x23
  Il2CppObject *v43; // x0
  struct EventInfoCircleProgressDrawComponent_ImageInfo_array *imageInfoList; // x24
  __int64 v45; // x8
  unsigned __int64 v46; // x25
  EventInfoCircleProgressDrawComponent_ImageInfo_o *v47; // x28
  UnityEngine_Object_o *Sprite; // x23
  struct UnityEngine_GameObject_o *GameObjectFromEventUIAssetData; // x0
  int64_t v50; // x2
  char v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct UnityEngine_GameObject_o *v56; // x0
  int64_t v57; // x2
  char v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int v63; // [xsp+8h] [xbp-58h] BYREF
  int32_t OldLevel; // [xsp+Ch] [xbp-54h] BYREF

  v12 = isExtraCircle;
  if ( (byte_4B16A01 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, circleProgressCtrl, progressData);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_8362/*"LEVEL_INFO"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17385/*"bit_circlemeter_gain"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17818/*"bufficon_{0:D2}"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17384/*"bit_circlemeter_comptext"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v25, v26);
    byte_4B16A01 = 1;
  }
  this->fields.circleProgressCtrl = circleProgressCtrl;
  this->fields.isExtraCircle = v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.circleProgressCtrl,
    (int64_t)circleProgressCtrl,
    (int64_t)progressData,
    isExtraCircle,
    (System_String_o *)isInitCompleted,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( progressData )
  {
    this->fields.progressData = progressData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.progressData,
      (int64_t)progressData,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_33;
    EventPointBuffEnt = progressData->fields.EventPointBuffEnt;
    v36 = EventPointBuffEnt ? &EventPointBuffEnt->fields.name : (System_String_o **)&StringLiteral_1/*""*/;
    UILabel__set_text(nameLabel, *v36, 0LL);
    nameLabel = this->fields.nameLabel;
    if ( !nameLabel )
      goto LABEL_33;
    UILabel__SetCondensedScale(nameLabel, this->fields.nameLabelMaxWidth, 0LL);
    buffLevelLabel = this->fields.buffLevelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LEVEL_INFO"*/, 0LL);
    OldLevel = progressData->fields.OldLevel;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &OldLevel);
    nameLabel = (UILabel_o *)System_String__Format(v39, v40, 0LL);
    if ( !buffLevelLabel )
      goto LABEL_33;
    UILabel__set_text(buffLevelLabel, (System_String_o *)nameLabel, 0LL);
    v41 = progressData->fields.EventPointBuffEnt;
    if ( v41 )
      LODWORD(v41) = v41->fields.skillIconId;
    buffIconSprite = this->fields.buffIconSprite;
    v63 = (int)v41;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
    nameLabel = (UILabel_o *)System_String__Format((System_String_o *)StringLiteral_17818/*"bufficon_{0:D2}"*/, v43, 0LL);
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
    v45 = *(_QWORD *)&imageInfoList->max_length;
    if ( (int)v45 >= 1 )
    {
      v46 = 0LL;
      do
      {
        if ( v46 >= (unsigned int)v45 )
          sub_1BCAA44(nameLabel, v33);
        v47 = imageInfoList->m_Items[v46];
        if ( v47 )
        {
          Sprite = (UnityEngine_Object_o *)v47->fields.Sprite;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
          nameLabel = (UILabel_o *)UnityEngine_Object__op_Equality(Sprite, 0LL, 0LL);
          if ( ((unsigned __int8)nameLabel & 1) == 0 )
            nameLabel = (UILabel_o *)EventInfoUIBase__SetSpriteByLocalAtlas(
                                       (EventInfoUIBase_o *)circleProgressCtrl,
                                       v47->fields.Sprite,
                                       v47->fields.SpriteName,
                                       0LL);
        }
        LODWORD(v45) = imageInfoList->max_length;
        ++v46;
      }
      while ( (__int64)v46 < (int)v45 );
    }
    EventInfoCircleProgressDrawComponent__SetupLeaderIcon(this, v33);
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
                                             (System_String_o *)StringLiteral_17385/*"bit_circlemeter_gain"*/,
                                             0LL),
          this->fields.progressBarAnimPrefab = GameObjectFromEventUIAssetData,
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.progressBarAnimPrefab,
            (int64_t)GameObjectFromEventUIAssetData,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55),
          (nameLabel = (UILabel_o *)this->fields.circleProgressCtrl) == 0LL) )
    {
LABEL_33:
      sub_1BCAA3C(nameLabel, v33);
    }
    v56 = EventInfoUIBase__GetGameObjectFromEventUIAssetData(
            (EventInfoUIBase_o *)nameLabel,
            (System_String_o *)StringLiteral_17384/*"bit_circlemeter_comptext"*/,
            0LL);
    this->fields.completedAnimPrefab = v56;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.completedAnimPrefab,
      (int64_t)v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
}


void __fastcall EventInfoCircleProgressDrawComponent__SetupLeaderIcon(
        EventInfoCircleProgressDrawComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *SelfUserGame; // x0
  __int64 v7; // x1
  int32_t klass_high; // w8
  UnityEngine_Component_o *leaderIconSprite2; // x0
  struct EventInfoCircleProgressControl_ProgressData_o *progressData; // x8
  EventInfoUIBase_o *circleProgressCtrl; // x20
  UISprite_o *leaderIconSprite; // x19
  Il2CppObject *v13; // x0
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B16A02 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_20456/*"img_LeaderIcon{0:D2}"*/, v4, v5);
    byte_4B16A02 = 1;
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
      sub_1BCAA3C(SelfUserGame, v7);
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
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
    SelfUserGame = (UnityEngine_Component_o *)System_String__Format((System_String_o *)StringLiteral_20456/*"img_LeaderIcon{0:D2}"*/, v13, 0LL);
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
        sub_1BCAA3C(SelfUserGame, v4);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  UnityEngine_Component_o *progressBarSprite; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct EventInfoCircleProgressDrawComponent_o *_4__this; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x2
  __int64 v32; // x3
  struct EventInfoCircleProgressDrawComponent_o *v33; // x8
  EasingObject_o *v34; // x21
  float progressBarAnimDuration; // s8
  System_Action_o *v36; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *_9__2; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B16A06 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v5, v6);
    sub_1BCA7E0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__, v7, v8);
    sub_1BCA7E0(&Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__, v9, v10);
    sub_1BCA7E0(&EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo, v11, v12);
    byte_4B16A06 = 1;
  }
  v13 = sub_1BCAA2C(EventInfoCircleProgressDrawComponent___c__DisplayClass38_1_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  progressBarSprite = (UnityEngine_Component_o *)_4__this->fields.progressBarSprite;
  if ( !progressBarSprite )
    goto LABEL_11;
  gameObject = UnityEngine_Component__get_gameObject(progressBarSprite, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)Component_object, v25, v26, v27, v28, v29, v30);
  v33 = this->fields.__4__this;
  if ( !v33 )
    goto LABEL_11;
  v34 = *(EasingObject_o **)(v13 + 16);
  progressBarAnimDuration = v33->fields.progressBarAnimDuration;
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v31, v32);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v13,
    Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_1__PlayProgressBarAnim_b__1__,
    0LL);
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v37, v38);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_EventInfoCircleProgressDrawComponent___c__DisplayClass38_0__PlayProgressBarAnim_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v40, v41, v42, v43, v44, v45);
  }
  if ( !v34 )
LABEL_11:
    sub_1BCAA3C(progressBarSprite, v15);
  EasingObject__Play(v34, progressBarAnimDuration, v36, _9__2, 0.0, 0, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass38_0___PlayProgressBarAnim_b__2(
        EventInfoCircleProgressDrawComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(this, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  ActionExtensions__Call(v3->fields.endAction, 0LL);
}


void __fastcall EventInfoCircleProgressDrawComponent___c__DisplayClass40_0___PlayCompleteAnim_b__1(
        EventInfoCircleProgressDrawComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Animation_o *anim; // x0

  if ( (byte_4B16A07 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17384/*"bit_circlemeter_comptext"*/, method, v2);
    byte_4B16A07 = 1;
  }
  anim = this->fields.anim;
  if ( !anim )
    sub_1BCAA3C(0LL, method);
  UnityEngine_Animation__Play_69899248(anim, (System_String_o *)StringLiteral_17384/*"bit_circlemeter_comptext"*/, 0LL);
}