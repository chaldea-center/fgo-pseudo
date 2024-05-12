void __fastcall EventInfoAreaImproveConfirmDialog___ctor(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_438CC07 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438CC07 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoAreaImproveConfirmDialog__CheckSerializeFieldSetting(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
        EventInfoAreaImproveConfirmDialog_o *this,
        int32_t eventId,
        int32_t spotId,
        EventCooltimeRewardEntity_o *eventCooltimeRewardEnt,
        const MethodInfo *method)
{
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  int32_t *p_lv; // x8

  if ( (byte_438CC03 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438CC03 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                                                                        Master_WarQuestSelectionMaster,
                                                                        eventId,
                                                                        spotId,
                                                                        0LL);
  if ( !Master_WarQuestSelectionMaster )
  {
    if ( eventCooltimeRewardEnt )
    {
      p_lv = &eventCooltimeRewardEnt->fields.lv;
      return *p_lv;
    }
LABEL_12:
    sub_B7769C(Master_WarQuestSelectionMaster, v9);
  }
  p_lv = (int32_t *)&Master_WarQuestSelectionMaster->fields.list;
  return *p_lv;
}


void __fastcall EventInfoAreaImproveConfirmDialog__Init(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *consumeItemTitle; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438CC01 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5682/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/);
    sub_B775C4(&StringLiteral_5686/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_5681/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/);
    sub_B775C4(&StringLiteral_5683/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_5684/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/);
    byte_438CC01 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5686/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_14;
  UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0LL);
  cancelLabel = this->fields.cancelLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_14;
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5683/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_14;
  UILabel__set_text(messageLabel, (System_String_o *)titleLabel, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5681/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/, 0LL);
  if ( !cautionMessageLabel
    || (UILabel__set_text(cautionMessageLabel, (System_String_o *)titleLabel, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5684/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/, 0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)titleLabel, 0LL),
        consumeItemTitle = this->fields.consumeItemTitle,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5682/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/, 0LL),
        !consumeItemTitle) )
  {
LABEL_14:
    sub_B7769C(titleLabel, v3);
  }
  UILabel__set_text(consumeItemTitle, (System_String_o *)titleLabel, 0LL);
  this->fields.callback = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.callback, 0LL, v11, v12, v13, v14, v15, v16);
}


void __fastcall EventInfoAreaImproveConfirmDialog__OnClickCancelButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_438CC05 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438CC05 = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoAreaImproveConfirmDialog__OnClickDecideButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **tempAreaImproveResultInfo; // x20
  TerminalPramsManager_c *v10; // x0
  BattleServantConfConponent_o *p_eventAreaImproveResultInfo; // x0
  System_Action_o *v12; // x20

  if ( (byte_438CC04 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438CC04 = 1;
  }
  if ( !this->fields.isClose )
  {
    tempAreaImproveResultInfo = (System_Int32_array **)this->fields.tempAreaImproveResultInfo;
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    p_eventAreaImproveResultInfo = (BattleServantConfConponent_o *)&v10->static_fields->eventAreaImproveResultInfo;
    p_eventAreaImproveResultInfo->klass = (BattleServantConfConponent_c *)tempAreaImproveResultInfo;
    sub_B77560(p_eventAreaImproveResultInfo, tempAreaImproveResultInfo, v2, v3, v4, v5, v6, v7);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v12 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoAreaImproveConfirmDialog__Open(
        EventInfoAreaImproveConfirmDialog_o *this,
        int32_t eventId,
        int32_t questId,
        CommonConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x24
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct CommonConfirmDialog_ClickDelegate_o **v18; // x20
  const MethodInfo *v19; // x1
  System_Action_o *v20; // x23
  int32_t v21; // w25
  QuestEntity_o *v22; // x22
  EventInfoAreaImproveConfirmDialog_o *AvailableMaxLevelEntity; // x0
  const MethodInfo *v24; // x4
  EventInfoAreaImproveConfirmDialog_o *v25; // x24
  int32_t CurrentSpotLevel; // w23
  EventAreaImproveResultInfo_o *v27; // x26
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v35; // x0
  QuestDialogIconImageComponent_o *questDialogIconImageComponent; // x21
  struct CommonConfirmDialog_ClickDelegate_o *v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_438CC02 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B775C4(&EventAreaImproveResultInfo_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__);
    sub_B775C4(&EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo);
    sub_B775C4(&StringLiteral_5685/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/);
    byte_438CC02 = 1;
  }
  v9 = sub_B77694(EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo);
  EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0___ctor(
    (EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_o *)v9,
    0LL);
  if ( !v9 )
    goto LABEL_18;
  *(_QWORD *)(v9 + 16) = callback;
  v18 = (struct CommonConfirmDialog_ClickDelegate_o **)(v9 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)callback, v12, v13, v14, v15, v16, v17);
  EventInfoAreaImproveConfirmDialog__Init(this, v19);
  v20 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                     questId,
                                     (const MethodInfo_21FB894 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  v21 = *((_DWORD *)Master_WarQuestSelectionMaster + 12);
  v22 = (QuestEntity_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  AvailableMaxLevelEntity = (EventInfoAreaImproveConfirmDialog_o *)EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
                                                                     (EventCooltimeRewardMaster_o *)Master_WarQuestSelectionMaster,
                                                                     eventId,
                                                                     v21,
                                                                     0LL);
  if ( AvailableMaxLevelEntity )
  {
    v25 = AvailableMaxLevelEntity;
    CurrentSpotLevel = EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
                         AvailableMaxLevelEntity,
                         eventId,
                         v21,
                         (EventCooltimeRewardEntity_o *)AvailableMaxLevelEntity,
                         v24);
    v27 = (EventAreaImproveResultInfo_o *)sub_B77694(EventAreaImproveResultInfo_TypeInfo);
    EventAreaImproveResultInfo___ctor(v27, eventId, v21, CurrentSpotLevel, 0LL);
    this->fields.tempAreaImproveResultInfo = v27;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.tempAreaImproveResultInfo,
      (System_Int32_array **)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = LocalizationManager__Get((System_String_o *)StringLiteral_5685/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    Master_WarQuestSelectionMaster = System_String__Format(v35, &v25->fields.basePanelList->obj, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      questDialogIconImageComponent = this->fields.questDialogIconImageComponent;
      Master_WarQuestSelectionMaster = QuestEntity__getItemConsumeEntity(v22, 0LL);
      if ( questDialogIconImageComponent )
      {
        QuestDialogIconImageComponent__SetIconData(
          questDialogIconImageComponent,
          (QuestConsumeItemEntity_o *)Master_WarQuestSelectionMaster,
          0LL);
        v37 = *v18;
        this->fields.callback = *v18;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.callback,
          (System_Int32_array **)v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        return;
      }
    }
LABEL_18:
    sub_B7769C(Master_WarQuestSelectionMaster, v11);
  }
  ActionExtensions__Call(v20, 0LL);
}


void __fastcall EventInfoAreaImproveConfirmDialog___OnClickCancelButton_b__17_0(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  CommonConfirmDialog_ClickDelegate_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    CommonConfirmDialog_ClickDelegate__Invoke(callback, 0, 0LL);
  EventInfoAreaImproveConfirmDialog__Init(this, method);
}


void __fastcall EventInfoAreaImproveConfirmDialog___OnClickDecideButton_b__16_0(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  CommonConfirmDialog_ClickDelegate_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    CommonConfirmDialog_ClickDelegate__Invoke(callback, 1, 0LL);
  EventInfoAreaImproveConfirmDialog__Init(this, method);
}


UnityEngine_GameObject_o *__fastcall EventInfoAreaImproveConfirmDialog__get_closeBtnObject(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_438CC06 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438CC06 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_B7769C(0LL, v4);
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
  CommonConfirmDialog_ClickDelegate_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    CommonConfirmDialog_ClickDelegate__Invoke(callback, 0, 0LL);
}