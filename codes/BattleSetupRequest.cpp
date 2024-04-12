void __fastcall BattleSetupRequest___ctor(BattleSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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
  bool v27; // zf
  __int64 v28; // x8

  v25 = choiceRandomLimitCounts;
  v26 = routeSelect;
  if ( (byte_42B2A9A & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&StringLiteral_18930/*"followerId"*/);
    sub_B52984(&StringLiteral_18503/*"enemySelect"*/);
    sub_B52984(&StringLiteral_22041/*"routeSelect"*/);
    sub_B52984(&StringLiteral_16350/*"activeDeckId"*/);
    sub_B52984(&StringLiteral_23198/*"userEquipId"*/);
    sub_B52984(&StringLiteral_17002/*"boostId"*/);
    sub_B52984(&StringLiteral_20167/*"itemId"*/);
    sub_B52984(&StringLiteral_18932/*"followerSpoilerProtectionLimitCount"*/);
    sub_B52984(&StringLiteral_18931/*"followerRandomLimitCount"*/);
    sub_B52984(&StringLiteral_17309/*"campaignItemId"*/);
    sub_B52984(&StringLiteral_21792/*"questPhase"*/);
    sub_B52984(&StringLiteral_23877/*"{}"*/);
    sub_B52984(&StringLiteral_18934/*"followerType"*/);
    sub_B52984(&StringLiteral_21790/*"questId"*/);
    sub_B52984(&StringLiteral_18928/*"followerClassId"*/);
    sub_B52984(&StringLiteral_18933/*"followerSupportDeckId"*/);
    sub_B52984(&StringLiteral_17544/*"choiceRandomLimitCounts"*/);
    sub_B52984(&StringLiteral_21793/*"questSelect"*/);
    byte_42B2A9A = 1;
  }
  if ( !routeSelect )
    v26 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  v27 = !System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL);
  v28 = StringLiteral_23877/*"{}"*/;
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  if ( !v27 )
    v25 = (System_String_o *)v28;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21790/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21792/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_32020452((RequestBase_o *)this, (System_String_o *)StringLiteral_16350/*"activeDeckId"*/, activeDeckId, 0LL);
  RequestBase__addField_32020452((RequestBase_o *)this, (System_String_o *)StringLiteral_18930/*"followerId"*/, followerId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18928/*"followerClassId"*/, followerClassId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20167/*"itemId"*/, itemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17002/*"boostId"*/, boostId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18503/*"enemySelect"*/, enemySelect, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21793/*"questSelect"*/, questSelect, 0LL);
  RequestBase__addField_32020452((RequestBase_o *)this, (System_String_o *)StringLiteral_23198/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18934/*"followerType"*/, followerType, 0LL);
  RequestBase__addField_32021028((RequestBase_o *)this, (System_String_o *)StringLiteral_22041/*"routeSelect"*/, &v26->obj, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_17544/*"choiceRandomLimitCounts"*/, v25, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18931/*"followerRandomLimitCount"*/, followerRndomLimitCount, 0LL);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_18932/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18933/*"followerSupportDeckId"*/, followerSupportDeckId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17309/*"campaignItemId"*/, campaignItemId, 0LL);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42B2A99 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_9215/*"MockBattleSetupRequest"*/);
    byte_42B2A99 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9215/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B2A98 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_16752/*"battle/setup"*/);
    byte_42B2A98 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_16752/*"battle/setup"*/, 0LL);
}


void __fastcall BattleSetupRequest__requestCompleted(
        BattleSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  int32_t EventId; // w0
  int32_t v11; // w21
  EventEntity_o *v12; // x0
  System_String_o *SaveFileNameByEvent; // x0
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v15; // x0
  int32_t SpotId; // w21
  TerminalPramsManager_c *v17; // x0
  int32_t v18; // w21
  int32_t fakeValue; // w22
  System_String_o *v20; // x0
  QuestPhaseEntity_o *v21; // [xsp+0h] [xbp-40h] BYREF
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B2A9B & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&LastUsedDeckNumberManager_TypeInfo);
    sub_B52984(&OptionManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&UserMissionNewManager_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B2A9B = 1;
  }
  v21 = 0LL;
  entity = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( !v5
    || (v6 = v5, !ResponseData__checkError_29724768(v5, 0LL))
    || (success = (Il2CppObject *)v6->fields.success) == 0LL )
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21239/*"ng"*/, 0LL);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_82;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0LL);
  if ( EventId >= 1 )
  {
    v11 = EventId;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_82;
    v12 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             v11,
                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( v12 && EventEntity__IsOpen(v12, 1, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_82;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !Instance )
        goto LABEL_82;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    v11,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_82;
      if ( EventDetailEntity__IsMission((EventDetailEntity_o *)Instance, 0LL) )
      {
        if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        }
        SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v11, 0LL);
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
  if ( !byte_42AC2FB )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2FB = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
  TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
  if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
  {
    SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2FC )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2FC = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  else
  {
    v17 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v17);
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
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !Instance )
    goto LABEL_82;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         this->fields.activeDeckId,
         (const MethodInfo_23E255C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
  {
    v21 = 0LL;
    v18 = this->fields.currentQuestId;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                  (QuestPhaseMaster_o *)Instance,
                                  &v21,
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
      if ( !v21 )
        goto LABEL_82;
      Instance = (DataManager_o *)QuestPhaseEntity__GetSelectedQuestId(
                                    v21,
                                    this->fields.currentQuestId,
                                    (int32_t)Instance,
                                    0LL);
      v18 = (int)Instance;
    }
    if ( entity )
    {
      fakeValue = entity->fields.id.fields.fakeValue;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      }
      LastUsedDeckNumberManager__SetDeckNumber(v18, fakeValue, 0LL);
      LastUsedDeckNumberManager__WriteData(0LL);
      goto LABEL_75;
    }
LABEL_82:
    sub_B52A5C(Instance, v9);
  }
LABEL_75:
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v20 = JsonManager__toJson(success, 0, 0, 0LL);
  RequestBase__completed((RequestBase_o *)this, v20, 0LL);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
}