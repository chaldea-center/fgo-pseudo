void __fastcall EventInfoHarvestCautionDialog___ctor(EventInfoHarvestCautionDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17778 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B17778 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall EventInfoHarvestCautionDialog__Init(EventInfoHarvestCautionDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  UILabel_o *titleLabel; // x0
  __int64 v12; // x1
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B17774 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_5704/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B17774 = 1;
  }
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  this->fields.isClose = 0;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5704/*"EVENT_HARVEST_CAUTION_DECIDE_BUTTON"*/, 0LL);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)titleLabel, 0LL),
        cancelLabel = this->fields.cancelLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_9:
    sub_1BCAA3C(titleLabel, v10);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.callback = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callback, 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall EventInfoHarvestCautionDialog__OnClickCancelButton(
        EventInfoHarvestCautionDialog_o *this,
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

  if ( (byte_4B17777 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoHarvestCautionDialog_OnClickCancelButton__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoHarvestCautionDialog__OnClickCancelButton_b__9_0__, v6, v7);
    byte_4B17777 = 1;
  }
  if ( !this->fields.isClose )
  {
    v8 = Method_EventInfoHarvestCautionDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestCautionDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventInfoHarvestCautionDialog_OnClickCancelButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventInfoHarvestCautionDialog__OnClickCancelButton_b__9_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
    this->fields.isClose = 1;
  }
}


void __fastcall EventInfoHarvestCautionDialog__OnClickDecideButton(
        EventInfoHarvestCautionDialog_o *this,
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

  if ( (byte_4B17776 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoHarvestCautionDialog_OnClickDecideButton__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoHarvestCautionDialog__OnClickDecideButton_b__8_0__, v6, v7);
    byte_4B17776 = 1;
  }
  if ( !this->fields.isClose )
  {
    v8 = Method_EventInfoHarvestCautionDialog_OnClickDecideButton__;
    if ( (*((_BYTE *)Method_EventInfoHarvestCautionDialog_OnClickDecideButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EventInfoHarvestCautionDialog_OnClickDecideButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EventInfoHarvestCautionDialog__OnClickDecideButton_b__8_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x24
  QuestEntity_o *QuestEntity; // x22
  Il2CppObject *Entity; // x0
  __int64 v30; // x1
  UILabel_o *titleLabel; // x22
  Il2CppObject *v32; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4B17775 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SpotMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_5705/*"EVENT_HARVEST_CAUTION_TITLE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_20089/*"harvestGrowthBeforeQuestId"*/, v23, v24);
    byte_4B17775 = 1;
  }
  EventInfoHarvestCautionDialog__Init(this, *(const MethodInfo **)&questId);
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)QuestPhaseMaster__GetEntity((QuestPhaseMaster_o *)Instance, questId, questPhase, 0LL);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)QuestPhaseEntity__getScriptIntParam(
                                (QuestPhaseEntity_o *)Instance,
                                (System_String_o *)StringLiteral_20089/*"harvestGrowthBeforeQuestId"*/,
                                -1,
                                0LL);
  if ( !MasterData_object )
    goto LABEL_17;
  QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !QuestEntity || !Instance )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestEntity->fields.spotId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__GetEntity__);
  titleLabel = this->fields.titleLabel;
  v32 = Entity;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5705/*"EVENT_HARVEST_CAUTION_TITLE"*/, 0LL);
  if ( !v32
    || (Instance = (DataManager_o *)System_String__Format(
                                      (System_String_o *)Instance,
                                      (Il2CppObject *)v32[2].klass,
                                      0LL),
        !titleLabel)
    || (UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL),
        (Instance = (DataManager_o *)this->fields.messageLabel) == 0LL) )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v26);
  }
  UILabel__set_text((UILabel_o *)Instance, message, 0LL);
  this->fields.callback = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callback, (int64_t)callback, v33, v34, v35, v36, v37, v38);
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