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
  if ( (byte_40FCD4C & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_B16FFC(&int___TypeInfo, v27);
    sub_B16FFC(&StringLiteral_18717/*"followerId"*/, v28);
    sub_B16FFC(&StringLiteral_18300/*"enemySelect"*/, v29);
    sub_B16FFC(&StringLiteral_21765/*"routeSelect"*/, v30);
    sub_B16FFC(&StringLiteral_16176/*"activeDeckId"*/, v31);
    sub_B16FFC(&StringLiteral_22915/*"userEquipId"*/, v32);
    sub_B16FFC(&StringLiteral_16820/*"boostId"*/, v33);
    sub_B16FFC(&StringLiteral_19934/*"itemId"*/, v34);
    sub_B16FFC(&StringLiteral_18719/*"followerSpoilerProtectionLimitCount"*/, v35);
    sub_B16FFC(&StringLiteral_18718/*"followerRandomLimitCount"*/, v36);
    sub_B16FFC(&StringLiteral_17124/*"campaignItemId"*/, v37);
    sub_B16FFC(&StringLiteral_21522/*"questPhase"*/, v38);
    sub_B16FFC(&StringLiteral_23589/*"{}"*/, v39);
    sub_B16FFC(&StringLiteral_18721/*"followerType"*/, v40);
    sub_B16FFC(&StringLiteral_21520/*"questId"*/, v41);
    sub_B16FFC(&StringLiteral_18715/*"followerClassId"*/, v42);
    sub_B16FFC(&StringLiteral_18720/*"followerSupportDeckId"*/, v43);
    sub_B16FFC(&StringLiteral_17353/*"choiceRandomLimitCounts"*/, v44);
    sub_B16FFC(&StringLiteral_21523/*"questSelect"*/, v45);
    byte_40FCD4C = 1;
  }
  if ( !routeSelect )
    v26 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, *(_QWORD *)&questPhase);
  v46 = !System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL);
  v47 = StringLiteral_23589/*"{}"*/;
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  if ( !v46 )
    v25 = (System_String_o *)v47;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21520/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21522/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_16176/*"activeDeckId"*/, activeDeckId, 0LL);
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_18717/*"followerId"*/, followerId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18715/*"followerClassId"*/, followerClassId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19934/*"itemId"*/, itemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16820/*"boostId"*/, boostId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18300/*"enemySelect"*/, enemySelect, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21523/*"questSelect"*/, questSelect, 0LL);
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_22915/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18721/*"followerType"*/, followerType, 0LL);
  RequestBase__addField_30957272((RequestBase_o *)this, (System_String_o *)StringLiteral_21765/*"routeSelect"*/, &v26->obj, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_17353/*"choiceRandomLimitCounts"*/, v25, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18718/*"followerRandomLimitCount"*/, followerRndomLimitCount, 0LL);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_18719/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18720/*"followerSupportDeckId"*/, followerSupportDeckId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17124/*"campaignItemId"*/, campaignItemId, 0LL);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FCD4B & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9129/*"MockBattleSetupRequest"*/, v2);
    byte_40FCD4B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9129/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FCD4A & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16573/*"battle/setup"*/, v2);
    byte_40FCD4A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_16573/*"battle/setup"*/, 0LL);
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
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t EventId; // w0
  __int64 v29; // x1
  int32_t v30; // w21
  WebViewManager_o *v31; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x0
  EventEntity_o *v33; // x0
  WebViewManager_o *v34; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x0
  EventDetailEntity_o *v36; // x0
  System_String_o *SaveFileNameByEvent; // x0
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v39; // x0
  __int64 v40; // x1
  int32_t SpotId; // w21
  TerminalPramsManager_c *v42; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  int32_t SelectedQuestId; // w21
  WebViewManager_o *v45; // x0
  QuestPhaseMaster_o *v46; // x0
  int32_t SelectBranchIndex; // w0
  int32_t fakeValue; // w22
  System_String_o *v49; // x0
  QuestPhaseEntity_o *v50; // [xsp+0h] [xbp-40h] BYREF
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FCD4D & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, responseList);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_UserDeckMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v13);
    sub_B16FFC(&JsonManager_TypeInfo, v14);
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, v15);
    sub_B16FFC(&OptionManager_TypeInfo, v16);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v17);
    sub_B16FFC(&ScriptManager_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v20);
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v22);
    byte_40FCD4D = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v23 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( !v23
    || (v24 = v23, !ResponseData__checkError_30924960(v23, 0LL))
    || (success = (Il2CppObject *)v24->fields.success) == 0LL )
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_82;
  EventId = QuestGroupMaster__GetEventId(MasterData_WarQuestSelectionMaster, this->fields.currentQuestId, 0LL);
  if ( EventId >= 1 )
  {
    v30 = EventId;
    v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v31 )
      goto LABEL_82;
    v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v31,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !v32 )
      goto LABEL_82;
    v33 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v32,
                             v30,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( v33 && EventEntity__IsOpen(v33, 1, 0LL) )
    {
      v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v34 )
        goto LABEL_82;
      v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v34,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !v35 )
        goto LABEL_82;
      v36 = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     v35,
                                     v30,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !v36 )
        goto LABEL_82;
      if ( EventDetailEntity__IsMission(v36, 0LL) )
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
  if ( !byte_40F609A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v29);
    byte_40F609A = 1;
  }
  v39 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v39 = TerminalPramsManager_TypeInfo;
  }
  v39->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
  TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
  if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
  {
    SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F609B )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v40);
      byte_40F609B = 1;
    }
    v42 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v42 = TerminalPramsManager_TypeInfo;
    }
    v42->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  else
  {
    v42 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v42);
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
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_82;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         this->fields.activeDeckId,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
  {
    v50 = 0LL;
    SelectedQuestId = this->fields.currentQuestId;
    v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v45 )
      goto LABEL_82;
    v46 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v45,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !v46 )
      goto LABEL_82;
    if ( QuestPhaseMaster__TryGetEntity(v46, &v50, this->fields.currentQuestId, this->fields.currentQuestPhase, 0LL) )
    {
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      SelectBranchIndex = ScriptManager__GetSelectBranchIndex(0LL);
      if ( !v50 )
        goto LABEL_82;
      SelectedQuestId = QuestPhaseEntity__GetSelectedQuestId(v50, this->fields.currentQuestId, SelectBranchIndex, 0LL);
    }
    if ( entity )
    {
      fakeValue = entity->fields.id.fields.fakeValue;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      }
      LastUsedDeckNumberManager__SetDeckNumber(SelectedQuestId, fakeValue, 0LL);
      LastUsedDeckNumberManager__WriteData(0LL);
      goto LABEL_75;
    }
LABEL_82:
    sub_B170D4();
  }
LABEL_75:
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v49 = JsonManager__toJson(success, 0, 0, 0LL);
  RequestBase__completed((RequestBase_o *)this, v49, 0LL);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
}