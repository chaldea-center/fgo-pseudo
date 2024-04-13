void __fastcall EventInfoHarvestCautionDialog___ctor(EventInfoHarvestCautionDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E94DB & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E94DB = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestCautionDialog__Init(EventInfoHarvestCautionDialog_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E94D7 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5705/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42E94D7 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5705/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0LL),
        cancelLabel = this->fields.cancelLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_10:
    sub_B5D69C(titleLabel, v14);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.callback = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.callback, 0LL, v18, v19, v20, v21, v22, v23);
}


void __fastcall EventInfoHarvestCautionDialog__OnClickCancelButton(
        EventInfoHarvestCautionDialog_o *this,
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

  if ( (byte_42E94DA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoHarvestCautionDialog__OnClickCancelButton_b__9_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E94DA = 1;
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
      Method_EventInfoHarvestCautionDialog__OnClickCancelButton_b__9_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoHarvestCautionDialog__OnClickDecideButton(
        EventInfoHarvestCautionDialog_o *this,
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

  if ( (byte_42E94D9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventInfoHarvestCautionDialog__OnClickDecideButton_b__8_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E94D9 = 1;
  }
  if ( !this->fields.isClose )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EventInfoHarvestCautionDialog__OnClickDecideButton_b__8_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  DataManager_o *Instance; // x0
  __int64 v33; // x1
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x24
  QuestEntity_o *QuestEntity; // x22
  WarEntity_o *Entity; // x0
  UILabel_o *titleLabel; // x22
  WarEntity_o *v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42E94D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, questId, questPhase, message);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_5706/*"EVENT_HARVEST_CAUTION_TITLE"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_19351/*"harvestGrowthBeforeQuestId"*/, v29, v30, v31);
    byte_42E94D8 = 1;
  }
  EventInfoHarvestCautionDialog__Init(this, *(const MethodInfo **)&questId);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          Instance,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)QuestPhaseEntity__getScriptIntParam(
                                (QuestPhaseEntity_o *)Instance,
                                (System_String_o *)StringLiteral_19351/*"harvestGrowthBeforeQuestId"*/,
                                -1,
                                0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  QuestEntity = QuestMaster__getQuestEntity(MasterData_WarQuestSelectionMaster, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !QuestEntity || !Instance )
    goto LABEL_18;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             QuestEntity->fields.spotId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  titleLabel = this->fields.titleLabel;
  v38 = Entity;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5706/*"EVENT_HARVEST_CAUTION_TITLE"*/, 0LL);
  if ( !v38
    || (Instance = (DataManager_o *)System_String__Format(
                                      (System_String_o *)Instance,
                                      (Il2CppObject *)v38->fields.name,
                                      0LL),
        !titleLabel)
    || (UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.messageLabel) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(Instance, v33);
  }
  UILabel__set_text((UILabel_o *)Instance, message, 0LL);
  this->fields.callback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callback,
    (System_Int32_array **)callback,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
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