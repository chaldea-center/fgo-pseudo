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
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  bool IsNullOrEmpty; // w0
  const MethodInfo *v70; // x3
  __int64 v71; // x8
  const MethodInfo *v72; // x3
  const MethodInfo *v73; // x3
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x3
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x3
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // x3
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x3
  const MethodInfo *v87; // x3
  const MethodInfo *v88; // x3
  const MethodInfo *v89; // x3
  __int64 v90; // x1
  const MethodInfo *v91; // x1

  v21 = choiceRandomLimitCounts;
  v22 = routeSelect;
  if ( (byte_4B179FD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&int___TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_19708/*"followerId"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_19223/*"enemySelect"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_23216/*"routeSelect"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_16822/*"activeDeckId"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_24641/*"userEquipId"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_17539/*"boostId"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_21111/*"itemId"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_19710/*"followerSpoilerProtectionLimitCount"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_19709/*"followerRandomLimitCount"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_17897/*"campaignItemId"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_22935/*"questPhase"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_23053/*"recommendSupportIdx"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_25396/*"{}"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_19712/*"followerType"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_22933/*"questId"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_19706/*"followerClassId"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_19711/*"followerSupportDeckId"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_18143/*"choiceRandomLimitCounts"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_22936/*"questSelect"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_23146/*"restartWave"*/, v67, v68);
    byte_4B179FD = 1;
  }
  if ( !routeSelect )
    v22 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL);
  v71 = StringLiteral_25396/*"{}"*/;
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  if ( IsNullOrEmpty )
    v21 = (System_String_o *)v71;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22933/*"questId"*/, questId, v70);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22935/*"questPhase"*/, questPhase, v72);
  RequestBase__addField_41868688((RequestBase_o *)this, (System_String_o *)StringLiteral_16822/*"activeDeckId"*/, activeDeckId, v73);
  RequestBase__addField_41868688((RequestBase_o *)this, (System_String_o *)StringLiteral_19708/*"followerId"*/, followerId, v74);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19706/*"followerClassId"*/, followerClassId, v75);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21111/*"itemId"*/, itemId, v76);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17539/*"boostId"*/, boostId, v77);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19223/*"enemySelect"*/, enemySelect, v78);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22936/*"questSelect"*/, questSelect, v79);
  RequestBase__addField_41868688((RequestBase_o *)this, (System_String_o *)StringLiteral_24641/*"userEquipId"*/, userEquipId, v80);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19712/*"followerType"*/, followerType, v81);
  RequestBase__addField_41870840((RequestBase_o *)this, (System_String_o *)StringLiteral_23216/*"routeSelect"*/, &v22->obj, v82);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_18143/*"choiceRandomLimitCounts"*/, v21, v83);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19709/*"followerRandomLimitCount"*/, followerRndomLimitCount, v84);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19710/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    v85);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23053/*"recommendSupportIdx"*/, recommendSupportIdx, v86);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19711/*"followerSupportDeckId"*/, followerSupportDeckId, v87);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17897/*"campaignItemId"*/, campaignItemId, v88);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23146/*"restartWave"*/, restartWave, v89);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v90);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, v91);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B179FC & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9232/*"MockBattleSetupRequest"*/, v3, v4);
    byte_4B179FC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9232/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179FB & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17270/*"battle/setup"*/, v3, v4);
    byte_4B179FB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17270/*"battle/setup"*/, 0LL);
}


void __fastcall BattleSetupRequest__requestCompleted(
        BattleSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  ResponseData_o *v41; // x0
  ResponseData_o *v42; // x20
  Il2CppObject *success; // x20
  Il2CppObject *Instance; // x0
  __int64 v45; // x1
  int32_t EventId; // w0
  __int64 v47; // x1
  __int64 v48; // x2
  int32_t v49; // w21
  Il2CppObject *v50; // x0
  System_String_o *SaveFileNameByEvent; // x0
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  int32_t SpotId; // w21
  TerminalPramsManager_c *v57; // x0
  struct NetworkManager_ResultCallbackFunc_o *v58; // x8
  __int64 v59; // x1
  __int64 v60; // x1
  int32_t v61; // w21
  int32_t klass; // w22
  System_String_o *v63; // x0
  __int64 v64; // x1
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  QuestPhaseEntity_o *v66; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B179FE & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, responseList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserDeckMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v21, v22);
    sub_1BCA7E0(&JsonManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&LastUsedDeckNumberManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&OptionManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v29, v30);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&UserMissionNewManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v39, v40);
    byte_4B179FE = 1;
  }
  entity = 0LL;
  v66 = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v41 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( v41 )
  {
    v42 = v41;
    if ( ResponseData__checkError_41952396(v41, 0LL) )
    {
      success = (Il2CppObject *)v42->fields.success;
      if ( success )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
          if ( Instance )
          {
            EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0LL);
            if ( EventId >= 1 )
            {
              v49 = EventId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_71;
              Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
              if ( !Instance )
                goto LABEL_71;
              v50 = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      v49,
                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
              if ( v50 && EventEntity__IsOpen((EventEntity_o *)v50, 1, 0LL) )
              {
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
                if ( !Instance )
                  goto LABEL_71;
                Instance = DataMasterBase_object__object__int___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                             v49,
                             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( !Instance )
                  goto LABEL_71;
                if ( EventDetailEntity__IsMission((EventDetailEntity_o *)Instance, 0LL) )
                {
                  if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v47);
                  SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v49, 0LL);
                  if ( System_IO_File__Exists(SaveFileNameByEvent, 0LL) )
                  {
                    if ( !UserMissionNewManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo, v47);
                    UserMissionNewManager__SetClearNewFlg(0LL);
                    UserMissionNewManager__WriteData(0LL);
                  }
                }
              }
            }
            currentQuestId = this->fields.currentQuestId;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v47);
            if ( !byte_4B13022 )
            {
              sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v47, v48);
              byte_4B13022 = 1;
            }
            v53 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v47);
              v53 = TerminalPramsManager_TypeInfo;
            }
            v53->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
            TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
            if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
            {
              SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v54);
              if ( !byte_4B13023 )
              {
                sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v54, v55);
                byte_4B13023 = 1;
              }
              v57 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v54);
                v57 = TerminalPramsManager_TypeInfo;
              }
              v57->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
            }
            else
            {
              v57 = TerminalPramsManager_TypeInfo;
            }
            if ( !v57->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v57, v54);
            TerminalPramsManager__PlayQuestSave_SaveData(0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v59);
            if ( !OptionManager__GetAutoSelectParty(0LL) || this->fields.activeDeckId < 1 )
              goto LABEL_63;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v60);
            Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserDeckMaster___);
            if ( Instance )
            {
              if ( !DataMasterBase_object__object__long___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &entity,
                      this->fields.activeDeckId,
                      (const MethodInfo_31B3040 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
              {
LABEL_63:
                if ( !JsonManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v60);
                v63 = JsonManager__toJson(success, 0, 0, 0LL);
                CallBack = this->fields.CallBack;
                if ( CallBack )
                  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
                    CallBack->fields.original_method_info,
                    v63,
                    *(_QWORD *)&CallBack->fields.extra_arg);
                if ( !BattleData_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v64);
                BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
                return;
              }
              v66 = 0LL;
              v61 = this->fields.currentQuestId;
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( Instance )
              {
                Instance = DataManager__GetMasterData_object_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
                if ( Instance )
                {
                  Instance = (Il2CppObject *)QuestPhaseMaster__TryGetEntity(
                                               (QuestPhaseMaster_o *)Instance,
                                               &v66,
                                               this->fields.currentQuestId,
                                               this->fields.currentQuestPhase,
                                               0LL);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                  {
                    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v45);
                    Instance = (Il2CppObject *)ScriptManager__GetSelectBranchIndex(0LL);
                    if ( !v66 )
                      goto LABEL_71;
                    Instance = (Il2CppObject *)QuestPhaseEntity__GetSelectedQuestId(
                                                 v66,
                                                 this->fields.currentQuestId,
                                                 (int32_t)Instance,
                                                 0LL);
                    v61 = (int)Instance;
                  }
                  if ( entity )
                  {
                    klass = (int32_t)entity[2].klass;
                    if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo, v45);
                    LastUsedDeckNumberManager__SetDeckNumber(v61, klass, 0LL);
                    LastUsedDeckNumberManager__WriteData(0LL);
                    goto LABEL_63;
                  }
                }
              }
            }
          }
        }
LABEL_71:
        sub_1BCAA3C(Instance, v45);
      }
    }
  }
  v58 = this->fields.CallBack;
  if ( v58 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v58->fields.m_target)(
      v58->fields.original_method_info,
      StringLiteral_22292/*"ng"*/,
      *(_QWORD *)&v58->fields.extra_arg);
}