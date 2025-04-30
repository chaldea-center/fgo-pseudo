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
        int32_t recommendSupportIdx,
        int32_t followerSupportDeckId,
        int32_t campaignItemId,
        int32_t restartWave,
        System_Int32_array *useRewardAddItemIds,
        const MethodInfo *method)
{
  System_String_o *v22; // x26
  System_Int32_array *v23; // x22
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
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  System_Int32_array *v50; // x24

  v22 = choiceRandomLimitCounts;
  v23 = routeSelect;
  if ( (byte_4A4FE19 & 1) == 0 )
  {
    sub_1B863B8(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_1B863B8(&int___TypeInfo, v28);
    sub_1B863B8(&StringLiteral_19291/*"followerId"*/, v29);
    sub_1B863B8(&StringLiteral_18801/*"enemySelect"*/, v30);
    sub_1B863B8(&StringLiteral_22823/*"routeSelect"*/, v31);
    sub_1B863B8(&StringLiteral_16420/*"activeDeckId"*/, v32);
    sub_1B863B8(&StringLiteral_24223/*"userEquipId"*/, v33);
    sub_1B863B8(&StringLiteral_17123/*"boostId"*/, v34);
    sub_1B863B8(&StringLiteral_20703/*"itemId"*/, v35);
    sub_1B863B8(&StringLiteral_19293/*"followerSpoilerProtectionLimitCount"*/, v36);
    sub_1B863B8(&StringLiteral_19292/*"followerRandomLimitCount"*/, v37);
    sub_1B863B8(&StringLiteral_17485/*"campaignItemId"*/, v38);
    sub_1B863B8(&StringLiteral_22541/*"questPhase"*/, v39);
    sub_1B863B8(&StringLiteral_22660/*"recommendSupportIdx"*/, v40);
    sub_1B863B8(&StringLiteral_24974/*"{}"*/, v41);
    sub_1B863B8(&StringLiteral_19295/*"followerType"*/, v42);
    sub_1B863B8(&StringLiteral_22539/*"questId"*/, v43);
    sub_1B863B8(&StringLiteral_19289/*"followerClassId"*/, v44);
    sub_1B863B8(&StringLiteral_19294/*"followerSupportDeckId"*/, v45);
    sub_1B863B8(&StringLiteral_17728/*"choiceRandomLimitCounts"*/, v46);
    sub_1B863B8(&StringLiteral_24195/*"useRewardAddItemIds"*/, v47);
    sub_1B863B8(&StringLiteral_22542/*"questSelect"*/, v48);
    sub_1B863B8(&StringLiteral_22746/*"restartWave"*/, v49);
    byte_4A4FE19 = 1;
  }
  if ( !routeSelect )
    v23 = (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  v50 = useRewardAddItemIds;
  if ( System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL) )
    v22 = (System_String_o *)StringLiteral_24974/*"{}"*/;
  if ( !useRewardAddItemIds )
    v50 = (System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22539/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22541/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_42287768((RequestBase_o *)this, (System_String_o *)StringLiteral_16420/*"activeDeckId"*/, activeDeckId, 0LL);
  RequestBase__addField_42287768((RequestBase_o *)this, (System_String_o *)StringLiteral_19291/*"followerId"*/, followerId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19289/*"followerClassId"*/, followerClassId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20703/*"itemId"*/, itemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17123/*"boostId"*/, boostId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18801/*"enemySelect"*/, enemySelect, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22542/*"questSelect"*/, questSelect, 0LL);
  RequestBase__addField_42287768((RequestBase_o *)this, (System_String_o *)StringLiteral_24223/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19295/*"followerType"*/, followerType, 0LL);
  RequestBase__addField_42288224((RequestBase_o *)this, (System_String_o *)StringLiteral_22823/*"routeSelect"*/, &v23->obj, 0LL);
  RequestBase__addField_42282000((RequestBase_o *)this, (System_String_o *)StringLiteral_17728/*"choiceRandomLimitCounts"*/, v22, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19292/*"followerRandomLimitCount"*/, followerRndomLimitCount, 0LL);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19293/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22660/*"recommendSupportIdx"*/, recommendSupportIdx, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19294/*"followerSupportDeckId"*/, followerSupportDeckId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17485/*"campaignItemId"*/, campaignItemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22746/*"restartWave"*/, restartWave, 0LL);
  RequestBase__addField_42288224((RequestBase_o *)this, (System_String_o *)StringLiteral_24195/*"useRewardAddItemIds"*/, &v50->obj, 0LL);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4FE18 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_8985/*"MockBattleSetupRequest"*/, v2);
    byte_4A4FE18 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_8985/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A4FE17 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_16852/*"battle/setup"*/, v2);
    byte_4A4FE17 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_16852/*"battle/setup"*/, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  int32_t EventId; // w0
  __int64 v29; // x1
  int32_t v30; // w21
  Il2CppObject *v31; // x0
  System_String_o *SaveFileNameByEvent; // x0
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v34; // x0
  __int64 v35; // x1
  int32_t SpotId; // w21
  TerminalPramsManager_c *v37; // x0
  int32_t v38; // w21
  int32_t klass; // w22
  System_String_o *v40; // x0
  QuestPhaseEntity_o *v41; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A4FE1A & 1) == 0 )
  {
    sub_1B863B8(&BattleData_TypeInfo, responseList);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_UserDeckMaster___, v9);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_1B863B8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12);
    sub_1B863B8(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v13);
    sub_1B863B8(&JsonManager_TypeInfo, v14);
    sub_1B863B8(&LastUsedDeckNumberManager_TypeInfo, v15);
    sub_1B863B8(&OptionManager_TypeInfo, v16);
    sub_1B863B8(&ResponseCommandKind_TypeInfo, v17);
    sub_1B863B8(&ScriptManager_TypeInfo, v18);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v20);
    sub_1B863B8(&UserMissionNewManager_TypeInfo, v21);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v22);
    byte_4A4FE1A = 1;
  }
  entity = 0LL;
  v41 = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v23 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( !v23
    || (v24 = v23, !ResponseData__checkError_42282948(v23, 0LL))
    || (success = (Il2CppObject *)v24->fields.success) == 0LL )
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21893/*"ng"*/, 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_68;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0LL);
  if ( EventId >= 1 )
  {
    v30 = EventId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_68;
    v31 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            v30,
            (const MethodInfo_3214280 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( v31 && EventEntity__IsOpen((EventEntity_o *)v31, 1, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !Instance )
        goto LABEL_68;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v30,
                   (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_68;
      if ( EventDetailEntity__IsMission((EventDetailEntity_o *)Instance, 0LL) )
      {
        if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v30, 0LL);
        if ( System_IO_File__Exists(SaveFileNameByEvent, 0LL) )
        {
          if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
          UserMissionNewManager__SetClearNewFlg(0LL);
          UserMissionNewManager__WriteData(0LL);
        }
      }
    }
  }
  currentQuestId = this->fields.currentQuestId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4B2B5 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v29);
    byte_4A4B2B5 = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v34->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
  TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
  if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
  {
    SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B2B6 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v35);
      byte_4A4B2B6 = 1;
    }
    v37 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  if ( !v37->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v37);
  TerminalPramsManager__PlayQuestSave_SaveData(0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetAutoSelectParty(0LL) || this->fields.activeDeckId < 1 )
    goto LABEL_63;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !Instance )
    goto LABEL_68;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.activeDeckId,
         (const MethodInfo_3216828 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
  {
    v41 = 0LL;
    v38 = this->fields.currentQuestId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_68;
    Instance = (Il2CppObject *)QuestPhaseMaster__TryGetEntity(
                                 (QuestPhaseMaster_o *)Instance,
                                 &v41,
                                 this->fields.currentQuestId,
                                 this->fields.currentQuestPhase,
                                 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Instance = (Il2CppObject *)ScriptManager__GetSelectBranchIndex(0LL);
      if ( !v41 )
        goto LABEL_68;
      Instance = (Il2CppObject *)QuestPhaseEntity__GetSelectedQuestId(
                                   v41,
                                   this->fields.currentQuestId,
                                   (int32_t)Instance,
                                   0LL);
      v38 = (int)Instance;
    }
    if ( entity )
    {
      klass = (int32_t)entity[2].klass;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__SetDeckNumber(v38, klass, 0LL);
      LastUsedDeckNumberManager__WriteData(0LL);
      goto LABEL_63;
    }
LABEL_68:
    sub_1B86614(Instance, v27);
  }
LABEL_63:
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v40 = JsonManager__toJson(success, 0, 0, 0LL);
  RequestBase__completed((RequestBase_o *)this, v40, 0LL);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
}