void __fastcall EventInfoSkillGetDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4A4FB4B & 1) == 0 )
  {
    sub_1B863B8(&EventInfoSkillGetDialog_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_5571/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/, v4);
    byte_4A4FB4B = 1;
  }
  EventInfoSkillGetDialog_TypeInfo->static_fields->MessageLocalizationKey = (struct System_String_o *)StringLiteral_5571/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/;
  sub_1B8635C((CGThumbnailListItem_o *)EventInfoSkillGetDialog_TypeInfo->static_fields, StringLiteral_5571/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/, v2, v3);
}


void __fastcall EventInfoSkillGetDialog___ctor(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A4FB4A & 1) == 0 )
  {
    sub_1B863B8(&BaseDialog_TypeInfo, method);
    byte_4A4FB4A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoSkillGetDialog__CheckAssertion(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoSkillGetDialog__Init(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  EventInfoSkillGetDialog_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  v2 = this;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  v2->fields.closeCallback = 0LL;
  v2 = (EventInfoSkillGetDialog_o *)((char *)v2 + 160);
  sub_1B8635C((CGThumbnailListItem_o *)v2, 0, v3, v4);
  LOBYTE(v2->monitor) = 0;
}


void __fastcall EventInfoSkillGetDialog__OnClickCloseButton(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4A4FB48 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_EventInfoSkillGetDialog_OnClickCloseButton__, v3);
    sub_1B863B8(&Method_EventInfoSkillGetDialog__OnClickCloseButton_b__13_0__, v4);
    byte_4A4FB48 = 1;
  }
  if ( !this->fields.isClose )
  {
    v5 = Method_EventInfoSkillGetDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillGetDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B863D0(Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_EventInfoSkillGetDialog__OnClickCloseButton_b__13_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoSkillGetDialog__Open(
        EventInfoSkillGetDialog_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Master_object; // x23
  int32_t SkillId; // w24
  QuestMaster_o *SkillLv; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *QuestName; // x23
  EventInfoSkillGetDialog_c *v25; // x8
  System_String_o *MessageLocalizationKey; // x24
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  UILabel_o *messageLabel; // x24
  System_String_o *v30; // x25
  System_String_o *v31; // x0
  int32_t v32; // w0
  UISprite_o *skillIcon; // x24
  int32_t v34; // w23
  UILabel_o *skillExplanationTitle; // x23
  UILabel_o *skillName; // x23
  UILabel_o *skillExplanationLabel; // x22
  UILabel_o *closeLabel; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t condId; // [xsp+4h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A4FB47 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, imagePartsGroupEntity);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&EventInfoSkillGetDialog_TypeInfo, v10);
    sub_1B863B8(&int_TypeInfo, v11);
    sub_1B863B8(&LocalizationManager_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, v13);
    sub_1B863B8(&StringLiteral_5570/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/, v14);
    byte_4A4FB47 = 1;
  }
  entity = 0LL;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closeCallback = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallback, 0, v15, v16);
  this->fields.isClose = 0;
  if ( imagePartsGroupEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillId = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0LL);
    SkillLv = (QuestMaster_o *)ImagePartsGroupEntity__GetSkillLv(imagePartsGroupEntity, 0LL);
    if ( !Master_object )
      goto LABEL_27;
    if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, SkillId, (int32_t)SkillLv, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SkillLv = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( SkillLv )
      {
        SkillLv = (QuestMaster_o *)QuestMaster__getQuestEntity(SkillLv, imagePartsGroupEntity->fields.condId, 0LL);
        if ( SkillLv )
        {
          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)SkillLv, 0LL);
          v25 = EventInfoSkillGetDialog_TypeInfo;
          if ( !EventInfoSkillGetDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSkillGetDialog_TypeInfo);
            v25 = EventInfoSkillGetDialog_TypeInfo;
          }
          MessageLocalizationKey = v25->static_fields->MessageLocalizationKey;
          condId = imagePartsGroupEntity->fields.condId;
          v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &condId, v21, v22, v23);
          v28 = System_String__Format(MessageLocalizationKey, v27, 0LL);
          messageLabel = this->fields.messageLabel;
          v30 = v28;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v31 = LocalizationManager__Get(v30, 0LL);
          SkillLv = (QuestMaster_o *)System_String__Format(v31, QuestName, 0LL);
          if ( messageLabel )
          {
            UILabel__set_text(messageLabel, (System_String_o *)SkillLv, 0LL);
            v32 = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0LL);
            skillIcon = this->fields.skillIcon;
            v34 = v32;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetSkillIcon(skillIcon, v34, 0LL);
            skillExplanationTitle = this->fields.skillExplanationTitle;
            SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5570/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/, 0LL);
            if ( skillExplanationTitle )
            {
              UILabel__set_text(skillExplanationTitle, (System_String_o *)SkillLv, 0LL);
              skillName = this->fields.skillName;
              SkillLv = (QuestMaster_o *)ImagePartsGroupEntity__GetSkillName(imagePartsGroupEntity, 0LL);
              if ( skillName )
              {
                UILabel__set_text(skillName, (System_String_o *)SkillLv, 0LL);
                SkillLv = (QuestMaster_o *)entity;
                if ( entity )
                {
                  skillExplanationLabel = this->fields.skillExplanationLabel;
                  SkillLv = (QuestMaster_o *)SkillLvEntity__getDetail(entity, 0, 0LL);
                  if ( skillExplanationLabel )
                  {
                    UILabel__set_text(skillExplanationLabel, (System_String_o *)SkillLv, 0LL);
                    closeLabel = this->fields.closeLabel;
                    SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SkillLv, 0LL);
                      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
                      this->fields.closeCallback = closeAction;
                      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.closeCallback, (int32_t)closeAction, v39, v40);
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
      sub_1B86614(SkillLv, v20);
    }
  }
  ActionExtensions__Call(closeAction, 0LL);
}


void __fastcall EventInfoSkillGetDialog___OnClickCloseButton_b__13_0(
        EventInfoSkillGetDialog_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_closeCallback; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  p_closeCallback = (CGThumbnailListItem_o *)&this->fields.closeCallback;
  ActionExtensions__Call(this->fields.closeCallback, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  p_closeCallback->klass = 0LL;
  sub_1B8635C(p_closeCallback, 0, v4, v5);
  this->fields.isClose = 0;
}


UnityEngine_GameObject_o *__fastcall EventInfoSkillGetDialog__get_closeBtnObject(
        EventInfoSkillGetDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A4FB49 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4FB49 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B86614(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}