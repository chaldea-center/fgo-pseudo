void EventInfoHarvestCautionDialog___ctor(EventInfoHarvestCautionDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D31DDD & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D31DDD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoHarvestCautionDialog__Init(EventInfoHarvestCautionDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D31DD9 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_5632/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31DD9 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  decideLabel = this->fields.decideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5632/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0),
        cancelLabel = this->fields.cancelLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelLabel) )
  {
LABEL_9:
    sub_1C93D2C(titleLabel, v3);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0);
  this->fields.callback = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callback, 0, v7, v8, v9, v10, v11, v12);
}


void EventInfoHarvestCautionDialog__OnClickCancelButton(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D31DDC & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoHarvestCautionDialog_OnClickCancelButton__);
    sub_1C93AD4(&Method_EventInfoHarvestCautionDialog__OnClickCancelButton_b__9_0__);
    byte_4D31DDC = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoHarvestCautionDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestCautionDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoHarvestCautionDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoHarvestCautionDialog__OnClickCancelButton_b__9_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
    this->fields.isClose = 1;
  }
}


void EventInfoHarvestCautionDialog__OnClickDecideButton(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D31DDB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoHarvestCautionDialog_OnClickDecideButton__);
    sub_1C93AD4(&Method_EventInfoHarvestCautionDialog__OnClickDecideButton_b__8_0__);
    byte_4D31DDB = 1;
  }
  if ( !this->fields.isClose )
  {
    v3 = Method_EventInfoHarvestCautionDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestCautionDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_EventInfoHarvestCautionDialog_OnClickDecideButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EventInfoHarvestCautionDialog__OnClickDecideButton_b__8_0__,
      0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
    this->fields.isClose = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void EventInfoHarvestCautionDialog__Open(
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
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D31DDA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_1C93AD4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_5633/*"EVENT_HARVEST_CAUTION_TITLE"*/);
    sub_1C93AD4(&StringLiteral_20151/*"harvestGrowthBeforeQuestId"*/);
    byte_4D31DDA = 1;
  }
  EventInfoHarvestCautionDialog__Init(this, *(const MethodInfo **)&questId);
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)QuestPhaseEntity__getScriptIntParam(
                                (QuestPhaseEntity_o *)Instance,
                                (System_String_o *)StringLiteral_20151/*"harvestGrowthBeforeQuestId"*/,
                                -1,
                                0);
  if ( !MasterData_object )
    goto LABEL_17;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)MasterData_object, (int32_t)Instance, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !QuestEntity || !Instance )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestEntity->fields.spotId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  titleLabel = this->fields.titleLabel;
  v17 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5633/*"EVENT_HARVEST_CAUTION_TITLE"*/, 0);
  if ( !v17
    || (Instance = (DataManager_o *)System_String__Format((System_String_o *)Instance, (Il2CppObject *)v17[2].klass, 0),
        !titleLabel)
    || (UILabel__set_text(titleLabel, (System_String_o *)Instance, 0),
        (Instance = (DataManager_o *)this->fields.messageLabel) == 0) )
  {
LABEL_17:
    sub_1C93D2C(Instance, v12);
  }
  UILabel__set_text((UILabel_o *)Instance, message, 0);
  this->fields.callback = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callback, (int32_t)callback, v18, v19, v20, v21, v22, v23);
}


void EventInfoHarvestCautionDialog___OnClickCancelButton_b__9_0(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      0,
      callback->fields.method);
  EventInfoHarvestCautionDialog__Init(this, method);
}


void EventInfoHarvestCautionDialog___OnClickDecideButton_b__8_0(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  struct CommonConfirmDialog_ClickDelegate_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      1,
      callback->fields.method);
  EventInfoHarvestCautionDialog__Init(this, method);
}