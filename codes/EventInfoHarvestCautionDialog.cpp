void __fastcall EventInfoHarvestCautionDialog___ctor(EventInfoHarvestCautionDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C779 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5C779 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestCautionDialog__Init(EventInfoHarvestCautionDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5C775 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_5620/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C775 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5620/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0LL),
        cancelLabel = this->fields.cancelLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_9:
    sub_1B8880C(titleLabel, v3);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.callback = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callback, 0, v7, v8);
}


void __fastcall EventInfoHarvestCautionDialog__OnClickCancelButton(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5C778 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoHarvestCautionDialog_OnClickCancelButton__);
    sub_1B885B0(&Method_EventInfoHarvestCautionDialog__OnClickCancelButton_b__9_0__);
    byte_4A5C778 = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoHarvestCautionDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestCautionDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventInfoHarvestCautionDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoHarvestCautionDialog__OnClickCancelButton_b__9_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoHarvestCautionDialog__OnClickDecideButton(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A5C777 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventInfoHarvestCautionDialog_OnClickDecideButton__);
    sub_1B885B0(&Method_EventInfoHarvestCautionDialog__OnClickDecideButton_b__8_0__);
    byte_4A5C777 = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoHarvestCautionDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestCautionDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_EventInfoHarvestCautionDialog_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoHarvestCautionDialog__OnClickDecideButton_b__8_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
    this->fields.isClose = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoHarvestCautionDialog__Open(
        EventInfoHarvestCautionDialog_o *this,
        int32_t questId,
        int32_t questPhase,
        System_String_o *message,
        CommonConfirmDialog_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x24
  QuestEntity_o *QuestEntity; // x22
  Il2CppObject *Entity; // x0
  UILabel_o *titleLabel; // x22
  Il2CppObject *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5C776 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1B885B0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_5621/*"EVENT_HARVEST_CAUTION_TITLE"*/);
    sub_1B885B0(&StringLiteral_19881/*"harvestGrowthBeforeQuestId"*/);
    byte_4A5C776 = 1;
  }
  EventInfoHarvestCautionDialog__Init(this, *(const MethodInfo **)&questId);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)QuestPhaseEntity__getScriptIntParam(
                                (QuestPhaseEntity_o *)Instance,
                                (System_String_o *)StringLiteral_19881/*"harvestGrowthBeforeQuestId"*/,
                                -1,
                                0LL);
  if ( !MasterData_object )
    goto LABEL_17;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !QuestEntity || !Instance )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestEntity->fields.spotId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  titleLabel = this->fields.titleLabel;
  v17 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5621/*"EVENT_HARVEST_CAUTION_TITLE"*/, 0LL);
  if ( !v17
    || (Instance = (DataManager_o *)System_String__Format(
                                      (System_String_o *)Instance,
                                      (Il2CppObject *)v17[2].klass,
                                      0LL),
        !titleLabel)
    || (UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.messageLabel) == 0LL) )
  {
LABEL_17:
    sub_1B8880C(Instance, v12);
  }
  UILabel__set_text((UILabel_o *)Instance, message, 0LL);
  this->fields.callback = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callback, (int32_t)callback, v18, v19);
}


void __fastcall EventInfoHarvestCautionDialog___OnClickCancelButton_b__9_0(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
  EventInfoHarvestCautionDialog__Init(this, method);
}


void __fastcall EventInfoHarvestCautionDialog___OnClickDecideButton_b__8_0(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      1LL,
      *(_QWORD *)&callback->fields.extra_arg);
  EventInfoHarvestCautionDialog__Init(this, method);
}