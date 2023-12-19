void __fastcall TerminalPramsManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Int32_array **v13; // x1
  TerminalPramsManager_c *v14; // x8
  __int64 v15; // x2
  System_Int32_array **v16; // x0
  struct TerminalPramsManager_StaticFields *v17; // x8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  BattleServantConfConponent_o *p_eventScriptMessages; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  TerminalPramsManager_c *v36; // x8

  if ( (byte_40F6DB4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_B16FFC(&float___TypeInfo, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    byte_40F6DB4 = 1;
  }
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_1;
  static_fields->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->mTerminalWarStartedIds, v13, v2, v3, v4, v5, v6, v7);
  v14 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = -1;
  v14->static_fields->clearBattleRaidId = -1;
  v14->static_fields->TipsArchiveEventUiId = 0;
  v14->static_fields->TipsArchiveCurrrentTab = 0;
  v16 = (System_Int32_array **)sub_B17014(float___TypeInfo, 3LL, v15);
  v17 = TerminalPramsManager_TypeInfo->static_fields;
  v17->TipsArchiveScrollValueList = (struct System_Single_array *)v16;
  sub_B16F98((BattleServantConfConponent_o *)&v17->TipsArchiveScrollValueList, v16, v18, v19, v20, v21, v22, v23);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = (BattleServantConfConponent_o *)&TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  p_eventScriptMessages->klass = (BattleServantConfConponent_c *)v28;
  sub_B16F98(p_eventScriptMessages, (System_Int32_array **)v28, v30, v31, v32, v33, v34, v35);
  v36 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v36->static_fields->EVENT_POINT_EFFECT_STATE_ADD = 1;
  v36->static_fields->isInvisibleConnectAndLoad = 0;
  v36->static_fields->ConnectMarkEventId = 0;
  v36->static_fields->ConnectMarkAnimationId = 0;
  v36->static_fields->meSceneStatus = 0;
  v36->static_fields->isCheckHomeExpirationDateEventMap = 1;
  v36->static_fields->IsEventMapLoading = 0;
  v36->static_fields->IsjumbleRaidHomeTopRequest = 0;
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D68 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D68 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F604D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_40F6054 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_40F6054 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoShortcut_k__BackingField = 0;
  v2->static_fields->mIsAutoOpenMasterMission = 0;
}


void __fastcall TerminalPramsManager__BlankEarthRank_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D93 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11517, v2);
    byte_40F6D93 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E40 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E40 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11517,
    v3->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D92 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11518, v2);
    byte_40F6D92 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6047 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6047 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11518,
    v3->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v8; // x0

  if ( (byte_40F6D91 & 1) == 0 )
  {
    sub_B16FFC(&CommonUI_CampaignDirectBonusData___TypeInfo, v1);
    sub_B16FFC(&JsonManager_TypeInfo, v3);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_11519, v5);
    byte_40F6D91 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E3F )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E3F = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v6->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_B17014(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL, v2);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11519, v8, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v10; // x0
  WarQuestSelectionMaster_o *v11; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x19
  int32_t SpotId; // w0
  WarEntity_o *v16; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F6DA5 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F6DA5 = 1;
  }
  v16 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  if ( !QuestMaster__TryGetQuestEntity(MasterData_WarQuestSelectionMaster, &entity, questId, 0LL) )
    return 0;
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v10 )
    goto LABEL_17;
  v11 = DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v10,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_17;
  v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)v11;
  SpotId = QuestEntity__getSpotId(entity, 0LL);
  if ( !v12 )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v12,
          &v16,
          SpotId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v16 )
LABEL_17:
    sub_B170D4();
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            *(&v16->fields.id + 1),
            (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_40F6D94 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D94 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E39 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6E39 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_SelectedStoryQuestId_k__BackingField >= 1 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_40F6E39 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
      byte_40F6E39 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    if ( v4->static_fields->_SelectedStoryQuestId_k__BackingField != questId )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v4);
      if ( !byte_40F604A )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
        byte_40F604A = 1;
      }
      v5 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(v5[2].klass->_1.namespaze) = 0;
      TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(v5);
    }
  }
}


bool __fastcall TerminalPramsManager__CheckEventActivityPointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_40F6D7E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_13555, v1);
    sub_B16FFC(&StringLiteral_13556, v2);
    byte_40F6D7E = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13555, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13556, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F6D80 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_13557, v1);
    byte_40F6D80 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13557, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_40F6DB2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    byte_40F6DB2 = 1;
  }
  if ( !warEntity )
    return 0;
  parentWarId = warEntity->fields.parentWarId;
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return parentWarId == v4->static_fields->OrdealCallWarId;
}


void __fastcall TerminalPramsManager__CheckResumeEffectNT2(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x19
  const MethodInfo *v18; // x1
  TerminalPramsManager_c *v19; // x0
  ScrTerminalListTop_c *v20; // x8
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w20
  const MethodInfo *v22; // x1
  ScrTerminalListTop_c *v23; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w20
  ScrTerminalListTop_c *v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x20
  TerminalPramsManager_c *v28; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v30; // x21
  __int64 v31; // x2
  System_Char_array *v32; // x0
  __int64 v33; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v35; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v48; // x22
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x19
  TerminalPramsManager_c *v57; // x0
  BattleServantConfConponent_o *p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v59; // x0
  int32_t v60; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F6D98 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, v1);
    sub_B16FFC(&System_Action_string__TypeInfo, v5);
    sub_B16FFC(&char___TypeInfo, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_string___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ForEach__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, v9);
    sub_B16FFC(&ScrTerminalListTop_TypeInfo, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    sub_B16FFC(&Method_TerminalPramsManager___c__DisplayClass594_0__CheckResumeEffectNT2_b__0__, v12);
    sub_B16FFC(&TerminalPramsManager___c__DisplayClass594_0_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_26, v14);
    sub_B16FFC(&StringLiteral_68, v15);
    sub_B16FFC(&StringLiteral_1, v16);
    byte_40F6D98 = 1;
  }
  v60 = 0;
  v17 = sub_B170CC(TerminalPramsManager___c__DisplayClass594_0_TypeInfo, v1, v2, v3, v4);
  TerminalPramsManager___c__DisplayClass594_0___ctor((TerminalPramsManager___c__DisplayClass594_0_o *)v17, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E37 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v18);
    byte_40F6E37 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  if ( v19->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v20 = ScrTerminalListTop_TypeInfo;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v20 = ScrTerminalListTop_TypeInfo;
      v19 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v20->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v19);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v18) )
    {
      v23 = ScrTerminalListTop_TypeInfo;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v23 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v23->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v22) )
      {
        v25 = ScrTerminalListTop_TypeInfo;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v25 = ScrTerminalListTop_TypeInfo;
        }
        v60 = v25->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v27 = System_Int32__ToString((int32_t)&v60, 0LL);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6E37 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v26);
          byte_40F6E37 = 1;
        }
        v28 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v28 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v28->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_50;
        v30 = System_String__Replace_43750968(
                PlayedTerminalEffects_k__BackingField,
                (System_String_o *)StringLiteral_68,
                (System_String_o *)StringLiteral_26,
                0LL);
        v32 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v31);
        if ( !v32 )
          goto LABEL_50;
        if ( !v32->max_length )
        {
          sub_B17100(v32, v32, v33);
          sub_B170A0();
        }
        v32->m_Items[2] = 10;
        if ( !v30
          || (v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v30, v32, 0LL),
              (v35 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                      v34,
                                                                                      (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v36 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v35,
              System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                v35,
                (WarBoardManager_TaskList_o *)v27,
                (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__),
              !v17) )
        {
LABEL_50:
          sub_B170D4();
        }
        v43 = (System_Int32_array **)StringLiteral_1;
        *(_QWORD *)(v17 + 16) = StringLiteral_1;
        sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), v43, v37, v38, v39, v40, v41, v42);
        v48 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_string__TypeInfo,
                                                                                     v44,
                                                                                     v45,
                                                                                     v46,
                                                                                     v47);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v48,
          (Il2CppObject *)v17,
          Method_TerminalPramsManager___c__DisplayClass594_0__CheckResumeEffectNT2_b__0__,
          (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v36,
          (System_Action_T__o *)v48,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_string__ForEach__);
        v56 = *(System_Int32_array ***)(v17 + 16);
        if ( !byte_40F6E1D )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v49);
          byte_40F6E1D = 1;
        }
        v57 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v57 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = (BattleServantConfConponent_o *)&v57->static_fields->_PlayedTerminalEffects_k__BackingField;
        p_PlayedTerminalEffects_k__BackingField->klass = (BattleServantConfConponent_c *)v56;
        sub_B16F98(p_PlayedTerminalEffects_k__BackingField, v56, v50, v51, v52, v53, v54, v55);
        TerminalPramsManager__Save_SaveData(v59);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D8D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11520, v2);
    byte_40F6D8D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F68A3 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F68A3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11520,
    v3->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0

  if ( (byte_40F6D8C & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11522, v2);
    sub_B16FFC(&StringLiteral_11521, v3);
    byte_40F6D8C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11522, v4->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11521,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__DeleteClearDatas(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  TerminalPramsManager_ClearData_c *v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  TerminalPramsManager_c *v12; // x0
  BattleServantConfConponent_o *p_lastPlayBgmName; // x0
  System_Int32_array **v14; // x1

  if ( (byte_40F6DA8 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40F6DA8 = 1;
  }
  v4 = TerminalPramsManager_ClearData_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v4 = TerminalPramsManager_ClearData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v4->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E55 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F6E55 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_isQuestRewardSetted_k__BackingField = 0;
  p_lastPlayBgmName = (BattleServantConfConponent_o *)&v12->static_fields->lastPlayBgmName;
  v14 = (System_Int32_array **)StringLiteral_1;
  p_lastPlayBgmName->klass = (BattleServantConfConponent_c *)StringLiteral_1;
  sub_B16F98(p_lastPlayBgmName, v14, v6, v7, v8, v9, v10, v11);
}


void __fastcall TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
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
  TerminalPramsManager_c *v42; // x0
  const MethodInfo *v43; // x0
  const MethodInfo *v44; // x0
  const MethodInfo *v45; // x0

  if ( (byte_40F6D71 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11525, v2);
    sub_B16FFC(&StringLiteral_13559, v3);
    sub_B16FFC(&StringLiteral_11531, v4);
    sub_B16FFC(&StringLiteral_13555, v5);
    sub_B16FFC(&StringLiteral_11519, v6);
    sub_B16FFC(&StringLiteral_11526, v7);
    sub_B16FFC(&StringLiteral_13560, v8);
    sub_B16FFC(&StringLiteral_13557, v9);
    sub_B16FFC(&StringLiteral_13566, v10);
    sub_B16FFC(&StringLiteral_11535, v11);
    sub_B16FFC(&StringLiteral_13574, v12);
    sub_B16FFC(&StringLiteral_13558, v13);
    sub_B16FFC(&StringLiteral_11528, v14);
    sub_B16FFC(&StringLiteral_13561, v15);
    sub_B16FFC(&StringLiteral_11527, v16);
    sub_B16FFC(&StringLiteral_11532, v17);
    sub_B16FFC(&StringLiteral_11536, v18);
    sub_B16FFC(&StringLiteral_11520, v19);
    sub_B16FFC(&StringLiteral_11529, v20);
    sub_B16FFC(&StringLiteral_5179, v21);
    sub_B16FFC(&StringLiteral_5178, v22);
    sub_B16FFC(&StringLiteral_13569, v23);
    sub_B16FFC(&StringLiteral_11534, v24);
    sub_B16FFC(&StringLiteral_11539, v25);
    sub_B16FFC(&StringLiteral_13573, v26);
    sub_B16FFC(&StringLiteral_13578, v27);
    sub_B16FFC(&StringLiteral_13571, v28);
    sub_B16FFC(&StringLiteral_13575, v29);
    sub_B16FFC(&StringLiteral_13556, v30);
    sub_B16FFC(&StringLiteral_11518, v31);
    sub_B16FFC(&StringLiteral_11523, v32);
    sub_B16FFC(&StringLiteral_13579, v33);
    sub_B16FFC(&StringLiteral_11522, v34);
    sub_B16FFC(&StringLiteral_13577, v35);
    sub_B16FFC(&StringLiteral_11521, v36);
    sub_B16FFC(&StringLiteral_11530, v37);
    sub_B16FFC(&StringLiteral_13564, v38);
    sub_B16FFC(&StringLiteral_5177, v39);
    sub_B16FFC(&StringLiteral_13576, v40);
    sub_B16FFC(&StringLiteral_11538, v41);
    byte_40F6D71 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13558, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13578, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13571, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13569, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13564, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13566, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13559, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13561, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13579, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5179, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5178, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5177, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13574, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13575, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13560, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13573, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13576, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13577, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13555, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13556, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13557, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11535, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11534, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11536, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11525, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11526, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11531, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11528, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11529, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11530, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11539, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11522, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11521, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11538, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11520, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11527, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11523, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11532, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11519, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11518, 0LL);
  v42 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__InitParameter((const MethodInfo *)v42);
  TerminalPramsManager__DeleteClearDatas(v43);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v44);
  TerminalPramsManager__DeleteQuestRandomGroupList(v45);
}


void __fastcall TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  BattleServantConfConponent_o *p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_40F6DA9 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11524, v8);
    byte_40F6DA9 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E56 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E56 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = (BattleServantConfConponent_o *)&v9->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  p_EventRaidDefeatedEffectInfo_k__BackingField->klass = 0LL;
  sub_B16F98(p_EventRaidDefeatedEffectInfo_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11524, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  BattleServantConfConponent_o *p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_40F6DAE & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11533, v8);
    byte_40F6DAE = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E58 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E58 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = (BattleServantConfConponent_o *)&v9->static_fields->_QuestRandomGroupList_k__BackingField;
  p_QuestRandomGroupList_k__BackingField->klass = 0LL;
  sub_B16F98(p_QuestRandomGroupList_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11533, 0LL);
}


void __fastcall TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  System_String_o *v7; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F6D7A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_13560, v2);
    sub_B16FFC(&StringLiteral_13573, v3);
    byte_40F6D7A = 1;
  }
  BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E33 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E33 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13560,
    v4->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_40F6E34 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F6E34 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v6->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v7 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13573, v7, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_40F6D79 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_13574, v2);
    sub_B16FFC(&StringLiteral_13575, v3);
    byte_40F6D79 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E31 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E31 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13574,
    v4->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_40F6E32 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F6E32 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13575,
    v6->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


float __fastcall TerminalPramsManager__GetAutoIntpTime(const MethodInfo *method)
{
  int32_t targetFrameRate; // w0

  targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
  return (float)(1.0 / (float)targetFrameRate) + (float)(1.0 / (float)targetFrameRate);
}


int32_t __fastcall TerminalPramsManager__GetFolderLastClickedIdx(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x8
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F6D9D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    byte_40F6D9D = 1;
  }
  value = 0;
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v4->static_fields->folderLastIdxs;
  if ( !folderLastIdxs )
    return 0;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs;
    if ( !folderLastIdxs )
      sub_B170D4();
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_2DDEBC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return 0;
  }
}


float __fastcall TerminalPramsManager__GetIntpTime_AutoResume(float time, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  int32_t targetFrameRate; // w0

  if ( (byte_40F6D6D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    byte_40F6D6D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F606C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    byte_40F606C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_40F6078 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
      byte_40F6078 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    if ( !v5->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v5);
      targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
      return (float)(1.0 / (float)targetFrameRate) + (float)(1.0 / (float)targetFrameRate);
    }
  }
  return time;
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D73 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D73 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__InitParameter((const MethodInfo *)v2);
}


void __fastcall TerminalPramsManager__InitMessageWindowData(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  System_Int32_array **v10; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *v20; // x0

  if ( (byte_40F6D9B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40F6D9B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E41 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E41 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsDispOnly_k__BackingField = 0;
  v10 = (System_Int32_array **)StringLiteral_1;
  if ( !byte_40F605B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v9 = TerminalPramsManager_TypeInfo;
    byte_40F605B = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = (struct System_String_o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    v10,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_40F605A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    byte_40F605A = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_40F6E42 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    v19 = TerminalPramsManager_TypeInfo;
    byte_40F6E42 = 1;
  }
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v20 = v19->static_fields;
  v20->_BattleSetupKeep_k__BackingField = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v20->_BattleSetupKeep_k__BackingField, 0LL, v13, v14, v15, v16, v17, v18);
}


void __fastcall TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  TerminalPramsManager_c *v29; // x0
  BattleServantConfConponent_o *p_timeStatusRecord_k__BackingField; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  TerminalPramsManager_c *v38; // x0
  BattleServantConfConponent_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_Int32_array **v40; // x1
  BattleServantConfConponent_o *p_lastPlayBgmName; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  TerminalPramsManager_c *v55; // x0
  struct TerminalPramsManager_StaticFields *v56; // x0
  __int64 v57; // x1
  TerminalPramsManager_c *v58; // x0
  const MethodInfo *v59; // x0
  __int64 v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  TerminalPramsManager_c *v67; // x0
  System_Int32_array **v68; // x20
  BattleServantConfConponent_o *p_PlayedTerminalEffects_k__BackingField; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  TerminalPramsManager_c *v77; // x0
  System_Int32_array **v78; // x20
  BattleServantConfConponent_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  __int64 v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  TerminalPramsManager_c *v87; // x0
  struct TerminalPramsManager_StaticFields *v88; // x0

  if ( (byte_40F6D72 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40F6D72 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6046 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6046 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_40F6079 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6079 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_40F6048 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
    byte_40F6048 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_40F609A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
    byte_40F609A = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_40F6E0E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
    byte_40F6E0E = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_40F609B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
    byte_40F609B = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_40F6090 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
    byte_40F6090 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_40F604A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
    byte_40F604A = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_40F604B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
    byte_40F604B = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_40F6E0F )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
    byte_40F6E0F = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_40F608C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
    byte_40F608C = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_40F6092 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v10 = TerminalPramsManager_TypeInfo;
    byte_40F6092 = 1;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    0LL,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_40F6049 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    byte_40F6049 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_40F6093 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    v19 = TerminalPramsManager_TypeInfo;
    byte_40F6093 = 1;
  }
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_40F604F )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    v19 = TerminalPramsManager_TypeInfo;
    byte_40F604F = 1;
  }
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_IsDoneShortcut_k__BackingField = 0;
  v20 = v19->static_fields;
  v21 = (System_Int32_array **)StringLiteral_1;
  v20->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&v20->mTerminalWarStartedIds, v21, v13, v14, v15, v16, v17, v18);
  if ( !byte_40F6E10 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
    byte_40F6E10 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_40F6E11 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
    v29 = TerminalPramsManager_TypeInfo;
    byte_40F6E11 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_40F6E12 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
    v29 = TerminalPramsManager_TypeInfo;
    byte_40F6E12 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_40F6095 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
    v29 = TerminalPramsManager_TypeInfo;
    byte_40F6095 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_40F6096 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
    v29 = TerminalPramsManager_TypeInfo;
    byte_40F6096 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_40F6E13 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
    v29 = TerminalPramsManager_TypeInfo;
    byte_40F6E13 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = (BattleServantConfConponent_o *)&v29->static_fields->_timeStatusRecord_k__BackingField;
  p_timeStatusRecord_k__BackingField->klass = 0LL;
  sub_B16F98(p_timeStatusRecord_k__BackingField, 0LL, v23, v24, v25, v26, v27, v28);
  if ( !byte_40F6E14 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v31);
    byte_40F6E14 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_40F6E15 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v31);
    v38 = TerminalPramsManager_TypeInfo;
    byte_40F6E15 = 1;
  }
  if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_40F6E16 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v31);
    v38 = TerminalPramsManager_TypeInfo;
    byte_40F6E16 = 1;
  }
  if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_40F6E17 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v31);
    v38 = TerminalPramsManager_TypeInfo;
    byte_40F6E17 = 1;
  }
  if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_40F6E18 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v31);
    v38 = TerminalPramsManager_TypeInfo;
    byte_40F6E18 = 1;
  }
  if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v38);
    v38 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = (BattleServantConfConponent_o *)&v38->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  p_BeforeEventSubmarineSaveData_k__BackingField->klass = 0LL;
  sub_B16F98(p_BeforeEventSubmarineSaveData_k__BackingField, 0LL, v32, v33, v34, v35, v36, v37);
  v40 = (System_Int32_array **)StringLiteral_1;
  p_lastPlayBgmName = (BattleServantConfConponent_o *)&TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  p_lastPlayBgmName->klass = (BattleServantConfConponent_c *)StringLiteral_1;
  sub_B16F98(p_lastPlayBgmName, v40, v42, v43, v44, v45, v46, v47);
  v55 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0;
  v55->static_fields->panelEventPoint = 0;
  if ( !byte_40F6E19 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v48);
    v55 = TerminalPramsManager_TypeInfo;
    byte_40F6E19 = 1;
  }
  if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v55);
    v55 = TerminalPramsManager_TypeInfo;
  }
  v56 = v55->static_fields;
  v56->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v56->_SpecifiedChangeSceneInfo_k__BackingField,
    0LL,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  if ( !byte_40F6E1A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v57);
    byte_40F6E1A = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  v58->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_40F6E1B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v57);
    v58 = TerminalPramsManager_TypeInfo;
    byte_40F6E1B = 1;
  }
  if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v58);
    v58 = TerminalPramsManager_TypeInfo;
  }
  v58->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_40F6E1C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v57);
    v58 = TerminalPramsManager_TypeInfo;
    byte_40F6E1C = 1;
  }
  if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v58);
    v58 = TerminalPramsManager_TypeInfo;
  }
  v58->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_40F6E0C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v57);
    v58 = TerminalPramsManager_TypeInfo;
    byte_40F6E0C = 1;
  }
  if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v58);
    v58 = TerminalPramsManager_TypeInfo;
  }
  v58->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v58);
  TerminalPramsManager__ResetResumeScriptWithMap(v59);
  if ( !byte_40F6082 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v60);
    byte_40F6082 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v67->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v68 = (System_Int32_array **)StringLiteral_1;
  if ( !byte_40F6E1D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v60);
    v67 = TerminalPramsManager_TypeInfo;
    byte_40F6E1D = 1;
  }
  if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v67);
    v67 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = (BattleServantConfConponent_o *)&v67->static_fields->_PlayedTerminalEffects_k__BackingField;
  p_PlayedTerminalEffects_k__BackingField->klass = (BattleServantConfConponent_c *)v68;
  sub_B16F98(p_PlayedTerminalEffects_k__BackingField, v68, v61, v62, v63, v64, v65, v66);
  if ( !byte_40F6E1E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    byte_40F6E1E = 1;
  }
  v77 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_40F6E1F )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E1F = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_40F6E20 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E20 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  v77->static_fields->ConnectMarkEventId = 0;
  v77->static_fields->ConnectMarkAnimationId = 0;
  if ( !byte_40F6711 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6711 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_40F6E21 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E21 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_40F6E22 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E22 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_40F6E23 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E23 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_40F6E24 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E24 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_40F6086 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6086 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_40F6E25 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E25 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_40F6E26 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E26 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_40F6E27 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E27 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_40F6E24 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E24 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_40F6E28 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E28 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_40F6E29 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E29 = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_40F6E2A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E2A = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_40F6E2B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E2B = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_40F6E2C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E2C = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  v77->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v78 = (System_Int32_array **)StringLiteral_1;
  if ( !byte_40F6E2D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v70);
    v77 = TerminalPramsManager_TypeInfo;
    byte_40F6E2D = 1;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v77);
    v77 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = (BattleServantConfConponent_o *)&v77->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  p_SceneMoveQuestClearedInfo_k__BackingField->klass = (BattleServantConfConponent_c *)v78;
  sub_B16F98(p_SceneMoveQuestClearedInfo_k__BackingField, v78, v71, v72, v73, v74, v75, v76);
  if ( !byte_40F6E2E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v80);
    byte_40F6E2E = 1;
  }
  v87 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v87 = TerminalPramsManager_TypeInfo;
  }
  v88 = v87->static_fields;
  v88->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v88->_CampaignDirectBonus_k__BackingField,
    0LL,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  unsigned __int64 i; // x19
  TerminalPramsManager_c *v4; // x0
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  char *v6; // x8

  if ( (byte_40F6DB3 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6DB3 = 1;
  }
  for ( i = 0LL; ; ++i )
  {
    v4 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    TipsArchiveScrollValueList = v4->static_fields->TipsArchiveScrollValueList;
    if ( !TipsArchiveScrollValueList )
LABEL_15:
      sub_B170D4();
    if ( (__int64)i >= (int)TipsArchiveScrollValueList->max_length )
      break;
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      TipsArchiveScrollValueList = TerminalPramsManager_TypeInfo->static_fields->TipsArchiveScrollValueList;
      if ( !TipsArchiveScrollValueList )
        goto LABEL_15;
    }
    if ( i >= TipsArchiveScrollValueList->max_length )
    {
      sub_B17100(v4, v1, v2);
      sub_B170A0();
    }
    v6 = (char *)TipsArchiveScrollValueList + 4 * i;
    *((_DWORD *)v6 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_40F6D65 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D65 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F606C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F606C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_IsAutoResume_k__BackingField )
    return 1;
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v2);
  if ( !byte_40F6E07 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E07 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsAutoShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__IsAutoForTimeProgressEvents(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  TerminalPramsManager_c *v8; // x0
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  TerminalPramsManager_c *v12; // x0
  WebViewManager_o *v13; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x0
  EventDetailEntity_o *v17; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F6D67 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    byte_40F6D67 = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F606C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F606C = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !v7->static_fields->_IsAutoResume_k__BackingField )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v7);
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6044 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40F6044 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          v12->static_fields->_WarId_k__BackingField,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13
    || (v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v13,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !v14 )
  {
LABEL_40:
    sub_B170D4();
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v14,
          (WarEntity_o **)&v17,
          entity->fields.eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  if ( !v17 )
    goto LABEL_40;
  return EventDetailEntity__IsTimeProgressEvent(v17, 0LL);
}


void __fastcall TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D8F & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11523, v2);
    byte_40F6D8F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E3A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E3A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11523,
    v3->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__IsFreeQuestOnOrdealCall(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  QuestMaster_o *Master_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v8; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x19
  int32_t SpotId; // w0
  int v11; // w19
  BalanceConfig_c *v12; // x0
  WarEntity_o *v14; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F6DB1 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6);
    byte_40F6DB1 = 1;
  }
  v14 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !QuestMaster__TryGetQuestEntity(Master_WarQuestSelectionMaster, &entity, questId, 0LL) )
    return 0;
  if ( !entity )
    goto LABEL_23;
  if ( QuestEntity__GetTypeFlag(entity, 0LL) != 4 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)v8, SpotId = QuestEntity__getSpotId(entity, 0LL), !v9) )
  {
LABEL_23:
    sub_B170D4();
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v9,
          &v14,
          SpotId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
    return 0;
  if ( !v14 )
    goto LABEL_23;
  v11 = *(&v14->fields.id + 1);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  return v11 == v12->static_fields->OrdealCallWarId;
}


bool __fastcall TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F6DA3 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F6DA3 = 1;
  }
  entity = 0LL;
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->FesWarId != warId )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
            warId,
            (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( MasterData_WarQuestSelectionMaster )
        {
          if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  MasterData_WarQuestSelectionMaster,
                  &entity,
                  warId,
                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
            return 0;
          if ( entity )
            return entity->fields.eventId == 0;
        }
      }
      sub_B170D4();
    }
  }
  return 1;
}


bool __fastcall TerminalPramsManager__IsMainStoryForQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  QuestMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v9; // x0
  WarQuestSelectionMaster_o *v10; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x19
  int32_t SpotId; // w0
  const MethodInfo *v13; // x1
  int32_t v14; // w19
  WarEntity_o *v17; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F6DA4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    byte_40F6DA4 = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_17;
  if ( !QuestMaster__TryGetQuestEntity(MasterData_WarQuestSelectionMaster, &entity, questId, 0LL) )
    return 0;
  v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v9
    || (v10 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                (DataManager_o *)v9,
                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)v10, SpotId = QuestEntity__getSpotId(entity, 0LL), !v11) )
  {
LABEL_17:
    sub_B170D4();
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v11,
          &v17,
          SpotId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  if ( !v17 )
    goto LABEL_17;
  v14 = *(&v17->fields.id + 1);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStory(v14, v13);
}


bool __fastcall TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40F6DA2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    byte_40F6DA2 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5->static_fields->NotRequiredPlayWarIds,
         warId,
         (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 0;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStory(warId, v6);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D88 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11529, v2);
    byte_40F6D88 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6084 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6084 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11529,
    v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D87 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11528, v2);
    byte_40F6D87 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6083 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6083 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11528,
    v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D89 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11530, v2);
    byte_40F6D89 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E38 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E38 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11530,
    v3->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  struct EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *playedEffectList; // x0
  char v10; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F6DAD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&day);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    byte_40F6DAD = 1;
  }
  value = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E57 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_40F6E57 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v7->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField
    || (playedEffectList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)EventRaidDefeatedEffectInfo_k__BackingField->fields.playedEffectList) == 0LL )
  {
    sub_B170D4();
  }
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         playedEffectList,
         eventId,
         &value,
         (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v10 = (char)value;
    if ( value )
      v10 = System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)value,
              day,
              (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    v10 = 0;
  }
  return v10 & 1;
}


bool __fastcall TerminalPramsManager__IsTerminalEffectNT2BoardOpen(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ScrTerminalListTop_c *v5; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w19
  clsQuestCheck_o *v7; // x19
  clsQuestCheck_o *v8; // x19
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0
  ScrTerminalListTop_c *v11; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v13; // x0

  if ( (byte_40F6D97 & 1) == 0 )
  {
    sub_B16FFC(&ScrTerminalListTop_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v2);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v3);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    byte_40F6D97 = 1;
  }
  v5 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v5 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v5->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v1) )
    return 0;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v7 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v7 )
    goto LABEL_49;
  if ( !clsQuestCheck__IsQuestClear(
          v7,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v8 )
LABEL_49:
    sub_B170D4();
  if ( !clsQuestCheck__IsWarClear(
          v8,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
      byte_40F6057 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v11 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v10->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v11 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v11->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6058 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
        byte_40F6058 = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      if ( v13->static_fields->_PhaseCnt_k__BackingField == 2 )
        return 1;
    }
  }
  return 0;
}


bool __fastcall TerminalPramsManager__IsTerminalEffectPlayed(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  TerminalPramsManager_c *v8; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v10; // x20
  __int64 v11; // x2
  System_String_array *v12; // x0
  __int64 v13; // x2
  System_String_array *v14; // x1
  __int64 v15; // x8
  System_String_array *v16; // x20
  unsigned __int64 v17; // x21
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  v19 = effectId;
  if ( (byte_40F6D95 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_26, v3);
    sub_B16FFC(&StringLiteral_68, v4);
    byte_40F6D95 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E37 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6E37 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_PlayedTerminalEffects_k__BackingField )
    return 0;
  v7 = System_Int32__ToString((int32_t)&v19, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E37 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    byte_40F6E37 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v8->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField )
    goto LABEL_34;
  v10 = System_String__Replace_43750968(
          PlayedTerminalEffects_k__BackingField,
          (System_String_o *)StringLiteral_68,
          (System_String_o *)StringLiteral_26,
          0LL);
  v12 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v11);
  if ( !v12 )
    goto LABEL_34;
  v14 = v12;
  if ( !v12->max_length )
  {
LABEL_33:
    sub_B17100(v12, v14, v13);
    sub_B170A0();
  }
  LOWORD(v12->m_Items[0]) = 10;
  if ( !v10 || (v12 = System_String__Split(v10, (System_Char_array *)v12, 0LL)) == 0LL )
LABEL_34:
    sub_B170D4();
  v15 = *(_QWORD *)&v12->max_length;
  v16 = v12;
  if ( (int)v15 < 1 )
    return 0;
  v17 = 0LL;
  while ( 1 )
  {
    if ( v17 >= (unsigned int)v15 )
      goto LABEL_33;
    v12 = (System_String_array *)System_String__op_Equality(v16->m_Items[v17], v7, 0LL);
    if ( ((unsigned __int8)v12 & 1) != 0 )
      return 1;
    LODWORD(v15) = v16->max_length;
    if ( (__int64)++v17 >= (int)v15 )
      return 0;
  }
}


bool __fastcall TerminalPramsManager__IsWarStartedId(int32_t war_id, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  System_String_o *mTerminalWarStartedIds; // x0
  System_String_o *v7; // x19
  __int64 v8; // x2
  System_String_array *v9; // x0
  __int64 v10; // x2
  System_String_array *v11; // x1
  __int64 v12; // x8
  System_String_array *v13; // x19
  unsigned __int64 v14; // x21
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = war_id;
  if ( (byte_40F6D99 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_26, v3);
    sub_B16FFC(&StringLiteral_68, v4);
    byte_40F6D99 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v5->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds )
    goto LABEL_20;
  v7 = System_String__Replace_43750968(
         mTerminalWarStartedIds,
         (System_String_o *)StringLiteral_68,
         (System_String_o *)StringLiteral_26,
         0LL);
  v9 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v8);
  if ( !v9 )
    goto LABEL_20;
  v11 = v9;
  if ( !v9->max_length )
  {
LABEL_19:
    sub_B17100(v9, v11, v10);
    sub_B170A0();
  }
  LOWORD(v9->m_Items[0]) = 10;
  if ( !v7 || (v9 = System_String__Split(v7, (System_Char_array *)v9, 0LL)) == 0LL )
LABEL_20:
    sub_B170D4();
  v12 = *(_QWORD *)&v9->max_length;
  v13 = v9;
  if ( (int)v12 < 1 )
    return 0;
  v14 = 0LL;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v12 )
      goto LABEL_19;
    v15 = v13->m_Items[v14];
    v16 = System_Int32__ToString((int32_t)&v18, 0LL);
    v9 = (System_String_array *)System_String__op_Equality(v15, v16, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
      return 1;
    LODWORD(v12) = v13->max_length;
    if ( (__int64)++v14 >= (int)v12 )
      return 0;
  }
}


void __fastcall TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D86 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_13562, v2);
    byte_40F6D86 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13562, v3->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D84 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11525, v2);
    byte_40F6D84 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11525, v3->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D85 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11526, v2);
    byte_40F6D85 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11526,
    v3->static_fields->lastPlayQuestConsumeAp,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_ClearData_c *v6; // x0
  TerminalPramsManager_ClearData_c *v7; // x0
  Il2CppObject *String_34837456; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  TerminalPramsManager_ClearData_o *v15; // x19
  TerminalPramsManager_c *v16; // x0
  BattleServantConfConponent_o *p_mQuestClearHeroineInfo; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *qClearHeroineInfo; // x8
  struct TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x9
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **Load; // x20
  TerminalPramsManager_c *v34; // x0
  BattleServantConfConponent_o *v35; // x0
  bool questClear; // w20
  TerminalPramsManager_c *v37; // x8
  bool phaseClear; // w21
  struct TerminalPramsManager_StaticFields **p_static_fields; // x9
  struct QuestRewardInfo_array *questRewardInfos; // x10
  System_Int32_array **v41; // x20
  BattleServantConfConponent_o *p_mQuestRewardInfos; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct QuestRewardInfo_array *questPhaseRewardInfos; // x8
  TerminalPramsManager_c *v50; // x0
  System_Int32_array **v51; // x20
  BattleServantConfConponent_o *p_mQuestPhaseRewardInfos; // x0
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  TerminalPramsManager_c *v60; // x8
  struct UserSuperBossEntity_array *mOldSuperBoss; // x9
  System_Int32_array **v62; // x20
  TerminalPramsManager_c *v63; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct UserSuperBossEntity_array *oldPersonalBoss; // x8
  System_Int32_array **v73; // x20
  TerminalPramsManager_c *v74; // x0
  struct TerminalPramsManager_StaticFields *v75; // x0
  __int64 v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct EventPointWinReward_o *evPointWinReward; // x8
  System_Int32_array **v84; // x20
  TerminalPramsManager_c *v85; // x0
  struct TerminalPramsManager_StaticFields *v86; // x0
  __int64 v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  int32_t evPointWinType; // w20
  TerminalPramsManager_c *v95; // x8
  struct EventRaceBoostInfo_o *evRaceBoost; // x9
  System_Int32_array **v97; // x20
  TerminalPramsManager_c *v98; // x0
  struct TerminalPramsManager_StaticFields *v99; // x0
  __int64 v100; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct CostumeReleaseAnnounce_array *questClearCostume; // x8
  System_Int32_array **v108; // x20
  TerminalPramsManager_c *v109; // x0
  BattleServantConfConponent_o *p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v111; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  struct CostumeReleaseAnnounce_array *questClearCostumeGetInfo; // x8
  System_Int32_array **v119; // x20
  TerminalPramsManager_c *v120; // x0
  BattleServantConfConponent_o *p_questClearCostumeGet_k__BackingField; // x0
  __int64 v122; // x1
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  struct EventTowerReward_o *eventTowerReward; // x8
  System_Int32_array **v130; // x20
  TerminalPramsManager_c *v131; // x0
  BattleServantConfConponent_o *p_eventTowerReward_k__BackingField; // x0
  __int64 v133; // x0
  __int64 v134; // x1
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  struct QuestRewardInfo_array *resultEventTowerRewardInfo; // x8
  __int64 v142; // x9
  QuestRewardInfo_o *v143; // x9
  System_Int32_array **v144; // x20
  TerminalPramsManager_c *v145; // x0
  BattleServantConfConponent_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v147; // x1
  System_String_array **v148; // x2
  System_String_array **v149; // x3
  System_Boolean_array **v150; // x4
  System_Int32_array **v151; // x5
  System_Int32_array *v152; // x6
  System_Int32_array *v153; // x7
  struct QuestRewardInfo_array *resultBoostItemRewardInfo; // x8
  System_Int32_array **v155; // x20
  TerminalPramsManager_c *v156; // x0
  BattleServantConfConponent_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v158; // x1
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo; // x8
  System_Int32_array **v166; // x20
  TerminalPramsManager_c *v167; // x0
  BattleServantConfConponent_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v169; // x1
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  bool isDispOnly; // w20
  TerminalPramsManager_c *v177; // x8
  struct WarClearReward_array *warClearReward; // x9
  System_Int32_array **v179; // x20
  TerminalPramsManager_c *v180; // x0
  BattleServantConfConponent_o *p_warClearReward_k__BackingField; // x0
  __int64 v182; // x1
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  int32_t EventActivityPointEffectState; // w20
  TerminalPramsManager_c *v190; // x8
  bool isWarBoardClear; // w21
  struct TerminalPramsManager_StaticFields **v192; // x9
  struct BattleDropItem_array *questResultAfterEventRewardInfos; // x10
  System_Int32_array **v194; // x20
  BattleServantConfConponent_o *p_mQuestResultAfterEventRewardInfos; // x0
  System_String_array **v196; // x2
  System_String_array **v197; // x3
  System_Boolean_array **v198; // x4
  System_Int32_array **v199; // x5
  System_Int32_array *v200; // x6
  System_Int32_array *v201; // x7
  struct BattleDropItem_array *resultEventPanelRewardInfos; // x8
  TerminalPramsManager_c *v203; // x0
  System_Int32_array **v204; // x20
  BattleServantConfConponent_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v206; // x1
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  TerminalPramsManager_c *v213; // x0
  System_Int32_array **limitImageAnnounces; // x20
  BattleServantConfConponent_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v216; // x1
  bool isOrdealCallWarClear; // w20
  TerminalPramsManager_c *v218; // x8
  int32_t eventMuralId; // w21
  TerminalPramsManager_c *v220; // x8
  TerminalPramsManager_c *v221; // x0

  if ( (byte_40F6DA7 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_B16FFC(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v2);
    sub_B16FFC(&JsonManager_TypeInfo, v3);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    byte_40F6DA7 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6075 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6075 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_isQuestRewardSetted_k__BackingField )
  {
    v6 = TerminalPramsManager_ClearData_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
      v6 = TerminalPramsManager_ClearData_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__HasKey(v6->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL) )
    {
      v7 = TerminalPramsManager_ClearData_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
        v7 = TerminalPramsManager_ClearData_TypeInfo;
      }
      String_34837456 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34837456(
                                          v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v15 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
              String_34837456,
              (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v16 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = (BattleServantConfConponent_o *)&v16->static_fields->mQuestClearHeroineInfo;
      p_mQuestClearHeroineInfo->klass = 0LL;
      sub_B16F98(p_mQuestClearHeroineInfo, 0LL, v9, v10, v11, v12, v13, v14);
      if ( !v15 )
        sub_B170D4();
      qClearHeroineInfo = v15->fields.qClearHeroineInfo;
      if ( !qClearHeroineInfo )
        sub_B170D4();
      oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
      if ( oldUsrSvtData && oldUsrSvtData->fields.svtId >= 1 )
      {
        Load = (System_Int32_array **)TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
                                        v15->fields.qClearHeroineInfo,
                                        0LL);
        v34 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v34 = TerminalPramsManager_TypeInfo;
        }
        v35 = (BattleServantConfConponent_o *)&v34->static_fields->mQuestClearHeroineInfo;
        v35->klass = (BattleServantConfConponent_c *)Load;
        sub_B16F98(v35, Load, v27, v28, v29, v30, v31, v32);
      }
      questClear = v15->fields.questClear;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6072 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v18);
        byte_40F6072 = 1;
      }
      v37 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v37 = TerminalPramsManager_TypeInfo;
      }
      v37->static_fields->_IsQuestClear_k__BackingField = questClear;
      phaseClear = v15->fields.phaseClear;
      if ( !byte_40F6073 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v18);
        v37 = TerminalPramsManager_TypeInfo;
        byte_40F6073 = 1;
      }
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = TerminalPramsManager_TypeInfo;
      }
      p_static_fields = &v37->static_fields;
      v37->static_fields->_IsPhaseClear_k__BackingField = phaseClear;
      questRewardInfos = v15->fields.questRewardInfos;
      if ( !questRewardInfos )
        sub_B170D4();
      if ( *(_QWORD *)&questRewardInfos->max_length )
        v41 = (System_Int32_array **)v15->fields.questRewardInfos;
      else
        v41 = 0LL;
      if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
      }
      p_mQuestRewardInfos = (BattleServantConfConponent_o *)&(*p_static_fields)->mQuestRewardInfos;
      p_mQuestRewardInfos->klass = (BattleServantConfConponent_c *)v41;
      sub_B16F98(p_mQuestRewardInfos, v41, v19, v20, v21, v22, v23, v24);
      questPhaseRewardInfos = v15->fields.questPhaseRewardInfos;
      if ( !questPhaseRewardInfos )
        sub_B170D4();
      v50 = TerminalPramsManager_TypeInfo;
      if ( *(_QWORD *)&questPhaseRewardInfos->max_length )
        v51 = (System_Int32_array **)v15->fields.questPhaseRewardInfos;
      else
        v51 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v50 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = (BattleServantConfConponent_o *)&v50->static_fields->mQuestPhaseRewardInfos;
      p_mQuestPhaseRewardInfos->klass = (BattleServantConfConponent_c *)v51;
      sub_B16F98(p_mQuestPhaseRewardInfos, v51, v43, v44, v45, v46, v47, v48);
      v60 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = v15->fields.clearedLastBattleRaidId;
      v60->static_fields->clearBattleRaidId = v15->fields.clearedBattleRaidId;
      v60->static_fields->joinGroupId = v15->fields.joinGroup;
      mOldSuperBoss = v15->fields.mOldSuperBoss;
      if ( !mOldSuperBoss )
        sub_B170D4();
      if ( *(_QWORD *)&mOldSuperBoss->max_length )
        v62 = (System_Int32_array **)v15->fields.mOldSuperBoss;
      else
        v62 = 0LL;
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v60);
      if ( !byte_40F6E4D )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v53);
        byte_40F6E4D = 1;
      }
      v63 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v63 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v63->static_fields;
      static_fields->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v62;
      sub_B16F98(
        (BattleServantConfConponent_o *)&static_fields->_oldSuperBoss_k__BackingField,
        v62,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      oldPersonalBoss = v15->fields.oldPersonalBoss;
      if ( !oldPersonalBoss )
        sub_B170D4();
      if ( *(_QWORD *)&oldPersonalBoss->max_length )
        v73 = (System_Int32_array **)v15->fields.oldPersonalBoss;
      else
        v73 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6E4E )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v65);
        byte_40F6E4E = 1;
      }
      v74 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v74 = TerminalPramsManager_TypeInfo;
      }
      v75 = v74->static_fields;
      v75->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v73;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v75->_oldPersonalBoss_k__BackingField,
        v73,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      evPointWinReward = v15->fields.evPointWinReward;
      if ( !evPointWinReward )
        sub_B170D4();
      if ( evPointWinReward->fields.id <= 0 )
        v84 = 0LL;
      else
        v84 = (System_Int32_array **)v15->fields.evPointWinReward;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6E45 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v76);
        byte_40F6E45 = 1;
      }
      v85 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v85 = TerminalPramsManager_TypeInfo;
      }
      v86 = v85->static_fields;
      v86->_eventPointWinReward_k__BackingField = (struct EventPointWinReward_o *)v84;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v86->_eventPointWinReward_k__BackingField,
        v84,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      evPointWinType = v15->fields.evPointWinType;
      if ( !byte_40F6E46 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v87);
        byte_40F6E46 = 1;
      }
      v95 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v95 = TerminalPramsManager_TypeInfo;
      }
      v95->static_fields->_eventPointWinType_k__BackingField = evPointWinType;
      evRaceBoost = v15->fields.evRaceBoost;
      if ( !evRaceBoost )
        sub_B170D4();
      if ( evRaceBoost->fields.termId <= 0 )
        v97 = 0LL;
      else
        v97 = (System_Int32_array **)v15->fields.evRaceBoost;
      if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v95);
      if ( !byte_40F6E49 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v87);
        byte_40F6E49 = 1;
      }
      v98 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v98 = TerminalPramsManager_TypeInfo;
      }
      v99 = v98->static_fields;
      v99->_eventRaceBoost_k__BackingField = (struct EventRaceBoostInfo_o *)v97;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v99->_eventRaceBoost_k__BackingField,
        v97,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
      questClearCostume = v15->fields.questClearCostume;
      if ( !questClearCostume )
        sub_B170D4();
      if ( *(_QWORD *)&questClearCostume->max_length )
        v108 = (System_Int32_array **)v15->fields.questClearCostume;
      else
        v108 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6E44 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v100);
        byte_40F6E44 = 1;
      }
      v109 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v109 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = (BattleServantConfConponent_o *)&v109->static_fields->_questClearCostumeRelease_k__BackingField;
      p_questClearCostumeRelease_k__BackingField->klass = (BattleServantConfConponent_c *)v108;
      sub_B16F98(p_questClearCostumeRelease_k__BackingField, v108, v101, v102, v103, v104, v105, v106);
      questClearCostumeGetInfo = v15->fields.questClearCostumeGetInfo;
      if ( !questClearCostumeGetInfo )
        sub_B170D4();
      if ( *(_QWORD *)&questClearCostumeGetInfo->max_length )
        v119 = (System_Int32_array **)v15->fields.questClearCostumeGetInfo;
      else
        v119 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6070 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v111);
        byte_40F6070 = 1;
      }
      v120 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v120 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = (BattleServantConfConponent_o *)&v120->static_fields->_questClearCostumeGet_k__BackingField;
      p_questClearCostumeGet_k__BackingField->klass = (BattleServantConfConponent_c *)v119;
      sub_B16F98(p_questClearCostumeGet_k__BackingField, v119, v112, v113, v114, v115, v116, v117);
      eventTowerReward = v15->fields.eventTowerReward;
      if ( !eventTowerReward )
        sub_B170D4();
      if ( eventTowerReward->fields.eventId <= 0 )
        v130 = 0LL;
      else
        v130 = (System_Int32_array **)v15->fields.eventTowerReward;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6E4B )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v122);
        byte_40F6E4B = 1;
      }
      v131 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v131 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = (BattleServantConfConponent_o *)&v131->static_fields->_eventTowerReward_k__BackingField;
      p_eventTowerReward_k__BackingField->klass = (BattleServantConfConponent_c *)v130;
      sub_B16F98(p_eventTowerReward_k__BackingField, v130, v123, v124, v125, v126, v127, v128);
      resultEventTowerRewardInfo = v15->fields.resultEventTowerRewardInfo;
      if ( !resultEventTowerRewardInfo )
        sub_B170D4();
      v142 = *(_QWORD *)&resultEventTowerRewardInfo->max_length;
      if ( v142 )
      {
        if ( !(_DWORD)v142 )
        {
          sub_B17100(v133, v134, v135);
          sub_B170A0();
        }
        v143 = resultEventTowerRewardInfo->m_Items[0];
        if ( !v143 )
          sub_B170D4();
        if ( v143->fields.userSvtId <= 0 )
          v144 = 0LL;
        else
          v144 = (System_Int32_array **)v15->fields.resultEventTowerRewardInfo;
      }
      else
      {
        v144 = 0LL;
      }
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6E4C )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v134);
        byte_40F6E4C = 1;
      }
      v145 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v145 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = (BattleServantConfConponent_o *)&v145->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      p_resultEventTowerRewardInfo_k__BackingField->klass = (BattleServantConfConponent_c *)v144;
      sub_B16F98(p_resultEventTowerRewardInfo_k__BackingField, v144, v135, v136, v137, v138, v139, v140);
      resultBoostItemRewardInfo = v15->fields.resultBoostItemRewardInfo;
      if ( !resultBoostItemRewardInfo )
        sub_B170D4();
      if ( *(_QWORD *)&resultBoostItemRewardInfo->max_length )
        v155 = (System_Int32_array **)v15->fields.resultBoostItemRewardInfo;
      else
        v155 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6066 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v147);
        byte_40F6066 = 1;
      }
      v156 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v156 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = (BattleServantConfConponent_o *)&v156->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      p_resultBoostItemRewardInfo_k__BackingField->klass = (BattleServantConfConponent_c *)v155;
      sub_B16F98(p_resultBoostItemRewardInfo_k__BackingField, v155, v148, v149, v150, v151, v152, v153);
      resultEventBoardGameTokenRewardInfo = v15->fields.resultEventBoardGameTokenRewardInfo;
      if ( !resultEventBoardGameTokenRewardInfo )
        sub_B170D4();
      if ( *(_QWORD *)&resultEventBoardGameTokenRewardInfo->max_length )
        v166 = (System_Int32_array **)v15->fields.resultEventBoardGameTokenRewardInfo;
      else
        v166 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6067 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v158);
        byte_40F6067 = 1;
      }
      v167 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v167 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = (BattleServantConfConponent_o *)&v167->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = (BattleServantConfConponent_c *)v166;
      sub_B16F98(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v166, v159, v160, v161, v162, v163, v164);
      isDispOnly = v15->fields.isDispOnly;
      if ( !byte_40F6E41 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v169);
        byte_40F6E41 = 1;
      }
      v177 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v177 = TerminalPramsManager_TypeInfo;
      }
      v177->static_fields->_IsDispOnly_k__BackingField = isDispOnly;
      warClearReward = v15->fields.warClearReward;
      if ( !warClearReward )
        sub_B170D4();
      if ( *(_QWORD *)&warClearReward->max_length )
        v179 = (System_Int32_array **)v15->fields.warClearReward;
      else
        v179 = 0LL;
      if ( (BYTE3(v177->vtable._0_Equals.methodPtr) & 4) != 0 && !v177->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v177);
      if ( !byte_40F6077 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v169);
        byte_40F6077 = 1;
      }
      v180 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v180 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = (BattleServantConfConponent_o *)&v180->static_fields->_warClearReward_k__BackingField;
      p_warClearReward_k__BackingField->klass = (BattleServantConfConponent_c *)v179;
      sub_B16F98(p_warClearReward_k__BackingField, v179, v170, v171, v172, v173, v174, v175);
      EventActivityPointEffectState = v15->fields.EventActivityPointEffectState;
      if ( !byte_40F6258 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v182);
        byte_40F6258 = 1;
      }
      v190 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v190 = TerminalPramsManager_TypeInfo;
      }
      v190->static_fields->_EventActivityPointEffectState_k__BackingField = EventActivityPointEffectState;
      isWarBoardClear = v15->fields.isWarBoardClear;
      if ( !byte_40F6074 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v182);
        v190 = TerminalPramsManager_TypeInfo;
        byte_40F6074 = 1;
      }
      if ( (BYTE3(v190->vtable._0_Equals.methodPtr) & 4) != 0 && !v190->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v190);
        v190 = TerminalPramsManager_TypeInfo;
      }
      v192 = &v190->static_fields;
      v190->static_fields->_IsWarBoardClear_k__BackingField = isWarBoardClear;
      questResultAfterEventRewardInfos = v15->fields.questResultAfterEventRewardInfos;
      if ( !questResultAfterEventRewardInfos )
        sub_B170D4();
      if ( *(_QWORD *)&questResultAfterEventRewardInfos->max_length )
        v194 = (System_Int32_array **)v15->fields.questResultAfterEventRewardInfos;
      else
        v194 = 0LL;
      if ( (BYTE3(v190->vtable._0_Equals.methodPtr) & 4) != 0 && !v190->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v190);
        v192 = &TerminalPramsManager_TypeInfo->static_fields;
      }
      p_mQuestResultAfterEventRewardInfos = (BattleServantConfConponent_o *)&(*v192)->mQuestResultAfterEventRewardInfos;
      p_mQuestResultAfterEventRewardInfos->klass = (BattleServantConfConponent_c *)v194;
      sub_B16F98(p_mQuestResultAfterEventRewardInfos, v194, v183, v184, v185, v186, v187, v188);
      resultEventPanelRewardInfos = v15->fields.resultEventPanelRewardInfos;
      if ( !resultEventPanelRewardInfos )
        sub_B170D4();
      v203 = TerminalPramsManager_TypeInfo;
      if ( *(_QWORD *)&resultEventPanelRewardInfos->max_length )
        v204 = (System_Int32_array **)v15->fields.resultEventPanelRewardInfos;
      else
        v204 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v203 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = (BattleServantConfConponent_o *)&v203->static_fields->mResultEventPanelRewardInfos;
      p_mResultEventPanelRewardInfos->klass = (BattleServantConfConponent_c *)v204;
      sub_B16F98(p_mResultEventPanelRewardInfos, v204, v196, v197, v198, v199, v200, v201);
      v213 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = v15->fields.panelEventPoint;
      limitImageAnnounces = (System_Int32_array **)v15->fields.limitImageAnnounces;
      if ( !byte_40F606B )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v206);
        v213 = TerminalPramsManager_TypeInfo;
        byte_40F606B = 1;
      }
      if ( (BYTE3(v213->vtable._0_Equals.methodPtr) & 4) != 0 && !v213->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v213);
        v213 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = (BattleServantConfConponent_o *)&v213->static_fields->_limitImageAnnounces_k__BackingField;
      p_limitImageAnnounces_k__BackingField->klass = (BattleServantConfConponent_c *)limitImageAnnounces;
      sub_B16F98(p_limitImageAnnounces_k__BackingField, limitImageAnnounces, v207, v208, v209, v210, v211, v212);
      isOrdealCallWarClear = v15->fields.isOrdealCallWarClear;
      if ( !byte_40F608E )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v216);
        byte_40F608E = 1;
      }
      v218 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v218 = TerminalPramsManager_TypeInfo;
      }
      v218->static_fields->_IsOrdealCallWarClear_k__BackingField = isOrdealCallWarClear;
      eventMuralId = v15->fields.eventMuralId;
      if ( !byte_40F6063 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v216);
        v218 = TerminalPramsManager_TypeInfo;
        byte_40F6063 = 1;
      }
      if ( (BYTE3(v218->vtable._0_Equals.methodPtr) & 4) != 0 && !v218->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v218);
        v218 = TerminalPramsManager_TypeInfo;
      }
      v218->static_fields->_EventMuralId_k__BackingField = eventMuralId;
      if ( v15->fields.phaseClear )
      {
        if ( (BYTE3(v218->vtable._0_Equals.methodPtr) & 4) != 0 && !v218->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v218);
        if ( !byte_40F604D )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v216);
          byte_40F604D = 1;
        }
        v218 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v218 = TerminalPramsManager_TypeInfo;
        }
        v218->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( (BYTE3(v218->vtable._0_Equals.methodPtr) & 4) != 0 && !v218->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v218);
      if ( !byte_40F6076 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v216);
        byte_40F6076 = 1;
      }
      v220 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v220 = TerminalPramsManager_TypeInfo;
      }
      if ( v220->static_fields->_warClearReward_k__BackingField )
        goto LABEL_304;
      if ( (BYTE3(v220->vtable._0_Equals.methodPtr) & 4) != 0 && !v220->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v220);
      if ( !byte_40F6071 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v216);
        byte_40F6071 = 1;
      }
      v220 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v220 = TerminalPramsManager_TypeInfo;
      }
      if ( v220->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_304:
        if ( (BYTE3(v220->vtable._0_Equals.methodPtr) & 4) != 0 && !v220->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v220);
        if ( !byte_40F6E55 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v216);
          byte_40F6E55 = 1;
        }
        v221 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v221 = TerminalPramsManager_TypeInfo;
        }
        v221->static_fields->_isQuestRewardSetted_k__BackingField = 1;
      }
    }
  }
}


void __fastcall TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  System_String_o *String; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  EventRaidDefeatedEffectInfo_o *v11; // x19
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6DAA & 1) == 0 )
  {
    sub_B16FFC(&EventRaidDefeatedEffectInfo_TypeInfo, v1);
    sub_B16FFC(&string_TypeInfo, v2);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_11524, v4);
    byte_40F6DAA = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E57 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E57 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11524,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v11 = (EventRaidDefeatedEffectInfo_o *)sub_B170CC(EventRaidDefeatedEffectInfo_TypeInfo, v7, v8, v9, v10);
    EventRaidDefeatedEffectInfo___ctor(v11, String, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E56 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
      byte_40F6E56 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v19->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
      (System_Int32_array **)v11,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}


void __fastcall TerminalPramsManager__LoadQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  System_String_o *String; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_Dictionary_int__int__o *v14; // x19
  __int64 v15; // x2
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array *v18; // x1
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int max_length; // w8
  System_String_array *v25; // x20
  unsigned int v26; // w24
  System_String_o *v27; // x21
  System_String_array *v28; // x21
  TerminalPramsManager_c *v29; // x0
  BattleServantConfConponent_o *p_QuestRandomGroupList_k__BackingField; // x0
  int32_t result[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F6DAF & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_B16FFC(&string_TypeInfo, v5);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11533, v7);
    byte_40F6DAF = 1;
  }
  *(_QWORD *)result = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F68A1 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F68A1 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( !v8->static_fields->_QuestRandomGroupList_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11533,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v14 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v10,
                                                                 v11,
                                                                 v12,
                                                                 v13);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v14,
      (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    v16 = sub_B17014(char___TypeInfo, 1LL, v15);
    if ( !v16 )
      goto LABEL_42;
    v18 = (System_String_array *)v16;
    if ( !*(_DWORD *)(v16 + 24) )
      goto LABEL_43;
    *(_WORD *)(v16 + 32) = 44;
    if ( !String || (v16 = (__int64)System_String__Split(String, (System_Char_array *)v16, 0LL)) == 0 )
LABEL_42:
      sub_B170D4();
    max_length = *(_DWORD *)(v16 + 24);
    v25 = (System_String_array *)v16;
    if ( max_length >= 1 )
    {
      v26 = 0;
      while ( v26 < max_length )
      {
        v27 = v25->m_Items[v26];
        v16 = sub_B17014(char___TypeInfo, 1LL, v17);
        if ( !v16 )
          goto LABEL_42;
        v18 = (System_String_array *)v16;
        if ( !*(_DWORD *)(v16 + 24) )
          break;
        *(_WORD *)(v16 + 32) = 58;
        if ( !v27 )
          goto LABEL_42;
        v16 = (__int64)System_String__Split(v27, (System_Char_array *)v16, 0LL);
        if ( !v16 )
          goto LABEL_42;
        v28 = (System_String_array *)v16;
        if ( *(int *)(v16 + 24) >= 2 )
        {
          v16 = System_Int32__TryParse(*(System_String_o **)(v16 + 32), &result[1], 0LL);
          if ( result[1] >= 1 && (v16 & 1) != 0 )
          {
            if ( v28->max_length <= 1 )
              break;
            v16 = System_Int32__TryParse(v28->m_Items[1], result, 0LL);
            v17 = (System_String_array **)(unsigned int)result[0];
            if ( result[0] >= 1 && (v16 & 1) != 0 )
            {
              if ( !v14 )
                goto LABEL_42;
              System_Collections_Generic_Dictionary_int__int___Add(
                v14,
                result[1],
                result[0],
                (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v25->max_length;
        if ( (int)++v26 >= max_length )
          goto LABEL_32;
      }
LABEL_43:
      sub_B17100(v16, v18, v17);
      sub_B170A0();
    }
LABEL_32:
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E58 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v18);
      byte_40F6E58 = 1;
    }
    v29 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v29 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = (BattleServantConfConponent_o *)&v29->static_fields->_QuestRandomGroupList_k__BackingField;
    p_QuestRandomGroupList_k__BackingField->klass = (BattleServantConfConponent_c *)v14;
    sub_B16F98(p_QuestRandomGroupList_k__BackingField, (System_Int32_array **)v14, v17, v19, v20, v21, v22, v23);
  }
}


void __fastcall TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
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
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  System_String_o *v52; // x19
  __int64 v53; // x1
  int32_t Int_34836848; // w19
  TerminalPramsManager_c *v55; // x0
  System_String_o *v56; // x19
  __int64 v57; // x1
  int32_t v58; // w19
  TerminalPramsManager_c *v59; // x0
  System_String_o *v60; // x19
  __int64 v61; // x1
  int32_t v62; // w19
  TerminalPramsManager_c *v63; // x0
  System_String_o *v64; // x19
  __int64 v65; // x1
  int32_t v66; // w19
  TerminalPramsManager_c *v67; // x0
  System_String_o *v68; // x19
  __int64 v69; // x1
  int32_t v70; // w19
  TerminalPramsManager_c *v71; // x0
  System_String_o *v72; // x19
  __int64 v73; // x1
  int32_t v74; // w19
  TerminalPramsManager_c *v75; // x0
  System_String_o *v76; // x19
  System_String_o *String_34837456; // x20
  __int64 v78; // x1
  int64_t v79; // x19
  TerminalPramsManager_c *v80; // x0
  System_String_o *v81; // x19
  __int64 v82; // x1
  int32_t v83; // w19
  TerminalPramsManager_c *v84; // x0
  System_String_o *v85; // x19
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x19
  TerminalPramsManager_c *v93; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v95; // x19
  __int64 v96; // x1
  int32_t v97; // w19
  TerminalPramsManager_c *v98; // x0
  System_String_o *v99; // x19
  __int64 v100; // x1
  int32_t v101; // w19
  TerminalPramsManager_c *v102; // x0
  System_String_o *v103; // x19
  __int64 v104; // x1
  int32_t v105; // w19
  TerminalPramsManager_c *v106; // x0
  System_String_o *v107; // x19
  __int64 v108; // x1
  int32_t v109; // w19
  TerminalPramsManager_c *v110; // x0
  System_String_o *v111; // x19
  __int64 v112; // x1
  int32_t v113; // w19
  TerminalPramsManager_c *v114; // x0
  System_String_o *v115; // x19
  __int64 v116; // x1
  int32_t v117; // w19
  TerminalPramsManager_c *v118; // x0
  System_String_o *v119; // x19
  System_String_o *v120; // x20
  __int64 v121; // x1
  int64_t v122; // x19
  TerminalPramsManager_c *v123; // x0
  System_String_o *v124; // x19
  __int64 v125; // x1
  int32_t v126; // w19
  TerminalPramsManager_c *v127; // x0
  System_String_o *v128; // x19
  __int64 v129; // x1
  int32_t v130; // w19
  TerminalPramsManager_c *v131; // x0
  System_String_o *v132; // x19
  Il2CppObject *v133; // x19
  __int64 v134; // x1
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x19
  TerminalPramsManager_c *v142; // x0
  BattleServantConfConponent_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v144; // x19
  __int64 v145; // x1
  const MethodInfo *v146; // x2
  int32_t v147; // w20
  TerminalPramsManager_c *v148; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v150; // x19
  Il2CppObject *v151; // x19
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Int32_array **v158; // x19
  TerminalPramsManager_c *v159; // x8
  BattleServantConfConponent_o *p_eventConquestInfos; // x0
  System_String_o *v161; // x19
  int32_t v162; // w19
  TerminalPramsManager_c *v163; // x8
  System_String_o *v164; // x19
  Il2CppObject *v165; // x19
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array **v172; // x19
  TerminalPramsManager_c *v173; // x8
  BattleServantConfConponent_o *p_eventHarvestGrowthInfo; // x0
  System_String_o *v175; // x19
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  System_Int32_array **v182; // x19
  TerminalPramsManager_c *v183; // x8
  BattleServantConfConponent_o *p_lastPlayBgmName; // x0
  System_String_o *v185; // x19
  int32_t v186; // w19
  TerminalPramsManager_c *v187; // x8
  System_String_o *v188; // x19
  __int64 v189; // x1
  int32_t v190; // w19
  TerminalPramsManager_c *v191; // x0
  System_String_o *v192; // x19
  int32_t v193; // w19
  TerminalPramsManager_c *v194; // x8
  System_String_o *v195; // x19
  __int64 v196; // x1
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  System_Int32_array **v203; // x19
  TerminalPramsManager_c *v204; // x0
  BattleServantConfConponent_o *p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v206; // x19
  __int64 v207; // x1
  int32_t v208; // w19
  TerminalPramsManager_c *v209; // x0
  System_String_o *v210; // x19
  __int64 v211; // x1
  int32_t v212; // w19
  TerminalPramsManager_c *v213; // x0
  System_String_o *v214; // x19
  __int64 v215; // x1
  int32_t v216; // w19
  TerminalPramsManager_c *v217; // x0
  System_String_o *v218; // x19
  __int64 v219; // x1
  int32_t v220; // w19
  TerminalPramsManager_c *v221; // x0
  System_String_o *v222; // x19
  int32_t v223; // w19
  TerminalPramsManager_c *v224; // x8
  System_String_o *v225; // x19
  int32_t v226; // w19
  TerminalPramsManager_c *v227; // x8
  System_String_o *v228; // x19
  __int64 v229; // x1
  int32_t v230; // w19
  TerminalPramsManager_c *v231; // x0
  System_String_o *v232; // x19
  __int64 v233; // x1
  System_String_array **v234; // x2
  System_String_array **v235; // x3
  System_Boolean_array **v236; // x4
  System_Int32_array **v237; // x5
  System_Int32_array *v238; // x6
  System_Int32_array *v239; // x7
  System_Int32_array **v240; // x19
  TerminalPramsManager_c *v241; // x0
  BattleServantConfConponent_o *p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v243; // x19
  System_String_o *v244; // x19
  __int64 v245; // x2
  System_String_array *v246; // x0
  __int64 v247; // x2
  System_String_array *v248; // x1
  __int64 v249; // x8
  System_String_array *v250; // x19
  int32_t v251; // w20
  TerminalPramsManager_c *v252; // x8
  int32_t v253; // w0
  int32_t v254; // w19
  TerminalPramsManager_c *v255; // x0
  System_String_o *v256; // x19
  __int64 v257; // x1
  int32_t v258; // w19
  TerminalPramsManager_c *v259; // x0
  System_String_o *v260; // x19
  __int64 v261; // x1
  int32_t v262; // w19
  TerminalPramsManager_c *v263; // x0
  System_String_o *v264; // x19
  Il2CppObject *v265; // x19
  __int64 v266; // x1
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  System_Int32_array **v273; // x19
  TerminalPramsManager_c *v274; // x0
  struct TerminalPramsManager_StaticFields *v275; // x0
  System_String_o *v276; // x19
  __int64 v277; // x1
  int32_t v278; // w19
  TerminalPramsManager_c *v279; // x0
  System_String_o *v280; // x19
  __int64 v281; // x1
  int32_t v282; // w19
  TerminalPramsManager_c *v283; // x0

  if ( (byte_40F6D74 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, v1);
    sub_B16FFC(&System_Convert_TypeInfo, v2);
    sub_B16FFC(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v3);
    sub_B16FFC(&Method_JsonManager_Deserialize_EventConquestInfo_____, v4);
    sub_B16FFC(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v5);
    sub_B16FFC(&Method_JsonManager_Deserialize_EventSaveData___, v6);
    sub_B16FFC(&JsonManager_TypeInfo, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_11525, v9);
    sub_B16FFC(&StringLiteral_13559, v10);
    sub_B16FFC(&StringLiteral_11531, v11);
    sub_B16FFC(&StringLiteral_13555, v12);
    sub_B16FFC(&StringLiteral_11519, v13);
    sub_B16FFC(&StringLiteral_11526, v14);
    sub_B16FFC(&StringLiteral_11537, v15);
    sub_B16FFC(&StringLiteral_13560, v16);
    sub_B16FFC(&StringLiteral_13557, v17);
    sub_B16FFC(&StringLiteral_13566, v18);
    sub_B16FFC(&StringLiteral_11535, v19);
    sub_B16FFC(&StringLiteral_13574, v20);
    sub_B16FFC(&StringLiteral_13558, v21);
    sub_B16FFC(&StringLiteral_11528, v22);
    sub_B16FFC(&StringLiteral_13561, v23);
    sub_B16FFC(&StringLiteral_11527, v24);
    sub_B16FFC(&StringLiteral_11532, v25);
    sub_B16FFC(&StringLiteral_11517, v26);
    sub_B16FFC(&StringLiteral_13562, v27);
    sub_B16FFC(&StringLiteral_11536, v28);
    sub_B16FFC(&StringLiteral_11520, v29);
    sub_B16FFC(&StringLiteral_11529, v30);
    sub_B16FFC(&StringLiteral_5179, v31);
    sub_B16FFC(&StringLiteral_5178, v32);
    sub_B16FFC(&StringLiteral_13569, v33);
    sub_B16FFC(&StringLiteral_11534, v34);
    sub_B16FFC(&StringLiteral_11539, v35);
    sub_B16FFC(&StringLiteral_13573, v36);
    sub_B16FFC(&StringLiteral_13578, v37);
    sub_B16FFC(&StringLiteral_13571, v38);
    sub_B16FFC(&StringLiteral_13575, v39);
    sub_B16FFC(&StringLiteral_13556, v40);
    sub_B16FFC(&StringLiteral_11518, v41);
    sub_B16FFC(&StringLiteral_11523, v42);
    sub_B16FFC(&StringLiteral_13579, v43);
    sub_B16FFC(&StringLiteral_11522, v44);
    sub_B16FFC(&StringLiteral_13563, v45);
    sub_B16FFC(&StringLiteral_11521, v46);
    sub_B16FFC(&StringLiteral_11530, v47);
    sub_B16FFC(&StringLiteral_1, v48);
    sub_B16FFC(&StringLiteral_13564, v49);
    sub_B16FFC(&StringLiteral_5177, v50);
    sub_B16FFC(&StringLiteral_11538, v51);
    byte_40F6D74 = 1;
  }
  v52 = (System_String_o *)StringLiteral_13558;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13558, 0LL) )
  {
    Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(v52, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F604C )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v53);
      byte_40F604C = 1;
    }
    v55 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v55 = TerminalPramsManager_TypeInfo;
    }
    v55->static_fields->_DispState_k__BackingField = Int_34836848;
  }
  v56 = (System_String_o *)StringLiteral_13578;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13578, 0LL) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_34836848(v56, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6046 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v57);
      byte_40F6046 = 1;
    }
    v59 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v59 = TerminalPramsManager_TypeInfo;
    }
    v59->static_fields->_WarId_k__BackingField = v58;
  }
  v60 = (System_String_o *)StringLiteral_13571;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13571, 0LL) )
  {
    v62 = UnityEngine_PlayerPrefs__GetInt_34836848(v60, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6079 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v61);
      byte_40F6079 = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v63->static_fields->_SpotId_k__BackingField = v62;
  }
  v64 = (System_String_o *)StringLiteral_13569;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13569, 0LL) )
  {
    v66 = UnityEngine_PlayerPrefs__GetInt_34836848(v64, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6048 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v65);
      byte_40F6048 = 1;
    }
    v67 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v67 = TerminalPramsManager_TypeInfo;
    }
    v67->static_fields->_QuestId_k__BackingField = v66;
  }
  v68 = (System_String_o *)StringLiteral_13564;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13564, 0LL) )
  {
    v70 = UnityEngine_PlayerPrefs__GetInt_34836848(v68, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F609A )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v69);
      byte_40F609A = 1;
    }
    v71 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v71 = TerminalPramsManager_TypeInfo;
    }
    v71->static_fields->_LastPlayedQuestId_k__BackingField = v70;
  }
  v72 = (System_String_o *)StringLiteral_13566;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13566, 0LL) )
  {
    v74 = UnityEngine_PlayerPrefs__GetInt_34836848(v72, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6049 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v73);
      byte_40F6049 = 1;
    }
    v75 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v75 = TerminalPramsManager_TypeInfo;
    }
    v75->static_fields->_PhaseCnt_k__BackingField = v74;
  }
  v76 = (System_String_o *)StringLiteral_13559;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13559, 0LL) )
  {
    String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456(v76, 0LL);
    v79 = 0LL;
    if ( System_String__op_Inequality(String_34837456, (System_String_o *)StringLiteral_1, 0LL) )
    {
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v79 = System_Convert__ToInt64_41749860(String_34837456, 0LL);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6093 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v78);
      byte_40F6093 = 1;
    }
    v80 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v80 = TerminalPramsManager_TypeInfo;
    }
    v80->static_fields->_EndTime_k__BackingField = v79;
  }
  v81 = (System_String_o *)StringLiteral_13561;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13561, 0LL) )
  {
    v83 = UnityEngine_PlayerPrefs__GetInt_34836848(v81, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F604F )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v82);
      byte_40F604F = 1;
    }
    v84 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v84 = TerminalPramsManager_TypeInfo;
    }
    v84->static_fields->_IsDoneShortcut_k__BackingField = v83 != 0;
  }
  v85 = (System_String_o *)StringLiteral_13579;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13579, 0LL) )
  {
    v92 = (System_Int32_array **)UnityEngine_PlayerPrefs__GetString_34837456(v85, 0LL);
    v93 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v93->static_fields;
    static_fields->mTerminalWarStartedIds = (struct System_String_o *)v92;
    sub_B16F98(
      (BattleServantConfConponent_o *)&static_fields->mTerminalWarStartedIds,
      v92,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  v95 = (System_String_o *)StringLiteral_5179;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5179, 0LL) )
  {
    v97 = UnityEngine_PlayerPrefs__GetInt_34836848(v95, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E10 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v96);
      byte_40F6E10 = 1;
    }
    v98 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v98 = TerminalPramsManager_TypeInfo;
    }
    v98->static_fields->mDebug_IsQuestReleaseAll = v97 != 0;
  }
  v99 = (System_String_o *)StringLiteral_5178;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5178, 0LL) )
  {
    v101 = UnityEngine_PlayerPrefs__GetInt_34836848(v99, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E11 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v100);
      byte_40F6E11 = 1;
    }
    v102 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v102 = TerminalPramsManager_TypeInfo;
    }
    v102->static_fields->mDebug_IsDummyErrorSelect = v101 != 0;
  }
  v103 = (System_String_o *)StringLiteral_5177;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5177, 0LL) )
  {
    v105 = UnityEngine_PlayerPrefs__GetInt_34836848(v103, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E12 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v104);
      byte_40F6E12 = 1;
    }
    v106 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    v106->static_fields->mDebug_IsBuildInfoDisp = v105 != 0;
  }
  v107 = (System_String_o *)StringLiteral_13574;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13574, 0LL) )
  {
    v109 = UnityEngine_PlayerPrefs__GetInt_34836848(v107, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6095 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v108);
      byte_40F6095 = 1;
    }
    v110 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v110 = TerminalPramsManager_TypeInfo;
    }
    v110->static_fields->_TimeStatusEventId_k__BackingField = v109;
  }
  v111 = (System_String_o *)StringLiteral_13575;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13575, 0LL) )
  {
    v113 = UnityEngine_PlayerPrefs__GetInt_34836848(v111, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6096 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v112);
      byte_40F6096 = 1;
    }
    v114 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v114 = TerminalPramsManager_TypeInfo;
    }
    v114->static_fields->_TimeStatusLoopCount_k__BackingField = v113;
  }
  v115 = (System_String_o *)StringLiteral_13560;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13560, 0LL) )
  {
    v117 = UnityEngine_PlayerPrefs__GetInt_34836848(v115, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E14 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v116);
      byte_40F6E14 = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_EventDailyPointEventId_k__BackingField = v117;
  }
  v119 = (System_String_o *)StringLiteral_13573;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13573, 0LL) )
  {
    v120 = UnityEngine_PlayerPrefs__GetString_34837456(v119, 0LL);
    v122 = 0LL;
    if ( !System_String__op_Equality(v120, (System_String_o *)StringLiteral_1, 0LL) )
    {
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v122 = System_Convert__ToInt64_41749860(v120, 0LL);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E15 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v121);
      byte_40F6E15 = 1;
    }
    v123 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v123 = TerminalPramsManager_TypeInfo;
    }
    v123->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v122;
  }
  v124 = (System_String_o *)StringLiteral_13555;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13555, 0LL) )
  {
    v126 = UnityEngine_PlayerPrefs__GetInt_34836848(v124, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E16 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v125);
      byte_40F6E16 = 1;
    }
    v127 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v127 = TerminalPramsManager_TypeInfo;
    }
    v127->static_fields->_BeforeEventActivityPoint_k__BackingField = v126;
  }
  v128 = (System_String_o *)StringLiteral_13556;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13556, 0LL) )
  {
    v130 = UnityEngine_PlayerPrefs__GetInt_34836848(v128, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E17 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v129);
      byte_40F6E17 = 1;
    }
    v131 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v131 = TerminalPramsManager_TypeInfo;
    }
    v131->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v130;
  }
  v132 = (System_String_o *)StringLiteral_13557;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13557, 0LL) )
  {
    v133 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34837456(v132, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v141 = (System_Int32_array **)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                    v133,
                                    (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E18 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v134);
      byte_40F6E18 = 1;
    }
    v142 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v142 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = (BattleServantConfConponent_o *)&v142->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    p_BeforeEventSubmarineSaveData_k__BackingField->klass = (BattleServantConfConponent_c *)v141;
    sub_B16F98(p_BeforeEventSubmarineSaveData_k__BackingField, v141, v135, v136, v137, v138, v139, v140);
  }
  v144 = (System_String_o *)StringLiteral_11537;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11537, 0LL) )
  {
    v147 = UnityEngine_PlayerPrefs__GetInt_34836848(v144, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E0E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v145);
      byte_40F6E0E = 1;
    }
    v148 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v148 = TerminalPramsManager_TypeInfo;
    }
    v148->static_fields->_LastSelectQuestIndex_k__BackingField = v147;
    if ( !byte_40F6044 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v145);
      v148 = TerminalPramsManager_TypeInfo;
      byte_40F6044 = 1;
    }
    if ( (BYTE3(v148->vtable._0_Equals.methodPtr) & 4) != 0 && !v148->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v148);
      v148 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v148->static_fields->_WarId_k__BackingField;
    if ( !byte_40F6E2F )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v145);
      v148 = TerminalPramsManager_TypeInfo;
      byte_40F6E2F = 1;
    }
    if ( (BYTE3(v148->vtable._0_Equals.methodPtr) & 4) != 0 && !v148->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v148);
      v148 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v148->static_fields->_LastSelectQuestIndex_k__BackingField,
      v146);
  }
  v150 = (System_String_o *)StringLiteral_11535;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11535, 0LL) )
  {
    v151 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34837456(v150, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v158 = (System_Int32_array **)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                    v151,
                                    (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v159 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v159 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = (BattleServantConfConponent_o *)&v159->static_fields->eventConquestInfos;
    p_eventConquestInfos->klass = (BattleServantConfConponent_c *)v158;
    sub_B16F98(p_eventConquestInfos, v158, v152, v153, v154, v155, v156, v157);
  }
  v161 = (System_String_o *)StringLiteral_11534;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11534, 0LL) )
  {
    v162 = UnityEngine_PlayerPrefs__GetInt_34836848(v161, 0LL);
    v163 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v163 = TerminalPramsManager_TypeInfo;
    }
    v163->static_fields->eventConquestInfoDisp = v162 != 0;
  }
  v164 = (System_String_o *)StringLiteral_11536;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11536, 0LL) )
  {
    v165 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34837456(v164, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v172 = (System_Int32_array **)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                    v165,
                                    (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v173 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v173 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = (BattleServantConfConponent_o *)&v173->static_fields->eventHarvestGrowthInfo;
    p_eventHarvestGrowthInfo->klass = (BattleServantConfConponent_c *)v172;
    sub_B16F98(p_eventHarvestGrowthInfo, v172, v166, v167, v168, v169, v170, v171);
  }
  v175 = (System_String_o *)StringLiteral_11525;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11525, 0LL) )
  {
    v182 = (System_Int32_array **)UnityEngine_PlayerPrefs__GetString_34837456(v175, 0LL);
    v183 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v183 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = (BattleServantConfConponent_o *)&v183->static_fields->lastPlayBgmName;
    p_lastPlayBgmName->klass = (BattleServantConfConponent_c *)v182;
    sub_B16F98(p_lastPlayBgmName, v182, v176, v177, v178, v179, v180, v181);
  }
  v185 = (System_String_o *)StringLiteral_11526;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11526, 0LL) )
  {
    v186 = UnityEngine_PlayerPrefs__GetInt_34836848(v185, 0LL);
    v187 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v187 = TerminalPramsManager_TypeInfo;
    }
    v187->static_fields->lastPlayQuestConsumeAp = v186;
  }
  v188 = (System_String_o *)StringLiteral_13563;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13563, 0LL) )
  {
    v190 = UnityEngine_PlayerPrefs__GetInt_34836848(v188, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F609B )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v189);
      byte_40F609B = 1;
    }
    v191 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v191 = TerminalPramsManager_TypeInfo;
    }
    v191->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v190;
  }
  v192 = (System_String_o *)StringLiteral_13562;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13562, 0LL) )
  {
    v193 = UnityEngine_PlayerPrefs__GetInt_34836848(v192, 0LL);
    v194 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v194 = TerminalPramsManager_TypeInfo;
    }
    v194->static_fields->panelEventPoint = v193;
  }
  v195 = (System_String_o *)StringLiteral_11531;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11531, 0LL) )
  {
    v203 = (System_Int32_array **)UnityEngine_PlayerPrefs__GetString_34837456(v195, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E1D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v196);
      byte_40F6E1D = 1;
    }
    v204 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v204 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = (BattleServantConfConponent_o *)&v204->static_fields->_PlayedTerminalEffects_k__BackingField;
    p_PlayedTerminalEffects_k__BackingField->klass = (BattleServantConfConponent_c *)v203;
    sub_B16F98(p_PlayedTerminalEffects_k__BackingField, v203, v197, v198, v199, v200, v201, v202);
  }
  v206 = (System_String_o *)StringLiteral_11528;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11528, 0LL) )
  {
    v208 = UnityEngine_PlayerPrefs__GetInt_34836848(v206, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E1E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v207);
      byte_40F6E1E = 1;
    }
    v209 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v209 = TerminalPramsManager_TypeInfo;
    }
    v209->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v208 != 0;
  }
  v210 = (System_String_o *)StringLiteral_11529;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11529, 0LL) )
  {
    v212 = UnityEngine_PlayerPrefs__GetInt_34836848(v210, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E1F )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v211);
      byte_40F6E1F = 1;
    }
    v213 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v213 = TerminalPramsManager_TypeInfo;
    }
    v213->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v212;
  }
  v214 = (System_String_o *)StringLiteral_11530;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11530, 0LL) )
  {
    v216 = UnityEngine_PlayerPrefs__GetInt_34836848(v214, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E20 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v215);
      byte_40F6E20 = 1;
    }
    v217 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v217 = TerminalPramsManager_TypeInfo;
    }
    v217->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v216 != 0;
  }
  v218 = (System_String_o *)StringLiteral_11539;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11539, 0LL) )
  {
    v220 = UnityEngine_PlayerPrefs__GetInt_34836848(v218, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F604A )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v219);
      byte_40F604A = 1;
    }
    v221 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v221 = TerminalPramsManager_TypeInfo;
    }
    v221->static_fields->_SelectedStoryQuestId_k__BackingField = v220;
  }
  v222 = (System_String_o *)StringLiteral_11522;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11522, 0LL) )
  {
    v223 = UnityEngine_PlayerPrefs__GetInt_34836848(v222, 0LL);
    v224 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v224 = TerminalPramsManager_TypeInfo;
    }
    v224->static_fields->ConnectMarkEventId = v223;
  }
  v225 = (System_String_o *)StringLiteral_11521;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11521, 0LL) )
  {
    v226 = UnityEngine_PlayerPrefs__GetInt_34836848(v225, 0LL);
    v227 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v227 = TerminalPramsManager_TypeInfo;
    }
    v227->static_fields->ConnectMarkAnimationId = v226;
  }
  v228 = (System_String_o *)StringLiteral_11538;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11538, 0LL) )
  {
    v230 = UnityEngine_PlayerPrefs__GetInt_34836848(v228, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F604B )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v229);
      byte_40F604B = 1;
    }
    v231 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v231 = TerminalPramsManager_TypeInfo;
    }
    v231->static_fields->_SelectedRecollectionWarId_k__BackingField = v230;
  }
  v232 = (System_String_o *)StringLiteral_11520;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11520, 0LL) )
  {
    v240 = (System_Int32_array **)UnityEngine_PlayerPrefs__GetString_34837456(v232, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F68A2 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v233);
      byte_40F68A2 = 1;
    }
    v241 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v241 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = (BattleServantConfConponent_o *)&v241->static_fields->_ClearEventQuestIds_k__BackingField;
    p_ClearEventQuestIds_k__BackingField->klass = (BattleServantConfConponent_c *)v240;
    sub_B16F98(p_ClearEventQuestIds_k__BackingField, v240, v234, v235, v236, v237, v238, v239);
  }
  v243 = (System_String_o *)StringLiteral_11527;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11527, 0LL) )
  {
    v244 = UnityEngine_PlayerPrefs__GetString_34837456(v243, 0LL);
    if ( !System_String__IsNullOrEmpty(v244, 0LL) )
    {
      v246 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v245);
      if ( v246 )
      {
        v248 = v246;
        if ( !v246->max_length )
          goto LABEL_432;
        LOWORD(v246->m_Items[0]) = 44;
        if ( v244 )
        {
          v246 = System_String__Split(v244, (System_Char_array *)v246, 0LL);
          if ( v246 )
          {
            v249 = *(_QWORD *)&v246->max_length;
            v250 = v246;
            if ( !v249 )
            {
              v251 = 0;
LABEL_357:
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_40F6E22 )
              {
                sub_B16FFC(&TerminalPramsManager_TypeInfo, v248);
                byte_40F6E22 = 1;
              }
              v252 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v252 = TerminalPramsManager_TypeInfo;
              }
              v252->static_fields->_MapModelClearQuestId_k__BackingField = v251;
              if ( (int)v250->max_length < 2 )
              {
                v254 = 0;
              }
              else
              {
                v253 = System_Int32__Parse(v250->m_Items[1], 0LL);
                v252 = TerminalPramsManager_TypeInfo;
                v254 = v253;
              }
              if ( (BYTE3(v252->vtable._0_Equals.methodPtr) & 4) != 0 && !v252->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v252);
              if ( !byte_40F6E23 )
              {
                sub_B16FFC(&TerminalPramsManager_TypeInfo, v248);
                byte_40F6E23 = 1;
              }
              v255 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v255 = TerminalPramsManager_TypeInfo;
              }
              v255->static_fields->_MapModelClearPhaseCount_k__BackingField = v254;
              goto LABEL_377;
            }
            if ( (_DWORD)v249 )
            {
              v251 = System_Int32__Parse(v246->m_Items[0], 0LL);
              goto LABEL_357;
            }
LABEL_432:
            sub_B17100(v246, v248, v247);
            sub_B170A0();
          }
        }
      }
      sub_B170D4();
    }
  }
LABEL_377:
  v256 = (System_String_o *)StringLiteral_11523;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11523, 0LL) )
  {
    v258 = UnityEngine_PlayerPrefs__GetInt_34836848(v256, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E24 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v257);
      byte_40F6E24 = 1;
    }
    v259 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v259 = TerminalPramsManager_TypeInfo;
    }
    v259->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v258 != 0;
  }
  v260 = (System_String_o *)StringLiteral_11532;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11532, 0LL) )
  {
    v262 = UnityEngine_PlayerPrefs__GetInt_34836848(v260, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E2B )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v261);
      byte_40F6E2B = 1;
    }
    v263 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v263 = TerminalPramsManager_TypeInfo;
    }
    v263->static_fields->_PlayerGenderType_k__BackingField = v262;
  }
  v264 = (System_String_o *)StringLiteral_11519;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11519, 0LL) )
  {
    v265 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34837456(v264, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v273 = (System_Int32_array **)JsonManager__Deserialize_TerminalPramsManager_ClearData_(
                                    v265,
                                    (const MethodInfo_19D6740 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E2E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v266);
      byte_40F6E2E = 1;
    }
    v274 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v274 = TerminalPramsManager_TypeInfo;
    }
    v275 = v274->static_fields;
    v275->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v273;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v275->_CampaignDirectBonus_k__BackingField,
      v273,
      v267,
      v268,
      v269,
      v270,
      v271,
      v272);
  }
  v276 = (System_String_o *)StringLiteral_11518;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11518, 0LL) )
  {
    v278 = UnityEngine_PlayerPrefs__GetInt_34836848(v276, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E08 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v277);
      byte_40F6E08 = 1;
    }
    v279 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v279 = TerminalPramsManager_TypeInfo;
    }
    v279->static_fields->_BlankEarthSpotId_k__BackingField = v278;
  }
  v280 = (System_String_o *)StringLiteral_11517;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11517, 0LL) )
  {
    v282 = UnityEngine_PlayerPrefs__GetInt_34836848(v280, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E30 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v281);
      byte_40F6E30 = 1;
    }
    v283 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v283 = TerminalPramsManager_TypeInfo;
    }
    v283->static_fields->_BlankEarthRank_k__BackingField = v282;
  }
}


TerminalTransitionInfo_o *__fastcall TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *v4; // x20
  __int64 v5; // x19
  int32_t Int_34836848; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  int32_t v11; // w20
  System_String_o *v12; // x20
  System_Int32_array **String_34837456; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F6D75 & 1) == 0 )
  {
    sub_B16FFC(&TerminalTransitionInfo_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_13577, v2);
    sub_B16FFC(&StringLiteral_13576, v3);
    byte_40F6D75 = 1;
  }
  v4 = (System_String_o *)StringLiteral_13576;
  v5 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13576, 0LL) )
  {
    Int_34836848 = UnityEngine_PlayerPrefs__GetInt_34836848(v4, 0LL);
    if ( Int_34836848 < 1 )
    {
      return 0LL;
    }
    else
    {
      v11 = Int_34836848;
      v5 = sub_B170CC(TerminalTransitionInfo_TypeInfo, v7, v8, v9, v10);
      TerminalTransitionInfo___ctor((TerminalTransitionInfo_o *)v5, 0LL);
      if ( !v5 )
        sub_B170D4();
      *(_DWORD *)(v5 + 16) = v11;
      v12 = (System_String_o *)StringLiteral_13577;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13577, 0LL) )
      {
        String_34837456 = (System_Int32_array **)UnityEngine_PlayerPrefs__GetString_34837456(v12, 0LL);
        *(_QWORD *)(v5 + 40) = String_34837456;
        sub_B16F98((BattleServantConfConponent_o *)(v5 + 40), String_34837456, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  return (TerminalTransitionInfo_o *)v5;
}


void __fastcall TerminalPramsManager__MapModelClearQuestInfo_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x19
  TerminalPramsManager_c *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F6D8E & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11527, v2);
    sub_B16FFC(&StringLiteral_698, v3);
    byte_40F6D8E = 1;
  }
  MapModelClearQuestId_k__BackingField = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F606D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F606D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v4->static_fields->_MapModelClearQuestId_k__BackingField;
  v6 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_40F606E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F606E = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v7->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v8 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v9 = System_String__Concat_43746016(v6, (System_String_o *)StringLiteral_698, v8, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11527, v9, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0

  if ( (byte_40F6D7B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11537, v2);
    sub_B16FFC(&StringLiteral_13563, v3);
    sub_B16FFC(&StringLiteral_13564, v4);
    byte_40F6D7B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E3C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E3C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13564,
    v5->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_40F6E2F )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    byte_40F6E2F = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11537,
    v7->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_40F6E3D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    byte_40F6E3D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13563,
    v9->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlaySystemSE(int32_t seKind, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x0
  __int16 v5; // w8
  int v6; // w8
  TerminalPramsManager_c *v7; // x0

  if ( (byte_40F6D70 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    byte_40F6D70 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E0D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6E0D = 1;
  }
  v4 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  v5 = WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v5 & 0x400) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      v5 = WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v6 = v5 & 0x400;
  }
  else
  {
    v6 = 0;
  }
  if ( BYTE3(v4[2].klass->vtable[22].method) )
  {
    if ( v6 && !v4[2].token )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_40F696C )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
      byte_40F696C = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_IsAutoNoSe_k__BackingField = 0;
  }
  else
  {
    if ( v6 && !v4[2].token )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !TerminalPramsManager__IsAuto(v4) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(seKind, 0LL);
    }
  }
}


void __fastcall TerminalPramsManager__PlayedTerminalEffectsSave_SaveData(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  TerminalPramsManager_c *v12; // x0
  System_Int32_array **v13; // x19
  TerminalPramsManager_c *v14; // x0
  BattleServantConfConponent_o *p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v16; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x19
  System_String_o *v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x19
  TerminalPramsManager_c *v27; // x0
  BattleServantConfConponent_o *v28; // x0
  const MethodInfo *v29; // x0
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  v30 = effectId;
  if ( (byte_40F6D96 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_26, v3);
    sub_B16FFC(&StringLiteral_1, v4);
    byte_40F6D96 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !TerminalPramsManager__IsTerminalEffectPlayed(effectId, method) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E37 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
      byte_40F6E37 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    if ( !v12->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v12);
      v13 = (System_Int32_array **)StringLiteral_1;
      if ( !byte_40F6E1D )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
        byte_40F6E1D = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = (BattleServantConfConponent_o *)&v14->static_fields->_PlayedTerminalEffects_k__BackingField;
      p_PlayedTerminalEffects_k__BackingField->klass = (BattleServantConfConponent_c *)v13;
      sub_B16F98(p_PlayedTerminalEffects_k__BackingField, v13, v6, v7, v8, v9, v10, v11);
      v12 = TerminalPramsManager_TypeInfo;
    }
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    if ( !byte_40F6E37 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
      byte_40F6E37 = 1;
    }
    v16 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v16 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v16->static_fields->_PlayedTerminalEffects_k__BackingField;
    v18 = System_Int32__ToString((int32_t)&v30, 0LL);
    v26 = (System_Int32_array **)System_String__Concat_43746016(
                                   PlayedTerminalEffects_k__BackingField,
                                   v18,
                                   (System_String_o *)StringLiteral_26,
                                   0LL);
    if ( !byte_40F6E1D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v19);
      byte_40F6E1D = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v28 = (BattleServantConfConponent_o *)&v27->static_fields->_PlayedTerminalEffects_k__BackingField;
    v28->klass = (BattleServantConfConponent_c *)v26;
    sub_B16F98(v28, v26, v20, v21, v22, v23, v24, v25);
    TerminalPramsManager__Save_SaveData(v29);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D90 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11532, v2);
    byte_40F6D90 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E3B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E3B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11532,
    v3->static_fields->_PlayerGenderType_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__ReceiveQuestEndResultInfo(
        BattleResultComponent_resultData_array *result,
        bool isWin,
        const MethodInfo *method)
{
  bool v3; // w21
  BattleResultComponent_resultData_array *v4; // x20
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
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
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  BattleResultComponent_resultData_o *v59; // x8
  BattleResultComponent_resultData_o **m_Items; // x19
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v62; // x22
  WebViewManager_o *Instance; // x0
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct UserServantCollectionEntity_array *v69; // x19
  int max_length; // w8
  UserServantCollectionMaster_o *v71; // x20
  __int64 v72; // x26
  UserServantCollectionEntity_o *v73; // x27
  int64_t UserId; // x0
  int64_t v75; // x23
  __int64 v76; // x24
  __int64 v77; // x25
  int32_t v78; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  UserServantCollectionEntity_o *v84; // x24
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  _DWORD *v90; // x23
  BattleServantConfConponent_o *v91; // x23
  TerminalPramsManager_c *v92; // x0
  BattleResultComponent_resultData_o **v93; // x27
  BattleServantConfConponent_o *p_mQuestClearHeroineInfo; // x0
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v100; // x8
  struct UserServantEntity_array *oldUserSvt; // x9
  __int64 v102; // x10
  UserServantEntity_o *v103; // x19
  WebViewManager_o *v104; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v106; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v107; // x23
  int64_t v108; // x0
  UserServantEntity_o *v109; // x24
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  __int64 v114; // x23
  __int64 v115; // x25
  __int64 v116; // x26
  WebViewManager_o *v117; // x0
  UserServantCollectionMaster_o *v118; // x25
  int64_t v119; // x0
  __int64 v120; // x27
  __int64 v121; // x28
  int64_t v122; // x26
  int32_t v123; // w0
  __int64 v124; // x3
  __int64 v125; // x4
  int v126; // w8
  UserServantCollectionEntity_o *v127; // x26
  int v128; // w9
  UserServantCollectionEntity_o *v129; // x25
  BattleResultComponent_resultData_array *v130; // x21
  int32_t SvtId; // w0
  __int64 v132; // x21
  __int64 v133; // x28
  int32_t v134; // w27
  bool v135; // zf
  __int64 v136; // x22
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  int32_t LimitCount; // w0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  bool v150; // w9
  int32_t FriendShipRank; // w0
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v153; // x21
  __int64 v154; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v155; // x23
  int32_t v156; // w0
  int32_t lastQuestId; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v159; // x0
  BattleServantConfConponent_o *v160; // x0
  struct UserQuestEntity_array *oldUserQuest; // x8
  __int64 v162; // x9
  UserQuestEntity_o *v163; // x28
  TerminalPramsManager_c *v164; // x8
  TerminalPramsManager_c *v165; // x0
  int32_t questId; // w19
  TerminalPramsManager_c *v167; // x0
  __int64 v168; // x1
  int32_t QuestPhase; // w23
  TerminalPramsManager_c *v170; // x0
  int32_t v171; // w23
  WebViewManager_o *v172; // x0
  UserQuestMaster_o *v173; // x24
  int64_t v174; // x0
  UserQuestEntity_o *v175; // x0
  UserQuestEntity_o *v176; // x25
  int32_t v177; // w24
  __int64 v178; // x1
  bool v179; // w19
  TerminalPramsManager_c *v180; // x0
  AdManager_o *v181; // x0
  const MethodInfo *v182; // x2
  TerminalPramsManager_c *v183; // x0
  WebViewManager_o *v184; // x0
  QuestMessageMaster_o *v185; // x0
  System_String_o *ValidMessage; // x0
  TerminalPramsManager_c *v187; // x8
  int32_t v188; // w24
  WebViewManager_o *v189; // x0
  WarMaster_o *v190; // x0
  const MethodInfo *v191; // x1
  WarEntity_o *v192; // x23
  TerminalPramsManager_c *v193; // x0
  __int64 v194; // x1
  TerminalPramsManager_c *v195; // x0
  char v196; // w8
  TerminalPramsManager_c *v197; // x0
  AdManager_o *v198; // x0
  AdManager_o *v199; // x0
  const MethodInfo *v200; // x1
  __int64 v201; // x1
  bool HasFlag; // w0
  __int64 v203; // x1
  BattleServantConfConponent_o *p_mQuestRewardInfos; // x0
  System_String_array **v205; // x3
  System_Boolean_array **v206; // x4
  System_Int32_array **v207; // x5
  System_Int32_array *v208; // x6
  System_Int32_array *v209; // x7
  BattleServantConfConponent_c *rewardInfos; // x23
  TerminalPramsManager_c *v211; // x0
  BattleServantConfConponent_o *v212; // x0
  TerminalPramsManager_c *v213; // x0
  BattleServantConfConponent_o *p_mQuestPhaseRewardInfos; // x0
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  BattleServantConfConponent_c *resultQuestPhaseRewardInfos; // x23
  TerminalPramsManager_c *v221; // x0
  BattleServantConfConponent_o *v222; // x0
  TerminalPramsManager_c *v223; // x0
  BattleServantConfConponent_o *p_mQuestResultAfterEventRewardInfos; // x0
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  __int64 v230; // x8
  BattleServantConfConponent_c *resultAfterEventRewardInfos; // x23
  TerminalPramsManager_c *v232; // x0
  BattleServantConfConponent_o *v233; // x0
  TerminalPramsManager_c *v234; // x0
  int32_t panelEventPoint; // w19
  BattleServantConfConponent_o *p_mResultEventPanelRewardInfos; // x0
  System_String_array **v237; // x3
  System_Boolean_array **v238; // x4
  System_Int32_array **v239; // x5
  System_Int32_array *v240; // x6
  System_Int32_array *v241; // x7
  BattleServantConfConponent_c *resultEventPanelRewardInfos; // x23
  TerminalPramsManager_c *v243; // x0
  BattleServantConfConponent_o *v244; // x0
  TerminalPramsManager_c *v245; // x0
  BattleServantConfConponent_o *p_eventConquestInfos; // x0
  System_String_array **v247; // x3
  System_Boolean_array **v248; // x4
  System_Int32_array **v249; // x5
  System_Int32_array *v250; // x6
  System_Int32_array *v251; // x7
  struct TerminalPramsManager_StaticFields **p_static_fields; // x8
  __int64 v253; // x9
  BattleServantConfConponent_c *eventConquestInfos; // x23
  BattleServantConfConponent_o *v255; // x0
  int32_t v256; // w23
  WebViewManager_o *v257; // x0
  WarMaster_o *v258; // x0
  WarEntity_o *v259; // x0
  __int64 v260; // x1
  int32_t id; // w19
  WebViewManager_o *v262; // x0
  EventRaidMaster_o *v263; // x23
  WebViewManager_o *v264; // x0
  System_String_array **v265; // x3
  System_Boolean_array **v266; // x4
  System_Int32_array **v267; // x5
  System_Int32_array *v268; // x6
  System_Int32_array *v269; // x7
  signed int v270; // w9
  BattleResultComponent_resultData_array *v271; // x24
  int v272; // w8
  Il2CppClass **v273; // x8
  Il2CppClass *v274; // x25
  int32_t RaidGroupDeadQuestId; // w26
  clsQuestCheck_o *v276; // x0
  signed int v277; // w9
  BattleResultComponent_resultData_array *v278; // x26
  int v279; // w8
  int v280; // w22
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t name_high; // w22
  signed int v283; // w9
  BattleResultComponent_resultData_array *v284; // x24
  int v285; // w8
  BattleResultComponent_resultData_o *v286; // x19
  int32_t RaidDeadQuestId; // w25
  struct TerminalPramsManager_StaticFields *v288; // x8
  int32_t eventActivityPointAddFlag; // w19
  TerminalPramsManager_c *v290; // x0
  TerminalPramsManager_c *v291; // x8
  bool v292; // w19
  TerminalPramsManager_c *v293; // x0
  int32_t v294; // w19
  int32_t v295; // w21
  clsQuestCheck_o *v296; // x0
  struct UserEventPointEntity_array *oldUserEventPoint; // x8
  int v298; // w9
  char *v299; // x21
  char *v300; // x22
  int v301; // w11
  UserEventPointEntity_o *v302; // x28
  int32_t eventId; // w23
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v305; // x0
  TerminalPramsManager_c *v306; // x0
  EventSaveData_o *v307; // x23
  __int64 v308; // x1
  System_String_array **v309; // x2
  System_String_array **v310; // x3
  System_Boolean_array **v311; // x4
  System_Int32_array **v312; // x5
  System_Int32_array *v313; // x6
  System_Int32_array *v314; // x7
  TerminalPramsManager_c *v315; // x0
  BattleServantConfConponent_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v317; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x8
  EventSaveData_o *v319; // x0
  System_String_array *ValueByArray; // x0
  int v321; // w8
  System_String_o **v322; // x9
  System_String_o *v323; // x25
  System_String_o **v324; // x9
  System_String_o *v325; // x23
  __int64 *v326; // x8
  int32_t v327; // w21
  __int64 v328; // x1
  __int64 v329; // x2
  __int64 v330; // x3
  __int64 v331; // x4
  System_Collections_Generic_List_QuestReleaseEntity__o *QuestReleaseList; // x26
  TerminalPramsManager___c_c *v333; // x8
  struct TerminalPramsManager___c_StaticFields *v334; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__600_0; // x24
  Il2CppObject *v336; // x21
  struct TerminalPramsManager___c_StaticFields *v337; // x0
  System_String_array **v338; // x2
  System_String_array **v339; // x3
  System_Boolean_array **v340; // x4
  System_Int32_array **v341; // x5
  System_Int32_array *v342; // x6
  System_Int32_array *v343; // x7
  __int64 v344; // x1
  TerminalPramsManager_c *v345; // x0
  TerminalPramsManager_c *v346; // x0
  struct EventSaveData_o *v347; // x26
  System_String_o *v348; // x21
  System_Int32_array **SaveData_21931300; // x0
  System_String_array **v350; // x2
  System_String_array **v351; // x3
  System_Boolean_array **v352; // x4
  System_Int32_array **v353; // x5
  System_Int32_array *v354; // x6
  System_Int32_array *v355; // x7
  TerminalPramsManager_c *v356; // x0
  int32_t v357; // w23
  int32_t PhaseCnt_k__BackingField; // w24
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v360; // x0
  BattleResultComponent_resultData_o **v361; // x22
  UserQuestEntity_o *v362; // x24
  WebViewManager_o *v363; // x0
  __int64 v364; // x1
  QuestMaster_o *v365; // x23
  TerminalPramsManager_c *v366; // x0
  QuestEntity_o *QuestEntity; // x0
  int32_t type; // w21
  TerminalPramsManager_c *v369; // x0
  BattleServantConfConponent_o *p_questClearCostumeRelease_k__BackingField; // x0
  System_String_array **v371; // x3
  System_Boolean_array **v372; // x4
  System_Int32_array **v373; // x5
  System_Int32_array *v374; // x6
  System_Int32_array *v375; // x7
  struct CostumeReleaseAnnounce_array *costumeReleaseAnnounce; // x8
  System_Int32_array **v377; // x23
  TerminalPramsManager_c *v378; // x0
  BattleServantConfConponent_o *v379; // x0
  TerminalPramsManager_c *v380; // x0
  BattleServantConfConponent_o *p_questClearCostumeGet_k__BackingField; // x0
  System_String_array **v382; // x3
  System_Boolean_array **v383; // x4
  System_Int32_array **v384; // x5
  System_Int32_array *v385; // x6
  System_Int32_array *v386; // x7
  BattleServantConfConponent_c *costumeGetAnnounce; // x23
  TerminalPramsManager_c *v388; // x0
  BattleServantConfConponent_o *v389; // x0
  TerminalPramsManager_c *v390; // x0
  struct TerminalPramsManager_StaticFields *v391; // x0
  System_String_array **v392; // x3
  System_Boolean_array **v393; // x4
  System_Int32_array **v394; // x5
  System_Int32_array *v395; // x6
  System_Int32_array *v396; // x7
  TerminalPramsManager_c *v397; // x0
  bool v398; // w28
  int32_t v399; // w23
  WebViewManager_o *v400; // x0
  QuestGroupMaster_o *v401; // x0
  QuestGroupMaster_o *v402; // x24
  int32_t GroupId; // w0
  TerminalPramsManager_c *v404; // x8
  int32_t v405; // w25
  int v406; // w24
  WebViewManager_o *v407; // x0
  QuestReleaseMaster_o *v408; // x25
  WebViewManager_o *v409; // x0
  EventPointEntity_o *v410; // x24
  bool IsGroupOnGroup1; // w0
  int32_t v412; // w23
  struct TerminalPramsManager_StaticFields *v413; // x8
  struct EventPointWinReward_array *eventPointWinReward; // x8
  __int64 v415; // x9
  System_Int32_array **v416; // x23
  TerminalPramsManager_c *v417; // x0
  struct TerminalPramsManager_StaticFields *v418; // x0
  bool v419; // w9
  BattleResultComponent_resultData_o **v420; // x28
  int32_t v421; // w19
  TerminalPramsManager_c *v422; // x0
  TerminalPramsManager_c *v423; // x0
  struct TerminalPramsManager_StaticFields *v424; // x0
  System_String_array **v425; // x3
  System_Boolean_array **v426; // x4
  System_Int32_array **v427; // x5
  System_Int32_array *v428; // x6
  System_Int32_array *v429; // x7
  __int64 v430; // x8
  struct EventRaceBoostInfo_o *raceResult; // x22
  TerminalPramsManager_c *v432; // x0
  struct TerminalPramsManager_StaticFields *v433; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfos; // x19
  struct EventTowerReward_array *eventTowerReward; // x9
  __int64 v436; // x10
  EventTowerReward_o *v437; // x22
  TerminalPramsManager_c *v438; // x0
  BattleServantConfConponent_o *p_eventTowerReward_k__BackingField; // x0
  System_String_array **v440; // x3
  System_Boolean_array **v441; // x4
  System_Int32_array **v442; // x5
  System_Int32_array *v443; // x6
  System_Int32_array *v444; // x7
  System_Int32_array **resultEventTowerRewardInfos; // x22
  TerminalPramsManager_c *v446; // x0
  BattleServantConfConponent_o *p_resultEventTowerRewardInfo_k__BackingField; // x0
  BattleServantConfConponent_c *resultBoostItemRewardInfos; // x22
  TerminalPramsManager_c *v449; // x0
  BattleServantConfConponent_o *p_resultBoostItemRewardInfo_k__BackingField; // x0
  BattleServantConfConponent_c *v451; // x22
  TerminalPramsManager_c *v452; // x0
  BattleServantConfConponent_o *p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  BattleServantConfConponent_c *warClearReward; // x22
  TerminalPramsManager_c *v455; // x0
  BattleServantConfConponent_o *p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v457; // x0
  struct TerminalPramsManager_StaticFields *v458; // x0
  __int64 v459; // x1
  System_String_array **v460; // x2
  System_String_array **v461; // x3
  System_Boolean_array **v462; // x4
  System_Int32_array **v463; // x5
  System_Int32_array *v464; // x6
  System_Int32_array *v465; // x7
  TerminalPramsManager_c *v466; // x0
  struct TerminalPramsManager_StaticFields *v467; // x0
  __int64 v468; // x1
  QuestTree_o *v469; // x22
  TerminalPramsManager_c *v470; // x0
  int32_t WarID_ByQuestID; // w21
  QuestTree_o *v472; // x0
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v474; // w22
  DataMasterBase_WarMaster__WarEntity__int__o *v475; // x0
  System_String_array **v476; // x3
  System_Boolean_array **v477; // x4
  System_Int32_array **v478; // x5
  System_Int32_array *v479; // x6
  System_Int32_array *v480; // x7
  __int64 v481; // x8
  System_Int32_array **oldUserEventSuperBoss; // x21
  TerminalPramsManager_c *v483; // x0
  struct TerminalPramsManager_StaticFields *v484; // x0
  BattleServantConfConponent_o *p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v486; // x0
  struct TerminalPramsManager_StaticFields *v487; // x0
  TerminalPramsManager_c *v488; // x0
  struct UserSuperBossEntity_array *oldPersonalBoss_k__BackingField; // x8
  bool v490; // w19
  BalanceConfig_c *v491; // x8
  int32_t v492; // w19
  TerminalPramsManager_c *v493; // x0
  __int64 v494; // x1
  TerminalPramsManager_c *v495; // x0
  BalanceConfig_c *v496; // x8
  int32_t v497; // w21
  TerminalPramsManager_c *v498; // x0
  BalanceConfig_c *v499; // x8
  int32_t v500; // w23
  TerminalPramsManager_c *v501; // x0
  BalanceConfig_c *v502; // x8
  int32_t v503; // w21
  UserSuperBossMaster_o *v504; // x21
  int64_t v505; // x23
  __int64 v506; // x2
  System_String_array **v507; // x3
  System_Boolean_array **v508; // x4
  System_Int32_array **v509; // x5
  System_Int32_array *v510; // x6
  System_Int32_array *v511; // x7
  System_Int32_array **v512; // x22
  BattleResultComponent_resultData_array *v513; // x21
  __int64 v514; // x1
  System_String_array **v515; // x2
  System_String_array **v516; // x3
  System_Boolean_array **v517; // x4
  System_Int32_array **v518; // x5
  System_Int32_array *v519; // x6
  System_Int32_array *v520; // x7
  TerminalPramsManager_c *v521; // x0
  struct TerminalPramsManager_StaticFields *v522; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v524; // x21
  WebViewManager_o *v525; // x0
  __int64 v526; // x1
  QuestMaster_o *v527; // x22
  TerminalPramsManager_c *v528; // x0
  int32_t ScriptQuestId; // w22
  __int64 v530; // x1
  WebViewManager_o *v531; // x23
  TerminalPramsManager_c *v532; // x0
  int32_t v533; // w28
  int32_t winResult; // w24
  System_String_o *ScriptName_BattleEnd2; // x0
  System_String_array **v536; // x2
  System_String_array **v537; // x3
  System_Boolean_array **v538; // x4
  System_Int32_array **v539; // x5
  System_Int32_array *v540; // x6
  System_Int32_array *v541; // x7
  __int64 v542; // x1
  WebViewManager_o *v543; // x23
  TerminalPramsManager_c *v544; // x0
  int32_t v545; // w24
  int32_t v546; // w21
  System_String_o *ScriptName_BattleEnd; // x0
  TerminalPramsManager_c *v548; // x0
  BattleServantConfConponent_o *p_lastPlayBgmName; // x0
  System_Int32_array **v550; // x1
  const MethodInfo *v551; // x0
  WebViewManager_o *v552; // x0
  __int64 v553; // x1
  QuestPhaseMaster_o *v554; // x21
  TerminalPramsManager_c *v555; // x0
  int32_t v556; // w22
  TerminalPramsManager_c *v557; // x0
  SpecifiedSceneInfo_o *SpecifiedChangeSceneInfo_k__BackingField; // x0
  int32_t v559; // w22
  TerminalPramsManager_c *v560; // x0
  int32_t v561; // w23
  __int64 v562; // x1
  System_String_array **v563; // x2
  System_String_array **v564; // x3
  System_Boolean_array **v565; // x4
  System_Int32_array **v566; // x5
  System_Int32_array *v567; // x6
  System_Int32_array *v568; // x7
  System_Int32_array **SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v570; // x0
  struct TerminalPramsManager_StaticFields *v571; // x0
  TerminalPramsManager_c *v572; // x8
  const MethodInfo *v573; // x0
  System_String_array **v574; // x3
  System_Boolean_array **v575; // x4
  System_Int32_array **v576; // x5
  System_Int32_array *v577; // x6
  System_Int32_array *v578; // x7
  int32_t eventMuralId; // w19
  TerminalPramsManager_c *v580; // x0
  BattleServantConfConponent_o *p_eventHarvestGrowthInfo; // x0
  __int64 v582; // x1
  TerminalPramsManager_c *v583; // x0
  QuestPhaseEntity_o *v584; // x0
  QuestPhaseEntity_o *v585; // x22
  int32_t ScriptIntParam; // w24
  int32_t v587; // w0
  __int64 v588; // x1
  __int64 v589; // x2
  __int64 v590; // x3
  __int64 v591; // x4
  int32_t v592; // w25
  EventHarvestGrowthInfo_o *v593; // x23
  System_String_array **v594; // x2
  System_String_array **v595; // x3
  System_Boolean_array **v596; // x4
  System_Int32_array **v597; // x5
  System_Int32_array *v598; // x6
  System_Int32_array *v599; // x7
  int32_t phase; // w8
  TerminalPramsManager_c *v601; // x0
  BattleServantConfConponent_o *v602; // x0
  WebViewManager_o *v603; // x0
  __int64 v604; // x1
  QuestMaster_o *v605; // x22
  TerminalPramsManager_c *v606; // x0
  QuestEntity_o *v607; // x0
  System_String_array **v608; // x3
  System_Boolean_array **v609; // x4
  System_Int32_array **v610; // x5
  System_Int32_array *v611; // x6
  System_Int32_array *v612; // x7
  QuestEntity_o *v613; // x22
  TerminalPramsManager_c *v614; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v617; // x21
  TerminalPramsManager_c *v618; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v620; // x0
  __int64 v621; // x1
  System_String_o *v622; // x21
  TerminalPramsManager_c *v623; // x0
  System_String_o *v624; // x0
  __int64 v625; // x1
  System_String_array **v626; // x2
  System_String_array **v627; // x3
  System_Boolean_array **v628; // x4
  System_Int32_array **v629; // x5
  System_Int32_array *v630; // x6
  System_Int32_array *v631; // x7
  System_Int32_array **v632; // x21
  TerminalPramsManager_c *v633; // x0
  BattleServantConfConponent_o *p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  BattleServantConfConponent_c *limitImageAnnounces; // x21
  TerminalPramsManager_c *v636; // x0
  BattleServantConfConponent_o *p_limitImageAnnounces_k__BackingField; // x0
  __int64 v638; // x1
  System_String_array *v639; // x21
  TerminalPramsManager_c *v640; // x0
  char *v641; // x24
  System_String_array **v642; // x3
  System_Boolean_array **v643; // x4
  System_Int32_array **v644; // x5
  System_Int32_array *v645; // x6
  System_Int32_array *v646; // x7
  System_Int32_array **v647; // x22
  System_String_array **v648; // x3
  System_Boolean_array **v649; // x4
  System_Int32_array **v650; // x5
  System_Int32_array *v651; // x6
  System_Int32_array *v652; // x7
  __int64 v653; // x1
  TerminalPramsManager_c *v654; // x0
  System_String_array **v655; // x3
  System_Boolean_array **v656; // x4
  System_Int32_array **v657; // x5
  System_Int32_array *v658; // x6
  System_Int32_array *v659; // x7
  System_Int32_array **v660; // x22
  System_String_array **v661; // x3
  System_Boolean_array **v662; // x4
  System_Int32_array **v663; // x5
  System_Int32_array *v664; // x6
  System_Int32_array *v665; // x7
  __int64 v666; // x1
  TerminalPramsManager_c *v667; // x0
  System_String_array **v668; // x3
  System_Boolean_array **v669; // x4
  System_Int32_array **v670; // x5
  System_Int32_array *v671; // x6
  System_Int32_array *v672; // x7
  System_Int32_array **v673; // x22
  System_String_array **v674; // x3
  System_Boolean_array **v675; // x4
  System_Int32_array **v676; // x5
  System_Int32_array *v677; // x6
  System_Int32_array *v678; // x7
  __int64 v679; // x1
  TerminalPramsManager_c *v680; // x0
  System_String_array **v681; // x3
  System_Boolean_array **v682; // x4
  System_Int32_array **v683; // x5
  System_Int32_array *v684; // x6
  System_Int32_array *v685; // x7
  System_Int32_array **v686; // x22
  System_String_o *v687; // x0
  const MethodInfo *v688; // x1
  const MethodInfo *v689; // x0
  const MethodInfo *v690; // x0
  const MethodInfo *v691; // x0
  const MethodInfo *v692; // x0
  const MethodInfo *v693; // x0
  __int64 v694; // x1
  TerminalPramsManager_c *v695; // x0
  TerminalPramsManager_c *v696; // x0
  System_String_o *isLastGoalPlayed; // [xsp+0h] [xbp-110h]
  bool v698; // [xsp+Ch] [xbp-104h]
  BattleResultComponent_resultData_array *resulta; // [xsp+10h] [xbp-100h]
  UserQuestEntity_o *v700; // [xsp+18h] [xbp-F8h]
  BattleResultComponent_resultData_o **v701; // [xsp+20h] [xbp-F0h]
  il2cpp_array_size_t *p_max_length; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v703; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v704; // [xsp+50h] [xbp-C0h]
  char v705[4]; // [xsp+7Ch] [xbp-94h] BYREF
  UserSuperBossEntity_o *v706; // [xsp+80h] [xbp-90h] BYREF
  WarEntity_o *v707; // [xsp+88h] [xbp-88h] BYREF
  int QuestId_k__BackingField; // [xsp+94h] [xbp-7Ch] BYREF
  WarEntity_o *v709; // [xsp+98h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  int v711; // [xsp+ACh] [xbp-64h] BYREF
  QuestPhaseEntity_o *v712; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v713; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v714; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v715; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v716; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v717; // 0:x0.16

  v3 = isWin;
  v4 = result;
  if ( (byte_40F6D9E & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isWin);
    sub_B16FFC(&CondType_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMessageMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMaster_UserSuperBossMaster___, v21);
    sub_B16FFC(&DataManager_TypeInfo, v22);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v24);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v25);
    sub_B16FFC(&EventHarvestGrowthInfo_TypeInfo, v26);
    sub_B16FFC(&EventSaveData_TypeInfo, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v28);
    sub_B16FFC(&NetworkManager_TypeInfo, v29);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_B16FFC(&Method_System_Predicate_QuestReleaseEntity___ctor__, v32);
    sub_B16FFC(&System_Predicate_QuestReleaseEntity__TypeInfo, v33);
    sub_B16FFC(&QuestClearHeroineInfo_TypeInfo, v34);
    sub_B16FFC(&ScriptManager_TypeInfo, v35);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v36);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v37);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v39);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v40);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v41);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v42);
    sub_B16FFC(&string___TypeInfo, v43);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v44);
    sub_B16FFC(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v45);
    sub_B16FFC(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__600_0__, v46);
    sub_B16FFC(&TerminalPramsManager___c_TypeInfo, v47);
    sub_B16FFC(&UserServantCollectionEntity___TypeInfo, v48);
    sub_B16FFC(&UserServantCollectionEntity_TypeInfo, v49);
    sub_B16FFC(&UserServantEntity_TypeInfo, v50);
    sub_B16FFC(&UserSuperBossEntity___TypeInfo, v51);
    sub_B16FFC(&StringLiteral_19037, v52);
    sub_B16FFC(&StringLiteral_16222, v53);
    sub_B16FFC(&StringLiteral_698, v54);
    sub_B16FFC(&StringLiteral_19038, v55);
    sub_B16FFC(&StringLiteral_1, v56);
    sub_B16FFC(&StringLiteral_6560, v57);
    result = (BattleResultComponent_resultData_array *)sub_B16FFC(&StringLiteral_951, v58);
    byte_40F6D9E = 1;
  }
  v712 = 0LL;
  v711 = 0;
  v709 = 0LL;
  entity = 0LL;
  QuestId_k__BackingField = 0;
  v706 = 0LL;
  v707 = 0LL;
  v705[0] = 0;
  if ( !v4 )
    goto LABEL_1319;
  p_max_length = &v4->max_length;
  if ( !v4->max_length )
    goto LABEL_1318;
  m_Items = v4->m_Items;
  v59 = v4->m_Items[0];
  if ( !v59 )
    goto LABEL_1319;
  oldUserSvtCollection = v59->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1319;
  resulta = v4;
  v62 = (_DWORD *)sub_B17014(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length, method);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*m_Items )
    goto LABEL_1319;
  v701 = v4->m_Items;
  v69 = (*m_Items)->fields.oldUserSvtCollection;
  v698 = v3;
  v711 = 0;
  if ( !v69 )
    goto LABEL_1319;
  max_length = v69->max_length;
  if ( max_length >= 1 )
  {
    v71 = (UserServantCollectionMaster_o *)result;
    v72 = 0LL;
    while ( (unsigned int)v72 < max_length )
    {
      v73 = v69->m_Items[v72];
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v73 )
        goto LABEL_1319;
      v75 = UserId;
      v77 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
      v76 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v713.fields.currentCryptoKey = v77;
      *(_QWORD *)&v713.fields.fakeValue = v76;
      v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v713, 0LL);
      if ( !v71 )
        goto LABEL_1319;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v71, v75, v78, 0LL);
      v84 = (UserServantCollectionEntity_o *)sub_B170CC(UserServantCollectionEntity_TypeInfo, v80, v81, v82, v83);
      UserServantCollectionEntity___ctor_21403380(v84, EntityDefinitely, 0LL);
      if ( !v62 )
        goto LABEL_1319;
      if ( v84 )
      {
        result = (BattleResultComponent_resultData_array *)sub_B170BC(v84, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
        if ( !result )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( (unsigned int)v72 >= v62[6] )
        break;
      v90 = &v62[2 * (int)v72];
      *((_QWORD *)v90 + 4) = v84;
      v91 = (BattleServantConfConponent_o *)(v90 + 8);
      sub_B16F98(v91, (System_Int32_array **)v84, (System_String_array **)method, v85, v86, v87, v88, v89);
      if ( (unsigned int)v72 >= v62[6] )
        break;
      if ( !v91->klass )
        goto LABEL_1319;
      *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)&v91->klass->_1.declaringType + 4) = v73->fields.friendship;
      if ( (unsigned int)v72 >= v62[6] )
        break;
      if ( !v91->klass )
        goto LABEL_1319;
      *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)((char *)&v91->klass->_1.generic_class + 4) = v73->fields.friendshipRank;
      if ( (unsigned int)v72 >= v62[6] )
        break;
      if ( !v91->klass )
        goto LABEL_1319;
      ++v72;
      HIDWORD(v91->klass->_1.interopData) = v73->fields.friendshipExceedCount;
      v711 = v72;
      max_length = v69->max_length;
      if ( (int)v72 >= max_length )
        goto LABEL_33;
    }
LABEL_1318:
    sub_B17100(result, isWin, method);
    sub_B170A0();
  }
LABEL_33:
  v92 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v93 = v701;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v92 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v93 = v701;
  }
  p_mQuestClearHeroineInfo = (BattleServantConfConponent_o *)&v92->static_fields->mQuestClearHeroineInfo;
  p_mQuestClearHeroineInfo->klass = 0LL;
  sub_B16F98(p_mQuestClearHeroineInfo, 0LL, (System_String_array **)method, v64, v65, v66, v67, v68);
  v100 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1318;
  if ( !*v93 )
    goto LABEL_1319;
  oldUserSvt = (*v93)->fields.oldUserSvt;
  if ( oldUserSvt )
  {
    v102 = *(_QWORD *)&oldUserSvt->max_length;
    if ( v102 )
    {
      if ( !(_DWORD)v102 )
        goto LABEL_1318;
      v103 = oldUserSvt->m_Items[0];
      v104 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v104 )
        goto LABEL_1319;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)v104,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !v103 )
        goto LABEL_1319;
      v106 = *(_OWORD *)&v103->fields.id.fields.fakeValue;
      v107 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
      *(_OWORD *)&v704.fields.currentCryptoKey = *(_OWORD *)&v103->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v704.fields.fakeValue = v106;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v703 = v704;
      v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v703, 0LL);
      if ( !v107 )
        goto LABEL_1319;
      v109 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v107,
               v108,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v114 = sub_B170CC(UserServantEntity_TypeInfo, v110, v111, v112, v113);
      UserServantEntity___ctor_21432252((UserServantEntity_o *)v114, v109, 0LL);
      if ( !v114 )
        goto LABEL_1319;
      *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v114 + 96) = v103->fields.limitCount;
      *(_DWORD *)(v114 + 256) = v103->fields.lv;
      *(_DWORD *)(v114 + 292) = v103->fields.treasureDeviceLv1;
      *(_DWORD *)(v114 + 296) = v103->fields.exceedCount;
      v116 = *(_QWORD *)&v103->fields.dispLimitCount.fields.currentCryptoKey;
      v115 = *(_QWORD *)&v103->fields.dispLimitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v714.fields.currentCryptoKey = v116;
      *(_QWORD *)&v714.fields.fakeValue = v115;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v714, 0LL) >= 1 )
        *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v114 + 128) = v103->fields.dispLimitCount;
      v117 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v117 )
        goto LABEL_1319;
      v118 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)v117,
                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v119 = NetworkManager__get_UserId(0LL);
      v121 = *(_QWORD *)(v114 + 80);
      v120 = *(_QWORD *)(v114 + 88);
      v122 = v119;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v715.fields.currentCryptoKey = v121;
      *(_QWORD *)&v715.fields.fakeValue = v120;
      v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v715, 0LL);
      if ( !v118 )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           v118,
                                                           v122,
                                                           v123,
                                                           0LL);
      v93 = v701;
      v711 = 0;
      if ( !v62 )
        goto LABEL_1319;
      v126 = v62[6];
      v127 = (UserServantCollectionEntity_o *)result;
      if ( v126 >= 1 )
      {
        v128 = 0;
        while ( v128 < (unsigned int)v126 )
        {
          v129 = *(UserServantCollectionEntity_o **)&v62[2 * v128 + 8];
          if ( !v129 )
            goto LABEL_1319;
          v130 = (BattleResultComponent_resultData_array *)v129->fields.userId;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
          if ( v130 == result )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v129, 0LL);
            v132 = *(_QWORD *)(v114 + 80);
            v133 = *(_QWORD *)(v114 + 88);
            v134 = SvtId;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v716.fields.currentCryptoKey = v132;
            *(_QWORD *)&v716.fields.fakeValue = v133;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                                 v716,
                                                                 0LL);
            v135 = v134 == (_DWORD)result;
            v93 = v701;
            if ( v135 )
              goto LABEL_77;
          }
          v128 = v711 + 1;
          v711 = v128;
          v126 = v62[6];
          if ( v128 >= v126 )
            goto LABEL_76;
        }
        goto LABEL_1318;
      }
LABEL_76:
      v129 = 0LL;
LABEL_77:
      v136 = sub_B170CC(QuestClearHeroineInfo_TypeInfo, isWin, method, v124, v125);
      QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v136, 0LL);
      if ( !v136 )
        goto LABEL_1319;
      *(_QWORD *)(v136 + 16) = v114;
      sub_B16F98(
        (BattleServantConfConponent_o *)(v136 + 16),
        (System_Int32_array **)v114,
        v137,
        v138,
        v139,
        v140,
        v141,
        v142);
      LimitCount = UserServantEntity__getLimitCount((UserServantEntity_o *)v114, 0LL);
      if ( !v109 )
        goto LABEL_1319;
      v150 = LimitCount != UserServantEntity__getLimitCount(v109, 0LL);
      *(_BYTE *)(v136 + 25) = 0;
      *(_DWORD *)(v136 + 28) = 0;
      *(_DWORD *)(v136 + 32) = 0;
      *(_BYTE *)(v136 + 40) = 0;
      *(_DWORD *)(v136 + 36) = -1;
      *(_BYTE *)(v136 + 24) = v150;
      *(_BYTE *)(v136 + 41) = *(_DWORD *)(v114 + 296) != v109->fields.exceedCount;
      if ( v129 )
      {
        FriendShipRank = UserServantCollectionEntity__getFriendShipRank(v129, 0LL);
        if ( !v127 )
          goto LABEL_1319;
        if ( FriendShipRank != UserServantCollectionEntity__getFriendShipRank(v127, 0LL) )
          *(_DWORD *)(v136 + 36) = UserServantCollectionEntity__getFriendShipRank(v129, 0LL);
        if ( v129->fields.friendshipExceedCount != v127->fields.friendshipExceedCount )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
          v153 = *(_QWORD *)(v114 + 80);
          v154 = *(_QWORD *)(v114 + 88);
          v155 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v717.fields.currentCryptoKey = v153;
          *(_QWORD *)&v717.fields.fakeValue = v154;
          v156 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v717, 0LL);
          if ( !v155 )
            goto LABEL_1319;
          if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 v155,
                 &entity,
                 v156,
                 (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
          {
            if ( !entity )
              goto LABEL_1319;
            lastQuestId = entity->fields.lastQuestId;
            friendshipExceedCount = v129->fields.friendshipExceedCount;
            *(_BYTE *)(v136 + 40) = 1;
            *(_DWORD *)(v136 + 36) = friendshipExceedCount + lastQuestId;
          }
        }
      }
      v159 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v159 = TerminalPramsManager_TypeInfo;
      }
      v160 = (BattleServantConfConponent_o *)&v159->static_fields->mQuestClearHeroineInfo;
      v160->klass = (BattleServantConfConponent_c *)v136;
      sub_B16F98(v160, (System_Int32_array **)v136, v144, v145, v146, v147, v148, v149);
      v100 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v100 )
    goto LABEL_1318;
  if ( !*v93 )
    goto LABEL_1319;
  oldUserQuest = (*v93)->fields.oldUserQuest;
  if ( oldUserQuest && (v162 = *(_QWORD *)&oldUserQuest->max_length) != 0 )
  {
    if ( !(_DWORD)v162 )
      goto LABEL_1318;
    v163 = oldUserQuest->m_Items[0];
  }
  else
  {
    v163 = 0LL;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6073 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6073 = 1;
  }
  v164 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v164 = TerminalPramsManager_TypeInfo;
  }
  v164->static_fields->_IsPhaseClear_k__BackingField = v163 != 0LL;
  if ( !byte_40F6072 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    v164 = TerminalPramsManager_TypeInfo;
    byte_40F6072 = 1;
  }
  if ( (BYTE3(v164->vtable._0_Equals.methodPtr) & 4) != 0 && !v164->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v164);
    v164 = TerminalPramsManager_TypeInfo;
  }
  v164->static_fields->_IsQuestClear_k__BackingField = 0;
  if ( !byte_40F6E2A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    v164 = TerminalPramsManager_TypeInfo;
    byte_40F6E2A = 1;
  }
  if ( (BYTE3(v164->vtable._0_Equals.methodPtr) & 4) != 0 && !v164->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v164);
    v164 = TerminalPramsManager_TypeInfo;
  }
  v164->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_40F6059 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    v164 = TerminalPramsManager_TypeInfo;
    byte_40F6059 = 1;
  }
  if ( (BYTE3(v164->vtable._0_Equals.methodPtr) & 4) != 0 && !v164->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v164);
    v164 = TerminalPramsManager_TypeInfo;
  }
  if ( v164->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( (BYTE3(v164->vtable._0_Equals.methodPtr) & 4) != 0 && !v164->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v164);
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6057 = 1;
    }
    v165 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v165 = TerminalPramsManager_TypeInfo;
    }
    if ( v165->static_fields->_QuestId_k__BackingField )
    {
      if ( !v163 )
        goto LABEL_1319;
    }
    else
    {
      if ( !v163 )
        goto LABEL_1319;
      questId = v163->fields.questId;
      if ( (BYTE3(v165->vtable._0_Equals.methodPtr) & 4) != 0 && !v165->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v165);
      if ( !byte_40F6048 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
        byte_40F6048 = 1;
      }
      v167 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v167 = TerminalPramsManager_TypeInfo;
      }
      v167->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v163, 0LL);
      if ( !byte_40F6049 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v168);
        byte_40F6049 = 1;
      }
      v170 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v170 = TerminalPramsManager_TypeInfo;
      }
      v170->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v171 = v163->fields.questId;
    v172 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v172 )
      goto LABEL_1319;
    v173 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v172,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    v174 = NetworkManager__get_UserId(0LL);
    if ( !v173 )
      goto LABEL_1319;
    v175 = UserQuestMaster__GetEntity(v173, v174, v171, 0LL);
    if ( v175 )
    {
      v176 = v175;
      v177 = UserQuestEntity__getQuestPhase(v175, 0LL);
      if ( UserQuestEntity__getClearNum(v163, 0LL) || UserQuestEntity__getClearNum(v176, 0LL) != 1 )
        v179 = UserQuestEntity__IsResetStatus(v163, 0LL) && !UserQuestEntity__IsResetStatus(v176, 0LL);
      else
        v179 = 1;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6072 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v178);
        byte_40F6072 = 1;
      }
      v180 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v180 = TerminalPramsManager_TypeInfo;
      }
      v180->static_fields->_IsQuestClear_k__BackingField = v179;
      if ( !byte_40F6E2C )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v178);
        v180 = TerminalPramsManager_TypeInfo;
        byte_40F6E2C = 1;
      }
      if ( (BYTE3(v180->vtable._0_Equals.methodPtr) & 4) != 0 && !v180->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v180);
        v180 = TerminalPramsManager_TypeInfo;
      }
      v180->static_fields->_EventUIEffectClearQuestId_k__BackingField = v171;
      if ( !byte_40F6E22 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v178);
        v180 = TerminalPramsManager_TypeInfo;
        byte_40F6E22 = 1;
      }
      if ( (BYTE3(v180->vtable._0_Equals.methodPtr) & 4) != 0 && !v180->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v180);
        v180 = TerminalPramsManager_TypeInfo;
      }
      v180->static_fields->_MapModelClearQuestId_k__BackingField = v171;
      if ( !byte_40F6E23 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v178);
        v180 = TerminalPramsManager_TypeInfo;
        byte_40F6E23 = 1;
      }
      if ( (BYTE3(v180->vtable._0_Equals.methodPtr) & 4) != 0 && !v180->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v180);
        v180 = TerminalPramsManager_TypeInfo;
      }
      v180->static_fields->_MapModelClearPhaseCount_k__BackingField = v177;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v180);
      v181 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !v181 )
        goto LABEL_1319;
      AdManager__TrackEvent(v181, 4, 1, v171, v177, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v171, v177, v182);
    }
    else
    {
      v177 = 0;
    }
    v183 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v183);
    v184 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v184 )
      goto LABEL_1319;
    v185 = (QuestMessageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v184,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !v185 )
      goto LABEL_1319;
    ValidMessage = QuestMessageMaster__GetValidMessage(v185, v171, v177, 3, 0LL);
    v164 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6E41 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
        byte_40F6E41 = 1;
      }
      v164 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v164 = TerminalPramsManager_TypeInfo;
      }
      v164->static_fields->_IsDispOnly_k__BackingField = 1;
    }
  }
  if ( (BYTE3(v164->vtable._0_Equals.methodPtr) & 4) != 0 && !v164->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v164);
  if ( !byte_40F6069 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6069 = 1;
  }
  v187 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v187 = TerminalPramsManager_TypeInfo;
  }
  if ( v187->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v163 )
      goto LABEL_1319;
    v188 = v163->fields.questId;
    v189 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v189 )
      goto LABEL_1319;
    v190 = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)v189,
                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !v190 )
      goto LABEL_1319;
    v192 = WarMaster__getByLastQuestId(v190, v188, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F605F )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v191);
      byte_40F605F = 1;
    }
    v193 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v193 = TerminalPramsManager_TypeInfo;
    }
    v193->static_fields->_IsWarClear_k__BackingField = v192 != 0LL;
    if ( TerminalPramsManager__CheckIsOrdealCallWarClear(v192, v191) )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F608E )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v194);
        byte_40F608E = 1;
      }
      v195 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v195 = TerminalPramsManager_TypeInfo;
      }
      v196 = 1;
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F608E )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v194);
        byte_40F608E = 1;
      }
      v195 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v195 = TerminalPramsManager_TypeInfo;
      }
      v196 = 0;
    }
    v195->static_fields->_IsOrdealCallWarClear_k__BackingField = v196;
    if ( (BYTE3(v195->vtable._0_Equals.methodPtr) & 4) != 0 && !v195->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v195);
    if ( !byte_40F605D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v194);
      byte_40F605D = 1;
    }
    v197 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v197 = TerminalPramsManager_TypeInfo;
    }
    if ( v197->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v192 )
        goto LABEL_1319;
      if ( !WarEntity__IsEvent(v192, 0LL) )
      {
        v198 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !v198 )
          goto LABEL_1319;
        AdManager__TrackEvent(v198, 6, 1, v192->fields.id, -1, 0LL, 0LL);
      }
    }
    v199 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !v199 )
      goto LABEL_1319;
    AdManager__TrackEvent(v199, 5, 1, v188, -1, 0LL, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v188, v200);
    if ( !byte_40F605D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v201);
      byte_40F605D = 1;
    }
    v187 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v187 = TerminalPramsManager_TypeInfo;
    }
    if ( v187->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v192 )
        goto LABEL_1319;
      HasFlag = WarEntity__HasFlag(v192, 128, 0LL);
      v187 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6082 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v203);
          byte_40F6082 = 1;
        }
        v187 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v187 = TerminalPramsManager_TypeInfo;
        }
        v187->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_40F6E2A )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v203);
          v187 = TerminalPramsManager_TypeInfo;
          byte_40F6E2A = 1;
        }
        if ( (BYTE3(v187->vtable._0_Equals.methodPtr) & 4) != 0 && !v187->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v187);
          v187 = TerminalPramsManager_TypeInfo;
        }
        v187->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( (BYTE3(v187->vtable._0_Equals.methodPtr) & 4) != 0 && !v187->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v187);
    v187 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (BattleServantConfConponent_o *)&v187->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_B16F98(p_mQuestRewardInfos, 0LL, (System_String_array **)method, v95, v96, v97, v98, v99);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v93 )
    goto LABEL_1319;
  rewardInfos = (BattleServantConfConponent_c *)(*v93)->fields.rewardInfos;
  if ( rewardInfos && rewardInfos->_1.namespaze )
  {
    v211 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v211 = TerminalPramsManager_TypeInfo;
    }
    v212 = (BattleServantConfConponent_o *)&v211->static_fields->mQuestRewardInfos;
    v212->klass = rewardInfos;
    sub_B16F98(v212, (System_Int32_array **)rewardInfos, (System_String_array **)method, v205, v206, v207, v208, v209);
  }
  v213 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v213 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = (BattleServantConfConponent_o *)&v213->static_fields->mQuestPhaseRewardInfos;
  p_mQuestPhaseRewardInfos->klass = 0LL;
  sub_B16F98(p_mQuestPhaseRewardInfos, 0LL, (System_String_array **)method, v205, v206, v207, v208, v209);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v93 )
    goto LABEL_1319;
  resultQuestPhaseRewardInfos = (BattleServantConfConponent_c *)(*v93)->fields.resultQuestPhaseRewardInfos;
  if ( resultQuestPhaseRewardInfos && resultQuestPhaseRewardInfos->_1.namespaze )
  {
    v221 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v221 = TerminalPramsManager_TypeInfo;
    }
    v222 = (BattleServantConfConponent_o *)&v221->static_fields->mQuestPhaseRewardInfos;
    v222->klass = resultQuestPhaseRewardInfos;
    sub_B16F98(
      v222,
      (System_Int32_array **)resultQuestPhaseRewardInfos,
      (System_String_array **)method,
      v215,
      v216,
      v217,
      v218,
      v219);
  }
  v223 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v223 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = (BattleServantConfConponent_o *)&v223->static_fields->mQuestResultAfterEventRewardInfos;
  p_mQuestResultAfterEventRewardInfos->klass = 0LL;
  sub_B16F98(p_mQuestResultAfterEventRewardInfos, 0LL, (System_String_array **)method, v215, v216, v217, v218, v219);
  v230 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1318;
  if ( !*v93 )
    goto LABEL_1319;
  resultAfterEventRewardInfos = (BattleServantConfConponent_c *)(*v93)->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && resultAfterEventRewardInfos->_1.namespaze )
  {
    v232 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v232 = TerminalPramsManager_TypeInfo;
    }
    v233 = (BattleServantConfConponent_o *)&v232->static_fields->mQuestResultAfterEventRewardInfos;
    v233->klass = resultAfterEventRewardInfos;
    sub_B16F98(
      v233,
      (System_Int32_array **)resultAfterEventRewardInfos,
      (System_String_array **)method,
      v225,
      v226,
      v227,
      v228,
      v229);
    v230 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v230 )
    goto LABEL_1318;
  if ( !*v93 )
    goto LABEL_1319;
  v234 = TerminalPramsManager_TypeInfo;
  panelEventPoint = (*v93)->fields.panelEventPoint;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v234 = TerminalPramsManager_TypeInfo;
  }
  v234->static_fields->panelEventPoint = panelEventPoint;
  p_mResultEventPanelRewardInfos = (BattleServantConfConponent_o *)&v234->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = 0LL;
  sub_B16F98(p_mResultEventPanelRewardInfos, 0LL, (System_String_array **)method, v225, v226, v227, v228, v229);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v93 )
    goto LABEL_1319;
  resultEventPanelRewardInfos = (BattleServantConfConponent_c *)(*v93)->fields.resultEventPanelRewardInfos;
  if ( resultEventPanelRewardInfos && resultEventPanelRewardInfos->_1.namespaze )
  {
    v243 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v243 = TerminalPramsManager_TypeInfo;
    }
    v244 = (BattleServantConfConponent_o *)&v243->static_fields->mResultEventPanelRewardInfos;
    v244->klass = resultEventPanelRewardInfos;
    sub_B16F98(
      v244,
      (System_Int32_array **)resultEventPanelRewardInfos,
      (System_String_array **)method,
      v237,
      v238,
      v239,
      v240,
      v241);
  }
  v245 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v245 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = (BattleServantConfConponent_o *)&v245->static_fields->eventConquestInfos;
  p_eventConquestInfos->klass = 0LL;
  sub_B16F98(p_eventConquestInfos, 0LL, (System_String_array **)method, v237, v238, v239, v240, v241);
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  v253 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1318;
  if ( !*v93 )
    goto LABEL_1319;
  eventConquestInfos = (BattleServantConfConponent_c *)(*v93)->fields.eventConquestInfos;
  if ( eventConquestInfos && eventConquestInfos->_1.namespaze )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
    }
    v255 = (BattleServantConfConponent_o *)&(*p_static_fields)->eventConquestInfos;
    v255->klass = eventConquestInfos;
    sub_B16F98(
      v255,
      (System_Int32_array **)eventConquestInfos,
      (System_String_array **)method,
      v247,
      v248,
      v249,
      v250,
      v251);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 1;
    v253 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v253 )
    goto LABEL_1318;
  if ( !*v93 )
    goto LABEL_1319;
  if ( (*v93)->fields.isEffectDisappearBanner )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_40F6E1E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6E1E = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].klass) = 1;
    if ( !byte_40F6069 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_40F6069 = 1;
    }
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE4(result->m_Items[19]->fields.oldUserEquip) )
    {
      if ( !v163 )
        goto LABEL_1319;
      v256 = v163->fields.questId;
      v257 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v257 )
        goto LABEL_1319;
      v258 = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v257,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v258 )
        goto LABEL_1319;
      v259 = WarMaster__getByLastQuestId(v258, v256, 0LL);
      if ( v259 )
      {
        id = v259->fields.id;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6E1F )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v260);
          byte_40F6E1F = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        HIDWORD(result->m_Items[19][1].klass) = id;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
    }
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  LODWORD(result->m_Items[19]->fields.costumeReleaseAnnounce) = -1;
  HIDWORD(result->m_Items[19]->fields.costumeReleaseAnnounce) = -1;
  v262 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v262 )
    goto LABEL_1319;
  v263 = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v262,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  v264 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v264 )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)v264,
                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v93 )
    goto LABEL_1319;
  v700 = v163;
  if ( !result )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                                       &v709,
                                                       (*v93)->fields.eventId,
                                                       (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_627;
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v701 || !v263 )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       v263,
                                                       (*v701)->fields.eventId,
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1318;
    if ( !*v701 )
      goto LABEL_1319;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         v263,
                                                         (*v701)->fields.eventId,
                                                         0LL);
    v711 = 0;
    if ( !result )
      goto LABEL_1319;
    v270 = result->max_length;
    v271 = result;
    if ( v270 < 1 )
      goto LABEL_627;
    v272 = 0;
    while ( 1 )
    {
      if ( v272 >= (unsigned int)v270 )
        goto LABEL_1318;
      v273 = &v271->obj.klass + v272;
      v274 = v273[4];
      if ( !v274 )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v273[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1318;
        if ( !*v701 )
          goto LABEL_1319;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 v263,
                                 (*v701)->fields.eventId,
                                 (int32_t)v274->_1.namespaze,
                                 0LL);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6057 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
          byte_40F6057 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        if ( RaidGroupDeadQuestId == result->m_Items[19]->fields.battleId )
        {
          if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
          }
          v276 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !v276 )
            goto LABEL_1319;
          result = (BattleResultComponent_resultData_array *)clsQuestCheck__IsQuestClear(
                                                               v276,
                                                               RaidGroupDeadQuestId,
                                                               0,
                                                               0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
            break;
        }
      }
      if ( !*p_max_length )
        goto LABEL_1318;
      if ( !*v701 )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           v263,
                                                           (*v701)->fields.eventId,
                                                           HIDWORD(v274->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1319;
      v277 = result->max_length;
      v278 = result;
      if ( v277 >= 1 )
      {
        v279 = 0;
        while ( 1 )
        {
          if ( v279 >= (unsigned int)v277 )
            goto LABEL_1318;
          v280 = *((_DWORD *)v278->m_Items + v279);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F6057 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
            byte_40F6057 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          static_fields = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v280 == static_fields->_QuestId_k__BackingField )
            break;
          v279 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v279;
          v277 = v278->max_length;
          if ( v279 >= v277 )
            goto LABEL_433;
        }
        name_high = HIDWORD(v274->_1.name);
        if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          static_fields = TerminalPramsManager_TypeInfo->static_fields;
        }
        static_fields->clearBattleRaidId = name_high;
      }
LABEL_433:
      v272 = v711 + 1;
      v711 = v272;
      v270 = v271->max_length;
      if ( v272 >= v270 )
        goto LABEL_627;
    }
    v293 = TerminalPramsManager_TypeInfo;
    v294 = HIDWORD(v274->_1.name);
    goto LABEL_492;
  }
  if ( !v709 )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v709,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    if ( !v709 )
      goto LABEL_1319;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v709,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1318;
      if ( !*v701 )
        goto LABEL_1319;
      eventActivityPointAddFlag = (*v701)->fields.eventActivityPointAddFlag;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6258 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
        byte_40F6258 = 1;
      }
      v290 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v290 = TerminalPramsManager_TypeInfo;
      }
      v290->static_fields->_EventActivityPointEffectState_k__BackingField = eventActivityPointAddFlag;
    }
    else
    {
      if ( !v709 )
        goto LABEL_1319;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v709, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6E43 )
        {
          result = (BattleResultComponent_resultData_array *)sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
          byte_40F6E43 = 1;
        }
        v291 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v291 = TerminalPramsManager_TypeInfo;
        }
        if ( v291->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v292 = 0;
        }
        else
        {
          if ( !*p_max_length )
            goto LABEL_1318;
          if ( !*v701 )
            goto LABEL_1319;
          eventId = (*v701)->fields.eventId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(eventId, 7, 0LL);
          v291 = TerminalPramsManager_TypeInfo;
          v292 = IsUserEventStatus;
        }
        if ( (BYTE3(v291->vtable._0_Equals.methodPtr) & 4) != 0 && !v291->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v291);
        if ( !byte_40F6E1C )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
          byte_40F6E1C = 1;
        }
        v305 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v305 = TerminalPramsManager_TypeInfo;
        }
        v305->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v292;
      }
      else
      {
        if ( !v709 )
          goto LABEL_1319;
        result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                             (EventDetailEntity_o *)v709,
                                                             0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !*p_max_length )
            goto LABEL_1318;
          if ( !*v701 )
            goto LABEL_1319;
          oldUserEventPoint = (*v701)->fields.oldUserEventPoint;
          v711 = 0;
          if ( !oldUserEventPoint )
            goto LABEL_1319;
          v298 = oldUserEventPoint->max_length;
          v299 = &byte_40F6000;
          v300 = &byte_40F6000;
          if ( v298 >= 1 )
          {
            v301 = 0;
            v299 = &byte_40F6000;
            while ( 1 )
            {
              if ( v301 >= (unsigned int)v298 )
                goto LABEL_1318;
              if ( !v709 )
                goto LABEL_1319;
              v302 = oldUserEventPoint->m_Items[v301];
              if ( !v302 )
                goto LABEL_1319;
              if ( v709->fields.id == v302->fields.eventId )
                break;
              v711 = ++v301;
              if ( v301 >= v298 )
                goto LABEL_603;
            }
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_40F6E3E )
            {
              sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
              byte_40F6E3E = 1;
            }
            v306 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v306 = TerminalPramsManager_TypeInfo;
            }
            if ( !v306->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
            {
              v307 = (EventSaveData_o *)sub_B170CC(EventSaveData_TypeInfo, isWin, method, v265, v266);
              EventSaveData___ctor(v307, 0LL);
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_40F6E18 )
              {
                sub_B16FFC(&TerminalPramsManager_TypeInfo, v308);
                byte_40F6E18 = 1;
              }
              v315 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v315 = TerminalPramsManager_TypeInfo;
              }
              p_BeforeEventSubmarineSaveData_k__BackingField = (BattleServantConfConponent_o *)&v315->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              p_BeforeEventSubmarineSaveData_k__BackingField->klass = (BattleServantConfConponent_c *)v307;
              sub_B16F98(
                p_BeforeEventSubmarineSaveData_k__BackingField,
                (System_Int32_array **)v307,
                v309,
                v310,
                v311,
                v312,
                v313,
                v314);
              v306 = TerminalPramsManager_TypeInfo;
            }
            if ( (BYTE3(v306->vtable._0_Equals.methodPtr) & 4) != 0 && !v306->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v306);
            if ( !byte_40F6E3E )
            {
              sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
              byte_40F6E3E = 1;
            }
            v317 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v317 = TerminalPramsManager_TypeInfo;
            }
            BeforeEventSubmarineSaveData_k__BackingField = v317->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
            if ( !BeforeEventSubmarineSaveData_k__BackingField )
              goto LABEL_1319;
            BeforeEventSubmarineSaveData_k__BackingField->fields.eventId = v302->fields.eventId;
            if ( !byte_40F6E3E )
            {
              sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
              v317 = TerminalPramsManager_TypeInfo;
              byte_40F6E3E = 1;
            }
            if ( (BYTE3(v317->vtable._0_Equals.methodPtr) & 4) != 0 && !v317->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v317);
              v317 = TerminalPramsManager_TypeInfo;
            }
            v319 = v317->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
            if ( !v319 )
              goto LABEL_1319;
            ValueByArray = EventSaveData__GetValueByArray(v319, 0x2Cu, 0LL);
            if ( ValueByArray )
            {
              v321 = ValueByArray->max_length;
              v322 = &ValueByArray->m_Items[1];
              if ( v321 <= 1 )
                v322 = (System_String_o **)&StringLiteral_951;
              v323 = *v322;
              v324 = v321 <= 2 ? (System_String_o **)&StringLiteral_951 : &ValueByArray->m_Items[2];
              v325 = *v324;
              v326 = v321 <= 3 ? &StringLiteral_6560 : (__int64 *)&ValueByArray->m_Items[3];
            }
            else
            {
              v325 = (System_String_o *)StringLiteral_951;
              v326 = &StringLiteral_6560;
              v323 = (System_String_o *)StringLiteral_951;
            }
            if ( !v709 )
              goto LABEL_1319;
            v327 = v709->fields.id;
            isLastGoalPlayed = (System_String_o *)*v326;
            if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
            }
            QuestReleaseList = TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(v327, 0LL);
            v333 = TerminalPramsManager___c_TypeInfo;
            if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
              v333 = TerminalPramsManager___c_TypeInfo;
            }
            v334 = v333->static_fields;
            _9__600_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v334->__9__600_0;
            if ( !_9__600_0 )
            {
              if ( (BYTE3(v333->vtable._0_Equals.methodPtr) & 4) != 0 && !v333->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v333);
                v334 = TerminalPramsManager___c_TypeInfo->static_fields;
              }
              v336 = (Il2CppObject *)v334->__9;
              _9__600_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                                     System_Predicate_QuestReleaseEntity__TypeInfo,
                                                                                     v328,
                                                                                     v329,
                                                                                     v330,
                                                                                     v331);
              System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                _9__600_0,
                v336,
                Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__600_0__,
                (const MethodInfo_2B0B204 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
              v337 = TerminalPramsManager___c_TypeInfo->static_fields;
              v337->__9__600_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__600_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v337->__9__600_0,
                (System_Int32_array **)_9__600_0,
                v338,
                v339,
                v340,
                v341,
                v342,
                v343);
            }
            if ( !QuestReleaseList )
              goto LABEL_1319;
            if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                   (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)QuestReleaseList,
                   (System_Predicate_T__o *)_9__600_0,
                   (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
            {
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_40F6057 )
              {
                sub_B16FFC(&TerminalPramsManager_TypeInfo, v344);
                byte_40F6057 = 1;
              }
              v345 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v345 = TerminalPramsManager_TypeInfo;
              }
              QuestId_k__BackingField = v345->static_fields->_QuestId_k__BackingField;
              v323 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
            }
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_40F6E3E )
            {
              sub_B16FFC(&TerminalPramsManager_TypeInfo, v344);
              byte_40F6E3E = 1;
            }
            v346 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v346 = TerminalPramsManager_TypeInfo;
            }
            v347 = v346->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
            v348 = System_Int64__ToString((int64_t)&v302->fields.value, 0LL);
            if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
            }
            SaveData_21931300 = (System_Int32_array **)TitleInfoEventSubmarineStatusComponent__CreateSaveData_21931300(
                                                         v348,
                                                         v323,
                                                         v325,
                                                         isLastGoalPlayed,
                                                         0LL);
            v299 = &byte_40F6000;
            if ( !v347 )
              goto LABEL_1319;
            v347->fields.value = (struct System_String_o *)SaveData_21931300;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v347->fields.value,
              SaveData_21931300,
              v350,
              v351,
              v352,
              v353,
              v354,
              v355);
            v300 = &byte_40F6000;
          }
LABEL_603:
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F6057 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
            byte_40F6057 = 1;
          }
          v356 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v356 = TerminalPramsManager_TypeInfo;
          }
          v357 = v356->static_fields->_QuestId_k__BackingField;
          if ( !byte_40F6058 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
            v356 = TerminalPramsManager_TypeInfo;
            byte_40F6058 = 1;
          }
          if ( (BYTE3(v356->vtable._0_Equals.methodPtr) & 4) != 0 && !v356->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v356);
            v356 = TerminalPramsManager_TypeInfo;
          }
          PhaseCnt_k__BackingField = v356->static_fields->_PhaseCnt_k__BackingField;
          if ( !v300[105] )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
            v356 = TerminalPramsManager_TypeInfo;
            v300[105] = 1;
          }
          if ( (BYTE3(v356->vtable._0_Equals.methodPtr) & 4) != 0 && !v356->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v356);
            v356 = TerminalPramsManager_TypeInfo;
          }
          IsQuestClear_k__BackingField = v356->static_fields->_IsQuestClear_k__BackingField;
          if ( !v299[89] )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
            v356 = TerminalPramsManager_TypeInfo;
            v299[89] = 1;
          }
          if ( (BYTE3(v356->vtable._0_Equals.methodPtr) & 4) != 0 && !v356->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v356);
            v356 = TerminalPramsManager_TypeInfo;
          }
          SubmarineSaveParamsManager__SaveClearQuestInfo(
            v357,
            PhaseCnt_k__BackingField,
            IsQuestClear_k__BackingField,
            v356->static_fields->_IsPhaseClear_k__BackingField,
            0LL);
        }
      }
    }
    goto LABEL_627;
  }
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v701 )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       v263,
                                                       (*v701)->fields.eventId,
                                                       0LL);
  v711 = 0;
  if ( !result )
    goto LABEL_1319;
  v283 = result->max_length;
  v284 = result;
  if ( v283 >= 1 )
  {
    v285 = 0;
    while ( 1 )
    {
      if ( v285 >= (unsigned int)v283 || !*p_max_length )
        goto LABEL_1318;
      if ( !*v701 )
        goto LABEL_1319;
      v286 = v284->m_Items[v285];
      if ( !v286 )
        goto LABEL_1319;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v263, (*v701)->fields.eventId, v286->fields.eventId, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6057 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
        byte_40F6057 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v288 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v288->_QuestId_k__BackingField )
        break;
      v285 = v711 + 1;
      v711 = v285;
      v283 = v284->max_length;
      if ( v285 >= v283 )
        goto LABEL_627;
    }
    v295 = v286->fields.eventId;
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v288 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v288->clearBattleRaidId = v295;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    v296 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !v296 )
      goto LABEL_1319;
    if ( clsQuestCheck__IsQuestClear(v296, RaidDeadQuestId, 0, 0LL) )
    {
      v293 = TerminalPramsManager_TypeInfo;
      v294 = v286->fields.eventId;
LABEL_492:
      if ( (BYTE3(v293->vtable._0_Equals.methodPtr) & 4) != 0 && !v293->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v293);
        v293 = TerminalPramsManager_TypeInfo;
      }
      v293->static_fields->clearLastBattleRaidId = v294;
    }
  }
LABEL_627:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6074 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6074 = 1;
  }
  v360 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v362 = v700;
    v361 = v701;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v360 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v362 = v700;
    v361 = v701;
  }
  v360->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    v360 = TerminalPramsManager_TypeInfo;
    byte_40F6057 = 1;
  }
  if ( (BYTE3(v360->vtable._0_Equals.methodPtr) & 4) != 0 && !v360->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v360);
    v360 = TerminalPramsManager_TypeInfo;
  }
  if ( v360->static_fields->_QuestId_k__BackingField >= 1 )
  {
    v363 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v363 )
      goto LABEL_1319;
    v365 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v363,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v364);
      byte_40F6057 = 1;
    }
    v366 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v366 = TerminalPramsManager_TypeInfo;
    }
    if ( !v365 )
      goto LABEL_1319;
    QuestEntity = QuestMaster__getQuestEntity(v365, v366->static_fields->_QuestId_k__BackingField, 0LL);
    if ( !QuestEntity )
      goto LABEL_1319;
    type = QuestEntity->fields.type;
    if ( !byte_40F6074 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6074 = 1;
    }
    v360 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v360 = TerminalPramsManager_TypeInfo;
    }
    v360->static_fields->_IsWarBoardClear_k__BackingField = type == 7;
  }
  if ( (BYTE3(v360->vtable._0_Equals.methodPtr) & 4) != 0 && !v360->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v360);
  if ( !byte_40F6E44 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6E44 = 1;
  }
  v369 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v369 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = (BattleServantConfConponent_o *)&v369->static_fields->_questClearCostumeRelease_k__BackingField;
  p_questClearCostumeRelease_k__BackingField->klass = 0LL;
  sub_B16F98(
    p_questClearCostumeRelease_k__BackingField,
    0LL,
    (System_String_array **)method,
    v265,
    v266,
    v267,
    v268,
    v269);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v361 )
    goto LABEL_1319;
  costumeReleaseAnnounce = (*v361)->fields.costumeReleaseAnnounce;
  if ( costumeReleaseAnnounce && *(_QWORD *)&costumeReleaseAnnounce->max_length )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6061 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6061 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !LOBYTE(result->m_Items[19]->fields.oldUserSvtCollection) )
    {
      if ( !*p_max_length )
        goto LABEL_1318;
      if ( !*v361 )
        goto LABEL_1319;
      v377 = (System_Int32_array **)(*v361)->fields.costumeReleaseAnnounce;
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_40F6E44 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
        byte_40F6E44 = 1;
      }
      v378 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v378 = TerminalPramsManager_TypeInfo;
      }
      v379 = (BattleServantConfConponent_o *)&v378->static_fields->_questClearCostumeRelease_k__BackingField;
      v379->klass = (BattleServantConfConponent_c *)v377;
      sub_B16F98(v379, v377, (System_String_array **)method, v371, v372, v373, v374, v375);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6070 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6070 = 1;
  }
  v380 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v380 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = (BattleServantConfConponent_o *)&v380->static_fields->_questClearCostumeGet_k__BackingField;
  p_questClearCostumeGet_k__BackingField->klass = 0LL;
  sub_B16F98(p_questClearCostumeGet_k__BackingField, 0LL, (System_String_array **)method, v371, v372, v373, v374, v375);
  if ( !*p_max_length )
    goto LABEL_1318;
  if ( !*v361 )
    goto LABEL_1319;
  costumeGetAnnounce = (BattleServantConfConponent_c *)(*v361)->fields.costumeGetAnnounce;
  if ( costumeGetAnnounce && costumeGetAnnounce->_1.namespaze )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6070 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6070 = 1;
    }
    v388 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v388 = TerminalPramsManager_TypeInfo;
    }
    v389 = (BattleServantConfConponent_o *)&v388->static_fields->_questClearCostumeGet_k__BackingField;
    v389->klass = costumeGetAnnounce;
    sub_B16F98(
      v389,
      (System_Int32_array **)costumeGetAnnounce,
      (System_String_array **)method,
      v382,
      v383,
      v384,
      v385,
      v386);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E45 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6E45 = 1;
  }
  v390 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v390 = TerminalPramsManager_TypeInfo;
  }
  v391 = v390->static_fields;
  v391->_eventPointWinReward_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v391->_eventPointWinReward_k__BackingField,
    0LL,
    (System_String_array **)method,
    v382,
    v383,
    v384,
    v385,
    v386);
  if ( !byte_40F6E46 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6E46 = 1;
  }
  v397 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v397 = TerminalPramsManager_TypeInfo;
  }
  v398 = v362 == 0LL;
  v397->static_fields->_eventPointWinType_k__BackingField = 0;
  if ( v709 && v362 && *(&v709[1].fields.id + 1) == 4 )
  {
    if ( !v700 )
      goto LABEL_1319;
    v399 = v700->fields.questId;
    v400 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v400 )
      goto LABEL_1319;
    v401 = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v400,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !v401 )
      goto LABEL_1319;
    v402 = v401;
    GroupId = QuestGroupMaster__GetGroupId(v401, v399, 4, 0LL);
    v404 = TerminalPramsManager_TypeInfo;
    v405 = GroupId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v404 = TerminalPramsManager_TypeInfo;
    }
    v404->static_fields->joinGroupId = v405;
    v406 = QuestGroupMaster__GetGroupId(v402, v399, 3, 0LL);
    if ( !byte_40F6069 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6069 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v406 >= 1 && BYTE4(result->m_Items[19]->fields.oldUserEquip) )
    {
      v407 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v407 )
        goto LABEL_1319;
      v408 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)v407,
                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      v409 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v409 )
        goto LABEL_1319;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)v409,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1318;
      if ( !*v701 || !result )
        goto LABEL_1319;
      v410 = EventPointMaster__GetEntity((EventPointMaster_o *)result, v406, (*v701)->fields.eventId, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !v410 )
        goto LABEL_1319;
      IsGroupOnGroup1 = EventPointEntity__IsGroupOnGroup1(
                          v410,
                          TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                          0LL);
      if ( !v408 )
        goto LABEL_1319;
      v412 = QuestReleaseMaster__EventPointWinActionType(v408, v399, IsGroupOnGroup1, 0LL);
      if ( !byte_40F6E46 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
        byte_40F6E46 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.resultEventTowerRewardInfos) = v412;
      if ( !byte_40F6E47 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_40F6E47 = 1;
      }
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v413 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v413->_eventPointWinType_k__BackingField )
      {
        if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v413 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v413->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1318;
    if ( *v701 )
    {
      eventPointWinReward = (*v701)->fields.eventPointWinReward;
      if ( eventPointWinReward )
      {
        v415 = *(_QWORD *)&eventPointWinReward->max_length;
        if ( v415 )
        {
          if ( !(_DWORD)v415 )
            goto LABEL_1318;
          v416 = (System_Int32_array **)eventPointWinReward->m_Items[0];
          if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
            j_il2cpp_runtime_class_init_0(result);
          if ( !byte_40F6E45 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
            byte_40F6E45 = 1;
          }
          v417 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v417 = TerminalPramsManager_TypeInfo;
          }
          v418 = v417->static_fields;
          v418->_eventPointWinReward_k__BackingField = (struct EventPointWinReward_o *)v416;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v418->_eventPointWinReward_k__BackingField,
            v416,
            (System_String_array **)method,
            v392,
            v393,
            v394,
            v395,
            v396);
        }
      }
      goto LABEL_780;
    }
LABEL_1319:
    sub_B170D4();
  }
LABEL_780:
  v419 = v709 == 0LL || v398;
  v420 = v701;
  if ( !v419 && *(&v709[1].fields.id + 1) == 6 )
  {
    if ( !v700 )
      goto LABEL_1319;
    v421 = v700->fields.questId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E48 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6E48 = 1;
    }
    v422 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v422 = TerminalPramsManager_TypeInfo;
    }
    v422->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v421;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E49 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6E49 = 1;
  }
  v423 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v423 = TerminalPramsManager_TypeInfo;
  }
  v424 = v423->static_fields;
  v424->_eventRaceBoost_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v424->_eventRaceBoost_k__BackingField,
    0LL,
    (System_String_array **)method,
    v392,
    v393,
    v394,
    v395,
    v396);
  v430 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1318;
  if ( !*v701 )
    goto LABEL_1319;
  raceResult = (*v701)->fields.raceResult;
  if ( raceResult && raceResult->fields.termId >= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E49 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6E49 = 1;
    }
    v432 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v432 = TerminalPramsManager_TypeInfo;
    }
    v433 = v432->static_fields;
    v433->_eventRaceBoost_k__BackingField = raceResult;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v433->_eventRaceBoost_k__BackingField,
      (System_Int32_array **)raceResult,
      (System_String_array **)method,
      v425,
      v426,
      v427,
      v428,
      v429);
    if ( !byte_40F6E4A )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6E4A = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfos = result->m_Items[19]->fields.resultEventBoardGameTokenRewardInfos;
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_40F6057 = 1;
    }
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !resultEventBoardGameTokenRewardInfos )
      goto LABEL_1319;
    *(&resultEventBoardGameTokenRewardInfos->max_length + 1) = result->m_Items[19]->fields.battleId;
    v430 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v430 )
    goto LABEL_1318;
  if ( !*v701 )
    goto LABEL_1319;
  eventTowerReward = (*v701)->fields.eventTowerReward;
  if ( eventTowerReward )
  {
    v436 = *(_QWORD *)&eventTowerReward->max_length;
    if ( v436 )
    {
      if ( !(_DWORD)v436 )
        goto LABEL_1318;
      v437 = eventTowerReward->m_Items[0];
      if ( !v437 )
        goto LABEL_1319;
      if ( v437->fields.eventId >= 1 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6E4B )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
          byte_40F6E4B = 1;
        }
        v438 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v438 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = (BattleServantConfConponent_o *)&v438->static_fields->_eventTowerReward_k__BackingField;
        p_eventTowerReward_k__BackingField->klass = (BattleServantConfConponent_c *)v437;
        sub_B16F98(
          p_eventTowerReward_k__BackingField,
          (System_Int32_array **)v437,
          (System_String_array **)method,
          v425,
          v426,
          v427,
          v428,
          v429);
        if ( !*p_max_length )
          goto LABEL_1318;
        if ( *v701 )
        {
          resultEventTowerRewardInfos = (System_Int32_array **)(*v701)->fields.resultEventTowerRewardInfos;
          if ( !byte_40F6E4C )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
            byte_40F6E4C = 1;
          }
          v446 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v446 = TerminalPramsManager_TypeInfo;
          }
          p_resultEventTowerRewardInfo_k__BackingField = (BattleServantConfConponent_o *)&v446->static_fields->_resultEventTowerRewardInfo_k__BackingField;
          p_resultEventTowerRewardInfo_k__BackingField->klass = (BattleServantConfConponent_c *)resultEventTowerRewardInfos;
          sub_B16F98(
            p_resultEventTowerRewardInfo_k__BackingField,
            resultEventTowerRewardInfos,
            (System_String_array **)method,
            v440,
            v441,
            v442,
            v443,
            v444);
          v430 = *(_QWORD *)p_max_length;
          goto LABEL_847;
        }
        goto LABEL_1319;
      }
    }
  }
LABEL_847:
  if ( !(_DWORD)v430 )
    goto LABEL_1321;
  if ( !*v701 )
    goto LABEL_1320;
  resultBoostItemRewardInfos = (BattleServantConfConponent_c *)(*v701)->fields.resultBoostItemRewardInfos;
  if ( resultBoostItemRewardInfos && resultBoostItemRewardInfos->_1.namespaze )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6066 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6066 = 1;
    }
    v449 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v449 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = (BattleServantConfConponent_o *)&v449->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    p_resultBoostItemRewardInfo_k__BackingField->klass = resultBoostItemRewardInfos;
    sub_B16F98(
      p_resultBoostItemRewardInfo_k__BackingField,
      (System_Int32_array **)resultBoostItemRewardInfos,
      (System_String_array **)method,
      v425,
      v426,
      v427,
      v428,
      v429);
    v430 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v430 )
    goto LABEL_1321;
  if ( !*v701 )
    goto LABEL_1320;
  v451 = (BattleServantConfConponent_c *)(*v701)->fields.resultEventBoardGameTokenRewardInfos;
  if ( v451 && v451->_1.namespaze )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6067 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6067 = 1;
    }
    v452 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v452 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = (BattleServantConfConponent_o *)&v452->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    p_resultEventBoardGameTokenRewardInfo_k__BackingField->klass = v451;
    sub_B16F98(
      p_resultEventBoardGameTokenRewardInfo_k__BackingField,
      (System_Int32_array **)v451,
      (System_String_array **)method,
      v425,
      v426,
      v427,
      v428,
      v429);
    v430 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v430 )
    goto LABEL_1321;
  if ( !*v701 )
    goto LABEL_1320;
  warClearReward = (BattleServantConfConponent_c *)(*v701)->fields.warClearReward;
  if ( warClearReward && warClearReward->_1.namespaze )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6077 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6077 = 1;
    }
    v455 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v455 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = (BattleServantConfConponent_o *)&v455->static_fields->_warClearReward_k__BackingField;
    p_warClearReward_k__BackingField->klass = warClearReward;
    sub_B16F98(
      p_warClearReward_k__BackingField,
      (System_Int32_array **)warClearReward,
      (System_String_array **)method,
      v425,
      v426,
      v427,
      v428,
      v429);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E4D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6E4D = 1;
  }
  v457 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v457 = TerminalPramsManager_TypeInfo;
  }
  v458 = v457->static_fields;
  v458->_oldSuperBoss_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v458->_oldSuperBoss_k__BackingField,
    0LL,
    (System_String_array **)method,
    v425,
    v426,
    v427,
    v428,
    v429);
  if ( !byte_40F6E4E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v459);
    byte_40F6E4E = 1;
  }
  v466 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v466 = TerminalPramsManager_TypeInfo;
  }
  v467 = v466->static_fields;
  v467->_oldPersonalBoss_k__BackingField = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v467->_oldPersonalBoss_k__BackingField,
    0LL,
    v460,
    v461,
    v462,
    v463,
    v464,
    v465);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v469 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v468);
    byte_40F6057 = 1;
  }
  v470 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v470 = TerminalPramsManager_TypeInfo;
  }
  if ( !v469 )
    goto LABEL_1320;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v469, v470->static_fields->_QuestId_k__BackingField, 0LL);
  v472 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v472 )
    goto LABEL_1320;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v472, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v474 = WarEntityByWarID->fields.eventId;
  else
    v474 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v475 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v475 )
    goto LABEL_1320;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       v475,
                                                       &v707,
                                                       v474,
                                                       (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v698 )
    goto LABEL_1326;
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*v701 )
    goto LABEL_1320;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       *v701,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1326:
    v481 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1321;
    if ( !*v701 )
      goto LABEL_1320;
    if ( (*v701)->fields.oldUserEventSuperBoss )
    {
      result = (BattleResultComponent_resultData_array *)v707;
      if ( v707
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v707,
                                                                 0LL),
            v481 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v481 )
          goto LABEL_1321;
        if ( !*v701 )
          goto LABEL_1320;
        oldUserEventSuperBoss = (System_Int32_array **)(*v701)->fields.oldUserEventSuperBoss;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6E4E )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
          byte_40F6E4E = 1;
        }
        v483 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v483 = TerminalPramsManager_TypeInfo;
        }
        v484 = v483->static_fields;
        v484->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)oldUserEventSuperBoss;
        p_oldPersonalBoss_k__BackingField = (BattleServantConfConponent_o *)&v484->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v481 )
          goto LABEL_1321;
        if ( !*v701 )
          goto LABEL_1320;
        oldUserEventSuperBoss = (System_Int32_array **)(*v701)->fields.oldUserEventSuperBoss;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6E4D )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
          byte_40F6E4D = 1;
        }
        v486 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v486 = TerminalPramsManager_TypeInfo;
        }
        v487 = v486->static_fields;
        v487->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)oldUserEventSuperBoss;
        p_oldPersonalBoss_k__BackingField = (BattleServantConfConponent_o *)&v487->_oldSuperBoss_k__BackingField;
      }
      sub_B16F98(
        p_oldPersonalBoss_k__BackingField,
        oldUserEventSuperBoss,
        (System_String_array **)method,
        v476,
        v477,
        v478,
        v479,
        v480);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E4F )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6E4F = 1;
  }
  v488 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v488 = TerminalPramsManager_TypeInfo;
  }
  if ( !v488->static_fields->_oldPersonalBoss_k__BackingField )
    goto LABEL_1327;
  if ( (BYTE3(v488->vtable._0_Equals.methodPtr) & 4) != 0 && !v488->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v488);
  if ( !byte_40F6E4F )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6E4F = 1;
  }
  v488 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v488 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss_k__BackingField = v488->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !oldPersonalBoss_k__BackingField )
    goto LABEL_1320;
  if ( *(_QWORD *)&oldPersonalBoss_k__BackingField->max_length )
  {
    v490 = 1;
  }
  else
  {
LABEL_1327:
    if ( (BYTE3(v488->vtable._0_Equals.methodPtr) & 4) != 0 && !v488->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v488);
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6057 = 1;
    }
    v488 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v488 = TerminalPramsManager_TypeInfo;
    }
    v491 = BalanceConfig_TypeInfo;
    v492 = v488->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v491 = BalanceConfig_TypeInfo;
      v488 = TerminalPramsManager_TypeInfo;
    }
    v490 = v492 == v491->static_fields->OrtFirstQuestId;
  }
  if ( (BYTE3(v488->vtable._0_Equals.methodPtr) & 4) != 0 && !v488->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v488);
  if ( !byte_40F6086 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6086 = 1;
  }
  v493 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v493 = TerminalPramsManager_TypeInfo;
  }
  v493->static_fields->_isIncomingCall_k__BackingField = v490;
  if ( v707 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v707, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v494);
      byte_40F6057 = 1;
    }
    v495 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v495 = TerminalPramsManager_TypeInfo;
    }
    v496 = BalanceConfig_TypeInfo;
    v497 = v495->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v496 = BalanceConfig_TypeInfo;
    }
    if ( v497 == v496->static_fields->OrtLateQuestId )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6058 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v494);
        byte_40F6058 = 1;
      }
      v498 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v498 = TerminalPramsManager_TypeInfo;
      }
      v499 = BalanceConfig_TypeInfo;
      v500 = v498->static_fields->_PhaseCnt_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v499 = BalanceConfig_TypeInfo;
      }
      if ( v500 + 1 == v499->static_fields->OrtLatePhaseBreak )
        goto LABEL_1328;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6058 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v494);
        byte_40F6058 = 1;
      }
      v501 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v501 = TerminalPramsManager_TypeInfo;
      }
      v502 = BalanceConfig_TypeInfo;
      v503 = v501->static_fields->_PhaseCnt_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v502 = BalanceConfig_TypeInfo;
      }
      if ( v503 + 1 == v502->static_fields->OrtLatePhaseDead )
      {
LABEL_1328:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v504 = (UserSuperBossMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v505 = NetworkManager__get_UserId(0LL);
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v504 )
          goto LABEL_1320;
        if ( UserSuperBossMaster__TryGetEntity(
               v504,
               &v706,
               v505,
               v474,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_B17014(UserSuperBossEntity___TypeInfo, 1LL, v506);
          if ( !result )
            goto LABEL_1320;
          v512 = (System_Int32_array **)v706;
          v513 = result;
          if ( v706 )
          {
            result = (BattleResultComponent_resultData_array *)sub_B170BC(v706, result->obj.klass->_1.element_class);
            if ( !result )
              goto LABEL_1323;
          }
          if ( !v513->max_length )
            goto LABEL_1321;
          v513->m_Items[0] = (BattleResultComponent_resultData_o *)v512;
          sub_B16F98(
            (BattleServantConfConponent_o *)v513->m_Items,
            v512,
            (System_String_array **)method,
            v507,
            v508,
            v509,
            v510,
            v511);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F6E4E )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v514);
            byte_40F6E4E = 1;
          }
          v521 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v521 = TerminalPramsManager_TypeInfo;
          }
          v522 = v521->static_fields;
          v522->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v513;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v522->_oldPersonalBoss_k__BackingField,
            (System_Int32_array **)v513,
            v515,
            v516,
            v517,
            v518,
            v519,
            v520);
        }
      }
    }
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  TalkResumeInfo = ScriptManager__GetTalkResumeInfo(0LL);
  if ( TalkResumeInfo )
  {
    v524 = TalkResumeInfo;
    v525 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v525 )
      goto LABEL_1320;
    v527 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)v525,
                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v526);
      byte_40F6057 = 1;
    }
    v528 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v528 = TerminalPramsManager_TypeInfo;
    }
    if ( !v527 )
      goto LABEL_1320;
    ScriptQuestId = QuestMaster__getScriptQuestId(v527, v528->static_fields->_QuestId_k__BackingField, 0LL);
    v531 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_40F6058 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v530);
      byte_40F6058 = 1;
    }
    v532 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v532 = TerminalPramsManager_TypeInfo;
    }
    v533 = v532->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v524, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptName_BattleEnd2 = ScriptManager__GetScriptName_BattleEnd2(ScriptQuestId, v533 + 1, winResult, 0LL);
    if ( !v531 )
      goto LABEL_1320;
    v420 = v701;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v531, ScriptName_BattleEnd2, 0LL) )
      goto LABEL_1087;
    v543 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6058 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v542);
      byte_40F6058 = 1;
    }
    v544 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v544 = TerminalPramsManager_TypeInfo;
    }
    v545 = v544->static_fields->_PhaseCnt_k__BackingField;
    v546 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v524, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptName_BattleEnd = ScriptManager__GetScriptName_BattleEnd(ScriptQuestId, v545 + 1, v546, 0LL);
    if ( !v543 )
      goto LABEL_1320;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v543, ScriptName_BattleEnd, 0LL) )
    {
LABEL_1087:
      v548 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v548 = TerminalPramsManager_TypeInfo;
      }
      p_lastPlayBgmName = (BattleServantConfConponent_o *)&v548->static_fields->lastPlayBgmName;
      v550 = (System_Int32_array **)StringLiteral_1;
      p_lastPlayBgmName->klass = (BattleServantConfConponent_c *)StringLiteral_1;
      sub_B16F98(p_lastPlayBgmName, v550, v536, v537, v538, v539, v540, v541);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v551);
    }
  }
  v552 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v552 )
    goto LABEL_1320;
  v554 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)v552,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v553);
    byte_40F6057 = 1;
  }
  v555 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v555 = TerminalPramsManager_TypeInfo;
  }
  v556 = v555->static_fields->_QuestId_k__BackingField;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v553);
    v555 = TerminalPramsManager_TypeInfo;
    byte_40F6058 = 1;
  }
  if ( (BYTE3(v555->vtable._0_Equals.methodPtr) & 4) != 0 && !v555->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v555);
    v555 = TerminalPramsManager_TypeInfo;
  }
  if ( !v554 )
    goto LABEL_1320;
  QuestPhaseMaster__TryGetEntity(v554, &v712, v556, v555->static_fields->_PhaseCnt_k__BackingField + 1, 0LL);
  if ( !byte_40F6E50 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6E50 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( result->m_Items[19]->fields.resultEventPanelRewardInfos )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_40F6E50 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6E50 = 1;
    }
    v557 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v557 = TerminalPramsManager_TypeInfo;
    }
    SpecifiedChangeSceneInfo_k__BackingField = v557->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !SpecifiedChangeSceneInfo_k__BackingField )
      goto LABEL_1320;
    SpecifiedSceneInfo__InitParameter(SpecifiedChangeSceneInfo_k__BackingField, 0LL);
  }
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*v420 )
LABEL_1320:
    sub_B170D4();
  v559 = (*v420)->fields.eventId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    byte_40F6057 = 1;
  }
  v560 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v560 = TerminalPramsManager_TypeInfo;
  }
  v561 = v560->static_fields->_QuestId_k__BackingField;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
    v560 = TerminalPramsManager_TypeInfo;
    byte_40F6058 = 1;
  }
  if ( (BYTE3(v560->vtable._0_Equals.methodPtr) & 4) != 0 && !v560->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v560);
    v560 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = (System_Int32_array **)QuestPhaseMaster__GetSpecifiedSceneInfo(
                                                v554,
                                                v559,
                                                v561,
                                                v560->static_fields->_PhaseCnt_k__BackingField + 1,
                                                0LL);
  if ( !byte_40F6E19 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v562);
    byte_40F6E19 = 1;
  }
  v570 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v570 = TerminalPramsManager_TypeInfo;
  }
  v571 = v570->static_fields;
  v571->_SpecifiedChangeSceneInfo_k__BackingField = (struct SpecifiedSceneInfo_o *)SpecifiedSceneInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v571->_SpecifiedChangeSceneInfo_k__BackingField,
    SpecifiedSceneInfo,
    v563,
    v564,
    v565,
    v566,
    v567,
    v568);
  v572 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0;
  v572->static_fields->TipsArchiveCurrrentTab = 0;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v573);
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*v420 )
    goto LABEL_1320;
  eventMuralId = (*v420)->fields.eventMuralId;
  v580 = TerminalPramsManager_TypeInfo;
  if ( eventMuralId )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6063 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6063 = 1;
    }
    v580 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v580 = TerminalPramsManager_TypeInfo;
    }
    v580->static_fields->_EventMuralId_k__BackingField = eventMuralId;
  }
  if ( (BYTE3(v580->vtable._0_Equals.methodPtr) & 4) != 0 && !v580->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v580);
    v580 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = (BattleServantConfConponent_o *)&v580->static_fields->eventHarvestGrowthInfo;
  p_eventHarvestGrowthInfo->klass = 0LL;
  sub_B16F98(p_eventHarvestGrowthInfo, 0LL, (System_String_array **)method, v574, v575, v576, v577, v578);
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v582);
    byte_40F6057 = 1;
  }
  v583 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v583 = TerminalPramsManager_TypeInfo;
  }
  v584 = QuestPhaseMaster__GetEntity(v554, v583->static_fields->_QuestId_k__BackingField, 1, 0LL);
  if ( !v584 )
    goto LABEL_1320;
  v585 = v584;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(v584, (System_String_o *)StringLiteral_19038, -1, 0LL);
  v587 = QuestPhaseEntity__getScriptIntParam(v585, (System_String_o *)StringLiteral_19037, -1, 0LL);
  if ( ScriptIntParam >= 1 )
  {
    v592 = v587;
    if ( v587 >= 1 )
    {
      v593 = (EventHarvestGrowthInfo_o *)sub_B170CC(EventHarvestGrowthInfo_TypeInfo, v588, v589, v590, v591);
      EventHarvestGrowthInfo___ctor(v593, 0LL);
      if ( !v593 )
        goto LABEL_1320;
      v593->fields.questId = v585->fields.questId;
      phase = v585->fields.phase;
      v593->fields.afterQuestId = v592;
      v593->fields.phase = phase;
      v593->fields.beforeQuestId = ScriptIntParam;
      v601 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v601 = TerminalPramsManager_TypeInfo;
      }
      v602 = (BattleServantConfConponent_o *)&v601->static_fields->eventHarvestGrowthInfo;
      v602->klass = (BattleServantConfConponent_c *)v593;
      sub_B16F98(v602, (System_Int32_array **)v593, v594, v595, v596, v597, v598, v599);
    }
  }
  v603 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v603 )
    goto LABEL_1320;
  v605 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)v603,
                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v604);
    byte_40F6057 = 1;
  }
  v606 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v606 = TerminalPramsManager_TypeInfo;
  }
  if ( !v605 )
    goto LABEL_1320;
  v607 = QuestMaster__getQuestEntity(v605, v606->static_fields->_QuestId_k__BackingField, 0LL);
  if ( v607 )
  {
    v613 = v607;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F6057 = 1;
    }
    v614 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v614 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(v554, v614->static_fields->_QuestId_k__BackingField, 0LL) )
    {
      SpotId = QuestEntity__getSpotId(v613, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( *p_max_length )
      {
        if ( !*v420 || !result )
          goto LABEL_1320;
        CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                               (UserEventCooltimeRewardMaster_o *)result,
                               (*v420)->fields.eventId,
                               SpotId,
                               0LL);
        if ( CurrentLevelEntity )
        {
          v617 = CurrentLevelEntity;
          v618 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v618 = TerminalPramsManager_TypeInfo;
          }
          eventAreaImproveResultInfo = v618->static_fields->eventAreaImproveResultInfo;
          if ( eventAreaImproveResultInfo )
          {
            if ( (BYTE3(v618->vtable._0_Equals.methodPtr) & 4) != 0 && !v618->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v618);
              eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
              if ( !eventAreaImproveResultInfo )
                goto LABEL_1320;
            }
            eventAreaImproveResultInfo->fields.afterLevel = v617->fields.lv;
          }
        }
        goto LABEL_1205;
      }
LABEL_1321:
      sub_B17100(result, isWin, method);
      sub_B170A0();
    }
  }
LABEL_1205:
  result = (BattleResultComponent_resultData_array *)v712;
  if ( v712 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v712, 0LL);
    if ( !result )
      goto LABEL_1320;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6057 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
        byte_40F6057 = 1;
      }
      v620 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v620 = TerminalPramsManager_TypeInfo;
      }
      v711 = v620->static_fields->_QuestId_k__BackingField;
      v622 = System_Int32__ToString((int32_t)&v711, 0LL);
      if ( !byte_40F6058 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v621);
        byte_40F6058 = 1;
      }
      v623 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v623 = TerminalPramsManager_TypeInfo;
      }
      v711 = v623->static_fields->_PhaseCnt_k__BackingField + 1;
      v624 = System_Int32__ToString((int32_t)&v711, 0LL);
      v632 = (System_Int32_array **)System_String__Concat_43746016(
                                      v622,
                                      (System_String_o *)StringLiteral_698,
                                      v624,
                                      0LL);
      if ( !byte_40F6E2D )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v625);
        byte_40F6E2D = 1;
      }
      v633 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v633 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = (BattleServantConfConponent_o *)&v633->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      p_SceneMoveQuestClearedInfo_k__BackingField->klass = (BattleServantConfConponent_c *)v632;
      sub_B16F98(p_SceneMoveQuestClearedInfo_k__BackingField, v632, v626, v627, v628, v629, v630, v631);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*v420 )
    goto LABEL_1320;
  limitImageAnnounces = (BattleServantConfConponent_c *)(*v420)->fields.limitImageAnnounces;
  if ( limitImageAnnounces && limitImageAnnounces->_1.namespaze )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F606B )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, isWin);
      byte_40F606B = 1;
    }
    v636 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v636 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = (BattleServantConfConponent_o *)&v636->static_fields->_limitImageAnnounces_k__BackingField;
    p_limitImageAnnounces_k__BackingField->klass = limitImageAnnounces;
    sub_B16F98(
      p_limitImageAnnounces_k__BackingField,
      (System_Int32_array **)limitImageAnnounces,
      (System_String_array **)method,
      v608,
      v609,
      v610,
      v611,
      v612);
  }
  v639 = (System_String_array *)sub_B17014(string___TypeInfo, 7LL, method);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v638);
    byte_40F6057 = 1;
  }
  v640 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v641 = &byte_40F6000;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v640 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v641 = &byte_40F6000;
  }
  v711 = v640->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v711, 0LL);
  if ( !v639 )
    goto LABEL_1320;
  v647 = (System_Int32_array **)result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B170BC(result, v639->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
  }
  if ( !v639->max_length )
    goto LABEL_1321;
  v639->m_Items[0] = (System_String_o *)v647;
  sub_B16F98(
    (BattleServantConfConponent_o *)v639->m_Items,
    v647,
    (System_String_array **)method,
    v642,
    v643,
    v644,
    v645,
    v646);
  result = (BattleResultComponent_resultData_array *)StringLiteral_698;
  if ( StringLiteral_698 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B170BC(StringLiteral_698, v639->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
    *(_QWORD *)&isWin = StringLiteral_698;
  }
  else
  {
    *(_QWORD *)&isWin = 0LL;
  }
  if ( v639->max_length <= 1 )
    goto LABEL_1321;
  v639->m_Items[1] = (System_String_o *)isWin;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v639->m_Items[1],
    (System_Int32_array **)isWin,
    (System_String_array **)method,
    v648,
    v649,
    v650,
    v651,
    v652);
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v653);
    byte_40F6058 = 1;
  }
  v654 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v654 = TerminalPramsManager_TypeInfo;
  }
  v711 = v654->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v711, 0LL);
  v660 = (System_Int32_array **)result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B170BC(result, v639->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
  }
  if ( v639->max_length <= 2 )
    goto LABEL_1321;
  v639->m_Items[2] = (System_String_o *)v660;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v639->m_Items[2],
    v660,
    (System_String_array **)method,
    v655,
    v656,
    v657,
    v658,
    v659);
  result = (BattleResultComponent_resultData_array *)StringLiteral_698;
  if ( StringLiteral_698 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B170BC(StringLiteral_698, v639->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
    *(_QWORD *)&isWin = StringLiteral_698;
  }
  else
  {
    *(_QWORD *)&isWin = 0LL;
  }
  if ( v639->max_length <= 3 )
    goto LABEL_1321;
  v639->m_Items[3] = (System_String_o *)isWin;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v639->m_Items[3],
    (System_Int32_array **)isWin,
    (System_String_array **)method,
    v661,
    v662,
    v663,
    v664,
    v665);
  if ( !v641[105] )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v666);
    v641[105] = 1;
  }
  v667 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v667 = TerminalPramsManager_TypeInfo;
  }
  v705[0] = v667->static_fields->_IsQuestClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v705, 0LL);
  v673 = (System_Int32_array **)result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B170BC(result, v639->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
  }
  if ( v639->max_length <= 4 )
    goto LABEL_1321;
  v639->m_Items[4] = (System_String_o *)v673;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v639->m_Items[4],
    v673,
    (System_String_array **)method,
    v668,
    v669,
    v670,
    v671,
    v672);
  result = (BattleResultComponent_resultData_array *)StringLiteral_698;
  if ( StringLiteral_698 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B170BC(StringLiteral_698, v639->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1323;
    *(_QWORD *)&isWin = StringLiteral_698;
  }
  else
  {
    *(_QWORD *)&isWin = 0LL;
  }
  if ( v639->max_length <= 5 )
    goto LABEL_1321;
  v639->m_Items[5] = (System_String_o *)isWin;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v639->m_Items[5],
    (System_Int32_array **)isWin,
    (System_String_array **)method,
    v674,
    v675,
    v676,
    v677,
    v678);
  if ( !byte_40F6059 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v679);
    byte_40F6059 = 1;
  }
  v680 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v680 = TerminalPramsManager_TypeInfo;
  }
  v705[0] = v680->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v705, 0LL);
  v686 = (System_Int32_array **)result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B170BC(result, v639->obj.klass->_1.element_class);
    if ( !result )
    {
LABEL_1323:
      sub_B170F4(result);
      sub_B170A0();
    }
  }
  if ( v639->max_length <= 6 )
    goto LABEL_1321;
  v639->m_Items[6] = (System_String_o *)v686;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v639->m_Items[6],
    v686,
    (System_String_array **)method,
    v681,
    v682,
    v683,
    v684,
    v685);
  v687 = System_String__Concat_43823856(v639, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16222, v687, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v688);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v689);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v690);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v691);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v692);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v693) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6046 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v694);
      byte_40F6046 = 1;
    }
    v695 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v695 = TerminalPramsManager_TypeInfo;
    }
    v695->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_40F604D )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v694);
      byte_40F604D = 1;
    }
    v696 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v696 = TerminalPramsManager_TypeInfo;
    }
    v696->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_40F604E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v694);
      v696 = TerminalPramsManager_TypeInfo;
      byte_40F604E = 1;
    }
    if ( (BYTE3(v696->vtable._0_Equals.methodPtr) & 4) != 0 && !v696->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v696);
      v696 = TerminalPramsManager_TypeInfo;
    }
    v696->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_40F6E20 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v694);
      v696 = TerminalPramsManager_TypeInfo;
      byte_40F6E20 = 1;
    }
    if ( (BYTE3(v696->vtable._0_Equals.methodPtr) & 4) != 0 && !v696->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v696);
      v696 = TerminalPramsManager_TypeInfo;
    }
    v696->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v696);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0

  if ( (byte_40F6D66 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D66 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E08 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E08 = 1;
  }
  v2 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(v2[2].klass->vtable[11].methodPtr) = 0;
  TerminalPramsManager__BlankEarthSpotId_SaveData(v2);
}


void __fastcall TerminalPramsManager__ResetResumeScriptWithMap(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v8; // x0
  BattleServantConfConponent_o *p_TalkScriptInfo_k__BackingField; // x0
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0

  if ( (byte_40F6D6C & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D6C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E09 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E09 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_40F6E0A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v8 = TerminalPramsManager_TypeInfo;
    byte_40F6E0A = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_40F6E0B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    v8 = TerminalPramsManager_TypeInfo;
    byte_40F6E0B = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = (BattleServantConfConponent_o *)&v8->static_fields->_TalkScriptInfo_k__BackingField;
  p_TalkScriptInfo_k__BackingField->klass = 0LL;
  sub_B16F98(p_TalkScriptInfo_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
  if ( !byte_40F6E0C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40F6E0C = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
}


void __fastcall TerminalPramsManager__SaveClearDatas(
        BattleResultComponent_resultData_array *result,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  TerminalPramsManager_c *v10; // x0
  _BOOL8 v11; // x0
  BattleResultComponent_resultData_o *v12; // x0
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v15; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w21
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v18; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  _BOOL4 IsOrdealCallWarClear_k__BackingField; // w24
  QuestRewardInfo_array *v21; // x23
  bool isWarBoardClear; // w19
  bool v23; // zf
  int32_t eventMuralId; // w21
  bool v25; // w26
  TerminalPramsManager_ClearData_o *v26; // x25
  __int64 v27; // x1
  TerminalPramsManager_c *v28; // x0
  TerminalPramsManager_ClearData_c *v29; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v31; // x1
  LimitImageAnnounce_array *limitImageAnnounces; // [xsp+B0h] [xbp-F0h]
  int32_t panelEventPoint; // [xsp+BCh] [xbp-E4h]
  BattleDropItem_array *resultEventPanelRewardInfos; // [xsp+C0h] [xbp-E0h]
  BattleDropItem_array *questResultAfterEventRewardInfos; // [xsp+C8h] [xbp-D8h]
  int32_t eventActivityPointEffectState; // [xsp+D4h] [xbp-CCh]
  WarClearReward_array *warClearRewardIn; // [xsp+D8h] [xbp-C8h]
  QuestRewardInfo_array *resultEvTowerRewardInfo; // [xsp+E0h] [xbp-C0h]
  EventTowerReward_o *evTowerReward; // [xsp+E8h] [xbp-B8h]
  CostumeReleaseAnnounce_array *questClearCostumeGet; // [xsp+F0h] [xbp-B0h]
  CostumeReleaseAnnounce_array *questClearCostumeRelease; // [xsp+F8h] [xbp-A8h]
  EventRaceBoostInfo_o *evRace; // [xsp+100h] [xbp-A0h]
  int32_t evpWinType; // [xsp+10Ch] [xbp-94h]
  EventPointWinReward_o *evpWinReward; // [xsp+110h] [xbp-90h]
  UserSuperBossEntity_array *oldPersonalBoss; // [xsp+118h] [xbp-88h]
  UserSuperBossEntity_array *oldSuperBoss; // [xsp+120h] [xbp-80h]
  int32_t groupjoin; // [xsp+128h] [xbp-78h]
  int32_t clearLastBattleRaidId; // [xsp+12Ch] [xbp-74h]
  int32_t clearBattleRaidId; // [xsp+130h] [xbp-70h]
  _BOOL4 IsQuestClear_k__BackingField; // [xsp+134h] [xbp-6Ch]
  QuestClearHeroineInfo_o *mQuestClearHeroineInfo; // [xsp+138h] [xbp-68h]
  QuestRewardInfo_array *mQuestPhaseRewardInfos; // [xsp+140h] [xbp-60h]

  if ( (byte_40F6DA6 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_ClearData_TypeInfo, method);
    sub_B16FFC(&JsonManager_TypeInfo, v6);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    byte_40F6DA6 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v8->static_fields->mQuestRewardInfos;
  if ( result )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
      byte_40F6057 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v11 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v10->static_fields->_QuestId_k__BackingField, method);
    if ( v11 )
    {
      if ( !result->max_length )
      {
        sub_B17100(v11, method, v2);
        sub_B170A0();
      }
      v12 = result->m_Items[0];
      if ( !v12 )
        sub_B170D4();
      if ( BattleResultComponent_resultData__checkResultDispFlag(v12, 2048, 0LL) )
        mQuestRewardInfos = 0LL;
    }
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_40F6069 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6069 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v13->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_40F6059 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6059 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v15 = v13->static_fields;
  IsPhaseClear_k__BackingField = v15->_IsPhaseClear_k__BackingField;
  clearLastBattleRaidId = v15->clearLastBattleRaidId;
  clearBattleRaidId = v15->clearBattleRaidId;
  groupjoin = v15->joinGroupId;
  if ( !byte_40F6E51 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6E51 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v13->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_40F6E4F )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6E4F = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v13->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_40F6E52 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6E52 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  evpWinReward = v13->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_40F6E47 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6E47 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v13->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_40F6E4A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6E4A = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  evRace = v13->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_40F6068 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6068 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v13->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_40F6060 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6060 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet = v13->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_40F6064 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6064 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v13->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_40F6E53 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6E53 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  resultEvTowerRewardInfo = v13->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_40F6056 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6056 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v13->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_40F6076 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6076 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v13->static_fields->_warClearReward_k__BackingField;
  if ( !byte_40F6E54 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6E54 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v13->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_40F6061 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6061 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v18 = v13->static_fields;
  IsWarBoardClear_k__BackingField = v18->_IsWarBoardClear_k__BackingField;
  questResultAfterEventRewardInfos = v18->mQuestResultAfterEventRewardInfos;
  resultEventPanelRewardInfos = v18->mResultEventPanelRewardInfos;
  panelEventPoint = v18->panelEventPoint;
  if ( !byte_40F606A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F606A = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v13->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_40F605E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F605E = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v13->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_40F6062 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6062 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v21 = mQuestRewardInfos;
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v21 = mQuestRewardInfos;
  }
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v23 = !IsPhaseClear_k__BackingField;
  eventMuralId = v13->static_fields->_EventMuralId_k__BackingField;
  v25 = !v23;
  v26 = (TerminalPramsManager_ClearData_o *)sub_B170CC(TerminalPramsManager_ClearData_TypeInfo, method, v2, v3, v4);
  TerminalPramsManager_ClearData___ctor_20347828(
    v26,
    mQuestClearHeroineInfo,
    v21,
    mQuestPhaseRewardInfos,
    IsQuestClear_k__BackingField,
    v25,
    clearLastBattleRaidId,
    clearBattleRaidId,
    groupjoin,
    oldSuperBoss,
    oldPersonalBoss,
    evpWinReward,
    evpWinType,
    evRace,
    questClearCostumeRelease,
    questClearCostumeGet,
    evTowerReward,
    resultEvTowerRewardInfo,
    IsDispOnly_k__BackingField,
    warClearRewardIn,
    eventActivityPointEffectState,
    isWarBoardClear,
    questResultAfterEventRewardInfos,
    resultEventPanelRewardInfos,
    panelEventPoint,
    limitImageAnnounces,
    IsOrdealCallWarClear_k__BackingField,
    eventMuralId,
    0LL);
  if ( !byte_40F6E55 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v27);
    byte_40F6E55 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v29 = TerminalPramsManager_ClearData_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v29 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v29->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v31 = JsonManager__toJson((Il2CppObject *)v26, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v31, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v5; // x0

  if ( (byte_40F6DAC & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11524, v2);
    byte_40F6DAC = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E57 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E57 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_B170D4();
  v5 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11524, v5, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestInfo_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_40F6D78 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_13566, v2);
    sub_B16FFC(&StringLiteral_13569, v3);
    byte_40F6D78 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6057 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13569,
    v4->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F6058 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13566,
    v6->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *Empty; // x19
  TerminalPramsManager_c *v14; // x0
  System_Collections_Generic_Dictionary_int__int__o *QuestRandomGroupList_k__BackingField; // x0
  int key; // w20
  int key_high; // w25
  Il2CppObject *v18; // x20
  Il2CppObject *v19; // x2
  System_String_o *v20; // x1
  __int128 v21[2]; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+20h] [xbp-60h] BYREF
  int v23; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_40F6DB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    sub_B16FFC(&string_TypeInfo, v8);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_11533, v10);
    sub_B16FFC(&StringLiteral_23532, v11);
    sub_B16FFC(&StringLiteral_698, v12);
    byte_40F6DB0 = 1;
  }
  memset(&v22, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F68A1 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F68A1 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v14->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v21,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_2DDD528 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v22.fields.dictionary = v21[0];
  v22.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v21[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v22,
            (const MethodInfo_272605C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v22.fields.current.fields.key;
    key_high = HIDWORD(v22.fields.current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_43743732(Empty, (System_String_o *)StringLiteral_698, 0LL);
    LODWORD(v21[0]) = key;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v21);
    v23 = key_high;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v20 = System_String__Format_43739268((System_String_o *)StringLiteral_23532, v18, v19, 0LL);
    Empty = System_String__Concat_43743732(Empty, v20, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v22,
    (const MethodInfo_27261A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11533, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__Save_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  TerminalPramsManager_c *v29; // x0
  __int64 v30; // x1
  TerminalPramsManager_c *v31; // x0
  __int64 v32; // x1
  TerminalPramsManager_c *v33; // x0
  __int64 v34; // x1
  TerminalPramsManager_c *v35; // x0
  __int64 v36; // x1
  TerminalPramsManager_c *v37; // x0
  __int64 v38; // x1
  TerminalPramsManager_c *v39; // x0
  System_String_o *v40; // x0
  __int64 v41; // x1
  TerminalPramsManager_c *v42; // x0
  TerminalPramsManager_c *v43; // x0
  __int64 v44; // x1
  TerminalPramsManager_c *v45; // x0
  __int64 v46; // x1
  TerminalPramsManager_c *v47; // x0
  __int64 v48; // x1
  TerminalPramsManager_c *v49; // x0
  __int64 v50; // x1
  TerminalPramsManager_c *v51; // x0
  System_String_o *v52; // x0
  __int64 v53; // x1
  TerminalPramsManager_c *v54; // x0
  __int64 v55; // x1
  TerminalPramsManager_c *v56; // x0
  __int64 v57; // x1
  TerminalPramsManager_c *v58; // x0
  __int64 v59; // x1
  TerminalPramsManager_c *v60; // x0
  __int64 v61; // x1
  TerminalPramsManager_c *v62; // x0
  __int64 v63; // x1
  TerminalPramsManager_c *v64; // x0
  __int64 v65; // x1
  TerminalPramsManager_c *v66; // x0
  __int64 v67; // x1
  TerminalPramsManager_c *v68; // x0
  __int64 v69; // x1
  TerminalPramsManager_c *v70; // x0
  __int64 v71; // x1
  TerminalPramsManager_c *v72; // x0
  __int64 v73; // x1
  System_String_o *v74; // x19
  TerminalPramsManager_c *v75; // x0
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  __int64 v78; // x1
  TerminalPramsManager_c *v79; // x0
  __int64 v80; // x1
  TerminalPramsManager_c *v81; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF
  int64_t EndTime_k__BackingField; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F6D76 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_13559, v2);
    sub_B16FFC(&StringLiteral_11531, v3);
    sub_B16FFC(&StringLiteral_13555, v4);
    sub_B16FFC(&StringLiteral_13560, v5);
    sub_B16FFC(&StringLiteral_13566, v6);
    sub_B16FFC(&StringLiteral_13574, v7);
    sub_B16FFC(&StringLiteral_13558, v8);
    sub_B16FFC(&StringLiteral_11528, v9);
    sub_B16FFC(&StringLiteral_13561, v10);
    sub_B16FFC(&StringLiteral_11527, v11);
    sub_B16FFC(&StringLiteral_11532, v12);
    sub_B16FFC(&StringLiteral_11520, v13);
    sub_B16FFC(&StringLiteral_11529, v14);
    sub_B16FFC(&StringLiteral_13569, v15);
    sub_B16FFC(&StringLiteral_11539, v16);
    sub_B16FFC(&StringLiteral_13573, v17);
    sub_B16FFC(&StringLiteral_13578, v18);
    sub_B16FFC(&StringLiteral_13571, v19);
    sub_B16FFC(&StringLiteral_13575, v20);
    sub_B16FFC(&StringLiteral_13556, v21);
    sub_B16FFC(&StringLiteral_11523, v22);
    sub_B16FFC(&StringLiteral_13579, v23);
    sub_B16FFC(&StringLiteral_11522, v24);
    sub_B16FFC(&StringLiteral_698, v25);
    sub_B16FFC(&StringLiteral_11521, v26);
    sub_B16FFC(&StringLiteral_11530, v27);
    sub_B16FFC(&StringLiteral_11538, v28);
    byte_40F6D76 = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6043 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6043 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13558,
    v29->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v30);
    byte_40F6044 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13578,
    v31->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_40F6053 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v32);
    byte_40F6053 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13571,
    v33->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v34);
    byte_40F6057 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13569,
    v35->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v36);
    byte_40F6058 = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13566,
    v37->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_40F6974 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v38);
    byte_40F6974 = 1;
  }
  v39 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v39 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v39->static_fields->_EndTime_k__BackingField;
  v40 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13559, v40, 0LL);
  if ( !byte_40F608D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v41);
    byte_40F608D = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13561,
    v42->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v43 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v43 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13579,
    v43->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_40F6E31 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v44);
    byte_40F6E31 = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13574,
    v45->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_40F6E32 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v46);
    byte_40F6E32 = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v47 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13575,
    v47->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_40F6E33 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v48);
    byte_40F6E33 = 1;
  }
  v49 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v49 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13560,
    v49->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_40F6E34 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v50);
    byte_40F6E34 = 1;
  }
  v51 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v51 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v51->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v52 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13573, v52, 0LL);
  if ( !byte_40F6E35 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v53);
    byte_40F6E35 = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v54 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13555,
    v54->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_40F6E36 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v55);
    byte_40F6E36 = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13556,
    v56->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_40F6E37 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v57);
    byte_40F6E37 = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11531,
    v58->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_40F6083 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v59);
    byte_40F6083 = 1;
  }
  v60 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v60 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11528,
    v60->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6084 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v61);
    byte_40F6084 = 1;
  }
  v62 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v62 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11529,
    v62->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_40F6E38 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v63);
    byte_40F6E38 = 1;
  }
  v64 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v64 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11530,
    v64->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E39 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v65);
    byte_40F6E39 = 1;
  }
  v66 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v66 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11539,
    v66->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11522,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11521,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_40F6050 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v67);
    byte_40F6050 = 1;
  }
  v68 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v68 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11538,
    v68->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_40F68A3 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v69);
    byte_40F68A3 = 1;
  }
  v70 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v70 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11520,
    v70->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_40F606D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v71);
    byte_40F606D = 1;
  }
  v72 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v72 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v72->static_fields->_MapModelClearQuestId_k__BackingField;
  v74 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_40F606E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v73);
    byte_40F606E = 1;
  }
  v75 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v75 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v75->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v76 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v77 = System_String__Concat_43746016(v74, (System_String_o *)StringLiteral_698, v76, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11527, v77, 0LL);
  if ( !byte_40F6E3A )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v78);
    byte_40F6E3A = 1;
  }
  v79 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v79 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11523,
    v79->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E3B )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v80);
    byte_40F6E3B = 1;
  }
  v81 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v81 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11532,
    v81->static_fields->_PlayerGenderType_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__SendClearQuestToAdManager(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  bool IsMainStoryForQuestId; // w21
  AdManager_o *Instance; // x0
  int32_t v9; // w1

  if ( (byte_40F6DA0 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F6DA0 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    if ( IsMainStoryForQuestId )
      v9 = 10;
    else
      v9 = 9;
    AdManager__TrackEvent(Instance, v9, 10, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SendOpenedQuestIdToAdManager(int32_t clearedQuestId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x20
  WebViewManager_o *Instance; // x0
  System_Int32_array **MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  QuestMaster_o *v45; // x0
  WebViewManager_o *v46; // x0
  WarQuestSelectionMaster_o *v47; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x21
  int32_t SpotId; // w0
  const MethodInfo *v50; // x1
  int32_t v51; // w21
  WebViewManager_o *v52; // x0
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  WebViewManager_o *v60; // x0
  QuestReleaseMaster_o *v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v67; // x8
  struct TerminalPramsManager___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__603_0; // x21
  Il2CppObject *v70; // x22
  struct TerminalPramsManager___c_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x19
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  System_Func_int__BattleActionData_SideEffectData__o *v83; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x19
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v89; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  TerminalPramsManager___c_c *v95; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x19
  struct TerminalPramsManager___c_StaticFields *v97; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__603_3; // x20
  Il2CppObject *v99; // x21
  struct TerminalPramsManager___c_StaticFields *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v107; // x0
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  TerminalPramsManager___c_c *v112; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x19
  struct TerminalPramsManager___c_StaticFields *v114; // x9
  System_Func_int__int__o *_9__603_4; // x20
  Il2CppObject *v116; // x21
  struct TerminalPramsManager___c_StaticFields *v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x0
  int32_t v125; // w0
  int32_t v126; // w19
  AdManager_o *v127; // x0
  WarEntity_o *v128; // [xsp+8h] [xbp-38h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F6DA1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, v8);
    sub_B16FFC(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v13);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v14);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_QuestEntity___, v15);
    sub_B16FFC(&Method_System_Func_QuestEntity__int___ctor__, v16);
    sub_B16FFC(&Method_System_Func_QuestEntity__bool___ctor__, v17);
    sub_B16FFC(&Method_System_Func_int__int___ctor__, v18);
    sub_B16FFC(&Method_System_Func_int__QuestEntity___ctor__, v19);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v20);
    sub_B16FFC(&System_Func_QuestEntity__int__TypeInfo, v21);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v22);
    sub_B16FFC(&System_Func_int__QuestEntity__TypeInfo, v23);
    sub_B16FFC(&System_Func_QuestEntity__bool__TypeInfo, v24);
    sub_B16FFC(&System_Func_int__int__TypeInfo, v25);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v26);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v28);
    sub_B16FFC(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__603_0__, v29);
    sub_B16FFC(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__603_3__, v30);
    sub_B16FFC(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__603_4__, v31);
    sub_B16FFC(&Method_TerminalPramsManager___c__DisplayClass603_0__SendOpenedQuestIdToAdManager_b__1__, v32);
    sub_B16FFC(&Method_TerminalPramsManager___c__DisplayClass603_0__SendOpenedQuestIdToAdManager_b__2__, v33);
    sub_B16FFC(&TerminalPramsManager___c__DisplayClass603_0_TypeInfo, v34);
    sub_B16FFC(&TerminalPramsManager___c_TypeInfo, v35);
    byte_40F6DA1 = 1;
  }
  entity = 0LL;
  v128 = 0LL;
  v36 = sub_B170CC(TerminalPramsManager___c__DisplayClass603_0_TypeInfo, method, v2, v3, v4);
  TerminalPramsManager___c__DisplayClass603_0___ctor((TerminalPramsManager___c__DisplayClass603_0_o *)v36, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    MasterData_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v36 )
      goto LABEL_50;
    *(_QWORD *)(v36 + 16) = MasterData_WarQuestSelectionMaster;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v36 + 16),
      MasterData_WarQuestSelectionMaster,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v45 = *(QuestMaster_o **)(v36 + 16);
    if ( !v45 )
      goto LABEL_50;
    if ( !QuestMaster__TryGetQuestEntity(v45, &entity, clearedQuestId, 0LL) )
      return;
    v46 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v46 )
      goto LABEL_50;
    v47 = DataManager__GetMasterData_WarQuestSelectionMaster_(
            (DataManager_o *)v46,
            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_50;
    v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)v47;
    SpotId = QuestEntity__getSpotId(entity, 0LL);
    if ( !v48 )
      goto LABEL_50;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            v48,
            &v128,
            SpotId,
            (const MethodInfo_266F3E4 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
      return;
    if ( !v128 )
      goto LABEL_50;
    v51 = *(&v128->fields.id + 1);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( TerminalPramsManager__IsMustPlayMainStory(v51, v50) )
    {
      if ( !entity )
        goto LABEL_50;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v52 )
        goto LABEL_50;
      v53 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v52,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      *(_QWORD *)(v36 + 24) = v53;
      sub_B16F98((BattleServantConfConponent_o *)(v36 + 24), v53, v54, v55, v56, v57, v58, v59);
      v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v60 )
        goto LABEL_50;
      v61 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v60,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !v61 )
        goto LABEL_50;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               v61,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v67 = TerminalPramsManager___c_TypeInfo;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v67 = TerminalPramsManager___c_TypeInfo;
      }
      static_fields = v67->static_fields;
      _9__603_0 = static_fields->__9__603_0;
      if ( !_9__603_0 )
      {
        if ( (BYTE3(v67->vtable._0_Equals.methodPtr) & 4) != 0 && !v67->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v67);
          static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v70 = (Il2CppObject *)static_fields->__9;
        _9__603_0 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v62, v63, v64, v65);
        System_Func_int__bool____ctor(
          _9__603_0,
          v70,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__603_0__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        v71 = TerminalPramsManager___c_TypeInfo->static_fields;
        v71->__9__603_0 = _9__603_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v71->__9__603_0,
          (System_Int32_array **)_9__603_0,
          v72,
          v73,
          v74,
          v75,
          v76,
          v77);
      }
      v78 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__603_0,
              (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
      v83 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                     System_Func_int__QuestEntity__TypeInfo,
                                                                     v79,
                                                                     v80,
                                                                     v81,
                                                                     v82);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v83,
        (Il2CppObject *)v36,
        Method_TerminalPramsManager___c__DisplayClass603_0__SendOpenedQuestIdToAdManager_b__1__,
        (const MethodInfo_2B66764 *)Method_System_Func_int__QuestEntity___ctor__);
      v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                   v78,
                                                                   (System_Func_TSource__TResult__o *)v83,
                                                                   (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v89 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_QuestEntity__bool__TypeInfo,
                                                                                 v85,
                                                                                 v86,
                                                                                 v87,
                                                                                 v88);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v89,
        (Il2CppObject *)v36,
        Method_TerminalPramsManager___c__DisplayClass603_0__SendOpenedQuestIdToAdManager_b__2__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_QuestEntity__bool___ctor__);
      v90 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v84,
              (System_Func_TSource__bool__o *)v89,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v95 = TerminalPramsManager___c_TypeInfo;
      v96 = v90;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v95 = TerminalPramsManager___c_TypeInfo;
      }
      v97 = v95->static_fields;
      _9__603_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v97->__9__603_3;
      if ( !_9__603_3 )
      {
        if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v95);
          v97 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v99 = (Il2CppObject *)v97->__9;
        _9__603_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                      System_Func_QuestEntity__int__TypeInfo,
                                                                                      v91,
                                                                                      v92,
                                                                                      v93,
                                                                                      v94);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__603_3,
          v99,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__603_3__,
          (const MethodInfo_2B6B6EC *)Method_System_Func_QuestEntity__int___ctor__);
        v100 = TerminalPramsManager___c_TypeInfo->static_fields;
        v100->__9__603_3 = (struct System_Func_QuestEntity__int__o *)_9__603_3;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v100->__9__603_3,
          (System_Int32_array **)_9__603_3,
          v101,
          v102,
          v103,
          v104,
          v105,
          v106);
      }
      v107 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
               v96,
               (System_Func_TSource__TResult__o *)_9__603_3,
               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v112 = TerminalPramsManager___c_TypeInfo;
      v113 = (System_Collections_Generic_IEnumerable_TSource__o *)v107;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v112 = TerminalPramsManager___c_TypeInfo;
      }
      v114 = v112->static_fields;
      _9__603_4 = v114->__9__603_4;
      if ( !_9__603_4 )
      {
        if ( (BYTE3(v112->vtable._0_Equals.methodPtr) & 4) != 0 && !v112->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v112);
          v114 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v116 = (Il2CppObject *)v114->__9;
        _9__603_4 = (System_Func_int__int__o *)sub_B170CC(System_Func_int__int__TypeInfo, v108, v109, v110, v111);
        System_Func_int__int____ctor(
          _9__603_4,
          v116,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__603_4__,
          (const MethodInfo_2B65E70 *)Method_System_Func_int__int___ctor__);
        v117 = TerminalPramsManager___c_TypeInfo->static_fields;
        v117->__9__603_4 = _9__603_4;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v117->__9__603_4,
          (System_Int32_array **)_9__603_4,
          v118,
          v119,
          v120,
          v121,
          v122,
          v123);
      }
      v124 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                    v113,
                                                                    (System_Func_TSource__TKey__o *)_9__603_4,
                                                                    (const MethodInfo_19BD9A4 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v125 = System_Linq_Enumerable__FirstOrDefault_int_(
               v124,
               (const MethodInfo_18D754C *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v125 )
      {
        v126 = v125;
        v127 = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( v127 )
        {
          AdManager__SetOpenedStoryQuest(v127, v126, 0LL);
          return;
        }
LABEL_50:
        sub_B170D4();
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__SendStartQuestToAdManager(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  bool IsMainStoryForQuestId; // w21
  AdManager_o *Instance; // x0
  int32_t v9; // w1

  if ( (byte_40F6D9F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F6D9F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( TerminalPramsManager__CanSendTrackEvent(questId, *(const MethodInfo **)&questPhase) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v6);
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    if ( IsMainStoryForQuestId )
      v9 = 10;
    else
      v9 = 9;
    AdManager__TrackEvent(Instance, v9, 9, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  QuestTree_o *v7; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v9; // x1
  MapControl_QuestInfo_o *v10; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v12; // x0
  __int64 v13; // x1
  int32_t SpotID; // w21
  TerminalPramsManager_c *v15; // x0
  int32_t v16; // w21
  int32_t questPhase; // w21
  int64_t endTime; // x20
  __int64 v19; // x1
  __int64 v20; // x1
  QuestTree_o *v21; // x20
  TerminalPramsManager_c *v22; // x0
  WarEntity_o *WarEntityByWarID; // x0
  TerminalPramsManager_c *v24; // x0
  int v25; // w8
  TerminalSceneComponent_c *v26; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v28; // x1
  TerminalSceneComponent_c *v29; // x0
  struct TerminalSceneComponent_o *v30; // x8
  UnityEngine_Object_o *mTerminalList; // x20
  __int64 v32; // x1
  TerminalSceneComponent_c *v33; // x0
  struct TerminalSceneComponent_o *v34; // x8
  ScrTerminalListTop_o *v35; // x20
  TerminalPramsManager_c *v36; // x0
  TerminalSceneComponent_c *v37; // x0
  struct TerminalSceneComponent_o *v38; // x8
  UnityEngine_Object_o *mTitleInfo; // x20
  TerminalSceneComponent_c *v40; // x0
  struct TerminalSceneComponent_o *v41; // x8
  TitleInfoControl_o *v42; // x0
  const MethodInfo *v43; // x0

  if ( (byte_40F6D6B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v4);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v6);
    byte_40F6D6B = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  if ( SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v7 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( v7 )
    {
      QuestInfo = QuestTree__GetQuestInfo(v7, questId, 0LL);
      if ( !QuestInfo )
        return;
      v10 = QuestInfo;
      warId = QuestInfo->fields.warId;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6046 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
        byte_40F6046 = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      v12->static_fields->_WarId_k__BackingField = warId;
      SpotID = MapControl_QuestInfo__GetSpotID(v10, 0LL);
      if ( !byte_40F6079 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
        byte_40F6079 = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_SpotId_k__BackingField = SpotID;
      v16 = v10->fields.questId;
      if ( !byte_40F6048 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
        v15 = TerminalPramsManager_TypeInfo;
        byte_40F6048 = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_QuestId_k__BackingField = v16;
      questPhase = v10->fields.questPhase;
      if ( !byte_40F6049 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
        v15 = TerminalPramsManager_TypeInfo;
        byte_40F6049 = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_PhaseCnt_k__BackingField = questPhase;
      endTime = v10->fields.endTime;
      if ( !byte_40F6093 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
        v15 = TerminalPramsManager_TypeInfo;
        byte_40F6093 = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_EndTime_k__BackingField = endTime;
      if ( !byte_40F608C )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
        v15 = TerminalPramsManager_TypeInfo;
        byte_40F608C = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      if ( !SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__) )
        goto LABEL_171;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v21 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6044 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v20);
        byte_40F6044 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      if ( !v21 )
        goto LABEL_168;
      WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v21, v22->static_fields->_WarId_k__BackingField, 0LL);
      if ( WarEntityByWarID )
      {
        if ( WarEntity__IsFolder(WarEntityByWarID, 0LL) )
        {
          if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F604C )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v19);
            byte_40F604C = 1;
          }
          v24 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v24 = TerminalPramsManager_TypeInfo;
          }
          v25 = 3;
        }
        else
        {
          if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F604C )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v19);
            byte_40F604C = 1;
          }
          v24 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v24 = TerminalPramsManager_TypeInfo;
          }
          v25 = 2;
        }
      }
      else
      {
LABEL_171:
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F604C )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v19);
          byte_40F604C = 1;
        }
        v24 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v24 = TerminalPramsManager_TypeInfo;
        }
        v25 = 1;
      }
      v24->static_fields->_DispState_k__BackingField = v25;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v19);
        byte_40F6042 = 1;
      }
      v26 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v26 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v26->static_fields->mInstance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
        goto LABEL_159;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v28);
        byte_40F6042 = 1;
      }
      v29 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v29 = TerminalSceneComponent_TypeInfo;
      }
      v30 = v29->static_fields->mInstance;
      if ( v30 )
      {
        mTerminalList = (UnityEngine_Object_o *)v30->fields.mTerminalList;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(mTerminalList, 0LL, 0LL) )
        {
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v32);
            byte_40F6042 = 1;
          }
          v33 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v33 = TerminalSceneComponent_TypeInfo;
          }
          v34 = v33->static_fields->mInstance;
          if ( !v34 )
            goto LABEL_168;
          v35 = v34->fields.mTerminalList;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F6044 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v32);
            byte_40F6044 = 1;
          }
          v36 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v36 = TerminalPramsManager_TypeInfo;
          }
          if ( !v35 )
            goto LABEL_168;
          ScrTerminalListTop__RequestChangeTerminalListBG(v35, v36->static_fields->_WarId_k__BackingField, 0LL);
        }
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v32);
          byte_40F6042 = 1;
        }
        v37 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v37 = TerminalSceneComponent_TypeInfo;
        }
        v38 = v37->static_fields->mInstance;
        if ( v38 )
        {
          mTitleInfo = (UnityEngine_Object_o *)v38->fields.mTitleInfo;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(mTitleInfo, 0LL, 0LL) )
            goto LABEL_159;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v28);
            byte_40F6042 = 1;
          }
          v40 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v40 = TerminalSceneComponent_TypeInfo;
          }
          v41 = v40->static_fields->mInstance;
          if ( v41 )
          {
            v42 = v41->fields.mTitleInfo;
            if ( v42 )
            {
              TitleInfoControl__CloseEventBannerWindow(v42, 0LL);
LABEL_159:
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_40F604D )
              {
                sub_B16FFC(&TerminalPramsManager_TypeInfo, v28);
                byte_40F604D = 1;
              }
              v43 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v43 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
              }
              BYTE6(v43[2].klass->vtable[22].methodPtr) = 1;
              TerminalPramsManager__Save_SaveData(v43);
              return;
            }
          }
        }
      }
    }
LABEL_168:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__SetFolderLastClickedIdx(int32_t warId, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  System_Collections_Generic_Dictionary_int__int__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  System_Collections_Generic_Dictionary_int__int__o *v22; // x0
  __int64 v23; // x1
  TerminalPramsManager_c *v24; // x0

  if ( (byte_40F6D9C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40F6D9C = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  if ( !v11->static_fields->folderLastIdxs )
  {
    v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 *(_QWORD *)&idx,
                                                                 method,
                                                                 v3,
                                                                 v4);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v12,
      (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v19 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v19->static_fields;
    static_fields->folderLastIdxs = v12;
    sub_B16F98(
      (BattleServantConfConponent_o *)&static_fields->folderLastIdxs,
      (System_Int32_array **)v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v11 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v11->static_fields->folderLastIdxs;
  if ( !folderLastIdxs
    || (System_Collections_Generic_Dictionary_int__int___Remove(
          folderLastIdxs,
          warId,
          (const MethodInfo_2DDE8AC *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (v22 = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    v22,
    warId,
    idx,
    (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_40F6E0E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v23);
    byte_40F6E0E = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  v24->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
}


void __fastcall TerminalPramsManager__SetWarStartedId(int32_t war_id, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v6; // x0
  System_Int32_array **v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = war_id;
  if ( (byte_40F6D9A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_26, v3);
    byte_40F6D9A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !TerminalPramsManager__IsWarStartedId(war_id, method) )
  {
    v4 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    mTerminalWarStartedIds = v4->static_fields->mTerminalWarStartedIds;
    v6 = System_Int32__ToString((int32_t)&v16, 0LL);
    v7 = (System_Int32_array **)System_String__Concat_43746016(
                                  mTerminalWarStartedIds,
                                  v6,
                                  (System_String_o *)StringLiteral_26,
                                  0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = (struct System_String_o *)v7;
    sub_B16F98((BattleServantConfConponent_o *)&static_fields->mTerminalWarStartedIds, v7, v9, v10, v11, v12, v13, v14);
    TerminalPramsManager__Save_SaveData(v15);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D77 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_13571, v2);
    byte_40F6D77 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6053 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6053 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13571,
    v3->static_fields->_SpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0

  if ( (byte_40F6D7D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_13555, v2);
    sub_B16FFC(&StringLiteral_13556, v3);
    byte_40F6D7D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E35 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E35 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13555,
    v4->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_40F6E36 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F6E36 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13556,
    v6->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D82 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11534, v2);
    byte_40F6D82 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11534, v3->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v9; // x0
  TerminalPramsManager_c *v10; // x0

  if ( (byte_40F6D81 & 1) == 0 )
  {
    sub_B16FFC(&EventConquestInfo___TypeInfo, v1);
    sub_B16FFC(&JsonManager_TypeInfo, v3);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_11535, v5);
    sub_B16FFC(&StringLiteral_11534, v6);
    byte_40F6D81 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v7->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      eventConquestInfos = TerminalPramsManager_TypeInfo->static_fields->eventConquestInfos;
    }
  }
  else
  {
    eventConquestInfos = (struct EventConquestInfo_array *)sub_B17014(EventConquestInfo___TypeInfo, 0LL, v2);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v9 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11535, v9, 0LL);
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11534,
    v10->static_fields->eventConquestInfoDisp,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  EventHarvestGrowthInfo_o *eventHarvestGrowthInfo; // x19
  System_String_o *v10; // x0

  if ( (byte_40F6D83 & 1) == 0 )
  {
    sub_B16FFC(&EventHarvestGrowthInfo_TypeInfo, v1);
    sub_B16FFC(&JsonManager_TypeInfo, v5);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_11536, v7);
    byte_40F6D83 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = v8->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      eventHarvestGrowthInfo = TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (EventHarvestGrowthInfo_o *)sub_B170CC(EventHarvestGrowthInfo_TypeInfo, v1, v2, v3, v4);
    EventHarvestGrowthInfo___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v10 = JsonManager__toJson((Il2CppObject *)eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11536, v10, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v7; // x0

  if ( (byte_40F6D7F & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, v1);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_13557, v3);
    byte_40F6D7F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E3E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E3E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v4);
    if ( !byte_40F6E3E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
      byte_40F6E3E = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    BeforeEventSubmarineSaveData_k__BackingField = (Il2CppObject *)v5->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v7 = JsonManager__toJson(BeforeEventSubmarineSaveData_k__BackingField, 0, 0, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13557, v7, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D8B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11538, v2);
    byte_40F6D8B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6050 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6050 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11538,
    v3->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D8A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_11539, v2);
    byte_40F6D8A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E39 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6E39 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11539,
    v3->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_40F6D7C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_13577, method);
    sub_B16FFC(&StringLiteral_13576, v3);
    byte_40F6D7C = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13576,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13577,
      terminalTransitionInfo->fields.voiceAssetName,
      0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__UpdateEventRaidDefeatedEffectInfo(
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  struct EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *playedEffectList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_int__o *v18; // x21
  __int64 v19; // x1
  TerminalPramsManager_c *v20; // x0
  struct EventRaidDefeatedEffectInfo_o *v21; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v22; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F6DAB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&day);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40F6DAB = 1;
  }
  value = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6E57 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_40F6E57 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v11->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    goto LABEL_30;
  playedEffectList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)EventRaidDefeatedEffectInfo_k__BackingField->fields.playedEffectList;
  if ( !playedEffectList )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          playedEffectList,
          eventId,
          &value,
          (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v18 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v14,
                                                      v15,
                                                      v16,
                                                      v17);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v18;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E57 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v19);
      byte_40F6E57 = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    v21 = v20->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
    if ( !v21 )
      goto LABEL_30;
    v22 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v21->fields.playedEffectList;
    if ( !v22 )
      goto LABEL_30;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v22,
      eventId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    goto LABEL_28;
  }
  if ( !value )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_int___Contains(
          (System_Collections_Generic_List_int__o *)value,
          day,
          (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
LABEL_28:
    if ( value )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)value,
        day,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      return;
    }
LABEL_30:
    sub_B170D4();
  }
}


int32_t __fastcall TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CA2 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CA2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_AfterActionFocusQuestId_k__BackingField;
}


BattleSetupInfo_o *__fastcall TerminalPramsManager__get_BattleSetupKeep(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CC0 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CC0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BattleSetupKeep_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeClearQuest(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o *v10; // x8
  struct ScrTerminalMap_o *v11; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v13; // x0

  if ( (byte_40F6CF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v3);
    byte_40F6CF2 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v5);
      byte_40F6042 = 1;
    }
    v6 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v6->static_fields->mInstance;
    if ( !mInstance )
      goto LABEL_37;
    mTerminalMap = mInstance->fields.mTerminalMap;
    if ( !mTerminalMap )
      goto LABEL_37;
    if ( *(&mTerminalMap->fields.currentMapLayerId + 1) )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v6);
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v5);
        byte_40F6042 = 1;
      }
      v9 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v9 = TerminalSceneComponent_TypeInfo;
      }
      v10 = v9->static_fields->mInstance;
      if ( v10 )
      {
        v11 = v10->fields.mTerminalMap;
        if ( v11 )
        {
          p_QuestId_k__BackingField = &v11->fields.currentMapLayerId + 1;
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_37:
      sub_B170D4();
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v5);
    byte_40F6057 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  p_QuestId_k__BackingField = &v13->static_fields->_QuestId_k__BackingField;
  return *p_QuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeEventActivityPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D0D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D0D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BeforeEventActivityPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeEventActivityPointGauge(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D0F & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D0F = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
}


EventSaveData_o *__fastcall TerminalPramsManager__get_BeforeEventSubmarineSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D13 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D13 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_BeforeTimeEventDailyPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D01 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D01 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthAfterActionFocusSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D31 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D31 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthRank(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D35 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D35 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BlankEarthRank_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D2F & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D2F = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BlankEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *__fastcall TerminalPramsManager__get_BlankEarthTransformData(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D33 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D33 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_BlankEarthTransformData_k__BackingField;
}


CommonUI_CampaignDirectBonusData_array *__fastcall TerminalPramsManager__get_CampaignDirectBonus(
        const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CDC & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CDC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_CampaignDirectBonus_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_ClearEventQuestIds(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D0B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D0B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_ClearEventQuestIds_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CCC & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CCC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_DataLostBattleEventId_k__BackingField;
}


float __fastcall TerminalPramsManager__get_DataLostBattleResetFadeInTime(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CD4 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CD4 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_DataLostBattleResetFadeInTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CCE & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CCE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_DataLostBattleWarId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_Debug_IsBuildInfoDisp(const MethodInfo *method)
{
  return 0;
}


bool __fastcall TerminalPramsManager__get_Debug_IsDummyErrorSelect(const MethodInfo *method)
{
  return 0;
}


bool __fastcall TerminalPramsManager__get_Debug_IsQuestReleaseAll(const MethodInfo *method)
{
  return 0;
}


bool __fastcall TerminalPramsManager__get_Debug_IsSpeedUp(const MethodInfo *method)
{
  return 0;
}


bool __fastcall TerminalPramsManager__get_Debug_IsWarStartActionSkip(const MethodInfo *method)
{
  return 0;
}


int32_t __fastcall TerminalPramsManager__get_DispState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C84 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C84 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_DispState_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_EndTime(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CC2 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CC2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EndTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventActivityPointEffectState(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D11 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D11 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventActivityPointEffectState_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventBoardGameSquareIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D19 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D19 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventBoardGameSquareIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventDailyPointEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D03 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D03 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventDailyPointEventId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventDailyPointItem(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CFF & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CFF = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventDailyPointItem_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventMuralId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CAE & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CAE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventMuralId_k__BackingField;
}


EventRaidDefeatedEffectInfo_o *__fastcall TerminalPramsManager__get_EventRaidDefeatedEffectInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D15 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D15 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventUIEffectClearQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D3B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D3B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_EventUIEffectClearQuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D4F & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D4F = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsAutoFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoNoSe(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D51 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D51 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsAutoNoSe_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoOpenMasterMission(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D69 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D69 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->mIsAutoOpenMasterMission;
}


bool __fastcall TerminalPramsManager__get_IsAutoResume(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D49 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D49 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsAutoResume_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoShortcut(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D4B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D4B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsAutoShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsBlankEarthShortcutMoving(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D37 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D37 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsBlankEarthShortcutMoving_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsCheckHomeExpirationDateEventMap(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D53 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D53 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->isCheckHomeExpirationDateEventMap;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleAutoReset(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CCA & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CCA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDataLostBattleAutoReset_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleNoticePause(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CD6 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CD6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDataLostBattleNoticePause_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleResetFadeIn(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CD2 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CD2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_AutoWebView(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CA4 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CA4 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDispDone_AutoWebView_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_UIStandFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CA6 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CA6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDispDone_UIStandFigure_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispOnly(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CB4 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CB4 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDispOnly_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispUIStandFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CA8 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CA8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDispUIStandFigure_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDoneShortcut(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C90 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C90 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsDoneShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsEventBoardGameDiceBtnActive(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D1B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D1B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsForceFocusTerminalQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C98 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C98 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsForceFocusTerminalQuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsFromRecollectionBoard(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C96 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C96 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsFromRecollectionBoard_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsInvisibleConnectAndLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D3F & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D3F = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->isInvisibleConnectAndLoad;
}


bool __fastcall TerminalPramsManager__get_IsMapReturnFolder(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D4D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D4D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsMapReturnFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsOrdealCallWarClear(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CAC & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CAC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsOrdealCallWarClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPhaseClear(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CB2 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CB2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsPhaseClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayEventBoardGameArrivalEffectAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CB8 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CB8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayEventBoardGameDiceBtnActiveEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D1D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D1D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayScriptWithMap(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CB6 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CB6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsPlayScriptWithMap_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayTerminalEffectDisappear(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D29 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D29 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_IsPlayTerminalEffectDisappearWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D2B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D2B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayTerminalEffectNt2AfterAction(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D2D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D2D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayedEntryBanner(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CD8 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CD8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsPlayedEntryBanner_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsQuestClear(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CB0 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CB0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsQuestClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsScriptDisp(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CBA & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CBA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsScriptDisp_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsStopMasterFaceOverwrite(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CD0 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CD0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsStopMasterFaceOverwrite_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsTopLastIdxNextBoardRequest(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D55 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D55 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarBoardClear(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CC4 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CC4 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsWarBoardClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarClear(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CAA & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CAA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_IsWarClear_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastPlayedFreeQuestSpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C9E & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C9E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastPlayedQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C9C & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C9C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_LastPlayedQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastSelectQuestIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CA0 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CA0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_LastSelectQuestIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearPhaseCount(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CC8 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CC8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_MapModelClearPhaseCount_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CC6 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CC6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_MapModelClearQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MessageDispType(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CBC & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CBC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_MessageDispType_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_NoticeLastModified(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D39 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D39 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_NoticeLastModified_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PhaseCnt(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C8E & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C8E = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_PhaseCnt_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_PlayedTerminalEffects(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D27 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D27 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_PlayedTerminalEffects_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PlayerGenderType(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CDA & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CDA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_PlayerGenderType_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C8C & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C8C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_QuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestMessageScriptQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D57 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D57 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_QuestMessageScriptQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestMessageScriptQuestPhase(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D59 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D59 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_QuestMessageScriptQuestPhase_k__BackingField;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall TerminalPramsManager__get_QuestRandomGroupList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D25 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D25 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_QuestRandomGroupList_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_QuestWindowMessage(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CBE & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CBE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_QuestWindowMessage_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_SceneMoveQuestClearedInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D3D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D3D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
}


BannerEntity_o *__fastcall TerminalPramsManager__get_SelectedBannerEntity(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C9A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C9A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_SelectedBannerEntity_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SelectedRecollectionWarId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C94 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C94 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_SelectedRecollectionWarId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SelectedStoryQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C92 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C92 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_SelectedStoryQuestId_k__BackingField;
}


SpecifiedSceneInfo_o *__fastcall TerminalPramsManager__get_SpecifiedChangeSceneInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CE0 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CE0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SpotId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C8A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C8A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_SpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SummonType(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C88 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C88 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_SummonType_k__BackingField;
}


BattleScriptRootComponent_TalkScriptInfo_o *__fastcall TerminalPramsManager__get_TalkScriptInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D5B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D5B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_TalkScriptInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusEventId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D07 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D07 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_TimeStatusEventId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusLoopCount(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D09 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D09 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_TimeStatusLoopCount_k__BackingField;
}


WarBoardDataEntity_o *__fastcall TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D1F & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D1F = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_WarBoardData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_WarId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6C86 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6C86 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_WarId_k__BackingField;
}


float __fastcall TerminalPramsManager__get_ZoomSize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  MapZoom_c *v4; // x8
  float ZOOM_DEFAULT; // w20

  if ( (byte_40F6CDE & 1) == 0 )
  {
    sub_B16FFC(&MapZoom_TypeInfo, v1);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    byte_40F6CDE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->mZoomSize <= 0.0 )
  {
    v4 = MapZoom_TypeInfo;
    if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v4 = MapZoom_TypeInfo;
      v3 = TerminalPramsManager_TypeInfo;
    }
    ZOOM_DEFAULT = v4->static_fields->ZOOM_DEFAULT;
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->mZoomSize = ZOOM_DEFAULT;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->mZoomSize;
}


EventDailyPoint_o *__fastcall TerminalPramsManager__get_eventDailyPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CFD & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CFD = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_eventDailyPoint_k__BackingField;
}


EventPointWinReward_o *__fastcall TerminalPramsManager__get_eventPointWinReward(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CE8 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CE8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_eventPointWinReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_eventPointWinType(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CE6 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CE6 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_eventPointWinType_k__BackingField;
}


EventRaceBoostInfo_o *__fastcall TerminalPramsManager__get_eventRaceBoost(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CEA & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CEA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_eventRaceBoost_k__BackingField;
}


EventTowerReward_o *__fastcall TerminalPramsManager__get_eventTowerReward(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CF3 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CF3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_eventTowerReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_friendshipQuestDialogOpenId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D5F & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D5F = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_friendshipQuestDialogOpenId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isFortificationCheck(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D23 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D23 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_isFortificationCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isIncomingCall(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D17 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D17 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_isIncomingCall_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isPlayingQuestPhaseRewardEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D47 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D47 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isQuestRewardSetted(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D45 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D45 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_isQuestRewardSetted_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isWarBoardPlay(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D21 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D21 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_isWarBoardPlay_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_limitCountUnSealQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D61 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D61 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_limitCountUnSealQuestId_k__BackingField;
}


LimitImageAnnounce_array *__fastcall TerminalPramsManager__get_limitImageAnnounces(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D5D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D5D = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_limitImageAnnounces_k__BackingField;
}


UserSuperBossEntity_array *__fastcall TerminalPramsManager__get_oldPersonalBoss(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CE4 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CE4 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_oldPersonalBoss_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_oldQuestIdForHeaderEvent(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CF0 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CF0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_oldQuestIdForHeaderEvent_k__BackingField;
}


UserSuperBossEntity_array *__fastcall TerminalPramsManager__get_oldSuperBoss(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CE2 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CE2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_oldSuperBoss_k__BackingField;
}


CostumeReleaseAnnounce_array *__fastcall TerminalPramsManager__get_questClearCostumeGet(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CEE & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CEE = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_questClearCostumeGet_k__BackingField;
}


CostumeReleaseAnnounce_array *__fastcall TerminalPramsManager__get_questClearCostumeRelease(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CEC & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CEC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_questClearCostumeRelease_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultBoostItemRewardInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CF7 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CF7 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_resultBoostItemRewardInfo_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultEventBoardGameTokenRewardInfo(
        const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CF9 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CF9 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultEventTowerRewardInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CF5 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CF5 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_resultEventTowerRewardInfo_k__BackingField;
}


TimeStatusRecord_o *__fastcall TerminalPramsManager__get_timeStatusRecord(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6CFB & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6CFB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_timeStatusRecord_k__BackingField;
}


UpdateProfileDialogInfoEntity_array *__fastcall TerminalPramsManager__get_updateProfileInfoEntity(
        const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D63 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D63 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_updateProfileInfoEntity_k__BackingField;
}


WarClearReward_array *__fastcall TerminalPramsManager__get_warClearReward(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D05 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D05 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_warClearReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__mfGetSceneStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_40F6D6F & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v1);
    byte_40F6D6F = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->meSceneStatus;
}


void __fastcall TerminalPramsManager__mfSetSceneStatus(int32_t eSceneStatus, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D6E & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D6E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->meSceneStatus = eSceneStatus;
}


void __fastcall TerminalPramsManager__set_AfterActionFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CA3 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CA3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_AfterActionFocusQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BattleSetupKeep(BattleSetupInfo_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_40F6CC1 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CC1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_BattleSetupKeep_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D0E & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D0E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPoint_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPointGauge(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D10 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D10 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeEventActivityPointGauge_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BeforeEventSubmarineSaveData(
        EventSaveData_o *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D14 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D14 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_BeforeEventSubmarineSaveData_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D02 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D02 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthAfterActionFocusSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D32 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D32 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthRank(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D36 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D36 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthRank_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D30 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D30 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_BlankEarthSpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthTransformData(
        BlankEarthTransform_o *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D34 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D34 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_BlankEarthTransformData_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_40F6CDD & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CDD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_CampaignDirectBonus_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D0C & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D0C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_ClearEventQuestIds_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CCD & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CCD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_DataLostBattleResetFadeInTime(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v4; // x0

  if ( (byte_40F6CD5 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    byte_40F6CD5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_DataLostBattleWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CCF & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CCF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsBuildInfoDisp(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D44 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D44 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsBuildInfoDisp = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsDummyErrorSelect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D43 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D43 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsDummyErrorSelect = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsQuestReleaseAll(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D41 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D41 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsQuestReleaseAll = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsWarStartActionSkip(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D42 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D42 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mDebug_IsWarStartActionSkip = value;
}


void __fastcall TerminalPramsManager__set_DispState(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C85 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C85 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DispState_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EndTime(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CC3 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CC3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EndTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventActivityPointEffectState(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D12 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D12 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventActivityPointEffectState_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventBoardGameSquareIndex(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D1A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D1A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventBoardGameSquareIndex_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventDailyPointEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D04 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D04 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventDailyPointEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventDailyPointItem(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D00 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D00 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventDailyPointItem_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventMuralId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CAF & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CAF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventMuralId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventRaidDefeatedEffectInfo(
        EventRaidDefeatedEffectInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D16 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D16 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D3C & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D3C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_EventUIEffectClearQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D50 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D50 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoFolder_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoNoSe(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D52 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D52 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoNoSe_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoOpenMasterMission(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D6A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D6A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F604D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = value;
  v3->static_fields->mIsAutoOpenMasterMission = value;
}


void __fastcall TerminalPramsManager__set_IsAutoResume(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D4A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D4A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoResume_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoShortcut(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D4C & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D4C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsAutoShortcut_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsBlankEarthShortcutMoving(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D38 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D38 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsCheckHomeExpirationDateEventMap(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D54 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D54 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->isCheckHomeExpirationDateEventMap = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleAutoReset(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CCB & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CCB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleAutoReset_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleNoticePause(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CD7 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CD7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleNoticePause_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleResetFadeIn(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CD3 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CD3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispDone_AutoWebView(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CA5 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CA5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_AutoWebView_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispDone_UIStandFigure(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CA7 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CA7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispDone_UIStandFigure_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispOnly(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CB5 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CB5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispOnly_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispUIStandFigure(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CA9 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CA9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispUIStandFigure_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDoneShortcut(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C91 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C91 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDoneShortcut_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsEventBoardGameDiceBtnActive(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D1C & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D1C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsForceFocusTerminalQuestId(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C99 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C99 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsFromRecollectionBoard(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C97 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C97 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsFromRecollectionBoard_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsInvisibleConnectAndLoad(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D40 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D40 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->isInvisibleConnectAndLoad = value;
}


void __fastcall TerminalPramsManager__set_IsMapReturnFolder(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D4E & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D4E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsMapReturnFolder_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsOrdealCallWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CAD & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CAD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsOrdealCallWarClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPhaseClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CB3 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CB3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPhaseClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayEventBoardGameArrivalEffectAuto(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CB9 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CB9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayEventBoardGameDiceBtnActiveEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D1E & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D1E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayScriptWithMap(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CB7 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CB7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayScriptWithMap_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectDisappear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D2A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D2A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectDisappearWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D2C & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D2C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectNt2AfterAction(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D2E & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D2E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayedEntryBanner(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CD9 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CD9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayedEntryBanner_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsQuestClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CB1 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CB1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsQuestClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsScriptDisp(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CBB & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CBB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsScriptDisp_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsStopMasterFaceOverwrite(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CD1 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CD1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsTopLastIdxNextBoardRequest(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D56 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D56 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsWarBoardClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CC5 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CC5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsWarBoardClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsWarClear(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CAB & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CAB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsWarClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastPlayedFreeQuestSpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C9F & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C9F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastPlayedQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C9D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C9D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastPlayedQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastSelectQuestIndex(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CA1 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CA1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_LastSelectQuestIndex_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MapModelClearPhaseCount(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CC9 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CC9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MapModelClearPhaseCount_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MapModelClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CC7 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CC7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MapModelClearQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MessageDispType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CBD & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CBD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_MessageDispType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_NoticeLastModified(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D3A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D3A = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_NoticeLastModified_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C8F & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C8F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PhaseCnt_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_PlayedTerminalEffects(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D28 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D28 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_PlayedTerminalEffects_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CDB & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CDB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_PlayerGenderType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C8D & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C8D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestMessageScriptQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D58 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D58 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestMessageScriptQuestPhase(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D5A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D5A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestRandomGroupList(
        System_Collections_Generic_Dictionary_int__int__o *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D26 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D26 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_QuestRandomGroupList_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_QuestWindowMessage(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_40F6CBF & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CBF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_QuestWindowMessage_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D3E & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D3E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_SceneMoveQuestClearedInfo_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_SelectedBannerEntity(BannerEntity_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_40F6C9B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C9B = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_SelectedBannerEntity_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C95 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C95 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedRecollectionWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SelectedStoryQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C93 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C93 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SelectedStoryQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SpecifiedChangeSceneInfo(
        SpecifiedSceneInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_40F6CE1 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CE1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_SpecifiedChangeSceneInfo_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C8B & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C8B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SummonType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C89 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C89 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SummonType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_TalkScriptInfo(
        BattleScriptRootComponent_TalkScriptInfo_o *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D5C & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D5C = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_TalkScriptInfo_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D08 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D08 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TimeStatusEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_TimeStatusLoopCount(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D0A & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D0A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_TimeStatusLoopCount_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_WarBoardData(WarBoardDataEntity_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D20 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D20 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_WarBoardData_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6C87 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6C87 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_ZoomSize(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v4; // x0

  if ( (byte_40F6CDF & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v2);
    byte_40F6CDF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->mZoomSize = value;
}


void __fastcall TerminalPramsManager__set_eventDailyPoint(EventDailyPoint_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6CFE & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CFE = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_eventDailyPoint_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_40F6CE9 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CE9 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_eventPointWinReward_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CE7 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CE7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_eventPointWinType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_eventRaceBoost(EventRaceBoostInfo_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_40F6CEB & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CEB = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_eventRaceBoost_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6CF4 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CF4 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_eventTowerReward_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_friendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D60 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D60 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_friendshipQuestDialogOpenId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isFortificationCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D24 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D24 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isFortificationCheck_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isIncomingCall(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D18 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D18 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isIncomingCall_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isPlayingQuestPhaseRewardEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D48 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D48 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isQuestRewardSetted(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D46 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D46 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isQuestRewardSetted_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isWarBoardPlay(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D22 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D22 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isWarBoardPlay_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_limitCountUnSealQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6D62 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D62 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_limitCountUnSealQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_limitImageAnnounces(
        LimitImageAnnounce_array *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D5E & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D5E = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_limitImageAnnounces_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_40F6CE5 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CE5 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_oldPersonalBoss_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_40F6CF1 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CF1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_oldSuperBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_40F6CE3 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CE3 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_oldSuperBoss_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_questClearCostumeGet(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6CEF & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CEF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_questClearCostumeGet_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_questClearCostumeRelease(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6CED & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CED = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_questClearCostumeRelease_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_resultBoostItemRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6CF8 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CF8 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_resultBoostItemRewardInfo_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_resultEventBoardGameTokenRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6CFA & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CFA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_resultEventTowerRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6CF6 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CF6 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_resultEventTowerRewardInfo_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6CFC & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6CFC = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_timeStatusRecord_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D64 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D64 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_updateProfileInfoEntity_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_40F6D06 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6D06 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&static_fields->_warClearReward_k__BackingField,
    (System_Int32_array **)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40F77B1 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_13290, v8);
    byte_40F77B1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TerminalPramsManager_ClearData_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_13290;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_13290;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  TerminalPramsManager_c *v93; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w8
  struct LimitImageAnnounce_array **p_limitImageAnnounces; // x19

  if ( (byte_40F77AF & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F77AF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.questRewardInfos = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questRewardInfos, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questPhaseRewardInfos, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questResultAfterEventRewardInfos,
    0LL,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultEventPanelRewardInfos,
    0LL,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1LL;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mOldSuperBoss, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.oldPersonalBoss = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.oldPersonalBoss, 0LL, v39, v40, v41, v42, v43, v44);
  this->fields.evPointWinReward = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.evPointWinReward, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.evRaceBoost, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.questClearCostume = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questClearCostume, 0LL, v57, v58, v59, v60, v61, v62);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.questClearCostumeGetInfo, 0LL, v63, v64, v65, v66, v67, v68);
  this->fields.eventTowerReward = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventTowerReward, 0LL, v69, v70, v71, v72, v73, v74);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultEventTowerRewardInfo,
    0LL,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.warClearReward, 0LL, v81, v82, v83, v84, v85, v86);
  v93 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v93 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v93->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  p_limitImageAnnounces = &this->fields.limitImageAnnounces;
  *((_DWORD *)p_limitImageAnnounces - 8) = EVENT_POINT_EFFECT_STATE_NONE;
  sub_B16F98((BattleServantConfConponent_o *)p_limitImageAnnounces, 0LL, v87, v88, v89, v90, v91, v92);
  *((_BYTE *)p_limitImageAnnounces + 8) = 0;
  *((_DWORD *)p_limitImageAnnounces + 3) = 0;
}


void __fastcall TerminalPramsManager_ClearData___ctor_20347828(
        TerminalPramsManager_ClearData_o *this,
        QuestClearHeroineInfo_o *qcrHeroineInfo,
        QuestRewardInfo_array *qri,
        QuestRewardInfo_array *questPhaseRewardInfos,
        bool qClear,
        bool pclear,
        int32_t lastRaidId,
        int32_t raidId,
        int32_t groupjoin,
        UserSuperBossEntity_array *oldSuperBoss,
        UserSuperBossEntity_array *oldPersonalBoss,
        EventPointWinReward_o *evpWinReward,
        int32_t evpWinType,
        EventRaceBoostInfo_o *evRace,
        CostumeReleaseAnnounce_array *questClearCostumeRelease,
        CostumeReleaseAnnounce_array *questClearCostumeGet,
        EventTowerReward_o *evTowerReward,
        QuestRewardInfo_array *resultEvTowerRewardInfo,
        bool dispOnly,
        WarClearReward_array *warClearRewardIn,
        int32_t eventActivityPointEffectState,
        bool isWarBoardClear,
        BattleDropItem_array *questResultAfterEventRewardInfos,
        BattleDropItem_array *resultEventPanelRewardInfos,
        int32_t panelEventPoint,
        LimitImageAnnounce_array *limitImageAnnounces,
        bool isOrdealCallWarClear,
        int32_t eventMuralId,
        const MethodInfo *method)
{
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v48; // x0
  const MethodInfo *v49; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v50; // x27
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct UserSuperBossEntity_array *v63; // x26
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct UserSuperBossEntity_array *v70; // x25
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct CostumeReleaseAnnounce_array *v77; // x20
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct CostumeReleaseAnnounce_array *v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  struct QuestRewardInfo_array *v103; // x22
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  __int64 v122; // x1
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  TerminalPramsManager_c *v129; // x0
  TerminalPramsManager_c *v130; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  __int64 v138; // x1
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  TerminalPramsManager_c *v145; // x0
  struct WarClearReward_array *v146; // x21
  TerminalPramsManager_c *v147; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  struct BattleDropItem_array *v149; // x22
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  struct BattleDropItem_array *v156; // x23
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  struct LimitImageAnnounce_array *v163; // x21
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  __int64 v176; // x1
  TerminalPramsManager_c *v177; // x0

  if ( (byte_40F77B0 & 1) == 0 )
  {
    sub_B16FFC(&BattleDropItem___TypeInfo, qcrHeroineInfo);
    sub_B16FFC(&CostumeReleaseAnnounce___TypeInfo, v37);
    sub_B16FFC(&LimitImageAnnounce___TypeInfo, v38);
    sub_B16FFC(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v39);
    sub_B16FFC(&QuestRewardInfo___TypeInfo, v40);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v41);
    sub_B16FFC(&UserSuperBossEntity___TypeInfo, v42);
    sub_B16FFC(&WarClearReward___TypeInfo, v43);
    byte_40F77B0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v48 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_B170CC(
                                                                 TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo,
                                                                 v44,
                                                                 v45,
                                                                 v46,
                                                                 v47);
  v50 = v48;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_20349404(v48, qcrHeroineInfo, v49);
    if ( this )
      goto LABEL_5;
LABEL_38:
    sub_B170D4();
  }
  System_Object___ctor((Il2CppObject *)v48, 0LL);
  v50->fields.oldUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v50->fields, 0LL, v132, v133, v134, v135, v136, v137);
  if ( !this )
    goto LABEL_38;
LABEL_5:
  this->fields.qClearHeroineInfo = v50;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_B17014(QuestRewardInfo___TypeInfo, 0LL, v57);
  v63 = oldSuperBoss;
  this->fields.questRewardInfos = qri;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRewardInfos,
    (System_Int32_array **)qri,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_B17014(QuestRewardInfo___TypeInfo, 0LL, v64);
  v70 = oldPersonalBoss;
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questPhaseRewardInfos,
    (System_Int32_array **)questPhaseRewardInfos,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.questClear = qClear;
  this->fields.phaseClear = pclear;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v63 = (struct UserSuperBossEntity_array *)sub_B17014(UserSuperBossEntity___TypeInfo, 0LL, v71);
  v77 = questClearCostumeRelease;
  this->fields.mOldSuperBoss = v63;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mOldSuperBoss,
    (System_Int32_array **)v63,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  if ( !oldPersonalBoss )
    v70 = (struct UserSuperBossEntity_array *)sub_B17014(UserSuperBossEntity___TypeInfo, 0LL, v78);
  v84 = questClearCostumeGet;
  this->fields.oldPersonalBoss = v70;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.oldPersonalBoss,
    (System_Int32_array **)v70,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields.evPointWinReward = evpWinReward;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.evPointWinReward,
    (System_Int32_array **)evpWinReward,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.evRaceBoost,
    (System_Int32_array **)evRace,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  if ( !questClearCostumeRelease )
    v77 = (struct CostumeReleaseAnnounce_array *)sub_B17014(CostumeReleaseAnnounce___TypeInfo, 0LL, v97);
  v103 = resultEvTowerRewardInfo;
  this->fields.questClearCostume = v77;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questClearCostume,
    (System_Int32_array **)v77,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  if ( !questClearCostumeGet )
    v84 = (struct CostumeReleaseAnnounce_array *)sub_B17014(CostumeReleaseAnnounce___TypeInfo, 0LL, v104);
  this->fields.questClearCostumeGetInfo = v84;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questClearCostumeGetInfo,
    (System_Int32_array **)v84,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  this->fields.eventTowerReward = evTowerReward;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventTowerReward,
    (System_Int32_array **)evTowerReward,
    v110,
    v111,
    v112,
    v113,
    v114,
    v115);
  if ( !resultEvTowerRewardInfo )
    v103 = (struct QuestRewardInfo_array *)sub_B17014(QuestRewardInfo___TypeInfo, 0LL, v116);
  this->fields.resultEventTowerRewardInfo = v103;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultEventTowerRewardInfo,
    (System_Int32_array **)v103,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6065 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v122);
    byte_40F6065 = 1;
  }
  v129 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v129 = TerminalPramsManager_TypeInfo;
  }
  if ( v129->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 && !v129->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v129);
    if ( !byte_40F6065 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v122);
      byte_40F6065 = 1;
    }
    v130 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v130 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v130->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_B17014(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL,
                                                                                  v123);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultBoostItemRewardInfo,
    (System_Int32_array **)resultBoostItemRewardInfo_k__BackingField,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F605C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v138);
    byte_40F605C = 1;
  }
  v145 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v145 = TerminalPramsManager_TypeInfo;
  }
  v146 = warClearRewardIn;
  if ( v145->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( (BYTE3(v145->vtable._0_Equals.methodPtr) & 4) != 0 && !v145->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v145);
    if ( !byte_40F605C )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v138);
      byte_40F605C = 1;
    }
    v147 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v147 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v147->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_B17014(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL,
                                                                                            v139);
  }
  v149 = questResultAfterEventRewardInfos;
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultEventBoardGameTokenRewardInfo,
    (System_Int32_array **)resultEventBoardGameTokenRewardInfo_k__BackingField,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v146 = (struct WarClearReward_array *)sub_B17014(WarClearReward___TypeInfo, 0LL, v150);
  v156 = resultEventPanelRewardInfos;
  this->fields.warClearReward = v146;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.warClearReward,
    (System_Int32_array **)v146,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  this->fields.isWarBoardClear = isWarBoardClear;
  if ( !questResultAfterEventRewardInfos )
    v149 = (struct BattleDropItem_array *)sub_B17014(BattleDropItem___TypeInfo, 0LL, v157);
  v163 = limitImageAnnounces;
  this->fields.questResultAfterEventRewardInfos = v149;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questResultAfterEventRewardInfos,
    (System_Int32_array **)v149,
    v157,
    v158,
    v159,
    v160,
    v161,
    v162);
  if ( !resultEventPanelRewardInfos )
    v156 = (struct BattleDropItem_array *)sub_B17014(BattleDropItem___TypeInfo, 0LL, v164);
  this->fields.resultEventPanelRewardInfos = v156;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resultEventPanelRewardInfos,
    (System_Int32_array **)v156,
    v164,
    v165,
    v166,
    v167,
    v168,
    v169);
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v163 = (struct LimitImageAnnounce_array *)sub_B17014(LimitImageAnnounce___TypeInfo, 0LL, v170);
  this->fields.limitImageAnnounces = v163;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.limitImageAnnounces,
    (System_Int32_array **)v163,
    v170,
    v171,
    v172,
    v173,
    v174,
    v175);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F605E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v176);
    byte_40F605E = 1;
  }
  v177 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v177 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v177->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_40F6062 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v176);
    v177 = TerminalPramsManager_TypeInfo;
    byte_40F6062 = 1;
  }
  if ( (BYTE3(v177->vtable._0_Equals.methodPtr) & 4) != 0 && !v177->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v177);
    v177 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v177->static_fields->_EventMuralId_k__BackingField;
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_20349756(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int128 v6; // q1
  __int128 v7; // q0
  __int64 v8; // x21
  __int64 v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_40F77B2 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, uSvtEnt);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_40F77B2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_B170D4();
  v6 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v11, 0LL);
  v7 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v7;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v10, 0LL);
  v9 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v8;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v13, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                  uSvtEnt->fields.iconLimitCount,
                                  0LL);
  this->fields.lv = uSvtEnt->fields.lv;
  this->fields.exp = uSvtEnt->fields.exp;
  this->fields.atk = uSvtEnt->fields.atk;
  this->fields.hp = uSvtEnt->fields.hp;
  this->fields.adjustAtk = uSvtEnt->fields.adjustAtk;
  this->fields.adjustHp = uSvtEnt->fields.adjustHp;
  this->fields.skillLv1 = uSvtEnt->fields.skillLv1;
  this->fields.skillLv2 = uSvtEnt->fields.skillLv2;
  this->fields.skillLv3 = uSvtEnt->fields.skillLv3;
  this->fields.treasureDeviceLv1 = uSvtEnt->fields.treasureDeviceLv1;
  this->fields.exceedCount = uSvtEnt->fields.exceedCount;
  this->fields.status = uSvtEnt->fields.status;
  this->fields.createdAt = uSvtEnt->fields.createdAt;
}


UserServantEntity_o *__fastcall TerminalPramsManager_OldHeroineLawData__GetLoad(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  int64_t id; // x21
  __int128 v10; // q1
  __int128 v11; // q1
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+40h] [xbp-40h]

  if ( (byte_40F77B3 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    sub_B16FFC(&UserServantEntity_TypeInfo, v7);
    byte_40F77B3 = 1;
  }
  v8 = sub_B170CC(UserServantEntity_TypeInfo, method, v2, v3, v4);
  UserServantEntity___ctor((UserServantEntity_o *)v8, 0LL);
  id = this->fields.id;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v14, id, 0LL);
  v15 = v14;
  if ( !v8 )
    sub_B170D4();
  v10 = *(_OWORD *)&v15.fields.fakeValue;
  *(_OWORD *)(v8 + 16) = *(_OWORD *)&v15.fields.currentCryptoKey;
  *(_OWORD *)(v8 + 32) = v10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v14, this->fields.userId, 0LL);
  v11 = *(_OWORD *)&v14.fields.fakeValue;
  *(_OWORD *)(v8 + 48) = *(_OWORD *)&v14.fields.currentCryptoKey;
  *(_OWORD *)(v8 + 64) = v11;
  svtId = this->fields.svtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 80) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    svtId,
                                                                    0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 96) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    this->fields.limitCount,
                                                                    0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 112) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.imageLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.dispLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 144) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.commandCardLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v8 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.iconLimitCount,
                                                                     0LL);
  result = (UserServantEntity_o *)v8;
  *(_DWORD *)(v8 + 256) = this->fields.lv;
  *(_DWORD *)(v8 + 260) = this->fields.exp;
  *(_DWORD *)(v8 + 264) = this->fields.atk;
  *(_DWORD *)(v8 + 268) = this->fields.hp;
  *(_DWORD *)(v8 + 272) = this->fields.adjustAtk;
  *(_DWORD *)(v8 + 276) = this->fields.adjustHp;
  *(_DWORD *)(v8 + 280) = this->fields.skillLv1;
  *(_DWORD *)(v8 + 284) = this->fields.skillLv2;
  *(_DWORD *)(v8 + 288) = this->fields.skillLv3;
  *(_DWORD *)(v8 + 292) = this->fields.treasureDeviceLv1;
  *(_DWORD *)(v8 + 296) = this->fields.exceedCount;
  *(_DWORD *)(v8 + 300) = this->fields.status;
  *(_QWORD *)(v8 + 304) = this->fields.createdAt;
  return result;
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.oldUsrSvtData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_20349404(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        QuestClearHeroineInfo_o *qClearHeroineInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  UserServantEntity_o *oldUsrSvtData; // x21
  TerminalPramsManager_OldHeroineLawData_o *v10; // x22
  const MethodInfo *v11; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_Fields *p_fields; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F77B4 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_OldHeroineLawData_TypeInfo, qClearHeroineInfo);
    byte_40F77B4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_B170D4();
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v10 = (TerminalPramsManager_OldHeroineLawData_o *)sub_B170CC(
                                                      TerminalPramsManager_OldHeroineLawData_TypeInfo,
                                                      v5,
                                                      v6,
                                                      v7,
                                                      v8);
  TerminalPramsManager_OldHeroineLawData___ctor_20349756(v10, oldUsrSvtData, v11);
  this->fields.oldUsrSvtData = v10;
  p_fields = &this->fields;
  sub_B16F98((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)v10, v13, v14, v15, v16, v17, v18);
  p_fields->isChangeLimitcnt = qClearHeroineInfo->fields.isChangeLimitcnt;
  p_fields->isChangeTreasureDvc = qClearHeroineInfo->fields.isChangeTreasureDvc;
  p_fields->treasureDvcId = qClearHeroineInfo->fields.treasureDvcId;
  p_fields->treasureDvcLv = qClearHeroineInfo->fields.treasureDvcLv;
  p_fields->oldFriendShipRank = qClearHeroineInfo->fields.oldFriendShipRank;
  p_fields->isFriendShipExceed = qClearHeroineInfo->fields.isFriendShipExceed;
  p_fields->isExceed = qClearHeroineInfo->fields.isExceed;
}


QuestClearHeroineInfo_o *__fastcall TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  const MethodInfo *v7; // x1
  TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x0
  System_Int32_array **Load; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_40F77B5 & 1) == 0 )
  {
    sub_B16FFC(&QuestClearHeroineInfo_TypeInfo, method);
    byte_40F77B5 = 1;
  }
  v6 = sub_B170CC(QuestClearHeroineInfo_TypeInfo, method, v2, v3, v4);
  QuestClearHeroineInfo___ctor((QuestClearHeroineInfo_o *)v6, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (Load = (System_Int32_array **)TerminalPramsManager_OldHeroineLawData__GetLoad(oldUsrSvtData, v7), !v6) )
  {
    sub_B170D4();
  }
  *(_QWORD *)(v6 + 16) = Load;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 16), Load, v10, v11, v12, v13, v14, v15);
  result = (QuestClearHeroineInfo_o *)v6;
  *(_BYTE *)(v6 + 24) = this->fields.isChangeLimitcnt;
  *(_BYTE *)(v6 + 25) = this->fields.isChangeTreasureDvc;
  *(_DWORD *)(v6 + 28) = this->fields.treasureDvcId;
  *(_DWORD *)(v6 + 32) = this->fields.treasureDvcLv;
  *(_DWORD *)(v6 + 36) = this->fields.oldFriendShipRank;
  *(_BYTE *)(v6 + 40) = this->fields.isFriendShipExceed;
  *(_BYTE *)(v6 + 41) = this->fields.isExceed;
  return result;
}


void __fastcall TerminalPramsManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F77AA & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager___c_TypeInfo, v1);
    byte_40F77AA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(TerminalPramsManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)TerminalPramsManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__600_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_40F77AB & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, n);
    byte_40F77AB = 1;
  }
  if ( !n )
    sub_B170D4();
  questId = n->fields.questId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, n);
    byte_40F6057 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  return questId == v5->static_fields->_QuestId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__603_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_40F77AC & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&v);
    byte_40F77AC = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0LL);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__603_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B170D4();
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__603_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass594_0___ctor(
        TerminalPramsManager___c__DisplayClass594_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass594_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass594_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_fields; // x19
  System_String_o *effectIdsStr; // t1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F77AD & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_26, effectId);
    byte_40F77AD = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  v7 = (System_Int32_array **)System_String__Concat_43746016(
                                effectIdsStr,
                                effectId,
                                (System_String_o *)StringLiteral_26,
                                0LL);
  p_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(p_fields, v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall TerminalPramsManager___c__DisplayClass603_0___ctor(
        TerminalPramsManager___c__DisplayClass603_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass603_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass603_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_B170D4();
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass603_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass603_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  int64_t UserId; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F77AE & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v);
    byte_40F77AE = 1;
  }
  entity = 0LL;
  userQuestMaster = this->fields.userQuestMaster;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v || !userQuestMaster )
    goto LABEL_12;
  if ( UserQuestMaster__TryGetEntity(userQuestMaster, &entity, UserId, v->fields.id, 0LL) )
  {
    if ( entity )
      return entity->fields.clearNum == 0;
LABEL_12:
    sub_B170D4();
  }
  return 1;
}