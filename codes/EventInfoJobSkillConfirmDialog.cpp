void EventInfoJobSkillConfirmDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventInfoJobSkillConfirmDialog_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventInfoJobSkillConfirmDialog_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct EventInfoJobSkillConfirmDialog_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct EventInfoJobSkillConfirmDialog_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5970A23 & 1) == 0 )
  {
    sub_2213A60(&EventInfoJobSkillConfirmDialog_TypeInfo);
    sub_2213A60(&StringLiteral_5858/*"EVENT_JOB_SKILL_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_5860/*"EVENT_JOB_SKILL_CONFIRM_SKILL_FORMAT"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_5861/*"EVENT_JOB_SKILL_CONFIRM_START_QUEST_FORMAT"*/);
    sub_2213A60(&StringLiteral_5859/*"EVENT_JOB_SKILL_CONFIRM_RECOMMEND_LV"*/);
    byte_5970A23 = 1;
  }
  v7 = StringLiteral_5860/*"EVENT_JOB_SKILL_CONFIRM_SKILL_FORMAT"*/;
  EventInfoJobSkillConfirmDialog_TypeInfo->static_fields->SkillGetConfirmLocalizationKey = (struct System_String_o *)StringLiteral_5860/*"EVENT_JOB_SKILL_CONFIRM_SKILL_FORMAT"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoJobSkillConfirmDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_5861/*"EVENT_JOB_SKILL_CONFIRM_START_QUEST_FORMAT"*/;
  static_fields = EventInfoJobSkillConfirmDialog_TypeInfo->static_fields;
  static_fields->StartQuestConfirmLocalizationKey = (struct System_String_o *)StringLiteral_5861/*"EVENT_JOB_SKILL_CONFIRM_START_QUEST_FORMAT"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->StartQuestConfirmLocalizationKey,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/;
  v17 = EventInfoJobSkillConfirmDialog_TypeInfo->static_fields;
  v17->CloseButtonLocalizationKey = (struct System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->CloseButtonLocalizationKey, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_5858/*"EVENT_JOB_SKILL_CONFIRM_DIALOG_DECIDE"*/;
  v25 = EventInfoJobSkillConfirmDialog_TypeInfo->static_fields;
  v25->DecideButtonLocalizationKey = (struct System_String_o *)StringLiteral_5858/*"EVENT_JOB_SKILL_CONFIRM_DIALOG_DECIDE"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->DecideButtonLocalizationKey, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_5859/*"EVENT_JOB_SKILL_CONFIRM_RECOMMEND_LV"*/;
  v33 = EventInfoJobSkillConfirmDialog_TypeInfo->static_fields;
  v33->JobQuestLevelLocalizationKey = (struct System_String_o *)StringLiteral_5859/*"EVENT_JOB_SKILL_CONFIRM_RECOMMEND_LV"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->JobQuestLevelLocalizationKey, v32, v34, v35, v36, v37, v38, v39);
}


void EventInfoJobSkillConfirmDialog___ctor(EventInfoJobSkillConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5970A22 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5970A22 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoJobSkillConfirmDialog__Init(EventInfoJobSkillConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void EventInfoJobSkillConfirmDialog__OnClickCancelButton(
        EventInfoJobSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5970A21 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoJobSkillConfirmDialog_OnClickCancelButton__);
    sub_2213A60(&Method_EventInfoJobSkillConfirmDialog__OnClickCancelButton_b__24_0__);
    byte_5970A21 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoJobSkillConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoJobSkillConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoJobSkillConfirmDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoJobSkillConfirmDialog__OnClickCancelButton_b__24_0__,
      0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoJobSkillConfirmDialog__OnClickDecideButton(
        EventInfoJobSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5970A20 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoJobSkillConfirmDialog_OnClickDecideButton__);
    sub_2213A60(&Method_EventInfoJobSkillConfirmDialog__OnClickDecideButton_b__23_0__);
    byte_5970A20 = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoJobSkillConfirmDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoJobSkillConfirmDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoJobSkillConfirmDialog_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoJobSkillConfirmDialog__OnClickDecideButton_b__23_0__,
      0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoJobSkillConfirmDialog__Open(
        EventInfoJobSkillConfirmDialog_o *this,
        QuestEntity_o *questEntity,
        SkillEntity_o *skillEntity,
        QuestExtensionEntity_o *questExtensionEntity,
        SkillLvEntity_o *skillLvEntity,
        System_Int32_array *jobDialogItemIds,
        EventJobPointBonusEntity_o *pointBonusEntity,
        EventJobPointBonusEntity_o *maxPointBonusEntity,
        EventJobEntity_o *eventJobEntity,
        CommonConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  UILabel_o *selectQuestNameLabel; // x0
  System_String_o *name; // x1
  __int64 v21; // x1
  EventInfoJobSkillConfirmDialog_c *v22; // x0
  UILabel_o *skillGetConfirmLabel; // x29
  System_String_o *SkillGetConfirmLocalizationKey; // x19
  __int64 v25; // x1
  UISprite_o *skillIconSprite; // x29
  int32_t id; // w19
  UILabel_o *skillNameLabel; // x29
  System_String_o *JobConfirmSecretName; // x0
  UILabel_o *skillDescLabel; // x29
  System_String_o *JobConfirmSecretDetail; // x0
  __int64 v32; // x1
  EventInfoJobSkillConfirmDialog_c *v33; // x0
  UILabel_o *startQuestConfirmLabel; // x28
  System_String_o *StartQuestConfirmLocalizationKey; // x19
  System_String_o *v36; // x0
  UILabel_o *recommendedLevelLabel; // x28
  System_String_o *v38; // x29
  Il2CppObject *JobDialogQuestLevel; // x1
  __int64 v40; // x1
  EventInfoJobSkillConfirmDialog_c *v41; // x0
  UILabel_o *decideButtonLabel; // x27
  System_String_o *DecideButtonLocalizationKey; // x19
  UILabel_o *closeButtonLabel; // x27
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  const MethodInfo *v51; // [xsp+8h] [xbp-78h]

  if ( (byte_5970A1F & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&EventInfoJobSkillConfirmDialog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_5970A1F = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  if ( !questEntity )
    goto LABEL_41;
  selectQuestNameLabel = this->fields.selectQuestNameLabel;
  if ( !selectQuestNameLabel )
    goto LABEL_41;
  UILabel__set_text(selectQuestNameLabel, questEntity->fields.name, 0);
  v22 = EventInfoJobSkillConfirmDialog_TypeInfo;
  skillGetConfirmLabel = this->fields.skillGetConfirmLabel;
  if ( !*(&EventInfoJobSkillConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJobSkillConfirmDialog_TypeInfo, v21);
    v22 = EventInfoJobSkillConfirmDialog_TypeInfo;
  }
  SkillGetConfirmLocalizationKey = v22->static_fields->SkillGetConfirmLocalizationKey;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
  selectQuestNameLabel = (UILabel_o *)LocalizationManager__Get(SkillGetConfirmLocalizationKey, 0);
  if ( !skillEntity )
    goto LABEL_41;
  selectQuestNameLabel = (UILabel_o *)System_String__Format(
                                        (System_String_o *)selectQuestNameLabel,
                                        (Il2CppObject *)skillEntity->fields.name,
                                        0);
  if ( !skillGetConfirmLabel )
    goto LABEL_41;
  UILabel__set_text(skillGetConfirmLabel, (System_String_o *)selectQuestNameLabel, 0);
  skillIconSprite = this->fields.skillIconSprite;
  id = skillEntity->fields.id;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  selectQuestNameLabel = (UILabel_o *)AtlasManager__SetSkillIcon(skillIconSprite, id, 0);
  if ( !eventJobEntity )
    goto LABEL_41;
  skillNameLabel = this->fields.skillNameLabel;
  JobConfirmSecretName = EventJobEntity__GetJobConfirmSecretName(eventJobEntity, 0);
  selectQuestNameLabel = (UILabel_o *)System_String__IsNullOrEmpty(JobConfirmSecretName, 0);
  if ( ((unsigned __int8)selectQuestNameLabel & 1) != 0 )
  {
    name = skillEntity->fields.name;
  }
  else
  {
    selectQuestNameLabel = (UILabel_o *)EventJobEntity__GetJobConfirmSecretName(eventJobEntity, 0);
    name = (System_String_o *)selectQuestNameLabel;
  }
  if ( !skillNameLabel )
    goto LABEL_41;
  UILabel__set_text(skillNameLabel, name, 0);
  skillDescLabel = this->fields.skillDescLabel;
  JobConfirmSecretDetail = EventJobEntity__GetJobConfirmSecretDetail(eventJobEntity, 0);
  selectQuestNameLabel = (UILabel_o *)System_String__IsNullOrEmpty(JobConfirmSecretDetail, 0);
  if ( ((unsigned __int8)selectQuestNameLabel & 1) != 0 )
  {
    if ( !skillLvEntity )
      goto LABEL_41;
    selectQuestNameLabel = (UILabel_o *)SkillLvEntity__getDetail(skillLvEntity, 0, 0, 0);
  }
  else
  {
    selectQuestNameLabel = (UILabel_o *)EventJobEntity__GetJobConfirmSecretDetail(eventJobEntity, 0);
  }
  name = (System_String_o *)selectQuestNameLabel;
  if ( !skillDescLabel )
    goto LABEL_41;
  UILabel__set_text(skillDescLabel, (System_String_o *)selectQuestNameLabel, 0);
  v33 = EventInfoJobSkillConfirmDialog_TypeInfo;
  startQuestConfirmLabel = this->fields.startQuestConfirmLabel;
  if ( !*(&EventInfoJobSkillConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJobSkillConfirmDialog_TypeInfo, v32);
    v33 = EventInfoJobSkillConfirmDialog_TypeInfo;
  }
  StartQuestConfirmLocalizationKey = v33->static_fields->StartQuestConfirmLocalizationKey;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
  v36 = LocalizationManager__Get(StartQuestConfirmLocalizationKey, 0);
  selectQuestNameLabel = (UILabel_o *)System_String__Format(v36, (Il2CppObject *)questEntity->fields.name, 0);
  if ( !startQuestConfirmLabel )
    goto LABEL_41;
  UILabel__set_text(startQuestConfirmLabel, (System_String_o *)selectQuestNameLabel, 0);
  recommendedLevelLabel = this->fields.recommendedLevelLabel;
  v38 = LocalizationManager__Get(
          EventInfoJobSkillConfirmDialog_TypeInfo->static_fields->JobQuestLevelLocalizationKey,
          0);
  if ( !questExtensionEntity
    || (JobDialogQuestLevel = (Il2CppObject *)QuestExtensionEntity__GetJobDialogQuestLevel(questExtensionEntity, 0)) == 0 )
  {
    JobDialogQuestLevel = **(Il2CppObject ***)(qword_5984390 + 184);
  }
  selectQuestNameLabel = (UILabel_o *)System_String__Format(v38, JobDialogQuestLevel, 0);
  if ( !recommendedLevelLabel )
    goto LABEL_41;
  UILabel__set_text(recommendedLevelLabel, (System_String_o *)selectQuestNameLabel, 0);
  v41 = EventInfoJobSkillConfirmDialog_TypeInfo;
  decideButtonLabel = this->fields.decideButtonLabel;
  if ( !*(&EventInfoJobSkillConfirmDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJobSkillConfirmDialog_TypeInfo, v40);
    v41 = EventInfoJobSkillConfirmDialog_TypeInfo;
  }
  DecideButtonLocalizationKey = v41->static_fields->DecideButtonLocalizationKey;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
  selectQuestNameLabel = (UILabel_o *)LocalizationManager__Get(DecideButtonLocalizationKey, 0);
  if ( !decideButtonLabel
    || (UILabel__set_text(decideButtonLabel, (System_String_o *)selectQuestNameLabel, 0),
        closeButtonLabel = this->fields.closeButtonLabel,
        selectQuestNameLabel = (UILabel_o *)LocalizationManager__Get(
                                              EventInfoJobSkillConfirmDialog_TypeInfo->static_fields->CloseButtonLocalizationKey,
                                              0),
        !closeButtonLabel)
    || (UILabel__set_text(closeButtonLabel, (System_String_o *)selectQuestNameLabel, 0),
        this->fields.clickCallback = callback,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallback,
          (int32_t)callback,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50),
        !pointBonusEntity)
    || !maxPointBonusEntity )
  {
LABEL_41:
    sub_2213CDC(selectQuestNameLabel, name);
  }
  EventInfoJobSkillConfirmDialog__SetupJobDialogItems(
    this,
    questEntity->fields.name,
    skillEntity->fields.name,
    **(System_String_o ***)(qword_5984390 + 184),
    jobDialogItemIds,
    pointBonusEntity->fields.calcType,
    pointBonusEntity->fields.value,
    maxPointBonusEntity->fields.value,
    eventJobEntity->fields.maxLv,
    v51);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void EventInfoJobSkillConfirmDialog__SetupJobDialogItems(
        EventInfoJobSkillConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *skillName,
        System_String_o *questLevel,
        System_Int32_array *itemIds,
        int32_t bonusType,
        int32_t bonusValue,
        int32_t maxBonusValue,
        int32_t maxLevel,
        const MethodInfo *method)
{
  EventInfoJobSkillConfirmDialog_o *v10; // x19

  if ( !itemIds )
    goto LABEL_8;
  v10 = this;
  this = (EventInfoJobSkillConfirmDialog_o *)this->fields.jobFreeQuestItem;
  if ( itemIds->max_length )
  {
    if ( this )
    {
      EventInfoJobFreeQuestItemComponent__Setup(
        (EventInfoJobFreeQuestItemComponent_o *)this,
        title,
        skillName,
        itemIds,
        bonusType,
        bonusValue,
        maxBonusValue,
        questLevel,
        maxLevel,
        0,
        0);
      this = (EventInfoJobSkillConfirmDialog_o *)v10->fields.jobFreeQuestItem;
      if ( this )
      {
        EventInfoJobFreeQuestItemComponent__Open((EventInfoJobFreeQuestItemComponent_o *)this, 0);
        return;
      }
    }
LABEL_8:
    sub_2213CDC(this, title);
  }
  if ( !this )
    goto LABEL_8;
  EventInfoJobFreeQuestItemComponent__Close((EventInfoJobFreeQuestItemComponent_o *)this, 0);
}


void EventInfoJobSkillConfirmDialog___OnClickCancelButton_b__24_0(
        EventInfoJobSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *clickCallback; // x8

  clickCallback = this->fields.clickCallback;
  if ( clickCallback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickCallback->fields.invoke_impl)(
      clickCallback->fields.method_code,
      0,
      clickCallback->fields.method);
}


void EventInfoJobSkillConfirmDialog___OnClickDecideButton_b__23_0(
        EventInfoJobSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *clickCallback; // x8

  clickCallback = this->fields.clickCallback;
  if ( clickCallback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickCallback->fields.invoke_impl)(
      clickCallback->fields.method_code,
      1,
      clickCallback->fields.method);
}


UnityEngine_GameObject_o *EventInfoJobSkillConfirmDialog__get_closeBtnObject(
        EventInfoJobSkillConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_5970A1E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970A1E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_2213CDC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}