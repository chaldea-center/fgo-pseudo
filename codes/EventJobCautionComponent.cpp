void EventJobCautionComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventJobCautionComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventJobCautionComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct EventJobCautionComponent_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct EventJobCautionComponent_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct EventJobCautionComponent_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  struct EventJobCautionComponent_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  int32_t v56; // w1
  struct EventJobCautionComponent_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7

  if ( (byte_597306C & 1) == 0 )
  {
    sub_2213A60(&EventJobCautionComponent_TypeInfo);
    sub_2213A60(&StringLiteral_5852/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_SKILL_FORMAT"*/);
    sub_2213A60(&StringLiteral_5845/*"EVENT_JOB_EXPLANATION_DIALOG"*/);
    sub_2213A60(&StringLiteral_5848/*"EVENT_JOB_EXPLANATION_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_5849/*"EVENT_JOB_EXPLANATION_DIALOG_LIMIT"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_5846/*"EVENT_JOB_EXPLANATION_DIALOG_CONFIRM"*/);
    sub_2213A60(&StringLiteral_5847/*"EVENT_JOB_EXPLANATION_DIALOG_COUNT"*/);
    sub_2213A60(&StringLiteral_5853/*"EVENT_JOB_EXPLANATION_DIALOG_TITLE"*/);
    byte_597306C = 1;
  }
  v7 = StringLiteral_5853/*"EVENT_JOB_EXPLANATION_DIALOG_TITLE"*/;
  EventJobCautionComponent_TypeInfo->static_fields->TitleLocalizationKey = (struct System_String_o *)StringLiteral_5853/*"EVENT_JOB_EXPLANATION_DIALOG_TITLE"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventJobCautionComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_5849/*"EVENT_JOB_EXPLANATION_DIALOG_LIMIT"*/;
  static_fields = EventJobCautionComponent_TypeInfo->static_fields;
  static_fields->LimitLocalizationKey = (struct System_String_o *)StringLiteral_5849/*"EVENT_JOB_EXPLANATION_DIALOG_LIMIT"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->LimitLocalizationKey,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_5847/*"EVENT_JOB_EXPLANATION_DIALOG_COUNT"*/;
  v17 = EventJobCautionComponent_TypeInfo->static_fields;
  v17->CountLocalizationKey = (struct System_String_o *)StringLiteral_5847/*"EVENT_JOB_EXPLANATION_DIALOG_COUNT"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->CountLocalizationKey, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_5845/*"EVENT_JOB_EXPLANATION_DIALOG"*/;
  v25 = EventJobCautionComponent_TypeInfo->static_fields;
  v25->ExplanationLocalizationKey = (struct System_String_o *)StringLiteral_5845/*"EVENT_JOB_EXPLANATION_DIALOG"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->ExplanationLocalizationKey, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_5852/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_SKILL_FORMAT"*/;
  v33 = EventJobCautionComponent_TypeInfo->static_fields;
  v33->QuestSkillFormatLocalizationKey = (struct System_String_o *)StringLiteral_5852/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_SKILL_FORMAT"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v33->QuestSkillFormatLocalizationKey,
    v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = StringLiteral_5846/*"EVENT_JOB_EXPLANATION_DIALOG_CONFIRM"*/;
  v41 = EventJobCautionComponent_TypeInfo->static_fields;
  v41->QuestCautionLocalizationKey = (struct System_String_o *)StringLiteral_5846/*"EVENT_JOB_EXPLANATION_DIALOG_CONFIRM"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->QuestCautionLocalizationKey, v40, v42, v43, v44, v45, v46, v47);
  v48 = StringLiteral_5848/*"EVENT_JOB_EXPLANATION_DIALOG_DECIDE"*/;
  v49 = EventJobCautionComponent_TypeInfo->static_fields;
  v49->DecideLocalizationKey = (struct System_String_o *)StringLiteral_5848/*"EVENT_JOB_EXPLANATION_DIALOG_DECIDE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->DecideLocalizationKey, v48, v50, v51, v52, v53, v54, v55);
  v56 = StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/;
  v57 = EventJobCautionComponent_TypeInfo->static_fields;
  v57->CancelLocalizationKey = (struct System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->CancelLocalizationKey, v56, v58, v59, v60, v61, v62, v63);
}


void EventJobCautionComponent___ctor(EventJobCautionComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1

  if ( (byte_597306B & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__TypeInfo);
    byte_597306B = 1;
  }
  v3 = System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__TypeInfo;
  this->fields.questCellHeight = 140;
  this->fields.gridPositionLower = 35.0;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent___ctor__);
  this->fields.questItemList = (struct System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.questItemList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v11);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventJobCautionComponent__ClearQuestListItems(EventJobCautionComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__o *questItemList; // x0
  int32_t v4; // w20
  int32_t size; // w2
  __int64 v6; // x1
  Il2CppObject *Item; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  int v10; // w8

  if ( (byte_5973065 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973065 = 1;
  }
  questItemList = this->fields.questItemList;
  if ( !questItemList )
LABEL_14:
    sub_2213CDC(questItemList, method);
  v4 = 0;
  while ( 1 )
  {
    size = questItemList->fields._size;
    if ( v4 >= size )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)questItemList,
             v4,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__get_Item__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    questItemList = (struct System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
    if ( ((unsigned __int8)questItemList & 1) != 0 )
    {
      if ( !Item )
        goto LABEL_14;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
    }
    questItemList = this->fields.questItemList;
    ++v4;
    if ( !questItemList )
      goto LABEL_14;
  }
  v10 = questItemList->fields._version + 1;
  questItemList->fields._size = 0;
  questItemList->fields._version = v10;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)questItemList->fields._items, 0, size, 0);
}


float EventJobCautionComponent__GetQuestItemCellHeightFromBounds(
        EventJobCautionComponent_o *this,
        UnityEngine_Transform_o *itemTransform,
        const MethodInfo *method)
{
  float result; // s0
  UnityEngine_Bounds_o v6; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5973066 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973066 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemTransform);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)itemTransform, 0, 0) )
    return (float)this->fields.questCellHeight;
  NGUIMath__CalculateRelativeWidgetBounds_56309392(&v6, itemTransform, 0, 0);
  result = v6.fields.m_Extents.fields.y + v6.fields.m_Extents.fields.y;
  if ( (float)(v6.fields.m_Extents.fields.y + v6.fields.m_Extents.fields.y) <= 0.0 )
    return (float)this->fields.questCellHeight;
  return result;
}


void EventJobCautionComponent__Init(EventJobCautionComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIGrid_o *questListGrid; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  BaseDialog__Init((BaseDialog_o *)this, 0);
  questListGrid = this->fields.questListGrid;
  if ( !questListGrid )
    sub_2213CDC(0, v3);
  UIGrid__set_repositionNow(questListGrid, 1, 0);
  this->fields.callback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callback, 0, v5, v6, v7, v8, v9, v10);
}


void EventJobCautionComponent__OnClickCancelButton(EventJobCautionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5973068 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventJobCautionComponent_OnClickCancelButton__);
    sub_2213A60(&Method_EventJobCautionComponent__OnClickCancelButton_b__37_0__);
    byte_5973068 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventJobCautionComponent_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventJobCautionComponent_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventJobCautionComponent_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventJobCautionComponent__OnClickCancelButton_b__37_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventJobCautionComponent__OnClickDecideButton(EventJobCautionComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5973067 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventJobCautionComponent_OnClickDecideButton__);
    sub_2213A60(&Method_EventJobCautionComponent__OnClickDecideButton_b__36_0__);
    byte_5973067 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventJobCautionComponent_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventJobCautionComponent_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventJobCautionComponent_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventJobCautionComponent__OnClickDecideButton_b__36_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventJobCautionComponent__Open(
        EventJobCautionComponent_o *this,
        System_String_o *selectedQuestName,
        int32_t maxTrialCount,
        int32_t remainingTrialCount,
        CommonConfirmDialog_ClickDelegate_o *clickCallback,
        System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__o *questDisplayDataList,
        const MethodInfo *method)
{
  Il2CppObject *v11; // x22
  __int64 v13; // x1
  EventJobCautionComponent_c *v14; // x0
  UILabel_o *titleLabel; // x25
  System_String_o *TitleLocalizationKey; // x26
  System_String_o *v17; // x0
  __int64 v18; // x1
  UILabel_o *jobLimitNumLabel; // x25
  System_String_o *v20; // x26
  Il2CppObject *v21; // x0
  UILabel_o *jobCountLabel; // x24
  System_String_o *v23; // x25
  Il2CppObject *v24; // x0
  UILabel_o *questExplanationLabel; // x23
  System_String_o *v26; // x0
  Il2CppObject *v27; // x1
  __int64 v28; // x1
  EventJobCautionComponent_c *v29; // x0
  UILabel_o *questCautionLabel; // x23
  System_String_o *QuestCautionLocalizationKey; // x24
  System_String_o *v32; // x0
  __int64 v33; // x1
  EventJobCautionComponent_c *v34; // x0
  UILabel_o *decideLabel; // x22
  System_String_o *DecideLocalizationKey; // x23
  UILabel_o *cancelLabel; // x22
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t size; // w8
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x1
  int32_t v47; // [xsp+8h] [xbp-68h] BYREF
  int32_t v48; // [xsp+Ch] [xbp-64h] BYREF

  v11 = (Il2CppObject *)selectedQuestName;
  if ( (byte_5973063 & 1) == 0 )
  {
    sub_2213A60(&EventJobCautionComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__get_Count__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_5973063 = 1;
  }
  EventJobCautionComponent__Init(this, (const MethodInfo *)selectedQuestName);
  v14 = EventJobCautionComponent_TypeInfo;
  titleLabel = this->fields.titleLabel;
  if ( !*(&EventJobCautionComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventJobCautionComponent_TypeInfo, v13);
    v14 = EventJobCautionComponent_TypeInfo;
  }
  TitleLocalizationKey = v14->static_fields->TitleLocalizationKey;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  v17 = LocalizationManager__Get(TitleLocalizationKey, 0);
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, v17, 0);
  jobLimitNumLabel = this->fields.jobLimitNumLabel;
  v20 = LocalizationManager__Get(EventJobCautionComponent_TypeInfo->static_fields->LimitLocalizationKey, 0);
  v48 = maxTrialCount;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v48);
  v17 = System_String__Format(v20, v21, 0);
  if ( !jobLimitNumLabel )
    goto LABEL_28;
  UILabel__set_text(jobLimitNumLabel, v17, 0);
  jobCountLabel = this->fields.jobCountLabel;
  v23 = LocalizationManager__Get(EventJobCautionComponent_TypeInfo->static_fields->CountLocalizationKey, 0);
  v47 = remainingTrialCount;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v47);
  v17 = System_String__Format(v23, v24, 0);
  if ( !jobCountLabel )
    goto LABEL_28;
  UILabel__set_text(jobCountLabel, v17, 0);
  questExplanationLabel = this->fields.questExplanationLabel;
  v26 = LocalizationManager__Get(EventJobCautionComponent_TypeInfo->static_fields->ExplanationLocalizationKey, 0);
  v27 = v11;
  if ( !v11 )
    v27 = **(Il2CppObject ***)(qword_5984390 + 184);
  v17 = System_String__Format(v26, v27, 0);
  if ( !questExplanationLabel )
    goto LABEL_28;
  UILabel__set_text(questExplanationLabel, v17, 0);
  v29 = EventJobCautionComponent_TypeInfo;
  questCautionLabel = this->fields.questCautionLabel;
  if ( !*(&EventJobCautionComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventJobCautionComponent_TypeInfo, v28);
    v29 = EventJobCautionComponent_TypeInfo;
  }
  QuestCautionLocalizationKey = v29->static_fields->QuestCautionLocalizationKey;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  v32 = LocalizationManager__Get(QuestCautionLocalizationKey, 0);
  if ( !v11 )
    v11 = **(Il2CppObject ***)(qword_5984390 + 184);
  v17 = System_String__Format(v32, v11, 0);
  if ( !questCautionLabel )
    goto LABEL_28;
  UILabel__set_text(questCautionLabel, v17, 0);
  v34 = EventJobCautionComponent_TypeInfo;
  decideLabel = this->fields.decideLabel;
  if ( !*(&EventJobCautionComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventJobCautionComponent_TypeInfo, v33);
    v34 = EventJobCautionComponent_TypeInfo;
  }
  DecideLocalizationKey = v34->static_fields->DecideLocalizationKey;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
  v17 = LocalizationManager__Get(DecideLocalizationKey, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, v17, 0),
        cancelLabel = this->fields.cancelLabel,
        v17 = LocalizationManager__Get(EventJobCautionComponent_TypeInfo->static_fields->CancelLocalizationKey, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, v17, 0), !questDisplayDataList) )
  {
LABEL_28:
    sub_2213CDC(v17, v18);
  }
  size = questDisplayDataList->fields._size;
  this->fields.callback = clickCallback;
  this->fields.questCount = size;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callback,
    (int32_t)clickCallback,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
  EventJobCautionComponent__SetupQuestListView(this, questDisplayDataList, v45);
  EventJobCautionComponent__UpdateQuestNameScrollLayout(this, v46);
}


void EventJobCautionComponent__ResetQuestNameScrollPosition(EventJobCautionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *questNameScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *gameObject; // x0
  struct UIScrollView_o *v6; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v8; // x8
  char v9; // w20
  struct UIScrollView_o *v10; // x8

  if ( (byte_5973069 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973069 = 1;
  }
  questNameScrollView = (UnityEngine_Object_o *)this->fields.questNameScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(questNameScrollView, 0, 0) )
  {
    gameObject = this->fields.questNameScrollView;
    if ( !gameObject )
      goto LABEL_22;
    UIScrollView__DisableSpring(gameObject, 0);
    gameObject = this->fields.questNameScrollView;
    if ( !gameObject )
      goto LABEL_22;
    UIScrollView__ResetPosition(gameObject, 0);
    gameObject = this->fields.questNameScrollView;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))gameObject->klass->vtable._8_UpdateScrollbars.methodPtr)(
                                     gameObject,
                                     1,
                                     gameObject->klass->vtable._8_UpdateScrollbars.method);
    v6 = this->fields.questNameScrollView;
    if ( !v6 )
      goto LABEL_22;
    verticalScrollBar = (UnityEngine_Object_o *)v6->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0) )
    {
      gameObject = this->fields.questNameScrollView;
      if ( !gameObject )
        goto LABEL_22;
      gameObject = (UIScrollView_o *)((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))gameObject->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
                                       gameObject,
                                       gameObject->klass->vtable._6_get_shouldMoveVertically.method);
      v8 = this->fields.questNameScrollView;
      if ( !v8 )
        goto LABEL_22;
      v9 = (char)gameObject;
      gameObject = (UIScrollView_o *)v8->fields.verticalScrollBar;
      if ( !gameObject )
        goto LABEL_22;
      gameObject = (UIScrollView_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_22;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v9 & 1, 0);
      if ( (v9 & 1) != 0 )
      {
        v10 = this->fields.questNameScrollView;
        if ( v10 )
        {
          gameObject = (UIScrollView_o *)v10->fields.verticalScrollBar;
          if ( gameObject )
          {
            UIProgressBar__set_value((UIProgressBar_o *)gameObject, 0.0, 0);
            return;
          }
        }
LABEL_22:
        sub_2213CDC(gameObject, v4);
      }
    }
  }
}


void EventJobCautionComponent__SetupQuestListView(
        EventJobCautionComponent_o *this,
        System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__o *questDisplayDataList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *questListGrid; // x21
  bool v6; // w0
  __int64 v7; // x1
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *questItemList; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *freeQuestItemPrefab; // x22
  const MethodInfo *v12; // x1
  float questCellHeight; // s8
  int32_t v14; // w22
  Il2CppObject *v15; // x23
  Il2CppObject *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  intptr_t v26; // x8
  UnityEngine_Component_o *v27; // x24
  UnityEngine_Transform_o *v28; // x0
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *v30; // x20
  Il2CppClass *castClass; // x1
  Il2CppClass *element_class; // x2

  if ( (byte_5973064 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__get_Item__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_EventInfoJobFreeQuestItemComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973064 = 1;
  }
  questListGrid = (UnityEngine_Object_o *)this->fields.questListGrid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questDisplayDataList);
  v6 = UnityEngine_Object__op_Inequality(questListGrid, 0, 0);
  transform = 0;
  if ( v6 )
  {
    questItemList = (UnityEngine_Component_o *)this->fields.questListGrid;
    if ( !questItemList )
      goto LABEL_38;
    transform = UnityEngine_Component__get_transform(questItemList, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)transform, 0, 0) )
  {
    freeQuestItemPrefab = (UnityEngine_Object_o *)this->fields.freeQuestItemPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( !UnityEngine_Object__op_Equality(freeQuestItemPrefab, 0, 0) )
    {
      EventJobCautionComponent__ClearQuestListItems(this, v12);
      if ( questDisplayDataList )
      {
        if ( questDisplayDataList->fields._size >= 1 )
        {
          questCellHeight = (float)this->fields.questCellHeight;
          v14 = 0;
          do
          {
            v15 = (Il2CppObject *)this->fields.freeQuestItemPrefab;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
            v16 = UnityEngine_Object__Instantiate_object__59717228(
                    v15,
                    transform,
                    0,
                    (const MethodInfo_38F366C *)Method_UnityEngine_Object_Instantiate_EventInfoJobFreeQuestItemComponent___);
            if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v16, 0, 0) )
            {
              questItemList = (UnityEngine_Component_o *)this->fields.questItemList;
              if ( !questItemList )
                goto LABEL_38;
              m_CachedPtr = questItemList->fields.m_CachedPtr;
              v24 = Method_System_Collections_Generic_List_EventInfoJobFreeQuestItemComponent__Add__;
              ++HIDWORD(questItemList[1].klass);
              if ( !m_CachedPtr )
                goto LABEL_38;
              klass_low = SLODWORD(questItemList[1].klass);
              if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)questItemList,
                  v16,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = m_CachedPtr + 8 * klass_low;
                LODWORD(questItemList[1].klass) = klass_low + 1;
                *(_QWORD *)(v26 + 32) = v16;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)v16, v17, v18, v19, v20, v21, v22);
              }
              questItemList = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                           (System_Collections_Generic_List_object__o *)questDisplayDataList,
                                                           v14,
                                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventJobCautionComponent_JobFreeQuestDisplayData__get_Item__);
              if ( !v16 )
                goto LABEL_38;
              v27 = questItemList;
              questItemList = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)v16,
                                                           0);
              if ( !questItemList )
                goto LABEL_38;
              UnityEngine_Transform__SetSiblingIndex((UnityEngine_Transform_o *)questItemList, v14, 0);
              questItemList = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)v16,
                                                           0);
              if ( !questItemList )
                goto LABEL_38;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)questItemList, 1, 0);
              if ( !v27 )
                goto LABEL_38;
              EventInfoJobFreeQuestItemComponent__Setup(
                (EventInfoJobFreeQuestItemComponent_o *)v16,
                (System_String_o *)v27->fields.m_CachedPtr,
                (System_String_o *)v27[1].klass,
                (System_Int32_array *)v27[2].klass,
                (int32_t)v27[2].monitor,
                HIDWORD(v27[2].monitor),
                v27[2].fields.m_CachedPtr,
                (System_String_o *)v27[1].monitor,
                v27[1].fields.m_CachedPtr,
                v14 == 0,
                0);
              if ( !v14 )
              {
                v28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v16, 0);
                questCellHeight = EventJobCautionComponent__GetQuestItemCellHeightFromBounds(this, v28, v29);
              }
            }
            ++v14;
          }
          while ( v14 < questDisplayDataList->fields._size );
          v30 = (UnityEngine_Object_o *)this->fields.questListGrid;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
          if ( UnityEngine_Object__op_Inequality(v30, 0, 0) )
          {
            questItemList = (UnityEngine_Component_o *)this->fields.questListGrid;
            if ( questItemList )
            {
              element_class = questItemList->klass[1]._1.element_class;
              castClass = questItemList->klass[1]._1.castClass;
              *((float *)&questItemList[2].klass + 1) = questCellHeight;
              BYTE1(questItemList[2].monitor) = 1;
              LODWORD(questItemList[1].monitor) = 1;
              ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))element_class)(questItemList, castClass);
              return;
            }
LABEL_38:
            sub_2213CDC(questItemList, v7);
          }
        }
      }
    }
  }
}


void EventJobCautionComponent__UpdateQuestNameScrollLayout(EventJobCautionComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *questNameScrollView; // x20
  __int64 v4; // x1
  struct UIScrollView_o *v5; // x0
  UIScrollView_c *klass; // x8
  struct UIScrollView_o *v7; // x20
  const MethodInfo *v8; // x1
  int v9; // w8
  __int64 v10; // x1
  UnityEngine_Object_o *questListPositionSetObject; // x20
  __int64 v12; // x8

  if ( (byte_597306A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597306A = 1;
  }
  questNameScrollView = (UnityEngine_Object_o *)this->fields.questNameScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(questNameScrollView, 0, 0) )
  {
    v5 = this->fields.questNameScrollView;
    if ( !v5
      || (klass = v5->klass,
          v5->fields.contentPivot = 1,
          v5 = (struct UIScrollView_o *)((__int64 (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))klass->vtable._8_UpdateScrollbars.methodPtr)(
                                          v5,
                                          1,
                                          klass->vtable._8_UpdateScrollbars.method),
          (v7 = this->fields.questNameScrollView) == 0) )
    {
      sub_2213CDC(v5, v4);
    }
    if ( (((__int64 (__fastcall *)(struct UIScrollView_o *, const MethodInfo *))v7->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
            this->fields.questNameScrollView,
            v7->klass->vtable._6_get_shouldMoveVertically.method)
        & 1) != 0 )
      v9 = 1;
    else
      v9 = 4;
    v7->fields.contentPivot = v9;
    EventJobCautionComponent__ResetQuestNameScrollPosition(this, v8);
    questListPositionSetObject = (UnityEngine_Object_o *)this->fields.questListPositionSetObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( !UnityEngine_Object__op_Equality(questListPositionSetObject, 0, 0) )
    {
      v12 = 204;
      if ( this->fields.questCount < 3 )
        v12 = 208;
      GameObjectExtensions__SetLocalPositionY(
        this->fields.questListPositionSetObject,
        *(float *)((char *)&this->klass + v12),
        0);
    }
  }
}


void EventJobCautionComponent___OnClickCancelButton_b__37_0(EventJobCautionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  EventJobCautionComponent__ResetQuestNameScrollPosition(this, method);
  EventJobCautionComponent__ClearQuestListItems(this, v3);
  callback = this->fields.callback;
  this->fields.callback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callback, 0, v5, v6, v7, v8, v9, v10);
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}


void EventJobCautionComponent___OnClickDecideButton_b__36_0(EventJobCautionComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  EventJobCautionComponent__ResetQuestNameScrollPosition(this, method);
  EventJobCautionComponent__ClearQuestListItems(this, v3);
  callback = this->fields.callback;
  this->fields.callback = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callback, 0, v5, v6, v7, v8, v9, v10);
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
}


float EventJobCautionComponent__get_QuestItemCellHeight(EventJobCautionComponent_o *this, const MethodInfo *method)
{
  return (float)this->fields.questCellHeight;
}


UnityEngine_GameObject_o *EventJobCautionComponent__get_closeBtnObject(
        EventJobCautionComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_5973062 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973062 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_2213CDC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventJobCautionComponent_JobFreeQuestDisplayData___ctor(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        System_String_o *questName,
        System_String_o *skillName,
        System_String_o *questLevel,
        int32_t maxLevel,
        System_Int32_array *itemIds,
        int32_t bonusType,
        int32_t bonusValue,
        int32_t maxBonusValue,
        const MethodInfo *method)
{
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  long double v45; // q0
  _QWORD *v46; // x22
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  struct System_Int32_array **p_ItemIds_k__BackingField; // x21

  if ( (byte_597306D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    byte_597306D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !questName )
    questName = **(System_String_o ***)(qword_5984390 + 184);
  if ( !this )
    sub_2213CDC(v18, v19);
  this->fields._QuestName_k__BackingField = questName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)questName, v20, v21, v22, v23, v24, v25);
  if ( !skillName )
    skillName = **(System_String_o ***)(qword_5984390 + 184);
  this->fields._SkillName_k__BackingField = skillName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SkillName_k__BackingField,
    (int32_t)skillName,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !questLevel )
    questLevel = **(System_String_o ***)(qword_5984390 + 184);
  this->fields._QuestLevel_k__BackingField = questLevel;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._QuestLevel_k__BackingField,
    (int32_t)questLevel,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields._MaxLevel_k__BackingField = maxLevel;
  if ( !itemIds )
  {
    v46 = Method_System_Array_Empty_int___;
    v47 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v47 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v47 = v46[7];
    }
    v48 = *(_QWORD *)(v47 + 16);
    if ( (*(_WORD *)(v48 + 309) & 1) == 0 )
      v48 = sub_224B908(v45);
    if ( !*(_DWORD *)(v48 + 228) )
      *(__n128 *)&v45 = j_il2cpp_runtime_class_init_0(v48, v38);
    v49 = *(_QWORD *)(v46[7] + 16LL);
    if ( (*(_WORD *)(v49 + 309) & 1) == 0 )
      v49 = sub_224B908(v45);
    itemIds = **(System_Int32_array ***)(v49 + 184);
  }
  this->fields._ItemIds_k__BackingField = itemIds;
  p_ItemIds_k__BackingField = &this->fields._ItemIds_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_ItemIds_k__BackingField,
    (int32_t)itemIds,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  *((_DWORD *)p_ItemIds_k__BackingField + 2) = bonusType;
  *((_DWORD *)p_ItemIds_k__BackingField + 3) = bonusValue;
  *((_DWORD *)p_ItemIds_k__BackingField + 4) = maxBonusValue;
}


int32_t EventJobCautionComponent_JobFreeQuestDisplayData__get_BonusType(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        const MethodInfo *method)
{
  return this->fields._BonusType_k__BackingField;
}


int32_t EventJobCautionComponent_JobFreeQuestDisplayData__get_BonusValue(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        const MethodInfo *method)
{
  return this->fields._BonusValue_k__BackingField;
}


System_Int32_array *EventJobCautionComponent_JobFreeQuestDisplayData__get_ItemIds(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        const MethodInfo *method)
{
  return this->fields._ItemIds_k__BackingField;
}


int32_t EventJobCautionComponent_JobFreeQuestDisplayData__get_MaxBonusValue(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        const MethodInfo *method)
{
  return this->fields._MaxBonusValue_k__BackingField;
}


int32_t EventJobCautionComponent_JobFreeQuestDisplayData__get_MaxLevel(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        const MethodInfo *method)
{
  return this->fields._MaxLevel_k__BackingField;
}


System_String_o *EventJobCautionComponent_JobFreeQuestDisplayData__get_QuestLevel(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestLevel_k__BackingField;
}


System_String_o *EventJobCautionComponent_JobFreeQuestDisplayData__get_QuestName(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        const MethodInfo *method)
{
  return this->fields._QuestName_k__BackingField;
}


System_String_o *EventJobCautionComponent_JobFreeQuestDisplayData__get_SkillName(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillName_k__BackingField;
}


void EventJobCautionComponent_JobFreeQuestDisplayData__set_BonusType(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BonusType_k__BackingField = value;
}


void EventJobCautionComponent_JobFreeQuestDisplayData__set_BonusValue(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BonusValue_k__BackingField = value;
}


void EventJobCautionComponent_JobFreeQuestDisplayData__set_ItemIds(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ItemIds_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ItemIds_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventJobCautionComponent_JobFreeQuestDisplayData__set_MaxBonusValue(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MaxBonusValue_k__BackingField = value;
}


void EventJobCautionComponent_JobFreeQuestDisplayData__set_MaxLevel(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MaxLevel_k__BackingField = value;
}


void EventJobCautionComponent_JobFreeQuestDisplayData__set_QuestLevel(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._QuestLevel_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._QuestLevel_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventJobCautionComponent_JobFreeQuestDisplayData__set_QuestName(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._QuestName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventJobCautionComponent_JobFreeQuestDisplayData__set_SkillName(
        EventJobCautionComponent_JobFreeQuestDisplayData_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SkillName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SkillName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}