void BattleSetupRequest___ctor(BattleSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleSetupRequest__beginRequest(
        BattleSetupRequest_o *this,
        int32_t questId,
        int32_t questPhase,
        int64_t activeDeckId,
        int64_t followerId,
        int32_t followerClassId,
        int32_t followerGrandGraphId,
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
  System_String_o *v23; // x27
  System_Int32_array *v24; // x22
  bool v28; // zf
  System_Int32_array *v29; // x0
  Il2CppObject *p_obj; // x19

  v23 = choiceRandomLimitCounts;
  v24 = routeSelect;
  if ( (byte_4D3241F & 1) == 0 )
  {
    sub_1C93AD4(&BattleData_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&StringLiteral_19738/*"followerId"*/);
    sub_1C93AD4(&StringLiteral_19230/*"enemySelect"*/);
    sub_1C93AD4(&StringLiteral_23443/*"routeSelect"*/);
    sub_1C93AD4(&StringLiteral_16766/*"activeDeckId"*/);
    sub_1C93AD4(&StringLiteral_24831/*"userEquipId"*/);
    sub_1C93AD4(&StringLiteral_17464/*"boostId"*/);
    sub_1C93AD4(&StringLiteral_21271/*"itemId"*/);
    sub_1C93AD4(&StringLiteral_19740/*"followerSpoilerProtectionLimitCount"*/);
    sub_1C93AD4(&StringLiteral_19739/*"followerRandomLimitCount"*/);
    sub_1C93AD4(&StringLiteral_17853/*"campaignItemId"*/);
    sub_1C93AD4(&StringLiteral_23150/*"questPhase"*/);
    sub_1C93AD4(&StringLiteral_19737/*"followerGrandGraphId"*/);
    sub_1C93AD4(&StringLiteral_23270/*"recommendSupportIdx"*/);
    sub_1C93AD4(&StringLiteral_25571/*"{}"*/);
    sub_1C93AD4(&StringLiteral_19742/*"followerType"*/);
    sub_1C93AD4(&StringLiteral_23146/*"questId"*/);
    sub_1C93AD4(&StringLiteral_19735/*"followerClassId"*/);
    sub_1C93AD4(&StringLiteral_19741/*"followerSupportDeckId"*/);
    sub_1C93AD4(&StringLiteral_18099/*"choiceRandomLimitCounts"*/);
    sub_1C93AD4(&StringLiteral_24801/*"useRewardAddItemIds"*/);
    sub_1C93AD4(&StringLiteral_23151/*"questSelect"*/);
    sub_1C93AD4(&StringLiteral_23359/*"restartWave"*/);
    byte_4D3241F = 1;
  }
  if ( !routeSelect )
    v24 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  v28 = !System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0);
  v29 = useRewardAddItemIds;
  if ( !v28 )
    v23 = (System_String_o *)StringLiteral_25571/*"{}"*/;
  if ( !useRewardAddItemIds )
    v29 = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 0);
  this->fields.activeDeckId = activeDeckId;
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  p_obj = &v29->obj;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23146/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23150/*"questPhase"*/, questPhase, 0);
  RequestBase__addField_44911784((RequestBase_o *)this, (System_String_o *)StringLiteral_16766/*"activeDeckId"*/, activeDeckId, 0);
  RequestBase__addField_44911784((RequestBase_o *)this, (System_String_o *)StringLiteral_19738/*"followerId"*/, followerId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19735/*"followerClassId"*/, followerClassId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19737/*"followerGrandGraphId"*/, followerGrandGraphId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21271/*"itemId"*/, itemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17464/*"boostId"*/, boostId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19230/*"enemySelect"*/, enemySelect, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23151/*"questSelect"*/, questSelect, 0);
  RequestBase__addField_44911784((RequestBase_o *)this, (System_String_o *)StringLiteral_24831/*"userEquipId"*/, userEquipId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19742/*"followerType"*/, followerType, 0);
  RequestBase__addField_44913028((RequestBase_o *)this, (System_String_o *)StringLiteral_23443/*"routeSelect"*/, &v24->obj, 0);
  RequestBase__addField_44907496((RequestBase_o *)this, (System_String_o *)StringLiteral_18099/*"choiceRandomLimitCounts"*/, v23, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19739/*"followerRandomLimitCount"*/, followerRndomLimitCount, 0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19740/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23270/*"recommendSupportIdx"*/, recommendSupportIdx, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19741/*"followerSupportDeckId"*/, followerSupportDeckId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17853/*"campaignItemId"*/, campaignItemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23359/*"restartWave"*/, restartWave, 0);
  RequestBase__addField_44913028((RequestBase_o *)this, (System_String_o *)StringLiteral_24801/*"useRewardAddItemIds"*/, p_obj, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D3241E & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_9184/*"MockBattleSetupRequest"*/);
    byte_4D3241E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9184/*"MockBattleSetupRequest"*/, 0);
}


System_String_o *BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D3241D & 1) == 0 )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17184/*"battle/setup"*/);
    byte_4D3241D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64425724(BaseUrl, (System_String_o *)StringLiteral_17184/*"battle/setup"*/, 0);
}


void BattleSetupRequest__requestCompleted(
        BattleSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t EventId; // w0
  int32_t v11; // w21
  Il2CppObject *v12; // x0
  System_String_o *SaveFileNameByEvent; // x0
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v15; // x0
  int32_t SpotId; // w21
  TerminalPramsManager_c *v17; // x0
  int32_t v18; // w21
  int32_t klass; // w22
  System_String_o *v20; // x0
  QuestPhaseEntity_o *v21; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D32420 & 1) == 0 )
  {
    sub_1C93AD4(&BattleData_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&ResponseCommandKind_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&UserMissionNewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    byte_4D32420 = 1;
  }
  entity = 0;
  v21 = 0;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(20, responseList, 0);
  if ( !v5
    || (v6 = v5, !ResponseData__checkError_44908744(v5, 0))
    || (success = (Il2CppObject *)v6->fields.success) == 0 )
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_22483/*"ng"*/, 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_68;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0);
  if ( EventId >= 1 )
  {
    v11 = EventId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_68;
    v12 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            v11,
            (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( v12 && EventEntity__IsOpen((EventEntity_o *)v12, 1, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !Instance )
        goto LABEL_68;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v11,
                   (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_68;
      if ( EventDetailEntity__IsMission((EventDetailEntity_o *)Instance, 0) )
      {
        if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v11, 0);
        if ( System_IO_File__Exists(SaveFileNameByEvent, 0) )
        {
          if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
          UserMissionNewManager__SetClearNewFlg(0);
          UserMissionNewManager__WriteData(0);
        }
      }
    }
  }
  currentQuestId = this->fields.currentQuestId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D5D9 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D5D9 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
  TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0);
  if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0) )
  {
    SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D5DA )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D5DA = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
  if ( !v17->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v17);
  TerminalPramsManager__PlayQuestSave_SaveData(0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetAutoSelectParty(0) || this->fields.activeDeckId < 1 )
    goto LABEL_63;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !Instance )
    goto LABEL_68;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.activeDeckId,
         (const MethodInfo_3465A70 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
  {
    v21 = 0;
    v18 = this->fields.currentQuestId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_68;
    Instance = (Il2CppObject *)QuestPhaseMaster__TryGetEntity(
                                 (QuestPhaseMaster_o *)Instance,
                                 &v21,
                                 this->fields.currentQuestId,
                                 this->fields.currentQuestPhase,
                                 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Instance = (Il2CppObject *)ScriptManager__GetSelectBranchIndex(0);
      if ( !v21 )
        goto LABEL_68;
      Instance = (Il2CppObject *)QuestPhaseEntity__GetSelectedQuestId(
                                   v21,
                                   this->fields.currentQuestId,
                                   (int32_t)Instance,
                                   0);
      v18 = (int)Instance;
    }
    if ( entity )
    {
      klass = (int32_t)entity[2].klass;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__SetDeckNumber(v18, klass, 0);
      LastUsedDeckNumberManager__WriteData(0);
      goto LABEL_63;
    }
LABEL_68:
    sub_1C93D2C(Instance, v9);
  }
LABEL_63:
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v20 = JsonManager__toJson(success, 0, 0, 0);
  RequestBase__completed((RequestBase_o *)this, v20, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(0, 0, 0, 0);
}