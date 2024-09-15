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
        const MethodInfo *method)
{
  System_String_o *v21; // x23
  System_Int32_array *v22; // x29
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
  __int64 v46; // x1
  __int64 v47; // x1
  bool IsNullOrEmpty; // w0
  const MethodInfo *v49; // x3
  __int64 v50; // x8
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x1

  v21 = choiceRandomLimitCounts;
  v22 = routeSelect;
  if ( (byte_4A2F70B & 1) == 0 )
  {
    sub_1B761C0(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_1B761C0(&int___TypeInfo, v27);
    sub_1B761C0(&StringLiteral_19500/*"followerId"*/, v28);
    sub_1B761C0(&StringLiteral_19020/*"enemySelect"*/, v29);
    sub_1B761C0(&StringLiteral_22958/*"routeSelect"*/, v30);
    sub_1B761C0(&StringLiteral_16647/*"activeDeckId"*/, v31);
    sub_1B761C0(&StringLiteral_24374/*"userEquipId"*/, v32);
    sub_1B761C0(&StringLiteral_17360/*"boostId"*/, v33);
    sub_1B761C0(&StringLiteral_20876/*"itemId"*/, v34);
    sub_1B761C0(&StringLiteral_19502/*"followerSpoilerProtectionLimitCount"*/, v35);
    sub_1B761C0(&StringLiteral_19501/*"followerRandomLimitCount"*/, v36);
    sub_1B761C0(&StringLiteral_17712/*"campaignItemId"*/, v37);
    sub_1B761C0(&StringLiteral_22682/*"questPhase"*/, v38);
    sub_1B761C0(&StringLiteral_22799/*"recommendSupportIdx"*/, v39);
    sub_1B761C0(&StringLiteral_25128/*"{}"*/, v40);
    sub_1B761C0(&StringLiteral_19504/*"followerType"*/, v41);
    sub_1B761C0(&StringLiteral_22680/*"questId"*/, v42);
    sub_1B761C0(&StringLiteral_19498/*"followerClassId"*/, v43);
    sub_1B761C0(&StringLiteral_19503/*"followerSupportDeckId"*/, v44);
    sub_1B761C0(&StringLiteral_17956/*"choiceRandomLimitCounts"*/, v45);
    sub_1B761C0(&StringLiteral_22683/*"questSelect"*/, v46);
    sub_1B761C0(&StringLiteral_22889/*"restartWave"*/, v47);
    byte_4A2F70B = 1;
  }
  if ( !routeSelect )
    v22 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL);
  v50 = StringLiteral_25128/*"{}"*/;
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  if ( IsNullOrEmpty )
    v21 = (System_String_o *)v50;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22680/*"questId"*/, questId, v49);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22682/*"questPhase"*/, questPhase, v51);
  RequestBase__addField_40947456((RequestBase_o *)this, (System_String_o *)StringLiteral_16647/*"activeDeckId"*/, activeDeckId, v52);
  RequestBase__addField_40947456((RequestBase_o *)this, (System_String_o *)StringLiteral_19500/*"followerId"*/, followerId, v53);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19498/*"followerClassId"*/, followerClassId, v54);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20876/*"itemId"*/, itemId, v55);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17360/*"boostId"*/, boostId, v56);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19020/*"enemySelect"*/, enemySelect, v57);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22683/*"questSelect"*/, questSelect, v58);
  RequestBase__addField_40947456((RequestBase_o *)this, (System_String_o *)StringLiteral_24374/*"userEquipId"*/, userEquipId, v59);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19504/*"followerType"*/, followerType, v60);
  RequestBase__addField_40950188((RequestBase_o *)this, (System_String_o *)StringLiteral_22958/*"routeSelect"*/, &v22->obj, v61);
  RequestBase__addField_40941128((RequestBase_o *)this, (System_String_o *)StringLiteral_17956/*"choiceRandomLimitCounts"*/, v21, v62);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19501/*"followerRandomLimitCount"*/, followerRndomLimitCount, v63);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19502/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    v64);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22799/*"recommendSupportIdx"*/, recommendSupportIdx, v65);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19503/*"followerSupportDeckId"*/, followerSupportDeckId, v66);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17712/*"campaignItemId"*/, campaignItemId, v67);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22889/*"restartWave"*/, restartWave, v68);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, v69);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A2F70A & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_9099/*"MockBattleSetupRequest"*/, v2);
    byte_4A2F70A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9099/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F709 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_17092/*"battle/setup"*/, v2);
    byte_4A2F709 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_17092/*"battle/setup"*/, 0LL);
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
  const MethodInfo *v24; // x2
  ResponseData_o *v25; // x20
  Il2CppObject *success; // x20
  Il2CppObject *Instance; // x0
  __int64 v28; // x1
  int32_t EventId; // w0
  __int64 v30; // x1
  int32_t v31; // w21
  Il2CppObject *v32; // x0
  System_String_o *SaveFileNameByEvent; // x0
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v35; // x0
  __int64 v36; // x1
  int32_t SpotId; // w21
  TerminalPramsManager_c *v38; // x0
  struct NetworkManager_ResultCallbackFunc_o *v39; // x8
  int32_t v40; // w21
  int32_t klass; // w22
  System_String_o *v42; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  QuestPhaseEntity_o *v44; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A2F70C & 1) == 0 )
  {
    sub_1B761C0(&BattleData_TypeInfo, responseList);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_1B761C0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_1B761C0(&Method_DataManager_GetMaster_UserDeckMaster___, v9);
    sub_1B761C0(&DataManager_TypeInfo, v10);
    sub_1B761C0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_1B761C0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12);
    sub_1B761C0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v13);
    sub_1B761C0(&JsonManager_TypeInfo, v14);
    sub_1B761C0(&LastUsedDeckNumberManager_TypeInfo, v15);
    sub_1B761C0(&OptionManager_TypeInfo, v16);
    sub_1B761C0(&ResponseCommandKind_TypeInfo, v17);
    sub_1B761C0(&ScriptManager_TypeInfo, v18);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v20);
    sub_1B761C0(&UserMissionNewManager_TypeInfo, v21);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v22);
    byte_4A2F70C = 1;
  }
  entity = 0LL;
  v44 = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v23 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( v23 )
  {
    v25 = v23;
    if ( ResponseData__checkError(v23, v23->fields.resCode, v24) )
    {
      success = (Il2CppObject *)v25->fields.success;
      if ( success )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( Instance )
          {
            EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0LL);
            if ( EventId >= 1 )
            {
              v31 = EventId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_71;
              Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventMaster___);
              if ( !Instance )
                goto LABEL_71;
              v32 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      v31,
                      (const MethodInfo_30FF780 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( v32 && EventEntity__IsOpen((EventEntity_o *)v32, 1, 0LL) )
              {
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventDetailMaster___);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             v31,
                             (const MethodInfo_30FF780 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( !Instance )
                  goto LABEL_71;
                if ( EventDetailEntity__IsMission((EventDetailEntity_o *)Instance, 0LL) )
                {
                  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
                  SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v31, 0LL);
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
            if ( !byte_4A2B187 )
            {
              sub_1B761C0(&TerminalPramsManager_TypeInfo, v30);
              byte_4A2B187 = 1;
            }
            v35 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v35 = TerminalPramsManager_TypeInfo;
            }
            v35->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
            TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
            if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
            {
              SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4A2B188 )
              {
                sub_1B761C0(&TerminalPramsManager_TypeInfo, v36);
                byte_4A2B188 = 1;
              }
              v38 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v38 = TerminalPramsManager_TypeInfo;
              }
              v38->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
            }
            else
            {
              v38 = TerminalPramsManager_TypeInfo;
            }
            if ( !v38->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v38);
            TerminalPramsManager__PlayQuestSave_SaveData(0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            if ( !OptionManager__GetAutoSelectParty(0LL) || this->fields.activeDeckId < 1 )
              goto LABEL_63;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Instance = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_UserDeckMaster___);
            if ( Instance )
            {
              if ( !DataMasterBase_object__object__long___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &entity,
                      this->fields.activeDeckId,
                      (const MethodInfo_30FF980 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
              {
LABEL_63:
                if ( !JsonManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
                v42 = JsonManager__toJson(success, 0, 0, 0LL);
                CallBack = this->fields.CallBack;
                if ( CallBack )
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    v42,
                    *(_QWORD *)&CallBack->fields.extra_arg);
                if ( !BattleData_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
                BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
                return;
              }
              v44 = 0LL;
              v40 = this->fields.currentQuestId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
                if ( Instance )
                {
                  Instance = (Il2CppObject *)QuestPhaseMaster__TryGetEntity(
                                               (QuestPhaseMaster_o *)Instance,
                                               &v44,
                                               this->fields.currentQuestId,
                                               this->fields.currentQuestPhase,
                                               0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
                    Instance = (Il2CppObject *)ScriptManager__GetSelectBranchIndex(0LL);
                    if ( !v44 )
                      goto LABEL_71;
                    Instance = (Il2CppObject *)QuestPhaseEntity__GetSelectedQuestId(
                                                 v44,
                                                 this->fields.currentQuestId,
                                                 (int32_t)Instance,
                                                 0LL);
                    v40 = (int)Instance;
                  }
                  if ( entity )
                  {
                    klass = (int32_t)entity[2].klass;
                    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
                    LastUsedDeckNumberManager__SetDeckNumber(v40, klass, 0LL);
                    LastUsedDeckNumberManager__WriteData(0LL);
                    goto LABEL_63;
                  }
                }
              }
            }
          }
        }
LABEL_71:
        sub_1B7641C(Instance, v28);
      }
    }
  }
  v39 = this->fields.CallBack;
  if ( v39 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v39->fields.m_target)(
      v39->fields.original_method_info,
      StringLiteral_22046/*"ng"*/,
      *(_QWORD *)&v39->fields.extra_arg);
}