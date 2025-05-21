void __fastcall EventInfoAreaImproveConfirmDialog___ctor(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4506D & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B4506D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoAreaImproveConfirmDialog__CheckSerializeFieldSetting(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
        EventInfoAreaImproveConfirmDialog_o *this,
        int32_t eventId,
        int32_t spotId,
        EventCooltimeRewardEntity_o *eventCooltimeRewardEnt,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UserEventCooltimeRewardMaster_o *Master_object; // x0
  __int64 v10; // x1
  int32_t *p_lv; // x8

  if ( (byte_4B45069 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, *(_QWORD *)&eventId);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    byte_4B45069 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                       Master_object,
                                                       eventId,
                                                       spotId,
                                                       0LL);
  if ( !Master_object )
  {
    if ( eventCooltimeRewardEnt )
    {
      p_lv = &eventCooltimeRewardEnt->fields.lv;
      return *p_lv;
    }
LABEL_11:
    sub_1BDBAD4(Master_object, v10);
  }
  p_lv = &Master_object->fields.revision;
  return *p_lv;
}


void __fastcall EventInfoAreaImproveConfirmDialog__Init(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *consumeItemTitle; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B45067 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_5539/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/, v3);
    sub_1BDB878(&StringLiteral_5543/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, v4);
    sub_1BDB878(&StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, v5);
    sub_1BDB878(&StringLiteral_5538/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/, v6);
    sub_1BDB878(&StringLiteral_5540/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, v7);
    sub_1BDB878(&StringLiteral_1/*""*/, v8);
    sub_1BDB878(&StringLiteral_5541/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/, v9);
    byte_4B45067 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5543/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_13;
  UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0LL);
  cancelLabel = this->fields.cancelLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3716/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_13;
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5540/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, (System_String_o *)titleLabel, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5538/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/, 0LL);
  if ( !cautionMessageLabel
    || (UILabel__set_text(cautionMessageLabel, (System_String_o *)titleLabel, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5541/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/, 0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)titleLabel, 0LL),
        consumeItemTitle = this->fields.consumeItemTitle,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5539/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/, 0LL),
        !consumeItemTitle) )
  {
LABEL_13:
    sub_1BDBAD4(titleLabel, v10);
  }
  UILabel__set_text(consumeItemTitle, (System_String_o *)titleLabel, 0LL);
  this->fields.callback = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callback, 0, v18, v19);
}


void __fastcall EventInfoAreaImproveConfirmDialog__OnClickCancelButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4B4506B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__, v3);
    sub_1BDB878(&Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__, v4);
    byte_4B4506B = 1;
  }
  if ( !this->fields.isClose )
  {
    v5 = Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BDB890(Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoAreaImproveConfirmDialog__OnClickDecideButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventAreaImproveResultInfo_o *tempAreaImproveResultInfo; // x20
  TerminalPramsManager_c *v9; // x0
  CGThumbnailListItem_o *p_eventAreaImproveResultInfo; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_4B4506A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__, v5);
    sub_1BDB878(&Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__, v6);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v7);
    byte_4B4506A = 1;
  }
  if ( !this->fields.isClose )
  {
    tempAreaImproveResultInfo = this->fields.tempAreaImproveResultInfo;
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    p_eventAreaImproveResultInfo = (CGThumbnailListItem_o *)&v9->static_fields->eventAreaImproveResultInfo;
    p_eventAreaImproveResultInfo->klass = (CGThumbnailListItem_c *)tempAreaImproveResultInfo;
    sub_1BDB81C(p_eventAreaImproveResultInfo, (int32_t)tempAreaImproveResultInfo, v2, v3);
    v11 = Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BDB890(Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0, 0LL);
    v13 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
    this->fields.isClose = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoAreaImproveConfirmDialog__Open(
        EventInfoAreaImproveConfirmDialog_o *this,
        int32_t eventId,
        int32_t questId,
        CommonConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
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
  void *Master_object; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct CommonConfirmDialog_ClickDelegate_o **v23; // x20
  const MethodInfo *v24; // x1
  System_Action_o *v25; // x23
  QuestEntity_o *v26; // x22
  int32_t v27; // w25
  EventInfoAreaImproveConfirmDialog_o *AvailableMaxLevelEntity; // x0
  const MethodInfo *v29; // x4
  EventInfoAreaImproveConfirmDialog_o *v30; // x24
  int32_t CurrentSpotLevel; // w23
  EventAreaImproveResultInfo_o *v32; // x26
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  UILabel_o *titleLabel; // x21
  System_String_o *v36; // x0
  QuestDialogIconImageComponent_o *questDialogIconImageComponent; // x21
  struct CommonConfirmDialog_ClickDelegate_o *v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4B45068 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_1BDB878(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_1BDB878(&EventAreaImproveResultInfo_TypeInfo, v13);
    sub_1BDB878(&LocalizationManager_TypeInfo, v14);
    sub_1BDB878(&Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__, v15);
    sub_1BDB878(&EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo, v16);
    sub_1BDB878(&StringLiteral_5542/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, v17);
    byte_4B45068 = 1;
  }
  v18 = sub_1BDBAC4(EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_16;
  *(_QWORD *)(v18 + 16) = callback;
  v23 = (struct CommonConfirmDialog_ClickDelegate_o **)(v18 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)callback, v21, v22);
  EventInfoAreaImproveConfirmDialog__Init(this, v24);
  v25 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v18,
    Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__,
    0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    questId,
                    (const MethodInfo_32E1E3C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_16;
  v26 = (QuestEntity_o *)Master_object;
  v27 = *((_DWORD *)Master_object + 12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    goto LABEL_16;
  AvailableMaxLevelEntity = (EventInfoAreaImproveConfirmDialog_o *)EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
                                                                     (EventCooltimeRewardMaster_o *)Master_object,
                                                                     eventId,
                                                                     v27,
                                                                     0LL);
  if ( AvailableMaxLevelEntity )
  {
    v30 = AvailableMaxLevelEntity;
    CurrentSpotLevel = EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
                         AvailableMaxLevelEntity,
                         eventId,
                         v27,
                         (EventCooltimeRewardEntity_o *)AvailableMaxLevelEntity,
                         v29);
    v32 = (EventAreaImproveResultInfo_o *)sub_1BDBAC4(EventAreaImproveResultInfo_TypeInfo);
    EventAreaImproveResultInfo___ctor(v32, eventId, v27, CurrentSpotLevel, 0LL);
    this->fields.tempAreaImproveResultInfo = v32;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.tempAreaImproveResultInfo, (int32_t)v32, v33, v34);
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    Master_object = System_String__Format(v36, (Il2CppObject *)v30->fields.basePanel, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
      questDialogIconImageComponent = this->fields.questDialogIconImageComponent;
      Master_object = QuestEntity__getItemConsumeEntity(v26, 0, 0LL);
      if ( questDialogIconImageComponent )
      {
        QuestDialogIconImageComponent__SetIconData(
          questDialogIconImageComponent,
          (QuestConsumeItemEntity_o *)Master_object,
          0LL);
        v38 = *v23;
        this->fields.callback = *v23;
        sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.callback, (int32_t)v38, v39, v40);
        return;
      }
    }
LABEL_16:
    sub_1BDBAD4(Master_object, v20);
  }
  ActionExtensions__Call(v25, 0LL);
}


void __fastcall EventInfoAreaImproveConfirmDialog___OnClickCancelButton_b__17_0(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
  EventInfoAreaImproveConfirmDialog__Init(this, method);
}


void __fastcall EventInfoAreaImproveConfirmDialog___OnClickDecideButton_b__16_0(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      1LL,
      *(_QWORD *)&callback->fields.extra_arg);
  EventInfoAreaImproveConfirmDialog__Init(this, method);
}


UnityEngine_GameObject_o *__fastcall EventInfoAreaImproveConfirmDialog__get_closeBtnObject(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B4506C & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B4506C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1BDBAD4(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0___ctor(
        EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0___Open_b__0(
        EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}