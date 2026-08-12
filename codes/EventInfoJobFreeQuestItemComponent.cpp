void EventInfoJobFreeQuestItemComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventInfoJobFreeQuestItemComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventInfoJobFreeQuestItemComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct EventInfoJobFreeQuestItemComponent_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5971CDE & 1) == 0 )
  {
    sub_2213A60(&EventInfoJobFreeQuestItemComponent_TypeInfo);
    sub_2213A60(&StringLiteral_5852/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_SKILL_FORMAT"*/);
    sub_2213A60(&StringLiteral_5851/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_NAME_FORMAT"*/);
    sub_2213A60(&StringLiteral_5850/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_BONUS_FORMAT"*/);
    sub_2213A60(&StringLiteral_5854/*"EVENT_JOB_EXPLANATION_RECOMMEND_LV"*/);
    byte_5971CDE = 1;
  }
  v7 = StringLiteral_5851/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_NAME_FORMAT"*/;
  EventInfoJobFreeQuestItemComponent_TypeInfo->static_fields->QuestTextLocalizationKey = (struct System_String_o *)StringLiteral_5851/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_NAME_FORMAT"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoJobFreeQuestItemComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_5850/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_BONUS_FORMAT"*/;
  static_fields = EventInfoJobFreeQuestItemComponent_TypeInfo->static_fields;
  static_fields->GetItemBonusLocalizationKey = (struct System_String_o *)StringLiteral_5850/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_BONUS_FORMAT"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->GetItemBonusLocalizationKey,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_5854/*"EVENT_JOB_EXPLANATION_RECOMMEND_LV"*/;
  v17 = EventInfoJobFreeQuestItemComponent_TypeInfo->static_fields;
  v17->JobQuestLevelLocalizationKey = (struct System_String_o *)StringLiteral_5854/*"EVENT_JOB_EXPLANATION_RECOMMEND_LV"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->JobQuestLevelLocalizationKey, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_5852/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_SKILL_FORMAT"*/;
  v25 = EventInfoJobFreeQuestItemComponent_TypeInfo->static_fields;
  v25->JobQuestSkillLocalizationKey = (struct System_String_o *)StringLiteral_5852/*"EVENT_JOB_EXPLANATION_DIALOG_QUEST_SKILL_FORMAT"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->JobQuestSkillLocalizationKey, v24, v26, v27, v28, v29, v30, v31);
}


void EventInfoJobFreeQuestItemComponent___ctor(EventInfoJobFreeQuestItemComponent_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0

  if ( (byte_5971CDD & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5971CDD = 1;
  }
  v3 = BaseDialog_TypeInfo;
  this->fields.itemGridCellWidth = 60;
  if ( !*(&v3->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v3, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoJobFreeQuestItemComponent__Close(EventInfoJobFreeQuestItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventInfoJobFreeQuestItemComponent__GetPointBonusText(
        EventInfoJobFreeQuestItemComponent_o *this,
        int32_t bonusType,
        int32_t bonusValue,
        const MethodInfo *method)
{
  __int64 v7; // x9
  unsigned __int64 v8; // x20
  __int64 v9; // x21
  System_String_o *v10; // x19
  Il2CppObject *NumberFormat; // x1

  if ( (byte_5971CDB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_5881/*"EVENT_POINT_RATE_INFO"*/);
    byte_5971CDB = 1;
  }
  if ( bonusType == 2 )
  {
    v7 = 1717986919LL * (bonusValue - 1000);
    v8 = (unsigned __int64)v7 >> 63;
    v9 = v7 >> 34;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&bonusType);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5881/*"EVENT_POINT_RATE_INFO"*/, 0);
    NumberFormat = (Il2CppObject *)LocalizationManager__GetNumberFormat((int)v9 + (int)v8, 0);
    return System_String__Format(v10, NumberFormat, 0);
  }
  else if ( bonusType == 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&bonusType);
    return LocalizationManager__GetNumberFormat(bonusValue, 0);
  }
  else
  {
    return **(System_String_o ***)(qword_5984390 + 184);
  }
}


void EventInfoJobFreeQuestItemComponent__Open(EventInfoJobFreeQuestItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *itemGrid; // x20

  if ( (byte_5971CDC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971CDC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  itemGrid = (UnityEngine_Object_o *)this->fields.itemGrid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(itemGrid, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemGrid;
    if ( gameObject )
    {
      UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(gameObject, v4);
  }
}


void EventInfoJobFreeQuestItemComponent__Setup(
        EventInfoJobFreeQuestItemComponent_o *this,
        System_String_o *questName,
        System_String_o *skillName,
        System_Int32_array *itemIds,
        int32_t bonusType,
        int32_t bonusValue,
        int32_t maxBonusValue,
        System_String_o *questLevel,
        int32_t maxLevel,
        bool hideUpperPartition,
        const MethodInfo *method)
{
  UnityEngine_Object_o *questNameLabel; // x27
  __int64 v20; // x1
  UILabel_o *v21; // x27
  EventInfoJobFreeQuestItemComponent_c *v22; // x0
  System_String_o *QuestTextLocalizationKey; // x28
  System_String_o *v24; // x0
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *v26; // x1
  UnityEngine_Object_o *skillNameLabel; // x26
  __int64 v28; // x1
  UILabel_o *v29; // x26
  EventInfoJobFreeQuestItemComponent_c *v30; // x0
  System_String_o *JobQuestSkillLocalizationKey; // x27
  System_String_o *v32; // x0
  UnityEngine_Object_o *questLevelLabel; // x25
  __int64 v34; // x1
  UILabel_o *v35; // x25
  EventInfoJobFreeQuestItemComponent_c *v36; // x0
  System_String_o *JobQuestLevelLocalizationKey; // x26
  System_String_o *v38; // x0
  UnityEngine_Object_o *questBonusLabel; // x24
  _BOOL8 v40; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x3
  EventInfoJobFreeQuestItemComponent_o *PointBonusText; // x23
  const MethodInfo *v44; // x3
  System_String_o *v45; // x0
  UILabel_o *v46; // x22
  Il2CppObject *v47; // x21
  __int64 v48; // x1
  EventInfoJobFreeQuestItemComponent_c *v49; // x0
  System_String_o *GetItemBonusLocalizationKey; // x24
  System_String_o *v51; // x24
  Il2CppObject *v52; // x0
  UnityEngine_GameObject_o *gameObject; // x22
  char v54; // w8
  UnityEngine_Object_o *itemGrid; // x21
  __int64 v56; // x1
  UnityEngine_Object_o *upperPartition; // x21
  struct UIGrid_o *v58; // x9
  struct ItemIconComponent_array *itemIcons; // x8
  signed __int64 v60; // x23
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v62; // x21
  int32_t v63; // w22
  int32_t v64; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_5971CDA & 1) == 0 )
  {
    sub_2213A60(&EventInfoJobFreeQuestItemComponent_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971CDA = 1;
  }
  questNameLabel = (UnityEngine_Object_o *)this->fields.questNameLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questName);
  if ( UnityEngine_Object__op_Inequality(questNameLabel, 0, 0) )
  {
    v21 = this->fields.questNameLabel;
    v22 = EventInfoJobFreeQuestItemComponent_TypeInfo;
    if ( !*(&EventInfoJobFreeQuestItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJobFreeQuestItemComponent_TypeInfo, v20);
      v22 = EventInfoJobFreeQuestItemComponent_TypeInfo;
    }
    QuestTextLocalizationKey = v22->static_fields->QuestTextLocalizationKey;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    v24 = LocalizationManager__Get(QuestTextLocalizationKey, 0);
    IsNullOrEmpty = System_String__Format(v24, (Il2CppObject *)questName, 0);
    v26 = IsNullOrEmpty;
    if ( !IsNullOrEmpty )
      v26 = **(System_String_o ***)(qword_5984390 + 184);
    if ( !v21 )
      goto LABEL_82;
    UILabel__set_text(v21, v26, 0);
  }
  skillNameLabel = (UnityEngine_Object_o *)this->fields.skillNameLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality(skillNameLabel, 0, 0) )
  {
    v29 = this->fields.skillNameLabel;
    v30 = EventInfoJobFreeQuestItemComponent_TypeInfo;
    if ( !*(&EventInfoJobFreeQuestItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJobFreeQuestItemComponent_TypeInfo, v28);
      v30 = EventInfoJobFreeQuestItemComponent_TypeInfo;
    }
    JobQuestSkillLocalizationKey = v30->static_fields->JobQuestSkillLocalizationKey;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
    v32 = LocalizationManager__Get(JobQuestSkillLocalizationKey, 0);
    IsNullOrEmpty = System_String__Format(v32, (Il2CppObject *)skillName, 0);
    v26 = IsNullOrEmpty;
    if ( !IsNullOrEmpty )
      v26 = **(System_String_o ***)(qword_5984390 + 184);
    if ( !v29 )
      goto LABEL_82;
    UILabel__set_text(v29, v26, 0);
  }
  questLevelLabel = (UnityEngine_Object_o *)this->fields.questLevelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  if ( UnityEngine_Object__op_Inequality(questLevelLabel, 0, 0) )
  {
    v35 = this->fields.questLevelLabel;
    v36 = EventInfoJobFreeQuestItemComponent_TypeInfo;
    if ( !*(&EventInfoJobFreeQuestItemComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoJobFreeQuestItemComponent_TypeInfo, v34);
      v36 = EventInfoJobFreeQuestItemComponent_TypeInfo;
    }
    JobQuestLevelLocalizationKey = v36->static_fields->JobQuestLevelLocalizationKey;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    v38 = LocalizationManager__Get(JobQuestLevelLocalizationKey, 0);
    IsNullOrEmpty = System_String__Format(v38, (Il2CppObject *)questLevel, 0);
    v26 = IsNullOrEmpty;
    if ( !IsNullOrEmpty )
      v26 = **(System_String_o ***)(qword_5984390 + 184);
    if ( !v35 )
      goto LABEL_82;
    UILabel__set_text(v35, v26, 0);
  }
  questBonusLabel = (UnityEngine_Object_o *)this->fields.questBonusLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
  v40 = UnityEngine_Object__op_Inequality(questBonusLabel, 0, 0);
  if ( v40 )
  {
    PointBonusText = (EventInfoJobFreeQuestItemComponent_o *)EventInfoJobFreeQuestItemComponent__GetPointBonusText(
                                                               (EventInfoJobFreeQuestItemComponent_o *)v40,
                                                               bonusType,
                                                               bonusValue,
                                                               v42);
    v45 = EventInfoJobFreeQuestItemComponent__GetPointBonusText(PointBonusText, bonusType, maxBonusValue, v44);
    v46 = this->fields.questBonusLabel;
    v47 = (Il2CppObject *)v45;
    if ( System_String__IsNullOrEmpty((System_String_o *)PointBonusText, 0)
      && (IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty((System_String_o *)v47, 0),
          ((unsigned __int8)IsNullOrEmpty & 1) != 0) )
    {
      v26 = **(System_String_o ***)(qword_5984390 + 184);
    }
    else
    {
      v49 = EventInfoJobFreeQuestItemComponent_TypeInfo;
      if ( !*(&EventInfoJobFreeQuestItemComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventInfoJobFreeQuestItemComponent_TypeInfo, v48);
        v49 = EventInfoJobFreeQuestItemComponent_TypeInfo;
      }
      GetItemBonusLocalizationKey = v49->static_fields->GetItemBonusLocalizationKey;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
      v51 = LocalizationManager__Get(GetItemBonusLocalizationKey, 0);
      v64 = maxLevel;
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v64);
      IsNullOrEmpty = System_String__Format_75697948(v51, (Il2CppObject *)PointBonusText, v47, v52, 0);
      v26 = IsNullOrEmpty;
    }
    if ( !v46 )
      goto LABEL_82;
    UILabel__set_text(v46, v26, 0);
    IsNullOrEmpty = (System_String_o *)this->fields.questBonusLabel;
    if ( !IsNullOrEmpty )
      goto LABEL_82;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNullOrEmpty, 0);
    IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty((System_String_o *)PointBonusText, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty((System_String_o *)v47, 0);
      v54 = (unsigned __int8)IsNullOrEmpty ^ 1;
    }
    else
    {
      v54 = 1;
    }
    if ( !gameObject )
      goto LABEL_82;
    UnityEngine_GameObject__SetActive(gameObject, v54 & 1, 0);
  }
  itemGrid = (UnityEngine_Object_o *)this->fields.itemGrid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
  if ( !UnityEngine_Object__op_Equality(itemGrid, 0, 0) && this->fields.itemIcons )
  {
    upperPartition = (UnityEngine_Object_o *)this->fields.upperPartition;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
    IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Inequality(upperPartition, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 && hideUpperPartition )
    {
      IsNullOrEmpty = (System_String_o *)this->fields.upperPartition;
      if ( !IsNullOrEmpty )
        goto LABEL_82;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
    }
    v58 = this->fields.itemGrid;
    if ( v58 )
    {
      v58->fields.hideInactive = 1;
      itemIcons = this->fields.itemIcons;
      v58->fields.cellWidth = (float)this->fields.itemGridCellWidth;
      if ( itemIcons )
      {
        v60 = 0;
        while ( 1 )
        {
          max_length_low = LODWORD(itemIcons->max_length);
          if ( v60 >= (int)max_length_low )
            break;
          if ( v60 >= max_length_low )
            sub_2213CE4(IsNullOrEmpty);
          v62 = (UnityEngine_Object_o *)itemIcons->m_Items[v60];
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
          IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Equality(v62, 0, 0);
          if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
          {
            if ( itemIds && v60 < SLODWORD(itemIds->max_length) && (v63 = itemIds->m_Items[v60], v63 >= 1) )
            {
              if ( !v62 )
                goto LABEL_82;
              IsNullOrEmpty = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v62,
                                                   0);
              if ( !IsNullOrEmpty )
                goto LABEL_82;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 1, 0);
              ItemIconComponent__SetItem((ItemIconComponent_o *)v62, v63, -1, 1, 0);
            }
            else
            {
              if ( !v62 )
                goto LABEL_82;
              IsNullOrEmpty = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v62,
                                                   0);
              if ( !IsNullOrEmpty )
                goto LABEL_82;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNullOrEmpty, 0, 0);
            }
          }
          itemIcons = this->fields.itemIcons;
          ++v60;
          if ( !itemIcons )
            goto LABEL_82;
        }
        IsNullOrEmpty = (System_String_o *)this->fields.itemGrid;
        if ( IsNullOrEmpty )
        {
          ((void (__fastcall *)(System_String_o *, const MethodInfo *))IsNullOrEmpty->klass->vtable._8_Equals.methodPtr)(
            IsNullOrEmpty,
            IsNullOrEmpty->klass->vtable._8_Equals.method);
          return;
        }
      }
    }
LABEL_82:
    sub_2213CDC(IsNullOrEmpty, v26);
  }
}


bool EventInfoJobFreeQuestItemComponent__TryGetDisplayItemId(
        EventInfoJobFreeQuestItemComponent_o *this,
        System_Int32_array *itemIds,
        int32_t index,
        int32_t *itemId,
        const MethodInfo *method)
{
  bool result; // w0
  int32_t v6; // w8

  result = 0;
  *itemId = 0;
  if ( itemIds && (index & 0x80000000) == 0 )
  {
    if ( SLODWORD(itemIds->max_length) <= index )
    {
      return 0;
    }
    else
    {
      v6 = itemIds->m_Items[index];
      *itemId = v6;
      return v6 > 0;
    }
  }
  return result;
}


float EventInfoJobFreeQuestItemComponent__get_ItemGridCellWidth(
        EventInfoJobFreeQuestItemComponent_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.itemGridCellWidth;
}