void __fastcall EventInfoSkillExplanationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct EventInfoSkillExplanationDialog_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B03F40 & 1) == 0 )
  {
    sub_1BC3008(&EventInfoSkillExplanationDialog_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_5572/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/, v4);
    sub_1BC3008(&StringLiteral_5571/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/, v5);
    byte_4B03F40 = 1;
  }
  EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message01LocalizationKey = (struct System_String_o *)StringLiteral_5572/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)EventInfoSkillExplanationDialog_TypeInfo->static_fields,
    StringLiteral_5572/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/,
    v2,
    v3);
  v6 = StringLiteral_5571/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/;
  static_fields = EventInfoSkillExplanationDialog_TypeInfo->static_fields;
  static_fields->Message02LocalizationKey = (struct System_String_o *)StringLiteral_5571/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->Message02LocalizationKey, v6, v8, v9);
}


void __fastcall EventInfoSkillExplanationDialog___ctor(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B03F3F & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4B03F3F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoSkillExplanationDialog__CheckAssertion(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoSkillExplanationDialog__Init(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  EventInfoSkillExplanationDialog_o *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  v2 = this;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  v2->fields.callback = 0LL;
  v2 = (EventInfoSkillExplanationDialog_o *)((char *)v2 + 168);
  LOBYTE(v2->monitor) = 0;
  sub_1BC2FAC((CGThumbnailListItem_o *)v2, 0, v3, v4);
}


void __fastcall EventInfoSkillExplanationDialog__OnClickCancelButton(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B03F3D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_EventInfoSkillExplanationDialog_OnClickCancelButton__, v3);
    sub_1BC3008(&Method_EventInfoSkillExplanationDialog__OnClickCancelButton_b__16_0__, v4);
    byte_4B03F3D = 1;
  }
  if ( !this->fields.isClose )
  {
    v5 = Method_EventInfoSkillExplanationDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillExplanationDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_EventInfoSkillExplanationDialog_OnClickCancelButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventInfoSkillExplanationDialog__OnClickCancelButton_b__16_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoSkillExplanationDialog__OnClickDecideButton(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B03F3C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_EventInfoSkillExplanationDialog_OnClickDecideButton__, v3);
    sub_1BC3008(&Method_EventInfoSkillExplanationDialog__OnClickDecideButton_b__15_0__, v4);
    byte_4B03F3C = 1;
  }
  if ( !this->fields.isClose )
  {
    v5 = Method_EventInfoSkillExplanationDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillExplanationDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BC3020(Method_EventInfoSkillExplanationDialog_OnClickDecideButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventInfoSkillExplanationDialog__OnClickDecideButton_b__15_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoSkillExplanationDialog__Open(
        EventInfoSkillExplanationDialog_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        CommonConfirmDialog_ClickDelegate_o *clickCallback,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x24
  QuestMaster_o *SkillLv; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct CommonConfirmDialog_ClickDelegate_o **v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x23
  Il2CppObject *Master_object; // x24
  int32_t SkillId; // w25
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *QuestName; // x23
  EventInfoSkillExplanationDialog_c *v33; // x8
  System_String_o *Message01LocalizationKey; // x24
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  UILabel_o *messageLabel01; // x24
  System_String_o *v38; // x25
  System_String_o *v39; // x0
  UILabel_o *messageLabel02; // x24
  System_String_o *v41; // x0
  int32_t v42; // w0
  UISprite_o *skillIcon; // x24
  int32_t v44; // w23
  UILabel_o *skillName; // x23
  UILabel_o *skillExplanationLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  struct CommonConfirmDialog_ClickDelegate_o *v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t condId; // [xsp+Ch] [xbp-54h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B03F3B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, imagePartsGroupEntity);
    sub_1BC3008(&AtlasManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&EventInfoSkillExplanationDialog_TypeInfo, v11);
    sub_1BC3008(&int_TypeInfo, v12);
    sub_1BC3008(&LocalizationManager_TypeInfo, v13);
    sub_1BC3008(&Method_EventInfoSkillExplanationDialog___c__DisplayClass14_0__Open_b__0__, v14);
    sub_1BC3008(&EventInfoSkillExplanationDialog___c__DisplayClass14_0_TypeInfo, v15);
    sub_1BC3008(&StringLiteral_10792/*"QUEST_MESSAGE_DLG_DECIDE"*/, v16);
    sub_1BC3008(&StringLiteral_10791/*"QUEST_MESSAGE_DLG_CANCEL"*/, v17);
    byte_4B03F3B = 1;
  }
  entity = 0LL;
  v18 = sub_1BC3254(EventInfoSkillExplanationDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_30;
  *(_QWORD *)(v18 + 16) = clickCallback;
  v23 = (struct CommonConfirmDialog_ClickDelegate_o **)(v18 + 16);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v18 + 16), (int32_t)clickCallback, v21, v22);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.callback = 0LL;
  this->fields.isClose = 0;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callback, 0, v24, v25);
  v26 = sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v26,
    (Il2CppObject *)v18,
    Method_EventInfoSkillExplanationDialog___c__DisplayClass14_0__Open_b__0__,
    0LL);
  if ( imagePartsGroupEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
    SkillId = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0LL);
    SkillLv = (QuestMaster_o *)ImagePartsGroupEntity__GetSkillLv(imagePartsGroupEntity, 0LL);
    if ( !Master_object )
      goto LABEL_30;
    SkillLv = (QuestMaster_o *)SkillLvMaster__TryGetEntity(
                                 (SkillLvMaster_o *)Master_object,
                                 &entity,
                                 SkillId,
                                 (int32_t)SkillLv,
                                 0LL);
    if ( ((unsigned __int8)SkillLv & 1) != 0 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      SkillLv = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( SkillLv )
      {
        SkillLv = (QuestMaster_o *)QuestMaster__getQuestEntity(SkillLv, imagePartsGroupEntity->fields.condId, 0LL);
        if ( SkillLv )
        {
          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)SkillLv, 0LL);
          v33 = EventInfoSkillExplanationDialog_TypeInfo;
          if ( !EventInfoSkillExplanationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSkillExplanationDialog_TypeInfo);
            v33 = EventInfoSkillExplanationDialog_TypeInfo;
          }
          Message01LocalizationKey = v33->static_fields->Message01LocalizationKey;
          condId = imagePartsGroupEntity->fields.condId;
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &condId, v29, v30, v31);
          v36 = System_String__Format(Message01LocalizationKey, v35, 0LL);
          messageLabel01 = this->fields.messageLabel01;
          v38 = v36;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v39 = LocalizationManager__Get(v38, 0LL);
          SkillLv = (QuestMaster_o *)System_String__Format(v39, QuestName, 0LL);
          if ( messageLabel01 )
          {
            UILabel__set_text(messageLabel01, (System_String_o *)SkillLv, 0LL);
            messageLabel02 = this->fields.messageLabel02;
            v41 = LocalizationManager__Get(
                    EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message02LocalizationKey,
                    0LL);
            SkillLv = (QuestMaster_o *)System_String__Format(v41, QuestName, 0LL);
            if ( messageLabel02 )
            {
              UILabel__set_text(messageLabel02, (System_String_o *)SkillLv, 0LL);
              v42 = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0LL);
              skillIcon = this->fields.skillIcon;
              v44 = v42;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetSkillIcon(skillIcon, v44, 0LL);
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
                    decideLabel = this->fields.decideLabel;
                    SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10792/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0LL);
                    if ( decideLabel )
                    {
                      UILabel__set_text(decideLabel, (System_String_o *)SkillLv, 0LL);
                      cancelLabel = this->fields.cancelLabel;
                      SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10791/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)SkillLv, 0LL);
                        v49 = *v23;
                        this->fields.callback = *v23;
                        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callback, (int32_t)v49, v50, v51);
                        BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
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
      sub_1BC3264(SkillLv, v20);
    }
  }
  if ( !v26 )
    goto LABEL_30;
  (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
}


void __fastcall EventInfoSkillExplanationDialog___OnClickCancelButton_b__16_0(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8
  struct CommonConfirmDialog_ClickDelegate_o **p_callback; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_callback = &this->fields.callback;
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.isClose = 0;
  this->fields.callback = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_callback, 0, v5, v6);
}


void __fastcall EventInfoSkillExplanationDialog___OnClickDecideButton_b__15_0(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8
  struct CommonConfirmDialog_ClickDelegate_o **p_callback; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_callback = &this->fields.callback;
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      1LL,
      *(_QWORD *)&callback->fields.extra_arg);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.isClose = 0;
  this->fields.callback = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_callback, 0, v5, v6);
}


UnityEngine_GameObject_o *__fastcall EventInfoSkillExplanationDialog__get_closeBtnObject(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B03F3E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B03F3E = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventInfoSkillExplanationDialog___c__DisplayClass14_0___ctor(
        EventInfoSkillExplanationDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoSkillExplanationDialog___c__DisplayClass14_0___Open_b__0(
        EventInfoSkillExplanationDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *clickCallback; // x8

  clickCallback = this->fields.clickCallback;
  if ( clickCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))clickCallback->fields.m_target)(
      clickCallback->fields.original_method_info,
      0LL,
      *(_QWORD *)&clickCallback->fields.extra_arg);
}