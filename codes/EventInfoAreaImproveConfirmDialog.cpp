void __fastcall EventInfoAreaImproveConfirmDialog___ctor(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB6B8 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB6B8 = 1;
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
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  int32_t *p_lv; // x8

  if ( (byte_40FB6B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    byte_40FB6B4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                         Master_WarQuestSelectionMaster,
                         eventId,
                         spotId,
                         0LL);
  if ( !CurrentLevelEntity )
  {
    if ( eventCooltimeRewardEnt )
    {
      p_lv = &eventCooltimeRewardEnt->fields.lv;
      return *p_lv;
    }
LABEL_12:
    sub_B170D4();
  }
  p_lv = &CurrentLevelEntity->fields.lv;
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
  UILabel_o *titleLabel; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v12; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v14; // x0
  UILabel_o *messageLabel; // x20
  System_String_o *v16; // x0
  UILabel_o *cautionMessageLabel; // x20
  System_String_o *v18; // x0
  UILabel_o *subTitleLabel; // x20
  System_String_o *v20; // x0
  UILabel_o *consumeItemTitle; // x20
  System_String_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FB6B2 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5524, v3);
    sub_B16FFC(&StringLiteral_5528, v4);
    sub_B16FFC(&StringLiteral_3251, v5);
    sub_B16FFC(&StringLiteral_5523, v6);
    sub_B16FFC(&StringLiteral_5525, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    sub_B16FFC(&StringLiteral_5526, v9);
    byte_40FB6B2 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_14;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5528, 0LL);
  if ( !decideLabel )
    goto LABEL_14;
  UILabel__set_text(decideLabel, v12, 0LL);
  cancelLabel = this->fields.cancelLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
  if ( !cancelLabel )
    goto LABEL_14;
  UILabel__set_text(cancelLabel, v14, 0LL);
  messageLabel = this->fields.messageLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5525, 0LL);
  if ( !messageLabel )
    goto LABEL_14;
  UILabel__set_text(messageLabel, v16, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5523, 0LL);
  if ( !cautionMessageLabel
    || (UILabel__set_text(cautionMessageLabel, v18, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5526, 0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, v20, 0LL),
        consumeItemTitle = this->fields.consumeItemTitle,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5524, 0LL),
        !consumeItemTitle) )
  {
LABEL_14:
    sub_B170D4();
  }
  UILabel__set_text(consumeItemTitle, v22, 0LL);
  this->fields.callback = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callback, 0LL, v23, v24, v25, v26, v27, v28);
}


void __fastcall EventInfoAreaImproveConfirmDialog__OnClickCancelButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40FB6B6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FB6B6 = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Action_o *v19; // x20

  if ( (byte_40FB6B5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    byte_40FB6B5 = 1;
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
    sub_B16F98(p_eventAreaImproveResultInfo, tempAreaImproveResultInfo, v2, v3, v4, v5, v6, v7);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
    System_Action___ctor(
      v19,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v19, 0LL);
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
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct CommonConfirmDialog_ClickDelegate_o **v25; // x20
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Action_o *v31; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  int32_t bannerId; // w25
  QuestEntity_o *v35; // x22
  EventCooltimeRewardMaster_o *v36; // x0
  EventInfoAreaImproveConfirmDialog_o *AvailableMaxLevelEntity; // x0
  const MethodInfo *v38; // x4
  EventInfoAreaImproveConfirmDialog_o *v39; // x24
  int32_t CurrentSpotLevel; // w23
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  EventAreaImproveResultInfo_o *v45; // x26
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  QuestDialogIconImageComponent_o *questDialogIconImageComponent; // x21
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x0
  struct CommonConfirmDialog_ClickDelegate_o *v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7

  if ( (byte_40FB6B3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_B16FFC(&EventAreaImproveResultInfo_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__, v15);
    sub_B16FFC(&EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_5527, v17);
    byte_40FB6B3 = 1;
  }
  v18 = sub_B170CC(
          EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&questId,
          callback,
          method);
  EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0___ctor(
    (EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_o *)v18,
    0LL);
  if ( !v18 )
    goto LABEL_18;
  *(_QWORD *)(v18 + 16) = callback;
  v25 = (struct CommonConfirmDialog_ClickDelegate_o **)(v18 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)callback, v19, v20, v21, v22, v23, v24);
  EventInfoAreaImproveConfirmDialog__Init(this, v26);
  v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v18,
    Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             Master_WarQuestSelectionMaster,
             questId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_18;
  bannerId = Entity->fields.bannerId;
  v35 = (QuestEntity_o *)Entity;
  v36 = (EventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !v36 )
    goto LABEL_18;
  AvailableMaxLevelEntity = (EventInfoAreaImproveConfirmDialog_o *)EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
                                                                     v36,
                                                                     eventId,
                                                                     bannerId,
                                                                     0LL);
  if ( AvailableMaxLevelEntity )
  {
    v39 = AvailableMaxLevelEntity;
    CurrentSpotLevel = EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
                         AvailableMaxLevelEntity,
                         eventId,
                         bannerId,
                         (EventCooltimeRewardEntity_o *)AvailableMaxLevelEntity,
                         v38);
    v45 = (EventAreaImproveResultInfo_o *)sub_B170CC(EventAreaImproveResultInfo_TypeInfo, v41, v42, v43, v44);
    EventAreaImproveResultInfo___ctor(v45, eventId, bannerId, CurrentSpotLevel, 0LL);
    this->fields.tempAreaImproveResultInfo = v45;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.tempAreaImproveResultInfo,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_5527, 0LL);
    v54 = System_String__Format(v53, &v39->fields.basePanelList->obj, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, v54, 0LL);
      questDialogIconImageComponent = this->fields.questDialogIconImageComponent;
      ItemConsumeEntity = QuestEntity__getItemConsumeEntity(v35, 0LL);
      if ( questDialogIconImageComponent )
      {
        QuestDialogIconImageComponent__SetIconData(questDialogIconImageComponent, ItemConsumeEntity, 0LL);
        v57 = *v25;
        this->fields.callback = *v25;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.callback,
          (System_Int32_array **)v57,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
        return;
      }
    }
LABEL_18:
    sub_B170D4();
  }
  ActionExtensions__Call(v31, 0LL);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40FB6B7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB6B7 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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