void EventInfoAreaImproveConfirmDialog___ctor(EventInfoAreaImproveConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CA50 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D2CA50 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoAreaImproveConfirmDialog__CheckSerializeFieldSetting(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
        EventInfoAreaImproveConfirmDialog_o *this,
        int32_t eventId,
        int32_t spotId,
        EventCooltimeRewardEntity_o *eventCooltimeRewardEnt,
        const MethodInfo *method)
{
  UserEventCooltimeRewardMaster_o *Master_object; // x0
  __int64 v9; // x1
  int32_t *p_lv; // x8

  if ( (byte_4D2CA4C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2CA4C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                       Master_object,
                                                       eventId,
                                                       spotId,
                                                       0);
  if ( !Master_object )
  {
    if ( eventCooltimeRewardEnt )
    {
      p_lv = &eventCooltimeRewardEnt->fields.lv;
      return *p_lv;
    }
LABEL_11:
    sub_1C942F0(Master_object, v9);
  }
  p_lv = &Master_object->fields.revision;
  return *p_lv;
}


void EventInfoAreaImproveConfirmDialog__Init(EventInfoAreaImproveConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *consumeItemTitle; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2CA4A & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_5511/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/);
    sub_1C94098(&StringLiteral_5515/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/);
    sub_1C94098(&StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C94098(&StringLiteral_5510/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/);
    sub_1C94098(&StringLiteral_5512/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_5513/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/);
    byte_4D2CA4A = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  decideLabel = this->fields.decideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5515/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, 0);
  if ( !decideLabel )
    goto LABEL_13;
  UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0);
  cancelLabel = this->fields.cancelLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelLabel )
    goto LABEL_13;
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0);
  messageLabel = this->fields.messageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5512/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, (System_String_o *)titleLabel, 0);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5510/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/, 0);
  if ( !cautionMessageLabel
    || (UILabel__set_text(cautionMessageLabel, (System_String_o *)titleLabel, 0),
        subTitleLabel = this->fields.subTitleLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5513/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/, 0),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)titleLabel, 0),
        consumeItemTitle = this->fields.consumeItemTitle,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5511/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/, 0),
        !consumeItemTitle) )
  {
LABEL_13:
    sub_1C942F0(titleLabel, v3);
  }
  UILabel__set_text(consumeItemTitle, (System_String_o *)titleLabel, 0);
  this->fields.callback = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callback, 0, v11, v12, v13, v14, v15, v16);
}


void EventInfoAreaImproveConfirmDialog__OnClickCancelButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D2CA4E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__);
    sub_1C94098(&Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__);
    byte_4D2CA4E = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
    this->fields.isClose = 1;
  }
}


void EventInfoAreaImproveConfirmDialog__OnClickDecideButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct EventAreaImproveResultInfo_o *tempAreaImproveResultInfo; // x20
  TerminalPramsManager_c *v10; // x0
  GrandQuestFolderBoardItem_o *p_eventAreaImproveResultInfo; // x0
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  System_Action_o *v14; // x20

  if ( (byte_4D2CA4D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__);
    sub_1C94098(&Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D2CA4D = 1;
  }
  if ( !this->fields.isClose )
  {
    tempAreaImproveResultInfo = this->fields.tempAreaImproveResultInfo;
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    p_eventAreaImproveResultInfo = (GrandQuestFolderBoardItem_o *)&v10->static_fields->eventAreaImproveResultInfo;
    p_eventAreaImproveResultInfo->klass = (GrandQuestFolderBoardItem_c *)tempAreaImproveResultInfo;
    sub_1C9403C(p_eventAreaImproveResultInfo, (int32_t)tempAreaImproveResultInfo, v2, v3, v4, v5, v6, v7);
    v12 = Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C940B0(Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C9407C(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0, 0);
    v14 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0);
    this->fields.isClose = 1;
  }
}


void EventInfoAreaImproveConfirmDialog__Open(
        EventInfoAreaImproveConfirmDialog_o *this,
        int32_t eventId,
        int32_t questId,
        CommonConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x24
  void *Master_object; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct CommonConfirmDialog_ClickDelegate_o **v18; // x20
  const MethodInfo *v19; // x1
  System_Action_o *v20; // x23
  QuestEntity_o *v21; // x22
  int32_t v22; // w25
  EventInfoAreaImproveConfirmDialog_o *AvailableMaxLevelEntity; // x0
  const MethodInfo *v24; // x4
  EventInfoAreaImproveConfirmDialog_o *v25; // x24
  int32_t CurrentSpotLevel; // w23
  EventAreaImproveResultInfo_o *v27; // x26
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v35; // x0
  QuestDialogIconImageComponent_o *questDialogIconImageComponent; // x21
  struct CommonConfirmDialog_ClickDelegate_o *v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7

  if ( (byte_4D2CA4B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C94098(&EventAreaImproveResultInfo_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__);
    sub_1C94098(&EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo);
    sub_1C94098(&StringLiteral_5514/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/);
    byte_4D2CA4B = 1;
  }
  v9 = sub_1C942E4(EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = callback;
  v18 = (struct CommonConfirmDialog_ClickDelegate_o **)(v9 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  EventInfoAreaImproveConfirmDialog__Init(this, v19);
  v20 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__,
    0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    questId,
                    (const MethodInfo_345B4C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_16;
  v21 = (QuestEntity_o *)Master_object;
  v22 = *((_DWORD *)Master_object + 12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    goto LABEL_16;
  AvailableMaxLevelEntity = (EventInfoAreaImproveConfirmDialog_o *)EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
                                                                     (EventCooltimeRewardMaster_o *)Master_object,
                                                                     eventId,
                                                                     v22,
                                                                     0);
  if ( AvailableMaxLevelEntity )
  {
    v25 = AvailableMaxLevelEntity;
    CurrentSpotLevel = EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
                         AvailableMaxLevelEntity,
                         eventId,
                         v22,
                         (EventCooltimeRewardEntity_o *)AvailableMaxLevelEntity,
                         v24);
    v27 = (EventAreaImproveResultInfo_o *)sub_1C942E4(EventAreaImproveResultInfo_TypeInfo);
    EventAreaImproveResultInfo___ctor(v27, eventId, v22, CurrentSpotLevel, 0);
    this->fields.tempAreaImproveResultInfo = v27;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.tempAreaImproveResultInfo,
      (int32_t)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5514/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, 0);
    Master_object = System_String__Format(v35, (Il2CppObject *)v25->fields.basePanel, 0);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
      questDialogIconImageComponent = this->fields.questDialogIconImageComponent;
      Master_object = QuestEntity__getItemConsumeEntity(v21, 0, 0);
      if ( questDialogIconImageComponent )
      {
        QuestDialogIconImageComponent__SetIconData(
          questDialogIconImageComponent,
          (QuestConsumeItemEntity_o *)Master_object,
          0);
        v37 = *v18;
        this->fields.callback = *v18;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.callback, (int32_t)v37, v38, v39, v40, v41, v42, v43);
        return;
      }
    }
LABEL_16:
    sub_1C942F0(Master_object, v11);
  }
  ActionExtensions__Call(v20, 0);
}


void EventInfoAreaImproveConfirmDialog___OnClickCancelButton_b__17_0(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
  EventInfoAreaImproveConfirmDialog__Init(this, method);
}


void EventInfoAreaImproveConfirmDialog___OnClickDecideButton_b__16_0(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
  EventInfoAreaImproveConfirmDialog__Init(this, method);
}


UnityEngine_GameObject_o *EventInfoAreaImproveConfirmDialog__get_closeBtnObject(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2CA4F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2CA4F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1C942F0(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0___ctor(
        EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0___Open_b__0(
        EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
}