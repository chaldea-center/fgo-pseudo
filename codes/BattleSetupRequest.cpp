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
        int32_t followerDispLimitCount,
        int32_t followerIconLimitCount,
        int32_t followerPortraitLimitCount,
        int32_t followerCommandCardLimitCount,
        int32_t followerTransformRandomLimitCount,
        System_String_o *choiceTransformRandomLimitCounts,
        int32_t followerTransformSpoilerProtectionLimitCount,
        int32_t followerTransformDispLimitCount,
        int32_t followerTransformIconLimitCount,
        int32_t followerTransformPortraitLimitCount,
        int32_t followerTransformCommandCardLimitCount,
        int32_t recommendSupportIdx,
        int32_t followerSupportDeckId,
        int32_t campaignItemId,
        int32_t restartWave,
        System_Int32_array *useRewardAddItemIds,
        const MethodInfo *method)
{
  System_String_o *v34; // x22
  System_String_o *v35; // x24
  System_Int32_array *v38; // x25
  System_Int32_array *v40; // x8
  System_String_o *v41; // x1
  int32_t v42; // w27
  int32_t v43; // w2
  Il2CppObject *p_obj; // x19
  __int64 v45; // x1

  v34 = choiceTransformRandomLimitCounts;
  v35 = choiceRandomLimitCounts;
  v38 = routeSelect;
  if ( (byte_593A160 & 1) == 0 )
  {
    sub_21FFC50(&BattleData_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_18713/*"choiceTransformRandomLimitCounts"*/);
    sub_21FFC50(&StringLiteral_20410/*"followerId"*/);
    sub_21FFC50(&StringLiteral_20417/*"followerTransformIconLimitCount"*/);
    sub_21FFC50(&StringLiteral_19885/*"enemySelect"*/);
    sub_21FFC50(&StringLiteral_20409/*"followerIconLimitCount"*/);
    sub_21FFC50(&StringLiteral_24314/*"routeSelect"*/);
    sub_21FFC50(&StringLiteral_20407/*"followerDispLimitCount"*/);
    sub_21FFC50(&StringLiteral_17302/*"activeDeckId"*/);
    sub_21FFC50(&StringLiteral_25819/*"userEquipId"*/);
    sub_21FFC50(&StringLiteral_18040/*"boostId"*/);
    sub_21FFC50(&StringLiteral_22016/*"itemId"*/);
    sub_21FFC50(&StringLiteral_20413/*"followerSpoilerProtectionLimitCount"*/);
    sub_21FFC50(&StringLiteral_20412/*"followerRandomLimitCount"*/);
    sub_21FFC50(&StringLiteral_18459/*"campaignItemId"*/);
    sub_21FFC50(&StringLiteral_24008/*"questPhase"*/);
    sub_21FFC50(&StringLiteral_20408/*"followerGrandGraphId"*/);
    sub_21FFC50(&StringLiteral_24133/*"recommendSupportIdx"*/);
    sub_21FFC50(&StringLiteral_20416/*"followerTransformDispLimitCount"*/);
    sub_21FFC50(&StringLiteral_20419/*"followerTransformRandomLimitCount"*/);
    sub_21FFC50(&StringLiteral_26594/*"{}"*/);
    sub_21FFC50(&StringLiteral_20421/*"followerType"*/);
    sub_21FFC50(&StringLiteral_24004/*"questId"*/);
    sub_21FFC50(&StringLiteral_20404/*"followerClassId"*/);
    sub_21FFC50(&StringLiteral_20414/*"followerSupportDeckId"*/);
    sub_21FFC50(&StringLiteral_20405/*"followerCommandCardLimitCount"*/);
    sub_21FFC50(&StringLiteral_20418/*"followerTransformPortraitLimitCount"*/);
    sub_21FFC50(&StringLiteral_18712/*"choiceRandomLimitCounts"*/);
    sub_21FFC50(&StringLiteral_25787/*"useRewardAddItemIds"*/);
    sub_21FFC50(&StringLiteral_20415/*"followerTransformCommandCardLimitCount"*/);
    sub_21FFC50(&StringLiteral_24009/*"questSelect"*/);
    sub_21FFC50(&StringLiteral_20420/*"followerTransformSpoilerProtectionLimitCount"*/);
    sub_21FFC50(&StringLiteral_20411/*"followerPortraitLimitCount"*/);
    sub_21FFC50(&StringLiteral_24230/*"restartWave"*/);
    byte_593A160 = 1;
  }
  if ( !routeSelect )
    v38 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  if ( System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0) )
    v35 = (System_String_o *)StringLiteral_26594/*"{}"*/;
  if ( System_String__IsNullOrEmpty(choiceTransformRandomLimitCounts, 0) )
    v34 = (System_String_o *)StringLiteral_26594/*"{}"*/;
  v40 = useRewardAddItemIds;
  if ( !useRewardAddItemIds )
    v40 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  v41 = (System_String_o *)StringLiteral_24004/*"questId"*/;
  v42 = questId;
  v43 = questId;
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = questId;
  this->fields.currentQuestId = questPhase;
  p_obj = &v40->obj;
  this->fields.activeDeckId = activeDeckId;
  RequestBase__addField((RequestBase_o *)this, v41, v43, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24008/*"questPhase"*/, questPhase, 0);
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_17302/*"activeDeckId"*/, activeDeckId, 0);
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_20410/*"followerId"*/, followerId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20404/*"followerClassId"*/, followerClassId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20408/*"followerGrandGraphId"*/, followerGrandGraphId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22016/*"itemId"*/, itemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18040/*"boostId"*/, boostId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19885/*"enemySelect"*/, enemySelect, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24009/*"questSelect"*/, questSelect, 0);
  RequestBase__addField_51200900((RequestBase_o *)this, (System_String_o *)StringLiteral_25819/*"userEquipId"*/, userEquipId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20421/*"followerType"*/, followerType, 0);
  RequestBase__addField_51191900((RequestBase_o *)this, (System_String_o *)StringLiteral_24314/*"routeSelect"*/, &v38->obj, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_18712/*"choiceRandomLimitCounts"*/, v35, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20412/*"followerRandomLimitCount"*/, followerRndomLimitCount, 0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20413/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20407/*"followerDispLimitCount"*/, followerDispLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20409/*"followerIconLimitCount"*/, followerIconLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20411/*"followerPortraitLimitCount"*/, followerPortraitLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20405/*"followerCommandCardLimitCount"*/, followerCommandCardLimitCount, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_18713/*"choiceTransformRandomLimitCounts"*/, v34, 0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20419/*"followerTransformRandomLimitCount"*/,
    followerTransformRandomLimitCount,
    0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20420/*"followerTransformSpoilerProtectionLimitCount"*/,
    followerTransformSpoilerProtectionLimitCount,
    0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20416/*"followerTransformDispLimitCount"*/,
    followerTransformDispLimitCount,
    0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20417/*"followerTransformIconLimitCount"*/,
    followerTransformIconLimitCount,
    0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20418/*"followerTransformPortraitLimitCount"*/,
    followerTransformPortraitLimitCount,
    0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_20415/*"followerTransformCommandCardLimitCount"*/,
    followerTransformCommandCardLimitCount,
    0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24133/*"recommendSupportIdx"*/, recommendSupportIdx, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20414/*"followerSupportDeckId"*/, followerSupportDeckId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18459/*"campaignItemId"*/, campaignItemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24230/*"restartWave"*/, restartWave, 0);
  RequestBase__addField_51191900((RequestBase_o *)this, (System_String_o *)StringLiteral_25787/*"useRewardAddItemIds"*/, p_obj, 0);
  if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v45);
  BattleData__setReserveResumeBattle(1, v42, questPhase, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A15F & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9499/*"MockBattleSetupRequest"*/);
    byte_593A15F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9499/*"MockBattleSetupRequest"*/, 0);
}


System_String_o *BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A15E & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17750/*"battle/setup"*/);
    byte_593A15E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17750/*"battle/setup"*/, 0);
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
  __int64 v11; // x1
  int32_t v12; // w21
  Il2CppObject *v13; // x0
  System_String_o *SaveFileNameByEvent; // x0
  int32_t v15; // w21
  TerminalPramsManager_c *v16; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t v18; // w0
  __int64 v19; // x1
  int32_t SpotId; // w21
  TerminalPramsManager_c *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  int32_t v24; // w21
  int32_t klass; // w22
  System_String_o *v26; // x0
  __int64 v27; // x1
  QuestPhaseEntity_o *v28; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_593A161 & 1) == 0 )
  {
    sub_21FFC50(&BattleData_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&LastUsedDeckNumberManager_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&UserMissionNewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A161 = 1;
  }
  entity = 0;
  v28 = 0;
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(20, responseList, 0);
  if ( !v5
    || (v6 = v5, !ResponseData__checkError_51190916(v5, 0))
    || (success = (Il2CppObject *)v6->fields.success) == 0 )
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_23290/*"ng"*/, 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_67;
  EventId = QuestGroupMaster__GetEventId(
              (QuestGroupMaster_o *)Instance,
              *((_DWORD *)&this->fields.shouldShowConnect + 1),
              0);
  if ( EventId >= 1 )
  {
    v12 = EventId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_67;
    v13 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            v12,
            (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( v13 && EventEntity__IsOpen((EventEntity_o *)v13, 1, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_67;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !Instance )
        goto LABEL_67;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v12,
                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_67;
      if ( EventDetailEntity__IsMission((EventDetailEntity_o *)Instance, 0) )
      {
        if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v11);
        SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v12, 0);
        if ( System_IO_File__Exists(SaveFileNameByEvent, 0) )
        {
          if ( !*(&UserMissionNewManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v11);
          UserMissionNewManager__SetClearNewFlg(0);
          UserMissionNewManager__WriteData(0);
        }
      }
    }
  }
  v15 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
  if ( !byte_59350E1 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59350E1 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    v16 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  v18 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
  static_fields->_LastPlayedQuestId_k__BackingField = v15;
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v18, 0);
  if ( QuestMaster__HasFlag(*((_DWORD *)&this->fields.shouldShowConnect + 1), 0x8000000000LL, 0) )
  {
    SpotId = QuestMaster__GetSpotId(*((_DWORD *)&this->fields.shouldShowConnect + 1), 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    if ( !byte_59350E2 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59350E2 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
      v21 = TerminalPramsManager_TypeInfo;
    }
    v21->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  else
  {
    v21 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v21->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v21, v19);
  TerminalPramsManager__PlayQuestSave_SaveData(0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v22);
  if ( !OptionManager__GetAutoSelectParty(0) || this->fields.activeDeckId < 1 )
    goto LABEL_62;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v23);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !Instance )
    goto LABEL_67;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.activeDeckId,
         (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
  {
    v24 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    v28 = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_67;
    Instance = (Il2CppObject *)QuestPhaseMaster__TryGetEntity(
                                 (QuestPhaseMaster_o *)Instance,
                                 &v28,
                                 *((_DWORD *)&this->fields.shouldShowConnect + 1),
                                 this->fields.currentQuestId,
                                 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v9);
      Instance = (Il2CppObject *)ScriptManager__GetSelectBranchIndex(0);
      if ( !v28 )
        goto LABEL_67;
      Instance = (Il2CppObject *)QuestPhaseEntity__GetSelectedQuestId(
                                   v28,
                                   *((_DWORD *)&this->fields.shouldShowConnect + 1),
                                   (int32_t)Instance,
                                   0);
      v24 = (int)Instance;
    }
    if ( entity )
    {
      klass = (int32_t)entity[2].klass;
      if ( !*(&LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v9);
      LastUsedDeckNumberManager__SetDeckNumber(v24, klass, 0);
      LastUsedDeckNumberManager__WriteData(0);
      goto LABEL_62;
    }
LABEL_67:
    sub_21FFECC(Instance, v9);
  }
LABEL_62:
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v23);
  v26 = JsonManager__toJson(success, 0, 0, 0);
  RequestBase__completed((RequestBase_o *)this, v26, 0);
  if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v27);
  BattleData__setReserveResumeBattle(0, 0, 0, 0);
}