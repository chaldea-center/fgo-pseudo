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
  if ( (byte_4B68418 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleData_TypeInfo, *(_QWORD *)&questId);
    sub_1BE4ACC(&int___TypeInfo, v27);
    sub_1BE4ACC(&StringLiteral_19767/*"followerId"*/, v28);
    sub_1BE4ACC(&StringLiteral_19281/*"enemySelect"*/, v29);
    sub_1BE4ACC(&StringLiteral_23300/*"routeSelect"*/, v30);
    sub_1BE4ACC(&StringLiteral_16864/*"activeDeckId"*/, v31);
    sub_1BE4ACC(&StringLiteral_24729/*"userEquipId"*/, v32);
    sub_1BE4ACC(&StringLiteral_17585/*"boostId"*/, v33);
    sub_1BE4ACC(&StringLiteral_21182/*"itemId"*/, v34);
    sub_1BE4ACC(&StringLiteral_19769/*"followerSpoilerProtectionLimitCount"*/, v35);
    sub_1BE4ACC(&StringLiteral_19768/*"followerRandomLimitCount"*/, v36);
    sub_1BE4ACC(&StringLiteral_17947/*"campaignItemId"*/, v37);
    sub_1BE4ACC(&StringLiteral_23013/*"questPhase"*/, v38);
    sub_1BE4ACC(&StringLiteral_23132/*"recommendSupportIdx"*/, v39);
    sub_1BE4ACC(&StringLiteral_25488/*"{}"*/, v40);
    sub_1BE4ACC(&StringLiteral_19771/*"followerType"*/, v41);
    sub_1BE4ACC(&StringLiteral_23011/*"questId"*/, v42);
    sub_1BE4ACC(&StringLiteral_19765/*"followerClassId"*/, v43);
    sub_1BE4ACC(&StringLiteral_19770/*"followerSupportDeckId"*/, v44);
    sub_1BE4ACC(&StringLiteral_18194/*"choiceRandomLimitCounts"*/, v45);
    sub_1BE4ACC(&StringLiteral_23014/*"questSelect"*/, v46);
    sub_1BE4ACC(&StringLiteral_23225/*"restartWave"*/, v47);
    byte_4B68418 = 1;
  }
  if ( !routeSelect )
    v22 = (System_Int32_array *)sub_1BE4B74(int___TypeInfo, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL);
  v50 = StringLiteral_25488/*"{}"*/;
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  if ( IsNullOrEmpty )
    v21 = (System_String_o *)v50;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23011/*"questId"*/, questId, v49);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23013/*"questPhase"*/, questPhase, v51);
  RequestBase__addField_42110748((RequestBase_o *)this, (System_String_o *)StringLiteral_16864/*"activeDeckId"*/, activeDeckId, v52);
  RequestBase__addField_42110748((RequestBase_o *)this, (System_String_o *)StringLiteral_19767/*"followerId"*/, followerId, v53);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19765/*"followerClassId"*/, followerClassId, v54);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21182/*"itemId"*/, itemId, v55);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17585/*"boostId"*/, boostId, v56);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19281/*"enemySelect"*/, enemySelect, v57);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23014/*"questSelect"*/, questSelect, v58);
  RequestBase__addField_42110748((RequestBase_o *)this, (System_String_o *)StringLiteral_24729/*"userEquipId"*/, userEquipId, v59);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19771/*"followerType"*/, followerType, v60);
  RequestBase__addField_42112900((RequestBase_o *)this, (System_String_o *)StringLiteral_23300/*"routeSelect"*/, &v22->obj, v61);
  RequestBase__addField_42104408((RequestBase_o *)this, (System_String_o *)StringLiteral_18194/*"choiceRandomLimitCounts"*/, v21, v62);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19768/*"followerRandomLimitCount"*/, followerRndomLimitCount, v63);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19769/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    v64);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23132/*"recommendSupportIdx"*/, recommendSupportIdx, v65);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19770/*"followerSupportDeckId"*/, followerSupportDeckId, v66);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17947/*"campaignItemId"*/, campaignItemId, v67);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23225/*"restartWave"*/, restartWave, v68);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, v69);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B68417 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_9253/*"MockBattleSetupRequest"*/, v2);
    byte_4B68417 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9253/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B68416 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_17313/*"battle/setup"*/, v2);
    byte_4B68416 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62698808(BaseUrl, (System_String_o *)StringLiteral_17313/*"battle/setup"*/, 0LL);
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

  if ( (byte_4B68419 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleData_TypeInfo, responseList);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, v5);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v6);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserDeckMaster___, v9);
    sub_1BE4ACC(&DataManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v12);
    sub_1BE4ACC(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v13);
    sub_1BE4ACC(&JsonManager_TypeInfo, v14);
    sub_1BE4ACC(&LastUsedDeckNumberManager_TypeInfo, v15);
    sub_1BE4ACC(&OptionManager_TypeInfo, v16);
    sub_1BE4ACC(&ResponseCommandKind_TypeInfo, v17);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v18);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v20);
    sub_1BE4ACC(&UserMissionNewManager_TypeInfo, v21);
    sub_1BE4ACC(&StringLiteral_22370/*"ng"*/, v22);
    byte_4B68419 = 1;
  }
  entity = 0LL;
  v43 = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v23 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( v23 )
  {
    v24 = v23;
    if ( ResponseData__checkError_42194996(v23, 0LL) )
    {
      success = (Il2CppObject *)v24->fields.success;
      if ( success )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( Instance )
          {
            EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0LL);
            if ( EventId >= 1 )
            {
              v30 = EventId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_71;
              Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
              if ( !Instance )
                goto LABEL_71;
              v31 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      v30,
                      (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( v31 && EventEntity__IsOpen((EventEntity_o *)v31, 1, 0LL) )
              {
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             v30,
                             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
            if ( !byte_4B63991 )
            {
              sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v29);
              byte_4B63991 = 1;
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
              if ( !byte_4B63992 )
              {
                sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v35);
                byte_4B63992 = 1;
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
            Instance = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserDeckMaster___);
            if ( Instance )
            {
              if ( !DataMasterBase_object__object__long___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &entity,
                      this->fields.activeDeckId,
                      (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
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
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
        sub_1BE4D28(Instance, v27);
      }
    }
  }
  v38 = this->fields.CallBack;
  if ( v38 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v38->fields.m_target)(
      v38->fields.original_method_info,
      StringLiteral_22370/*"ng"*/,
      *(_QWORD *)&v38->fields.extra_arg);
}