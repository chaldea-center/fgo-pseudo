void __fastcall EventInfoAreaImproveConfirmDialog___ctor(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9F8D & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F8D = 1;
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UserEventCooltimeRewardMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  int32_t *p_lv; // x8

  if ( (byte_42E9F89 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, eventId, spotId, eventCooltimeRewardEnt);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    byte_42E9F89 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  }
  p_lv = (int32_t *)&Master_WarQuestSelectionMaster->fields.list;
  return *p_lv;
}


void __fastcall EventInfoAreaImproveConfirmDialog__Init(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *consumeItemTitle; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42E9F87 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5616/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5620/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5615/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_5617/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5618/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/, v23, v24, v25);
    byte_42E9F87 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5620/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_14;
  UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0LL);
  cancelLabel = this->fields.cancelLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_14;
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5617/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_14;
  UILabel__set_text(messageLabel, (System_String_o *)titleLabel, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5615/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/, 0LL);
  if ( !cautionMessageLabel
    || (UILabel__set_text(cautionMessageLabel, (System_String_o *)titleLabel, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5618/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/, 0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)titleLabel, 0LL),
        consumeItemTitle = this->fields.consumeItemTitle,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5616/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/, 0LL),
        !consumeItemTitle) )
  {
LABEL_14:
    sub_B5D69C(titleLabel, v26);
  }
  UILabel__set_text(consumeItemTitle, (System_String_o *)titleLabel, 0LL);
  this->fields.callback = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callback, 0LL, v34, v35, v36, v37, v38, v39);
}


void __fastcall EventInfoAreaImproveConfirmDialog__OnClickCancelButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E9F8B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E9F8B = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Int32_array **tempAreaImproveResultInfo; // x20
  TerminalPramsManager_c *v19; // x0
  BattleServantConfConponent_o *p_eventAreaImproveResultInfo; // x0
  System_Action_o *v21; // x20

  if ( (byte_42E9F8A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    byte_42E9F8A = 1;
  }
  if ( !this->fields.isClose )
  {
    tempAreaImproveResultInfo = (System_Int32_array **)this->fields.tempAreaImproveResultInfo;
    v19 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    p_eventAreaImproveResultInfo = (BattleServantConfConponent_o *)&v19->static_fields->eventAreaImproveResultInfo;
    p_eventAreaImproveResultInfo->klass = (BattleServantConfConponent_c *)tempAreaImproveResultInfo;
    sub_B5D560(p_eventAreaImproveResultInfo, tempAreaImproveResultInfo, v2, v3, v4, v5, v6, v7);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v21,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v21, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  __int64 v36; // x24
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct CommonConfirmDialog_ClickDelegate_o **v45; // x20
  const MethodInfo *v46; // x1
  System_Action_o *v47; // x23
  int32_t v48; // w25
  QuestEntity_o *v49; // x22
  EventInfoAreaImproveConfirmDialog_o *AvailableMaxLevelEntity; // x0
  const MethodInfo *v51; // x4
  EventInfoAreaImproveConfirmDialog_o *v52; // x24
  int32_t CurrentSpotLevel; // w23
  EventAreaImproveResultInfo_o *v54; // x26
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v62; // x0
  QuestDialogIconImageComponent_o *questDialogIconImageComponent; // x21
  struct CommonConfirmDialog_ClickDelegate_o *v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7

  if ( (byte_42E9F88 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, eventId, questId, callback);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&EventAreaImproveResultInfo_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__, v27, v28, v29);
    sub_B5D5C4(&EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_5619/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, v33, v34, v35);
    byte_42E9F88 = 1;
  }
  v36 = sub_B5D694(EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo);
  EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0___ctor(
    (EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_o *)v36,
    0LL);
  if ( !v36 )
    goto LABEL_18;
  *(_QWORD *)(v36 + 16) = callback;
  v45 = (struct CommonConfirmDialog_ClickDelegate_o **)(v36 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v36 + 16), (System_Int32_array **)callback, v39, v40, v41, v42, v43, v44);
  EventInfoAreaImproveConfirmDialog__Init(this, v46);
  v47 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v47,
    (Il2CppObject *)v36,
    Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                     questId,
                                     (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  v48 = *((_DWORD *)Master_WarQuestSelectionMaster + 12);
  v49 = (QuestEntity_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  AvailableMaxLevelEntity = (EventInfoAreaImproveConfirmDialog_o *)EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
                                                                     (EventCooltimeRewardMaster_o *)Master_WarQuestSelectionMaster,
                                                                     eventId,
                                                                     v48,
                                                                     0LL);
  if ( AvailableMaxLevelEntity )
  {
    v52 = AvailableMaxLevelEntity;
    CurrentSpotLevel = EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
                         AvailableMaxLevelEntity,
                         eventId,
                         v48,
                         (EventCooltimeRewardEntity_o *)AvailableMaxLevelEntity,
                         v51);
    v54 = (EventAreaImproveResultInfo_o *)sub_B5D694(EventAreaImproveResultInfo_TypeInfo);
    EventAreaImproveResultInfo___ctor(v54, eventId, v48, CurrentSpotLevel, 0LL);
    this->fields.tempAreaImproveResultInfo = v54;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.tempAreaImproveResultInfo,
      (System_Int32_array **)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v62 = LocalizationManager__Get((System_String_o *)StringLiteral_5619/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    Master_WarQuestSelectionMaster = System_String__Format(v62, &v52->fields.basePanelList->obj, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      questDialogIconImageComponent = this->fields.questDialogIconImageComponent;
      Master_WarQuestSelectionMaster = QuestEntity__getItemConsumeEntity(v49, 0LL);
      if ( questDialogIconImageComponent )
      {
        QuestDialogIconImageComponent__SetIconData(
          questDialogIconImageComponent,
          (QuestConsumeItemEntity_o *)Master_WarQuestSelectionMaster,
          0LL);
        v64 = *v45;
        this->fields.callback = *v45;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.callback,
          (System_Int32_array **)v64,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(Master_WarQuestSelectionMaster, v38);
  }
  ActionExtensions__Call(v47, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *closeButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E9F8C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F8C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
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