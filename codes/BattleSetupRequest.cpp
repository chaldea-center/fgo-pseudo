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
  const MethodInfo *v50; // x3
  System_Int32_array *v51; // x28
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
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x1

  v22 = choiceRandomLimitCounts;
  v23 = routeSelect;
  if ( (byte_4BC9333 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_1C1ABD4(&int___TypeInfo, v28);
    sub_1C1ABD4(&StringLiteral_19825/*"followerId"*/, v29);
    sub_1C1ABD4(&StringLiteral_19339/*"enemySelect"*/, v30);
    sub_1C1ABD4(&StringLiteral_23373/*"routeSelect"*/, v31);
    sub_1C1ABD4(&StringLiteral_16922/*"activeDeckId"*/, v32);
    sub_1C1ABD4(&StringLiteral_24806/*"userEquipId"*/, v33);
    sub_1C1ABD4(&StringLiteral_17641/*"boostId"*/, v34);
    sub_1C1ABD4(&StringLiteral_21244/*"itemId"*/, v35);
    sub_1C1ABD4(&StringLiteral_19827/*"followerSpoilerProtectionLimitCount"*/, v36);
    sub_1C1ABD4(&StringLiteral_19826/*"followerRandomLimitCount"*/, v37);
    sub_1C1ABD4(&StringLiteral_18003/*"campaignItemId"*/, v38);
    sub_1C1ABD4(&StringLiteral_23083/*"questPhase"*/, v39);
    sub_1C1ABD4(&StringLiteral_23204/*"recommendSupportIdx"*/, v40);
    sub_1C1ABD4(&StringLiteral_25567/*"{}"*/, v41);
    sub_1C1ABD4(&StringLiteral_19829/*"followerType"*/, v42);
    sub_1C1ABD4(&StringLiteral_23081/*"questId"*/, v43);
    sub_1C1ABD4(&StringLiteral_19823/*"followerClassId"*/, v44);
    sub_1C1ABD4(&StringLiteral_19828/*"followerSupportDeckId"*/, v45);
    sub_1C1ABD4(&StringLiteral_18251/*"choiceRandomLimitCounts"*/, v46);
    sub_1C1ABD4(&StringLiteral_24777/*"useRewardAddItemIds"*/, v47);
    sub_1C1ABD4(&StringLiteral_23084/*"questSelect"*/, v48);
    sub_1C1ABD4(&StringLiteral_23298/*"restartWave"*/, v49);
    byte_4BC9333 = 1;
  }
  if ( !routeSelect )
    v23 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  v51 = useRewardAddItemIds;
  if ( System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL) )
    v22 = (System_String_o *)StringLiteral_25567/*"{}"*/;
  if ( !useRewardAddItemIds )
    v51 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23081/*"questId"*/, questId, v50);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23083/*"questPhase"*/, questPhase, v52);
  RequestBase__addField_42368496((RequestBase_o *)this, (System_String_o *)StringLiteral_16922/*"activeDeckId"*/, activeDeckId, v53);
  RequestBase__addField_42368496((RequestBase_o *)this, (System_String_o *)StringLiteral_19825/*"followerId"*/, followerId, v54);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19823/*"followerClassId"*/, followerClassId, v55);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21244/*"itemId"*/, itemId, v56);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17641/*"boostId"*/, boostId, v57);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19339/*"enemySelect"*/, enemySelect, v58);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23084/*"questSelect"*/, questSelect, v59);
  RequestBase__addField_42368496((RequestBase_o *)this, (System_String_o *)StringLiteral_24806/*"userEquipId"*/, userEquipId, v60);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19829/*"followerType"*/, followerType, v61);
  RequestBase__addField_42370648((RequestBase_o *)this, (System_String_o *)StringLiteral_23373/*"routeSelect"*/, &v23->obj, v62);
  RequestBase__addField_42362156((RequestBase_o *)this, (System_String_o *)StringLiteral_18251/*"choiceRandomLimitCounts"*/, v22, v63);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19826/*"followerRandomLimitCount"*/, followerRndomLimitCount, v64);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19827/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    v65);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23204/*"recommendSupportIdx"*/, recommendSupportIdx, v66);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19828/*"followerSupportDeckId"*/, followerSupportDeckId, v67);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18003/*"campaignItemId"*/, campaignItemId, v68);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23298/*"restartWave"*/, restartWave, v69);
  RequestBase__addField_42370648((RequestBase_o *)this, (System_String_o *)StringLiteral_24777/*"useRewardAddItemIds"*/, &v51->obj, v70);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, v71);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BC9332 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_9283/*"MockBattleSetupRequest"*/, v2);
    byte_4BC9332 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9283/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC9331 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_17372/*"battle/setup"*/, v2);
    byte_4BC9331 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_17372/*"battle/setup"*/, 0LL);
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
  struct NetworkManager_ResultCallbackFunc_o *v38; // x8
  int32_t v39; // w21
  int32_t klass; // w22
  System_String_o *v41; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  QuestPhaseEntity_o *v43; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BC9334 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleData_TypeInfo, responseList);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserDeckMaster___, v9);
    sub_1C1ABD4(&DataManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_1C1ABD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12);
    sub_1C1ABD4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v13);
    sub_1C1ABD4(&JsonManager_TypeInfo, v14);
    sub_1C1ABD4(&LastUsedDeckNumberManager_TypeInfo, v15);
    sub_1C1ABD4(&OptionManager_TypeInfo, v16);
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, v17);
    sub_1C1ABD4(&ScriptManager_TypeInfo, v18);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v20);
    sub_1C1ABD4(&UserMissionNewManager_TypeInfo, v21);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v22);
    byte_4BC9334 = 1;
  }
  entity = 0LL;
  v43 = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v23 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( v23 )
  {
    v24 = v23;
    if ( ResponseData__checkError_42452820(v23, 0LL) )
    {
      success = (Il2CppObject *)v24->fields.success;
      if ( success )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( Instance )
          {
            EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0LL);
            if ( EventId >= 1 )
            {
              v30 = EventId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_71;
              Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventMaster___);
              if ( !Instance )
                goto LABEL_71;
              v31 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      v30,
                      (const MethodInfo_3248678 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( v31 && EventEntity__IsOpen((EventEntity_o *)v31, 1, 0LL) )
              {
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_EventDetailMaster___);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             v30,
                             (const MethodInfo_3248678 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( !Instance )
                  goto LABEL_71;
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
            if ( !byte_4BC485B )
            {
              sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v29);
              byte_4BC485B = 1;
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
              if ( !byte_4BC485C )
              {
                sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v35);
                byte_4BC485C = 1;
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
            Instance = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserDeckMaster___);
            if ( Instance )
            {
              if ( !DataMasterBase_object__object__long___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &entity,
                      this->fields.activeDeckId,
                      (const MethodInfo_324AC20 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
              {
LABEL_63:
                if ( !JsonManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
                v41 = JsonManager__toJson(success, 0, 0, 0LL);
                CallBack = this->fields.CallBack;
                if ( CallBack )
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    v41,
                    *(_QWORD *)&CallBack->fields.extra_arg);
                if ( !BattleData_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
                BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
                return;
              }
              v43 = 0LL;
              v39 = this->fields.currentQuestId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
                if ( Instance )
                {
                  Instance = (Il2CppObject *)QuestPhaseMaster__TryGetEntity(
                                               (QuestPhaseMaster_o *)Instance,
                                               &v43,
                                               this->fields.currentQuestId,
                                               this->fields.currentQuestPhase,
                                               0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
                    Instance = (Il2CppObject *)ScriptManager__GetSelectBranchIndex(0LL);
                    if ( !v43 )
                      goto LABEL_71;
                    Instance = (Il2CppObject *)QuestPhaseEntity__GetSelectedQuestId(
                                                 v43,
                                                 this->fields.currentQuestId,
                                                 (int32_t)Instance,
                                                 0LL);
                    v39 = (int)Instance;
                  }
                  if ( entity )
                  {
                    klass = (int32_t)entity[2].klass;
                    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
                    LastUsedDeckNumberManager__SetDeckNumber(v39, klass, 0LL);
                    LastUsedDeckNumberManager__WriteData(0LL);
                    goto LABEL_63;
                  }
                }
              }
            }
          }
        }
LABEL_71:
        sub_1C1AE30(Instance, v27);
      }
    }
  }
  v38 = this->fields.CallBack;
  if ( v38 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v38->fields.m_target)(
      v38->fields.original_method_info,
      StringLiteral_22437/*"ng"*/,
      *(_QWORD *)&v38->fields.extra_arg);
}