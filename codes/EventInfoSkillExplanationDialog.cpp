void __fastcall EventInfoSkillExplanationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x1
  struct EventInfoSkillExplanationDialog_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C23653 & 1) == 0 )
  {
    sub_1C3B764(&EventInfoSkillExplanationDialog_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_5746/*"Effect/BattleStart/FinalBattle03/"*/, v8);
    sub_1C3B764(&StringLiteral_5745/*"Effect/BattleStart/FinalBattle02"*/, v9);
    byte_4C23653 = 1;
  }
  EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message01LocalizationKey = (struct System_String_o *)StringLiteral_5746/*"Effect/BattleStart/FinalBattle03/"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventInfoSkillExplanationDialog_TypeInfo->static_fields,
    StringLiteral_5746/*"Effect/BattleStart/FinalBattle03/"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_5745/*"Effect/BattleStart/FinalBattle02"*/;
  static_fields = EventInfoSkillExplanationDialog_TypeInfo->static_fields;
  static_fields->Message02LocalizationKey = (struct System_String_o *)StringLiteral_5745/*"Effect/BattleStart/FinalBattle02"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->Message02LocalizationKey, v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall EventInfoSkillExplanationDialog___ctor(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C23652 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C23652 = 1;
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  v2 = this;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  v2->fields.callback = 0LL;
  v2 = (EventInfoSkillExplanationDialog_o *)((char *)v2 + 168);
  LOBYTE(v2->monitor) = 0;
  sub_1C3B708((PartyOrganizationUtility_o *)v2, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4C23650 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_EventInfoSkillExplanationDialog_OnClickCancelButton__, v3);
    sub_1C3B764(&Method_EventInfoSkillExplanationDialog__OnClickCancelButton_b__16_0__, v4);
    byte_4C23650 = 1;
  }
  if ( !this->fields.isClose )
  {
    v5 = Method_EventInfoSkillExplanationDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillExplanationDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_EventInfoSkillExplanationDialog_OnClickCancelButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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

  if ( (byte_4C2364F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_EventInfoSkillExplanationDialog_OnClickDecideButton__, v3);
    sub_1C3B764(&Method_EventInfoSkillExplanationDialog__OnClickDecideButton_b__15_0__, v4);
    byte_4C2364F = 1;
  }
  if ( !this->fields.isClose )
  {
    v5 = Method_EventInfoSkillExplanationDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillExplanationDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C3B77C(Method_EventInfoSkillExplanationDialog_OnClickDecideButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3B748(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0LL);
    v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct CommonConfirmDialog_ClickDelegate_o **v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x23
  Il2CppObject *Master_object; // x24
  int32_t SkillId; // w25
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *QuestName; // x23
  EventInfoSkillExplanationDialog_c *v41; // x8
  System_String_o *Message01LocalizationKey; // x24
  Il2CppObject *v43; // x0
  System_String_o *v44; // x0
  UILabel_o *messageLabel01; // x24
  System_String_o *v46; // x25
  System_String_o *v47; // x0
  UILabel_o *messageLabel02; // x24
  System_String_o *v49; // x0
  int32_t v50; // w0
  UISprite_o *skillIcon; // x24
  int32_t v52; // w23
  UILabel_o *skillName; // x23
  UILabel_o *skillExplanationLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  struct CommonConfirmDialog_ClickDelegate_o *v57; // x1
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int32_t condId; // [xsp+Ch] [xbp-54h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C2364E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, imagePartsGroupEntity);
    sub_1C3B764(&AtlasManager_TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&EventInfoSkillExplanationDialog_TypeInfo, v11);
    sub_1C3B764(&int_TypeInfo, v12);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&Method_EventInfoSkillExplanationDialog___c__DisplayClass14_0__Open_b__0__, v14);
    sub_1C3B764(&EventInfoSkillExplanationDialog___c__DisplayClass14_0_TypeInfo, v15);
    sub_1C3B764(&StringLiteral_11111/*"Return type <Byte> for Java method call is obsolete, use return type <SByte> instead"*/, v16);
    sub_1C3B764(&StringLiteral_11110/*"Return argument '"*/, v17);
    byte_4C2364E = 1;
  }
  entity = 0LL;
  v18 = sub_1C3B9B0(EventInfoSkillExplanationDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_30;
  *(_QWORD *)(v18 + 16) = clickCallback;
  v27 = (struct CommonConfirmDialog_ClickDelegate_o **)(v18 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)clickCallback, v21, v22, v23, v24, v25, v26);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  this->fields.callback = 0LL;
  this->fields.isClose = 0;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callback, 0LL, v28, v29, v30, v31, v32, v33);
  v34 = sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v34,
    (Il2CppObject *)v18,
    Method_EventInfoSkillExplanationDialog___c__DisplayClass14_0__Open_b__0__,
    0LL);
  if ( imagePartsGroupEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
      SkillLv = (QuestMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestMaster___);
      if ( SkillLv )
      {
        SkillLv = (QuestMaster_o *)QuestMaster__getQuestEntity(SkillLv, imagePartsGroupEntity->fields.condId, 0LL);
        if ( SkillLv )
        {
          QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)SkillLv, 0LL);
          v41 = EventInfoSkillExplanationDialog_TypeInfo;
          if ( !EventInfoSkillExplanationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoSkillExplanationDialog_TypeInfo);
            v41 = EventInfoSkillExplanationDialog_TypeInfo;
          }
          Message01LocalizationKey = v41->static_fields->Message01LocalizationKey;
          condId = imagePartsGroupEntity->fields.condId;
          v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &condId, v37, v38, v39);
          v44 = System_String__Format(Message01LocalizationKey, v43, 0LL);
          messageLabel01 = this->fields.messageLabel01;
          v46 = v44;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v47 = LocalizationManager__Get(v46, 0LL);
          SkillLv = (QuestMaster_o *)System_String__Format(v47, QuestName, 0LL);
          if ( messageLabel01 )
          {
            UILabel__set_text(messageLabel01, (System_String_o *)SkillLv, 0LL);
            messageLabel02 = this->fields.messageLabel02;
            v49 = LocalizationManager__Get(
                    EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message02LocalizationKey,
                    0LL);
            SkillLv = (QuestMaster_o *)System_String__Format(v49, QuestName, 0LL);
            if ( messageLabel02 )
            {
              UILabel__set_text(messageLabel02, (System_String_o *)SkillLv, 0LL);
              v50 = ImagePartsGroupEntity__GetSkillId(imagePartsGroupEntity, 0LL);
              skillIcon = this->fields.skillIcon;
              v52 = v50;
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              AtlasManager__SetSkillIcon(skillIcon, v52, 0LL);
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
                    SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11111/*"Return type <Byte> for Java method call is obsolete, use return type <SByte> instead"*/, 0LL);
                    if ( decideLabel )
                    {
                      UILabel__set_text(decideLabel, (System_String_o *)SkillLv, 0LL);
                      cancelLabel = this->fields.cancelLabel;
                      SkillLv = (QuestMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"Return argument '"*/, 0LL);
                      if ( cancelLabel )
                      {
                        UILabel__set_text(cancelLabel, (System_String_o *)SkillLv, 0LL);
                        v57 = *v27;
                        this->fields.callback = *v27;
                        sub_1C3B708(
                          (PartyOrganizationUtility_o *)&this->fields.callback,
                          (int64_t)v57,
                          v58,
                          v59,
                          v60,
                          v61,
                          v62,
                          v63);
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
      sub_1C3B9C0(SkillLv, v20);
    }
  }
  if ( !v34 )
    goto LABEL_30;
  (*(void (__fastcall **)(_QWORD, _QWORD))(v34 + 24))(*(_QWORD *)(v34 + 64), *(_QWORD *)(v34 + 40));
}


void __fastcall EventInfoSkillExplanationDialog___OnClickCancelButton_b__16_0(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8
  struct CommonConfirmDialog_ClickDelegate_o **p_callback; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

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
  sub_1C3B708((PartyOrganizationUtility_o *)p_callback, 0LL, v5, v6, v7, v8, v9, v10);
}


void __fastcall EventInfoSkillExplanationDialog___OnClickDecideButton_b__15_0(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8
  struct CommonConfirmDialog_ClickDelegate_o **p_callback; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

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
  sub_1C3B708((PartyOrganizationUtility_o *)p_callback, 0LL, v5, v6, v7, v8, v9, v10);
}


UnityEngine_GameObject_o *__fastcall EventInfoSkillExplanationDialog__get_closeBtnObject(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C23651 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23651 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C3B9C0(0LL, v4);
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