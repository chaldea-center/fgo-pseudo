void EventInfoJobSkillGetDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventInfoJobSkillGetDialog_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59386CE & 1) == 0 )
  {
    sub_21FFC50(&EventInfoJobSkillGetDialog_TypeInfo);
    sub_21FFC50(&StringLiteral_5850/*"EVENT_JOB_SKILL_GET_DIALOG_CLEAR_QUEST_DESC_FORMAT"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_59386CE = 1;
  }
  v7 = StringLiteral_5850/*"EVENT_JOB_SKILL_GET_DIALOG_CLEAR_QUEST_DESC_FORMAT"*/;
  EventInfoJobSkillGetDialog_TypeInfo->static_fields->ClearQuestDescKey = (struct System_String_o *)StringLiteral_5850/*"EVENT_JOB_SKILL_GET_DIALOG_CLEAR_QUEST_DESC_FORMAT"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoJobSkillGetDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/;
  static_fields = EventInfoJobSkillGetDialog_TypeInfo->static_fields;
  static_fields->CloseButtonLocalizationKey = (struct System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->CloseButtonLocalizationKey,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void EventInfoJobSkillGetDialog___ctor(EventInfoJobSkillGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_59386CD & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59386CD = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoJobSkillGetDialog__Init(EventInfoJobSkillGetDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59386CA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_59386CA = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform || (transform = UnityEngine_Transform__get_parent(transform, 0)) == 0 )
    sub_21FFECC(transform, v4);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)transform,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.basePanel = (struct UIPanel_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.basePanel,
    (int32_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void EventInfoJobSkillGetDialog__OnClickClose(EventInfoJobSkillGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_59386CC & 1) == 0 )
  {
    sub_21FFC50(&Method_EventInfoJobSkillGetDialog_OnClickClose__);
    byte_59386CC = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoJobSkillGetDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_EventInfoJobSkillGetDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventInfoJobSkillGetDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, this->fields.closeAction, 0);
  }
}


void EventInfoJobSkillGetDialog__Open(
        EventInfoJobSkillGetDialog_o *this,
        SkillEntity_o *skillEntity,
        SkillLvEntity_o *skillLvEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  EventInfoJobSkillGetDialog_c *v9; // x0
  UILabel_o *clearQuestDescLabel; // x23
  System_String_o *ClearQuestDescKey; // x24
  System_String_o *skillNameLabel; // x0
  __int64 v13; // x1
  UISprite_o *skillIconSprite; // x23
  int32_t id; // w24
  UILabel_o *skillDescLabel; // x22
  UILabel_o *closeButtonLabel; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_59386CB & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&EventInfoJobSkillGetDialog_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_59386CB = 1;
  }
  v9 = EventInfoJobSkillGetDialog_TypeInfo;
  clearQuestDescLabel = this->fields.clearQuestDescLabel;
  if ( !*(&EventInfoJobSkillGetDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoJobSkillGetDialog_TypeInfo, skillEntity);
    v9 = EventInfoJobSkillGetDialog_TypeInfo;
  }
  ClearQuestDescKey = v9->static_fields->ClearQuestDescKey;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, skillEntity);
  skillNameLabel = LocalizationManager__Get(ClearQuestDescKey, 0);
  if ( !clearQuestDescLabel )
    goto LABEL_16;
  UILabel__set_text(clearQuestDescLabel, skillNameLabel, 0);
  if ( !skillEntity )
    goto LABEL_16;
  skillIconSprite = this->fields.skillIconSprite;
  id = skillEntity->fields.id;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
  AtlasManager__SetSkillIcon(skillIconSprite, id, 0);
  skillNameLabel = (System_String_o *)this->fields.skillNameLabel;
  if ( !skillNameLabel
    || (UILabel__set_text((UILabel_o *)skillNameLabel, skillEntity->fields.name, 0), !skillLvEntity)
    || (skillDescLabel = this->fields.skillDescLabel,
        skillNameLabel = SkillLvEntity__getDetail_49837896(skillLvEntity, skillLvEntity->fields.lv, 0, 0),
        !skillDescLabel)
    || (UILabel__set_text(skillDescLabel, skillNameLabel, 0),
        closeButtonLabel = this->fields.closeButtonLabel,
        skillNameLabel = LocalizationManager__Get(
                           EventInfoJobSkillGetDialog_TypeInfo->static_fields->CloseButtonLocalizationKey,
                           0),
        !closeButtonLabel) )
  {
LABEL_16:
    sub_21FFECC(skillNameLabel, v13);
  }
  UILabel__set_text(closeButtonLabel, skillNameLabel, 0);
  this->fields.closeAction = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


UnityEngine_GameObject_o *EventInfoJobSkillGetDialog__get_closeBtnObject(
        EventInfoJobSkillGetDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_59386C9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59386C9 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_21FFECC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}