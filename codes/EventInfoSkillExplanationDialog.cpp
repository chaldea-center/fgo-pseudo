void EventInfoSkillExplanationDialog___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventInfoSkillExplanationDialog_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_597264B & 1) == 0 )
  {
    sub_2213A60(&EventInfoSkillExplanationDialog_TypeInfo);
    sub_2213A60(&StringLiteral_5834/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/);
    sub_2213A60(&StringLiteral_5833/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/);
    byte_597264B = 1;
  }
  v7 = StringLiteral_5834/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/;
  EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message01LocalizationKey = (struct System_String_o *)StringLiteral_5834/*"EVENT_INFO_SKILL_EXPLANATION_DIALOG_TEXT_{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoSkillExplanationDialog_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_5833/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/;
  static_fields = EventInfoSkillExplanationDialog_TypeInfo->static_fields;
  static_fields->Message02LocalizationKey = (struct System_String_o *)StringLiteral_5833/*"EVENT_INFO_SKILL_EXPLANATIOIN_MESSAGE_02"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->Message02LocalizationKey,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void EventInfoSkillExplanationDialog___ctor(EventInfoSkillExplanationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_597264A & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_597264A = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoSkillExplanationDialog__CheckAssertion(EventInfoSkillExplanationDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillExplanationDialog__Init(EventInfoSkillExplanationDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.callback = 0;
  this->fields.isClose = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callback, 0, v3, v4, v5, v6, v7, v8);
}


void EventInfoSkillExplanationDialog__OnClickCancelButton(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5972648 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillExplanationDialog_OnClickCancelButton__);
    sub_2213A60(&Method_EventInfoSkillExplanationDialog__OnClickCancelButton_b__24_0__);
    byte_5972648 = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoSkillExplanationDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillExplanationDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoSkillExplanationDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoSkillExplanationDialog__OnClickCancelButton_b__24_0__,
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

  if ( (byte_5972647 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillExplanationDialog_OnClickDecideButton__);
    sub_2213A60(&Method_EventInfoSkillExplanationDialog__OnClickDecideButton_b__23_0__);
    byte_5972647 = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoSkillExplanationDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoSkillExplanationDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventInfoSkillExplanationDialog_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoSkillExplanationDialog__OnClickDecideButton_b__23_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
    this->fields.isClose = 1;
  }
}


void EventInfoSkillExplanationDialog__Open(
        EventInfoSkillExplanationDialog_o *this,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        int32_t eventId,
        CommonConfirmDialog_ClickDelegate_o *clickCallback,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Action_o *v36; // x21
  __int64 v37; // x20
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w20
  System_Action_o *v45; // x21
  __int64 v46; // x1

  if ( (byte_5972645 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillExplanationDialog___c__DisplayClass21_0__Open_b__0__);
    sub_2213A60(&Method_EventInfoSkillExplanationDialog___c__DisplayClass21_0__Open_b__1__);
    sub_2213A60(&EventInfoSkillExplanationDialog___c__DisplayClass21_0_TypeInfo);
    byte_5972645 = 1;
  }
  v9 = sub_2213CCC(EventInfoSkillExplanationDialog___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = clickCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)clickCallback, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = imagePartsGroupEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v9 + 24),
    (int32_t)imagePartsGroupEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)(v9 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)this, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v9 + 48) = eventId;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.callback = 0;
  this->fields.isClose = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callback, 0, v30, v31, v32, v33, v34, v35);
  v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v9,
    Method_EventInfoSkillExplanationDialog___c__DisplayClass21_0__Open_b__0__,
    0);
  *(_QWORD *)(v9 + 32) = v36;
  v37 = v9 + 32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v36, v38, v39, v40, v41, v42, v43);
  if ( !*(_QWORD *)(v9 + 24) )
  {
    if ( *(_QWORD *)v37 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v37 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v37 + 64LL),
        *(_QWORD *)(*(_QWORD *)v37 + 40LL));
      return;
    }
LABEL_10:
    sub_2213CDC(v10, v11);
  }
  v44 = *(_DWORD *)(v9 + 48);
  v45 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v9,
    Method_EventInfoSkillExplanationDialog___c__DisplayClass21_0__Open_b__1__,
    0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v46);
  AtlasManager__LoadEventUI_47569188(v44, v45, 1, 0);
}


void EventInfoSkillExplanationDialog__Open_51534580(
        EventInfoSkillExplanationDialog_o *this,
        EventJobEntity_o *eventJobEntity,
        int32_t questId,
        CommonConfirmDialog_ClickDelegate_o *clickCallback,
        const MethodInfo *method)
{
  __int64 v9; // x25
  SkillLvMaster_o *Master_object; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct CommonConfirmDialog_ClickDelegate_o **v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x24
  __int64 v26; // x1
  Il2CppObject *QuestName; // x24
  EventInfoSkillExplanationDialog_c *v28; // x8
  System_String_o **p_Message01LocalizationKey; // x8
  System_String_o *v30; // x25
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x25
  UILabel_o *messageLabel01; // x23
  System_String_o *v35; // x0
  UILabel_o *messageLabel02; // x23
  System_String_o *v37; // x0
  __int64 v38; // x1
  UISprite_o *skillIcon; // x23
  int32_t skillId; // w22
  UILabel_o *skillName; // x22
  UILabel_o *skillExplanationLabel; // x22
  UILabel_o *decideLabel; // x22
  UILabel_o *cancelLabel; // x22
  struct CommonConfirmDialog_ClickDelegate_o *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // [xsp+4h] [xbp-5Ch] BYREF
  Il2CppObject *v53; // [xsp+8h] [xbp-58h] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5972646 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&EventInfoSkillExplanationDialog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillExplanationDialog___c__DisplayClass22_0__Open_b__0__);
    sub_2213A60(&EventInfoSkillExplanationDialog___c__DisplayClass22_0_TypeInfo);
    sub_2213A60(&StringLiteral_11358/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_2213A60(&StringLiteral_11357/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    byte_5972646 = 1;
  }
  entity = 0;
  v53 = 0;
  v9 = sub_2213CCC(EventInfoSkillExplanationDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_38;
  *(_QWORD *)(v9 + 16) = clickCallback;
  v18 = (struct CommonConfirmDialog_ClickDelegate_o **)(v9 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)clickCallback, v12, v13, v14, v15, v16, v17);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.callback = 0;
  this->fields.isClose = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callback, 0, v19, v20, v21, v22, v23, v24);
  v25 = sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    (System_Action_o *)v25,
    (Il2CppObject *)v9,
    Method_EventInfoSkillExplanationDialog___c__DisplayClass22_0__Open_b__0__,
    0);
  if ( eventJobEntity && questId > 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    Master_object = (SkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !Master_object )
      goto LABEL_38;
    Master_object = (SkillLvMaster_o *)SkillLvMaster__TryGetEntity(
                                         Master_object,
                                         &entity,
                                         eventJobEntity->fields.skillId,
                                         eventJobEntity->fields.skillLv,
                                         0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
      Master_object = (SkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillMaster___);
      if ( !Master_object )
        goto LABEL_38;
      Master_object = (SkillLvMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                           &v53,
                                           eventJobEntity->fields.skillId,
                                           (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
        Master_object = (SkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
        if ( Master_object )
        {
          Master_object = (SkillLvMaster_o *)QuestMaster__getQuestEntity((QuestMaster_o *)Master_object, questId, 0);
          if ( Master_object )
          {
            QuestName = (Il2CppObject *)QuestEntity__getQuestName((QuestEntity_o *)Master_object, 0);
            v28 = EventInfoSkillExplanationDialog_TypeInfo;
            if ( !*(&EventInfoSkillExplanationDialog_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(EventInfoSkillExplanationDialog_TypeInfo, v26);
              v28 = EventInfoSkillExplanationDialog_TypeInfo;
            }
            p_Message01LocalizationKey = &v28->static_fields->Message01LocalizationKey;
            v52 = questId;
            v30 = *p_Message01LocalizationKey;
            v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v52);
            v33 = System_String__Format(v30, v31, 0);
            messageLabel01 = this->fields.messageLabel01;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
            v35 = LocalizationManager__Get(v33, 0);
            Master_object = (SkillLvMaster_o *)System_String__Format(v35, QuestName, 0);
            if ( messageLabel01 )
            {
              UILabel__set_text(messageLabel01, (System_String_o *)Master_object, 0);
              messageLabel02 = this->fields.messageLabel02;
              v37 = LocalizationManager__Get(
                      EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message02LocalizationKey,
                      0);
              Master_object = (SkillLvMaster_o *)System_String__Format(v37, QuestName, 0);
              if ( messageLabel02 )
              {
                UILabel__set_text(messageLabel02, (System_String_o *)Master_object, 0);
                skillIcon = this->fields.skillIcon;
                skillId = eventJobEntity->fields.skillId;
                if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
                AtlasManager__SetSkillIcon(skillIcon, skillId, 0);
                GameObjectHelper__SetActiveSafely(this->fields.imagePartsSkillIconObject, 0, 0);
                GameObjectHelper__SetActiveSafely(this->fields.skillIconObject, 1, 0);
                Master_object = (SkillLvMaster_o *)v53;
                if ( v53 )
                {
                  skillName = this->fields.skillName;
                  Master_object = (SkillLvMaster_o *)SkillEntity__getName((SkillEntity_o *)v53, 0);
                  if ( skillName )
                  {
                    UILabel__set_text(skillName, (System_String_o *)Master_object, 0);
                    Master_object = (SkillLvMaster_o *)entity;
                    if ( entity )
                    {
                      skillExplanationLabel = this->fields.skillExplanationLabel;
                      Master_object = (SkillLvMaster_o *)SkillLvEntity__getDetail(entity, 0, 0, 0);
                      if ( skillExplanationLabel )
                      {
                        UILabel__set_text(skillExplanationLabel, (System_String_o *)Master_object, 0);
                        decideLabel = this->fields.decideLabel;
                        Master_object = (SkillLvMaster_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_11358/*"QUEST_MESSAGE_DLG_DECIDE"*/,
                                                             0);
                        if ( decideLabel )
                        {
                          UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0);
                          cancelLabel = this->fields.cancelLabel;
                          Master_object = (SkillLvMaster_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_11357/*"QUEST_MESSAGE_DLG_CANCEL"*/,
                                                               0);
                          if ( cancelLabel )
                          {
                            UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
                            v45 = *v18;
                            this->fields.callback = *v18;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)&this->fields.callback,
                              (int32_t)v45,
                              v46,
                              v47,
                              v48,
                              v49,
                              v50,
                              v51);
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
        }
LABEL_38:
        sub_2213CDC(Master_object, v11);
      }
    }
    if ( !v25 )
      goto LABEL_38;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v25 + 24))(*(_QWORD *)(v25 + 64), *(_QWORD *)(v25 + 40));
  }
  else
  {
    if ( !v25 )
      goto LABEL_38;
    (*(void (__fastcall **)(_QWORD, _QWORD))(v25 + 24))(*(_QWORD *)(v25 + 64), *(_QWORD *)(v25 + 40));
  }
}


void EventInfoSkillExplanationDialog___OnClickCancelButton_b__24_0(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8
  struct CommonConfirmDialog_ClickDelegate_o **p_callback; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_callback, 0, v5, v6, v7, v8, v9, v10);
}


void EventInfoSkillExplanationDialog___OnClickDecideButton_b__23_0(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8
  struct CommonConfirmDialog_ClickDelegate_o **p_callback; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_callback, 0, v5, v6, v7, v8, v9, v10);
}


UnityEngine_GameObject_o *EventInfoSkillExplanationDialog__get_closeBtnObject(
        EventInfoSkillExplanationDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_5972649 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972649 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_2213CDC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventInfoSkillExplanationDialog___c__DisplayClass21_0___ctor(
        EventInfoSkillExplanationDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSkillExplanationDialog___c__DisplayClass21_0___Open_b__0(
        EventInfoSkillExplanationDialog___c__DisplayClass21_0_o *this,
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


void EventInfoSkillExplanationDialog___c__DisplayClass21_0___Open_b__1(
        EventInfoSkillExplanationDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  int v3; // w8
  __int64 Master_object; // x0
  __int64 v5; // x1
  SkillLvMaster_o *v6; // x20
  int32_t v7; // w21
  struct ImagePartsGroupEntity_o *imagePartsGroupEntity; // x8
  Il2CppObject *v9; // x20
  struct ImagePartsGroupEntity_o *v10; // x8
  System_String_o *Message01LocalizationKey; // x21
  Il2CppObject *v12; // x0
  struct EventInfoSkillExplanationDialog_o *_4__this; // x8
  System_String_o *v14; // x22
  UILabel_o *messageLabel01; // x21
  System_String_o *v16; // x0
  struct EventInfoSkillExplanationDialog_o *v17; // x8
  UILabel_o *messageLabel02; // x21
  System_String_o *v19; // x0
  struct EventInfoSkillExplanationDialog_o *v20; // x8
  struct ImagePartsGroupEntity_o *v21; // x9
  int32_t v22; // w20
  System_String_o *imagePartsIconSpriteNameFormat; // x21
  struct ImagePartsGroupEntity_o *v24; // x8
  Il2CppObject *v25; // x22
  Il2CppObject *v26; // x0
  struct EventInfoSkillExplanationDialog_o *v27; // x8
  System_String_o *v28; // x21
  int32_t eventId; // w22
  UISprite_o *imagePartsIconSprite; // x23
  struct EventInfoSkillExplanationDialog_o *v31; // x8
  char v32; // w21
  UISprite_o *imagePartsSkillIcon; // x22
  struct EventInfoSkillExplanationDialog_o *v34; // x8
  struct EventInfoSkillExplanationDialog_o *v35; // x8
  UnityEngine_GameObject_o *imagePartsSkillIconObject; // x0
  bool v37; // w1
  struct System_Action_o *onFailed; // x8
  UISprite_o *skillIcon; // x22
  struct EventInfoSkillExplanationDialog_o *v40; // x8
  struct EventInfoSkillExplanationDialog_o *v41; // x8
  struct EventInfoSkillExplanationDialog_o *v42; // x8
  UILabel_o *skillName; // x20
  struct EventInfoSkillExplanationDialog_o *v44; // x8
  UILabel_o *skillExplanationLabel; // x20
  struct EventInfoSkillExplanationDialog_o *v46; // x8
  UILabel_o *decideLabel; // x20
  struct EventInfoSkillExplanationDialog_o *v48; // x8
  UILabel_o *cancelLabel; // x20
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct CommonConfirmDialog_ClickDelegate_o *clickCallback; // x1
  int32_t imageValue; // [xsp+Ch] [xbp-54h] BYREF
  int32_t typeValue; // [xsp+10h] [xbp-50h] BYREF
  int32_t condId; // [xsp+14h] [xbp-4Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_597264C & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventInfoSkillExplanationDialog_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_11358/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_2213A60(&StringLiteral_11357/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    byte_597264C = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !this->fields.imagePartsGroupEntity )
    goto LABEL_61;
  v6 = (SkillLvMaster_o *)Master_object;
  Master_object = ImagePartsGroupEntity__GetSkillId(this->fields.imagePartsGroupEntity, 0);
  if ( !this->fields.imagePartsGroupEntity )
    goto LABEL_61;
  v7 = Master_object;
  Master_object = ImagePartsGroupEntity__GetSkillLv(this->fields.imagePartsGroupEntity, 0);
  if ( !v6 )
    goto LABEL_61;
  Master_object = SkillLvMaster__TryGetEntity(v6, &entity, v7, Master_object, 0);
  if ( (Master_object & 1) == 0 )
  {
    onFailed = this->fields.onFailed;
    if ( onFailed )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))onFailed->fields.invoke_impl)(
        onFailed->fields.method_code,
        onFailed->fields.method);
      return;
    }
    goto LABEL_61;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  imagePartsGroupEntity = this->fields.imagePartsGroupEntity;
  if ( !imagePartsGroupEntity )
    goto LABEL_61;
  if ( !Master_object )
    goto LABEL_61;
  Master_object = (__int64)QuestMaster__getQuestEntity(
                             (QuestMaster_o *)Master_object,
                             imagePartsGroupEntity->fields.condId,
                             0);
  if ( !Master_object )
    goto LABEL_61;
  Master_object = (__int64)QuestEntity__getQuestName((QuestEntity_o *)Master_object, 0);
  v9 = (Il2CppObject *)Master_object;
  if ( !*(&EventInfoSkillExplanationDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoSkillExplanationDialog_TypeInfo, v5);
  v10 = this->fields.imagePartsGroupEntity;
  if ( !v10 )
    goto LABEL_61;
  Message01LocalizationKey = EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message01LocalizationKey;
  condId = v10->fields.condId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &condId);
  Master_object = (__int64)System_String__Format(Message01LocalizationKey, v12, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_61;
  v14 = (System_String_o *)Master_object;
  messageLabel01 = _4__this->fields.messageLabel01;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  v16 = LocalizationManager__Get(v14, 0);
  Master_object = (__int64)System_String__Format(v16, v9, 0);
  if ( !messageLabel01 )
    goto LABEL_61;
  UILabel__set_text(messageLabel01, (System_String_o *)Master_object, 0);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_61;
  messageLabel02 = v17->fields.messageLabel02;
  v19 = LocalizationManager__Get(EventInfoSkillExplanationDialog_TypeInfo->static_fields->Message02LocalizationKey, 0);
  Master_object = (__int64)System_String__Format(v19, v9, 0);
  if ( !messageLabel02 )
    goto LABEL_61;
  UILabel__set_text(messageLabel02, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.imagePartsGroupEntity;
  if ( !Master_object )
    goto LABEL_61;
  Master_object = ImagePartsGroupEntity__GetSkillId((ImagePartsGroupEntity_o *)Master_object, 0);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_61;
  v21 = this->fields.imagePartsGroupEntity;
  if ( !v21 )
    goto LABEL_61;
  v22 = Master_object;
  imagePartsIconSpriteNameFormat = v20->fields.imagePartsIconSpriteNameFormat;
  typeValue = v21->fields.typeValue;
  Master_object = j_il2cpp_value_box_0(qword_5984348, &typeValue);
  v24 = this->fields.imagePartsGroupEntity;
  if ( !v24 )
    goto LABEL_61;
  v25 = (Il2CppObject *)Master_object;
  imageValue = v24->fields.imageValue;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &imageValue);
  Master_object = (__int64)System_String__Format_75697880(imagePartsIconSpriteNameFormat, v25, v26, 0);
  v27 = this->fields.__4__this;
  if ( !v27 )
    goto LABEL_61;
  v28 = (System_String_o *)Master_object;
  eventId = this->fields.eventId;
  imagePartsIconSprite = v27->fields.imagePartsIconSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5);
  Master_object = AtlasManager__SetEventUI_47569484(eventId, imagePartsIconSprite, v28, 0);
  v31 = this->fields.__4__this;
  v32 = Master_object;
  if ( (Master_object & 1) != 0 )
  {
    if ( v31 )
    {
      imagePartsSkillIcon = v31->fields.imagePartsSkillIcon;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5);
      Master_object = AtlasManager__SetSkillIcon(imagePartsSkillIcon, v22, 0);
      v34 = this->fields.__4__this;
      if ( v34 )
      {
        Master_object = AtlasManager__SetEventUI_47569484(
                          this->fields.eventId,
                          v34->fields.imagePartsSkillIconBg,
                          v34->fields.imagePartsSkillIconBgName,
                          0);
        v35 = this->fields.__4__this;
        if ( v35 )
        {
          imagePartsSkillIconObject = v35->fields.imagePartsSkillIconObject;
          v37 = 1;
          goto LABEL_44;
        }
      }
    }
LABEL_61:
    sub_2213CDC(Master_object, v5);
  }
  if ( !v31 )
    goto LABEL_61;
  skillIcon = v31->fields.skillIcon;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5);
  Master_object = AtlasManager__SetSkillIcon(skillIcon, v22, 0);
  v40 = this->fields.__4__this;
  if ( !v40 )
    goto LABEL_61;
  imagePartsSkillIconObject = v40->fields.imagePartsSkillIconObject;
  v37 = 0;
LABEL_44:
  GameObjectHelper__SetActiveSafely(imagePartsSkillIconObject, v37, 0);
  v41 = this->fields.__4__this;
  if ( !v41 )
    goto LABEL_61;
  GameObjectHelper__SetActiveSafely(v41->fields.skillIconObject, (v32 & 1) == 0, 0);
  v42 = this->fields.__4__this;
  if ( !v42 )
    goto LABEL_61;
  Master_object = (__int64)this->fields.imagePartsGroupEntity;
  if ( !Master_object )
    goto LABEL_61;
  skillName = v42->fields.skillName;
  Master_object = (__int64)ImagePartsGroupEntity__GetSkillName((ImagePartsGroupEntity_o *)Master_object, 0);
  if ( !skillName )
    goto LABEL_61;
  UILabel__set_text(skillName, (System_String_o *)Master_object, 0);
  v44 = this->fields.__4__this;
  if ( !v44 )
    goto LABEL_61;
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_61;
  skillExplanationLabel = v44->fields.skillExplanationLabel;
  Master_object = (__int64)SkillLvEntity__getDetail(entity, 0, 0, 0);
  if ( !skillExplanationLabel )
    goto LABEL_61;
  UILabel__set_text(skillExplanationLabel, (System_String_o *)Master_object, 0);
  v46 = this->fields.__4__this;
  if ( !v46 )
    goto LABEL_61;
  decideLabel = v46->fields.decideLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11358/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0);
  if ( !decideLabel )
    goto LABEL_61;
  UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0);
  v48 = this->fields.__4__this;
  if ( !v48 )
    goto LABEL_61;
  cancelLabel = v48->fields.cancelLabel;
  Master_object = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_11357/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_61;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  Master_object = (__int64)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_61;
  clickCallback = this->fields.clickCallback;
  *(_QWORD *)(Master_object + 224) = clickCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(Master_object + 224),
    (int32_t)clickCallback,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  Master_object = (__int64)this->fields.__4__this;
  if ( !Master_object )
    goto LABEL_61;
  BaseDialog__Open((BaseDialog_o *)Master_object, 0, 0, 0, 0);
}


void EventInfoSkillExplanationDialog___c__DisplayClass22_0___ctor(
        EventInfoSkillExplanationDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoSkillExplanationDialog___c__DisplayClass22_0___Open_b__0(
        EventInfoSkillExplanationDialog___c__DisplayClass22_0_o *this,
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