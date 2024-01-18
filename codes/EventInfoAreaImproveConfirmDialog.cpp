void __fastcall EventInfoAreaImproveConfirmDialog___ctor(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_41890F4 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_41890F4 = 1;
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
        EventInfoAreaImproveConfirmDialog_o *this,
        int32_t eventId,
        int32_t spotId,
        EventCooltimeRewardEntity_o *eventCooltimeRewardEnt,
        const MethodInfo *method)
{
  __int64 v8; // x1
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  int32_t *p_lv; // x8

  if ( (byte_41890F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    byte_41890F0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
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
    sub_B2C434(Master_WarQuestSelectionMaster, v10);
  }
  p_lv = (int32_t *)&Master_WarQuestSelectionMaster->fields.list;
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_41890EE & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5539/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/, v3);
    sub_B2C35C(&StringLiteral_5543/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, v4);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v5);
    sub_B2C35C(&StringLiteral_5538/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/, v6);
    sub_B2C35C(&StringLiteral_5540/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    sub_B2C35C(&StringLiteral_5541/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/, v9);
    byte_41890EE = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5543/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_14;
  UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0LL);
  cancelLabel = this->fields.cancelLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_14;
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5540/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_14;
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
LABEL_14:
    sub_B2C434(titleLabel, v10);
  }
  UILabel__set_text(consumeItemTitle, (System_String_o *)titleLabel, 0LL);
  this->fields.callback = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callback, 0LL, v18, v19, v20, v21, v22, v23);
}


void __fastcall EventInfoAreaImproveConfirmDialog__OnClickCancelButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_41890F2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_41890F2 = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array **tempAreaImproveResultInfo; // x20
  TerminalPramsManager_c *v13; // x0
  BattleServantConfConponent_o *p_eventAreaImproveResultInfo; // x0
  System_Action_o *v15; // x20

  if ( (byte_41890F1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    byte_41890F1 = 1;
  }
  if ( !this->fields.isClose )
  {
    tempAreaImproveResultInfo = (System_Int32_array **)this->fields.tempAreaImproveResultInfo;
    v13 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    p_eventAreaImproveResultInfo = (BattleServantConfConponent_o *)&v13->static_fields->eventAreaImproveResultInfo;
    p_eventAreaImproveResultInfo->klass = (BattleServantConfConponent_c *)tempAreaImproveResultInfo;
    sub_B2C2F8(p_eventAreaImproveResultInfo, tempAreaImproveResultInfo, v2, v3, v4, v5, v6, v7);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct CommonConfirmDialog_ClickDelegate_o **v27; // x20
  const MethodInfo *v28; // x1
  System_Action_o *v29; // x23
  int32_t v30; // w25
  QuestEntity_o *v31; // x22
  EventInfoAreaImproveConfirmDialog_o *AvailableMaxLevelEntity; // x0
  const MethodInfo *v33; // x4
  EventInfoAreaImproveConfirmDialog_o *v34; // x24
  int32_t CurrentSpotLevel; // w23
  EventAreaImproveResultInfo_o *v36; // x26
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v44; // x0
  QuestDialogIconImageComponent_o *questDialogIconImageComponent; // x21
  struct CommonConfirmDialog_ClickDelegate_o *v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_41890EF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_B2C35C(&EventAreaImproveResultInfo_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__, v15);
    sub_B2C35C(&EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_5542/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, v17);
    byte_41890EF = 1;
  }
  v18 = sub_B2C42C(EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo);
  EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0___ctor(
    (EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_18;
  *(_QWORD *)(v18 + 16) = callback;
  v27 = (struct CommonConfirmDialog_ClickDelegate_o **)(v18 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  EventInfoAreaImproveConfirmDialog__Init(this, v28);
  v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v18,
    Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                     questId,
                                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  v30 = *((_DWORD *)Master_WarQuestSelectionMaster + 12);
  v31 = (QuestEntity_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  AvailableMaxLevelEntity = (EventInfoAreaImproveConfirmDialog_o *)EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
                                                                     (EventCooltimeRewardMaster_o *)Master_WarQuestSelectionMaster,
                                                                     eventId,
                                                                     v30,
                                                                     0LL);
  if ( AvailableMaxLevelEntity )
  {
    v34 = AvailableMaxLevelEntity;
    CurrentSpotLevel = EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
                         AvailableMaxLevelEntity,
                         eventId,
                         v30,
                         (EventCooltimeRewardEntity_o *)AvailableMaxLevelEntity,
                         v33);
    v36 = (EventAreaImproveResultInfo_o *)sub_B2C42C(EventAreaImproveResultInfo_TypeInfo);
    EventAreaImproveResultInfo___ctor(v36, eventId, v30, CurrentSpotLevel, 0LL);
    this->fields.tempAreaImproveResultInfo = v36;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.tempAreaImproveResultInfo,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_5542/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    Master_WarQuestSelectionMaster = System_String__Format(v44, &v34->fields.basePanelList->obj, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      questDialogIconImageComponent = this->fields.questDialogIconImageComponent;
      Master_WarQuestSelectionMaster = QuestEntity__getItemConsumeEntity(v31, 0LL);
      if ( questDialogIconImageComponent )
      {
        QuestDialogIconImageComponent__SetIconData(
          questDialogIconImageComponent,
          (QuestConsumeItemEntity_o *)Master_WarQuestSelectionMaster,
          0LL);
        v46 = *v27;
        this->fields.callback = *v27;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.callback,
          (System_Int32_array **)v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        return;
      }
    }
LABEL_18:
    sub_B2C434(Master_WarQuestSelectionMaster, v20);
  }
  ActionExtensions__Call(v29, 0LL);
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

  if ( (byte_41890F3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41890F3 = 1;
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
    sub_B2C434(0LL, v4);
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