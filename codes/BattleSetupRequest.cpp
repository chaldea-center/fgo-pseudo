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
        const MethodInfo *method)
{
  System_String_o *v21; // x23
  System_Int32_array *v22; // x29
  bool IsNullOrEmpty; // w0
  const MethodInfo *v28; // x3
  __int64 v29; // x8
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
  const MethodInfo *v48; // x1

  v21 = choiceRandomLimitCounts;
  v22 = routeSelect;
  if ( (byte_4A5C93F & 1) == 0 )
  {
    sub_1B885B0(&BattleData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_19506/*"followerId"*/);
    sub_1B885B0(&StringLiteral_19026/*"enemySelect"*/);
    sub_1B885B0(&StringLiteral_22969/*"routeSelect"*/);
    sub_1B885B0(&StringLiteral_16653/*"activeDeckId"*/);
    sub_1B885B0(&StringLiteral_24387/*"userEquipId"*/);
    sub_1B885B0(&StringLiteral_17366/*"boostId"*/);
    sub_1B885B0(&StringLiteral_20883/*"itemId"*/);
    sub_1B885B0(&StringLiteral_19508/*"followerSpoilerProtectionLimitCount"*/);
    sub_1B885B0(&StringLiteral_19507/*"followerRandomLimitCount"*/);
    sub_1B885B0(&StringLiteral_17718/*"campaignItemId"*/);
    sub_1B885B0(&StringLiteral_22692/*"questPhase"*/);
    sub_1B885B0(&StringLiteral_22809/*"recommendSupportIdx"*/);
    sub_1B885B0(&StringLiteral_25141/*"{}"*/);
    sub_1B885B0(&StringLiteral_19510/*"followerType"*/);
    sub_1B885B0(&StringLiteral_22690/*"questId"*/);
    sub_1B885B0(&StringLiteral_19504/*"followerClassId"*/);
    sub_1B885B0(&StringLiteral_19509/*"followerSupportDeckId"*/);
    sub_1B885B0(&StringLiteral_17962/*"choiceRandomLimitCounts"*/);
    sub_1B885B0(&StringLiteral_22693/*"questSelect"*/);
    sub_1B885B0(&StringLiteral_22899/*"restartWave"*/);
    byte_4A5C93F = 1;
  }
  if ( !routeSelect )
    v22 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL);
  v29 = StringLiteral_25141/*"{}"*/;
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  if ( IsNullOrEmpty )
    v21 = (System_String_o *)v29;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22690/*"questId"*/, questId, v28);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22692/*"questPhase"*/, questPhase, v30);
  RequestBase__addField_41133280((RequestBase_o *)this, (System_String_o *)StringLiteral_16653/*"activeDeckId"*/, activeDeckId, v31);
  RequestBase__addField_41133280((RequestBase_o *)this, (System_String_o *)StringLiteral_19506/*"followerId"*/, followerId, v32);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19504/*"followerClassId"*/, followerClassId, v33);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20883/*"itemId"*/, itemId, v34);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17366/*"boostId"*/, boostId, v35);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19026/*"enemySelect"*/, enemySelect, v36);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22693/*"questSelect"*/, questSelect, v37);
  RequestBase__addField_41133280((RequestBase_o *)this, (System_String_o *)StringLiteral_24387/*"userEquipId"*/, userEquipId, v38);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19510/*"followerType"*/, followerType, v39);
  RequestBase__addField_41136012((RequestBase_o *)this, (System_String_o *)StringLiteral_22969/*"routeSelect"*/, &v22->obj, v40);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_17962/*"choiceRandomLimitCounts"*/, v21, v41);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19507/*"followerRandomLimitCount"*/, followerRndomLimitCount, v42);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19508/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    v43);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22809/*"recommendSupportIdx"*/, recommendSupportIdx, v44);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19509/*"followerSupportDeckId"*/, followerSupportDeckId, v45);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17718/*"campaignItemId"*/, campaignItemId, v46);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22899/*"restartWave"*/, restartWave, v47);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, v48);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C93E & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9102/*"MockBattleSetupRequest"*/);
    byte_4A5C93E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9102/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C93D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17098/*"battle/setup"*/);
    byte_4A5C93D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_17098/*"battle/setup"*/, 0LL);
}


void __fastcall BattleSetupRequest__requestCompleted(
        BattleSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t EventId; // w0
  int32_t v12; // w21
  Il2CppObject *v13; // x0
  System_String_o *SaveFileNameByEvent; // x0
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v16; // x0
  int32_t SpotId; // w21
  TerminalPramsManager_c *v18; // x0
  struct NetworkManager_ResultCallbackFunc_o *v19; // x8
  int32_t v20; // w21
  int32_t klass; // w22
  System_String_o *v22; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  QuestPhaseEntity_o *v24; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5C940 & 1) == 0 )
  {
    sub_1B885B0(&BattleData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&LastUsedDeckNumberManager_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&ScriptManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&UserMissionNewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C940 = 1;
  }
  entity = 0LL;
  v24 = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( v5 )
  {
    v7 = v5;
    if ( ResponseData__checkError(v5, v5->fields.resCode, v6) )
    {
      success = (Il2CppObject *)v7->fields.success;
      if ( success )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( Instance )
          {
            EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0LL);
            if ( EventId >= 1 )
            {
              v12 = EventId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_71;
              Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
              if ( !Instance )
                goto LABEL_71;
              v13 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      v12,
                      (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( v13 && EventEntity__IsOpen((EventEntity_o *)v13, 1, 0LL) )
              {
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             v12,
                             (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( !Instance )
                  goto LABEL_71;
                if ( EventDetailEntity__IsMission((EventDetailEntity_o *)Instance, 0LL) )
                {
                  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
                  SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v12, 0LL);
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
            if ( !byte_4A58393 )
            {
              sub_1B885B0(&TerminalPramsManager_TypeInfo);
              byte_4A58393 = 1;
            }
            v16 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v16 = TerminalPramsManager_TypeInfo;
            }
            v16->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
            TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
            if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
            {
              SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4A58394 )
              {
                sub_1B885B0(&TerminalPramsManager_TypeInfo);
                byte_4A58394 = 1;
              }
              v18 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v18 = TerminalPramsManager_TypeInfo;
              }
              v18->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
            }
            else
            {
              v18 = TerminalPramsManager_TypeInfo;
            }
            if ( !v18->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v18);
            TerminalPramsManager__PlayQuestSave_SaveData(0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            if ( !OptionManager__GetAutoSelectParty(0LL) || this->fields.activeDeckId < 1 )
              goto LABEL_63;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserDeckMaster___);
            if ( Instance )
            {
              if ( !DataMasterBase_object__object__long___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &entity,
                      this->fields.activeDeckId,
                      (const MethodInfo_311DB34 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
              {
LABEL_63:
                if ( !JsonManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
                v22 = JsonManager__toJson(success, 0, 0, 0LL);
                CallBack = this->fields.CallBack;
                if ( CallBack )
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    v22,
                    *(_QWORD *)&CallBack->fields.extra_arg);
                if ( !BattleData_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
                BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
                return;
              }
              v24 = 0LL;
              v20 = this->fields.currentQuestId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
                if ( Instance )
                {
                  Instance = (Il2CppObject *)QuestPhaseMaster__TryGetEntity(
                                               (QuestPhaseMaster_o *)Instance,
                                               &v24,
                                               this->fields.currentQuestId,
                                               this->fields.currentQuestPhase,
                                               0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
                    Instance = (Il2CppObject *)ScriptManager__GetSelectBranchIndex(0LL);
                    if ( !v24 )
                      goto LABEL_71;
                    Instance = (Il2CppObject *)QuestPhaseEntity__GetSelectedQuestId(
                                                 v24,
                                                 this->fields.currentQuestId,
                                                 (int32_t)Instance,
                                                 0LL);
                    v20 = (int)Instance;
                  }
                  if ( entity )
                  {
                    klass = (int32_t)entity[2].klass;
                    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
                    LastUsedDeckNumberManager__SetDeckNumber(v20, klass, 0LL);
                    LastUsedDeckNumberManager__WriteData(0LL);
                    goto LABEL_63;
                  }
                }
              }
            }
          }
        }
LABEL_71:
        sub_1B8880C(Instance, v10);
      }
    }
  }
  v19 = this->fields.CallBack;
  if ( v19 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v19->fields.m_target)(
      v19->fields.original_method_info,
      StringLiteral_22055/*"ng"*/,
      *(_QWORD *)&v19->fields.extra_arg);
}