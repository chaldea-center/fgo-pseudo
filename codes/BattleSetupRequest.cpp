void __fastcall BattleSetupRequest___ctor(BattleSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSetupRequest__beginRequest(
        BattleSetupRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t activeDeckId,
        int64_t followerId,
        int32_t followerClassId,
        int32_t itemId,
        int32_t boostId,
        int32_t enemySelect,
        int32_t questSelect,
        int64_t userEquipId,
        int32_t followerType,
        System_Int32_array *routeSelect,
        int32_t followerRndomLimitCount,
        System_String_o *choiceRandomLimitCounts,
        int32_t followerSpoilerProtectionLimitCount,
        int32_t followerSupportDeckId,
        int32_t campaignItemId,
        const MethodInfo *method)
{
  System_String_o *v25; // x23
  System_Int32_array *v26; // x26
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  bool v46; // zf
  __int64 v47; // x8

  v25 = choiceRandomLimitCounts;
  v26 = routeSelect;
  if ( (byte_418A595 & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_B2C35C(&int___TypeInfo, v27);
    sub_B2C35C(&StringLiteral_18789/*"followerId"*/, v28);
    sub_B2C35C(&StringLiteral_18369/*"enemySelect"*/, v29);
    sub_B2C35C(&StringLiteral_21857/*"routeSelect"*/, v30);
    sub_B2C35C(&StringLiteral_16241/*"activeDeckId"*/, v31);
    sub_B2C35C(&StringLiteral_23008/*"userEquipId"*/, v32);
    sub_B2C35C(&StringLiteral_16886/*"boostId"*/, v33);
    sub_B2C35C(&StringLiteral_20016/*"itemId"*/, v34);
    sub_B2C35C(&StringLiteral_18791/*"followerSpoilerProtectionLimitCount"*/, v35);
    sub_B2C35C(&StringLiteral_18790/*"followerRandomLimitCount"*/, v36);
    sub_B2C35C(&StringLiteral_17190/*"campaignItemId"*/, v37);
    sub_B2C35C(&StringLiteral_21614/*"questPhase"*/, v38);
    sub_B2C35C(&StringLiteral_23683/*"{}"*/, v39);
    sub_B2C35C(&StringLiteral_18793/*"followerType"*/, v40);
    sub_B2C35C(&StringLiteral_21612/*"questId"*/, v41);
    sub_B2C35C(&StringLiteral_18787/*"followerClassId"*/, v42);
    sub_B2C35C(&StringLiteral_18792/*"followerSupportDeckId"*/, v43);
    sub_B2C35C(&StringLiteral_17419/*"choiceRandomLimitCounts"*/, v44);
    sub_B2C35C(&StringLiteral_21615/*"questSelect"*/, v45);
    byte_418A595 = 1;
  }
  if ( !routeSelect )
    v26 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  v46 = !System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL);
  v47 = StringLiteral_23683/*"{}"*/;
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  if ( !v46 )
    v25 = (System_String_o *)v47;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21612/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21614/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_16241/*"activeDeckId"*/, activeDeckId, 0LL);
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_18789/*"followerId"*/, followerId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18787/*"followerClassId"*/, followerClassId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20016/*"itemId"*/, itemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16886/*"boostId"*/, boostId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18369/*"enemySelect"*/, enemySelect, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21615/*"questSelect"*/, questSelect, 0LL);
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_23008/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18793/*"followerType"*/, followerType, 0LL);
  RequestBase__addField_31052036((RequestBase_o *)this, (System_String_o *)StringLiteral_21857/*"routeSelect"*/, &v26->obj, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_17419/*"choiceRandomLimitCounts"*/, v25, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18790/*"followerRandomLimitCount"*/, followerRndomLimitCount, 0LL);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_18791/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18792/*"followerSupportDeckId"*/, followerSupportDeckId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17190/*"campaignItemId"*/, campaignItemId, 0LL);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_418A594 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9159/*"MockBattleSetupRequest"*/, v2);
    byte_418A594 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9159/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_418A593 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16637/*"battle/setup"*/, v2);
    byte_418A593 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_16637/*"battle/setup"*/, 0LL);
}


void __fastcall BattleSetupRequest__requestCompleted(
        BattleSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  ResponseData_o *v23; // x0
  ResponseData_o *v24; // x20
  Il2CppObject *success; // x20
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  int32_t EventId; // w0
  __int64 v29; // x1
  int32_t v30; // w21
  EventEntity_o *v31; // x0
  System_String_o *SaveFileNameByEvent; // x0
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v34; // x0
  __int64 v35; // x1
  int32_t SpotId; // w21
  TerminalPramsManager_c *v37; // x0
  int32_t v38; // w21
  int32_t fakeValue; // w22
  System_String_o *v40; // x0
  QuestPhaseEntity_o *v41; // [xsp+0h] [xbp-40h] BYREF
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A596 & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, responseList);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_UserDeckMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v13);
    sub_B2C35C(&JsonManager_TypeInfo, v14);
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v15);
    sub_B2C35C(&OptionManager_TypeInfo, v16);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v17);
    sub_B2C35C(&ScriptManager_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v22);
    byte_418A596 = 1;
  }
  v41 = 0LL;
  entity = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v23 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( !v23
    || (v24 = v23, !ResponseData__checkError_31019724(v23, 0LL))
    || (success = (Il2CppObject *)v24->fields.success) == 0LL )
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_82;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0LL);
  if ( EventId >= 1 )
  {
    v30 = EventId;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_82;
    v31 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             v30,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( v31 && EventEntity__IsOpen(v31, 1, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_82;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !Instance )
        goto LABEL_82;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    v30,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_82;
      if ( EventDetailEntity__IsMission((EventDetailEntity_o *)Instance, 0LL) )
      {
        if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        }
        SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v30, 0LL);
        if ( System_IO_File__Exists(SaveFileNameByEvent, 0LL) )
        {
          if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
          }
          UserMissionNewManager__SetClearNewFlg(0LL);
          UserMissionNewManager__WriteData(0LL);
        }
      }
    }
  }
  currentQuestId = this->fields.currentQuestId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183CBD )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v29);
    byte_4183CBD = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v34->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
  TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
  if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
  {
    SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183CBE )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v35);
      byte_4183CBE = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v37 = TerminalPramsManager_TypeInfo;
    }
    v37->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  else
  {
    v37 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v37);
  TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( !OptionManager__GetAutoSelectParty(0LL) || this->fields.activeDeckId < 1 )
    goto LABEL_75;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !Instance )
    goto LABEL_82;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         this->fields.activeDeckId,
         (const MethodInfo_24E4354 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
  {
    v41 = 0LL;
    v38 = this->fields.currentQuestId;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                  (QuestPhaseMaster_o *)Instance,
                                  &v41,
                                  this->fields.currentQuestId,
                                  this->fields.currentQuestPhase,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      Instance = (DataManager_o *)ScriptManager__GetSelectBranchIndex(0LL);
      if ( !v41 )
        goto LABEL_82;
      Instance = (DataManager_o *)QuestPhaseEntity__GetSelectedQuestId(
                                    v41,
                                    this->fields.currentQuestId,
                                    (int32_t)Instance,
                                    0LL);
      v38 = (int)Instance;
    }
    if ( entity )
    {
      fakeValue = entity->fields.id.fields.fakeValue;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      }
      LastUsedDeckNumberManager__SetDeckNumber(v38, fakeValue, 0LL);
      LastUsedDeckNumberManager__WriteData(0LL);
      goto LABEL_75;
    }
LABEL_82:
    sub_B2C434(Instance, v27);
  }
LABEL_75:
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v40 = JsonManager__toJson(success, 0, 0, 0LL);
  RequestBase__completed((RequestBase_o *)this, v40, 0LL);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
}