void EventInfoSkillExplanationDialog___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct EventInfoSkillExplanationDialog_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC9233 & 1) == 0 )
  {
    sub_1C713B0(&EventInfoSkillExplanationDialog_TypeInfo);
    sub_1C713B0(&StringLiteral_5615/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/);
    sub_1C713B0(&StringLiteral_5614/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/);
    byte_4CC9233 = 1;
  }
  EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message01LocalizationKey = (struct System_String_o *)StringLiteral_5615/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EventInfoSkillExplanationDialog_TypeInfo->static_fields,
    StringLiteral_5615/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_5614/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/;
  static_fields = EventInfoSkillExplanationDialog_TypeInfo->static_fields;
  static_fields->Message02LocalizationKey = (struct System_String_o *)StringLiteral_5614/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->Message02LocalizationKey, v7, v9, v10, v11, v12, v13, v14);
}


void EventInfoSkillExplanationDialog___ctor(EventInfoSkillExplanationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CC9232 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC9232 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoSkillExplanationDialog__CheckAssertion(EventInfoSkillExplanationDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillExplanationDialog__Init(EventInfoSkillExplanationDialog_o *this, const MethodInfo *method)
{
  EventInfoSkillExplanationDialog_o *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7

  v2 = this;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  v2->fields.callback = 0;
  v2 = (EventInfoSkillExplanationDialog_o *)((char *)v2 + 168);
  LOBYTE(v2->monitor) = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v2, 0, v3, v4, v5, v6, v7, v8);
}


void EventInfoSkillExplanationDialog__OnClickCancelButton(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CC9230 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventInfoSkillExplanationDialog_OnClickCancelButton__);
    sub_1C713B0(&Method_EventInfoSkillExplanationDialog__OnClickCancelButton_b__16_0__);
    byte_4CC9230 = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoSkillExplanationDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillExplanationDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventInfoSkillExplanationDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoSkillExplanationDialog__OnClickCancelButton_b__16_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
    this->fields.isClose = 1;
  }
}


void EventInfoSkillExplanationDialog__OnClickDecideButton(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CC922F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_EventInfoSkillExplanationDialog_OnClickDecideButton__);
    sub_1C713B0(&Method_EventInfoSkillExplanationDialog__OnClickDecideButton_b__15_0__);
    byte_4CC922F = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoSkillExplanationDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillExplanationDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_EventInfoSkillExplanationDialog_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoSkillExplanationDialog__OnClickDecideButton_b__15_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
    this->fields.isClose = 1;
  }
}


void EventInfoSkillExplanationDialog__Open(
        EventInfoSkillExplanationDialog_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        CommonConfirmDialog_ClickDelegate_o *clickCallback,
        const MethodInfo *method)
{
  __int64 v7; // x24
  QuestMaster_o *SkillLv; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct CommonConfirmDialog_ClickDelegate_o **v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x23
  Il2CppObject *Master_object; // x24
  int32_t SkillId; // w25
  Il2CppObject *QuestName; // x23
  EventInfoSkillExplanationDialog_c *v27; // x8
  System_String_o *Message01LocalizationKey; // x24
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  UILabel_o *messageLabel01; // x24
  System_String_o *v32; // x25
  System_String_o *v33; // x0
  UILabel_o *messageLabel02; // x24
  System_String_o *v35; // x0
  int32_t v36; // w0
  UISprite_o *skillIcon; // x24
  int32_t v38; // w23
  UILabel_o *skillName; // x23
  UILabel_o *skillExplanationLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  struct CommonConfirmDialog_ClickDelegate_o *v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t condId; // [xsp+Ch] [xbp-54h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CC922E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&EventInfoSkillExplanationDialog_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_EventInfoSkillExplanationDialog___c__DisplayClass14_0__Open_b__0__);
    sub_1C713B0(&EventInfoSkillExplanationDialog___c__DisplayClass14_0_TypeInfo);
    sub_1C713B0(&StringLiteral_10889/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_1C713B0(&StringLiteral_10888/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    byte_4CC922E = 1;
  }
  entity = 0;
  v7 = sub_1C715FC(EventInfoSkillExplanationDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_30;
  *(_QWORD *)(v7 + 16) = clickCallback;
  v16 = (struct CommonConfirmDialog_ClickDelegate_o **)(v7 + 16);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)clickCallback, v10, v11, v12, v13, v14, v15);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.callback = 0;
  this->fields.isClose = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callback, 0, v17, v18, v19, v20, v21, v22);
  v23 = sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v23,
    (Il2CppObject *)v7,
    Method_EventInfoSkillExplanationDialog___c__DisplayClass14_0__Open_b__0__,
    0);
  if ( imagePartsGroupEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillId = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0);
    SkillLv = (QuestMaster_o *)ImagePartsGroupEntity__GetSkillLv(imagePartsGroupEntity, 0);
    if ( !Master_object )
      goto LABEL_30;
    SkillLv = (QuestMaster_o *)SkillLvMaster__TryGetEntity(
                                 (SkillLvMaster_o *)Master_object,
                                 &entity,
                                 SkillId,
                                 (int32_t)SkillLv,
                                 0);
    if ( ((unsigned __int8)SkillLv & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SkillLv = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( SkillLv )
      {
        SkillLv = (QuestMaster_o *)QuestMaster__getQuestEntity(SkillLv, imagePartsGroupEntity->fields.condId, 0);
        if ( SkillLv )
        {
          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)SkillLv, 0);
          v27 = EventInfoSkillExplanationDialog_TypeInfo;
          if ( !EventInfoSkillExplanationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSkillExplanationDialog_TypeInfo);
            v27 = EventInfoSkillExplanationDialog_TypeInfo;
          }
          Message01LocalizationKey = v27->static_fields->Message01LocalizationKey;
          condId = imagePartsGroupEntity->fields.condId;
          v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &condId);
          v30 = System_String__Format(Message01LocalizationKey, v29, 0);
          messageLabel01 = this->fields.messageLabel01;
          v32 = v30;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v33 = LocalizationManager__Get(v32, 0);
          SkillLv = (QuestMaster_o *)System_String__Format(v33, QuestName, 0);
          if ( messageLabel01 )
          {
            UILabel__set_text(messageLabel01, (System_String_o *)SkillLv, 0);
            messageLabel02 = this->fields.messageLabel02;
            v35 = LocalizationManager__Get(
                    EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message02LocalizationKey,
                    0);
            SkillLv = (QuestMaster_o *)System_String__Format(v35, QuestName, 0);
            if ( messageLabel02 )
            {
              UILabel__set_text(messageLabel02, (System_String_o *)SkillLv, 0);
              v36 = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0);
              skillIcon = this->fields.skillIcon;
              v38 = v36;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetSkillIcon(skillIcon, v38, 0);
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
                    decideLabel = this->fields.decideLabel;
                    SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10889/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0);
                    if ( decideLabel )
                    {
                      UILabel__set_text(decideLabel, (System_String_o *)SkillLv, 0);
                      cancelLabel = this->fields.cancelLabel;
                      SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10888/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)SkillLv, 0);
                        v43 = *v16;
                        this->fields.callback = *v16;
                        sub_1C71354(
                          (GrandQuestFolderBoardItem_o *)&this->fields.callback,
                          (int32_t)v43,
                          v44,
                          v45,
                          v46,
                          v47,
                          v48,
                          v49);
                        BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_30:
      sub_1C71608(SkillLv, v9);
    }
  }
  if ( !v23 )
    goto LABEL_30;
  (*(void (__fastcall **)(_QWORD, _QWORD))(v23 + 24))(*(_QWORD *)(v23 + 64), *(_QWORD *)(v23 + 40));
}


void EventInfoSkillExplanationDialog___OnClickCancelButton_b__16_0(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8
  struct CommonConfirmDialog_ClickDelegate_o **p_callback; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_callback = &this->fields.callback;
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.isClose = 0;
  this->fields.callback = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_callback, 0, v5, v6, v7, v8, v9, v10);
}


void EventInfoSkillExplanationDialog___OnClickDecideButton_b__15_0(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8
  struct CommonConfirmDialog_ClickDelegate_o **p_callback; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_callback = &this->fields.callback;
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.isClose = 0;
  this->fields.callback = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_callback, 0, v5, v6, v7, v8, v9, v10);
}


UnityEngine_GameObject_o *EventInfoSkillExplanationDialog__get_closeBtnObject(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CC9231 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9231 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C71608(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventInfoSkillExplanationDialog___c__DisplayClass14_0___ctor(
        EventInfoSkillExplanationDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSkillExplanationDialog___c__DisplayClass14_0___Open_b__0(
        EventInfoSkillExplanationDialog___c__DisplayClass14_0_o *this,
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