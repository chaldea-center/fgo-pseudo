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
  System_Int32_array *v36; // x26
  bool v39; // zf
  System_Int32_array *v40; // x0
  Il2CppObject *p_obj; // [xsp+78h] [xbp-68h]

  v34 = choiceTransformRandomLimitCounts;
  v35 = choiceRandomLimitCounts;
  v36 = routeSelect;
  if ( (byte_4E7910C & 1) == 0 )
  {
    sub_1D0F0B4(&BattleData_TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&StringLiteral_18235/*"choiceTransformRandomLimitCounts"*/);
    sub_1D0F0B4(&StringLiteral_19884/*"followerId"*/);
    sub_1D0F0B4(&StringLiteral_19891/*"followerTransformIconLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_19370/*"enemySelect"*/);
    sub_1D0F0B4(&StringLiteral_19883/*"followerIconLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_23626/*"routeSelect"*/);
    sub_1D0F0B4(&StringLiteral_19881/*"followerDispLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_16889/*"activeDeckId"*/);
    sub_1D0F0B4(&StringLiteral_25028/*"userEquipId"*/);
    sub_1D0F0B4(&StringLiteral_17593/*"boostId"*/);
    sub_1D0F0B4(&StringLiteral_21433/*"itemId"*/);
    sub_1D0F0B4(&StringLiteral_19887/*"followerSpoilerProtectionLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_19886/*"followerRandomLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_17985/*"campaignItemId"*/);
    sub_1D0F0B4(&StringLiteral_23331/*"questPhase"*/);
    sub_1D0F0B4(&StringLiteral_19882/*"followerGrandGraphId"*/);
    sub_1D0F0B4(&StringLiteral_23453/*"recommendSupportIdx"*/);
    sub_1D0F0B4(&StringLiteral_19890/*"followerTransformDispLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_19893/*"followerTransformRandomLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_25768/*"{}"*/);
    sub_1D0F0B4(&StringLiteral_19895/*"followerType"*/);
    sub_1D0F0B4(&StringLiteral_23327/*"questId"*/);
    sub_1D0F0B4(&StringLiteral_19878/*"followerClassId"*/);
    sub_1D0F0B4(&StringLiteral_19888/*"followerSupportDeckId"*/);
    sub_1D0F0B4(&StringLiteral_19879/*"followerCommandCardLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_19892/*"followerTransformPortraitLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_18234/*"choiceRandomLimitCounts"*/);
    sub_1D0F0B4(&StringLiteral_24997/*"useRewardAddItemIds"*/);
    sub_1D0F0B4(&StringLiteral_19889/*"followerTransformCommandCardLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_23332/*"questSelect"*/);
    sub_1D0F0B4(&StringLiteral_19894/*"followerTransformSpoilerProtectionLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_19885/*"followerPortraitLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_23542/*"restartWave"*/);
    byte_4E7910C = 1;
  }
  if ( !routeSelect )
    v36 = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  if ( System_String__IsNullOrEmpty(choiceRandomLimitCounts, 0) )
    v35 = (System_String_o *)StringLiteral_25768/*"{}"*/;
  v39 = !System_String__IsNullOrEmpty(choiceTransformRandomLimitCounts, 0);
  v40 = useRewardAddItemIds;
  if ( !v39 )
    v34 = (System_String_o *)StringLiteral_25768/*"{}"*/;
  if ( !useRewardAddItemIds )
    v40 = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  this->fields.activeDeckId = activeDeckId;
  p_obj = &v40->obj;
  *((_DWORD *)&this->fields.shouldShowConnect + 1) = questId;
  this->fields.currentQuestId = questPhase;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23327/*"questId"*/, questId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23331/*"questPhase"*/, questPhase, 0);
  RequestBase__addField_45612144((RequestBase_o *)this, (System_String_o *)StringLiteral_16889/*"activeDeckId"*/, activeDeckId, 0);
  RequestBase__addField_45612144((RequestBase_o *)this, (System_String_o *)StringLiteral_19884/*"followerId"*/, followerId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19878/*"followerClassId"*/, followerClassId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19882/*"followerGrandGraphId"*/, followerGrandGraphId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21433/*"itemId"*/, itemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17593/*"boostId"*/, boostId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19370/*"enemySelect"*/, enemySelect, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23332/*"questSelect"*/, questSelect, 0);
  RequestBase__addField_45612144((RequestBase_o *)this, (System_String_o *)StringLiteral_25028/*"userEquipId"*/, userEquipId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19895/*"followerType"*/, followerType, 0);
  RequestBase__addField_45601344((RequestBase_o *)this, (System_String_o *)StringLiteral_23626/*"routeSelect"*/, &v36->obj, 0);
  RequestBase__addField_45601604((RequestBase_o *)this, (System_String_o *)StringLiteral_18234/*"choiceRandomLimitCounts"*/, v35, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19886/*"followerRandomLimitCount"*/, followerRndomLimitCount, 0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19887/*"followerSpoilerProtectionLimitCount"*/,
    followerSpoilerProtectionLimitCount,
    0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19881/*"followerDispLimitCount"*/, followerDispLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19883/*"followerIconLimitCount"*/, followerIconLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19885/*"followerPortraitLimitCount"*/, followerPortraitLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19879/*"followerCommandCardLimitCount"*/, followerCommandCardLimitCount, 0);
  RequestBase__addField_45601604((RequestBase_o *)this, (System_String_o *)StringLiteral_18235/*"choiceTransformRandomLimitCounts"*/, v34, 0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19893/*"followerTransformRandomLimitCount"*/,
    followerTransformRandomLimitCount,
    0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19894/*"followerTransformSpoilerProtectionLimitCount"*/,
    followerTransformSpoilerProtectionLimitCount,
    0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19890/*"followerTransformDispLimitCount"*/,
    followerTransformDispLimitCount,
    0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19891/*"followerTransformIconLimitCount"*/,
    followerTransformIconLimitCount,
    0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19892/*"followerTransformPortraitLimitCount"*/,
    followerTransformPortraitLimitCount,
    0);
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19889/*"followerTransformCommandCardLimitCount"*/,
    followerTransformCommandCardLimitCount,
    0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23453/*"recommendSupportIdx"*/, recommendSupportIdx, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19888/*"followerSupportDeckId"*/, followerSupportDeckId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17985/*"campaignItemId"*/, campaignItemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23542/*"restartWave"*/, restartWave, 0);
  RequestBase__addField_45601344((RequestBase_o *)this, (System_String_o *)StringLiteral_24997/*"useRewardAddItemIds"*/, p_obj, 0);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  BattleData__setReserveResumeBattle(1, questId, questPhase, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *BattleSetupRequest__getMockData(BattleSetupRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E7910B & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_9242/*"MockBattleSetupRequest"*/);
    byte_4E7910B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9242/*"MockBattleSetupRequest"*/, 0);
}


System_String_o *BattleSetupRequest__getURL(BattleSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E7910A & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17308/*"battle/setup"*/);
    byte_4E7910A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65562772(BaseUrl, (System_String_o *)StringLiteral_17308/*"battle/setup"*/, 0);
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
  int32_t v14; // w21
  TerminalPramsManager_c *v15; // x0
  int32_t SpotId; // w21
  TerminalPramsManager_c *v17; // x0
  int32_t v18; // w21
  int32_t klass; // w22
  System_String_o *v20; // x0
  QuestPhaseEntity_o *v21; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4E7910D & 1) == 0 )
  {
    sub_1D0F0B4(&BattleData_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserDeckMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1D0F0B4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&LastUsedDeckNumberManager_TypeInfo);
    sub_1D0F0B4(&OptionManager_TypeInfo);
    sub_1D0F0B4(&ResponseCommandKind_TypeInfo);
    sub_1D0F0B4(&ScriptManager_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    sub_1D0F0B4(&UserMissionNewManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    byte_4E7910D = 1;
  }
  entity = 0;
  v21 = 0;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(20, responseList, 0);
  if ( !v5
    || (v6 = v5, !ResponseData__checkError_45600864(v5, 0))
    || (success = (Il2CppObject *)v6->fields.success) == 0 )
  {
    RequestBase__completed((RequestBase_o *)this, (System_String_o *)StringLiteral_22648/*"ng"*/, 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_68;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  if ( !Instance )
    goto LABEL_68;
  EventId = QuestGroupMaster__GetEventId(
              (QuestGroupMaster_o *)Instance,
              *((_DWORD *)&this->fields.shouldShowConnect + 1),
              0);
  if ( EventId >= 1 )
  {
    v11 = EventId;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventMaster___);
    if ( !Instance )
      goto LABEL_68;
    v12 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
            v11,
            (const MethodInfo_3535B7C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    if ( v12 && EventEntity__IsOpen((EventEntity_o *)v12, 1, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_68;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !Instance )
        goto LABEL_68;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   v11,
                   (const MethodInfo_3535B7C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
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
  v14 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E741A5 )
  {
    sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
    byte_4E741A5 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_LastPlayedQuestId_k__BackingField = v14;
  TerminalPramsManager__CheckClearSelectedStoryQuestId(*((_DWORD *)&this->fields.shouldShowConnect + 1), 0);
  if ( QuestMaster__HasFlag(*((_DWORD *)&this->fields.shouldShowConnect + 1), 0x8000000000LL, 0) )
  {
    SpotId = QuestMaster__GetSpotId(*((_DWORD *)&this->fields.shouldShowConnect + 1), 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E741A6 )
    {
      sub_1D0F0B4(&TerminalPramsManager_TypeInfo);
      byte_4E741A6 = 1;
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
  Instance = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserDeckMaster___);
  if ( !Instance )
    goto LABEL_68;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &entity,
         this->fields.activeDeckId,
         (const MethodInfo_3538378 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__) )
  {
    v21 = 0;
    v18 = *((_DWORD *)&this->fields.shouldShowConnect + 1);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
    if ( !Instance )
      goto LABEL_68;
    Instance = (Il2CppObject *)QuestPhaseMaster__TryGetEntity(
                                 (QuestPhaseMaster_o *)Instance,
                                 &v21,
                                 *((_DWORD *)&this->fields.shouldShowConnect + 1),
                                 this->fields.currentQuestId,
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
                                   *((_DWORD *)&this->fields.shouldShowConnect + 1),
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
    sub_1D0F30C(Instance, v9);
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