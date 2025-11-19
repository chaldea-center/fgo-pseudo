void EventInfoSkillGetDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4CB8105 & 1) == 0 )
  {
    sub_1C6BA08(&EventInfoSkillGetDialog_TypeInfo);
    sub_1C6BA08(&StringLiteral_5614/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/);
    byte_4CB8105 = 1;
  }
  EventInfoSkillGetDialog_TypeInfo->static_fields->MessageLocalizationKey = (struct System_String_o *)StringLiteral_5614/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)EventInfoSkillGetDialog_TypeInfo->static_fields, StringLiteral_5614/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/, v1, v2);
}


void EventInfoSkillGetDialog___ctor(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB8104 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB8104 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoSkillGetDialog__CheckAssertion(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillGetDialog__Init(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  EventInfoSkillGetDialog_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  v2 = this;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  v2->fields.closeCallback = 0;
  v2 = (EventInfoSkillGetDialog_o *)((char *)v2 + 160);
  sub_1C6B9AC((CGThumbnailListItem_o *)v2, 0, v3, v4);
  LOBYTE(v2->monitor) = 0;
}


void EventInfoSkillGetDialog__OnClickCloseButton(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CB8102 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    sub_1C6BA08(&Method_EventInfoSkillGetDialog__OnClickCloseButton_b__13_0__);
    byte_4CB8102 = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoSkillGetDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillGetDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoSkillGetDialog__OnClickCloseButton_b__13_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
    this->fields.isClose = 1;
  }
}


void EventInfoSkillGetDialog__Open(
        EventInfoSkillGetDialog_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Master_object; // x23
  int32_t SkillId; // w24
  QuestMaster_o *SkillLv; // x0
  __int64 v12; // x1
  Il2CppObject *QuestName; // x23
  EventInfoSkillGetDialog_c *v14; // x8
  System_String_o *MessageLocalizationKey; // x24
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  UILabel_o *messageLabel; // x24
  System_String_o *v19; // x25
  System_String_o *v20; // x0
  int32_t v21; // w0
  UISprite_o *skillIcon; // x24
  int32_t v23; // w23
  UILabel_o *skillExplanationTitle; // x23
  UILabel_o *skillName; // x23
  UILabel_o *skillExplanationLabel; // x22
  UILabel_o *closeLabel; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t condId; // [xsp+4h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB8101 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&EventInfoSkillGetDialog_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C6BA08(&StringLiteral_5613/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/);
    byte_4CB8101 = 1;
  }
  entity = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closeCallback = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v7, v8);
  this->fields.isClose = 0;
  if ( imagePartsGroupEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillId = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0);
    SkillLv = (QuestMaster_o *)ImagePartsGroupEntity__GetSkillLv(imagePartsGroupEntity, 0);
    if ( !Master_object )
      goto LABEL_27;
    if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, SkillId, (int32_t)SkillLv, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SkillLv = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( SkillLv )
      {
        SkillLv = (QuestMaster_o *)QuestMaster__getQuestEntity(SkillLv, imagePartsGroupEntity->fields.condId, 0);
        if ( SkillLv )
        {
          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)SkillLv, 0);
          v14 = EventInfoSkillGetDialog_TypeInfo;
          if ( !EventInfoSkillGetDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSkillGetDialog_TypeInfo);
            v14 = EventInfoSkillGetDialog_TypeInfo;
          }
          MessageLocalizationKey = v14->static_fields->MessageLocalizationKey;
          condId = imagePartsGroupEntity->fields.condId;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &condId);
          v17 = System_String__Format(MessageLocalizationKey, v16, 0);
          messageLabel = this->fields.messageLabel;
          v19 = v17;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v20 = LocalizationManager__Get(v19, 0);
          SkillLv = (QuestMaster_o *)System_String__Format(v20, QuestName, 0);
          if ( messageLabel )
          {
            UILabel__set_text(messageLabel, (System_String_o *)SkillLv, 0);
            v21 = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0);
            skillIcon = this->fields.skillIcon;
            v23 = v21;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetSkillIcon(skillIcon, v23, 0);
            skillExplanationTitle = this->fields.skillExplanationTitle;
            SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5613/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/, 0);
            if ( skillExplanationTitle )
            {
              UILabel__set_text(skillExplanationTitle, (System_String_o *)SkillLv, 0);
              skillName = this->fields.skillName;
              SkillLv = (QuestMaster_o *)ImagePartsGroupEntity__GetSkillName(imagePartsGroupEntity, 0);
              if ( skillName )
              {
                UILabel__set_text(skillName, (System_String_o *)SkillLv, 0);
                SkillLv = (QuestMaster_o *)entity;
                if ( entity )
                {
                  skillExplanationLabel = this->fields.skillExplanationLabel;
                  SkillLv = (QuestMaster_o *)SkillLvEntity__getDetail(entity, 0, 0, 0);
                  if ( skillExplanationLabel )
                  {
                    UILabel__set_text(skillExplanationLabel, (System_String_o *)SkillLv, 0);
                    closeLabel = this->fields.closeLabel;
                    SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SkillLv, 0);
                      BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
                      this->fields.closeCallback = closeAction;
                      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeAction, v28, v29);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_27:
      sub_1C6BC60(SkillLv, v12);
    }
  }
  ActionExtensions__Call(closeAction, 0);
}


void EventInfoSkillGetDialog___OnClickCloseButton_b__13_0(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_closeCallback; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
  ActionExtensions__Call(this->fields.closeCallback, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  p_closeCallback->klass = 0;
  sub_1C6B9AC(p_closeCallback, 0, v4, v5);
  this->fields.isClose = 0;
}


UnityEngine_GameObject_o *EventInfoSkillGetDialog__get_closeBtnObject(
        EventInfoSkillGetDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CB8103 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8103 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C6BC60(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}