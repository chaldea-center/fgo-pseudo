void __fastcall EventInfoSkillGetDialog___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDDBEC & 1) == 0 )
  {
    sub_1C21E38(&EventInfoSkillGetDialog_TypeInfo);
    sub_1C21E38(&StringLiteral_5756/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/);
    byte_4BDDBEC = 1;
  }
  EventInfoSkillGetDialog_TypeInfo->static_fields->MessageLocalizationKey = (struct System_String_o *)StringLiteral_5756/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventInfoSkillGetDialog_TypeInfo->static_fields,
    StringLiteral_5756/*"EVENT_INFO_SKILL_GET_DIALOG_TEXT_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall EventInfoSkillGetDialog___ctor(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDBEB & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDDBEB = 1;
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  v2 = this;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  v2->fields.closeCallback = 0LL;
  v2 = (EventInfoSkillGetDialog_o *)((char *)v2 + 152);
  sub_1C21DDC((PartyOrganizationUtility_o *)v2, 0LL, v3, v4, v5, v6, v7, v8);
  LOBYTE(v2->monitor) = 0;
}


void __fastcall EventInfoSkillGetDialog__OnClickCloseButton(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4BDDBE9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    sub_1C21E38(&Method_EventInfoSkillGetDialog__OnClickCloseButton_b__13_0__);
    byte_4BDDBE9 = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoSkillGetDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillGetDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoSkillGetDialog__OnClickCloseButton_b__13_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoSkillGetDialog__Open(
        EventInfoSkillGetDialog_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  Il2CppObject *Master_object; // x23
  int32_t SkillId; // w24
  QuestMaster_o *SkillLv; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *QuestName; // x23
  EventInfoSkillGetDialog_c *v21; // x8
  System_String_o *MessageLocalizationKey; // x24
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  UILabel_o *messageLabel; // x24
  System_String_o *v26; // x25
  System_String_o *v27; // x0
  int32_t v28; // w0
  UISprite_o *skillIcon; // x24
  int32_t v30; // w23
  UILabel_o *skillExplanationTitle; // x23
  UILabel_o *skillName; // x23
  UILabel_o *skillExplanationLabel; // x22
  UILabel_o *closeLabel; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int32_t condId; // [xsp+4h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDDBE8 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&EventInfoSkillGetDialog_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_5755/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/);
    byte_4BDDBE8 = 1;
  }
  entity = 0LL;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closeCallback = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.closeCallback, 0LL, v7, v8, v9, v10, v11, v12);
  this->fields.isClose = 0;
  if ( imagePartsGroupEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillId = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0LL);
    SkillLv = (QuestMaster_o *)ImagePartsGroupEntity__GetSkillLv(imagePartsGroupEntity, 0LL);
    if ( !Master_object )
      goto LABEL_27;
    if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, SkillId, (int32_t)SkillLv, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SkillLv = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( SkillLv )
      {
        SkillLv = (QuestMaster_o *)QuestMaster__getQuestEntity(SkillLv, imagePartsGroupEntity->fields.condId, 0LL);
        if ( SkillLv )
        {
          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)SkillLv, 0LL);
          v21 = EventInfoSkillGetDialog_TypeInfo;
          if ( !EventInfoSkillGetDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSkillGetDialog_TypeInfo);
            v21 = EventInfoSkillGetDialog_TypeInfo;
          }
          MessageLocalizationKey = v21->static_fields->MessageLocalizationKey;
          condId = imagePartsGroupEntity->fields.condId;
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &condId, v17, v18, v19);
          v24 = System_String__Format(MessageLocalizationKey, v23, 0LL);
          messageLabel = this->fields.messageLabel;
          v26 = v24;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = LocalizationManager__Get(v26, 0LL);
          SkillLv = (QuestMaster_o *)System_String__Format(v27, QuestName, 0LL);
          if ( messageLabel )
          {
            UILabel__set_text(messageLabel, (System_String_o *)SkillLv, 0LL);
            v28 = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0LL);
            skillIcon = this->fields.skillIcon;
            v30 = v28;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetSkillIcon(skillIcon, v30, 0LL);
            skillExplanationTitle = this->fields.skillExplanationTitle;
            SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5755/*"EVENT_INFO_SKILL_GET_DIALOG_MESSAGE_SKILL_TITLE"*/, 0LL);
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
                    SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SkillLv, 0LL);
                      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
                      this->fields.closeCallback = closeAction;
                      sub_1C21DDC(
                        (PartyOrganizationUtility_o *)&this->fields.closeCallback,
                        (int64_t)closeAction,
                        v35,
                        v36,
                        v37,
                        v38,
                        v39,
                        v40);
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
      sub_1C22094(SkillLv, v16);
    }
  }
  ActionExtensions__Call(closeAction, 0LL);
}


void __fastcall EventInfoSkillGetDialog___OnClickCloseButton_b__13_0(
        EventInfoSkillGetDialog_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_closeCallback; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  p_closeCallback = (PartyOrganizationUtility_o *)&this->fields.closeCallback;
  ActionExtensions__Call(this->fields.closeCallback, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  p_closeCallback->klass = 0LL;
  sub_1C21DDC(p_closeCallback, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.isClose = 0;
}


UnityEngine_GameObject_o *__fastcall EventInfoSkillGetDialog__get_closeBtnObject(
        EventInfoSkillGetDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4BDDBEA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDDBEA = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}