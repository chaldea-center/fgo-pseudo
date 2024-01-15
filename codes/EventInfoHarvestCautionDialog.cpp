void __fastcall EventInfoHarvestCautionDialog___ctor(EventInfoHarvestCautionDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FA126 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA126 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestCautionDialog__Init(EventInfoHarvestCautionDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v8; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40FA122 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v3);
    sub_B16FFC(&StringLiteral_5613/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40FA122 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5613/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, v8, 0LL),
        cancelLabel = this->fields.cancelLabel,
        v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_10:
    sub_B170D4();
  }
  UILabel__set_text(cancelLabel, v10, 0LL);
  this->fields.callback = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.callback, 0LL, v11, v12, v13, v14, v15, v16);
}


void __fastcall EventInfoHarvestCautionDialog__OnClickCancelButton(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40FA125 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoHarvestCautionDialog__OnClickCancelButton_b__9_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA125 = 1;
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
      Method_EventInfoHarvestCautionDialog__OnClickCancelButton_b__9_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoHarvestCautionDialog__OnClickDecideButton(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20

  if ( (byte_40FA124 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventInfoHarvestCautionDialog__OnClickDecideButton_b__8_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FA124 = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EventInfoHarvestCautionDialog__OnClickDecideButton_b__8_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  WebViewManager_o *Instance; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v20; // x0
  QuestPhaseMaster_o *v21; // x0
  QuestPhaseEntity_o *Entity; // x0
  int32_t ScriptIntParam; // w0
  QuestEntity_o *QuestEntity; // x22
  WebViewManager_o *v25; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x0
  WarEntity_o *v27; // x0
  UILabel_o *titleLabel; // x22
  WarEntity_o *v29; // x23
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  UILabel_o *messageLabel; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FA123 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_5614/*"EVENT_HARVEST_CAUTION_TITLE"*/, v16);
    sub_B16FFC(&StringLiteral_19038/*"harvestGrowthBeforeQuestId"*/, v17);
    byte_40FA123 = 1;
  }
  EventInfoHarvestCautionDialog__Init(this, *(const MethodInfo **)&questId);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v20 )
    goto LABEL_18;
  v21 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v20,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !v21 )
    goto LABEL_18;
  Entity = QuestPhaseMaster__GetEntity(v21, questId, questPhase, 0LL);
  if ( !Entity )
    goto LABEL_18;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(Entity, (System_String_o *)StringLiteral_19038/*"harvestGrowthBeforeQuestId"*/, -1, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  QuestEntity = QuestMaster__getQuestEntity(MasterData_WarQuestSelectionMaster, ScriptIntParam, 0LL);
  v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v25 )
    goto LABEL_18;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v25,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !QuestEntity || !v26 )
    goto LABEL_18;
  v27 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          v26,
          QuestEntity->fields.spotId,
          (const MethodInfo_266F388 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  titleLabel = this->fields.titleLabel;
  v29 = v27;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5614/*"EVENT_HARVEST_CAUTION_TITLE"*/, 0LL);
  if ( !v29
    || (v31 = System_String__Format(v30, (Il2CppObject *)v29->fields.name, 0LL), !titleLabel)
    || (UILabel__set_text(titleLabel, v31, 0LL), (messageLabel = this->fields.messageLabel) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  UILabel__set_text(messageLabel, message, 0LL);
  this->fields.callback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callback,
    (System_Int32_array **)callback,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
}


void __fastcall EventInfoHarvestCautionDialog___OnClickCancelButton_b__9_0(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  CommonConfirmDialog_ClickDelegate_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    CommonConfirmDialog_ClickDelegate__Invoke(callback, 0, 0LL);
  EventInfoHarvestCautionDialog__Init(this, method);
}


void __fastcall EventInfoHarvestCautionDialog___OnClickDecideButton_b__8_0(
        EventInfoHarvestCautionDialog_o *this,
        const MethodInfo *method)
{
  CommonConfirmDialog_ClickDelegate_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    CommonConfirmDialog_ClickDelegate__Invoke(callback, 1, 0LL);
  EventInfoHarvestCautionDialog__Init(this, method);
}