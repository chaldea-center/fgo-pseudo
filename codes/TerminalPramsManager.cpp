void __fastcall TerminalPramsManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_HashSet_int__o *v22; // x19
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  struct TerminalPramsManager_StaticFields *v24; // x0
  TerminalPramsManager_c *v25; // x8
  __int64 v26; // x0
  struct TerminalPramsManager_StaticFields *v27; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  struct System_Collections_Generic_List_string__o **p_eventScriptMessages; // x0
  TerminalPramsManager_c *v30; // x8

  if ( (byte_42E5CA9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v1, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&float___TypeInfo, v13, v14, v15);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42E5CA9 = 1;
  }
  v22 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v22,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v22;
  sub_B5D560(&static_fields->loginQuestNotifiedList);
  v24 = TerminalPramsManager_TypeInfo->static_fields;
  v24->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&v24->mTerminalWarStartedIds);
  v25 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = -1;
  v25->static_fields->clearBattleRaidId = -1;
  v25->static_fields->TipsArchiveEventUiId = 0;
  v25->static_fields->TipsArchiveCurrrentTab = 0;
  v26 = sub_B5D5DC(float___TypeInfo, 3LL);
  v27 = TerminalPramsManager_TypeInfo->static_fields;
  v27->TipsArchiveScrollValueList = (struct System_Single_array *)v26;
  sub_B5D560(&v27->TipsArchiveScrollValueList);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = &TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  *p_eventScriptMessages = (struct System_Collections_Generic_List_string__o *)v28;
  sub_B5D560(p_eventScriptMessages);
  v30 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v30->static_fields->EVENT_POINT_EFFECT_STATE_ADD = 1;
  v30->static_fields->isInvisibleConnectAndLoad = 0;
  v30->static_fields->ConnectMarkEventId = 0;
  v30->static_fields->ConnectMarkAnimationId = 0;
  v30->static_fields->meSceneStatus = 0;
  v30->static_fields->isCheckHomeExpirationDateEventMap = 1;
  v30->static_fields->IsEventMapLoading = 0;
  v30->static_fields->IsjumbleRaidHomeTopRequest = 0;
}


void __fastcall TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalPramsManager_c *v8; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_42E5C8D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    byte_42E5C8D = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v8->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C56 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C56 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B29 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_42E4B30 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v4 = TerminalPramsManager_TypeInfo;
    byte_42E4B30 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoShortcut_k__BackingField = 0;
  v4->static_fields->mIsAutoOpenMasterMission = 0;
}


void __fastcall TerminalPramsManager__BlankEarthRank_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C81 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11686/*"SAVEKEY_BlankEarthRank"*/, v4, v5, v6);
    byte_42E5C81 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CDE )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CDE = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11686/*"SAVEKEY_BlankEarthRank"*/,
    v7->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C80 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11687/*"SAVEKEY_BlankEarthSpotId"*/, v4, v5, v6);
    byte_42E5C80 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B23 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B23 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11687/*"SAVEKEY_BlankEarthSpotId"*/,
    v7->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v15; // x0

  if ( (byte_42E5C7F & 1) == 0 )
  {
    sub_B5D5C4(&CommonUI_CampaignDirectBonusData___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_11688/*"SAVEKEY_CampaignDirectBonus"*/, v10, v11, v12);
    byte_42E5C7F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CDD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CDD = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v13->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_B5D5DC(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v15 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11688/*"SAVEKEY_CampaignDirectBonus"*/, v15, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x19
  WarEntity_o *v25; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E5C9A & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E5C9A = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_17;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
  if ( !v22 )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v22,
          &v25,
          (int32_t)Instance,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v25 )
LABEL_17:
    sub_B5D69C(Instance, v21);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            *(&v25->fields.id + 1),
            (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  const MethodInfo *v7; // x0

  if ( (byte_42E5C82 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C82 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD6 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5CD6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( v5->static_fields->_SelectedStoryQuestId_k__BackingField >= 1 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v5);
    if ( !byte_42E5CD6 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E5CD6 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( v6->static_fields->_SelectedStoryQuestId_k__BackingField != questId )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v6);
      if ( !byte_42E4B26 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
        byte_42E4B26 = 1;
      }
      v7 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v7 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(v7[2].klass->_1.namespaze) = 0;
      TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(v7);
    }
  }
}


bool __fastcall TerminalPramsManager__CheckEventActivityPointSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42E5C6C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/, v4, v5, v6);
    byte_42E5C6C = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5C6E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13770/*"TerminalBeforeEventSubmarinePointData"*/, v1, v2, v3);
    byte_42E5C6E = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13770/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t parentWarId; // w19
  BalanceConfig_c *v6; // x0

  if ( (byte_42E5CA7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5CA7 = 1;
  }
  if ( !warEntity )
    return 0;
  parentWarId = warEntity->fields.parentWarId;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  return parentWarId == v6->static_fields->OrdealCallWarId;
}


void __fastcall TerminalPramsManager__CheckResumeEffectNT2(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
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
  TerminalPramsManager___c__DisplayClass614_0_o *v40; // x19
  const MethodInfo *v41; // x1
  int v42; // w2
  __int64 v43; // x3
  TerminalPramsManager_c *v44; // x0
  ScrTerminalListTop_c *v45; // x8
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w20
  const MethodInfo *v47; // x1
  ScrTerminalListTop_c *v48; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w20
  ScrTerminalListTop_c *v50; // x0
  System_String_o *v51; // x1
  int v52; // w2
  __int64 v53; // x3
  System_String_o *v54; // x20
  TerminalPramsManager_c *v55; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v57; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v59; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v60; // x22
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  struct System_String_o *effectIdsStr; // x19
  TerminalPramsManager_c *v65; // x0
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v67; // x0
  __int64 v68; // x0
  int32_t v69; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E5C86 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&char___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_string___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ForEach__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, v16, v17, v18);
    sub_B5D5C4(&ScrTerminalListTop_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_TerminalPramsManager___c__DisplayClass614_0__CheckResumeEffectNT2_b__0__, v25, v26, v27);
    sub_B5D5C4(&TerminalPramsManager___c__DisplayClass614_0_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_69/*"\r\n"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_1/*""*/, v37, v38, v39);
    byte_42E5C86 = 1;
  }
  v69 = 0;
  v40 = (TerminalPramsManager___c__DisplayClass614_0_o *)sub_B5D694(TerminalPramsManager___c__DisplayClass614_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass614_0___ctor(v40, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD4 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v41, v42, v43);
    byte_42E5CD4 = 1;
  }
  v44 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v44 = TerminalPramsManager_TypeInfo;
  }
  if ( v44->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v45 = ScrTerminalListTop_TypeInfo;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v45 = ScrTerminalListTop_TypeInfo;
      v44 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v45->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v44);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v41) )
    {
      v48 = ScrTerminalListTop_TypeInfo;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v48 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v48->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v47) )
      {
        v50 = ScrTerminalListTop_TypeInfo;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v50 = ScrTerminalListTop_TypeInfo;
        }
        v69 = v50->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v54 = System_Int32__ToString((int32_t)&v69, 0LL);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E5CD4 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v51, v52, v53);
          byte_42E5CD4 = 1;
        }
        v55 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v55 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v55->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_50;
        v57 = System_String__Replace_44585024(
                PlayedTerminalEffects_k__BackingField,
                (System_String_o *)StringLiteral_69/*"\r\n"*/,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                0LL);
        PlayedTerminalEffects_k__BackingField = (System_String_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_50;
        v51 = PlayedTerminalEffects_k__BackingField;
        if ( !LODWORD(PlayedTerminalEffects_k__BackingField[1].klass) )
        {
          v68 = sub_B5D6C8(PlayedTerminalEffects_k__BackingField);
          sub_B5D668(v68, 0LL);
        }
        LOWORD(PlayedTerminalEffects_k__BackingField[1].monitor) = 10;
        if ( !v57
          || (v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           v57,
                                                                           (System_Char_array *)PlayedTerminalEffects_k__BackingField,
                                                                           0LL),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                            v58,
                                                                            (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v59 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)PlayedTerminalEffects_k__BackingField,
                                                                           (WarBoardManager_TaskList_o *)v54,
                                                                           (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__),
              !v40) )
        {
LABEL_50:
          sub_B5D69C(PlayedTerminalEffects_k__BackingField, v51);
        }
        v40->fields.effectIdsStr = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_B5D560(&v40->fields);
        v60 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v60,
          (Il2CppObject *)v40,
          Method_TerminalPramsManager___c__DisplayClass614_0__CheckResumeEffectNT2_b__0__,
          (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v59,
          (System_Action_T__o *)v60,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_string__ForEach__);
        effectIdsStr = v40->fields.effectIdsStr;
        if ( !byte_42E5CBD )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v61, v62, v63);
          byte_42E5CBD = 1;
        }
        v65 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v65 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = &v65->static_fields->_PlayedTerminalEffects_k__BackingField;
        *p_PlayedTerminalEffects_k__BackingField = effectIdsStr;
        sub_B5D560(p_PlayedTerminalEffects_k__BackingField);
        TerminalPramsManager__Save_SaveData(v67);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C7B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11689/*"SAVEKEY_ClearEventQuestIds"*/, v4, v5, v6);
    byte_42E5C7B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CD7 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11689/*"SAVEKEY_ClearEventQuestIds"*/,
    v7->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  TerminalPramsManager_c *v10; // x0

  if ( (byte_42E5C7A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11691/*"SAVEKEY_ConnectMarkEventId"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_11690/*"SAVEKEY_ConnectMarkAnimationId"*/, v7, v8, v9);
    byte_42E5C7A = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11691/*"SAVEKEY_ConnectMarkEventId"*/, v10->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11690/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__DeleteClearDatas(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  TerminalPramsManager_ClearData_c *v10; // x0
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0
  struct System_String_o **p_lastPlayBgmName; // x0

  if ( (byte_42E5C9D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_ClearData_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_1/*""*/, v7, v8, v9);
    byte_42E5C9D = 1;
  }
  v10 = TerminalPramsManager_ClearData_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v10 = TerminalPramsManager_ClearData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v10->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CEA )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E5CEA = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_isQuestRewardSetted_k__BackingField = 0;
  p_lastPlayBgmName = &v14->static_fields->lastPlayBgmName;
  *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(p_lastPlayBgmName);
}


void __fastcall TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
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
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  int v133; // w1
  int v134; // w2
  __int64 v135; // x3
  TerminalPramsManager_c *v136; // x0
  const MethodInfo *v137; // x0
  const MethodInfo *v138; // x0
  const MethodInfo *v139; // x0

  if ( (byte_42E5C5F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11694/*"SAVEKEY_LastPlayBgmName"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_13772/*"TerminalEndTime"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_5271/*"Debug_IsOriginalGuestNPC"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_11700/*"SAVEKEY_PlayedTerminalEffects"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11688/*"SAVEKEY_CampaignDirectBonus"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_11695/*"SAVEKEY_LastPlayQuestConsumeType"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_13773/*"TerminalEventDailyPointEventId"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_5267/*"Debug_GuestNPCInfoList"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_13770/*"TerminalBeforeEventSubmarinePointData"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_13779/*"TerminalPhaseCnt"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_11704/*"SAVEKEY_TerminalConquestInfos"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_13787/*"TerminalTimeStatusEventId"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_13771/*"TerminalDispState"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_11697/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_13774/*"TerminalIsDoneShortcut"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_11696/*"SAVEKEY_MapModelClearQuestInfo"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_11701/*"SAVEKEY_PlayerGenderType"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_11705/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_11689/*"SAVEKEY_ClearEventQuestIds"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_11698/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_5272/*"Debug_IsQuestReleaseAll"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_5269/*"Debug_IsDummyErrorSelect"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_13782/*"TerminalQuestId"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_11703/*"SAVEKEY_TerminalConquestInfoDisp"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_11708/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_13786/*"TerminalTimeStatusEventDailyPoint"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_13791/*"TerminalWarId"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_13784/*"TerminalSpotId"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_13788/*"TerminalTimeStatusLoopCount"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_11687/*"SAVEKEY_BlankEarthSpotId"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_11692/*"SAVEKEY_DataLostBattleAutoReset"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_5270/*"Debug_IsOriginalBattle"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_13792/*"TerminalWarStartedIds"*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_5266/*"Debug_BattleEnemyList"*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_11691/*"SAVEKEY_ConnectMarkEventId"*/, v112, v113, v114);
    sub_B5D5C4(&StringLiteral_13790/*"TerminalTransitionInfoVoiceAssetName"*/, v115, v116, v117);
    sub_B5D5C4(&StringLiteral_11690/*"SAVEKEY_ConnectMarkAnimationId"*/, v118, v119, v120);
    sub_B5D5C4(&StringLiteral_11699/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v121, v122, v123);
    sub_B5D5C4(&StringLiteral_13777/*"TerminalLastPlayedQuestId"*/, v124, v125, v126);
    sub_B5D5C4(&StringLiteral_5268/*"Debug_IsBuildInfoDisp"*/, v127, v128, v129);
    sub_B5D5C4(&StringLiteral_13789/*"TerminalTransitionInfoMissionId"*/, v130, v131, v132);
    sub_B5D5C4(&StringLiteral_11707/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v133, v134, v135);
    byte_42E5C5F = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13771/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13791/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13784/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13782/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13777/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13779/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13772/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13774/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13792/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5272/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5269/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5268/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5270/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5271/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5266/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5267/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13787/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13788/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13773/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13786/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13789/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13790/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13770/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11704/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11703/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11705/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11694/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11695/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11700/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11697/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11698/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11699/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11708/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11691/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11690/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11707/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11689/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11696/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11692/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11701/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11688/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11687/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
  v136 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__InitParameter((const MethodInfo *)v136);
  TerminalPramsManager__DeleteClearDatas(v137);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v138);
  TerminalPramsManager__DeleteQuestRandomGroupList(v139);
}


void __fastcall TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  struct EventRaidDefeatedEffectInfo_o **p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_42E5C9E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11693/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4, v5, v6);
    byte_42E5C9E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CEB )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CEB = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = &v7->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  *p_EventRaidDefeatedEffectInfo_k__BackingField = 0LL;
  sub_B5D560(p_EventRaidDefeatedEffectInfo_k__BackingField);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11693/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_42E5CA3 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11702/*"SAVEKEY_QuestRandomGroupList"*/, v4, v5, v6);
    byte_42E5CA3 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CED )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CED = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = &v7->static_fields->_QuestRandomGroupList_k__BackingField;
  *p_QuestRandomGroupList_k__BackingField = 0LL;
  sub_B5D560(p_QuestRandomGroupList_k__BackingField);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11702/*"SAVEKEY_QuestRandomGroupList"*/, 0LL);
}


void __fastcall TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  TerminalPramsManager_c *v10; // x0
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0
  System_String_o *v15; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E5C68 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_13773/*"TerminalEventDailyPointEventId"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_13786/*"TerminalTimeStatusEventDailyPoint"*/, v7, v8, v9);
    byte_42E5C68 = 1;
  }
  BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5023 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5023 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13773/*"TerminalEventDailyPointEventId"*/,
    v10->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_42E5022 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E5022 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v14->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v15 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13786/*"TerminalTimeStatusEventDailyPoint"*/, v15, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  TerminalPramsManager_c *v10; // x0
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0

  if ( (byte_42E5C67 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_13787/*"TerminalTimeStatusEventId"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_13788/*"TerminalTimeStatusLoopCount"*/, v7, v8, v9);
    byte_42E5C67 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CD0 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13787/*"TerminalTimeStatusEventId"*/,
    v10->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_42E5CD1 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E5CD1 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13788/*"TerminalTimeStatusLoopCount"*/,
    v14->static_fields->_TimeStatusLoopCount_k__BackingField,
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalPramsManager_c *v8; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x8
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5C8B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    byte_42E5C8B = 1;
  }
  value = 0;
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v8->static_fields->folderLastIdxs;
  if ( !folderLastIdxs )
    return 0;
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs;
    if ( !folderLastIdxs )
      sub_B5D69C(v10, v11);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v7; // x0
  int32_t targetFrameRate; // w0

  if ( (byte_42E5C5B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v2, v3, v4);
    byte_42E5C5B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B48 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v2, v3, v4);
    byte_42E4B48 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( v6->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    if ( !byte_42E4B54 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v2, v3, v4);
      byte_42E4B54 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    if ( !v7->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v7);
      targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
      return (float)(1.0 / (float)targetFrameRate) + (float)(1.0 / (float)targetFrameRate);
    }
  }
  return time;
}


int32_t __fastcall TerminalPramsManager__GetQuestReleasedFocusState(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v7; // x1

  if ( (byte_42E5C91 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C91 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_B5D69C(0LL, v7);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C61 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C61 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__InitParameter((const MethodInfo *)v4);
}


void __fastcall TerminalPramsManager__InitMessageWindowData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  struct System_String_o *v8; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *v14; // x0

  if ( (byte_42E5C89 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v4, v5, v6);
    byte_42E5C89 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E57FB )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E57FB = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDispOnly_k__BackingField = 0;
  v8 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_42E4B37 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v7 = TerminalPramsManager_TypeInfo;
    byte_42E4B37 = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v8;
  sub_B5D560(&static_fields->_QuestWindowMessage_k__BackingField);
  if ( !byte_42E4B36 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    byte_42E4B36 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_42E591F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    v13 = TerminalPramsManager_TypeInfo;
    byte_42E591F = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v14 = v13->static_fields;
  v14->_BattleSetupKeep_k__BackingField = 0LL;
  sub_B5D560(&v14->_BattleSetupKeep_k__BackingField);
}


void __fastcall TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  struct TerminalPramsManager_StaticFields *v14; // x0
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  TerminalPramsManager_c *v18; // x0
  struct TimeStatusRecord_o **p_timeStatusRecord_k__BackingField; // x0
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  TerminalPramsManager_c *v23; // x0
  struct EventSaveData_o **p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o **p_lastPlayBgmName; // x0
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  TerminalPramsManager_c *v29; // x0
  struct TerminalPramsManager_StaticFields *v30; // x0
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  TerminalPramsManager_c *v34; // x0
  const MethodInfo *v35; // x0
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  TerminalPramsManager_c *v39; // x0
  struct System_String_o *v40; // x20
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  TerminalPramsManager_c *v45; // x0
  struct System_String_o *v46; // x20
  struct System_String_o **p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  TerminalPramsManager_c *v51; // x0
  struct TerminalPramsManager_StaticFields *v52; // x0
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  TerminalPramsManager_c *v56; // x0

  if ( (byte_42E5C60 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v4, v5, v6);
    byte_42E5C60 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B22 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B22 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_42E4B55 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B55 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_42E4B24 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E4B24 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_42E4B79 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E4B79 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_42E5CB1 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E5CB1 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_42E4B7A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E4B7A = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_42E4B6F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E4B6F = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_42E4B26 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E4B26 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_42E4B27 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E4B27 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_42E5CB2 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E5CB2 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_42E4B6B )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E4B6B = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_42E4B69 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E4B69 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_42E4B71 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v8 = TerminalPramsManager_TypeInfo;
    byte_42E4B71 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_B5D560(&static_fields->_SelectedBannerEntity_k__BackingField);
  if ( !byte_42E4B25 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    byte_42E4B25 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_42E4B72 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    v13 = TerminalPramsManager_TypeInfo;
    byte_42E4B72 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_42E4B2B )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    v13 = TerminalPramsManager_TypeInfo;
    byte_42E4B2B = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsDoneShortcut_k__BackingField = 0;
  v14 = v13->static_fields;
  v14->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&v14->mTerminalWarStartedIds);
  if ( !byte_42E5CB3 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    byte_42E5CB3 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_42E5CB4 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    v18 = TerminalPramsManager_TypeInfo;
    byte_42E5CB4 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_42E5CB5 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    v18 = TerminalPramsManager_TypeInfo;
    byte_42E5CB5 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_42E4B74 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    v18 = TerminalPramsManager_TypeInfo;
    byte_42E4B74 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_42E4B75 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    v18 = TerminalPramsManager_TypeInfo;
    byte_42E4B75 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_42E5CB6 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    v18 = TerminalPramsManager_TypeInfo;
    byte_42E5CB6 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = &v18->static_fields->_timeStatusRecord_k__BackingField;
  *p_timeStatusRecord_k__BackingField = 0LL;
  sub_B5D560(p_timeStatusRecord_k__BackingField);
  if ( !byte_42E5021 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    byte_42E5021 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_42E5020 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    v23 = TerminalPramsManager_TypeInfo;
    byte_42E5020 = 1;
  }
  if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_42E5CB7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    v23 = TerminalPramsManager_TypeInfo;
    byte_42E5CB7 = 1;
  }
  if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_42E5CB8 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    v23 = TerminalPramsManager_TypeInfo;
    byte_42E5CB8 = 1;
  }
  if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_42E5CB9 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    v23 = TerminalPramsManager_TypeInfo;
    byte_42E5CB9 = 1;
  }
  if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v23 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = &v23->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  *p_BeforeEventSubmarineSaveData_k__BackingField = 0LL;
  sub_B5D560(p_BeforeEventSubmarineSaveData_k__BackingField);
  p_lastPlayBgmName = &TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(p_lastPlayBgmName);
  v29 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0;
  v29->static_fields->panelEventPoint = 0;
  if ( !byte_42E501B )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v26, v27, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_42E501B = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v30 = v29->static_fields;
  v30->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_B5D560(&v30->_SpecifiedChangeSceneInfo_k__BackingField);
  if ( !byte_42E5CBA )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
    byte_42E5CBA = 1;
  }
  v34 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v34->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_42E5CBB )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
    v34 = TerminalPramsManager_TypeInfo;
    byte_42E5CBB = 1;
  }
  if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v34->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_42E5CBC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
    v34 = TerminalPramsManager_TypeInfo;
    byte_42E5CBC = 1;
  }
  if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v34->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_42E57FD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v31, v32, v33);
    v34 = TerminalPramsManager_TypeInfo;
    byte_42E57FD = 1;
  }
  if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v34);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v34->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v34);
  TerminalPramsManager__ResetResumeScriptWithMap(v35);
  if ( !byte_42E4B5E )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v36, v37, v38);
    byte_42E4B5E = 1;
  }
  v39 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v39 = TerminalPramsManager_TypeInfo;
  }
  v39->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v40 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_42E5CBD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v36, v37, v38);
    v39 = TerminalPramsManager_TypeInfo;
    byte_42E5CBD = 1;
  }
  if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v39);
    v39 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = &v39->static_fields->_PlayedTerminalEffects_k__BackingField;
  *p_PlayedTerminalEffects_k__BackingField = v40;
  sub_B5D560(p_PlayedTerminalEffects_k__BackingField);
  if ( !byte_42E5CBE )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    byte_42E5CBE = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_42E5CBF )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CBF = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_42E5CC0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC0 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  v45->static_fields->ConnectMarkEventId = 0;
  v45->static_fields->ConnectMarkAnimationId = 0;
  if ( !byte_42E4EB1 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E4EB1 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_42E5CC1 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC1 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_42E501C )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E501C = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_42E501D )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E501D = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_42E5CC2 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC2 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_42E4B62 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E4B62 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_42E5CC3 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC3 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_42E5CC4 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC4 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_42E5CC5 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC5 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_42E5CC2 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC2 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_42E5CC6 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC6 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_42E5CC7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC7 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_42E5CC8 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC8 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_42E5CC9 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CC9 = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_42E5CCA )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CCA = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  v45->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v46 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_42E5CCB )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v42, v43, v44);
    v45 = TerminalPramsManager_TypeInfo;
    byte_42E5CCB = 1;
  }
  if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v45);
    v45 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = &v45->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  *p_SceneMoveQuestClearedInfo_k__BackingField = v46;
  sub_B5D560(p_SceneMoveQuestClearedInfo_k__BackingField);
  if ( !byte_42E5024 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v48, v49, v50);
    byte_42E5024 = 1;
  }
  v51 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v51 = TerminalPramsManager_TypeInfo;
  }
  v52 = v51->static_fields;
  v52->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_B5D560(&v52->_CampaignDirectBonus_k__BackingField);
  if ( !byte_42E502F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v53, v54, v55);
    byte_42E502F = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  v56->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  unsigned __int64 i; // x19
  TerminalPramsManager_c *v5; // x0
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  char *v7; // x8
  __int64 v8; // x0

  if ( (byte_42E5CA8 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CA8 = 1;
  }
  for ( i = 0LL; ; ++i )
  {
    v5 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    TipsArchiveScrollValueList = v5->static_fields->TipsArchiveScrollValueList;
    if ( !TipsArchiveScrollValueList )
LABEL_15:
      sub_B5D69C(v5, v1);
    if ( (__int64)i >= (int)TipsArchiveScrollValueList->max_length )
      break;
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      TipsArchiveScrollValueList = TerminalPramsManager_TypeInfo->static_fields->TipsArchiveScrollValueList;
      if ( !TipsArchiveScrollValueList )
        goto LABEL_15;
    }
    if ( i >= TipsArchiveScrollValueList->max_length )
    {
      v8 = sub_B5D6C8(v5);
      sub_B5D668(v8, 0LL);
    }
    v7 = (char *)TipsArchiveScrollValueList + 4 * i;
    *((_DWORD *)v7 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v6; // x0

  if ( (byte_42E5C53 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C53 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B48 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B48 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  if ( v4->static_fields->_IsAutoResume_k__BackingField )
    return 1;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v4);
  if ( !byte_42E5CAA )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CAA = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  return v6->static_fields->_IsAutoShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__IsAutoForTimeProgressEvents(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  int v23; // w2
  __int64 v24; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  EventDetailEntity_o *v28; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5C55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v16, v17, v18);
    byte_42E5C55 = 1;
  }
  v28 = 0LL;
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B48 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B48 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  if ( !v19->static_fields->_IsAutoResume_k__BackingField )
    return 0;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v19);
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B20 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  if ( v20->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v22, v23, v24);
    byte_42E4B20 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_40;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          HIDWORD(Instance[1].fields.saveNameList->klass),
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_40:
    sub_B5D69C(Instance, v22);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          (WarEntity_o **)&v28,
          entity->fields.eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v28;
  if ( !v28 )
    goto LABEL_40;
  return EventDetailEntity__IsTimeProgressEvent(v28, 0LL);
}


void __fastcall TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C7D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11692/*"SAVEKEY_DataLostBattleAutoReset"*/, v4, v5, v6);
    byte_42E5C7D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD8 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CD8 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11692/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v7->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__IsFreeQuestOnOrdealCall(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  QuestMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  int v20; // w19
  BalanceConfig_c *v21; // x0
  WarEntity_o *v23; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E5CA6 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v14, v15, v16);
    byte_42E5CA6 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !QuestMaster__TryGetQuestEntity(Master_WarQuestSelectionMaster, &entity, questId, 0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (QuestMaster_o *)entity;
  if ( !entity )
    goto LABEL_23;
  if ( QuestEntity__GetTypeFlag(entity, 0LL) != 4 )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v19) )
  {
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v18);
  }
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      v19,
                                                      &v23,
                                                      (int32_t)Master_WarQuestSelectionMaster,
                                                      (const MethodInfo_23FAE6C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return 0;
  if ( !v23 )
    goto LABEL_23;
  v20 = *(&v23->fields.id + 1);
  v21 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v21 = BalanceConfig_TypeInfo;
  }
  return v20 == v21->static_fields->OrdealCallWarId;
}


bool __fastcall TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BalanceConfig_c *v17; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E5C98 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E5C98 = 1;
  }
  entity = 0LL;
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  static_fields = v17->static_fields;
  if ( static_fields->FesWarId != warId )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
            warId,
            (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        &entity,
                                        warId,
                                        (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return entity->fields.eventId == 0;
        }
      }
      sub_B5D69C(Instance, v21);
    }
  }
  return 1;
}


bool __fastcall TerminalPramsManager__IsMainStoryForQuestId(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x19
  int32_t v20; // w19
  WarEntity_o *v23; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E5C99 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    byte_42E5C99 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL),
        !v19) )
  {
LABEL_17:
    sub_B5D69C(Instance, v18);
  }
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                v19,
                                &v23,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v23 )
    goto LABEL_17;
  v20 = *(&v23->fields.id + 1);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStory(v20, v18);
}


bool __fastcall TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BalanceConfig_c *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E5C97 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    byte_42E5C97 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v11->static_fields->NotRequiredPlayWarIds,
         warId,
         (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 0;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStory(warId, v12);
}


bool __fastcall TerminalPramsManager__IsNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalPramsManager_c *v8; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_42E5C8C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    byte_42E5C8C = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v8->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_B5D69C(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C76 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11698/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v4, v5, v6);
    byte_42E5C76 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B60 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B60 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11698/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v7->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C75 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11697/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v4, v5, v6);
    byte_42E5C75 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B5F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B5F = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11697/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v7->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C77 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11699/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v4, v5, v6);
    byte_42E5C77 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD5 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CD5 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11699/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v7->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *klass; // x0
  Il2CppObject *v13; // x8
  char v14; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5CA2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, day, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v6, v7, v8);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v9, v10, v11);
    byte_42E5CA2 = 1;
  }
  value = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CEC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, day, (_DWORD)method, v3);
    byte_42E5CEC = 1;
  }
  klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)TerminalPramsManager_TypeInfo;
  }
  v13 = klass[2].fields.entries->m_Items[16].fields.value;
  if ( !v13
    || (klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v13[1].klass) == 0LL )
  {
    sub_B5D69C(klass, *(_QWORD *)&day);
  }
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         klass,
         eventId,
         &value,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v14 = (char)value;
    if ( value )
      v14 = System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)value,
              day,
              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    v14 = 0;
  }
  return v14 & 1;
}


bool __fastcall TerminalPramsManager__IsTerminalEffectNT2BoardOpen(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  ScrTerminalListTop_c *v13; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w19
  clsQuestCheck_o *v15; // x0
  __int64 v16; // x1
  clsQuestCheck_o *v17; // x19
  clsQuestCheck_o *v18; // x19
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  TerminalPramsManager_c *v22; // x0
  ScrTerminalListTop_c *v23; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v25; // x0

  if ( (byte_42E5C85 & 1) == 0 )
  {
    sub_B5D5C4(&ScrTerminalListTop_TypeInfo, (_DWORD)v1, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    byte_42E5C85 = 1;
  }
  v13 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v13 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v13->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
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
  v15 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v17 = v15;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v17 )
    goto LABEL_49;
  if ( !clsQuestCheck__IsQuestClear(
          v17,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v15 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v18 = v15;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v18 )
LABEL_49:
    sub_B5D69C(v15, v16);
  if ( !clsQuestCheck__IsWarClear(
          v18,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v19, v20, v21);
      byte_42E4B33 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v23 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v22->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v23 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v23->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B34 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v19, v20, v21);
        byte_42E4B34 = 1;
      }
      v25 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v25 = TerminalPramsManager_TypeInfo;
      }
      if ( v25->static_fields->_PhaseCnt_k__BackingField == 2 )
        return 1;
    }
  }
  return 0;
}


bool __fastcall TerminalPramsManager__IsTerminalEffectPlayed(int32_t effectId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  System_String_o *v14; // x1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *v17; // x19
  TerminalPramsManager_c *v18; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v20; // x20
  System_String_c *klass; // x8
  System_String_o *v22; // x20
  unsigned __int64 v23; // x21
  __int64 v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  v26 = effectId;
  if ( (byte_42E5C83 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_69/*"\r\n"*/, v10, v11, v12);
    byte_42E5C83 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD4 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5CD4 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( !v13->static_fields->_PlayedTerminalEffects_k__BackingField )
    return 0;
  v17 = System_Int32__ToString((int32_t)&v26, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD4 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v14, v15, v16);
    byte_42E5CD4 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v18->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField )
    goto LABEL_34;
  v20 = System_String__Replace_44585024(
          PlayedTerminalEffects_k__BackingField,
          (System_String_o *)StringLiteral_69/*"\r\n"*/,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          0LL);
  PlayedTerminalEffects_k__BackingField = (System_String_o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !PlayedTerminalEffects_k__BackingField )
    goto LABEL_34;
  v14 = PlayedTerminalEffects_k__BackingField;
  if ( !LODWORD(PlayedTerminalEffects_k__BackingField[1].klass) )
  {
LABEL_33:
    v25 = sub_B5D6C8(PlayedTerminalEffects_k__BackingField);
    sub_B5D668(v25, 0LL);
  }
  LOWORD(PlayedTerminalEffects_k__BackingField[1].monitor) = 10;
  if ( !v20
    || (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__Split(
                                                                     v20,
                                                                     (System_Char_array *)PlayedTerminalEffects_k__BackingField,
                                                                     0LL)) == 0LL )
  {
LABEL_34:
    sub_B5D69C(PlayedTerminalEffects_k__BackingField, v14);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v22 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass < 1 )
    return 0;
  v23 = 0LL;
  while ( 1 )
  {
    if ( v23 >= (unsigned int)klass )
      goto LABEL_33;
    PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__op_Equality(
                                                                 *((System_String_o **)&v22[1].monitor + v23),
                                                                 v17,
                                                                 0LL);
    if ( ((unsigned __int8)PlayedTerminalEffects_k__BackingField & 1) != 0 )
      return 1;
    LODWORD(klass) = v22[1].klass;
    if ( (__int64)++v23 >= (int)klass )
      return 0;
  }
}


bool __fastcall TerminalPramsManager__IsWarStartedId(int32_t war_id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  System_String_o *mTerminalWarStartedIds; // x0
  System_String_o *v15; // x19
  System_String_c *klass; // x8
  System_String_o *v17; // x19
  unsigned __int64 v18; // x21
  System_String_o *v19; // x20
  System_String_o *v20; // x0
  __int64 v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  v23 = war_id;
  if ( (byte_42E5C87 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_69/*"\r\n"*/, v10, v11, v12);
    byte_42E5C87 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v13->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds )
    goto LABEL_20;
  v15 = System_String__Replace_44585024(
          mTerminalWarStartedIds,
          (System_String_o *)StringLiteral_69/*"\r\n"*/,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          0LL);
  mTerminalWarStartedIds = (System_String_o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !mTerminalWarStartedIds )
    goto LABEL_20;
  method = (const MethodInfo *)mTerminalWarStartedIds;
  if ( !LODWORD(mTerminalWarStartedIds[1].klass) )
  {
LABEL_19:
    v22 = sub_B5D6C8(mTerminalWarStartedIds);
    sub_B5D668(v22, 0LL);
  }
  LOWORD(mTerminalWarStartedIds[1].monitor) = 10;
  if ( !v15
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(
                                                      v15,
                                                      (System_Char_array *)mTerminalWarStartedIds,
                                                      0LL)) == 0LL )
  {
LABEL_20:
    sub_B5D69C(mTerminalWarStartedIds, method);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v17 = mTerminalWarStartedIds;
  if ( (int)klass < 1 )
    return 0;
  v18 = 0LL;
  while ( 1 )
  {
    if ( v18 >= (unsigned int)klass )
      goto LABEL_19;
    v19 = (System_String_o *)*((_QWORD *)&v17[1].monitor + v18);
    v20 = System_Int32__ToString((int32_t)&v23, 0LL);
    mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v19, v20, 0LL);
    if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
      return 1;
    LODWORD(klass) = v17[1].klass;
    if ( (__int64)++v18 >= (int)klass )
      return 0;
  }
}


void __fastcall TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C74 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_13775/*"TerminalLastPanelEventPoint"*/, v4, v5, v6);
    byte_42E5C74 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13775/*"TerminalLastPanelEventPoint"*/, v7->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C72 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11694/*"SAVEKEY_LastPlayBgmName"*/, v4, v5, v6);
    byte_42E5C72 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11694/*"SAVEKEY_LastPlayBgmName"*/, v7->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C73 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11695/*"SAVEKEY_LastPlayQuestConsumeType"*/, v4, v5, v6);
    byte_42E5C73 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11695/*"SAVEKEY_LastPlayQuestConsumeType"*/,
    v7->static_fields->lastPlayQuestConsumeAp,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_ClearData_c *v14; // x0
  TerminalPramsManager_ClearData_c *v15; // x0
  Il2CppObject *String_35648228; // x19
  TerminalPramsManager_ClearData_o *v17; // x19
  TerminalPramsManager_c *v18; // x0
  struct QuestClearHeroineInfo_o **p_mQuestClearHeroineInfo; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int v22; // w2
  __int64 v23; // x3
  struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *qClearHeroineInfo; // x8
  struct TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x9
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v27; // x0
  struct QuestClearHeroineInfo_o **v28; // x0
  __int64 v29; // x0
  bool questClear; // w20
  TerminalPramsManager_c *v31; // x8
  bool phaseClear; // w21
  struct TerminalPramsManager_StaticFields **p_static_fields; // x9
  struct QuestRewardInfo_array *questRewardInfos; // x10
  struct QuestRewardInfo_array *v35; // x20
  struct QuestRewardInfo_array **p_mQuestRewardInfos; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  struct QuestRewardInfo_array *questPhaseRewardInfos; // x8
  TerminalPramsManager_c *v40; // x0
  struct QuestRewardInfo_array *v41; // x20
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  int v45; // w2
  __int64 v46; // x3
  TerminalPramsManager_c *v47; // x8
  struct UserSuperBossEntity_array *mOldSuperBoss; // x9
  struct UserSuperBossEntity_array *v49; // x20
  TerminalPramsManager_c *v50; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  int v54; // w2
  __int64 v55; // x3
  struct UserSuperBossEntity_array *oldPersonalBoss; // x8
  struct UserSuperBossEntity_array *v57; // x20
  TerminalPramsManager_c *v58; // x0
  struct TerminalPramsManager_StaticFields *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  int v62; // w2
  __int64 v63; // x3
  struct EventPointWinReward_o *evPointWinReward; // x8
  struct EventPointWinReward_o *v65; // x20
  TerminalPramsManager_c *v66; // x0
  struct EventPointWinReward_o **p_eventPointWinReward_k__BackingField; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  int v70; // w2
  __int64 v71; // x3
  int32_t evPointWinType; // w20
  TerminalPramsManager_c *v73; // x8
  struct EventRaceBoostInfo_o *evRaceBoost; // x9
  struct EventRaceBoostInfo_o *v75; // x20
  TerminalPramsManager_c *v76; // x0
  struct EventRaceBoostInfo_o **p_eventRaceBoost_k__BackingField; // x0
  __int64 v78; // x0
  __int64 v79; // x1
  int v80; // w2
  __int64 v81; // x3
  struct CostumeReleaseAnnounce_array *questClearCostume; // x8
  struct CostumeReleaseAnnounce_array *v83; // x20
  TerminalPramsManager_c *v84; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  int v88; // w2
  __int64 v89; // x3
  struct CostumeReleaseAnnounce_array *questClearCostumeGetInfo; // x8
  struct CostumeReleaseAnnounce_array *v91; // x20
  TerminalPramsManager_c *v92; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeGet_k__BackingField; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  int v96; // w2
  __int64 v97; // x3
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v99; // x20
  TerminalPramsManager_c *v100; // x0
  struct EventTowerReward_o **p_eventTowerReward_k__BackingField; // x0
  __int64 v102; // x0
  __int64 v103; // x1
  int v104; // w2
  __int64 v105; // x3
  struct QuestRewardInfo_array *resultEventTowerRewardInfo; // x8
  __int64 v107; // x9
  QuestRewardInfo_o *v108; // x9
  struct QuestRewardInfo_array *v109; // x20
  TerminalPramsManager_c *v110; // x0
  struct QuestRewardInfo_array **p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v112; // x0
  __int64 v113; // x1
  int v114; // w2
  __int64 v115; // x3
  struct QuestRewardInfo_array *resultBoostItemRewardInfo; // x8
  struct QuestRewardInfo_array *v117; // x20
  TerminalPramsManager_c *v118; // x0
  struct QuestRewardInfo_array **p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v120; // x0
  __int64 v121; // x1
  int v122; // w2
  __int64 v123; // x3
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo; // x8
  struct QuestRewardInfo_array *v125; // x20
  TerminalPramsManager_c *v126; // x0
  struct QuestRewardInfo_array **p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  int v130; // w2
  __int64 v131; // x3
  bool isDispOnly; // w20
  TerminalPramsManager_c *v133; // x8
  struct WarClearReward_array *warClearReward; // x9
  struct WarClearReward_array *v135; // x20
  TerminalPramsManager_c *v136; // x0
  struct WarClearReward_array **p_warClearReward_k__BackingField; // x0
  __int64 v138; // x0
  __int64 v139; // x1
  int v140; // w2
  __int64 v141; // x3
  int32_t EventActivityPointEffectState; // w20
  TerminalPramsManager_c *v143; // x8
  bool isWarBoardClear; // w21
  struct TerminalPramsManager_StaticFields **v145; // x9
  struct BattleDropItem_array *questResultAfterEventRewardInfos; // x10
  struct BattleDropItem_array *v147; // x20
  struct BattleDropItem_array **p_mQuestResultAfterEventRewardInfos; // x0
  __int64 v149; // x0
  __int64 v150; // x1
  struct BattleDropItem_array *resultEventPanelRewardInfos; // x8
  TerminalPramsManager_c *v152; // x0
  struct BattleDropItem_array *v153; // x20
  struct BattleDropItem_array **p_mResultEventPanelRewardInfos; // x0
  int v155; // w1
  int v156; // w2
  __int64 v157; // x3
  TerminalPramsManager_c *v158; // x0
  struct LimitImageAnnounce_array *limitImageAnnounces; // x20
  struct LimitImageAnnounce_array **p_limitImageAnnounces_k__BackingField; // x0
  int v161; // w1
  int v162; // w2
  __int64 v163; // x3
  bool isOrdealCallWarClear; // w20
  TerminalPramsManager_c *v165; // x8
  int32_t eventMuralId; // w21
  TerminalPramsManager_c *v167; // x8
  TerminalPramsManager_c *v168; // x0
  __int64 v169; // x0

  if ( (byte_42E5C9C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_ClearData_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v4, v5, v6);
    sub_B5D5C4(&JsonManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    byte_42E5C9C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B51 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B51 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( !v13->static_fields->_isQuestRewardSetted_k__BackingField )
  {
    v14 = TerminalPramsManager_ClearData_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
      v14 = TerminalPramsManager_ClearData_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__HasKey(v14->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL) )
    {
      v15 = TerminalPramsManager_ClearData_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
        v15 = TerminalPramsManager_ClearData_TypeInfo;
      }
      String_35648228 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(
                                          v15->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v17 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
              String_35648228,
              (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v18 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = &v18->static_fields->mQuestClearHeroineInfo;
      *p_mQuestClearHeroineInfo = 0LL;
      sub_B5D560(p_mQuestClearHeroineInfo);
      if ( !v17 )
        sub_B5D69C(v20, v21);
      qClearHeroineInfo = v17->fields.qClearHeroineInfo;
      if ( !qClearHeroineInfo )
        sub_B5D69C(v20, v21);
      oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
      if ( oldUsrSvtData && oldUsrSvtData->fields.svtId >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(v17->fields.qClearHeroineInfo, 0LL);
        v27 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v27 = TerminalPramsManager_TypeInfo;
        }
        v28 = &v27->static_fields->mQuestClearHeroineInfo;
        *v28 = Load;
        sub_B5D560(v28);
      }
      v29 = (__int64)TerminalPramsManager_TypeInfo;
      questClear = v17->fields.questClear;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B4E )
      {
        v29 = sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
        byte_42E4B4E = 1;
      }
      v31 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v31 = TerminalPramsManager_TypeInfo;
      }
      v31->static_fields->_IsQuestClear_k__BackingField = questClear;
      phaseClear = v17->fields.phaseClear;
      if ( !byte_42E4B4F )
      {
        v29 = sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
        v31 = TerminalPramsManager_TypeInfo;
        byte_42E4B4F = 1;
      }
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = TerminalPramsManager_TypeInfo;
      }
      p_static_fields = &v31->static_fields;
      v31->static_fields->_IsPhaseClear_k__BackingField = phaseClear;
      questRewardInfos = v17->fields.questRewardInfos;
      if ( !questRewardInfos )
        sub_B5D69C(v29, v21);
      if ( *(_QWORD *)&questRewardInfos->max_length )
        v35 = v17->fields.questRewardInfos;
      else
        v35 = 0LL;
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
      }
      p_mQuestRewardInfos = &(*p_static_fields)->mQuestRewardInfos;
      *p_mQuestRewardInfos = v35;
      sub_B5D560(p_mQuestRewardInfos);
      questPhaseRewardInfos = v17->fields.questPhaseRewardInfos;
      if ( !questPhaseRewardInfos )
        sub_B5D69C(v37, v38);
      v40 = TerminalPramsManager_TypeInfo;
      if ( *(_QWORD *)&questPhaseRewardInfos->max_length )
        v41 = v17->fields.questPhaseRewardInfos;
      else
        v41 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v40 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = &v40->static_fields->mQuestPhaseRewardInfos;
      *p_mQuestPhaseRewardInfos = v41;
      sub_B5D560(p_mQuestPhaseRewardInfos);
      v47 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = v17->fields.clearedLastBattleRaidId;
      v47->static_fields->clearBattleRaidId = v17->fields.clearedBattleRaidId;
      v47->static_fields->joinGroupId = v17->fields.joinGroup;
      mOldSuperBoss = v17->fields.mOldSuperBoss;
      if ( !mOldSuperBoss )
        sub_B5D69C(v43, v44);
      if ( *(_QWORD *)&mOldSuperBoss->max_length )
        v49 = v17->fields.mOldSuperBoss;
      else
        v49 = 0LL;
      if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v47);
      if ( !byte_42E5027 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, v45, v46);
        byte_42E5027 = 1;
      }
      v50 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v50 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v50->static_fields;
      static_fields->_oldSuperBoss_k__BackingField = v49;
      sub_B5D560(&static_fields->_oldSuperBoss_k__BackingField);
      oldPersonalBoss = v17->fields.oldPersonalBoss;
      if ( !oldPersonalBoss )
        sub_B5D69C(v52, v53);
      if ( *(_QWORD *)&oldPersonalBoss->max_length )
        v57 = v17->fields.oldPersonalBoss;
      else
        v57 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E5029 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v53, v54, v55);
        byte_42E5029 = 1;
      }
      v58 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v58 = TerminalPramsManager_TypeInfo;
      }
      v59 = v58->static_fields;
      v59->_oldPersonalBoss_k__BackingField = v57;
      sub_B5D560(&v59->_oldPersonalBoss_k__BackingField);
      evPointWinReward = v17->fields.evPointWinReward;
      if ( !evPointWinReward )
        sub_B5D69C(v60, v61);
      if ( evPointWinReward->fields.id <= 0 )
        v65 = 0LL;
      else
        v65 = v17->fields.evPointWinReward;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E5CE2 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v61, v62, v63);
        byte_42E5CE2 = 1;
      }
      v66 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v66 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = &v66->static_fields->_eventPointWinReward_k__BackingField;
      *p_eventPointWinReward_k__BackingField = v65;
      sub_B5D560(p_eventPointWinReward_k__BackingField);
      evPointWinType = v17->fields.evPointWinType;
      if ( !byte_42E5CE3 )
      {
        v68 = sub_B5D5C4(&TerminalPramsManager_TypeInfo, v69, v70, v71);
        byte_42E5CE3 = 1;
      }
      v73 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v73 = TerminalPramsManager_TypeInfo;
      }
      v73->static_fields->_eventPointWinType_k__BackingField = evPointWinType;
      evRaceBoost = v17->fields.evRaceBoost;
      if ( !evRaceBoost )
        sub_B5D69C(v68, v69);
      if ( evRaceBoost->fields.termId <= 0 )
        v75 = 0LL;
      else
        v75 = v17->fields.evRaceBoost;
      if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v73);
      if ( !byte_42E5CE5 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v69, v70, v71);
        byte_42E5CE5 = 1;
      }
      v76 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v76 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = &v76->static_fields->_eventRaceBoost_k__BackingField;
      *p_eventRaceBoost_k__BackingField = v75;
      sub_B5D560(p_eventRaceBoost_k__BackingField);
      questClearCostume = v17->fields.questClearCostume;
      if ( !questClearCostume )
        sub_B5D69C(v78, v79);
      if ( *(_QWORD *)&questClearCostume->max_length )
        v83 = v17->fields.questClearCostume;
      else
        v83 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E5CE1 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v79, v80, v81);
        byte_42E5CE1 = 1;
      }
      v84 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v84 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = &v84->static_fields->_questClearCostumeRelease_k__BackingField;
      *p_questClearCostumeRelease_k__BackingField = v83;
      sub_B5D560(p_questClearCostumeRelease_k__BackingField);
      questClearCostumeGetInfo = v17->fields.questClearCostumeGetInfo;
      if ( !questClearCostumeGetInfo )
        sub_B5D69C(v86, v87);
      if ( *(_QWORD *)&questClearCostumeGetInfo->max_length )
        v91 = v17->fields.questClearCostumeGetInfo;
      else
        v91 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B4C )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v87, v88, v89);
        byte_42E4B4C = 1;
      }
      v92 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v92 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = &v92->static_fields->_questClearCostumeGet_k__BackingField;
      *p_questClearCostumeGet_k__BackingField = v91;
      sub_B5D560(p_questClearCostumeGet_k__BackingField);
      eventTowerReward = v17->fields.eventTowerReward;
      if ( !eventTowerReward )
        sub_B5D69C(v94, v95);
      if ( eventTowerReward->fields.eventId <= 0 )
        v99 = 0LL;
      else
        v99 = v17->fields.eventTowerReward;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E502C )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v95, v96, v97);
        byte_42E502C = 1;
      }
      v100 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v100 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = &v100->static_fields->_eventTowerReward_k__BackingField;
      *p_eventTowerReward_k__BackingField = v99;
      sub_B5D560(p_eventTowerReward_k__BackingField);
      resultEventTowerRewardInfo = v17->fields.resultEventTowerRewardInfo;
      if ( !resultEventTowerRewardInfo )
        sub_B5D69C(v102, v103);
      v107 = *(_QWORD *)&resultEventTowerRewardInfo->max_length;
      if ( v107 )
      {
        if ( !(_DWORD)v107 )
        {
          v169 = sub_B5D6C8(v102);
          sub_B5D668(v169, 0LL);
        }
        v108 = resultEventTowerRewardInfo->m_Items[0];
        if ( !v108 )
          sub_B5D69C(v102, v103);
        if ( v108->fields.userSvtId <= 0 )
          v109 = 0LL;
        else
          v109 = v17->fields.resultEventTowerRewardInfo;
      }
      else
      {
        v109 = 0LL;
      }
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E502D )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v103, v104, v105);
        byte_42E502D = 1;
      }
      v110 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v110 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = &v110->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      *p_resultEventTowerRewardInfo_k__BackingField = v109;
      sub_B5D560(p_resultEventTowerRewardInfo_k__BackingField);
      resultBoostItemRewardInfo = v17->fields.resultBoostItemRewardInfo;
      if ( !resultBoostItemRewardInfo )
        sub_B5D69C(v112, v113);
      if ( *(_QWORD *)&resultBoostItemRewardInfo->max_length )
        v117 = v17->fields.resultBoostItemRewardInfo;
      else
        v117 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B42 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v113, v114, v115);
        byte_42E4B42 = 1;
      }
      v118 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v118 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = &v118->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      *p_resultBoostItemRewardInfo_k__BackingField = v117;
      sub_B5D560(p_resultBoostItemRewardInfo_k__BackingField);
      resultEventBoardGameTokenRewardInfo = v17->fields.resultEventBoardGameTokenRewardInfo;
      if ( !resultEventBoardGameTokenRewardInfo )
        sub_B5D69C(v120, v121);
      if ( *(_QWORD *)&resultEventBoardGameTokenRewardInfo->max_length )
        v125 = v17->fields.resultEventBoardGameTokenRewardInfo;
      else
        v125 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B43 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v121, v122, v123);
        byte_42E4B43 = 1;
      }
      v126 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = &v126->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      *p_resultEventBoardGameTokenRewardInfo_k__BackingField = v125;
      sub_B5D560(p_resultEventBoardGameTokenRewardInfo_k__BackingField);
      isDispOnly = v17->fields.isDispOnly;
      if ( !byte_42E57FB )
      {
        v128 = sub_B5D5C4(&TerminalPramsManager_TypeInfo, v129, v130, v131);
        byte_42E57FB = 1;
      }
      v133 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v133 = TerminalPramsManager_TypeInfo;
      }
      v133->static_fields->_IsDispOnly_k__BackingField = isDispOnly;
      warClearReward = v17->fields.warClearReward;
      if ( !warClearReward )
        sub_B5D69C(v128, v129);
      if ( *(_QWORD *)&warClearReward->max_length )
        v135 = v17->fields.warClearReward;
      else
        v135 = 0LL;
      if ( (BYTE3(v133->vtable._0_Equals.methodPtr) & 4) != 0 && !v133->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v133);
      if ( !byte_42E4B53 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v129, v130, v131);
        byte_42E4B53 = 1;
      }
      v136 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v136 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = &v136->static_fields->_warClearReward_k__BackingField;
      *p_warClearReward_k__BackingField = v135;
      sub_B5D560(p_warClearReward_k__BackingField);
      EventActivityPointEffectState = v17->fields.EventActivityPointEffectState;
      if ( !byte_42E5640 )
      {
        v138 = sub_B5D5C4(&TerminalPramsManager_TypeInfo, v139, v140, v141);
        byte_42E5640 = 1;
      }
      v143 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v143 = TerminalPramsManager_TypeInfo;
      }
      v143->static_fields->_EventActivityPointEffectState_k__BackingField = EventActivityPointEffectState;
      isWarBoardClear = v17->fields.isWarBoardClear;
      if ( !byte_42E4B50 )
      {
        v138 = sub_B5D5C4(&TerminalPramsManager_TypeInfo, v139, v140, v141);
        v143 = TerminalPramsManager_TypeInfo;
        byte_42E4B50 = 1;
      }
      if ( (BYTE3(v143->vtable._0_Equals.methodPtr) & 4) != 0 && !v143->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v143);
        v143 = TerminalPramsManager_TypeInfo;
      }
      v145 = &v143->static_fields;
      v143->static_fields->_IsWarBoardClear_k__BackingField = isWarBoardClear;
      questResultAfterEventRewardInfos = v17->fields.questResultAfterEventRewardInfos;
      if ( !questResultAfterEventRewardInfos )
        sub_B5D69C(v138, v139);
      if ( *(_QWORD *)&questResultAfterEventRewardInfos->max_length )
        v147 = v17->fields.questResultAfterEventRewardInfos;
      else
        v147 = 0LL;
      if ( (BYTE3(v143->vtable._0_Equals.methodPtr) & 4) != 0 && !v143->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v143);
        v145 = &TerminalPramsManager_TypeInfo->static_fields;
      }
      p_mQuestResultAfterEventRewardInfos = &(*v145)->mQuestResultAfterEventRewardInfos;
      *p_mQuestResultAfterEventRewardInfos = v147;
      sub_B5D560(p_mQuestResultAfterEventRewardInfos);
      resultEventPanelRewardInfos = v17->fields.resultEventPanelRewardInfos;
      if ( !resultEventPanelRewardInfos )
        sub_B5D69C(v149, v150);
      v152 = TerminalPramsManager_TypeInfo;
      if ( *(_QWORD *)&resultEventPanelRewardInfos->max_length )
        v153 = v17->fields.resultEventPanelRewardInfos;
      else
        v153 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v152 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = &v152->static_fields->mResultEventPanelRewardInfos;
      *p_mResultEventPanelRewardInfos = v153;
      sub_B5D560(p_mResultEventPanelRewardInfos);
      v158 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = v17->fields.panelEventPoint;
      limitImageAnnounces = v17->fields.limitImageAnnounces;
      if ( !byte_42E4B47 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v155, v156, v157);
        v158 = TerminalPramsManager_TypeInfo;
        byte_42E4B47 = 1;
      }
      if ( (BYTE3(v158->vtable._0_Equals.methodPtr) & 4) != 0 && !v158->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v158);
        v158 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = &v158->static_fields->_limitImageAnnounces_k__BackingField;
      *p_limitImageAnnounces_k__BackingField = limitImageAnnounces;
      sub_B5D560(p_limitImageAnnounces_k__BackingField);
      isOrdealCallWarClear = v17->fields.isOrdealCallWarClear;
      if ( !byte_42E4B6D )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v161, v162, v163);
        byte_42E4B6D = 1;
      }
      v165 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v165 = TerminalPramsManager_TypeInfo;
      }
      v165->static_fields->_IsOrdealCallWarClear_k__BackingField = isOrdealCallWarClear;
      eventMuralId = v17->fields.eventMuralId;
      if ( !byte_42E4B3F )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v161, v162, v163);
        v165 = TerminalPramsManager_TypeInfo;
        byte_42E4B3F = 1;
      }
      if ( (BYTE3(v165->vtable._0_Equals.methodPtr) & 4) != 0 && !v165->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v165);
        v165 = TerminalPramsManager_TypeInfo;
      }
      v165->static_fields->_EventMuralId_k__BackingField = eventMuralId;
      if ( v17->fields.phaseClear )
      {
        if ( (BYTE3(v165->vtable._0_Equals.methodPtr) & 4) != 0 && !v165->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v165);
        if ( !byte_42E4B29 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v161, v162, v163);
          byte_42E4B29 = 1;
        }
        v165 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v165 = TerminalPramsManager_TypeInfo;
        }
        v165->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( (BYTE3(v165->vtable._0_Equals.methodPtr) & 4) != 0 && !v165->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v165);
      if ( !byte_42E4B52 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v161, v162, v163);
        byte_42E4B52 = 1;
      }
      v167 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v167 = TerminalPramsManager_TypeInfo;
      }
      if ( v167->static_fields->_warClearReward_k__BackingField )
        goto LABEL_304;
      if ( (BYTE3(v167->vtable._0_Equals.methodPtr) & 4) != 0 && !v167->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v167);
      if ( !byte_42E4B4D )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v161, v162, v163);
        byte_42E4B4D = 1;
      }
      v167 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v167 = TerminalPramsManager_TypeInfo;
      }
      if ( v167->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_304:
        if ( (BYTE3(v167->vtable._0_Equals.methodPtr) & 4) != 0 && !v167->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v167);
        if ( !byte_42E5CEA )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v161, v162, v163);
          byte_42E5CEA = 1;
        }
        v168 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v168 = TerminalPramsManager_TypeInfo;
        }
        v168->static_fields->_isQuestRewardSetted_k__BackingField = 1;
      }
    }
  }
}


void __fastcall TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  System_String_o *String; // x20
  EventRaidDefeatedEffectInfo_o *v15; // x19
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5C9F & 1) == 0 )
  {
    sub_B5D5C4(&EventRaidDefeatedEffectInfo_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&string_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_11693/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v10, v11, v12);
    byte_42E5C9F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CEC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CEC = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  if ( !v13->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11693/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v15 = (EventRaidDefeatedEffectInfo_o *)sub_B5D694(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v15, String, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CEB )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v16, v17, v18);
      byte_42E5CEB = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v19->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v15;
    sub_B5D560(&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField);
  }
}


void __fastcall TerminalPramsManager__LoadQuestRandomGroupList(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  TerminalPramsManager_c *v22; // x0
  System_String_o *String; // x20
  System_Collections_Generic_Dictionary_int__int__o *v24; // x19
  System_String_array *v25; // x0
  System_String_array *v26; // x1
  int32_t v27; // w2
  __int64 v28; // x3
  int max_length; // w8
  System_String_array *v30; // x20
  unsigned int v31; // w24
  System_String_o *v32; // x21
  System_String_array *v33; // x21
  TerminalPramsManager_c *v34; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **p_QuestRandomGroupList_k__BackingField; // x0
  __int64 v36; // x0
  int32_t result[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E5CA4 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&string_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_11702/*"SAVEKEY_QuestRandomGroupList"*/, v19, v20, v21);
    byte_42E5CA4 = 1;
  }
  *(_QWORD *)result = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CEE )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CEE = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  if ( !v22->static_fields->_QuestRandomGroupList_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11702/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v24,
      (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    v25 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v25 )
      goto LABEL_42;
    v26 = v25;
    if ( !v25->max_length )
      goto LABEL_43;
    LOWORD(v25->m_Items[0]) = 44;
    if ( !String || (v25 = System_String__Split(String, (System_Char_array *)v25, 0LL)) == 0LL )
LABEL_42:
      sub_B5D69C(v25, v26);
    max_length = v25->max_length;
    v30 = v25;
    if ( max_length >= 1 )
    {
      v31 = 0;
      while ( v31 < max_length )
      {
        v32 = v30->m_Items[v31];
        v25 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !v25 )
          goto LABEL_42;
        v26 = v25;
        if ( !v25->max_length )
          break;
        LOWORD(v25->m_Items[0]) = 58;
        if ( !v32 )
          goto LABEL_42;
        v25 = System_String__Split(v32, (System_Char_array *)v25, 0LL);
        if ( !v25 )
          goto LABEL_42;
        v33 = v25;
        if ( (int)v25->max_length >= 2 )
        {
          v25 = (System_String_array *)System_Int32__TryParse(v25->m_Items[0], &result[1], 0LL);
          if ( result[1] >= 1 && ((unsigned __int8)v25 & 1) != 0 )
          {
            if ( v33->max_length <= 1 )
              break;
            v25 = (System_String_array *)System_Int32__TryParse(v33->m_Items[1], result, 0LL);
            v27 = result[0];
            if ( result[0] >= 1 && ((unsigned __int8)v25 & 1) != 0 )
            {
              if ( !v24 )
                goto LABEL_42;
              System_Collections_Generic_Dictionary_int__int___Add(
                v24,
                result[1],
                result[0],
                (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v30->max_length;
        if ( (int)++v31 >= max_length )
          goto LABEL_32;
      }
LABEL_43:
      v36 = sub_B5D6C8(v25);
      sub_B5D668(v36, 0LL);
    }
LABEL_32:
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CED )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v26, v27, v28);
      byte_42E5CED = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = &v34->static_fields->_QuestRandomGroupList_k__BackingField;
    *p_QuestRandomGroupList_k__BackingField = v24;
    sub_B5D560(p_QuestRandomGroupList_k__BackingField);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x0

  if ( (byte_42E5C8E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C8E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v4);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v7)) == 0LL) )
  {
    sub_B5D69C(QuestFocusStateManager, v6);
  }
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0LL);
}


void __fastcall TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
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
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  int v133; // w1
  int v134; // w2
  __int64 v135; // x3
  int v136; // w1
  int v137; // w2
  __int64 v138; // x3
  int v139; // w1
  int v140; // w2
  __int64 v141; // x3
  int v142; // w1
  int v143; // w2
  __int64 v144; // x3
  int v145; // w1
  int v146; // w2
  __int64 v147; // x3
  int v148; // w1
  int v149; // w2
  __int64 v150; // x3
  int v151; // w1
  int v152; // w2
  __int64 v153; // x3
  System_String_o *v154; // x19
  int v155; // w1
  int v156; // w2
  __int64 v157; // x3
  int32_t Int_35647620; // w19
  TerminalPramsManager_c *v159; // x0
  System_String_o *v160; // x19
  int v161; // w1
  int v162; // w2
  __int64 v163; // x3
  int32_t v164; // w19
  TerminalPramsManager_c *v165; // x0
  System_String_o *v166; // x19
  int v167; // w1
  int v168; // w2
  __int64 v169; // x3
  int32_t v170; // w19
  TerminalPramsManager_c *v171; // x0
  System_String_o *v172; // x19
  int v173; // w1
  int v174; // w2
  __int64 v175; // x3
  int32_t v176; // w19
  TerminalPramsManager_c *v177; // x0
  System_String_o *v178; // x19
  int v179; // w1
  int v180; // w2
  __int64 v181; // x3
  int32_t v182; // w19
  TerminalPramsManager_c *v183; // x0
  System_String_o *v184; // x19
  int v185; // w1
  int v186; // w2
  __int64 v187; // x3
  int32_t v188; // w19
  TerminalPramsManager_c *v189; // x0
  System_String_o *v190; // x19
  System_String_o *String_35648228; // x20
  int v192; // w1
  int v193; // w2
  __int64 v194; // x3
  int64_t v195; // x19
  TerminalPramsManager_c *v196; // x0
  System_String_o *v197; // x19
  int v198; // w1
  int v199; // w2
  __int64 v200; // x3
  int32_t v201; // w19
  TerminalPramsManager_c *v202; // x0
  System_String_o *v203; // x19
  System_String_o *v204; // x19
  TerminalPramsManager_c *v205; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v207; // x19
  int v208; // w1
  int v209; // w2
  __int64 v210; // x3
  int32_t v211; // w19
  TerminalPramsManager_c *v212; // x0
  System_String_o *v213; // x19
  int v214; // w1
  int v215; // w2
  __int64 v216; // x3
  int32_t v217; // w19
  TerminalPramsManager_c *v218; // x0
  System_String_o *v219; // x19
  int v220; // w1
  int v221; // w2
  __int64 v222; // x3
  int32_t v223; // w19
  TerminalPramsManager_c *v224; // x0
  System_String_o *v225; // x19
  int v226; // w1
  int v227; // w2
  __int64 v228; // x3
  int32_t v229; // w19
  TerminalPramsManager_c *v230; // x0
  System_String_o *v231; // x19
  int v232; // w1
  int v233; // w2
  __int64 v234; // x3
  int32_t v235; // w19
  TerminalPramsManager_c *v236; // x0
  System_String_o *v237; // x19
  int v238; // w1
  int v239; // w2
  __int64 v240; // x3
  int32_t v241; // w19
  TerminalPramsManager_c *v242; // x0
  System_String_o *v243; // x19
  System_String_o *v244; // x20
  int v245; // w1
  int v246; // w2
  __int64 v247; // x3
  int64_t v248; // x19
  TerminalPramsManager_c *v249; // x0
  System_String_o *v250; // x19
  int v251; // w1
  int v252; // w2
  __int64 v253; // x3
  int32_t v254; // w19
  TerminalPramsManager_c *v255; // x0
  System_String_o *v256; // x19
  int v257; // w1
  int v258; // w2
  __int64 v259; // x3
  int32_t v260; // w19
  TerminalPramsManager_c *v261; // x0
  System_String_o *v262; // x19
  Il2CppObject *v263; // x19
  int v264; // w1
  int v265; // w2
  __int64 v266; // x3
  TerminalPramsManager_ClearData_o *v267; // x19
  TerminalPramsManager_c *v268; // x0
  _QWORD *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v270; // x19
  int v271; // w1
  const MethodInfo *v272; // x2
  __int64 v273; // x3
  int32_t v274; // w20
  TerminalPramsManager_c *v275; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v277; // x19
  Il2CppObject *v278; // x19
  TerminalPramsManager_ClearData_o *v279; // x19
  TerminalPramsManager_c *v280; // x8
  _QWORD *p_eventConquestInfos; // x0
  System_String_o *v282; // x19
  int32_t v283; // w19
  TerminalPramsManager_c *v284; // x8
  System_String_o *v285; // x19
  Il2CppObject *v286; // x19
  TerminalPramsManager_ClearData_o *v287; // x19
  TerminalPramsManager_c *v288; // x8
  _QWORD *p_eventHarvestGrowthInfo; // x0
  System_String_o *v290; // x19
  System_String_o *v291; // x19
  TerminalPramsManager_c *v292; // x8
  struct System_String_o **p_lastPlayBgmName; // x0
  System_String_o *v294; // x19
  int32_t v295; // w19
  TerminalPramsManager_c *v296; // x8
  System_String_o *v297; // x19
  int v298; // w1
  int v299; // w2
  __int64 v300; // x3
  int32_t v301; // w19
  TerminalPramsManager_c *v302; // x0
  System_String_o *v303; // x19
  int32_t v304; // w19
  TerminalPramsManager_c *v305; // x8
  System_String_o *v306; // x19
  int v307; // w1
  int v308; // w2
  __int64 v309; // x3
  System_String_o *v310; // x19
  TerminalPramsManager_c *v311; // x0
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v313; // x19
  int v314; // w1
  int v315; // w2
  __int64 v316; // x3
  int32_t v317; // w19
  TerminalPramsManager_c *v318; // x0
  System_String_o *v319; // x19
  int v320; // w1
  int v321; // w2
  __int64 v322; // x3
  int32_t v323; // w19
  TerminalPramsManager_c *v324; // x0
  System_String_o *v325; // x19
  int v326; // w1
  int v327; // w2
  __int64 v328; // x3
  int32_t v329; // w19
  TerminalPramsManager_c *v330; // x0
  System_String_o *v331; // x19
  int v332; // w1
  int v333; // w2
  __int64 v334; // x3
  int32_t v335; // w19
  TerminalPramsManager_c *v336; // x0
  System_String_o *v337; // x19
  int32_t v338; // w19
  TerminalPramsManager_c *v339; // x8
  System_String_o *v340; // x19
  int32_t v341; // w19
  TerminalPramsManager_c *v342; // x8
  System_String_o *v343; // x19
  int v344; // w1
  int v345; // w2
  __int64 v346; // x3
  int32_t v347; // w19
  TerminalPramsManager_c *v348; // x0
  System_String_o *v349; // x19
  int v350; // w1
  int v351; // w2
  __int64 v352; // x3
  System_String_o *v353; // x19
  TerminalPramsManager_c *v354; // x0
  struct System_String_o **p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v356; // x19
  System_String_o *v357; // x19
  System_String_array *v358; // x0
  System_String_array *v359; // x1
  int v360; // w2
  __int64 v361; // x3
  __int64 v362; // x8
  System_String_array *v363; // x19
  int32_t v364; // w20
  TerminalPramsManager_c *v365; // x8
  int32_t v366; // w0
  int32_t v367; // w19
  TerminalPramsManager_c *v368; // x0
  System_String_o *v369; // x19
  int v370; // w1
  int v371; // w2
  __int64 v372; // x3
  int32_t v373; // w19
  TerminalPramsManager_c *v374; // x0
  System_String_o *v375; // x19
  int v376; // w1
  int v377; // w2
  __int64 v378; // x3
  int32_t v379; // w19
  TerminalPramsManager_c *v380; // x0
  System_String_o *v381; // x19
  Il2CppObject *v382; // x19
  int v383; // w1
  int v384; // w2
  __int64 v385; // x3
  TerminalPramsManager_ClearData_o *v386; // x19
  TerminalPramsManager_c *v387; // x0
  struct TerminalPramsManager_StaticFields *v388; // x0
  System_String_o *v389; // x19
  int v390; // w1
  int v391; // w2
  __int64 v392; // x3
  int32_t v393; // w19
  TerminalPramsManager_c *v394; // x0
  System_String_o *v395; // x19
  int v396; // w1
  int v397; // w2
  __int64 v398; // x3
  int32_t v399; // w19
  TerminalPramsManager_c *v400; // x0
  __int64 v401; // x0

  if ( (byte_42E5C62 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_Convert_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v7, v8, v9);
    sub_B5D5C4(&Method_JsonManager_Deserialize_EventConquestInfo_____, v10, v11, v12);
    sub_B5D5C4(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v13, v14, v15);
    sub_B5D5C4(&Method_JsonManager_Deserialize_EventSaveData___, v16, v17, v18);
    sub_B5D5C4(&JsonManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_11694/*"SAVEKEY_LastPlayBgmName"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_13772/*"TerminalEndTime"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_11700/*"SAVEKEY_PlayedTerminalEffects"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_11688/*"SAVEKEY_CampaignDirectBonus"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_11695/*"SAVEKEY_LastPlayQuestConsumeType"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_11706/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_13773/*"TerminalEventDailyPointEventId"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_13770/*"TerminalBeforeEventSubmarinePointData"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_13779/*"TerminalPhaseCnt"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_11704/*"SAVEKEY_TerminalConquestInfos"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_13787/*"TerminalTimeStatusEventId"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_13771/*"TerminalDispState"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_11697/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_13774/*"TerminalIsDoneShortcut"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_11696/*"SAVEKEY_MapModelClearQuestInfo"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_11701/*"SAVEKEY_PlayerGenderType"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_11686/*"SAVEKEY_BlankEarthRank"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_13775/*"TerminalLastPanelEventPoint"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_11705/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_11689/*"SAVEKEY_ClearEventQuestIds"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_11698/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_5272/*"Debug_IsQuestReleaseAll"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_5269/*"Debug_IsDummyErrorSelect"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_13782/*"TerminalQuestId"*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_11703/*"SAVEKEY_TerminalConquestInfoDisp"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_11708/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_13786/*"TerminalTimeStatusEventDailyPoint"*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_13791/*"TerminalWarId"*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_13784/*"TerminalSpotId"*/, v112, v113, v114);
    sub_B5D5C4(&StringLiteral_13788/*"TerminalTimeStatusLoopCount"*/, v115, v116, v117);
    sub_B5D5C4(&StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/, v118, v119, v120);
    sub_B5D5C4(&StringLiteral_11687/*"SAVEKEY_BlankEarthSpotId"*/, v121, v122, v123);
    sub_B5D5C4(&StringLiteral_11692/*"SAVEKEY_DataLostBattleAutoReset"*/, v124, v125, v126);
    sub_B5D5C4(&StringLiteral_13792/*"TerminalWarStartedIds"*/, v127, v128, v129);
    sub_B5D5C4(&StringLiteral_11691/*"SAVEKEY_ConnectMarkEventId"*/, v130, v131, v132);
    sub_B5D5C4(&StringLiteral_13776/*"TerminalLastPlayedFreeQuestSpotId"*/, v133, v134, v135);
    sub_B5D5C4(&StringLiteral_11690/*"SAVEKEY_ConnectMarkAnimationId"*/, v136, v137, v138);
    sub_B5D5C4(&StringLiteral_11699/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v139, v140, v141);
    sub_B5D5C4(&StringLiteral_1/*""*/, v142, v143, v144);
    sub_B5D5C4(&StringLiteral_13777/*"TerminalLastPlayedQuestId"*/, v145, v146, v147);
    sub_B5D5C4(&StringLiteral_5268/*"Debug_IsBuildInfoDisp"*/, v148, v149, v150);
    sub_B5D5C4(&StringLiteral_11707/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v151, v152, v153);
    byte_42E5C62 = 1;
  }
  v154 = (System_String_o *)StringLiteral_13771/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13771/*"TerminalDispState"*/, 0LL) )
  {
    Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(v154, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B28 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v155, v156, v157);
      byte_42E4B28 = 1;
    }
    v159 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v159 = TerminalPramsManager_TypeInfo;
    }
    v159->static_fields->_DispState_k__BackingField = Int_35647620;
  }
  v160 = (System_String_o *)StringLiteral_13791/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13791/*"TerminalWarId"*/, 0LL) )
  {
    v164 = UnityEngine_PlayerPrefs__GetInt_35647620(v160, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B22 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v161, v162, v163);
      byte_42E4B22 = 1;
    }
    v165 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v165 = TerminalPramsManager_TypeInfo;
    }
    v165->static_fields->_WarId_k__BackingField = v164;
  }
  v166 = (System_String_o *)StringLiteral_13784/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13784/*"TerminalSpotId"*/, 0LL) )
  {
    v170 = UnityEngine_PlayerPrefs__GetInt_35647620(v166, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B55 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v167, v168, v169);
      byte_42E4B55 = 1;
    }
    v171 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v171 = TerminalPramsManager_TypeInfo;
    }
    v171->static_fields->_SpotId_k__BackingField = v170;
  }
  v172 = (System_String_o *)StringLiteral_13782/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13782/*"TerminalQuestId"*/, 0LL) )
  {
    v176 = UnityEngine_PlayerPrefs__GetInt_35647620(v172, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B24 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v173, v174, v175);
      byte_42E4B24 = 1;
    }
    v177 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v177 = TerminalPramsManager_TypeInfo;
    }
    v177->static_fields->_QuestId_k__BackingField = v176;
  }
  v178 = (System_String_o *)StringLiteral_13777/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13777/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v182 = UnityEngine_PlayerPrefs__GetInt_35647620(v178, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B79 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v179, v180, v181);
      byte_42E4B79 = 1;
    }
    v183 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v183 = TerminalPramsManager_TypeInfo;
    }
    v183->static_fields->_LastPlayedQuestId_k__BackingField = v182;
  }
  v184 = (System_String_o *)StringLiteral_13779/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13779/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v188 = UnityEngine_PlayerPrefs__GetInt_35647620(v184, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B25 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v185, v186, v187);
      byte_42E4B25 = 1;
    }
    v189 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v189 = TerminalPramsManager_TypeInfo;
    }
    v189->static_fields->_PhaseCnt_k__BackingField = v188;
  }
  v190 = (System_String_o *)StringLiteral_13772/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13772/*"TerminalEndTime"*/, 0LL) )
  {
    String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228(v190, 0LL);
    v195 = 0LL;
    if ( System_String__op_Inequality(String_35648228, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v195 = System_Convert__ToInt64_42789364(String_35648228, 0LL);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B72 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v192, v193, v194);
      byte_42E4B72 = 1;
    }
    v196 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v196 = TerminalPramsManager_TypeInfo;
    }
    v196->static_fields->_EndTime_k__BackingField = v195;
  }
  v197 = (System_String_o *)StringLiteral_13774/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13774/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v201 = UnityEngine_PlayerPrefs__GetInt_35647620(v197, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B2B )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v198, v199, v200);
      byte_42E4B2B = 1;
    }
    v202 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v202 = TerminalPramsManager_TypeInfo;
    }
    v202->static_fields->_IsDoneShortcut_k__BackingField = v201 != 0;
  }
  v203 = (System_String_o *)StringLiteral_13792/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13792/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v204 = UnityEngine_PlayerPrefs__GetString_35648228(v203, 0LL);
    v205 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v205 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v205->static_fields;
    static_fields->mTerminalWarStartedIds = v204;
    sub_B5D560(&static_fields->mTerminalWarStartedIds);
  }
  v207 = (System_String_o *)StringLiteral_5272/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5272/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v211 = UnityEngine_PlayerPrefs__GetInt_35647620(v207, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CB3 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v208, v209, v210);
      byte_42E5CB3 = 1;
    }
    v212 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v212 = TerminalPramsManager_TypeInfo;
    }
    v212->static_fields->mDebug_IsQuestReleaseAll = v211 != 0;
  }
  v213 = (System_String_o *)StringLiteral_5269/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5269/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v217 = UnityEngine_PlayerPrefs__GetInt_35647620(v213, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CB4 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v214, v215, v216);
      byte_42E5CB4 = 1;
    }
    v218 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v218 = TerminalPramsManager_TypeInfo;
    }
    v218->static_fields->mDebug_IsDummyErrorSelect = v217 != 0;
  }
  v219 = (System_String_o *)StringLiteral_5268/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5268/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v223 = UnityEngine_PlayerPrefs__GetInt_35647620(v219, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CB5 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v220, v221, v222);
      byte_42E5CB5 = 1;
    }
    v224 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v224 = TerminalPramsManager_TypeInfo;
    }
    v224->static_fields->mDebug_IsBuildInfoDisp = v223 != 0;
  }
  v225 = (System_String_o *)StringLiteral_13787/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13787/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v229 = UnityEngine_PlayerPrefs__GetInt_35647620(v225, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B74 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v226, v227, v228);
      byte_42E4B74 = 1;
    }
    v230 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v230 = TerminalPramsManager_TypeInfo;
    }
    v230->static_fields->_TimeStatusEventId_k__BackingField = v229;
  }
  v231 = (System_String_o *)StringLiteral_13788/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13788/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v235 = UnityEngine_PlayerPrefs__GetInt_35647620(v231, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B75 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v232, v233, v234);
      byte_42E4B75 = 1;
    }
    v236 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v236 = TerminalPramsManager_TypeInfo;
    }
    v236->static_fields->_TimeStatusLoopCount_k__BackingField = v235;
  }
  v237 = (System_String_o *)StringLiteral_13773/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13773/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v241 = UnityEngine_PlayerPrefs__GetInt_35647620(v237, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5021 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v238, v239, v240);
      byte_42E5021 = 1;
    }
    v242 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v242 = TerminalPramsManager_TypeInfo;
    }
    v242->static_fields->_EventDailyPointEventId_k__BackingField = v241;
  }
  v243 = (System_String_o *)StringLiteral_13786/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13786/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v244 = UnityEngine_PlayerPrefs__GetString_35648228(v243, 0LL);
    v248 = 0LL;
    if ( !System_String__op_Equality(v244, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v248 = System_Convert__ToInt64_42789364(v244, 0LL);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5020 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v245, v246, v247);
      byte_42E5020 = 1;
    }
    v249 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v249 = TerminalPramsManager_TypeInfo;
    }
    v249->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v248;
  }
  v250 = (System_String_o *)StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v254 = UnityEngine_PlayerPrefs__GetInt_35647620(v250, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CB7 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v251, v252, v253);
      byte_42E5CB7 = 1;
    }
    v255 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v255 = TerminalPramsManager_TypeInfo;
    }
    v255->static_fields->_BeforeEventActivityPoint_k__BackingField = v254;
  }
  v256 = (System_String_o *)StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v260 = UnityEngine_PlayerPrefs__GetInt_35647620(v256, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CB8 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v257, v258, v259);
      byte_42E5CB8 = 1;
    }
    v261 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v261 = TerminalPramsManager_TypeInfo;
    }
    v261->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v260;
  }
  v262 = (System_String_o *)StringLiteral_13770/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13770/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v263 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(v262, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v267 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v263,
             (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CB9 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v264, v265, v266);
      byte_42E5CB9 = 1;
    }
    v268 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v268 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = &v268->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    *p_BeforeEventSubmarineSaveData_k__BackingField = v267;
    sub_B5D560(p_BeforeEventSubmarineSaveData_k__BackingField);
  }
  v270 = (System_String_o *)StringLiteral_11706/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11706/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v274 = UnityEngine_PlayerPrefs__GetInt_35647620(v270, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CB1 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v271, (_DWORD)v272, v273);
      byte_42E5CB1 = 1;
    }
    v275 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v275 = TerminalPramsManager_TypeInfo;
    }
    v275->static_fields->_LastSelectQuestIndex_k__BackingField = v274;
    if ( !byte_42E4B20 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v271, (_DWORD)v272, v273);
      v275 = TerminalPramsManager_TypeInfo;
      byte_42E4B20 = 1;
    }
    if ( (BYTE3(v275->vtable._0_Equals.methodPtr) & 4) != 0 && !v275->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v275);
      v275 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v275->static_fields->_WarId_k__BackingField;
    if ( !byte_42E5CCC )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v271, (_DWORD)v272, v273);
      v275 = TerminalPramsManager_TypeInfo;
      byte_42E5CCC = 1;
    }
    if ( (BYTE3(v275->vtable._0_Equals.methodPtr) & 4) != 0 && !v275->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v275);
      v275 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v275->static_fields->_LastSelectQuestIndex_k__BackingField,
      v272);
  }
  v277 = (System_String_o *)StringLiteral_11704/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11704/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v278 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(v277, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v279 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v278,
             (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v280 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v280 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = &v280->static_fields->eventConquestInfos;
    *p_eventConquestInfos = v279;
    sub_B5D560(p_eventConquestInfos);
  }
  v282 = (System_String_o *)StringLiteral_11703/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11703/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v283 = UnityEngine_PlayerPrefs__GetInt_35647620(v282, 0LL);
    v284 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v284 = TerminalPramsManager_TypeInfo;
    }
    v284->static_fields->eventConquestInfoDisp = v283 != 0;
  }
  v285 = (System_String_o *)StringLiteral_11705/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11705/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v286 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(v285, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v287 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v286,
             (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v288 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v288 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = &v288->static_fields->eventHarvestGrowthInfo;
    *p_eventHarvestGrowthInfo = v287;
    sub_B5D560(p_eventHarvestGrowthInfo);
  }
  v290 = (System_String_o *)StringLiteral_11694/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11694/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v291 = UnityEngine_PlayerPrefs__GetString_35648228(v290, 0LL);
    v292 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v292 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = &v292->static_fields->lastPlayBgmName;
    *p_lastPlayBgmName = v291;
    sub_B5D560(p_lastPlayBgmName);
  }
  v294 = (System_String_o *)StringLiteral_11695/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11695/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v295 = UnityEngine_PlayerPrefs__GetInt_35647620(v294, 0LL);
    v296 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v296 = TerminalPramsManager_TypeInfo;
    }
    v296->static_fields->lastPlayQuestConsumeAp = v295;
  }
  v297 = (System_String_o *)StringLiteral_13776/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13776/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v301 = UnityEngine_PlayerPrefs__GetInt_35647620(v297, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B7A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v298, v299, v300);
      byte_42E4B7A = 1;
    }
    v302 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v302 = TerminalPramsManager_TypeInfo;
    }
    v302->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v301;
  }
  v303 = (System_String_o *)StringLiteral_13775/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13775/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v304 = UnityEngine_PlayerPrefs__GetInt_35647620(v303, 0LL);
    v305 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v305 = TerminalPramsManager_TypeInfo;
    }
    v305->static_fields->panelEventPoint = v304;
  }
  v306 = (System_String_o *)StringLiteral_11700/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11700/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v310 = UnityEngine_PlayerPrefs__GetString_35648228(v306, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CBD )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v307, v308, v309);
      byte_42E5CBD = 1;
    }
    v311 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v311 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = &v311->static_fields->_PlayedTerminalEffects_k__BackingField;
    *p_PlayedTerminalEffects_k__BackingField = v310;
    sub_B5D560(p_PlayedTerminalEffects_k__BackingField);
  }
  v313 = (System_String_o *)StringLiteral_11697/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11697/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v317 = UnityEngine_PlayerPrefs__GetInt_35647620(v313, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CBE )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v314, v315, v316);
      byte_42E5CBE = 1;
    }
    v318 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v318 = TerminalPramsManager_TypeInfo;
    }
    v318->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v317 != 0;
  }
  v319 = (System_String_o *)StringLiteral_11698/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11698/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v323 = UnityEngine_PlayerPrefs__GetInt_35647620(v319, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CBF )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v320, v321, v322);
      byte_42E5CBF = 1;
    }
    v324 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v324 = TerminalPramsManager_TypeInfo;
    }
    v324->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v323;
  }
  v325 = (System_String_o *)StringLiteral_11699/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11699/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v329 = UnityEngine_PlayerPrefs__GetInt_35647620(v325, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CC0 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v326, v327, v328);
      byte_42E5CC0 = 1;
    }
    v330 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v330 = TerminalPramsManager_TypeInfo;
    }
    v330->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v329 != 0;
  }
  v331 = (System_String_o *)StringLiteral_11708/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11708/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v335 = UnityEngine_PlayerPrefs__GetInt_35647620(v331, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B26 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v332, v333, v334);
      byte_42E4B26 = 1;
    }
    v336 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v336 = TerminalPramsManager_TypeInfo;
    }
    v336->static_fields->_SelectedStoryQuestId_k__BackingField = v335;
  }
  v337 = (System_String_o *)StringLiteral_11691/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11691/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v338 = UnityEngine_PlayerPrefs__GetInt_35647620(v337, 0LL);
    v339 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v339 = TerminalPramsManager_TypeInfo;
    }
    v339->static_fields->ConnectMarkEventId = v338;
  }
  v340 = (System_String_o *)StringLiteral_11690/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11690/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v341 = UnityEngine_PlayerPrefs__GetInt_35647620(v340, 0LL);
    v342 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v342 = TerminalPramsManager_TypeInfo;
    }
    v342->static_fields->ConnectMarkAnimationId = v341;
  }
  v343 = (System_String_o *)StringLiteral_11707/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11707/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v347 = UnityEngine_PlayerPrefs__GetInt_35647620(v343, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B27 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v344, v345, v346);
      byte_42E4B27 = 1;
    }
    v348 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v348 = TerminalPramsManager_TypeInfo;
    }
    v348->static_fields->_SelectedRecollectionWarId_k__BackingField = v347;
  }
  v349 = (System_String_o *)StringLiteral_11689/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11689/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v353 = UnityEngine_PlayerPrefs__GetString_35648228(v349, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CCD )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v350, v351, v352);
      byte_42E5CCD = 1;
    }
    v354 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v354 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = &v354->static_fields->_ClearEventQuestIds_k__BackingField;
    *p_ClearEventQuestIds_k__BackingField = v353;
    sub_B5D560(p_ClearEventQuestIds_k__BackingField);
  }
  v356 = (System_String_o *)StringLiteral_11696/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11696/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v357 = UnityEngine_PlayerPrefs__GetString_35648228(v356, 0LL);
    if ( !System_String__IsNullOrEmpty(v357, 0LL) )
    {
      v358 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
      if ( v358 )
      {
        v359 = v358;
        if ( !v358->max_length )
          goto LABEL_432;
        LOWORD(v358->m_Items[0]) = 44;
        if ( v357 )
        {
          v358 = System_String__Split(v357, (System_Char_array *)v358, 0LL);
          if ( v358 )
          {
            v362 = *(_QWORD *)&v358->max_length;
            v363 = v358;
            if ( !v362 )
            {
              v364 = 0;
LABEL_357:
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_42E501C )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v359, v360, v361);
                byte_42E501C = 1;
              }
              v365 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v365 = TerminalPramsManager_TypeInfo;
              }
              v365->static_fields->_MapModelClearQuestId_k__BackingField = v364;
              if ( (int)v363->max_length < 2 )
              {
                v367 = 0;
              }
              else
              {
                v366 = System_Int32__Parse(v363->m_Items[1], 0LL);
                v365 = TerminalPramsManager_TypeInfo;
                v367 = v366;
              }
              if ( (BYTE3(v365->vtable._0_Equals.methodPtr) & 4) != 0 && !v365->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v365);
              if ( !byte_42E501D )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v359, v360, v361);
                byte_42E501D = 1;
              }
              v368 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v368 = TerminalPramsManager_TypeInfo;
              }
              v368->static_fields->_MapModelClearPhaseCount_k__BackingField = v367;
              goto LABEL_377;
            }
            if ( (_DWORD)v362 )
            {
              v364 = System_Int32__Parse(v358->m_Items[0], 0LL);
              goto LABEL_357;
            }
LABEL_432:
            v401 = sub_B5D6C8(v358);
            sub_B5D668(v401, 0LL);
          }
        }
      }
      sub_B5D69C(v358, v359);
    }
  }
LABEL_377:
  v369 = (System_String_o *)StringLiteral_11692/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11692/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v373 = UnityEngine_PlayerPrefs__GetInt_35647620(v369, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CC2 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v370, v371, v372);
      byte_42E5CC2 = 1;
    }
    v374 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v374 = TerminalPramsManager_TypeInfo;
    }
    v374->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v373 != 0;
  }
  v375 = (System_String_o *)StringLiteral_11701/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11701/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v379 = UnityEngine_PlayerPrefs__GetInt_35647620(v375, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CC9 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v376, v377, v378);
      byte_42E5CC9 = 1;
    }
    v380 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v380 = TerminalPramsManager_TypeInfo;
    }
    v380->static_fields->_PlayerGenderType_k__BackingField = v379;
  }
  v381 = (System_String_o *)StringLiteral_11688/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11688/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v382 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(v381, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v386 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v382,
             (const MethodInfo_1E5E158 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5024 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v383, v384, v385);
      byte_42E5024 = 1;
    }
    v387 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v387 = TerminalPramsManager_TypeInfo;
    }
    v388 = v387->static_fields;
    v388->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v386;
    sub_B5D560(&v388->_CampaignDirectBonus_k__BackingField);
  }
  v389 = (System_String_o *)StringLiteral_11687/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11687/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v393 = UnityEngine_PlayerPrefs__GetInt_35647620(v389, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CAB )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v390, v391, v392);
      byte_42E5CAB = 1;
    }
    v394 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v394 = TerminalPramsManager_TypeInfo;
    }
    v394->static_fields->_BlankEarthSpotId_k__BackingField = v393;
  }
  v395 = (System_String_o *)StringLiteral_11686/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11686/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v399 = UnityEngine_PlayerPrefs__GetInt_35647620(v395, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CCE )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v396, v397, v398);
      byte_42E5CCE = 1;
    }
    v400 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v400 = TerminalPramsManager_TypeInfo;
    }
    v400->static_fields->_BlankEarthRank_k__BackingField = v399;
  }
}


TerminalTransitionInfo_o *__fastcall TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *v10; // x20
  TerminalTransitionInfo_o *v11; // x19
  int32_t Int_35647620; // w0
  int32_t v13; // w20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20

  if ( (byte_42E5C63 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalTransitionInfo_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_13790/*"TerminalTransitionInfoVoiceAssetName"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_13789/*"TerminalTransitionInfoMissionId"*/, v7, v8, v9);
    byte_42E5C63 = 1;
  }
  v10 = (System_String_o *)StringLiteral_13789/*"TerminalTransitionInfoMissionId"*/;
  v11 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13789/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_35647620 = UnityEngine_PlayerPrefs__GetInt_35647620(v10, 0LL);
    if ( Int_35647620 < 1 )
    {
      return 0LL;
    }
    else
    {
      v13 = Int_35647620;
      v11 = (TerminalTransitionInfo_o *)sub_B5D694(TerminalTransitionInfo_TypeInfo);
      TerminalTransitionInfo___ctor(v11, 0LL);
      if ( !v11 )
        sub_B5D69C(v14, v15);
      v11->fields.missionId = v13;
      v16 = (System_String_o *)StringLiteral_13790/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13790/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        v11->fields.voiceAssetName = UnityEngine_PlayerPrefs__GetString_35648228(v16, 0LL);
        sub_B5D560(&v11->fields.voiceAssetName);
      }
    }
  }
  return v11;
}


void __fastcall TerminalPramsManager__MapModelClearQuestInfo_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  TerminalPramsManager_c *v10; // x0
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *v14; // x19
  TerminalPramsManager_c *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5C7C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11696/*"SAVEKEY_MapModelClearQuestInfo"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_707/*","*/, v7, v8, v9);
    byte_42E5C7C = 1;
  }
  MapModelClearQuestId_k__BackingField = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B49 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B49 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v10->static_fields->_MapModelClearQuestId_k__BackingField;
  v14 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_42E4B4A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E4B4A = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v15->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v16 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v17 = System_String__Concat_44580072(v14, (System_String_o *)StringLiteral_707/*","*/, v16, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11696/*"SAVEKEY_MapModelClearQuestInfo"*/, v17, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  TerminalPramsManager_c *v17; // x0
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  TerminalPramsManager_c *v21; // x0

  if ( (byte_42E5C69 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11706/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_13776/*"TerminalLastPlayedFreeQuestSpotId"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_13777/*"TerminalLastPlayedQuestId"*/, v10, v11, v12);
    byte_42E5C69 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CDA )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CDA = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13777/*"TerminalLastPlayedQuestId"*/,
    v13->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_42E5CCC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    byte_42E5CCC = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11706/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v17->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_42E5CDB )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    byte_42E5CDB = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13776/*"TerminalLastPlayedFreeQuestSpotId"*/,
    v21->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlaySystemSE(int32_t seKind, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x0
  __int16 v9; // w8
  int v10; // w8
  TerminalPramsManager_c *v11; // x0

  if ( (byte_42E5C5E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    byte_42E5C5E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CAF )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5CAF = 1;
  }
  v8 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  v9 = WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v9 & 0x400) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      v9 = WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v10 = v9 & 0x400;
  }
  else
  {
    v10 = 0;
  }
  if ( BYTE3(v8[2].klass->vtable[24].methodPtr) )
  {
    if ( v10 && !v8[2].token )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_42E5CB0 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E5CB0 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_IsAutoNoSe_k__BackingField = 0;
  }
  else
  {
    if ( v10 && !v8[2].token )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !TerminalPramsManager__IsAuto(v8) )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0
  struct System_String_o *v15; // x19
  TerminalPramsManager_c *v16; // x0
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v18; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x19
  System_String_o *v20; // x0
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_String_o *v24; // x19
  TerminalPramsManager_c *v25; // x0
  struct System_String_o **v26; // x0
  const MethodInfo *v27; // x0
  int32_t v28; // [xsp+Ch] [xbp-24h] BYREF

  v28 = effectId;
  if ( (byte_42E5C84 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E5C84 = 1;
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
    if ( !byte_42E5CD4 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
      byte_42E5CD4 = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    if ( !v14->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v14);
      v15 = (struct System_String_o *)StringLiteral_1/*""*/;
      if ( !byte_42E5CBD )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
        byte_42E5CBD = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = &v16->static_fields->_PlayedTerminalEffects_k__BackingField;
      *p_PlayedTerminalEffects_k__BackingField = v15;
      sub_B5D560(p_PlayedTerminalEffects_k__BackingField);
      v14 = TerminalPramsManager_TypeInfo;
    }
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    if ( !byte_42E5CD4 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
      byte_42E5CD4 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v18->static_fields->_PlayedTerminalEffects_k__BackingField;
    v20 = System_Int32__ToString((int32_t)&v28, 0LL);
    v24 = System_String__Concat_44580072(
            PlayedTerminalEffects_k__BackingField,
            v20,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            0LL);
    if ( !byte_42E5CBD )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
      byte_42E5CBD = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v26 = &v25->static_fields->_PlayedTerminalEffects_k__BackingField;
    *v26 = v24;
    sub_B5D560(v26);
    TerminalPramsManager__Save_SaveData(v27);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C7E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11701/*"SAVEKEY_PlayerGenderType"*/, v4, v5, v6);
    byte_42E5C7E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD9 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CD9 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11701/*"SAVEKEY_PlayerGenderType"*/,
    v7->static_fields->_PlayerGenderType_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__ReceiveQuestEndResultInfo(
        BattleResultComponent_resultData_array *result,
        bool isWin,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleResultComponent_resultData_array *v5; // x20
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
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  int v147; // w1
  int v148; // w2
  __int64 v149; // x3
  int v150; // w1
  int v151; // w2
  __int64 v152; // x3
  int v153; // w1
  int v154; // w2
  __int64 v155; // x3
  int v156; // w1
  int v157; // w2
  __int64 v158; // x3
  int v159; // w1
  int v160; // w2
  __int64 v161; // x3
  int v162; // w1
  int v163; // w2
  __int64 v164; // x3
  int v165; // w1
  int v166; // w2
  __int64 v167; // x3
  BattleResultComponent_resultData_o *v168; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v170; // x22
  BattleResultComponent_resultData_o *v171; // x19
  int eventEndTitle; // w8
  UserServantCollectionMaster_o *v173; // x20
  __int64 v174; // x26
  __int64 v175; // x27
  BattleResultComponent_resultData_array *v176; // x23
  __int64 v177; // x24
  __int64 v178; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  UserServantCollectionEntity_o *v180; // x24
  _DWORD *v181; // x23
  _DWORD *v182; // x23
  TerminalPramsManager_c *v183; // x0
  struct QuestClearHeroineInfo_o **p_mQuestClearHeroineInfo; // x0
  const MethodInfo *v185; // x2
  __int64 v186; // x3
  __int64 v187; // x8
  BattleResultComponent_resultData_o *v188; // x9
  struct System_String_o *v189; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v191; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v192; // x23
  UserServantEntity_o *v193; // x24
  __int64 v194; // x23
  System_String_Fields fields; // x25
  void *monitor; // x26
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  __int64 v199; // x27
  __int64 v200; // x28
  int64_t v201; // x26
  int v202; // w8
  UserServantCollectionEntity_o *v203; // x26
  int v204; // w9
  UserServantCollectionEntity_o *v205; // x25
  BattleResultComponent_resultData_array *v206; // x21
  int32_t SvtId; // w0
  __int64 v208; // x21
  __int64 v209; // x28
  int32_t v210; // w27
  QuestClearHeroineInfo_o *v211; // x22
  bool v212; // w9
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v214; // x21
  __int64 v215; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v216; // x23
  int32_t lastQuestId; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v219; // x0
  struct QuestClearHeroineInfo_o **v220; // x0
  BattleResultComponent_resultData_o *v221; // x8
  struct System_String_o *v222; // x9
  UserQuestEntity_o *v223; // x28
  int32_t questId; // w19
  TerminalPramsManager_c *v225; // x0
  int v226; // w1
  int v227; // w2
  __int64 v228; // x3
  int32_t QuestPhase; // w23
  TerminalPramsManager_c *v230; // x0
  int32_t v231; // w23
  UserQuestMaster_o *v232; // x24
  UserQuestEntity_o *v233; // x0
  UserQuestEntity_o *v234; // x25
  int32_t v235; // w24
  int v236; // w1
  int v237; // w2
  __int64 v238; // x3
  bool v239; // w19
  TerminalPramsManager_c *v240; // x0
  const MethodInfo *v241; // x2
  TerminalPramsManager_c *v242; // x0
  System_String_o *ValidMessage; // x0
  TerminalPramsManager_c *v244; // x8
  TerminalPramsManager_c *v245; // x0
  const MethodInfo *v246; // x0
  TerminalPramsManager_c *v247; // x8
  int32_t v248; // w24
  const MethodInfo *v249; // x1
  int v250; // w2
  __int64 v251; // x3
  WarEntity_o *v252; // x23
  TerminalPramsManager_c *v253; // x0
  int v254; // w2
  __int64 v255; // x3
  TerminalPramsManager_c *v256; // x0
  char v257; // w8
  const MethodInfo *v258; // x1
  int v259; // w2
  __int64 v260; // x3
  bool HasFlag; // w0
  int v262; // w2
  __int64 v263; // x3
  TerminalPramsManager_c *v264; // x9
  struct BattleDropItem_array **p_mResultEventPanelRewardInfos; // x0
  BattleResultComponent_resultData_o *v266; // x23
  TerminalPramsManager_c *v267; // x0
  struct BattleDropItem_array **v268; // x0
  TerminalPramsManager_c *v269; // x0
  struct EventConquestInfo_array **p_eventConquestInfos; // x0
  int v271; // w2
  __int64 v272; // x3
  struct TerminalPramsManager_StaticFields **p_static_fields; // x8
  __int64 v274; // x9
  BattleResultComponent_resultData_o *v275; // x23
  struct EventConquestInfo_array **v276; // x0
  int32_t v277; // w23
  WarEntity_o *v278; // x0
  int v279; // w1
  int v280; // w2
  __int64 v281; // x3
  int32_t id; // w19
  EventRaidMaster_o *v283; // x23
  int v284; // w2
  __int64 v285; // x3
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v287; // x24
  int v288; // w8
  Il2CppClass **v289; // x8
  Il2CppClass *v290; // x25
  int v291; // w2
  __int64 v292; // x3
  int32_t RaidGroupDeadQuestId; // w26
  signed int v294; // w9
  BattleResultComponent_resultData_array *v295; // x26
  int v296; // w8
  int v297; // w22
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t name_high; // w22
  signed int v300; // w9
  BattleResultComponent_resultData_array *v301; // x24
  int v302; // w8
  BattleResultComponent_resultData_o *v303; // x19
  int32_t RaidDeadQuestId; // w25
  struct TerminalPramsManager_StaticFields *v305; // x8
  int32_t v306; // w19
  TerminalPramsManager_c *v307; // x0
  TerminalPramsManager_c *v308; // x8
  bool v309; // w19
  TerminalPramsManager_c *v310; // x0
  int32_t v311; // w19
  int32_t eventId; // w21
  int v313; // w2
  __int64 v314; // x3
  _BYTE *v315; // x21
  _BYTE *v316; // x22
  BattleResultComponent_resultData_o *v317; // x8
  int v318; // w9
  int v319; // w11
  __int64 v320; // x28
  TerminalPramsManager_c *v321; // x0
  int32_t bounds_high; // w23
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v324; // x0
  TerminalPramsManager_c *v325; // x0
  EventSaveData_o *v326; // x23
  int v327; // w1
  int v328; // w2
  __int64 v329; // x3
  TerminalPramsManager_c *v330; // x0
  struct EventSaveData_o **p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct BattleResultAddRewardBonus_o *rewardBonus; // x8
  signed int v333; // w8
  System_String_o **v334; // x9
  System_String_o *v335; // x25
  System_String_o **v336; // x9
  System_String_o *v337; // x23
  __int64 *v338; // x8
  int32_t v339; // w21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v340; // x26
  TerminalPramsManager___c_c *v341; // x8
  struct TerminalPramsManager___c_StaticFields *v342; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__626_0; // x24
  Il2CppObject *v344; // x21
  struct TerminalPramsManager___c_StaticFields *v345; // x0
  int v346; // w1
  int v347; // w2
  __int64 v348; // x3
  TerminalPramsManager_c *v349; // x0
  TerminalPramsManager_c *v350; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x26
  System_String_o *v352; // x21
  TerminalPramsManager_c *v353; // x0
  int32_t v354; // w23
  int32_t PhaseCnt_k__BackingField; // w24
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v357; // x0
  UserQuestEntity_o *v358; // x22
  int v359; // w2
  __int64 v360; // x3
  QuestMaster_o *v361; // x23
  int v362; // w21
  TerminalPramsManager_c *v363; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeRelease_k__BackingField; // x0
  int v365; // w2
  __int64 v366; // x3
  BattleResultComponent_resultData_o *v367; // x8
  BattleResultComponent_resultData_o *v368; // x23
  TerminalPramsManager_c *v369; // x0
  struct CostumeReleaseAnnounce_array **v370; // x0
  TerminalPramsManager_c *v371; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeGet_k__BackingField; // x0
  int v373; // w2
  __int64 v374; // x3
  BattleResultComponent_resultData_o *v375; // x23
  TerminalPramsManager_c *v376; // x0
  struct CostumeReleaseAnnounce_array **v377; // x0
  TerminalPramsManager_c *v378; // x0
  struct EventPointWinReward_o **p_eventPointWinReward_k__BackingField; // x0
  int v380; // w2
  __int64 v381; // x3
  int32_t v382; // w23
  QuestGroupMaster_o *v383; // x24
  int32_t GroupId; // w0
  TerminalPramsManager_c *v385; // x8
  int32_t v386; // w25
  int v387; // w24
  QuestReleaseMaster_o *v388; // x25
  EventPointEntity_o *v389; // x24
  int32_t v390; // w23
  struct TerminalPramsManager_StaticFields *v391; // x8
  BattleResultComponent_resultData_o *v392; // x8
  struct System_String_o *v393; // x9
  struct System_String_o *v394; // x23
  TerminalPramsManager_c *v395; // x0
  struct EventPointWinReward_o **v396; // x0
  int32_t v397; // w19
  TerminalPramsManager_c *v398; // x0
  TerminalPramsManager_c *v399; // x0
  struct EventRaceBoostInfo_o **p_eventRaceBoost_k__BackingField; // x0
  int v401; // w2
  __int64 v402; // x3
  __int64 v403; // x8
  BattleResultComponent_resultData_o *v404; // x22
  TerminalPramsManager_c *v405; // x0
  struct EventRaceBoostInfo_o **v406; // x0
  int64_t followerId; // x19
  BattleResultComponent_resultData_o *v408; // x9
  struct System_String_o *v409; // x10
  struct EventTowerReward_o *v410; // x22
  TerminalPramsManager_c *v411; // x0
  struct EventTowerReward_o **p_eventTowerReward_k__BackingField; // x0
  int v413; // w2
  __int64 v414; // x3
  BattleResultComponent_resultData_o *v415; // x22
  TerminalPramsManager_c *v416; // x0
  struct QuestRewardInfo_array **p_resultEventTowerRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v418; // x22
  TerminalPramsManager_c *v419; // x0
  struct QuestRewardInfo_array **p_resultBoostItemRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v421; // x22
  TerminalPramsManager_c *v422; // x0
  struct QuestRewardInfo_array **p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v424; // x22
  TerminalPramsManager_c *v425; // x0
  struct WarClearReward_array **p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v427; // x0
  struct TerminalPramsManager_StaticFields *v428; // x0
  int v429; // w1
  int v430; // w2
  __int64 v431; // x3
  TerminalPramsManager_c *v432; // x0
  struct TerminalPramsManager_StaticFields *v433; // x0
  int v434; // w2
  __int64 v435; // x3
  QuestTree_o *v436; // x22
  int32_t WarID_ByQuestID; // w21
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v439; // w22
  int v440; // w2
  __int64 v441; // x3
  __int64 v442; // x8
  BattleResultComponent_resultData_o *v443; // x21
  TerminalPramsManager_c *v444; // x0
  struct TerminalPramsManager_StaticFields *v445; // x0
  struct UserSuperBossEntity_array **p_oldPersonalBoss_k__BackingField; // x0
  BattleResultComponent_resultData_o *v447; // x21
  TerminalPramsManager_c *v448; // x0
  struct TerminalPramsManager_StaticFields *v449; // x0
  struct CostumeReleaseAnnounce_array *costumeGetAnnounce; // x8
  bool v451; // w19
  BalanceConfig_c *v452; // x8
  int32_t battleId; // w19
  TerminalPramsManager_c *v454; // x0
  int v455; // w1
  int v456; // w2
  __int64 v457; // x3
  TerminalPramsManager_c *v458; // x0
  BalanceConfig_c *v459; // x8
  int32_t v460; // w21
  TerminalPramsManager_c *v461; // x0
  BalanceConfig_c *v462; // x8
  int32_t v463; // w23
  TerminalPramsManager_c *v464; // x0
  BalanceConfig_c *v465; // x8
  int32_t v466; // w21
  UserSuperBossMaster_o *v467; // x21
  BattleResultComponent_resultData_array *v468; // x23
  UserSuperBossEntity_o *v469; // x22
  BattleResultComponent_resultData_array *v470; // x21
  int v471; // w1
  int v472; // w2
  __int64 v473; // x3
  TerminalPramsManager_c *v474; // x0
  struct TerminalPramsManager_StaticFields *v475; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v477; // x21
  int v478; // w2
  __int64 v479; // x3
  QuestMaster_o *v480; // x22
  int32_t ScriptQuestId; // w22
  int v482; // w1
  int v483; // w2
  __int64 v484; // x3
  WebViewManager_o *Instance; // x23
  TerminalPramsManager_c *v486; // x0
  int32_t v487; // w28
  int32_t winResult; // w24
  int v489; // w1
  int v490; // w2
  __int64 v491; // x3
  WebViewManager_o *v492; // x23
  TerminalPramsManager_c *v493; // x0
  int32_t v494; // w24
  int32_t v495; // w21
  TerminalPramsManager_c *v496; // x0
  struct System_String_o **p_lastPlayBgmName; // x0
  const MethodInfo *v498; // x0
  int v499; // w2
  __int64 v500; // x3
  QuestPhaseMaster_o *v501; // x21
  int32_t v502; // w22
  int v503; // w2
  __int64 v504; // x3
  TerminalPramsManager_c *v505; // x0
  int32_t v506; // w22
  TerminalPramsManager_c *v507; // x0
  int32_t v508; // w23
  int v509; // w1
  int v510; // w2
  __int64 v511; // x3
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v513; // x0
  struct TerminalPramsManager_StaticFields *v514; // x0
  TerminalPramsManager_c *v515; // x8
  const MethodInfo *v516; // x0
  int v517; // w2
  __int64 v518; // x3
  int32_t v519; // w19
  TerminalPramsManager_c *v520; // x0
  struct EventHarvestGrowthInfo_o **p_eventHarvestGrowthInfo; // x0
  int v522; // w1
  int v523; // w2
  __int64 v524; // x3
  TerminalPramsManager_c *v525; // x0
  QuestPhaseEntity_o *v526; // x22
  int32_t ScriptIntParam; // w24
  int32_t v528; // w0
  int32_t v529; // w25
  EventHarvestGrowthInfo_o *v530; // x23
  int32_t phase; // w8
  TerminalPramsManager_c *v532; // x0
  struct EventHarvestGrowthInfo_o **v533; // x0
  int v534; // w2
  __int64 v535; // x3
  QuestMaster_o *v536; // x22
  QuestEntity_o *QuestEntity; // x0
  int v538; // w2
  __int64 v539; // x3
  QuestEntity_o *v540; // x22
  TerminalPramsManager_c *v541; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v544; // x21
  TerminalPramsManager_c *v545; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v547; // x0
  int v548; // w1
  int v549; // w2
  __int64 v550; // x3
  System_String_o *v551; // x21
  TerminalPramsManager_c *v552; // x0
  System_String_o *v553; // x0
  int v554; // w1
  int v555; // w2
  __int64 v556; // x3
  System_String_o *v557; // x21
  TerminalPramsManager_c *v558; // x0
  struct System_String_o **p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v560; // x21
  TerminalPramsManager_c *v561; // x0
  struct LimitImageAnnounce_array **p_limitImageAnnounces_k__BackingField; // x0
  int v563; // w1
  int v564; // w2
  __int64 v565; // x3
  System_String_array *v566; // x21
  TerminalPramsManager_c *v567; // x0
  _BYTE *v568; // x24
  BattleResultComponent_resultData_array *v569; // x22
  __int64 v570; // x1
  int v571; // w1
  int v572; // w2
  __int64 v573; // x3
  TerminalPramsManager_c *v574; // x0
  BattleResultComponent_resultData_array *v575; // x22
  __int64 v576; // x1
  int v577; // w1
  int v578; // w2
  __int64 v579; // x3
  TerminalPramsManager_c *v580; // x0
  BattleResultComponent_resultData_array *v581; // x22
  __int64 v582; // x1
  int v583; // w1
  int v584; // w2
  __int64 v585; // x3
  TerminalPramsManager_c *v586; // x0
  BattleResultComponent_resultData_array *v587; // x22
  System_String_o *v588; // x0
  const MethodInfo *v589; // x1
  const MethodInfo *v590; // x0
  const MethodInfo *v591; // x0
  const MethodInfo *v592; // x0
  const MethodInfo *v593; // x0
  const MethodInfo *v594; // x0
  int v595; // w1
  int v596; // w2
  __int64 v597; // x3
  TerminalPramsManager_c *v598; // x0
  TerminalPramsManager_c *v599; // x0
  __int64 v600; // x0
  __int64 v601; // x0
  __int64 v602; // x0
  __int64 v603; // x0
  System_String_o *isLastGoalPlayed; // [xsp+0h] [xbp-110h]
  bool v605; // [xsp+Ch] [xbp-104h]
  UserQuestEntity_o *v606; // [xsp+10h] [xbp-100h]
  BattleResultComponent_resultData_array *resulta; // [xsp+18h] [xbp-F8h]
  il2cpp_array_size_t *p_max_length; // [xsp+20h] [xbp-F0h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v610; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v611; // [xsp+50h] [xbp-C0h]
  char v612[4]; // [xsp+7Ch] [xbp-94h] BYREF
  UserSuperBossEntity_o *v613; // [xsp+80h] [xbp-90h] BYREF
  WarEntity_o *v614; // [xsp+88h] [xbp-88h] BYREF
  int QuestId_k__BackingField; // [xsp+94h] [xbp-7Ch] BYREF
  WarEntity_o *v616; // [xsp+98h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  int v618; // [xsp+ACh] [xbp-64h] BYREF
  QuestPhaseEntity_o *v619; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v620; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v621; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v622; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v623; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v624; // 0:x0.16

  v5 = result;
  if ( (byte_42E5C92 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, isWin, (_DWORD)method, v3);
    sub_B5D5C4(&CondType_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventRaidMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMessageMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v33, v34, v35);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v36, v37, v38);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v39, v40, v41);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v42, v43, v44);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, v45, v46, v47);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v48, v49, v50);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v51, v52, v53);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSuperBossMaster___, v54, v55, v56);
    sub_B5D5C4(&DataManager_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v60, v61, v62);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v63, v64, v65);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v66, v67, v68);
    sub_B5D5C4(&EventHarvestGrowthInfo_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&EventSaveData_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v75, v76, v77);
    sub_B5D5C4(&NetworkManager_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v84, v85, v86);
    sub_B5D5C4(&Method_System_Predicate_QuestReleaseEntity___ctor__, v87, v88, v89);
    sub_B5D5C4(&System_Predicate_QuestReleaseEntity__TypeInfo, v90, v91, v92);
    sub_B5D5C4(&QuestClearHeroineInfo_TypeInfo, v93, v94, v95);
    sub_B5D5C4(&ScriptManager_TypeInfo, v96, v97, v98);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v99, v100, v101);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v102, v103, v104);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v105, v106, v107);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v108, v109, v110);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v111, v112, v113);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v114, v115, v116);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v117, v118, v119);
    sub_B5D5C4(&string___TypeInfo, v120, v121, v122);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v123, v124, v125);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v126, v127, v128);
    sub_B5D5C4(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__626_0__, v129, v130, v131);
    sub_B5D5C4(&TerminalPramsManager___c_TypeInfo, v132, v133, v134);
    sub_B5D5C4(&UserServantCollectionEntity___TypeInfo, v135, v136, v137);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v138, v139, v140);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v141, v142, v143);
    sub_B5D5C4(&UserSuperBossEntity___TypeInfo, v144, v145, v146);
    sub_B5D5C4(&StringLiteral_19350/*"harvestGrowthAfterQuestId"*/, v147, v148, v149);
    sub_B5D5C4(&StringLiteral_16485/*"afterActionBk"*/, v150, v151, v152);
    sub_B5D5C4(&StringLiteral_707/*","*/, v153, v154, v155);
    sub_B5D5C4(&StringLiteral_19351/*"harvestGrowthBeforeQuestId"*/, v156, v157, v158);
    sub_B5D5C4(&StringLiteral_1/*""*/, v159, v160, v161);
    sub_B5D5C4(&StringLiteral_6663/*"False"*/, v162, v163, v164);
    result = (BattleResultComponent_resultData_array *)sub_B5D5C4(&StringLiteral_973/*"0"*/, v165, v166, v167);
    byte_42E5C92 = 1;
  }
  v619 = 0LL;
  v618 = 0;
  v616 = 0LL;
  entity = 0LL;
  QuestId_k__BackingField = 0;
  v613 = 0LL;
  v614 = 0LL;
  v612[0] = 0;
  if ( !v5 )
    goto LABEL_1318;
  p_max_length = &v5->max_length;
  if ( !v5->max_length )
    goto LABEL_1317;
  v168 = v5->m_Items[0];
  m_Items = (BattleResultComponent_resultData_array **)v5->m_Items;
  if ( !v168 )
    goto LABEL_1318;
  oldUserSvtCollection = v168->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1318;
  resulta = v5;
  v170 = (_DWORD *)sub_B5D5DC(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1318;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v171 = (*m_Items)->m_Items[11];
  v605 = isWin;
  v618 = 0;
  if ( !v171 )
    goto LABEL_1318;
  eventEndTitle = (int)v171->fields.eventEndTitle;
  if ( eventEndTitle >= 1 )
  {
    v173 = (UserServantCollectionMaster_o *)result;
    v174 = 0LL;
    while ( (unsigned int)v174 < eventEndTitle )
    {
      v175 = *((_QWORD *)&v171->fields.eventEndMessage + v174);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
      if ( !v175 )
        goto LABEL_1318;
      v176 = result;
      v178 = *(_QWORD *)(v175 + 24);
      v177 = *(_QWORD *)(v175 + 32);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v620.fields.currentCryptoKey = v178;
      *(_QWORD *)&v620.fields.fakeValue = v177;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                           v620,
                                                           0LL);
      if ( !v173 )
        goto LABEL_1318;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v173, (int64_t)v176, (int32_t)result, 0LL);
      v180 = (UserServantCollectionEntity_o *)sub_B5D694(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_21797428(v180, EntityDefinitely, 0LL);
      if ( !v170 )
        goto LABEL_1318;
      if ( v180 )
      {
        result = (BattleResultComponent_resultData_array *)sub_B5D684(v180, *(_QWORD *)(*(_QWORD *)v170 + 64LL));
        if ( !result )
        {
          v601 = sub_B5D6BC();
          sub_B5D668(v601, 0LL);
        }
      }
      if ( (unsigned int)v174 >= v170[6] )
        break;
      v181 = &v170[2 * (int)v174];
      *((_QWORD *)v181 + 4) = v180;
      v182 = v181 + 8;
      sub_B5D560(v182);
      if ( (unsigned int)v174 >= v170[6] )
        break;
      if ( !*(_QWORD *)v182 )
        goto LABEL_1318;
      *(_OWORD *)(*(_QWORD *)v182 + 84LL) = *(_OWORD *)(v175 + 84);
      if ( (unsigned int)v174 >= v170[6] )
        break;
      if ( !*(_QWORD *)v182 )
        goto LABEL_1318;
      *(_OWORD *)(*(_QWORD *)v182 + 100LL) = *(_OWORD *)(v175 + 100);
      if ( (unsigned int)v174 >= v170[6] )
        break;
      if ( !*(_QWORD *)v182 )
        goto LABEL_1318;
      ++v174;
      *(_DWORD *)(*(_QWORD *)v182 + 116LL) = *(_DWORD *)(v175 + 116);
      v618 = v174;
      eventEndTitle = (int)v171->fields.eventEndTitle;
      if ( (int)v174 >= eventEndTitle )
        goto LABEL_33;
    }
LABEL_1317:
    v600 = sub_B5D6C8(result);
    sub_B5D668(v600, 0LL);
  }
LABEL_33:
  v183 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v183 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = &v183->static_fields->mQuestClearHeroineInfo;
  *p_mQuestClearHeroineInfo = 0LL;
  sub_B5D560(p_mQuestClearHeroineInfo);
  v187 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v188 = (*m_Items)->m_Items[5];
  if ( v188 )
  {
    v189 = v188->fields.eventEndTitle;
    if ( v189 )
    {
      if ( !(_DWORD)v189 )
        goto LABEL_1317;
      eventEndMessage = v188->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1318;
      v191 = *(_OWORD *)&eventEndMessage[1].monitor;
      v192 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result;
      *(_OWORD *)&v611.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields.m_stringLength;
      *(_OWORD *)&v611.fields.fakeValue = v191;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v610 = v611;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                           &v610,
                                                           0LL);
      if ( !v192 )
        goto LABEL_1318;
      v193 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               v192,
               (int64_t)result,
               (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v194 = sub_B5D694(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21827084((UserServantEntity_o *)v194, v193, 0LL);
      if ( !v194 )
        goto LABEL_1318;
      *(_OWORD *)(v194 + 96) = *(_OWORD *)&eventEndMessage[4].klass;
      *(_DWORD *)(v194 + 256) = eventEndMessage[10].fields.m_stringLength;
      *(_DWORD *)(v194 + 292) = HIDWORD(eventEndMessage[12].klass);
      *(_DWORD *)(v194 + 296) = eventEndMessage[12].monitor;
      monitor = eventEndMessage[5].monitor;
      fields = eventEndMessage[5].fields;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v621.fields.currentCryptoKey = monitor;
      *(System_String_Fields *)&v621.fields.fakeValue = fields;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v621, 0LL) >= 1 )
        *(_OWORD *)(v194 + 128) = *(_OWORD *)&eventEndMessage[5].monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)result,
                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v200 = *(_QWORD *)(v194 + 80);
      v199 = *(_QWORD *)(v194 + 88);
      v201 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v622.fields.currentCryptoKey = v200;
      *(_QWORD *)&v622.fields.fakeValue = v199;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                           v622,
                                                           0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v201,
                                                           (int32_t)result,
                                                           0LL);
      v618 = 0;
      if ( !v170 )
        goto LABEL_1318;
      v202 = v170[6];
      v203 = (UserServantCollectionEntity_o *)result;
      if ( v202 >= 1 )
      {
        v204 = 0;
        while ( v204 < (unsigned int)v202 )
        {
          v205 = *(UserServantCollectionEntity_o **)&v170[2 * v204 + 8];
          if ( !v205 )
            goto LABEL_1318;
          v206 = (BattleResultComponent_resultData_array *)v205->fields.userId;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
          if ( v206 == result )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v205, 0LL);
            v208 = *(_QWORD *)(v194 + 80);
            v209 = *(_QWORD *)(v194 + 88);
            v210 = SvtId;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v623.fields.currentCryptoKey = v208;
            *(_QWORD *)&v623.fields.fakeValue = v209;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                 v623,
                                                                 0LL);
            if ( v210 == (_DWORD)result )
              goto LABEL_76;
          }
          v204 = v618 + 1;
          v618 = v204;
          v202 = v170[6];
          if ( v204 >= v202 )
            goto LABEL_75;
        }
        goto LABEL_1317;
      }
LABEL_75:
      v205 = 0LL;
LABEL_76:
      v211 = (QuestClearHeroineInfo_o *)sub_B5D694(QuestClearHeroineInfo_TypeInfo);
      QuestClearHeroineInfo___ctor(v211, 0LL);
      if ( !v211 )
        goto LABEL_1318;
      v211->fields.oldUsrSvtData = (struct UserServantEntity_o *)v194;
      sub_B5D560(&v211->fields);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v194,
                                                           0LL);
      if ( !v193 )
        goto LABEL_1318;
      v212 = (_DWORD)result != UserServantEntity__getLimitCount(v193, 0LL);
      v211->fields.isChangeTreasureDvc = 0;
      v211->fields.treasureDvcId = 0;
      v211->fields.treasureDvcLv = 0;
      v211->fields.isFriendShipExceed = 0;
      v211->fields.oldFriendShipRank = -1;
      v211->fields.isChangeLimitcnt = v212;
      v211->fields.isExceed = *(_DWORD *)(v194 + 296) != v193->fields.exceedCount;
      if ( v205 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v205, 0LL);
        if ( !v203 )
          goto LABEL_1318;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v203, 0LL) )
          v211->fields.oldFriendShipRank = UserServantCollectionEntity__getFriendShipRank(v205, 0LL);
        if ( v205->fields.friendshipExceedCount != v203->fields.friendshipExceedCount )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
          v214 = *(_QWORD *)(v194 + 80);
          v215 = *(_QWORD *)(v194 + 88);
          v216 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v624.fields.currentCryptoKey = v214;
          *(_QWORD *)&v624.fields.fakeValue = v215;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                               v624,
                                                               0LL);
          if ( !v216 )
            goto LABEL_1318;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                               v216,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1318;
            lastQuestId = entity->fields.lastQuestId;
            friendshipExceedCount = v205->fields.friendshipExceedCount;
            v211->fields.isFriendShipExceed = 1;
            v211->fields.oldFriendShipRank = friendshipExceedCount + lastQuestId;
          }
        }
      }
      v219 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v219 = TerminalPramsManager_TypeInfo;
      }
      v220 = &v219->static_fields->mQuestClearHeroineInfo;
      *v220 = v211;
      sub_B5D560(v220);
      v187 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v187 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v221 = (*m_Items)->m_Items[9];
  if ( v221 && (v222 = v221->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v222 )
      goto LABEL_1317;
    v223 = (UserQuestEntity_o *)v221->fields.eventEndMessage;
  }
  else
  {
    v223 = 0LL;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B4F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, (_DWORD)v185, v186);
    byte_42E4B4F = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = v223 != 0LL;
  if ( !byte_42E4B4E )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, (_DWORD)v185, v186);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_42E4B4E = 1;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE4(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_42E5CC8 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, (_DWORD)v185, v186);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_42E5CC8 = 1;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_42E4B35 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, (_DWORD)v185, v186);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_42E4B35 = 1;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE5(result->m_Items[19]->fields.oldUserGame) )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, (_DWORD)v185, v186);
      byte_42E4B33 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.battleId )
    {
      if ( !v223 )
        goto LABEL_1318;
    }
    else
    {
      if ( !v223 )
        goto LABEL_1318;
      questId = v223->fields.questId;
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_42E4B24 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, (_DWORD)v185, v186);
        byte_42E4B24 = 1;
      }
      v225 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v225 = TerminalPramsManager_TypeInfo;
      }
      v225->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v223, 0LL);
      if ( !byte_42E4B25 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v226, v227, v228);
        byte_42E4B25 = 1;
      }
      v230 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v230 = TerminalPramsManager_TypeInfo;
      }
      v230->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v231 = v223->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    v232 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)result,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
    if ( !v232 )
      goto LABEL_1318;
    v233 = UserQuestMaster__GetEntity(v232, (int64_t)result, v231, 0LL);
    if ( v233 )
    {
      v234 = v233;
      v235 = UserQuestEntity__getQuestPhase(v233, 0LL);
      if ( UserQuestEntity__getClearNum(v223, 0LL) || UserQuestEntity__getClearNum(v234, 0LL) != 1 )
        v239 = UserQuestEntity__IsResetStatus(v223, 0LL) && !UserQuestEntity__IsResetStatus(v234, 0LL);
      else
        v239 = 1;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B4E )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v236, v237, v238);
        byte_42E4B4E = 1;
      }
      v240 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_IsQuestClear_k__BackingField = v239;
      if ( !byte_42E5CCA )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v236, v237, v238);
        v240 = TerminalPramsManager_TypeInfo;
        byte_42E5CCA = 1;
      }
      if ( (BYTE3(v240->vtable._0_Equals.methodPtr) & 4) != 0 && !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_EventUIEffectClearQuestId_k__BackingField = v231;
      if ( !byte_42E501C )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v236, v237, v238);
        v240 = TerminalPramsManager_TypeInfo;
        byte_42E501C = 1;
      }
      if ( (BYTE3(v240->vtable._0_Equals.methodPtr) & 4) != 0 && !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_MapModelClearQuestId_k__BackingField = v231;
      if ( !byte_42E501D )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v236, v237, v238);
        v240 = TerminalPramsManager_TypeInfo;
        byte_42E501D = 1;
      }
      if ( (BYTE3(v240->vtable._0_Equals.methodPtr) & 4) != 0 && !v240->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v240);
        v240 = TerminalPramsManager_TypeInfo;
      }
      v240->static_fields->_MapModelClearPhaseCount_k__BackingField = v235;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v240);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v231, v235, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v231, v235, v241);
    }
    else
    {
      v235 = 0;
    }
    v242 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v242);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1318;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v231, v235, 3, 0LL);
    v244 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E57FB )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, (_DWORD)v185, v186);
        byte_42E57FB = 1;
      }
      v244 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v244 = TerminalPramsManager_TypeInfo;
      }
      v244->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( (BYTE3(v244->vtable._0_Equals.methodPtr) & 4) != 0 && !v244->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v244);
    if ( !byte_42E5CDF )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, (_DWORD)v185, v186);
      byte_42E5CDF = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( result->m_Items[19]->fields.phaseClearQp >= 1 )
    {
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_42E5CDF )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, (_DWORD)v185, v186);
        byte_42E5CDF = 1;
      }
      v245 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v245 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v245->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v185);
      TerminalPramsManager__SaveQuestReleasedFocusState(v246);
      if ( !byte_42E4B69 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, (_DWORD)v185, v186);
        byte_42E4B69 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      result->m_Items[19]->fields.phaseClearQp = 0;
    }
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_42E4B45 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B5D5C4(
                                                         &TerminalPramsManager_TypeInfo,
                                                         isWin,
                                                         (_DWORD)v185,
                                                         v186);
    byte_42E4B45 = 1;
  }
  v247 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v247 = TerminalPramsManager_TypeInfo;
  }
  if ( v247->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v223 )
      goto LABEL_1318;
    v248 = v223->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1318;
    v252 = WarMaster__getByLastQuestId((WarMaster_o *)result, v248, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B3B )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v249, v250, v251);
      byte_42E4B3B = 1;
    }
    v253 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v253 = TerminalPramsManager_TypeInfo;
    }
    v253->static_fields->_IsWarClear_k__BackingField = v252 != 0LL;
    if ( TerminalPramsManager__CheckIsOrdealCallWarClear(v252, v249) )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B6D )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v254, v255);
        byte_42E4B6D = 1;
      }
      v256 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v256 = TerminalPramsManager_TypeInfo;
      }
      v257 = 1;
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B6D )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v254, v255);
        byte_42E4B6D = 1;
      }
      v256 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v256 = TerminalPramsManager_TypeInfo;
      }
      v257 = 0;
    }
    v256->static_fields->_IsOrdealCallWarClear_k__BackingField = v257;
    if ( (BYTE3(v256->vtable._0_Equals.methodPtr) & 4) != 0 && !v256->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v256);
    if ( !byte_42E4B39 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v254, v255);
      byte_42E4B39 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserEvent) )
    {
      if ( !v252 )
        goto LABEL_1318;
      if ( !WarEntity__IsEvent(v252, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1318;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v252->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v248, -1, 0LL, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v248, v258);
    if ( !byte_42E4B39 )
    {
      result = (BattleResultComponent_resultData_array *)sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v259, v260);
      byte_42E4B39 = 1;
    }
    v247 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v247 = TerminalPramsManager_TypeInfo;
    }
    if ( v247->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v252 )
        goto LABEL_1318;
      HasFlag = WarEntity__HasFlag(v252, 128, 0LL);
      v247 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B5E )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v262, v263);
          byte_42E4B5E = 1;
        }
        v247 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v247 = TerminalPramsManager_TypeInfo;
        }
        v247->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_42E5CC8 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v262, v263);
          v247 = TerminalPramsManager_TypeInfo;
          byte_42E5CC8 = 1;
        }
        if ( (BYTE3(v247->vtable._0_Equals.methodPtr) & 4) != 0 && !v247->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v247);
          v247 = TerminalPramsManager_TypeInfo;
        }
        v247->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( (BYTE3(v247->vtable._0_Equals.methodPtr) & 4) != 0 && !v247->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v247);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !resulta->max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v264 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  p_mResultEventPanelRewardInfos = &v264->static_fields->mResultEventPanelRewardInfos;
  *p_mResultEventPanelRewardInfos = 0LL;
  sub_B5D560(p_mResultEventPanelRewardInfos);
  if ( !*p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v266 = (*m_Items)->m_Items[19];
  if ( v266 && v266->fields.eventEndTitle )
  {
    v267 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v267 = TerminalPramsManager_TypeInfo;
    }
    v268 = &v267->static_fields->mResultEventPanelRewardInfos;
    *v268 = (struct BattleDropItem_array *)v266;
    sub_B5D560(v268);
  }
  v269 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v269 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = &v269->static_fields->eventConquestInfos;
  *p_eventConquestInfos = 0LL;
  sub_B5D560(p_eventConquestInfos);
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  v274 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v275 = (*m_Items)->m_Items[43];
  if ( v275 && v275->fields.eventEndTitle )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
    }
    v276 = &(*p_static_fields)->eventConquestInfos;
    *v276 = (struct EventConquestInfo_array *)v275;
    sub_B5D560(v276);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 1;
    v274 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v274 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  if ( LOBYTE((*m_Items)->m_Items[46]) )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_42E5CBE )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v271, v272);
      byte_42E5CBE = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].fields.battleId) = 1;
    if ( !byte_42E4B45 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v271, v272);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_42E4B45 = 1;
    }
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE4(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v223 )
        goto LABEL_1318;
      v277 = v223->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1318;
      v278 = WarMaster__getByLastQuestId((WarMaster_o *)result, v277, 0LL);
      if ( v278 )
      {
        id = v278->fields.id;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E5CBF )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v279, v280, v281);
          byte_42E5CBF = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        result->m_Items[19][1].fields.eventId = id;
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
  LODWORD(result->m_Items[19]->fields.eventTowerReward) = -1;
  HIDWORD(result->m_Items[19]->fields.eventTowerReward) = -1;
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1318;
  v283 = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1318;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1317;
  if ( !*m_Items || (v606 = v223, !result) )
LABEL_1318:
    sub_B5D69C(result, isWin);
  result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                                       &v616,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1317;
    if ( !*m_Items || !v283 )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                         v283,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    if ( (int)result >= 1 )
    {
      if ( !*p_max_length )
        goto LABEL_1317;
      if ( !*m_Items )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                           v283,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v618 = 0;
      if ( !result )
        goto LABEL_1318;
      max_length = result->max_length;
      v287 = result;
      if ( max_length < 1 )
        goto LABEL_626;
      v288 = 0;
      while ( 1 )
      {
        if ( v288 >= (unsigned int)max_length )
          goto LABEL_1317;
        v289 = &v287->obj.klass + v288;
        v290 = v289[4];
        if ( !v290 )
          goto LABEL_1318;
        result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                             (EventRaidEntity_o *)v289[4],
                                                             0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !*p_max_length )
            goto LABEL_1317;
          if ( !*m_Items )
            goto LABEL_1318;
          RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                   v283,
                                   HIDWORD((*m_Items)->bounds),
                                   (int32_t)v290->_1.namespaze,
                                   0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42E4B33 )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v291, v292);
            byte_42E4B33 = 1;
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
            result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !result )
              goto LABEL_1318;
            result = (BattleResultComponent_resultData_array *)clsQuestCheck__IsQuestClear(
                                                                 (clsQuestCheck_o *)result,
                                                                 RaidGroupDeadQuestId,
                                                                 0,
                                                                 0LL);
            if ( ((unsigned __int8)result & 1) != 0 )
              break;
          }
        }
        if ( !*p_max_length )
          goto LABEL_1317;
        if ( !*m_Items )
          goto LABEL_1318;
        result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                             v283,
                                                             HIDWORD((*m_Items)->bounds),
                                                             HIDWORD(v290->_1.name),
                                                             0LL);
        QuestId_k__BackingField = 0;
        if ( !result )
          goto LABEL_1318;
        v294 = result->max_length;
        v295 = result;
        if ( v294 >= 1 )
        {
          v296 = 0;
          while ( 1 )
          {
            if ( v296 >= (unsigned int)v294 )
              goto LABEL_1317;
            v297 = *((_DWORD *)v295->m_Items + v296);
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_42E4B33 )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v284, v285);
              byte_42E4B33 = 1;
            }
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            }
            static_fields = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
            if ( v297 == static_fields->_QuestId_k__BackingField )
              break;
            v296 = QuestId_k__BackingField + 1;
            QuestId_k__BackingField = v296;
            v294 = v295->max_length;
            if ( v296 >= v294 )
              goto LABEL_421;
          }
          name_high = HIDWORD(v290->_1.name);
          if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
          {
            j_il2cpp_runtime_class_init_0(result);
            static_fields = TerminalPramsManager_TypeInfo->static_fields;
          }
          static_fields->clearBattleRaidId = name_high;
        }
LABEL_421:
        v288 = v618 + 1;
        v618 = v288;
        max_length = v287->max_length;
        if ( v288 >= max_length )
          goto LABEL_626;
      }
      v310 = TerminalPramsManager_TypeInfo;
      v311 = HIDWORD(v290->_1.name);
      goto LABEL_480;
    }
    result = (BattleResultComponent_resultData_array *)v616;
    if ( !v616 )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                         (EventDetailEntity_o *)v616,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) == 0 )
    {
      result = (BattleResultComponent_resultData_array *)v616;
      if ( !v616 )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                           (EventDetailEntity_o *)v616,
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1317;
        if ( !*m_Items )
          goto LABEL_1318;
        v306 = (int32_t)(*m_Items)->m_Items[42];
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E5640 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v284, v285);
          byte_42E5640 = 1;
        }
        v307 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v307 = TerminalPramsManager_TypeInfo;
        }
        v307->static_fields->_EventActivityPointEffectState_k__BackingField = v306;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v616;
        if ( !v616 )
          goto LABEL_1318;
        if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v616, 0LL) )
        {
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42E5CE0 )
          {
            result = (BattleResultComponent_resultData_array *)sub_B5D5C4(
                                                                 &TerminalPramsManager_TypeInfo,
                                                                 isWin,
                                                                 v284,
                                                                 v285);
            byte_42E5CE0 = 1;
          }
          v308 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v308 = TerminalPramsManager_TypeInfo;
          }
          if ( v308->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
          {
            v309 = 0;
          }
          else
          {
            if ( !*p_max_length )
              goto LABEL_1317;
            if ( !*m_Items )
              goto LABEL_1318;
            bounds_high = HIDWORD((*m_Items)->bounds);
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0LL);
            v308 = TerminalPramsManager_TypeInfo;
            v309 = IsUserEventStatus;
          }
          if ( (BYTE3(v308->vtable._0_Equals.methodPtr) & 4) != 0 && !v308->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v308);
          if ( !byte_42E5CBC )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v284, v285);
            byte_42E5CBC = 1;
          }
          v324 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v324 = TerminalPramsManager_TypeInfo;
          }
          v324->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v309;
        }
        else
        {
          result = (BattleResultComponent_resultData_array *)v616;
          if ( !v616 )
            goto LABEL_1318;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v616,
                                                               0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*p_max_length )
              goto LABEL_1317;
            v315 = (_BYTE *)&unk_42E4000;
            v316 = (_BYTE *)&unk_42E4000;
            if ( !*m_Items )
              goto LABEL_1318;
            v317 = (*m_Items)->m_Items[10];
            v618 = 0;
            if ( !v317 )
              goto LABEL_1318;
            v318 = (int)v317->fields.eventEndTitle;
            if ( v318 >= 1 )
            {
              v319 = 0;
              v315 = (_BYTE *)&unk_42E4000;
              while ( 1 )
              {
                if ( v319 >= (unsigned int)v318 )
                  goto LABEL_1317;
                if ( !v616 )
                  goto LABEL_1318;
                v320 = *((_QWORD *)&v317->fields.eventEndMessage + v319);
                if ( !v320 )
                  goto LABEL_1318;
                if ( v616->fields.id == *(_DWORD *)(v320 + 24) )
                  break;
                v618 = ++v319;
                if ( v319 >= v318 )
                  goto LABEL_602;
              }
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_42E5CDC )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v313, v314);
                byte_42E5CDC = 1;
              }
              v325 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v325 = TerminalPramsManager_TypeInfo;
              }
              if ( !v325->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v326 = (EventSaveData_o *)sub_B5D694(EventSaveData_TypeInfo);
                EventSaveData___ctor(v326, 0LL);
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_42E5CB9 )
                {
                  sub_B5D5C4(&TerminalPramsManager_TypeInfo, v327, v328, v329);
                  byte_42E5CB9 = 1;
                }
                v330 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v330 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = &v330->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                *p_BeforeEventSubmarineSaveData_k__BackingField = v326;
                sub_B5D560(p_BeforeEventSubmarineSaveData_k__BackingField);
                v325 = TerminalPramsManager_TypeInfo;
              }
              if ( (BYTE3(v325->vtable._0_Equals.methodPtr) & 4) != 0 && !v325->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v325);
              if ( !byte_42E5CDC )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v313, v314);
                byte_42E5CDC = 1;
              }
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              rewardBonus = result->m_Items[19]->fields.rewardBonus;
              if ( !rewardBonus )
                goto LABEL_1318;
              rewardBonus->fields.animationId = *(_DWORD *)(v320 + 24);
              if ( !byte_42E5CDC )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v313, v314);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_42E5CDC = 1;
              }
              if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
              {
                j_il2cpp_runtime_class_init_0(result);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              }
              result = (BattleResultComponent_resultData_array *)result->m_Items[19]->fields.rewardBonus;
              if ( !result )
                goto LABEL_1318;
              result = (BattleResultComponent_resultData_array *)EventSaveData__GetValueByArray(
                                                                   (EventSaveData_o *)result,
                                                                   0x2Cu,
                                                                   0LL);
              if ( result )
              {
                v333 = result->max_length;
                v334 = (System_String_o **)&result->m_Items[1];
                if ( v333 <= 1 )
                  v334 = (System_String_o **)&StringLiteral_973/*"0"*/;
                v335 = *v334;
                v336 = v333 <= 2 ? (System_String_o **)&StringLiteral_973/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v337 = *v336;
                v338 = v333 <= 3 ? &StringLiteral_6663/*"False"*/ : (__int64 *)&result->m_Items[3];
              }
              else
              {
                v337 = (System_String_o *)StringLiteral_973/*"0"*/;
                v338 = &StringLiteral_6663/*"False"*/;
                v335 = (System_String_o *)StringLiteral_973/*"0"*/;
              }
              if ( !v616 )
                goto LABEL_1318;
              v339 = v616->fields.id;
              isLastGoalPlayed = (System_String_o *)*v338;
              if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              }
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v339,
                                                                   0LL);
              v340 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)result;
              v341 = TerminalPramsManager___c_TypeInfo;
              if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v341 = TerminalPramsManager___c_TypeInfo;
              }
              v342 = v341->static_fields;
              _9__626_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v342->__9__626_0;
              if ( !_9__626_0 )
              {
                if ( (BYTE3(v341->vtable._0_Equals.methodPtr) & 4) != 0 && !v341->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v341);
                  v342 = TerminalPramsManager___c_TypeInfo->static_fields;
                }
                v344 = (Il2CppObject *)v342->__9;
                _9__626_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  _9__626_0,
                  v344,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__626_0__,
                  (const MethodInfo_2B9320C *)Method_System_Predicate_QuestReleaseEntity___ctor__);
                v345 = TerminalPramsManager___c_TypeInfo->static_fields;
                v345->__9__626_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__626_0;
                sub_B5D560(&v345->__9__626_0);
              }
              if ( !v340 )
                goto LABEL_1318;
              if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                     v340,
                     (System_Predicate_T__o *)_9__626_0,
                     (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_42E4B33 )
                {
                  sub_B5D5C4(&TerminalPramsManager_TypeInfo, v346, v347, v348);
                  byte_42E4B33 = 1;
                }
                v349 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v349 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v349->static_fields->_QuestId_k__BackingField;
                v335 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
              }
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_42E5CDC )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, v346, v347, v348);
                byte_42E5CDC = 1;
              }
              v350 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v350 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v350->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v352 = System_Int64__ToString(v320 + 32, 0LL);
              if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              }
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_21895852(
                                                                   v352,
                                                                   v335,
                                                                   v337,
                                                                   isLastGoalPlayed,
                                                                   0LL);
              v315 = &unk_42E4000;
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1318;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_B5D560(&BeforeEventSubmarineSaveData_k__BackingField->fields.value);
              v316 = &unk_42E4000;
            }
LABEL_602:
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_42E4B33 )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v313, v314);
              byte_42E4B33 = 1;
            }
            v353 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v353 = TerminalPramsManager_TypeInfo;
            }
            v354 = v353->static_fields->_QuestId_k__BackingField;
            if ( !byte_42E4B34 )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v313, v314);
              v353 = TerminalPramsManager_TypeInfo;
              byte_42E4B34 = 1;
            }
            if ( (BYTE3(v353->vtable._0_Equals.methodPtr) & 4) != 0 && !v353->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v353);
              v353 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v353->static_fields->_PhaseCnt_k__BackingField;
            if ( !v316[2885] )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v313, v314);
              v353 = TerminalPramsManager_TypeInfo;
              v316[2885] = 1;
            }
            if ( (BYTE3(v353->vtable._0_Equals.methodPtr) & 4) != 0 && !v353->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v353);
              v353 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v353->static_fields->_IsQuestClear_k__BackingField;
            if ( !v315[2869] )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v313, v314);
              v353 = TerminalPramsManager_TypeInfo;
              v315[2869] = 1;
            }
            if ( (BYTE3(v353->vtable._0_Equals.methodPtr) & 4) != 0 && !v353->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v353);
              v353 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v354,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v353->static_fields->_IsPhaseClear_k__BackingField,
              0LL);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v616;
            if ( !v616 )
              goto LABEL_1318;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v616, 0LL) )
            {
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_42E502F )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v284, v285);
                byte_42E502F = 1;
              }
              v321 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v321 = TerminalPramsManager_TypeInfo;
              }
              v321->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
            }
          }
        }
      }
      goto LABEL_626;
    }
    if ( !*p_max_length )
      goto LABEL_1317;
    if ( !*m_Items )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         v283,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v618 = 0;
    if ( !result )
      goto LABEL_1318;
    v300 = result->max_length;
    v301 = result;
    if ( v300 >= 1 )
    {
      v302 = 0;
      while ( 1 )
      {
        if ( v302 >= (unsigned int)v300 || !*p_max_length )
          goto LABEL_1317;
        if ( !*m_Items )
          goto LABEL_1318;
        v303 = v301->m_Items[v302];
        if ( !v303 )
          goto LABEL_1318;
        RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                            v283,
                            HIDWORD((*m_Items)->bounds),
                            v303->fields.eventId,
                            0LL);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B33 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v284, v285);
          byte_42E4B33 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v305 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
        if ( RaidDeadQuestId == v305->_QuestId_k__BackingField )
          break;
        v302 = v618 + 1;
        v618 = v302;
        v300 = v301->max_length;
        if ( v302 >= v300 )
          goto LABEL_626;
      }
      eventId = v303->fields.eventId;
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        v305 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v305->clearBattleRaidId = eventId;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
      {
        v310 = TerminalPramsManager_TypeInfo;
        v311 = v303->fields.eventId;
LABEL_480:
        if ( (BYTE3(v310->vtable._0_Equals.methodPtr) & 4) != 0 && !v310->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v310);
          v310 = TerminalPramsManager_TypeInfo;
        }
        v310->static_fields->clearLastBattleRaidId = v311;
      }
    }
  }
LABEL_626:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B50 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v284, v285);
    byte_42E4B50 = 1;
  }
  v357 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v358 = v606;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v357 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v358 = v606;
  }
  v357->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v284, v285);
    v357 = TerminalPramsManager_TypeInfo;
    byte_42E4B33 = 1;
  }
  if ( (BYTE3(v357->vtable._0_Equals.methodPtr) & 4) != 0 && !v357->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v357);
    v357 = TerminalPramsManager_TypeInfo;
  }
  if ( v357->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    v361 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)result,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v359, v360);
      byte_42E4B33 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v361 )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         v361,
                                                         result->m_Items[19]->fields.battleId,
                                                         0LL);
    if ( !result )
      goto LABEL_1318;
    v362 = (int)result->m_Items[1];
    if ( !byte_42E4B50 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v284, v285);
      byte_42E4B50 = 1;
    }
    v357 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v357 = TerminalPramsManager_TypeInfo;
    }
    v357->static_fields->_IsWarBoardClear_k__BackingField = v362 == 7;
  }
  if ( (BYTE3(v357->vtable._0_Equals.methodPtr) & 4) != 0 && !v357->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v357);
  if ( !byte_42E5CE1 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v284, v285);
    byte_42E5CE1 = 1;
  }
  v363 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v363 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = &v363->static_fields->_questClearCostumeRelease_k__BackingField;
  *p_questClearCostumeRelease_k__BackingField = 0LL;
  sub_B5D560(p_questClearCostumeRelease_k__BackingField);
  if ( !*p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v367 = (*m_Items)->m_Items[22];
  if ( v367 && v367->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B3D )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v365, v366);
      byte_42E4B3D = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !LOBYTE(result->m_Items[19]->fields.resultQuestPhaseRewardInfos) )
    {
      if ( !*p_max_length )
        goto LABEL_1317;
      if ( !*m_Items )
        goto LABEL_1318;
      v368 = (*m_Items)->m_Items[22];
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_42E5CE1 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v365, v366);
        byte_42E5CE1 = 1;
      }
      v369 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v369 = TerminalPramsManager_TypeInfo;
      }
      v370 = &v369->static_fields->_questClearCostumeRelease_k__BackingField;
      *v370 = (struct CostumeReleaseAnnounce_array *)v368;
      sub_B5D560(v370);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B4C )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v365, v366);
    byte_42E4B4C = 1;
  }
  v371 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v371 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = &v371->static_fields->_questClearCostumeGet_k__BackingField;
  *p_questClearCostumeGet_k__BackingField = 0LL;
  sub_B5D560(p_questClearCostumeGet_k__BackingField);
  if ( !*p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v375 = (*m_Items)->m_Items[23];
  if ( v375 && v375->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B4C )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v373, v374);
      byte_42E4B4C = 1;
    }
    v376 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v376 = TerminalPramsManager_TypeInfo;
    }
    v377 = &v376->static_fields->_questClearCostumeGet_k__BackingField;
    *v377 = (struct CostumeReleaseAnnounce_array *)v375;
    sub_B5D560(v377);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CE2 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v373, v374);
    byte_42E5CE2 = 1;
  }
  v378 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v378 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = &v378->static_fields->_eventPointWinReward_k__BackingField;
  *p_eventPointWinReward_k__BackingField = 0LL;
  sub_B5D560(p_eventPointWinReward_k__BackingField);
  if ( !byte_42E5CE3 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v380, v381);
    byte_42E5CE3 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(result->m_Items[19]->fields.resultEventBoardGameTokenRewardInfos) = 0;
  if ( v616 && v358 && *(&v616[1].fields.id + 1) == 4 )
  {
    if ( !v606 )
      goto LABEL_1318;
    v382 = v606->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1318;
    v383 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v382, 4, 0LL);
    v385 = TerminalPramsManager_TypeInfo;
    v386 = GroupId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v385 = TerminalPramsManager_TypeInfo;
    }
    v385->static_fields->joinGroupId = v386;
    v387 = QuestGroupMaster__GetGroupId(v383, v382, 3, 0LL);
    if ( !byte_42E4B45 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v380, v381);
      byte_42E4B45 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v387 >= 1 && BYTE4(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      v388 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)result,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1317;
      if ( !*m_Items || !result )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v387,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v389 = (EventPointEntity_o *)result;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !v389 )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v389,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v388 )
        goto LABEL_1318;
      v390 = QuestReleaseMaster__EventPointWinActionType(v388, v382, (unsigned __int8)result & 1, 0LL);
      if ( !byte_42E5CE3 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v380, v381);
        byte_42E5CE3 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.resultEventBoardGameTokenRewardInfos) = v390;
      if ( !byte_42E502B )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v380, v381);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_42E502B = 1;
      }
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v391 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v391->_eventPointWinType_k__BackingField )
      {
        if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v391 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v391->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1317;
    if ( !*m_Items )
      goto LABEL_1318;
    v392 = (*m_Items)->m_Items[20];
    if ( v392 )
    {
      v393 = v392->fields.eventEndTitle;
      if ( v393 )
      {
        if ( !(_DWORD)v393 )
          goto LABEL_1317;
        v394 = v392->fields.eventEndMessage;
        if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_42E5CE2 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v380, v381);
          byte_42E5CE2 = 1;
        }
        v395 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v395 = TerminalPramsManager_TypeInfo;
        }
        v396 = &v395->static_fields->_eventPointWinReward_k__BackingField;
        *v396 = (struct EventPointWinReward_o *)v394;
        sub_B5D560(v396);
      }
    }
  }
  if ( v616 != 0LL && v358 != 0LL && *(&v616[1].fields.id + 1) == 6 )
  {
    if ( !v606 )
      goto LABEL_1318;
    v397 = v606->fields.questId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CE4 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v380, v381);
      byte_42E5CE4 = 1;
    }
    v398 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v398 = TerminalPramsManager_TypeInfo;
    }
    v398->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v397;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CE5 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v380, v381);
    byte_42E5CE5 = 1;
  }
  v399 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v399 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = &v399->static_fields->_eventRaceBoost_k__BackingField;
  *p_eventRaceBoost_k__BackingField = 0LL;
  sub_B5D560(p_eventRaceBoost_k__BackingField);
  v403 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v404 = (*m_Items)->m_Items[21];
  if ( v404 && v404->fields.battleId >= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CE5 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v401, v402);
      byte_42E5CE5 = 1;
    }
    v405 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v405 = TerminalPramsManager_TypeInfo;
    }
    v406 = &v405->static_fields->_eventRaceBoost_k__BackingField;
    *v406 = (struct EventRaceBoostInfo_o *)v404;
    sub_B5D560(v406);
    if ( !byte_42E5CE6 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v401, v402);
      byte_42E5CE6 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    followerId = result->m_Items[19]->fields.followerId;
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v401, v402);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_42E4B33 = 1;
    }
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !followerId )
      goto LABEL_1318;
    *(_DWORD *)(followerId + 28) = result->m_Items[19]->fields.battleId;
    v403 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v403 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v408 = (*m_Items)->m_Items[24];
  if ( v408 )
  {
    v409 = v408->fields.eventEndTitle;
    if ( v409 )
    {
      if ( !(_DWORD)v409 )
        goto LABEL_1317;
      v410 = (struct EventTowerReward_o *)v408->fields.eventEndMessage;
      if ( !v410 )
        goto LABEL_1318;
      if ( v410->fields.eventId >= 1 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E502C )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v401, v402);
          byte_42E502C = 1;
        }
        v411 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v411 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = &v411->static_fields->_eventTowerReward_k__BackingField;
        *p_eventTowerReward_k__BackingField = v410;
        sub_B5D560(p_eventTowerReward_k__BackingField);
        if ( !*p_max_length )
          goto LABEL_1317;
        if ( *m_Items )
        {
          v415 = (*m_Items)->m_Items[25];
          if ( !byte_42E502D )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v413, v414);
            byte_42E502D = 1;
          }
          v416 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v416 = TerminalPramsManager_TypeInfo;
          }
          p_resultEventTowerRewardInfo_k__BackingField = &v416->static_fields->_resultEventTowerRewardInfo_k__BackingField;
          *p_resultEventTowerRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v415;
          sub_B5D560(p_resultEventTowerRewardInfo_k__BackingField);
          v403 = *(_QWORD *)p_max_length;
          goto LABEL_846;
        }
        goto LABEL_1318;
      }
    }
  }
LABEL_846:
  if ( !(_DWORD)v403 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v418 = (*m_Items)->m_Items[26];
  if ( v418 && v418->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B42 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v401, v402);
      byte_42E4B42 = 1;
    }
    v419 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v419 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = &v419->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    *p_resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v418;
    sub_B5D560(p_resultBoostItemRewardInfo_k__BackingField);
    v403 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v403 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v421 = (*m_Items)->m_Items[27];
  if ( v421 && v421->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B43 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v401, v402);
      byte_42E4B43 = 1;
    }
    v422 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v422 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = &v422->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    *p_resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v421;
    sub_B5D560(p_resultEventBoardGameTokenRewardInfo_k__BackingField);
    v403 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v403 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1319;
  v424 = (*m_Items)->m_Items[28];
  if ( v424 && v424->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B53 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v401, v402);
      byte_42E4B53 = 1;
    }
    v425 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v425 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = &v425->static_fields->_warClearReward_k__BackingField;
    *p_warClearReward_k__BackingField = (struct WarClearReward_array *)v424;
    sub_B5D560(p_warClearReward_k__BackingField);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5027 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v401, v402);
    byte_42E5027 = 1;
  }
  v427 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v427 = TerminalPramsManager_TypeInfo;
  }
  v428 = v427->static_fields;
  v428->_oldSuperBoss_k__BackingField = 0LL;
  sub_B5D560(&v428->_oldSuperBoss_k__BackingField);
  if ( !byte_42E5029 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v429, v430, v431);
    byte_42E5029 = 1;
  }
  v432 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v432 = TerminalPramsManager_TypeInfo;
  }
  v433 = v432->static_fields;
  v433->_oldPersonalBoss_k__BackingField = 0LL;
  sub_B5D560(&v433->_oldPersonalBoss_k__BackingField);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v436 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v434, v435);
    byte_42E4B33 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v436 )
    goto LABEL_1319;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v436, result->m_Items[19]->fields.battleId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1319;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v439 = WarEntityByWarID->fields.eventId;
  else
    v439 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                                       &v614,
                                                       v439,
                                                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v605 )
    goto LABEL_1325;
  if ( !*p_max_length )
    goto LABEL_1321;
  result = *m_Items;
  if ( !*m_Items )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1325:
    v442 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1321;
    if ( !*m_Items )
      goto LABEL_1319;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v614;
      if ( v614
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v614,
                                                                 0LL),
            v442 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v442 )
          goto LABEL_1321;
        if ( !*m_Items )
          goto LABEL_1319;
        v443 = (*m_Items)->m_Items[41];
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E5029 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v440, v441);
          byte_42E5029 = 1;
        }
        v444 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v444 = TerminalPramsManager_TypeInfo;
        }
        v445 = v444->static_fields;
        v445->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v443;
        p_oldPersonalBoss_k__BackingField = &v445->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v442 )
          goto LABEL_1321;
        if ( !*m_Items )
          goto LABEL_1319;
        v447 = (*m_Items)->m_Items[41];
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E5027 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v440, v441);
          byte_42E5027 = 1;
        }
        v448 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v448 = TerminalPramsManager_TypeInfo;
        }
        v449 = v448->static_fields;
        v449->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v447;
        p_oldPersonalBoss_k__BackingField = &v449->_oldSuperBoss_k__BackingField;
      }
      sub_B5D560(p_oldPersonalBoss_k__BackingField);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5028 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v440, v441);
    byte_42E5028 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.costumeGetAnnounce )
    goto LABEL_1326;
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_42E5028 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v440, v441);
    byte_42E5028 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  costumeGetAnnounce = result->m_Items[19]->fields.costumeGetAnnounce;
  if ( !costumeGetAnnounce )
    goto LABEL_1319;
  if ( *(_QWORD *)&costumeGetAnnounce->max_length )
  {
    v451 = 1;
  }
  else
  {
LABEL_1326:
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v440, v441);
      byte_42E4B33 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v452 = BalanceConfig_TypeInfo;
    battleId = result->m_Items[19]->fields.battleId;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v452 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v451 = battleId == v452->static_fields->OrtFirstQuestId;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_42E4B62 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v440, v441);
    byte_42E4B62 = 1;
  }
  v454 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v454 = TerminalPramsManager_TypeInfo;
  }
  v454->static_fields->_isIncomingCall_k__BackingField = v451;
  if ( v614 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v614, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v455, v456, v457);
      byte_42E4B33 = 1;
    }
    v458 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v458 = TerminalPramsManager_TypeInfo;
    }
    v459 = BalanceConfig_TypeInfo;
    v460 = v458->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v459 = BalanceConfig_TypeInfo;
    }
    if ( v460 == v459->static_fields->OrtLateQuestId )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B34 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v455, v456, v457);
        byte_42E4B34 = 1;
      }
      v461 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v461 = TerminalPramsManager_TypeInfo;
      }
      v462 = BalanceConfig_TypeInfo;
      v463 = v461->static_fields->_PhaseCnt_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v462 = BalanceConfig_TypeInfo;
      }
      if ( v463 + 1 == v462->static_fields->OrtLatePhaseBreak )
        goto LABEL_1327;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B34 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v455, v456, v457);
        byte_42E4B34 = 1;
      }
      v464 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v464 = TerminalPramsManager_TypeInfo;
      }
      v465 = BalanceConfig_TypeInfo;
      v466 = v464->static_fields->_PhaseCnt_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v465 = BalanceConfig_TypeInfo;
      }
      if ( v466 + 1 == v465->static_fields->OrtLatePhaseDead )
      {
LABEL_1327:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v467 = (UserSuperBossMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
        v468 = result;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v467 )
          goto LABEL_1319;
        if ( UserSuperBossMaster__TryGetEntity(
               v467,
               &v613,
               (int64_t)v468,
               v439,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_B5D5DC(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1319;
          v469 = v613;
          v470 = result;
          if ( v613 )
          {
            result = (BattleResultComponent_resultData_array *)sub_B5D684(v613, result->obj.klass->_1.element_class);
            if ( !result )
              goto LABEL_1322;
          }
          if ( !v470->max_length )
            goto LABEL_1321;
          v470->m_Items[0] = (BattleResultComponent_resultData_o *)v469;
          sub_B5D560(v470->m_Items);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42E5029 )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v471, v472, v473);
            byte_42E5029 = 1;
          }
          v474 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v474 = TerminalPramsManager_TypeInfo;
          }
          v475 = v474->static_fields;
          v475->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v470;
          sub_B5D560(&v475->_oldPersonalBoss_k__BackingField);
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
    v477 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1319;
    v480 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)result,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v478, v479);
      byte_42E4B33 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v480 )
      goto LABEL_1319;
    ScriptQuestId = QuestMaster__getScriptQuestId(v480, result->m_Items[19]->fields.battleId, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_42E4B34 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v482, v483, v484);
      byte_42E4B34 = 1;
    }
    v486 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v486 = TerminalPramsManager_TypeInfo;
    }
    v487 = v486->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v477, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v487 + 1,
                                                         winResult,
                                                         0LL);
    if ( !Instance )
      goto LABEL_1319;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)Instance, (System_String_o *)result, 0LL) )
      goto LABEL_1086;
    v492 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B34 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v489, v490, v491);
      byte_42E4B34 = 1;
    }
    v493 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v493 = TerminalPramsManager_TypeInfo;
    }
    v494 = v493->static_fields->_PhaseCnt_k__BackingField;
    v495 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v477, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v494 + 1,
                                                         v495,
                                                         0LL);
    if ( !v492 )
      goto LABEL_1319;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v492, (System_String_o *)result, 0LL) )
    {
LABEL_1086:
      v496 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v496 = TerminalPramsManager_TypeInfo;
      }
      p_lastPlayBgmName = &v496->static_fields->lastPlayBgmName;
      *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B5D560(p_lastPlayBgmName);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v498);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1319;
  v501 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)result,
                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v499, v500);
    byte_42E4B33 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v502 = result->m_Items[19]->fields.battleId;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v499, v500);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v501 )
    goto LABEL_1319;
  QuestPhaseMaster__TryGetEntity(v501, &v619, v502, result->m_Items[19]->fields.eventId + 1, 0LL);
  if ( !byte_42E501A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v503, v504);
    byte_42E501A = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( result->m_Items[19]->fields.raceResult )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_42E501A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v503, v504);
      byte_42E501A = 1;
    }
    v505 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v505 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v505->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1319;
    SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)result, 0LL);
  }
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*m_Items )
LABEL_1319:
    sub_B5D69C(result, isWin);
  v506 = HIDWORD((*m_Items)->bounds);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v503, v504);
    byte_42E4B33 = 1;
  }
  v507 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v507 = TerminalPramsManager_TypeInfo;
  }
  v508 = v507->static_fields->_QuestId_k__BackingField;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v503, v504);
    v507 = TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (BYTE3(v507->vtable._0_Equals.methodPtr) & 4) != 0 && !v507->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v507);
    v507 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         v501,
                         v506,
                         v508,
                         v507->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_42E501B )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v509, v510, v511);
    byte_42E501B = 1;
  }
  v513 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v513 = TerminalPramsManager_TypeInfo;
  }
  v514 = v513->static_fields;
  v514->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_B5D560(&v514->_SpecifiedChangeSceneInfo_k__BackingField);
  v515 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0;
  v515->static_fields->TipsArchiveCurrrentTab = 0;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v516);
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*m_Items )
    goto LABEL_1319;
  v519 = (int32_t)(*m_Items)->m_Items[52];
  v520 = TerminalPramsManager_TypeInfo;
  if ( v519 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B3F )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v517, v518);
      byte_42E4B3F = 1;
    }
    v520 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v520 = TerminalPramsManager_TypeInfo;
    }
    v520->static_fields->_EventMuralId_k__BackingField = v519;
  }
  if ( (BYTE3(v520->vtable._0_Equals.methodPtr) & 4) != 0 && !v520->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v520);
    v520 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = &v520->static_fields->eventHarvestGrowthInfo;
  *p_eventHarvestGrowthInfo = 0LL;
  sub_B5D560(p_eventHarvestGrowthInfo);
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v522, v523, v524);
    byte_42E4B33 = 1;
  }
  v525 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v525 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       v501,
                                                       v525->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1319;
  v526 = (QuestPhaseEntity_o *)result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19351/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v528 = QuestPhaseEntity__getScriptIntParam(v526, (System_String_o *)StringLiteral_19350/*"harvestGrowthAfterQuestId"*/, -1, 0LL);
  if ( ScriptIntParam >= 1 )
  {
    v529 = v528;
    if ( v528 >= 1 )
    {
      v530 = (EventHarvestGrowthInfo_o *)sub_B5D694(EventHarvestGrowthInfo_TypeInfo);
      EventHarvestGrowthInfo___ctor(v530, 0LL);
      if ( !v530 )
        goto LABEL_1319;
      v530->fields.questId = v526->fields.questId;
      phase = v526->fields.phase;
      v530->fields.afterQuestId = v529;
      v530->fields.phase = phase;
      v530->fields.beforeQuestId = ScriptIntParam;
      v532 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v532 = TerminalPramsManager_TypeInfo;
      }
      v533 = &v532->static_fields->eventHarvestGrowthInfo;
      *v533 = v530;
      sub_B5D560(v533);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1319;
  v536 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)result,
                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v534, v535);
    byte_42E4B33 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v536 )
    goto LABEL_1319;
  QuestEntity = QuestMaster__getQuestEntity(v536, result->m_Items[19]->fields.battleId, 0LL);
  if ( QuestEntity )
  {
    v540 = QuestEntity;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v538, v539);
      byte_42E4B33 = 1;
    }
    v541 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v541 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(v501, v541->static_fields->_QuestId_k__BackingField, 0LL) )
    {
      SpotId = QuestEntity__getSpotId(v540, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( *p_max_length )
      {
        if ( !*m_Items || !result )
          goto LABEL_1319;
        CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                               (UserEventCooltimeRewardMaster_o *)result,
                               HIDWORD((*m_Items)->bounds),
                               SpotId,
                               0LL);
        if ( CurrentLevelEntity )
        {
          v544 = CurrentLevelEntity;
          v545 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v545 = TerminalPramsManager_TypeInfo;
          }
          eventAreaImproveResultInfo = v545->static_fields->eventAreaImproveResultInfo;
          if ( eventAreaImproveResultInfo )
          {
            if ( (BYTE3(v545->vtable._0_Equals.methodPtr) & 4) != 0 && !v545->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v545);
              eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
              if ( !eventAreaImproveResultInfo )
                goto LABEL_1319;
            }
            eventAreaImproveResultInfo->fields.afterLevel = v544->fields.lv;
          }
        }
        goto LABEL_1204;
      }
LABEL_1321:
      v602 = sub_B5D6C8(result);
      sub_B5D668(v602, 0LL);
    }
  }
LABEL_1204:
  result = (BattleResultComponent_resultData_array *)v619;
  if ( v619 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v619, 0LL);
    if ( !result )
      goto LABEL_1319;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B33 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v538, v539);
        byte_42E4B33 = 1;
      }
      v547 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v547 = TerminalPramsManager_TypeInfo;
      }
      v618 = v547->static_fields->_QuestId_k__BackingField;
      v551 = System_Int32__ToString((int32_t)&v618, 0LL);
      if ( !byte_42E4B34 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v548, v549, v550);
        byte_42E4B34 = 1;
      }
      v552 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v552 = TerminalPramsManager_TypeInfo;
      }
      v618 = v552->static_fields->_PhaseCnt_k__BackingField + 1;
      v553 = System_Int32__ToString((int32_t)&v618, 0LL);
      v557 = System_String__Concat_44580072(v551, (System_String_o *)StringLiteral_707/*","*/, v553, 0LL);
      if ( !byte_42E5CCB )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v554, v555, v556);
        byte_42E5CCB = 1;
      }
      v558 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v558 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = &v558->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      *p_SceneMoveQuestClearedInfo_k__BackingField = v557;
      sub_B5D560(p_SceneMoveQuestClearedInfo_k__BackingField);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*m_Items )
    goto LABEL_1319;
  v560 = (*m_Items)->m_Items[47];
  if ( v560 && v560->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B47 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, isWin, v538, v539);
      byte_42E4B47 = 1;
    }
    v561 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v561 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = &v561->static_fields->_limitImageAnnounces_k__BackingField;
    *p_limitImageAnnounces_k__BackingField = (struct LimitImageAnnounce_array *)v560;
    sub_B5D560(p_limitImageAnnounces_k__BackingField);
  }
  v566 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 7LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v563, v564, v565);
    byte_42E4B33 = 1;
  }
  v567 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v568 = &unk_42E4000;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v567 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v568 = (_BYTE *)&unk_42E4000;
  }
  v618 = v567->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v618, 0LL);
  if ( !v566 )
    goto LABEL_1319;
  v569 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B5D684(result, v566->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
  }
  if ( !v566->max_length )
    goto LABEL_1321;
  v566->m_Items[0] = (System_String_o *)v569;
  sub_B5D560(v566->m_Items);
  result = (BattleResultComponent_resultData_array *)StringLiteral_707/*","*/;
  if ( StringLiteral_707/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B5D684(StringLiteral_707/*","*/, v566->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
    v570 = StringLiteral_707/*","*/;
  }
  else
  {
    v570 = 0LL;
  }
  if ( v566->max_length <= 1 )
    goto LABEL_1321;
  v566->m_Items[1] = (System_String_o *)v570;
  sub_B5D560(&v566->m_Items[1]);
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v571, v572, v573);
    byte_42E4B34 = 1;
  }
  v574 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v574 = TerminalPramsManager_TypeInfo;
  }
  v618 = v574->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v618, 0LL);
  v575 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B5D684(result, v566->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
  }
  if ( v566->max_length <= 2 )
    goto LABEL_1321;
  v566->m_Items[2] = (System_String_o *)v575;
  sub_B5D560(&v566->m_Items[2]);
  result = (BattleResultComponent_resultData_array *)StringLiteral_707/*","*/;
  if ( StringLiteral_707/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B5D684(StringLiteral_707/*","*/, v566->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
    v576 = StringLiteral_707/*","*/;
  }
  else
  {
    v576 = 0LL;
  }
  if ( v566->max_length <= 3 )
    goto LABEL_1321;
  v566->m_Items[3] = (System_String_o *)v576;
  sub_B5D560(&v566->m_Items[3]);
  if ( !v568[2885] )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v577, v578, v579);
    v568[2885] = 1;
  }
  v580 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v580 = TerminalPramsManager_TypeInfo;
  }
  v612[0] = v580->static_fields->_IsQuestClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v612, 0LL);
  v581 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B5D684(result, v566->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
  }
  if ( v566->max_length <= 4 )
    goto LABEL_1321;
  v566->m_Items[4] = (System_String_o *)v581;
  sub_B5D560(&v566->m_Items[4]);
  result = (BattleResultComponent_resultData_array *)StringLiteral_707/*","*/;
  if ( StringLiteral_707/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B5D684(StringLiteral_707/*","*/, v566->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
    v582 = StringLiteral_707/*","*/;
  }
  else
  {
    v582 = 0LL;
  }
  if ( v566->max_length <= 5 )
    goto LABEL_1321;
  v566->m_Items[5] = (System_String_o *)v582;
  sub_B5D560(&v566->m_Items[5]);
  if ( !byte_42E4B35 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v583, v584, v585);
    byte_42E4B35 = 1;
  }
  v586 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v586 = TerminalPramsManager_TypeInfo;
  }
  v612[0] = v586->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v612, 0LL);
  v587 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B5D684(result, v566->obj.klass->_1.element_class);
    if ( !result )
    {
LABEL_1322:
      v603 = sub_B5D6BC();
      sub_B5D668(v603, 0LL);
    }
  }
  if ( v566->max_length <= 6 )
    goto LABEL_1321;
  v566->m_Items[6] = (System_String_o *)v587;
  sub_B5D560(&v566->m_Items[6]);
  v588 = System_String__Concat_44657912(v566, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16485/*"afterActionBk"*/, v588, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v589);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v590);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v591);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v592);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v593);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v594) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B22 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v595, v596, v597);
      byte_42E4B22 = 1;
    }
    v598 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v598 = TerminalPramsManager_TypeInfo;
    }
    v598->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_42E4B29 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v595, v596, v597);
      byte_42E4B29 = 1;
    }
    v599 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v599 = TerminalPramsManager_TypeInfo;
    }
    v599->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_42E4B2A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v595, v596, v597);
      v599 = TerminalPramsManager_TypeInfo;
      byte_42E4B2A = 1;
    }
    if ( (BYTE3(v599->vtable._0_Equals.methodPtr) & 4) != 0 && !v599->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v599);
      v599 = TerminalPramsManager_TypeInfo;
    }
    v599->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_42E5CC0 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v595, v596, v597);
      v599 = TerminalPramsManager_TypeInfo;
      byte_42E5CC0 = 1;
    }
    if ( (BYTE3(v599->vtable._0_Equals.methodPtr) & 4) != 0 && !v599->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v599);
      v599 = TerminalPramsManager_TypeInfo;
    }
    v599->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v599);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x0

  if ( (byte_42E5C54 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C54 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CAB )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CAB = 1;
  }
  v4 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(v4[2].klass->vtable[12].methodPtr) = 0;
  TerminalPramsManager__BlankEarthSpotId_SaveData(v4);
}


void __fastcall TerminalPramsManager__ResetResumeScriptWithMap(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o **p_TalkScriptInfo_k__BackingField; // x0
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  TerminalPramsManager_c *v9; // x0

  if ( (byte_42E5C5A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C5A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CAC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CAC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_42E5CAD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v4 = TerminalPramsManager_TypeInfo;
    byte_42E5CAD = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_42E5CAE )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    v4 = TerminalPramsManager_TypeInfo;
    byte_42E5CAE = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = &v4->static_fields->_TalkScriptInfo_k__BackingField;
  *p_TalkScriptInfo_k__BackingField = 0LL;
  sub_B5D560(p_TalkScriptInfo_k__BackingField);
  if ( !byte_42E57FD )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v6, v7, v8);
    byte_42E57FD = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
}


void __fastcall TerminalPramsManager__SaveClearDatas(
        BattleResultComponent_resultData_array *result,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  TerminalPramsManager_c *v11; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  TerminalPramsManager_c *v13; // x0
  _BOOL8 v14; // x0
  BattleResultComponent_resultData_o *v15; // x0
  TerminalPramsManager_c *v16; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v18; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w21
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v21; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  _BOOL4 IsOrdealCallWarClear_k__BackingField; // w24
  QuestRewardInfo_array *v24; // x23
  bool isWarBoardClear; // w19
  bool v26; // zf
  int32_t eventMuralId; // w21
  bool v28; // w26
  TerminalPramsManager_ClearData_o *v29; // x25
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  TerminalPramsManager_c *v33; // x0
  TerminalPramsManager_ClearData_c *v34; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v36; // x1
  __int64 v37; // x0
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

  if ( (byte_42E5C9B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_ClearData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    byte_42E5C9B = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v11->static_fields->mQuestRewardInfos;
  if ( result )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v11);
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E4B33 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v14 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v13->static_fields->_QuestId_k__BackingField, method);
    if ( v14 )
    {
      if ( !result->max_length )
      {
        v37 = sub_B5D6C8(v14);
        sub_B5D668(v37, 0LL);
      }
      v15 = result->m_Items[0];
      if ( !v15 )
        sub_B5D69C(0LL, method);
      if ( BattleResultComponent_resultData__checkResultDispFlag(v15, 2048, 0LL) )
        mQuestRewardInfos = 0LL;
    }
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_42E4B45 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B45 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v16->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_42E4B35 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B35 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v18 = v16->static_fields;
  IsPhaseClear_k__BackingField = v18->_IsPhaseClear_k__BackingField;
  clearLastBattleRaidId = v18->clearLastBattleRaidId;
  clearBattleRaidId = v18->clearBattleRaidId;
  groupjoin = v18->joinGroupId;
  if ( !byte_42E5026 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E5026 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v16->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_42E5028 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E5028 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v16->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_42E5CE7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E5CE7 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  evpWinReward = v16->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_42E502B )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E502B = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v16->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_42E5CE6 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E5CE6 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  evRace = v16->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_42E4B44 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B44 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v16->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_42E4B3C )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B3C = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet = v16->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_42E4B40 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B40 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v16->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_42E5CE8 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E5CE8 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  resultEvTowerRewardInfo = v16->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_42E4B32 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B32 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v16->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_42E4B52 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B52 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v16->static_fields->_warClearReward_k__BackingField;
  if ( !byte_42E5CE9 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E5CE9 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v16->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_42E4B3D )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B3D = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v21 = v16->static_fields;
  IsWarBoardClear_k__BackingField = v21->_IsWarBoardClear_k__BackingField;
  questResultAfterEventRewardInfos = v21->mQuestResultAfterEventRewardInfos;
  resultEventPanelRewardInfos = v21->mResultEventPanelRewardInfos;
  panelEventPoint = v21->panelEventPoint;
  if ( !byte_42E4B46 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B46 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v16->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_42E4B3A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B3A = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v16->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_42E4B3E )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B3E = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v24 = mQuestRewardInfos;
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v24 = mQuestRewardInfos;
  }
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v26 = !IsPhaseClear_k__BackingField;
  eventMuralId = v16->static_fields->_EventMuralId_k__BackingField;
  v28 = !v26;
  v29 = (TerminalPramsManager_ClearData_o *)sub_B5D694(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_20909068(
    v29,
    mQuestClearHeroineInfo,
    v24,
    mQuestPhaseRewardInfos,
    IsQuestClear_k__BackingField,
    v28,
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
  if ( !byte_42E5CEA )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v30, v31, v32);
    byte_42E5CEA = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v33->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v34 = TerminalPramsManager_ClearData_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v34 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v34->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v36 = JsonManager__toJson((Il2CppObject *)v29, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v36, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v9; // x0

  if ( (byte_42E5CA1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11693/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4, v5, v6);
    byte_42E5CA1 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CEC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CEC = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v7->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_B5D69C(0LL, v1);
  v9 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11693/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v9, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestInfo_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  TerminalPramsManager_c *v10; // x0
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0

  if ( (byte_42E5C66 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_13779/*"TerminalPhaseCnt"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_13782/*"TerminalQuestId"*/, v7, v8, v9);
    byte_42E5C66 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B33 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13782/*"TerminalQuestId"*/,
    v10->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E4B34 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13779/*"TerminalPhaseCnt"*/,
    v14->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  System_String_o *Empty; // x19
  TerminalPramsManager_c *v38; // x0
  System_Collections_Generic_Dictionary_int__int__o *QuestRandomGroupList_k__BackingField; // x0
  int key; // w20
  int key_high; // w25
  Il2CppObject *v42; // x20
  Il2CppObject *v43; // x2
  System_String_o *v44; // x1
  __int128 v45[2]; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+20h] [xbp-60h] BYREF
  int v47; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_42E5CA5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v10, v11, v12);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v19, v20, v21);
    sub_B5D5C4(&string_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_11702/*"SAVEKEY_QuestRandomGroupList"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_23938/*"{0}:{1}"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_707/*","*/, v34, v35, v36);
    byte_42E5CA5 = 1;
  }
  memset(&v46, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CEE )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CEE = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v38->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_B5D69C(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v45,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_2F0B3CC *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v46.fields.dictionary = v45[0];
  v46.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v45[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v46,
            (const MethodInfo_289F694 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v46.fields.current.fields.key;
    key_high = HIDWORD(v46.fields.current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_44577788(Empty, (System_String_o *)StringLiteral_707/*","*/, 0LL);
    LODWORD(v45[0]) = key;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v45);
    v47 = key_high;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
    v44 = System_String__Format_44573324((System_String_o *)StringLiteral_23938/*"{0}:{1}"*/, v42, v43, 0LL);
    Empty = System_String__Concat_44577788(Empty, v44, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v46,
    (const MethodInfo_289F7DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11702/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v6; // x1

  if ( (byte_42E5C8F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C8F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v4);
  if ( !QuestFocusStateManager )
    sub_B5D69C(0LL, v6);
  QuestFocusStateManager__WriteData(QuestFocusStateManager, 0LL);
}


void __fastcall TerminalPramsManager__Save_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
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
  TerminalPramsManager_c *v88; // x0
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  TerminalPramsManager_c *v92; // x0
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  TerminalPramsManager_c *v96; // x0
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  TerminalPramsManager_c *v100; // x0
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  TerminalPramsManager_c *v104; // x0
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  TerminalPramsManager_c *v108; // x0
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  TerminalPramsManager_c *v112; // x0
  System_String_o *v113; // x0
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  TerminalPramsManager_c *v117; // x0
  TerminalPramsManager_c *v118; // x0
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  TerminalPramsManager_c *v122; // x0
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  TerminalPramsManager_c *v126; // x0
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  TerminalPramsManager_c *v130; // x0
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  TerminalPramsManager_c *v134; // x0
  System_String_o *v135; // x0
  int v136; // w1
  int v137; // w2
  __int64 v138; // x3
  TerminalPramsManager_c *v139; // x0
  int v140; // w1
  int v141; // w2
  __int64 v142; // x3
  TerminalPramsManager_c *v143; // x0
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  TerminalPramsManager_c *v147; // x0
  int v148; // w1
  int v149; // w2
  __int64 v150; // x3
  TerminalPramsManager_c *v151; // x0
  int v152; // w1
  int v153; // w2
  __int64 v154; // x3
  TerminalPramsManager_c *v155; // x0
  int v156; // w1
  int v157; // w2
  __int64 v158; // x3
  TerminalPramsManager_c *v159; // x0
  int v160; // w1
  int v161; // w2
  __int64 v162; // x3
  TerminalPramsManager_c *v163; // x0
  int v164; // w1
  int v165; // w2
  __int64 v166; // x3
  TerminalPramsManager_c *v167; // x0
  int v168; // w1
  int v169; // w2
  __int64 v170; // x3
  TerminalPramsManager_c *v171; // x0
  int v172; // w1
  int v173; // w2
  __int64 v174; // x3
  TerminalPramsManager_c *v175; // x0
  int v176; // w1
  int v177; // w2
  __int64 v178; // x3
  System_String_o *v179; // x19
  TerminalPramsManager_c *v180; // x0
  System_String_o *v181; // x0
  System_String_o *v182; // x0
  int v183; // w1
  int v184; // w2
  __int64 v185; // x3
  TerminalPramsManager_c *v186; // x0
  int v187; // w1
  int v188; // w2
  __int64 v189; // x3
  TerminalPramsManager_c *v190; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF
  int64_t EndTime_k__BackingField; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E5C64 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_13772/*"TerminalEndTime"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_11700/*"SAVEKEY_PlayedTerminalEffects"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_13773/*"TerminalEventDailyPointEventId"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_13779/*"TerminalPhaseCnt"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_13787/*"TerminalTimeStatusEventId"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_13771/*"TerminalDispState"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_11697/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_13774/*"TerminalIsDoneShortcut"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_11696/*"SAVEKEY_MapModelClearQuestInfo"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_11701/*"SAVEKEY_PlayerGenderType"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_11689/*"SAVEKEY_ClearEventQuestIds"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_11698/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_13782/*"TerminalQuestId"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_11708/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_13786/*"TerminalTimeStatusEventDailyPoint"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_13791/*"TerminalWarId"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_13784/*"TerminalSpotId"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_13788/*"TerminalTimeStatusLoopCount"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_11687/*"SAVEKEY_BlankEarthSpotId"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_11692/*"SAVEKEY_DataLostBattleAutoReset"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_13792/*"TerminalWarStartedIds"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_11691/*"SAVEKEY_ConnectMarkEventId"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_707/*","*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_11690/*"SAVEKEY_ConnectMarkAnimationId"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_11699/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_11707/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v85, v86, v87);
    byte_42E5C64 = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B1F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B1F = 1;
  }
  v88 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v88 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13771/*"TerminalDispState"*/,
    v88->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v89, v90, v91);
    byte_42E4B20 = 1;
  }
  v92 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v92 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13791/*"TerminalWarId"*/,
    v92->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_42E4B2F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v93, v94, v95);
    byte_42E4B2F = 1;
  }
  v96 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v96 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13784/*"TerminalSpotId"*/,
    v96->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_42E4B23 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v97, v98, v99);
    byte_42E4B23 = 1;
  }
  v100 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v100 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11687/*"SAVEKEY_BlankEarthSpotId"*/,
    v100->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v101, v102, v103);
    byte_42E4B33 = 1;
  }
  v104 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v104 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13782/*"TerminalQuestId"*/,
    v104->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v105, v106, v107);
    byte_42E4B34 = 1;
  }
  v108 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v108 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13779/*"TerminalPhaseCnt"*/,
    v108->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_42E5CCF )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v109, v110, v111);
    byte_42E5CCF = 1;
  }
  v112 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v112 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v112->static_fields->_EndTime_k__BackingField;
  v113 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13772/*"TerminalEndTime"*/, v113, 0LL);
  if ( !byte_42E4B6C )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v114, v115, v116);
    byte_42E4B6C = 1;
  }
  v117 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v117 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13774/*"TerminalIsDoneShortcut"*/,
    v117->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v118 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v118 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13792/*"TerminalWarStartedIds"*/,
    v118->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_42E5CD0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v119, v120, v121);
    byte_42E5CD0 = 1;
  }
  v122 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v122 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13787/*"TerminalTimeStatusEventId"*/,
    v122->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_42E5CD1 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v123, v124, v125);
    byte_42E5CD1 = 1;
  }
  v126 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v126 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13788/*"TerminalTimeStatusLoopCount"*/,
    v126->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_42E5023 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v127, v128, v129);
    byte_42E5023 = 1;
  }
  v130 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v130 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13773/*"TerminalEventDailyPointEventId"*/,
    v130->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_42E5022 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v131, v132, v133);
    byte_42E5022 = 1;
  }
  v134 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v134 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v134->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v135 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13786/*"TerminalTimeStatusEventDailyPoint"*/, v135, 0LL);
  if ( !byte_42E5CD2 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v136, v137, v138);
    byte_42E5CD2 = 1;
  }
  v139 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v139 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/,
    v139->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_42E5CD3 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v140, v141, v142);
    byte_42E5CD3 = 1;
  }
  v143 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v143 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/,
    v143->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_42E5CD4 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v144, v145, v146);
    byte_42E5CD4 = 1;
  }
  v147 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v147 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11700/*"SAVEKEY_PlayedTerminalEffects"*/,
    v147->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_42E4B5F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v148, v149, v150);
    byte_42E4B5F = 1;
  }
  v151 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v151 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11697/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v151->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B60 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v152, v153, v154);
    byte_42E4B60 = 1;
  }
  v155 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v155 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11698/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v155->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_42E5CD5 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v156, v157, v158);
    byte_42E5CD5 = 1;
  }
  v159 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v159 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11699/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v159->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD6 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v160, v161, v162);
    byte_42E5CD6 = 1;
  }
  v163 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v163 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11708/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v163->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11691/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11690/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_42E4B2C )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v164, v165, v166);
    byte_42E4B2C = 1;
  }
  v167 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v167 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11707/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v167->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_42E5CD7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v168, v169, v170);
    byte_42E5CD7 = 1;
  }
  v171 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v171 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11689/*"SAVEKEY_ClearEventQuestIds"*/,
    v171->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_42E4B49 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v172, v173, v174);
    byte_42E4B49 = 1;
  }
  v175 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v175 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v175->static_fields->_MapModelClearQuestId_k__BackingField;
  v179 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_42E4B4A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v176, v177, v178);
    byte_42E4B4A = 1;
  }
  v180 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v180 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v180->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v181 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v182 = System_String__Concat_44580072(v179, (System_String_o *)StringLiteral_707/*","*/, v181, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11696/*"SAVEKEY_MapModelClearQuestInfo"*/, v182, 0LL);
  if ( !byte_42E5CD8 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v183, v184, v185);
    byte_42E5CD8 = 1;
  }
  v186 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v186 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11692/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v186->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD9 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v187, v188, v189);
    byte_42E5CD9 = 1;
  }
  v190 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v190 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11701/*"SAVEKEY_PlayerGenderType"*/,
    v190->static_fields->_PlayerGenderType_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__SendClearQuestToAdManager(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x1
  bool IsMainStoryForQuestId; // w21
  AdManager_o *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w1

  if ( (byte_42E5C95 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, questPhase, (_DWORD)method, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v6, v7, v8);
    byte_42E5C95 = 1;
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
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v9);
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v12);
    if ( IsMainStoryForQuestId )
      v13 = 10;
    else
      v13 = 9;
    AdManager__TrackEvent(Instance, v13, 10, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SendOpenedQuestIdToAdManager(int32_t clearedQuestId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  TerminalPramsManager___c__DisplayClass630_0_o *v95; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v97; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v98; // x21
  int32_t v99; // w21
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v101; // x8
  struct TerminalPramsManager___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__630_0; // x21
  Il2CppObject *v104; // x22
  struct TerminalPramsManager___c_StaticFields *v105; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x19
  System_Func_int__BattleActionData_SideEffectData__o *v107; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v109; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x0
  TerminalPramsManager___c_c *v111; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x19
  struct TerminalPramsManager___c_StaticFields *v113; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__630_3; // x20
  Il2CppObject *v115; // x21
  struct TerminalPramsManager___c_StaticFields *v116; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v117; // x0
  TerminalPramsManager___c_c *v118; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x19
  struct TerminalPramsManager___c_StaticFields *v120; // x9
  System_Func_int__int__o *_9__630_4; // x20
  Il2CppObject *v122; // x21
  struct TerminalPramsManager___c_StaticFields *v123; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x0
  int32_t v125; // w0
  int32_t v126; // w19
  WarEntity_o *v127; // [xsp+8h] [xbp-38h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E5C96 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v26, v27, v28);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v29, v30, v31);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_QuestEntity___, v32, v33, v34);
    sub_B5D5C4(&Method_System_Func_QuestEntity__int___ctor__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Func_QuestEntity__bool___ctor__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Func_int__int___ctor__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Func_int__QuestEntity___ctor__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v47, v48, v49);
    sub_B5D5C4(&System_Func_QuestEntity__int__TypeInfo, v50, v51, v52);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v53, v54, v55);
    sub_B5D5C4(&System_Func_int__QuestEntity__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&System_Func_QuestEntity__bool__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&System_Func_int__int__TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v65, v66, v67);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v68, v69, v70);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v71, v72, v73);
    sub_B5D5C4(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_0__, v74, v75, v76);
    sub_B5D5C4(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_3__, v77, v78, v79);
    sub_B5D5C4(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_4__, v80, v81, v82);
    sub_B5D5C4(&Method_TerminalPramsManager___c__DisplayClass630_0__SendOpenedQuestIdToAdManager_b__1__, v83, v84, v85);
    sub_B5D5C4(&Method_TerminalPramsManager___c__DisplayClass630_0__SendOpenedQuestIdToAdManager_b__2__, v86, v87, v88);
    sub_B5D5C4(&TerminalPramsManager___c__DisplayClass630_0_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&TerminalPramsManager___c_TypeInfo, v92, v93, v94);
    byte_42E5C96 = 1;
  }
  entity = 0LL;
  v127 = 0LL;
  v95 = (TerminalPramsManager___c__DisplayClass630_0_o *)sub_B5D694(TerminalPramsManager___c__DisplayClass630_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass630_0___ctor(v95, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v95 )
      goto LABEL_50;
    v95->fields.questMaster = (struct QuestMaster_o *)Instance;
    sub_B5D560(&v95->fields);
    Instance = (DataManager_o *)v95->fields.questMaster;
    if ( !Instance )
      goto LABEL_50;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_50;
    v98 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
    if ( !v98 )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v98,
                                  &v127,
                                  (int32_t)Instance,
                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v127 )
      goto LABEL_50;
    v99 = *(&v127->fields.id + 1);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( TerminalPramsManager__IsMustPlayMainStory(v99, v97) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_50;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_50;
      v95->fields.userQuestMaster = (struct UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
      sub_B5D560(&v95->fields.userQuestMaster);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_50;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_50;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v101 = TerminalPramsManager___c_TypeInfo;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v101 = TerminalPramsManager___c_TypeInfo;
      }
      static_fields = v101->static_fields;
      _9__630_0 = static_fields->__9__630_0;
      if ( !_9__630_0 )
      {
        if ( (BYTE3(v101->vtable._0_Equals.methodPtr) & 4) != 0 && !v101->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v101);
          static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v104 = (Il2CppObject *)static_fields->__9;
        _9__630_0 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__630_0,
          v104,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_0__,
          (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
        v105 = TerminalPramsManager___c_TypeInfo->static_fields;
        v105->__9__630_0 = _9__630_0;
        sub_B5D560(&v105->__9__630_0);
      }
      v106 = System_Linq_Enumerable__Where_int_(
               QuestIdsByTargetAndOpenCondType,
               (System_Func_TSource__bool__o *)_9__630_0,
               (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
      v107 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v107,
        (Il2CppObject *)v95,
        Method_TerminalPramsManager___c__DisplayClass630_0__SendOpenedQuestIdToAdManager_b__1__,
        (const MethodInfo_2C29938 *)Method_System_Func_int__QuestEntity___ctor__);
      v108 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                    v106,
                                                                    (System_Func_TSource__TResult__o *)v107,
                                                                    (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v109 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v109,
        (Il2CppObject *)v95,
        Method_TerminalPramsManager___c__DisplayClass630_0__SendOpenedQuestIdToAdManager_b__2__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_QuestEntity__bool___ctor__);
      v110 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
               v108,
               (System_Func_TSource__bool__o *)v109,
               (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v111 = TerminalPramsManager___c_TypeInfo;
      v112 = v110;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v111 = TerminalPramsManager___c_TypeInfo;
      }
      v113 = v111->static_fields;
      _9__630_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v113->__9__630_3;
      if ( !_9__630_3 )
      {
        if ( (BYTE3(v111->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v111);
          v113 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v115 = (Il2CppObject *)v113->__9;
        _9__630_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_QuestEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__630_3,
          v115,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_3__,
          (const MethodInfo_2C2F87C *)Method_System_Func_QuestEntity__int___ctor__);
        v116 = TerminalPramsManager___c_TypeInfo->static_fields;
        v116->__9__630_3 = (struct System_Func_QuestEntity__int__o *)_9__630_3;
        sub_B5D560(&v116->__9__630_3);
      }
      v117 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
               v112,
               (System_Func_TSource__TResult__o *)_9__630_3,
               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v118 = TerminalPramsManager___c_TypeInfo;
      v119 = (System_Collections_Generic_IEnumerable_TSource__o *)v117;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v118 = TerminalPramsManager___c_TypeInfo;
      }
      v120 = v118->static_fields;
      _9__630_4 = v120->__9__630_4;
      if ( !_9__630_4 )
      {
        if ( (BYTE3(v118->vtable._0_Equals.methodPtr) & 4) != 0 && !v118->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v118);
          v120 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v122 = (Il2CppObject *)v120->__9;
        _9__630_4 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__630_4,
          v122,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_4__,
          (const MethodInfo_2C29044 *)Method_System_Func_int__int___ctor__);
        v123 = TerminalPramsManager___c_TypeInfo->static_fields;
        v123->__9__630_4 = _9__630_4;
        sub_B5D560(&v123->__9__630_4);
      }
      v124 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                    v119,
                                                                    (System_Func_TSource__TKey__o *)_9__630_4,
                                                                    (const MethodInfo_1CAF4CC *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v125 = System_Linq_Enumerable__FirstOrDefault_int_(
               v124,
               (const MethodInfo_1CAB94C *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v125 )
      {
        v126 = v125;
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v126, 0LL);
          return;
        }
LABEL_50:
        sub_B5D69C(Instance, v97);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  const MethodInfo *v9; // x1
  bool IsMainStoryForQuestId; // w21
  AdManager_o *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w1

  if ( (byte_42E5C94 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, questPhase, (_DWORD)method, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v6, v7, v8);
    byte_42E5C94 = 1;
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
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v9);
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v12);
    if ( IsMainStoryForQuestId )
      v13 = 10;
    else
      v13 = 9;
    AdManager__TrackEvent(Instance, v13, 9, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  QuestTree_o *SpotID; // x0
  __int64 v33; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  MapControl_QuestInfo_o *v38; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v40; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  bool v42; // w22
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int32_t v46; // w21
  TerminalPramsManager_c *v47; // x0
  TerminalPramsManager_c *v48; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  TerminalPramsManager_c *v52; // x0
  int32_t v53; // w21
  TerminalPramsManager_c *v54; // x0
  int32_t questPhase; // w21
  int64_t endTime; // x20
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w2
  __int64 v61; // x3
  QuestTree_o *v62; // x20
  WarEntity_o *WarEntityByWarID; // x0
  TerminalPramsManager_c *v64; // x0
  int v65; // w8
  TerminalSceneComponent_c *v66; // x0
  UnityEngine_Object_o *mInstance; // x20
  int v68; // w2
  __int64 v69; // x3
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Object_o *v71; // x20
  int v72; // w2
  __int64 v73; // x3
  System_Collections_Generic_List_QuestReleaseEntity__c *v74; // x8
  ScrTerminalListTop_o *v75; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v76; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v78; // x8
  const MethodInfo *v79; // x0
  __int64 v80; // [xsp+0h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v82; // 0:x0.8

  if ( (byte_42E5C59 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Nullable_int__GetValueOrDefault__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Nullable_int___ctor__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v29, v30, v31);
    byte_42E5C59 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  if ( SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    SpotID = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !SpotID )
      goto LABEL_194;
    QuestInfo = QuestTree__GetQuestInfo(SpotID, questId, 0LL);
    if ( !QuestInfo )
      return;
    v38 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B22 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v35, v36, v37);
      byte_42E4B22 = 1;
    }
    v40 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v40 = TerminalPramsManager_TypeInfo;
    }
    v40->static_fields->_WarId_k__BackingField = warId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    SpotID = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v38, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_194;
    v42 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            (int32_t)SpotID,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    v46 = MapControl_QuestInfo__GetSpotID(v38, 0LL);
    if ( v42 )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        v47 = TerminalPramsManager_TypeInfo;
LABEL_42:
        j_il2cpp_runtime_class_init_0(v47);
      }
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B55 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v43, v44, v45);
        byte_42E4B55 = 1;
      }
      v48 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v48 = TerminalPramsManager_TypeInfo;
      }
      v48->static_fields->_SpotId_k__BackingField = v46;
      WarInfo_k__BackingField = v38->fields._WarInfo_k__BackingField;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL)) != 0LL )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v82 = (System_Nullable_int__o)&v80;
        v80 = 0LL;
        System_Nullable_int____ctor(
          v82,
          parentBlankEarthSpotId,
          (const MethodInfo_234B2F0 *)Method_System_Nullable_int___ctor__);
        v46 = v80;
      }
      else
      {
        v46 = 0;
      }
      v47 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_42;
      }
    }
    if ( !byte_42E5CAB )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v43, v44, v45);
      byte_42E5CAB = 1;
    }
    v52 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v52 = TerminalPramsManager_TypeInfo;
    }
    v52->static_fields->_BlankEarthSpotId_k__BackingField = v46;
    v53 = v38->fields.questId;
    if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v52);
    if ( !byte_42E4B24 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v43, v44, v45);
      byte_42E4B24 = 1;
    }
    v54 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_QuestId_k__BackingField = v53;
    questPhase = v38->fields.questPhase;
    if ( !byte_42E4B25 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v43, v44, v45);
      v54 = TerminalPramsManager_TypeInfo;
      byte_42E4B25 = 1;
    }
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_PhaseCnt_k__BackingField = questPhase;
    endTime = v38->fields.endTime;
    if ( !byte_42E4B72 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v43, v44, v45);
      v54 = TerminalPramsManager_TypeInfo;
      byte_42E4B72 = 1;
    }
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_EndTime_k__BackingField = endTime;
    if ( !byte_42E4B6B )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v43, v44, v45);
      v54 = TerminalPramsManager_TypeInfo;
      byte_42E4B6B = 1;
    }
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    if ( !SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
      goto LABEL_197;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v62 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B20 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v33, v60, v61);
      byte_42E4B20 = 1;
    }
    SpotID = (QuestTree_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      SpotID = (QuestTree_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v62 )
      goto LABEL_194;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v62, HIDWORD(SpotID[1].fields.questReleaseEntList->klass), 0LL);
    if ( WarEntityByWarID )
    {
      if ( WarEntity__IsFolder(WarEntityByWarID, 0LL) )
      {
        if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B28 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v57, v58, v59);
          byte_42E4B28 = 1;
        }
        v64 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v64 = TerminalPramsManager_TypeInfo;
        }
        v65 = 3;
      }
      else
      {
        if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B28 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v57, v58, v59);
          byte_42E4B28 = 1;
        }
        v64 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v64 = TerminalPramsManager_TypeInfo;
        }
        v65 = 2;
      }
    }
    else
    {
LABEL_197:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B28 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v57, v58, v59);
        byte_42E4B28 = 1;
      }
      v64 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v64 = TerminalPramsManager_TypeInfo;
      }
      v65 = 1;
    }
    v64->static_fields->_DispState_k__BackingField = v65;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v57, v58, v59);
      byte_42E4B1E = 1;
    }
    v66 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v66 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v66->static_fields->mInstance;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
      goto LABEL_184;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v33, v68, v69);
      byte_42E4B1E = 1;
    }
    SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = SpotID[1].fields.questReleaseEntList->klass;
    if ( klass )
    {
      v71 = *(UnityEngine_Object_o **)&klass->_2.element_size;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v71, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v33, v72, v73);
          byte_42E4B1E = 1;
        }
        SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v74 = SpotID[1].fields.questReleaseEntList->klass;
        if ( !v74 )
          goto LABEL_194;
        v75 = *(ScrTerminalListTop_o **)&v74->_2.element_size;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B20 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v33, v72, v73);
          byte_42E4B20 = 1;
        }
        SpotID = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          SpotID = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v75 )
          goto LABEL_194;
        ScrTerminalListTop__RequestChangeTerminalListBG(v75, HIDWORD(SpotID[1].fields.questReleaseEntList->klass), 0LL);
      }
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v33, v72, v73);
        byte_42E4B1E = 1;
      }
      SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
      }
      v76 = SpotID[1].fields.questReleaseEntList->klass;
      if ( v76 )
      {
        genericContainerHandle = (UnityEngine_Object_o *)v76->_2.genericContainerHandle;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(genericContainerHandle, 0LL, 0LL) )
          goto LABEL_184;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v33, v68, v69);
          byte_42E4B1E = 1;
        }
        SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v78 = SpotID[1].fields.questReleaseEntList->klass;
        if ( v78 )
        {
          SpotID = (QuestTree_o *)v78->_2.genericContainerHandle;
          if ( SpotID )
          {
            TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)SpotID, 0LL);
LABEL_184:
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_42E4B29 )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, v33, v68, v69);
              byte_42E4B29 = 1;
            }
            v79 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v79 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
            }
            BYTE6(v79[2].klass->vtable[23].method) = 1;
            TerminalPramsManager__Save_SaveData(v79);
            return;
          }
        }
      }
    }
LABEL_194:
    sub_B5D69C(SpotID, v33);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__SetFolderLastClickedIdx(int32_t warId, int32_t idx, const MethodInfo *method)
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
  TerminalPramsManager_c *v18; // x0
  System_Collections_Generic_Dictionary_int__int__o *v19; // x21
  TerminalPramsManager_c *v20; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  TerminalPramsManager_c *v26; // x0

  if ( (byte_42E5C8A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, idx, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    byte_42E5C8A = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  if ( !v18->static_fields->folderLastIdxs )
  {
    v19 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v19,
      (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v20 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v20->static_fields;
    static_fields->folderLastIdxs = v19;
    sub_B5D560(&static_fields->folderLastIdxs);
    v18 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v18->static_fields->folderLastIdxs;
  if ( !folderLastIdxs
    || (System_Collections_Generic_Dictionary_int__int___Remove(
          folderLastIdxs,
          warId,
          (const MethodInfo_2F0C750 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_B5D69C(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_42E5CB1 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v23, v24, v25);
    byte_42E5CB1 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
}


void __fastcall TerminalPramsManager__SetQuestReleasedFocusState(
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalPramsManager_c *v6; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v8; // x1

  if ( (byte_42E5C90 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, state, (_DWORD)method, v3);
    byte_42E5C90 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v6);
  if ( !QuestFocusStateManager )
    sub_B5D69C(0LL, v8);
  QuestFocusStateManager__SetFocusState(QuestFocusStateManager, questId, state, 0LL);
}


void __fastcall TerminalPramsManager__SetQuestRewardInfo(
        BattleResultComponent_resultData_array *result,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct QuestRewardInfo_array **p_mQuestRewardInfos; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  BattleResultComponent_resultData_o *v9; // x8
  struct QuestRewardInfo_array *rewardInfos; // x20
  TerminalPramsManager_c *v11; // x0
  struct QuestRewardInfo_array **v12; // x0
  TerminalPramsManager_c *v13; // x0
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0
  BattleResultComponent_resultData_o *v15; // x8
  struct QuestRewardInfo_array *resultQuestPhaseRewardInfos; // x20
  TerminalPramsManager_c *v17; // x0
  struct QuestRewardInfo_array **v18; // x0
  TerminalPramsManager_c *v19; // x0
  struct BattleDropItem_array **p_mQuestResultAfterEventRewardInfos; // x0
  BattleResultComponent_resultData_o *v21; // x8
  struct BattleDropItem_array *resultAfterEventRewardInfos; // x19
  TerminalPramsManager_c *v23; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  __int64 v25; // x0

  if ( (byte_42E5C93 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C93 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = &v5->static_fields->mQuestRewardInfos;
  *p_mQuestRewardInfos = 0LL;
  sub_B5D560(p_mQuestRewardInfos);
  if ( !result )
    goto LABEL_38;
  if ( !result->max_length )
    goto LABEL_39;
  v9 = result->m_Items[0];
  if ( !v9 )
    goto LABEL_38;
  rewardInfos = v9->fields.rewardInfos;
  if ( rewardInfos && *(_QWORD *)&rewardInfos->max_length )
  {
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v12 = &v11->static_fields->mQuestRewardInfos;
    *v12 = rewardInfos;
    sub_B5D560(v12);
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = &v13->static_fields->mQuestPhaseRewardInfos;
  *p_mQuestPhaseRewardInfos = 0LL;
  sub_B5D560(p_mQuestPhaseRewardInfos);
  if ( !result->max_length )
    goto LABEL_39;
  v15 = result->m_Items[0];
  if ( !v15 )
    goto LABEL_38;
  resultQuestPhaseRewardInfos = v15->fields.resultQuestPhaseRewardInfos;
  if ( resultQuestPhaseRewardInfos && *(_QWORD *)&resultQuestPhaseRewardInfos->max_length )
  {
    v17 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v18 = &v17->static_fields->mQuestPhaseRewardInfos;
    *v18 = resultQuestPhaseRewardInfos;
    sub_B5D560(v18);
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = &v19->static_fields->mQuestResultAfterEventRewardInfos;
  *p_mQuestResultAfterEventRewardInfos = 0LL;
  sub_B5D560(p_mQuestResultAfterEventRewardInfos);
  if ( !result->max_length )
  {
LABEL_39:
    v25 = sub_B5D6C8(v7);
    sub_B5D668(v25, 0LL);
  }
  v21 = result->m_Items[0];
  if ( !v21 )
LABEL_38:
    sub_B5D69C(v7, v8);
  resultAfterEventRewardInfos = v21->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && *(_QWORD *)&resultAfterEventRewardInfos->max_length )
  {
    v23 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v23 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v23->static_fields;
    static_fields->mQuestResultAfterEventRewardInfos = resultAfterEventRewardInfos;
    sub_B5D560(&static_fields->mQuestResultAfterEventRewardInfos);
  }
}


void __fastcall TerminalPramsManager__SetWarStartedId(int32_t war_id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TerminalPramsManager_c *v8; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = war_id;
  if ( (byte_42E5C88 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v5, v6, v7);
    byte_42E5C88 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !TerminalPramsManager__IsWarStartedId(war_id, method) )
  {
    v8 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    mTerminalWarStartedIds = v8->static_fields->mTerminalWarStartedIds;
    v10 = System_Int32__ToString((int32_t)&v14, 0LL);
    v11 = System_String__Concat_44580072(mTerminalWarStartedIds, v10, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v11;
    sub_B5D560(&static_fields->mTerminalWarStartedIds);
    TerminalPramsManager__Save_SaveData(v13);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C65 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_13784/*"TerminalSpotId"*/, v4, v5, v6);
    byte_42E5C65 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B2F )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B2F = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13784/*"TerminalSpotId"*/,
    v7->static_fields->_SpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  TerminalPramsManager_c *v10; // x0
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0

  if ( (byte_42E5C6B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/, v7, v8, v9);
    byte_42E5C6B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD2 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CD2 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13768/*"TerminalBeforeEventActivityPoint"*/,
    v10->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_42E5CD3 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E5CD3 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13769/*"TerminalBeforeEventActivityPointGauge"*/,
    v14->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C70 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11703/*"SAVEKEY_TerminalConquestInfoDisp"*/, v4, v5, v6);
    byte_42E5C70 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11703/*"SAVEKEY_TerminalConquestInfoDisp"*/, v7->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  TerminalPramsManager_c *v16; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v18; // x0
  TerminalPramsManager_c *v19; // x0

  if ( (byte_42E5C6F & 1) == 0 )
  {
    sub_B5D5C4(&EventConquestInfo___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_11704/*"SAVEKEY_TerminalConquestInfos"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_11703/*"SAVEKEY_TerminalConquestInfoDisp"*/, v13, v14, v15);
    byte_42E5C6F = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v16->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      eventConquestInfos = TerminalPramsManager_TypeInfo->static_fields->eventConquestInfos;
    }
  }
  else
  {
    eventConquestInfos = (struct EventConquestInfo_array *)sub_B5D5DC(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v18 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11704/*"SAVEKEY_TerminalConquestInfos"*/, v18, 0LL);
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11703/*"SAVEKEY_TerminalConquestInfoDisp"*/,
    v19->static_fields->eventConquestInfoDisp,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  EventHarvestGrowthInfo_o *eventHarvestGrowthInfo; // x19
  System_String_o *v15; // x0

  if ( (byte_42E5C71 & 1) == 0 )
  {
    sub_B5D5C4(&EventHarvestGrowthInfo_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_11705/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v10, v11, v12);
    byte_42E5C71 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = v13->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      eventHarvestGrowthInfo = TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (EventHarvestGrowthInfo_o *)sub_B5D694(EventHarvestGrowthInfo_TypeInfo);
    EventHarvestGrowthInfo___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v15 = JsonManager__toJson((Il2CppObject *)eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11705/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v15, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v13; // x0

  if ( (byte_42E5C6D & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_13770/*"TerminalBeforeEventSubmarinePointData"*/, v7, v8, v9);
    byte_42E5C6D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CDC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CDC = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( v10->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    if ( !byte_42E5CDC )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
      byte_42E5CDC = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    BeforeEventSubmarineSaveData_k__BackingField = (Il2CppObject *)v11->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__toJson(BeforeEventSubmarineSaveData_k__BackingField, 0, 0, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13770/*"TerminalBeforeEventSubmarinePointData"*/, v13, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C79 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11707/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v4, v5, v6);
    byte_42E5C79 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B2C )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E4B2C = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11707/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v7->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42E5C78 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_11708/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v4, v5, v6);
    byte_42E5C78 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CD6 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5CD6 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11708/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v7->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42E5C6A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13790/*"TerminalTransitionInfoVoiceAssetName"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_13789/*"TerminalTransitionInfoMissionId"*/, v5, v6, v7);
    byte_42E5C6A = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13789/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13790/*"TerminalTransitionInfoVoiceAssetName"*/,
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *klass; // x0
  Il2CppObject *v25; // x8
  System_Collections_Generic_List_int__o *v26; // x21
  int v27; // w2
  __int64 v28; // x3
  Il2CppObject *v29; // x8
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5CA0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, day, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
    byte_42E5CA0 = 1;
  }
  value = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CEC )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, day, (_DWORD)method, v3);
    byte_42E5CEC = 1;
  }
  klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
  }
  v25 = klass[2].fields.entries->m_Items[16].fields.value;
  if ( !v25 )
    goto LABEL_30;
  klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v25[1].klass;
  if ( !klass )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)klass,
          eventId,
          &value,
          (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v26,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v26;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CEC )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, day, v27, v28);
      byte_42E5CEC = 1;
    }
    klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
    }
    v29 = klass[2].fields.entries->m_Items[16].fields.value;
    if ( !v29 )
      goto LABEL_30;
    klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v29[1].klass;
    if ( !klass )
      goto LABEL_30;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      klass,
      eventId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    goto LABEL_28;
  }
  klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_int___Contains(
          (System_Collections_Generic_List_int__o *)value,
          day,
          (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
LABEL_28:
    klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)value;
    if ( value )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)value,
        day,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      return;
    }
LABEL_30:
    sub_B5D69C(klass, *(_QWORD *)&day);
  }
}


int32_t __fastcall TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B8B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B8B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_AfterActionFocusQuestId_k__BackingField;
}


BattleSetupInfo_o *__fastcall TerminalPramsManager__get_BattleSetupKeep(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BA9 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BA9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_BattleSetupKeep_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeClearQuest(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v11; // x1
  int v12; // w2
  __int64 v13; // x3
  SceneRootComponent_c *klass; // x8
  __int64 v15; // x8
  SceneRootComponent_c *v16; // x8
  __int64 v17; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v19; // x0

  if ( (byte_42E5BDB & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v7, v8, v9);
    byte_42E5BDB = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v11, v12, v13);
      byte_42E4B1E = 1;
    }
    Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[2].fields.targetRoot->klass;
    if ( !klass )
      goto LABEL_37;
    v15 = *(_QWORD *)&klass->_2.static_fields_size;
    if ( !v15 )
      goto LABEL_37;
    if ( *(_DWORD *)(v15 + 404) )
    {
      if ( (Instance[3].fields.fadeType & 0x4000000) != 0 && !Instance[2].fields.fadeType )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v11, v12, v13);
        byte_42E4B1E = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v16 = Instance[2].fields.targetRoot->klass;
      if ( v16 )
      {
        v17 = *(_QWORD *)&v16->_2.static_fields_size;
        if ( v17 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v17 + 404);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_37:
      sub_B5D69C(Instance, v11);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E4B33 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  p_QuestId_k__BackingField = &v19->static_fields->_QuestId_k__BackingField;
  return *p_QuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeEventActivityPoint(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BF6 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BF6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_BeforeEventActivityPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeEventActivityPointGauge(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BF8 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BF8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
}


EventSaveData_o *__fastcall TerminalPramsManager__get_BeforeEventSubmarineSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BFC & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BFC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_BeforeTimeEventDailyPoint(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BEA & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BEA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthAfterActionFocusSpotId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C1C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C1C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthRank(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C20 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C20 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_BlankEarthRank_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthSpotId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C1A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C1A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_BlankEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *__fastcall TerminalPramsManager__get_BlankEarthTransformData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C1E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C1E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_BlankEarthTransformData_k__BackingField;
}


CommonUI_CampaignDirectBonusData_array *__fastcall TerminalPramsManager__get_CampaignDirectBonus(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BC5 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BC5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_CampaignDirectBonus_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_ClearEventQuestIds(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BF4 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BF4 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_ClearEventQuestIds_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleEventId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BB5 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BB5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_DataLostBattleEventId_k__BackingField;
}


float __fastcall TerminalPramsManager__get_DataLostBattleResetFadeInTime(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BBD & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BBD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_DataLostBattleResetFadeInTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleWarId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BB7 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BB7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_DataLostBattleWarId_k__BackingField;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B6B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B6B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_DispState_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_EndTime(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BAB & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BAB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_EndTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventActivityPointEffectState(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BFA & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BFA = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_EventActivityPointEffectState_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventBoardGameSquareIndex(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C02 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C02 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_EventBoardGameSquareIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventDailyPointEventId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BEC & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BEC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_EventDailyPointEventId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventDailyPointItem(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BE8 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BE8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_EventDailyPointItem_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventMuralId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B97 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B97 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_EventMuralId_k__BackingField;
}


EventRaidDefeatedEffectInfo_o *__fastcall TerminalPramsManager__get_EventRaidDefeatedEffectInfo(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BFE & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BFE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventUIEffectClearQuestId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C26 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C26 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_EventUIEffectClearQuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C3B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C3B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsAutoFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoNoSe(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C3D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C3D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsAutoNoSe_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoOpenMasterMission(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C57 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C57 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->mIsAutoOpenMasterMission;
}


bool __fastcall TerminalPramsManager__get_IsAutoResume(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C35 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C35 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsAutoResume_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoShortcut(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C37 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C37 = 1;
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


bool __fastcall TerminalPramsManager__get_IsBlankEarthShortcutMoving(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C22 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C22 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsBlankEarthShortcutMoving_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsCheckHomeExpirationDateEventMap(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C3F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C3F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->isCheckHomeExpirationDateEventMap;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleAutoReset(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BB3 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BB3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleNoticePause(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BBF & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BBF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsDataLostBattleNoticePause_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleResetFadeIn(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BBB & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BBB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_AutoWebView(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B8D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B8D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsDispDone_AutoWebView_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_UIStandFigure(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B8F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B8F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsDispDone_UIStandFigure_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispOnly(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B9D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B9D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsDispOnly_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispUIStandFigure(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B91 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B91 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsDispUIStandFigure_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDoneShortcut(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B77 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B77 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsDoneShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsEventBoardGameDiceBtnActive(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C04 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C04 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsForceFocusTerminalQuestId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B7F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B7F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsForceFocusTerminalQuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsFromRecollectionBoard(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B7D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B7D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsFromRecollectionBoard_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsInvisibleConnectAndLoad(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C2B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C2B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->isInvisibleConnectAndLoad;
}


bool __fastcall TerminalPramsManager__get_IsMapReturnFolder(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C39 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C39 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsMapReturnFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsOrdealCallWarClear(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B95 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B95 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsOrdealCallWarClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPhaseClear(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B9B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B9B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsPhaseClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayEventBoardGameArrivalEffectAuto(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BA1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BA1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayEventBoardGameDiceBtnActiveEffect(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C06 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C06 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayScriptWithMap(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B9F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B9F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsPlayScriptWithMap_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayTerminalEffectDisappear(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C14 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C14 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_IsPlayTerminalEffectDisappearWarId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C16 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C16 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayTerminalEffectNt2AfterAction(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C18 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C18 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayedEntryBanner(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BC1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BC1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsPlayedEntryBanner_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsQuestClear(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B99 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B99 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsQuestClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsScriptDisp(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BA3 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BA3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsScriptDisp_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsSkipNoticeLoginQuestAtOnce(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C51 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C51 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsStopMasterFaceOverwrite(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BB9 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BB9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsStopMasterFaceOverwrite_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsTopLastIdxNextBoardRequest(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C41 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C41 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarBoardClear(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BAD & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BAD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsWarBoardClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarClear(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B93 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B93 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_IsWarClear_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastPlayedFreeQuestSpotId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B87 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B87 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastPlayedQuestId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B85 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B85 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_LastPlayedQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastSelectQuestIndex(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B89 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B89 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_LastSelectQuestIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearPhaseCount(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BB1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BB1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_MapModelClearPhaseCount_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearQuestId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BAF & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BAF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_MapModelClearQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MessageDispType(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BA5 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BA5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_MessageDispType_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_NoticeLastModified(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C24 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C24 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_NoticeLastModified_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PhaseCnt(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B75 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B75 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_PhaseCnt_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_PlayedTerminalEffects(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C12 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C12 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_PlayedTerminalEffects_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PlayerGenderType(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BC3 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BC3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_PlayerGenderType_k__BackingField;
}


QuestFocusStateManager_o *__fastcall TerminalPramsManager__get_QuestFocusStateManager(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  QuestFocusStateManager_o *v8; // x19
  TerminalPramsManager_c *v9; // x0
  struct QuestFocusStateManager_o **p_questFocusStateManager; // x0

  if ( (byte_42E5C2A & 1) == 0 )
  {
    sub_B5D5C4(&QuestFocusStateManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    byte_42E5C2A = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( !v7->static_fields->questFocusStateManager )
  {
    v8 = (QuestFocusStateManager_o *)sub_B5D694(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v8, 0LL);
    v9 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = &v9->static_fields->questFocusStateManager;
    *p_questFocusStateManager = v8;
    sub_B5D560(p_questFocusStateManager);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  return v7->static_fields->questFocusStateManager;
}


int32_t __fastcall TerminalPramsManager__get_QuestId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B73 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B73 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_QuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestMessageScriptQuestId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C43 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C43 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_QuestMessageScriptQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestMessageScriptQuestPhase(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C45 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C45 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_QuestMessageScriptQuestPhase_k__BackingField;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall TerminalPramsManager__get_QuestRandomGroupList(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C10 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C10 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_QuestRandomGroupList_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestReleaseFocusQuestId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B81 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B81 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_QuestReleaseFocusQuestId_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_QuestWindowMessage(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BA7 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BA7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_QuestWindowMessage_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_SceneMoveQuestClearedInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C28 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C28 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
}


BannerEntity_o *__fastcall TerminalPramsManager__get_SelectedBannerEntity(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B83 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B83 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_SelectedBannerEntity_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SelectedRecollectionWarId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B7B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B7B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_SelectedRecollectionWarId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SelectedStoryQuestId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B79 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B79 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_SelectedStoryQuestId_k__BackingField;
}


SpecifiedSceneInfo_o *__fastcall TerminalPramsManager__get_SpecifiedChangeSceneInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BC9 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BC9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SpotId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B71 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B71 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_SpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SummonType(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B6F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B6F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_SummonType_k__BackingField;
}


BattleScriptRootComponent_TalkScriptInfo_o *__fastcall TerminalPramsManager__get_TalkScriptInfo(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C47 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C47 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_TalkScriptInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusEventId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BF0 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BF0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_TimeStatusEventId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusLoopCount(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BF2 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BF2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_TimeStatusLoopCount_k__BackingField;
}


WarBoardDataEntity_o *__fastcall TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C08 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C08 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_WarBoardData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_WarId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5B6D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5B6D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_WarId_k__BackingField;
}


float __fastcall TerminalPramsManager__get_ZoomSize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  TerminalPramsManager_c *v7; // x0
  MapZoom_c *v8; // x8
  float ZOOM_DEFAULT; // w20

  if ( (byte_42E5BC7 & 1) == 0 )
  {
    sub_B5D5C4(&MapZoom_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v4, v5, v6);
    byte_42E5BC7 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  if ( v7->static_fields->mZoomSize <= 0.0 )
  {
    v8 = MapZoom_TypeInfo;
    if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v8 = MapZoom_TypeInfo;
      v7 = TerminalPramsManager_TypeInfo;
    }
    ZOOM_DEFAULT = v8->static_fields->ZOOM_DEFAULT;
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->mZoomSize = ZOOM_DEFAULT;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  return v7->static_fields->mZoomSize;
}


EventDailyPoint_o *__fastcall TerminalPramsManager__get_eventDailyPoint(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BE6 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BE6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_eventDailyPoint_k__BackingField;
}


EventPointWinReward_o *__fastcall TerminalPramsManager__get_eventPointWinReward(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BD1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BD1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_eventPointWinReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_eventPointWinType(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BCF & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BCF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_eventPointWinType_k__BackingField;
}


EventRaceBoostInfo_o *__fastcall TerminalPramsManager__get_eventRaceBoost(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BD3 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BD3 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_eventRaceBoost_k__BackingField;
}


EventTowerReward_o *__fastcall TerminalPramsManager__get_eventTowerReward(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BDC & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BDC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_eventTowerReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_friendshipQuestDialogOpenId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C4B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C4B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_friendshipQuestDialogOpenId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isFortificationCheck(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C0C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C0C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_isFortificationCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isIncomingCall(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C00 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C00 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_isIncomingCall_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isPlayRiverActionCheck(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C0E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C0E = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_isPlayRiverActionCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isPlayingQuestPhaseRewardEffect(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C33 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C33 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isQuestRewardSetted(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C31 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C31 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_isQuestRewardSetted_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isWarBoardPlay(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C0A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C0A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_isWarBoardPlay_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_limitCountUnSealQuestId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C4D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C4D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_limitCountUnSealQuestId_k__BackingField;
}


LimitImageAnnounce_array *__fastcall TerminalPramsManager__get_limitImageAnnounces(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C49 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C49 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_limitImageAnnounces_k__BackingField;
}


UserSuperBossEntity_array *__fastcall TerminalPramsManager__get_oldPersonalBoss(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BCD & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BCD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_oldPersonalBoss_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_oldQuestIdForHeaderEvent(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BD9 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BD9 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_oldQuestIdForHeaderEvent_k__BackingField;
}


UserSuperBossEntity_array *__fastcall TerminalPramsManager__get_oldSuperBoss(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BCB & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BCB = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_oldSuperBoss_k__BackingField;
}


CostumeReleaseAnnounce_array *__fastcall TerminalPramsManager__get_questClearCostumeGet(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BD7 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BD7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_questClearCostumeGet_k__BackingField;
}


CostumeReleaseAnnounce_array *__fastcall TerminalPramsManager__get_questClearCostumeRelease(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BD5 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BD5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_questClearCostumeRelease_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultBoostItemRewardInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BE0 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BE0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_resultBoostItemRewardInfo_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultEventBoardGameTokenRewardInfo(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BE2 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BE2 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultEventTowerRewardInfo(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BDE & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BDE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_resultEventTowerRewardInfo_k__BackingField;
}


TimeStatusRecord_o *__fastcall TerminalPramsManager__get_timeStatusRecord(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BE4 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BE4 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_timeStatusRecord_k__BackingField;
}


UpdateProfileDialogInfoEntity_array *__fastcall TerminalPramsManager__get_updateProfileInfoEntity(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C4F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C4F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_updateProfileInfoEntity_k__BackingField;
}


WarClearReward_array *__fastcall TerminalPramsManager__get_warClearReward(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5BEE & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5BEE = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->_warClearReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__mfGetSceneStatus(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0

  if ( (byte_42E5C5D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v1, v2, v3);
    byte_42E5C5D = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  return v4->static_fields->meSceneStatus;
}


void __fastcall TerminalPramsManager__mfSetSceneStatus(int32_t eSceneStatus, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C5C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C5C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->meSceneStatus = eSceneStatus;
}


void __fastcall TerminalPramsManager__set_AfterActionFocusQuestId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B8C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B8C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_AfterActionFocusQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BattleSetupKeep(BattleSetupInfo_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42E5BAA & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BAA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_B5D560(&static_fields->_BattleSetupKeep_k__BackingField);
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BF7 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BF7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_BeforeEventActivityPoint_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPointGauge(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BF9 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BF9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_BeforeEventActivityPointGauge_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BeforeEventSubmarineSaveData(
        EventSaveData_o *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BFD & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BFD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_B5D560(&static_fields->_BeforeEventSubmarineSaveData_k__BackingField);
}


void __fastcall TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BEB & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BEB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthAfterActionFocusSpotId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C1D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C1D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthRank(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C21 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C21 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_BlankEarthRank_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthSpotId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C1B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C1B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_BlankEarthSpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_BlankEarthTransformData(
        BlankEarthTransform_o *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5C1F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C1F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_B5D560(&static_fields->_BlankEarthTransformData_k__BackingField);
}


void __fastcall TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42E5BC6 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BC6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_B5D560(&static_fields->_CampaignDirectBonus_k__BackingField);
}


void __fastcall TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BF5 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BF5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_B5D560(&static_fields->_ClearEventQuestIds_k__BackingField);
}


void __fastcall TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BB6 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BB6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_DataLostBattleResetFadeInTime(float value, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  TerminalPramsManager_c *v6; // x0

  if ( (byte_42E5BBE & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v2, v3, v4);
    byte_42E5BBE = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_DataLostBattleWarId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BB8 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BB8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DataLostBattleWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsBuildInfoDisp(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C30 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C30 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->mDebug_IsBuildInfoDisp = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsDummyErrorSelect(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C2F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C2F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->mDebug_IsDummyErrorSelect = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsQuestReleaseAll(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C2D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C2D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->mDebug_IsQuestReleaseAll = value;
}


void __fastcall TerminalPramsManager__set_Debug_IsWarStartActionSkip(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C2E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C2E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->mDebug_IsWarStartActionSkip = value;
}


void __fastcall TerminalPramsManager__set_DispState(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B6C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B6C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_DispState_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EndTime(int64_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BAC & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BAC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_EndTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventActivityPointEffectState(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BFB & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BFB = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_EventActivityPointEffectState_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventBoardGameSquareIndex(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C03 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C03 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_EventBoardGameSquareIndex_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventDailyPointEventId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BED & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BED = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_EventDailyPointEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventDailyPointItem(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BE9 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BE9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_EventDailyPointItem_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventMuralId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B98 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B98 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_EventMuralId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_EventRaidDefeatedEffectInfo(
        EventRaidDefeatedEffectInfo_o *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BFF & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BFF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_B5D560(&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C27 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C27 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_EventUIEffectClearQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoFolder(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C3C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C3C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoFolder_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoNoSe(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C3E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C3E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoNoSe_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoOpenMasterMission(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C58 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C58 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B29 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = value;
  v5->static_fields->mIsAutoOpenMasterMission = value;
}


void __fastcall TerminalPramsManager__set_IsAutoResume(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C36 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C36 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsAutoShortcut(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C38 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C38 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoShortcut_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsBlankEarthShortcutMoving(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C23 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C23 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsBlankEarthShortcutMoving_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsCheckHomeExpirationDateEventMap(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C40 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C40 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->isCheckHomeExpirationDateEventMap = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleAutoReset(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BB4 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BB4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDataLostBattleAutoReset_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleNoticePause(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BC0 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BC0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDataLostBattleNoticePause_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDataLostBattleResetFadeIn(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BBC & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BBC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispDone_AutoWebView(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B8E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B8E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDispDone_AutoWebView_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispDone_UIStandFigure(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B90 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B90 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDispDone_UIStandFigure_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispOnly(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B9E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B9E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDispOnly_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDispUIStandFigure(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B92 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B92 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDispUIStandFigure_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsDoneShortcut(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B78 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B78 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDoneShortcut_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsEventBoardGameDiceBtnActive(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C05 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C05 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsForceFocusTerminalQuestId(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B80 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B80 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsFromRecollectionBoard(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B7E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B7E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsFromRecollectionBoard_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsInvisibleConnectAndLoad(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C2C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C2C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->isInvisibleConnectAndLoad = value;
}


void __fastcall TerminalPramsManager__set_IsMapReturnFolder(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C3A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C3A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsMapReturnFolder_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsOrdealCallWarClear(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B96 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B96 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsOrdealCallWarClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPhaseClear(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B9C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B9C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPhaseClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayEventBoardGameArrivalEffectAuto(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BA2 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BA2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayEventBoardGameDiceBtnActiveEffect(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C07 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C07 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayScriptWithMap(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BA0 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BA0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPlayScriptWithMap_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectDisappear(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C15 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C15 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectDisappearWarId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C17 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C17 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayTerminalEffectNt2AfterAction(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C19 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C19 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsPlayedEntryBanner(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BC2 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BC2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPlayedEntryBanner_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsQuestClear(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B9A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B9A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsQuestClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsScriptDisp(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BA4 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BA4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsScriptDisp_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsSkipNoticeLoginQuestAtOnce(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C52 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C52 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsStopMasterFaceOverwrite(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BBA & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BBA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsTopLastIdxNextBoardRequest(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C42 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C42 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsWarBoardClear(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BAE & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BAE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsWarBoardClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsWarClear(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B94 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B94 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsWarClear_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastPlayedFreeQuestSpotId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B88 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B88 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastPlayedQuestId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B86 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B86 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastPlayedQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_LastSelectQuestIndex(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B8A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B8A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_LastSelectQuestIndex_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MapModelClearPhaseCount(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BB2 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BB2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_MapModelClearPhaseCount_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MapModelClearQuestId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BB0 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BB0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_MapModelClearQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_MessageDispType(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BA6 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BA6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_MessageDispType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_NoticeLastModified(System_String_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5C25 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C25 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_B5D560(&static_fields->_NoticeLastModified_k__BackingField);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B76 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B76 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_PhaseCnt_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_PlayedTerminalEffects(System_String_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5C13 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C13 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_B5D560(&static_fields->_PlayedTerminalEffects_k__BackingField);
}


void __fastcall TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BC4 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BC4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_PlayerGenderType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B74 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B74 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_QuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestMessageScriptQuestId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C44 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C44 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_QuestMessageScriptQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestMessageScriptQuestPhase(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C46 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C46 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestRandomGroupList(
        System_Collections_Generic_Dictionary_int__int__o *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5C11 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C11 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_B5D560(&static_fields->_QuestRandomGroupList_k__BackingField);
}


void __fastcall TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B82 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B82 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_QuestReleaseFocusQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestWindowMessage(System_String_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42E5BA8 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BA8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_B5D560(&static_fields->_QuestWindowMessage_k__BackingField);
}


void __fastcall TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5C29 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C29 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_B5D560(&static_fields->_SceneMoveQuestClearedInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_SelectedBannerEntity(BannerEntity_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42E5B84 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B84 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_B5D560(&static_fields->_SelectedBannerEntity_k__BackingField);
}


void __fastcall TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B7C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B7C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SelectedRecollectionWarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SelectedStoryQuestId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B7A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B7A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SelectedStoryQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SpecifiedChangeSceneInfo(
        SpecifiedSceneInfo_o *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42E5BCA & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BCA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_B5D560(&static_fields->_SpecifiedChangeSceneInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B72 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B72 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SpotId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_SummonType(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B70 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B70 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SummonType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_TalkScriptInfo(
        BattleScriptRootComponent_TalkScriptInfo_o *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5C48 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C48 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_B5D560(&static_fields->_TalkScriptInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BF1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BF1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_TimeStatusEventId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_TimeStatusLoopCount(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BF3 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BF3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_TimeStatusLoopCount_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_WarBoardData(WarBoardDataEntity_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5C09 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C09 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_B5D560(&static_fields->_WarBoardData_k__BackingField);
}


void __fastcall TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5B6E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5B6E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_WarId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_ZoomSize(float value, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  TerminalPramsManager_c *v6; // x0

  if ( (byte_42E5BC8 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v2, v3, v4);
    byte_42E5BC8 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->mZoomSize = value;
}


void __fastcall TerminalPramsManager__set_eventDailyPoint(EventDailyPoint_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BE7 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BE7 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_B5D560(&static_fields->_eventDailyPoint_k__BackingField);
}


void __fastcall TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BD2 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BD2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_B5D560(&static_fields->_eventPointWinReward_k__BackingField);
}


void __fastcall TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BD0 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BD0 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_eventPointWinType_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_eventRaceBoost(EventRaceBoostInfo_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BD4 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BD4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_B5D560(&static_fields->_eventRaceBoost_k__BackingField);
}


void __fastcall TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BDD & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BDD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_B5D560(&static_fields->_eventTowerReward_k__BackingField);
}


void __fastcall TerminalPramsManager__set_friendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C4C & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C4C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_friendshipQuestDialogOpenId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isFortificationCheck(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C0D & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C0D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_isFortificationCheck_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isIncomingCall(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C01 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C01 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_isIncomingCall_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isPlayRiverActionCheck(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C0F & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C0F = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_isPlayRiverActionCheck_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isPlayingQuestPhaseRewardEffect(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C34 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C34 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isQuestRewardSetted(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C32 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C32 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_isQuestRewardSetted_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isWarBoardPlay(bool value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C0B & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C0B = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_isWarBoardPlay_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_limitCountUnSealQuestId(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5C4E & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C4E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_limitCountUnSealQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_limitImageAnnounces(
        LimitImageAnnounce_array *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5C4A & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C4A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_B5D560(&static_fields->_limitImageAnnounces_k__BackingField);
}


void __fastcall TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42E5BCE & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BCE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_B5D560(&static_fields->_oldPersonalBoss_k__BackingField);
}


void __fastcall TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0

  if ( (byte_42E5BDA & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BDA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_oldSuperBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42E5BCC & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BCC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_B5D560(&static_fields->_oldSuperBoss_k__BackingField);
}


void __fastcall TerminalPramsManager__set_questClearCostumeGet(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BD8 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BD8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_B5D560(&static_fields->_questClearCostumeGet_k__BackingField);
}


void __fastcall TerminalPramsManager__set_questClearCostumeRelease(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BD6 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BD6 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_B5D560(&static_fields->_questClearCostumeRelease_k__BackingField);
}


void __fastcall TerminalPramsManager__set_resultBoostItemRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BE1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BE1 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_B5D560(&static_fields->_resultBoostItemRewardInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_resultEventBoardGameTokenRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BE3 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BE3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_B5D560(&static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_resultEventTowerRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BDF & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BDF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_B5D560(&static_fields->_resultEventTowerRewardInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BE5 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BE5 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_B5D560(&static_fields->_timeStatusRecord_k__BackingField);
}


void __fastcall TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5C50 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5C50 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_B5D560(&static_fields->_updateProfileInfoEntity_k__BackingField);
}


void __fastcall TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E5BEF & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5BEF = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_B5D560(&static_fields->_warClearReward_k__BackingField);
}


void __fastcall TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  struct TerminalPramsManager_ClearData_StaticFields *static_fields; // x0

  if ( (byte_42E64B2 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_ClearData_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_13502/*"TERMINAL_CLEAR_REWARD_DISP"*/, v4, v5, v6);
    byte_42E64B2 = 1;
  }
  static_fields = TerminalPramsManager_ClearData_TypeInfo->static_fields;
  static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13502/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_B5D560(static_fields);
}


void __fastcall TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v5; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w8
  struct LimitImageAnnounce_array **p_limitImageAnnounces; // x19

  if ( (byte_42E64B0 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E64B0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_B5D560(&this->fields);
  this->fields.questRewardInfos = 0LL;
  sub_B5D560(&this->fields.questRewardInfos);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_B5D560(&this->fields.questPhaseRewardInfos);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_B5D560(&this->fields.questResultAfterEventRewardInfos);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_B5D560(&this->fields.resultEventPanelRewardInfos);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1LL;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0LL;
  sub_B5D560(&this->fields.mOldSuperBoss);
  this->fields.oldPersonalBoss = 0LL;
  sub_B5D560(&this->fields.oldPersonalBoss);
  this->fields.evPointWinReward = 0LL;
  sub_B5D560(&this->fields.evPointWinReward);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_B5D560(&this->fields.evRaceBoost);
  this->fields.questClearCostume = 0LL;
  sub_B5D560(&this->fields.questClearCostume);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_B5D560(&this->fields.questClearCostumeGetInfo);
  this->fields.eventTowerReward = 0LL;
  sub_B5D560(&this->fields.eventTowerReward);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_B5D560(&this->fields.resultEventTowerRewardInfo);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_B5D560(&this->fields.warClearReward);
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v5->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  p_limitImageAnnounces = &this->fields.limitImageAnnounces;
  *((_DWORD *)p_limitImageAnnounces - 8) = EVENT_POINT_EFFECT_STATE_NONE;
  sub_B5D560(p_limitImageAnnounces);
  *((_BYTE *)p_limitImageAnnounces + 8) = 0;
  *((_DWORD *)p_limitImageAnnounces + 3) = 0;
}


void __fastcall TerminalPramsManager_ClearData___ctor_20909068(
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
  struct QuestRewardInfo_array *v33; // x24
  struct QuestRewardInfo_array *v34; // x25
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
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v58; // x0
  struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *v59; // x27
  __int64 v60; // x0
  __int64 v61; // x1
  struct UserSuperBossEntity_array *v62; // x26
  struct UserSuperBossEntity_array *v63; // x25
  struct CostumeReleaseAnnounce_array *v64; // x20
  struct CostumeReleaseAnnounce_array *v65; // x21
  struct QuestRewardInfo_array *v66; // x22
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  TerminalPramsManager_c *v70; // x0
  TerminalPramsManager_c *v71; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  TerminalPramsManager_c *v76; // x0
  struct WarClearReward_array *v77; // x21
  TerminalPramsManager_c *v78; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  struct BattleDropItem_array *v80; // x22
  struct BattleDropItem_array *v81; // x23
  struct LimitImageAnnounce_array *v82; // x21
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  TerminalPramsManager_c *v86; // x0

  v33 = questPhaseRewardInfos;
  v34 = qri;
  if ( (byte_42E64B1 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDropItem___TypeInfo, (_DWORD)qcrHeroineInfo, (_DWORD)qri, questPhaseRewardInfos);
    sub_B5D5C4(&CostumeReleaseAnnounce___TypeInfo, v37, v38, v39);
    sub_B5D5C4(&LimitImageAnnounce___TypeInfo, v40, v41, v42);
    sub_B5D5C4(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&QuestRewardInfo___TypeInfo, v46, v47, v48);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&UserSuperBossEntity___TypeInfo, v52, v53, v54);
    sub_B5D5C4(&WarClearReward___TypeInfo, v55, v56, v57);
    byte_42E64B1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v58 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_B5D694(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v59 = v58;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_20595632(v58, qcrHeroineInfo, 0LL);
    if ( this )
      goto LABEL_5;
LABEL_38:
    sub_B5D69C(v60, v61);
  }
  TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(v58, 0LL);
  if ( !this )
    goto LABEL_38;
LABEL_5:
  this->fields.qClearHeroineInfo = v59;
  sub_B5D560(&this->fields);
  if ( !v34 )
    v34 = (struct QuestRewardInfo_array *)sub_B5D5DC(QuestRewardInfo___TypeInfo, 0LL);
  v62 = oldSuperBoss;
  this->fields.questRewardInfos = v34;
  sub_B5D560(&this->fields.questRewardInfos);
  if ( !v33 )
    v33 = (struct QuestRewardInfo_array *)sub_B5D5DC(QuestRewardInfo___TypeInfo, 0LL);
  v63 = oldPersonalBoss;
  this->fields.questPhaseRewardInfos = v33;
  sub_B5D560(&this->fields.questPhaseRewardInfos);
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.questClear = qClear;
  this->fields.phaseClear = pclear;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v62 = (struct UserSuperBossEntity_array *)sub_B5D5DC(UserSuperBossEntity___TypeInfo, 0LL);
  v64 = questClearCostumeRelease;
  this->fields.mOldSuperBoss = v62;
  sub_B5D560(&this->fields.mOldSuperBoss);
  if ( !oldPersonalBoss )
    v63 = (struct UserSuperBossEntity_array *)sub_B5D5DC(UserSuperBossEntity___TypeInfo, 0LL);
  v65 = questClearCostumeGet;
  this->fields.oldPersonalBoss = v63;
  sub_B5D560(&this->fields.oldPersonalBoss);
  this->fields.evPointWinReward = evpWinReward;
  sub_B5D560(&this->fields.evPointWinReward);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_B5D560(&this->fields.evRaceBoost);
  if ( !questClearCostumeRelease )
    v64 = (struct CostumeReleaseAnnounce_array *)sub_B5D5DC(CostumeReleaseAnnounce___TypeInfo, 0LL);
  v66 = resultEvTowerRewardInfo;
  this->fields.questClearCostume = v64;
  sub_B5D560(&this->fields.questClearCostume);
  if ( !questClearCostumeGet )
    v65 = (struct CostumeReleaseAnnounce_array *)sub_B5D5DC(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v65;
  sub_B5D560(&this->fields.questClearCostumeGetInfo);
  this->fields.eventTowerReward = evTowerReward;
  sub_B5D560(&this->fields.eventTowerReward);
  if ( !resultEvTowerRewardInfo )
    v66 = (struct QuestRewardInfo_array *)sub_B5D5DC(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v66;
  sub_B5D560(&this->fields.resultEventTowerRewardInfo);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B41 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v67, v68, v69);
    byte_42E4B41 = 1;
  }
  v70 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v70 = TerminalPramsManager_TypeInfo;
  }
  if ( v70->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v70);
    if ( !byte_42E4B41 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v67, v68, v69);
      byte_42E4B41 = 1;
    }
    v71 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v71 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v71->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_B5D5DC(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_B5D560(&this->fields.resultBoostItemRewardInfo);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B38 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v73, v74, v75);
    byte_42E4B38 = 1;
  }
  v76 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v76 = TerminalPramsManager_TypeInfo;
  }
  v77 = warClearRewardIn;
  if ( v76->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v76);
    if ( !byte_42E4B38 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v73, v74, v75);
      byte_42E4B38 = 1;
    }
    v78 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v78 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v78->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_B5D5DC(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  v80 = questResultAfterEventRewardInfos;
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_B5D560(&this->fields.resultEventBoardGameTokenRewardInfo);
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v77 = (struct WarClearReward_array *)sub_B5D5DC(WarClearReward___TypeInfo, 0LL);
  v81 = resultEventPanelRewardInfos;
  this->fields.warClearReward = v77;
  sub_B5D560(&this->fields.warClearReward);
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  this->fields.isWarBoardClear = isWarBoardClear;
  if ( !questResultAfterEventRewardInfos )
    v80 = (struct BattleDropItem_array *)sub_B5D5DC(BattleDropItem___TypeInfo, 0LL);
  v82 = limitImageAnnounces;
  this->fields.questResultAfterEventRewardInfos = v80;
  sub_B5D560(&this->fields.questResultAfterEventRewardInfos);
  if ( !resultEventPanelRewardInfos )
    v81 = (struct BattleDropItem_array *)sub_B5D5DC(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v81;
  sub_B5D560(&this->fields.resultEventPanelRewardInfos);
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v82 = (struct LimitImageAnnounce_array *)sub_B5D5DC(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v82;
  sub_B5D560(&this->fields.limitImageAnnounces);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B3A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v83, v84, v85);
    byte_42E4B3A = 1;
  }
  v86 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v86 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v86->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_42E4B3E )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v83, v84, v85);
    v86 = TerminalPramsManager_TypeInfo;
    byte_42E4B3E = 1;
  }
  if ( (BYTE3(v86->vtable._0_Equals.methodPtr) & 4) != 0 && !v86->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v86);
    v86 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v86->static_fields->_EventMuralId_k__BackingField;
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_20594668(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  __int128 v11; // q1
  __int128 v12; // q0
  __int64 v13; // x21
  __int64 v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+40h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42E61C7 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)uSvtEnt, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7, v8);
    byte_42E61C7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_B5D69C(v9, v10);
  v11 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v11;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v16, 0LL);
  v12 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v12;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v15, 0LL);
  v14 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v14;
  *(_QWORD *)&v18.fields.fakeValue = v13;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  int64_t id; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v13; // x0
  __int64 v14; // x1
  __int128 v15; // q1
  __int128 v16; // q1
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-40h]

  if ( (byte_42E61C8 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v8, v9, v10);
    byte_42E61C8 = 1;
  }
  v11 = sub_B5D694(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v11, 0LL);
  id = this->fields.id;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v19, id, 0LL);
  v20 = v19;
  if ( !v11 )
    sub_B5D69C(v13, v14);
  v15 = *(_OWORD *)&v20.fields.fakeValue;
  *(_OWORD *)(v11 + 16) = *(_OWORD *)&v20.fields.currentCryptoKey;
  *(_OWORD *)(v11 + 32) = v15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v19, this->fields.userId, 0LL);
  v16 = *(_OWORD *)&v19.fields.fakeValue;
  *(_OWORD *)(v11 + 48) = *(_OWORD *)&v19.fields.currentCryptoKey;
  *(_OWORD *)(v11 + 64) = v16;
  svtId = this->fields.svtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v11 + 80) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     svtId,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v11 + 96) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.limitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v11 + 112) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                      this->fields.imageLimitCount,
                                                                      0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v11 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                      this->fields.dispLimitCount,
                                                                      0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v11 + 144) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                      this->fields.commandCardLimitCount,
                                                                      0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v11 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                      this->fields.iconLimitCount,
                                                                      0LL);
  result = (UserServantEntity_o *)v11;
  *(_DWORD *)(v11 + 256) = this->fields.lv;
  *(_DWORD *)(v11 + 260) = this->fields.exp;
  *(_DWORD *)(v11 + 264) = this->fields.atk;
  *(_DWORD *)(v11 + 268) = this->fields.hp;
  *(_DWORD *)(v11 + 272) = this->fields.adjustAtk;
  *(_DWORD *)(v11 + 276) = this->fields.adjustHp;
  *(_DWORD *)(v11 + 280) = this->fields.skillLv1;
  *(_DWORD *)(v11 + 284) = this->fields.skillLv2;
  *(_DWORD *)(v11 + 288) = this->fields.skillLv3;
  *(_DWORD *)(v11 + 292) = this->fields.treasureDeviceLv1;
  *(_DWORD *)(v11 + 296) = this->fields.exceedCount;
  *(_DWORD *)(v11 + 300) = this->fields.status;
  *(_QWORD *)(v11 + 304) = this->fields.createdAt;
  return result;
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.oldUsrSvtData = 0LL;
  sub_B5D560(&this->fields);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_20595632(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        QuestClearHeroineInfo_o *qClearHeroineInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  UserServantEntity_o *oldUsrSvtData; // x21
  TerminalPramsManager_OldHeroineLawData_o *v9; // x22
  const MethodInfo *v10; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_Fields *p_fields; // x20

  if ( (byte_42E61C9 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_OldHeroineLawData_TypeInfo, (_DWORD)qClearHeroineInfo, (_DWORD)method, v3);
    byte_42E61C9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_B5D69C(v6, v7);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v9 = (TerminalPramsManager_OldHeroineLawData_o *)sub_B5D694(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_20594668(v9, oldUsrSvtData, v10);
  this->fields.oldUsrSvtData = v9;
  p_fields = &this->fields;
  sub_B5D560(p_fields);
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
  int v2; // w2
  __int64 v3; // x3
  QuestClearHeroineInfo_o *v5; // x20
  const MethodInfo *v6; // x1
  TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x0
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_42E61CA & 1) == 0 )
  {
    sub_B5D5C4(&QuestClearHeroineInfo_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E61CA = 1;
  }
  v5 = (QuestClearHeroineInfo_o *)sub_B5D694(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor(v5, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v6),
        !v5) )
  {
    sub_B5D69C(oldUsrSvtData, v6);
  }
  v5->fields.oldUsrSvtData = (struct UserServantEntity_o *)oldUsrSvtData;
  sub_B5D560(&v5->fields);
  result = v5;
  v5->fields.isChangeLimitcnt = this->fields.isChangeLimitcnt;
  v5->fields.isChangeTreasureDvc = this->fields.isChangeTreasureDvc;
  v5->fields.treasureDvcId = this->fields.treasureDvcId;
  v5->fields.treasureDvcLv = this->fields.treasureDvcLv;
  v5->fields.oldFriendShipRank = this->fields.oldFriendShipRank;
  v5->fields.isFriendShipExceed = this->fields.isFriendShipExceed;
  v5->fields.isExceed = this->fields.isExceed;
  return result;
}


void __fastcall TerminalPramsManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E64AB & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager___c_TypeInfo, v1, v2, v3);
    byte_42E64AB = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalPramsManager___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__626_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t questId; // w19
  TerminalPramsManager_c *v6; // x0

  if ( (byte_42E64AC & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)n, (_DWORD)method, v3);
    byte_42E64AC = 1;
  }
  if ( !n )
    sub_B5D69C(this, n);
  questId = n->fields.questId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)n, (_DWORD)method, v3);
    byte_42E4B33 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  return questId == v6->static_fields->_QuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__630_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E64AD & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v, (_DWORD)method, v3);
    byte_42E64AD = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0LL);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__630_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B5D69C(this, 0LL);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__630_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass614_0___ctor(
        TerminalPramsManager___c__DisplayClass614_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass614_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass614_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TerminalPramsManager___c__DisplayClass614_0_Fields *p_fields; // x19
  System_String_o *effectIdsStr; // t1

  if ( (byte_42E64AE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, (_DWORD)effectId, (_DWORD)method, v3);
    byte_42E64AE = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = &this->fields;
  p_fields->effectIdsStr = System_String__Concat_44580072(
                             effectIdsStr,
                             effectId,
                             (System_String_o *)StringLiteral_26/*"\n"*/,
                             0LL);
  sub_B5D560(p_fields);
}


void __fastcall TerminalPramsManager___c__DisplayClass630_0___ctor(
        TerminalPramsManager___c__DisplayClass630_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass630_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass630_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_B5D69C(0LL, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass630_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass630_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserQuestMaster_o *userQuestMaster; // x20
  int64_t UserId; // x0
  __int64 v8; // x1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E64AF & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)v, (_DWORD)method, v3);
    byte_42E64AF = 1;
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
  UserId = UserQuestMaster__TryGetEntity(userQuestMaster, &entity, UserId, v->fields.id, 0LL);
  if ( (UserId & 1) != 0 )
  {
    if ( entity )
      return entity->fields.clearNum == 0;
LABEL_12:
    sub_B5D69C(UserId, v8);
  }
  return 1;
}