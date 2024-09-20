void __fastcall EventInfoAreaImproveConfirmDialog___ctor(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BA60 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5BA60 = 1;
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


int32_t __fastcall EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
        EventInfoAreaImproveConfirmDialog_o *this,
        int32_t eventId,
        int32_t spotId,
        EventCooltimeRewardEntity_o *eventCooltimeRewardEnt,
        const MethodInfo *method)
{
  UserEventCooltimeRewardMaster_o *Master_object; // x0
  __int64 v9; // x1
  int32_t *p_lv; // x8

  if ( (byte_4A5BA5C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5BA5C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
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
    sub_1B8880C(Master_object, v9);
  }
  p_lv = (int32_t *)&Master_object->fields.list;
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
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5BA5A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5531/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/);
    sub_1B885B0(&StringLiteral_5535/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_5530/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/);
    sub_1B885B0(&StringLiteral_5532/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_5533/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/);
    byte_4A5BA5A = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5535/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_13;
  UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0LL);
  cancelLabel = this->fields.cancelLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_13;
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5532/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, (System_String_o *)titleLabel, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5530/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/, 0LL);
  if ( !cautionMessageLabel
    || (UILabel__set_text(cautionMessageLabel, (System_String_o *)titleLabel, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5533/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/, 0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)titleLabel, 0LL),
        consumeItemTitle = this->fields.consumeItemTitle,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5531/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/, 0LL),
        !consumeItemTitle) )
  {
LABEL_13:
    sub_1B8880C(titleLabel, v3);
  }
  UILabel__set_text(consumeItemTitle, (System_String_o *)titleLabel, 0LL);
  this->fields.callback = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callback, 0, v11, v12);
}


void __fastcall EventInfoAreaImproveConfirmDialog__OnClickCancelButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5BA5E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__);
    sub_1B885B0(&Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__);
    byte_4A5BA5E = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
  int32_t v2; // w2
  int32_t v3; // w3
  struct EventAreaImproveResultInfo_o *tempAreaImproveResultInfo; // x20
  TerminalPramsManager_c *v6; // x0
  ServantStatusBattleListViewItem_o *p_eventAreaImproveResultInfo; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  System_Action_o *v10; // x20

  if ( (byte_4A5BA5D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__);
    sub_1B885B0(&Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5BA5D = 1;
  }
  if ( !this->fields.isClose )
  {
    tempAreaImproveResultInfo = this->fields.tempAreaImproveResultInfo;
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    p_eventAreaImproveResultInfo = (ServantStatusBattleListViewItem_o *)&v6->static_fields->eventAreaImproveResultInfo;
    p_eventAreaImproveResultInfo->klass = (ServantStatusBattleListViewItem_c *)tempAreaImproveResultInfo;
    sub_1B88554(p_eventAreaImproveResultInfo, (int32_t)tempAreaImproveResultInfo, v2, v3);
    v8 = Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B885C8(Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
  void *Master_object; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct CommonConfirmDialog_ClickDelegate_o **v14; // x20
  const MethodInfo *v15; // x1
  System_Action_o *v16; // x23
  QuestEntity_o *v17; // x22
  int32_t v18; // w25
  EventInfoAreaImproveConfirmDialog_o *AvailableMaxLevelEntity; // x0
  const MethodInfo *v20; // x4
  EventInfoAreaImproveConfirmDialog_o *v21; // x24
  int32_t CurrentSpotLevel; // w23
  EventAreaImproveResultInfo_o *v23; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  UILabel_o *titleLabel; // x21
  System_String_o *v27; // x0
  QuestDialogIconImageComponent_o *questDialogIconImageComponent; // x21
  struct CommonConfirmDialog_ClickDelegate_o *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A5BA5B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&EventAreaImproveResultInfo_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__);
    sub_1B885B0(&EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5534/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/);
    byte_4A5BA5B = 1;
  }
  v9 = sub_1B887FC(EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_16;
  *(_QWORD *)(v9 + 16) = callback;
  v14 = (struct CommonConfirmDialog_ClickDelegate_o **)(v9 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)callback, v12, v13);
  EventInfoAreaImproveConfirmDialog__Init(this, v15);
  v16 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__,
    0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    questId,
                    (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_16;
  v17 = (QuestEntity_o *)Master_object;
  v18 = *((_DWORD *)Master_object + 12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    goto LABEL_16;
  AvailableMaxLevelEntity = (EventInfoAreaImproveConfirmDialog_o *)EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
                                                                     (EventCooltimeRewardMaster_o *)Master_object,
                                                                     eventId,
                                                                     v18,
                                                                     0LL);
  if ( AvailableMaxLevelEntity )
  {
    v21 = AvailableMaxLevelEntity;
    CurrentSpotLevel = EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
                         AvailableMaxLevelEntity,
                         eventId,
                         v18,
                         (EventCooltimeRewardEntity_o *)AvailableMaxLevelEntity,
                         v20);
    v23 = (EventAreaImproveResultInfo_o *)sub_1B887FC(EventAreaImproveResultInfo_TypeInfo);
    EventAreaImproveResultInfo___ctor(v23, eventId, v18, CurrentSpotLevel, 0LL);
    this->fields.tempAreaImproveResultInfo = v23;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tempAreaImproveResultInfo, (int32_t)v23, v24, v25);
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5534/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    Master_object = System_String__Format(v27, (Il2CppObject *)v21->fields.basePanel, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
      questDialogIconImageComponent = this->fields.questDialogIconImageComponent;
      Master_object = QuestEntity__getItemConsumeEntity(v17, 0, 0LL);
      if ( questDialogIconImageComponent )
      {
        QuestDialogIconImageComponent__SetIconData(
          questDialogIconImageComponent,
          (QuestConsumeItemEntity_o *)Master_object,
          0LL);
        v29 = *v14;
        this->fields.callback = *v14;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callback, (int32_t)v29, v30, v31);
        return;
      }
    }
LABEL_16:
    sub_1B8880C(Master_object, v11);
  }
  ActionExtensions__Call(v16, 0LL);
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

  if ( (byte_4A5BA5F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5BA5F = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
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