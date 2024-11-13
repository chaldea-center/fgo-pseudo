void __fastcall EventInfoAreaImproveConfirmDialog___ctor(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1698D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1698D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v9; // x2
  UserEventCooltimeRewardMaster_o *Master_object; // x0
  __int64 v11; // x1
  int32_t *p_lv; // x8

  if ( (byte_4B16989 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, *(_QWORD *)&eventId, *(_QWORD *)&spotId);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    byte_4B16989 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = (UserEventCooltimeRewardMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
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
    sub_1BCAA3C(Master_object, v11);
  }
  p_lv = (int32_t *)&Master_object->fields.list;
  return *p_lv;
}


void __fastcall EventInfoAreaImproveConfirmDialog__Init(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  UILabel_o *titleLabel; // x0
  __int64 v20; // x1
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *cautionMessageLabel; // x20
  UILabel_o *subTitleLabel; // x20
  UILabel_o *consumeItemTitle; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B16987 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5608/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_5612/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5607/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_5609/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_5610/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/, v16, v17);
    byte_4B16987 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_13;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5612/*"EVENT_AREA_IMPROVE_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_13;
  UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0LL);
  cancelLabel = this->fields.cancelLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_13;
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  messageLabel = this->fields.messageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5609/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel )
    goto LABEL_13;
  UILabel__set_text(messageLabel, (System_String_o *)titleLabel, 0LL);
  cautionMessageLabel = this->fields.cautionMessageLabel;
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5607/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CAUTION"*/, 0LL);
  if ( !cautionMessageLabel
    || (UILabel__set_text(cautionMessageLabel, (System_String_o *)titleLabel, 0LL),
        subTitleLabel = this->fields.subTitleLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5610/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_SUBTITLE"*/, 0LL),
        !subTitleLabel)
    || (UILabel__set_text(subTitleLabel, (System_String_o *)titleLabel, 0LL),
        consumeItemTitle = this->fields.consumeItemTitle,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5608/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_CONSUME_ITEM_TITLE"*/, 0LL),
        !consumeItemTitle) )
  {
LABEL_13:
    sub_1BCAA3C(titleLabel, v18);
  }
  UILabel__set_text(consumeItemTitle, (System_String_o *)titleLabel, 0LL);
  this->fields.callback = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callback, 0LL, v27, v28, v29, v30, v31, v32);
}


void __fastcall EventInfoAreaImproveConfirmDialog__OnClickCancelButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B1698B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__, v6, v7);
    byte_4B1698B = 1;
  }
  if ( !this->fields.isClose )
  {
    v8 = Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventInfoAreaImproveConfirmDialog_OnClickCancelButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickCancelButton_b__17_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoAreaImproveConfirmDialog__OnClickDecideButton(
        EventInfoAreaImproveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct EventAreaImproveResultInfo_o *tempAreaImproveResultInfo; // x20
  TerminalPramsManager_c *v16; // x0
  PartyOrganizationUtility_o *p_eventAreaImproveResultInfo; // x0
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x20

  if ( (byte_4B1698A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__, v9, v10);
    sub_1BCA7E0(&Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__, v11, v12);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    byte_4B1698A = 1;
  }
  if ( !this->fields.isClose )
  {
    tempAreaImproveResultInfo = this->fields.tempAreaImproveResultInfo;
    v16 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v16 = TerminalPramsManager_TypeInfo;
    }
    p_eventAreaImproveResultInfo = (PartyOrganizationUtility_o *)&v16->static_fields->eventAreaImproveResultInfo;
    p_eventAreaImproveResultInfo->klass = (PartyOrganizationUtility_c *)tempAreaImproveResultInfo;
    sub_1BCA784(p_eventAreaImproveResultInfo, (int64_t)tempAreaImproveResultInfo, v2, v3, v4, v5, v6, v7);
    v18 = Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1BCA7F8(Method_EventInfoAreaImproveConfirmDialog_OnClickDecideButton__);
    v19 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 8, 0LL);
    v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
    System_Action___ctor(
      v23,
      (Il2CppObject *)this,
      Method_EventInfoAreaImproveConfirmDialog__OnClickDecideButton_b__16_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v23, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x24
  void *Master_object; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct CommonConfirmDialog_ClickDelegate_o **v36; // x20
  const MethodInfo *v37; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x23
  __int64 v42; // x1
  QuestEntity_o *v43; // x22
  int32_t v44; // w25
  EventInfoAreaImproveConfirmDialog_o *AvailableMaxLevelEntity; // x0
  const MethodInfo *v46; // x4
  EventInfoAreaImproveConfirmDialog_o *v47; // x24
  int32_t CurrentSpotLevel; // w23
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  EventAreaImproveResultInfo_o *v52; // x26
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x1
  UILabel_o *titleLabel; // x21
  System_String_o *v61; // x0
  QuestDialogIconImageComponent_o *questDialogIconImageComponent; // x21
  struct CommonConfirmDialog_ClickDelegate_o *v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7

  if ( (byte_4B16988 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCooltimeRewardMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&EventAreaImproveResultInfo_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__, v21, v22);
    sub_1BCA7E0(&EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&StringLiteral_5611/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, v25, v26);
    byte_4B16988 = 1;
  }
  v27 = sub_1BCAA2C(
          EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&questId,
          callback);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_16;
  *(_QWORD *)(v27 + 16) = callback;
  v36 = (struct CommonConfirmDialog_ClickDelegate_o **)(v27 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)callback, v30, v31, v32, v33, v34, v35);
  EventInfoAreaImproveConfirmDialog__Init(this, v37);
  v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v27,
    Method_EventInfoAreaImproveConfirmDialog___c__DisplayClass14_0__Open_b__0__,
    0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    questId,
                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_16;
  v43 = (QuestEntity_o *)Master_object;
  v44 = *((_DWORD *)Master_object + 12);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCooltimeRewardMaster___);
  if ( !Master_object )
    goto LABEL_16;
  AvailableMaxLevelEntity = (EventInfoAreaImproveConfirmDialog_o *)EventCooltimeRewardMaster__GetAvailableMaxLevelEntity(
                                                                     (EventCooltimeRewardMaster_o *)Master_object,
                                                                     eventId,
                                                                     v44,
                                                                     0LL);
  if ( AvailableMaxLevelEntity )
  {
    v47 = AvailableMaxLevelEntity;
    CurrentSpotLevel = EventInfoAreaImproveConfirmDialog__GetCurrentSpotLevel(
                         AvailableMaxLevelEntity,
                         eventId,
                         v44,
                         (EventCooltimeRewardEntity_o *)AvailableMaxLevelEntity,
                         v46);
    v52 = (EventAreaImproveResultInfo_o *)sub_1BCAA2C(EventAreaImproveResultInfo_TypeInfo, v49, v50, v51);
    EventAreaImproveResultInfo___ctor(v52, eventId, v44, CurrentSpotLevel, 0LL);
    this->fields.tempAreaImproveResultInfo = v52;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.tempAreaImproveResultInfo,
      (int64_t)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v59);
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_5611/*"EVENT_AREA_IMPROVE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    Master_object = System_String__Format(v61, (Il2CppObject *)v47->fields.basePanel, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
      questDialogIconImageComponent = this->fields.questDialogIconImageComponent;
      Master_object = QuestEntity__getItemConsumeEntity(v43, 0, 0LL);
      if ( questDialogIconImageComponent )
      {
        QuestDialogIconImageComponent__SetIconData(
          questDialogIconImageComponent,
          (QuestConsumeItemEntity_o *)Master_object,
          0LL);
        v63 = *v36;
        this->fields.callback = *v36;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callback, (int64_t)v63, v64, v65, v66, v67, v68, v69);
        return;
      }
    }
LABEL_16:
    sub_1BCAA3C(Master_object, v29);
  }
  ActionExtensions__Call(v41, 0LL);
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
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1698C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1698C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.closeButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
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