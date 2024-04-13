void __fastcall BattleSetupRequest___ctor(BattleSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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
        int32_t restartWave,
        const MethodInfo *method)
{
  System_String_o *v26; // x24
  System_Int32_array *v27; // x27
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  bool v88; // zf
  __int64 v89; // x8

  v26 = choiceRandomLimitCounts;
  v27 = routeSelect;
  if ( (byte_42EB2BB & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, questId, questPhase, activeDeckId);
    sub_B5D5C4(&int___TypeInfo, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_19025/*"followerId"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_18598/*"enemySelect"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_22155/*"routeSelect"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_16435/*"activeDeckId"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_23313/*"userEquipId"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_17093/*"boostId"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_20270/*"itemId"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_19027/*"followerSpoilerProtectionLimitCount"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_19026/*"followerRandomLimitCount"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_17403/*"campaignItemId"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_21905/*"questPhase"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_23995/*"{}"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_19029/*"followerType"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_21903/*"questId"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_19023/*"followerClassId"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_19028/*"followerSupportDeckId"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_17638/*"choiceRandomLimitCounts"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_21906/*"questSelect"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_22090/*"restartWave"*/, v85, v86, v87);
    byte_42EB2BB = 1;
  }
  if ( !routeSelect )
    v27 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  v88 = !System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0LL);
  v89 = StringLiteral_23995/*"{}"*/;
  this->fields.currentQuestId = questId;
  this->fields.currentQuestPhase = questPhase;
  this->fields.activeDeckId = activeDeckId;
  if ( !v88 )
    v26 = (System_String_o *)v89;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21903/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21905/*"questPhase"*/, questPhase, 0LL);
  RequestBase__addField_32361792((RequestBase_o *)this, (System_String_o *)StringLiteral_16435/*"activeDeckId"*/, activeDeckId, 0LL);
  RequestBase__addField_32361792((RequestBase_o *)this, (System_String_o *)StringLiteral_19025/*"followerId"*/, followerId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19023/*"followerClassId"*/, followerClassId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20270/*"itemId"*/, itemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17093/*"boostId"*/, boostId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18598/*"enemySelect"*/, enemySelect, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21906/*"questSelect"*/, questSelect, 0LL);
  RequestBase__addField_32361792((RequestBase_o *)this, (System_String_o *)StringLiteral_23313/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19029/*"followerType"*/, followerType, 0LL);
  RequestBase__addField_32362368((RequestBase_o *)this, (System_String_o *)StringLiteral_22155/*"routeSelect"*/, &v27->obj, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_17638/*"choiceRandomLimitCounts"*/, v26, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19026/*"followerRandomLimitCount"*/, followerRndomLimitCount, 0LL);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19027/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19028/*"followerSupportDeckId"*/, followerSupportDeckId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17403/*"campaignItemId"*/, campaignItemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22090/*"restartWave"*/, restartWave, 0LL);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42EB2BA & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9253/*"MockBattleSetupRequest"*/, v4, v5, v6);
    byte_42EB2BA = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9253/*"MockBattleSetupRequest"*/, 0LL);
}


System_String_o *__fastcall BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EB2B9 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16838/*"battle/setup"*/, v4, v5, v6);
    byte_42EB2B9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_16838/*"battle/setup"*/, 0LL);
}


void __fastcall BattleSetupRequest__requestCompleted(
        BattleSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  ResponseData_o *v60; // x0
  ResponseData_o *v61; // x20
  Il2CppObject *success; // x20
  DataManager_o *Instance; // x0
  __int64 v64; // x1
  int32_t EventId; // w0
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int32_t v69; // w21
  EventEntity_o *v70; // x0
  System_String_o *SaveFileNameByEvent; // x0
  int32_t currentQuestId; // w21
  TerminalPramsManager_c *v73; // x0
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int32_t SpotId; // w21
  TerminalPramsManager_c *v78; // x0
  int32_t v79; // w21
  int32_t fakeValue; // w22
  System_String_o *v81; // x0
  QuestPhaseEntity_o *v82; // [xsp+0h] [xbp-40h] BYREF
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EB2BC & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserDeckMaster___, v18, v19, v20);
    sub_B5D5C4(&DataManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v27, v28, v29);
    sub_B5D5C4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v30, v31, v32);
    sub_B5D5C4(&JsonManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&OptionManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&ScriptManager_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48, v49, v50);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v57, v58, v59);
    byte_42EB2BC = 1;
  }
  v82 = 0LL;
  entity = 0LL;
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v60 = ResponseCommandKind__SearchData(20, responseList, 0LL);
  if ( !v60
    || (v61 = v60, !ResponseData__checkError_29500464(v60, 0LL))
    || (success = (Il2CppObject *)v61->fields.success) == 0LL )
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_82;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_82;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Instance, this->fields.currentQuestId, 0LL);
  if ( EventId >= 1 )
  {
    v69 = EventId;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_82;
    v70 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                             v69,
                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( v70 && EventEntity__IsOpen(v70, 1, 0LL) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_82;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !Instance )
        goto LABEL_82;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    v69,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
      if ( !Instance )
        goto LABEL_82;
      if ( EventDetailEntity__IsMission((EventDetailEntity_o *)Instance, 0LL) )
      {
        if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        }
        SaveFileNameByEvent = UserMissionNewManager__getSaveFileNameByEvent(v69, 0LL);
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
  if ( !byte_42E4B79 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v66, v67, v68);
    byte_42E4B79 = 1;
  }
  v73 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v73 = TerminalPramsManager_TypeInfo;
  }
  v73->static_fields->_LastPlayedQuestId_k__BackingField = currentQuestId;
  TerminalPramsManager__CheckClearSelectedStoryQuestId(this->fields.currentQuestId, 0LL);
  if ( QuestMaster__HasFlag(this->fields.currentQuestId, 0x8000000000LL, 0LL) )
  {
    SpotId = QuestMaster__GetSpotId(this->fields.currentQuestId, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B7A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v74, v75, v76);
      byte_42E4B7A = 1;
    }
    v78 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v78 = TerminalPramsManager_TypeInfo;
    }
    v78->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  else
  {
    v78 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v78);
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
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !Instance )
    goto LABEL_82;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
         &entity,
         this->fields.activeDeckId,
         (const MethodInfo_23FB094 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
  {
    v82 = 0LL;
    v79 = this->fields.currentQuestId;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_82;
    Instance = (DataManager_o *)QuestPhaseMaster__TryGetEntity(
                                  (QuestPhaseMaster_o *)Instance,
                                  &v82,
                                  this->fields.currentQuestId,
                                  this->fields.currentQuestPhase,
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      Instance = (DataManager_o *)ScriptManager__GetSelectBranchIndex(0LL);
      if ( !v82 )
        goto LABEL_82;
      Instance = (DataManager_o *)QuestPhaseEntity__GetSelectedQuestId(
                                    v82,
                                    this->fields.currentQuestId,
                                    (int32_t)Instance,
                                    0LL);
      v79 = (int)Instance;
    }
    if ( entity )
    {
      fakeValue = entity->fields.id.fields.fakeValue;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      }
      LastUsedDeckNumberManager__SetDeckNumber(v79, fakeValue, 0LL);
      LastUsedDeckNumberManager__WriteData(0LL);
      goto LABEL_75;
    }
LABEL_82:
    sub_B5D69C(Instance, v64);
  }
LABEL_75:
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v81 = JsonManager__toJson(success, 0, 0, 0LL);
  RequestBase__completed((RequestBase_o *)this, v81, 0LL);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(0, 0, 0, 0LL);
}