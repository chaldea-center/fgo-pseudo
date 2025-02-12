void __fastcall EventInfoSkillGetDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BB5D60 & 1) == 0 )
  {
    sub_1C13D24(&EventInfoSkillGetDialog_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_5742/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/, v8);
    byte_4BB5D60 = 1;
  }
  EventInfoSkillGetDialog_TypeInfo->static_fields->MessageLocalizationKey = (struct System_String_o *)StringLiteral_5742/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventInfoSkillGetDialog_TypeInfo->static_fields,
    StringLiteral_5742/*"EVENT_INFO_MURAL_DIALOG_DETAIL"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventInfoSkillGetDialog___ctor(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4BB5D5F & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB5D5F = 1;
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
  sub_1C13CC8((PartyOrganizationUtility_o *)v2, 0LL, v3, v4, v5, v6, v7, v8);
  LOBYTE(v2->monitor) = 0;
}


void __fastcall EventInfoSkillGetDialog__OnClickCloseButton(EventInfoSkillGetDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4BB5D5D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_EventInfoSkillGetDialog_OnClickCloseButton__, v3);
    sub_1C13D24(&Method_EventInfoSkillGetDialog__OnClickCloseButton_b__13_0__, v4);
    byte_4BB5D5D = 1;
  }
  if ( !this->fields.isClose )
  {
    v5 = Method_EventInfoSkillGetDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillGetDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C13D3C(Method_EventInfoSkillGetDialog_OnClickCloseButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Master_object; // x23
  int32_t SkillId; // w24
  QuestMaster_o *SkillLv; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *QuestName; // x23
  EventInfoSkillGetDialog_c *v29; // x8
  System_String_o *MessageLocalizationKey; // x24
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  UILabel_o *messageLabel; // x24
  System_String_o *v34; // x25
  System_String_o *v35; // x0
  int32_t v36; // w0
  UISprite_o *skillIcon; // x24
  int32_t v38; // w23
  UILabel_o *skillExplanationTitle; // x23
  UILabel_o *skillName; // x23
  UILabel_o *skillExplanationLabel; // x22
  UILabel_o *closeLabel; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int32_t condId; // [xsp+4h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB5D5C & 1) == 0 )
  {
    sub_1C13D24(&AtlasManager_TypeInfo, imagePartsGroupEntity);
    sub_1C13D24(&Method_DataManager_GetMaster_QuestMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_1C13D24(&DataManager_TypeInfo, v9);
    sub_1C13D24(&EventInfoSkillGetDialog_TypeInfo, v10);
    sub_1C13D24(&int_TypeInfo, v11);
    sub_1C13D24(&LocalizationManager_TypeInfo, v12);
    sub_1C13D24(&StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, v13);
    sub_1C13D24(&StringLiteral_5741/*"EVENT_INFO_DISTANCE_TXT_"*/, v14);
    byte_4BB5D5C = 1;
  }
  entity = 0LL;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.closeCallback = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.closeCallback, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.isClose = 0;
  if ( imagePartsGroupEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillId = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0LL);
    SkillLv = (QuestMaster_o *)ImagePartsGroupEntity__GetSkillLv(imagePartsGroupEntity, 0LL);
    if ( !Master_object )
      goto LABEL_27;
    if ( SkillLvMaster__TryGetEntity((SkillLvMaster_o *)Master_object, &entity, SkillId, (int32_t)SkillLv, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SkillLv = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( SkillLv )
      {
        SkillLv = (QuestMaster_o *)QuestMaster__getQuestEntity(SkillLv, imagePartsGroupEntity->fields.condId, 0LL);
        if ( SkillLv )
        {
          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)SkillLv, 0LL);
          v29 = EventInfoSkillGetDialog_TypeInfo;
          if ( !EventInfoSkillGetDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSkillGetDialog_TypeInfo);
            v29 = EventInfoSkillGetDialog_TypeInfo;
          }
          MessageLocalizationKey = v29->static_fields->MessageLocalizationKey;
          condId = imagePartsGroupEntity->fields.condId;
          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &condId, v25, v26, v27);
          v32 = System_String__Format(MessageLocalizationKey, v31, 0LL);
          messageLabel = this->fields.messageLabel;
          v34 = v32;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v35 = LocalizationManager__Get(v34, 0LL);
          SkillLv = (QuestMaster_o *)System_String__Format(v35, QuestName, 0LL);
          if ( messageLabel )
          {
            UILabel__set_text(messageLabel, (System_String_o *)SkillLv, 0LL);
            v36 = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0LL);
            skillIcon = this->fields.skillIcon;
            v38 = v36;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetSkillIcon(skillIcon, v38, 0LL);
            skillExplanationTitle = this->fields.skillExplanationTitle;
            SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5741/*"EVENT_INFO_DISTANCE_TXT_"*/, 0LL);
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
                    SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMNAD_SPELL_RECV_TXT"*/, 0LL);
                    if ( closeLabel )
                    {
                      UILabel__set_text(closeLabel, (System_String_o *)SkillLv, 0LL);
                      BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
                      this->fields.closeCallback = closeAction;
                      sub_1C13CC8(
                        (PartyOrganizationUtility_o *)&this->fields.closeCallback,
                        (int64_t)closeAction,
                        v43,
                        v44,
                        v45,
                        v46,
                        v47,
                        v48);
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
      sub_1C13F80(SkillLv, v24);
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
  sub_1C13CC8(p_closeCallback, 0LL, v4, v5, v6, v7, v8, v9);
  this->fields.isClose = 0;
}


UnityEngine_GameObject_o *__fastcall EventInfoSkillGetDialog__get_closeBtnObject(
        EventInfoSkillGetDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4BB5D5E & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB5D5E = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C13F80(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}