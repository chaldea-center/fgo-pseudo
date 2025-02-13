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
  const MethodInfo *v28; // x3
  System_Int32_array *v29; // x28
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x1

  v22 = choiceRandomLimitCounts;
  v23 = routeSelect;
  if ( (byte_4BDDDDD & 1) == 0 )
  {
    sub_1C21E38(&BattleData_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&StringLiteral_19840/*"followerId"*/);
    sub_1C21E38(&StringLiteral_19354/*"enemySelect"*/);
    sub_1C21E38(&StringLiteral_23393/*"routeSelect"*/);
    sub_1C21E38(&StringLiteral_16934/*"activeDeckId"*/);
    sub_1C21E38(&StringLiteral_24826/*"userEquipId"*/);
    sub_1C21E38(&StringLiteral_17654/*"boostId"*/);
    sub_1C21E38(&StringLiteral_21262/*"itemId"*/);
    sub_1C21E38(&StringLiteral_19842/*"followerSpoilerProtectionLimitCount"*/);
    sub_1C21E38(&StringLiteral_19841/*"followerRandomLimitCount"*/);
    sub_1C21E38(&StringLiteral_18016/*"campaignItemId"*/);
    sub_1C21E38(&StringLiteral_23103/*"questPhase"*/);
    sub_1C21E38(&StringLiteral_23224/*"recommendSupportIdx"*/);
    sub_1C21E38(&StringLiteral_25590/*"{}"*/);
    sub_1C21E38(&StringLiteral_19844/*"followerType"*/);
    sub_1C21E38(&StringLiteral_23101/*"questId"*/);
    sub_1C21E38(&StringLiteral_19838/*"followerClassId"*/);
    sub_1C21E38(&StringLiteral_19843/*"followerSupportDeckId"*/);
    sub_1C21E38(&StringLiteral_18265/*"choiceRandomLimitCounts"*/);
    sub_1C21E38(&StringLiteral_24797/*"useRewardAddItemIds"*/);
    sub_1C21E38(&StringLiteral_23104/*"questSelect"*/);
    sub_1C21E38(&StringLiteral_23318/*"restartWave"*/);
    byte_4BDDDDD = 1;
  }
  if ( !routeSelect )
    v23 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  v29 = useRewardAddItemIds;
  if ( System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL) )
    v22 = (System_String_o *)StringLiteral_25590/*"{}"*/;
  if ( !useRewardAddItemIds )
    v29 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23101/*"questId"*/, questId, v28);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23103/*"questPhase"*/, questPhase, v30);
  RequestBase__addField_42421084((RequestBase_o *)this, (System_String_o *)StringLiteral_16934/*"activeDeckId"*/, activeDeckId, v31);
  RequestBase__addField_42421084((RequestBase_o *)this, (System_String_o *)StringLiteral_19840/*"followerId"*/, followerId, v32);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19838/*"followerClassId"*/, followerClassId, v33);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21262/*"itemId"*/, itemId, v34);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17654/*"boostId"*/, boostId, v35);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19354/*"enemySelect"*/, enemySelect, v36);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23104/*"questSelect"*/, questSelect, v37);
  RequestBase__addField_42421084((RequestBase_o *)this, (System_String_o *)StringLiteral_24826/*"userEquipId"*/, userEquipId, v38);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19844/*"followerType"*/, followerType, v39);
  RequestBase__addField_42423236((RequestBase_o *)this, (System_String_o *)StringLiteral_23393/*"routeSelect"*/, &v23->obj, v40);
  RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_18265/*"choiceRandomLimitCounts"*/, v22, v41);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19841/*"followerRandomLimitCount"*/, followerRndomLimitCount, v42);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19842/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    v43);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23224/*"recommendSupportIdx"*/, recommendSupportIdx, v44);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19843/*"followerSupportDeckId"*/, followerSupportDeckId, v45);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18016/*"campaignItemId"*/, campaignItemId, v46);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23318/*"restartWave"*/, restartWave, v47);
  RequestBase__addField_42423236((RequestBase_o *)this, (System_String_o *)StringLiteral_24797/*"useRewardAddItemIds"*/, &v29->obj, v48);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, v49);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDDDC & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9293/*"MockBattleSetupRequest"*/);
    byte_4BDDDDC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9293/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDDDB & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_17385/*"battle/setup"*/);
    byte_4BDDDDB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_17385/*"battle/setup"*/, 0LL);
}


void __fastcall BattleSetupRequest__requestCompleted(
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
  struct NetworkManager_ResultCallbackFunc_o *v18; // x8
  int32_t v19; // w21
  int32_t klass; // w22
  System_String_o *v21; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  QuestPhaseEntity_o *v23; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BDDDDE & 1) == 0 )
  {
    sub_1C21E38(&BattleData_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&LastUsedDeckNumberManager_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&UserMissionNewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDDDE = 1;
  }
  entity = 0LL;
  v23 = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( v5 )
  {
    v6 = v5;
    if ( ResponseData__checkError_42505456(v5, 0LL) )
    {
      success = (Il2CppObject *)v6->fields.success;
      if ( success )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( Instance )
          {
            EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0LL);
            if ( EventId >= 1 )
            {
              v11 = EventId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_71;
              Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
              if ( !Instance )
                goto LABEL_71;
              v12 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      v11,
                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( v12 && EventEntity__IsOpen((EventEntity_o *)v12, 1, 0LL) )
              {
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             v11,
                             (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( !Instance )
                  goto LABEL_71;
                if ( EventDetailEntity__IsMission((EventDetailEntity_o *)Instance, 0LL) )
                {
                  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
                  SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v11, 0LL);
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
            if ( !byte_4BD92EA )
            {
              sub_1C21E38(&TerminalPramsManager_TypeInfo);
              byte_4BD92EA = 1;
            }
            v15 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v15 = TerminalPramsManager_TypeInfo;
            }
            v15->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
            TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
            if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
            {
              SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4BD92EB )
              {
                sub_1C21E38(&TerminalPramsManager_TypeInfo);
                byte_4BD92EB = 1;
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
            TerminalPramsManager__PlayQuestSave_SaveData(0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            if ( !OptionManager__GetAutoSelectParty(0LL) || this->fields.activeDeckId < 1 )
              goto LABEL_63;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserDeckMaster___);
            if ( Instance )
            {
              if ( !DataMasterBase_object__object__long___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &entity,
                      this->fields.activeDeckId,
                      (const MethodInfo_325E370 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
              {
LABEL_63:
                if ( !JsonManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
                v21 = JsonManager__toJson(success, 0, 0, 0LL);
                CallBack = this->fields.CallBack;
                if ( CallBack )
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    v21,
                    *(_QWORD *)&CallBack->fields.extra_arg);
                if ( !BattleData_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
                BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
                return;
              }
              v23 = 0LL;
              v19 = this->fields.currentQuestId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
                if ( Instance )
                {
                  Instance = (Il2CppObject *)QuestPhaseMaster__TryGetEntity(
                                               (QuestPhaseMaster_o *)Instance,
                                               &v23,
                                               this->fields.currentQuestId,
                                               this->fields.currentQuestPhase,
                                               0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
                    Instance = (Il2CppObject *)ScriptManager__GetSelectBranchIndex(0LL);
                    if ( !v23 )
                      goto LABEL_71;
                    Instance = (Il2CppObject *)QuestPhaseEntity__GetSelectedQuestId(
                                                 v23,
                                                 this->fields.currentQuestId,
                                                 (int32_t)Instance,
                                                 0LL);
                    v19 = (int)Instance;
                  }
                  if ( entity )
                  {
                    klass = (int32_t)entity[2].klass;
                    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
                    LastUsedDeckNumberManager__SetDeckNumber(v19, klass, 0LL);
                    LastUsedDeckNumberManager__WriteData(0LL);
                    goto LABEL_63;
                  }
                }
              }
            }
          }
        }
LABEL_71:
        sub_1C22094(Instance, v9);
      }
    }
  }
  v18 = this->fields.CallBack;
  if ( v18 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v18->fields.m_target)(
      v18->fields.original_method_info,
      StringLiteral_22456/*"ng"*/,
      *(_QWORD *)&v18->fields.extra_arg);
}