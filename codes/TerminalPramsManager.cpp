void __fastcall TerminalPramsManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v1; // x19
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  struct TerminalPramsManager_StaticFields *v3; // x0
  TerminalPramsManager_c *v4; // x8
  __int64 v5; // x0
  struct TerminalPramsManager_StaticFields *v6; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  struct System_Collections_Generic_List_string__o **p_eventScriptMessages; // x0
  TerminalPramsManager_c *v9; // x8

  if ( (byte_4388499 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&float___TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388499 = 1;
  }
  v1 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v1,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  static_fields->loginQuestNotifiedList = v1;
  sub_B77560(&static_fields->loginQuestNotifiedList);
  v3 = TerminalPramsManager_TypeInfo->static_fields;
  v3->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(&v3->mTerminalWarStartedIds);
  v4 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = -1;
  v4->static_fields->clearBattleRaidId = -1;
  v4->static_fields->TipsArchiveEventUiId = 0;
  v4->static_fields->TipsArchiveCurrrentTab = 0;
  v5 = sub_B775DC(float___TypeInfo, 3LL);
  v6 = TerminalPramsManager_TypeInfo->static_fields;
  v6->TipsArchiveScrollValueList = (struct System_Single_array *)v5;
  sub_B77560(&v6->TipsArchiveScrollValueList);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  p_eventScriptMessages = &TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  *p_eventScriptMessages = (struct System_Collections_Generic_List_string__o *)v7;
  sub_B77560(p_eventScriptMessages);
  v9 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v9->static_fields->EVENT_POINT_EFFECT_STATE_ADD = 1;
  v9->static_fields->isInvisibleConnectAndLoad = 0;
  v9->static_fields->ConnectMarkEventId = 0;
  v9->static_fields->ConnectMarkAnimationId = 0;
  v9->static_fields->meSceneStatus = 0;
  v9->static_fields->isCheckHomeExpirationDateEventMap = 1;
  v9->static_fields->IsEventMapLoading = 0;
  v9->static_fields->IsjumbleRaidHomeTopRequest = 0;
}


void __fastcall TerminalPramsManager__AddNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_438847D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438847D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_B7769C(0LL, method);
  System_Collections_Generic_HashSet_int___Add(
    loginQuestNotifiedList,
    questId,
    (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388446 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388446 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438746E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438746E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_4387475 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_4387475 = 1;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsAutoShortcut_k__BackingField = 0;
  v1->static_fields->mIsAutoOpenMasterMission = 0;
}


void __fastcall TerminalPramsManager__BlankEarthRank_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388471 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11769/*"SAVEKEY_BlankEarthRank"*/);
    byte_4388471 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884CE )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884CE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11769/*"SAVEKEY_BlankEarthRank"*/,
    v1->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388470 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11770/*"SAVEKEY_BlankEarthSpotId"*/);
    byte_4388470 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387468 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387468 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11770/*"SAVEKEY_BlankEarthSpotId"*/,
    v1->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v3; // x0

  if ( (byte_438846F & 1) == 0 )
  {
    sub_B775C4(&CommonUI_CampaignDirectBonusData___TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11771/*"SAVEKEY_CampaignDirectBonus"*/);
    byte_438846F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884CD )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884CD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v1->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_B775DC(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11771/*"SAVEKEY_CampaignDirectBonus"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v5; // x19
  WarEntity_o *v8; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438848A & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B775C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438848A = 1;
  }
  v8 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_17;
  v5 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
  if ( !v5 )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v5,
          &v8,
          (int32_t)Instance,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v8 )
LABEL_17:
    sub_B7769C(Instance, v4);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            *(&v8->fields.id + 1),
            (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4388472 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388472 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C6 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C6 = 1;
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
    if ( !byte_43884C6 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884C6 = 1;
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
      if ( !byte_438746B )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_438746B = 1;
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
  if ( (byte_438845C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/);
    sub_B775C4(&StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_438845C = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  if ( (byte_438845E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13864/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_438845E = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13864/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4388497 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    byte_4388497 = 1;
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
  TerminalPramsManager___c__DisplayClass614_0_o *v1; // x19
  const MethodInfo *v2; // x1
  TerminalPramsManager_c *v3; // x0
  ScrTerminalListTop_c *v4; // x8
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w20
  const MethodInfo *v6; // x1
  ScrTerminalListTop_c *v7; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w20
  ScrTerminalListTop_c *v9; // x0
  System_String_o *v10; // x1
  System_String_o *v11; // x20
  TerminalPramsManager_c *v12; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v16; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x22
  struct System_String_o *effectIdsStr; // x19
  TerminalPramsManager_c *v19; // x0
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v21; // x0
  __int64 v22; // x0
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4388476 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string___ctor__);
    sub_B775C4(&System_Action_string__TypeInfo);
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_string___);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ForEach__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Remove__);
    sub_B775C4(&ScrTerminalListTop_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&Method_TerminalPramsManager___c__DisplayClass614_0__CheckResumeEffectNT2_b__0__);
    sub_B775C4(&TerminalPramsManager___c__DisplayClass614_0_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_70/*"\r\n"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388476 = 1;
  }
  v23 = 0;
  v1 = (TerminalPramsManager___c__DisplayClass614_0_o *)sub_B77694(TerminalPramsManager___c__DisplayClass614_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass614_0___ctor(v1, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C4 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v4 = ScrTerminalListTop_TypeInfo;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v4 = ScrTerminalListTop_TypeInfo;
      v3 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v4->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v2) )
    {
      v7 = ScrTerminalListTop_TypeInfo;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v7 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v7->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v6) )
      {
        v9 = ScrTerminalListTop_TypeInfo;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v9 = ScrTerminalListTop_TypeInfo;
        }
        v23 = v9->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v11 = System_Int32__ToString((int32_t)&v23, 0LL);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_43884C4 )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_43884C4 = 1;
        }
        v12 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v12 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v12->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_50;
        v14 = System_String__Replace_44909172(
                PlayedTerminalEffects_k__BackingField,
                (System_String_o *)StringLiteral_70/*"\r\n"*/,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                0LL);
        PlayedTerminalEffects_k__BackingField = (System_String_o *)sub_B775DC(char___TypeInfo, 1LL);
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_50;
        v10 = PlayedTerminalEffects_k__BackingField;
        if ( !LODWORD(PlayedTerminalEffects_k__BackingField[1].klass) )
        {
          v22 = sub_B776C8(PlayedTerminalEffects_k__BackingField);
          sub_B77668(v22, 0LL);
        }
        LOWORD(PlayedTerminalEffects_k__BackingField[1].monitor) = 10;
        if ( !v14
          || (v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           v14,
                                                                           (System_Char_array *)PlayedTerminalEffects_k__BackingField,
                                                                           0LL),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                            v15,
                                                                            (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v16 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)PlayedTerminalEffects_k__BackingField,
                                                                           (WarBoardManager_TaskList_o *)v11,
                                                                           (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_string__Remove__),
              !v1) )
        {
LABEL_50:
          sub_B7769C(PlayedTerminalEffects_k__BackingField, v10);
        }
        v1->fields.effectIdsStr = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_B77560(&v1->fields);
        v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_string__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v17,
          (Il2CppObject *)v1,
          Method_TerminalPramsManager___c__DisplayClass614_0__CheckResumeEffectNT2_b__0__,
          (const MethodInfo_26A0868 *)Method_System_Action_string___ctor__);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v16,
          (System_Action_T__o *)v17,
          (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_string__ForEach__);
        effectIdsStr = v1->fields.effectIdsStr;
        if ( !byte_43884AD )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_43884AD = 1;
        }
        v19 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v19 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = &v19->static_fields->_PlayedTerminalEffects_k__BackingField;
        *p_PlayedTerminalEffects_k__BackingField = effectIdsStr;
        sub_B77560(p_PlayedTerminalEffects_k__BackingField);
        TerminalPramsManager__Save_SaveData(v21);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438846B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11772/*"SAVEKEY_ClearEventQuestIds"*/);
    byte_438846B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C7 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11772/*"SAVEKEY_ClearEventQuestIds"*/,
    v1->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__ConnectMark_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438846A & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11774/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_B775C4(&StringLiteral_11773/*"SAVEKEY_ConnectMarkAnimationId"*/);
    byte_438846A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11774/*"SAVEKEY_ConnectMarkEventId"*/, v1->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11773/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__DeleteClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_ClearData_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  struct System_String_o **p_lastPlayBgmName; // x0

  if ( (byte_438848D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_ClearData_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438848D = 1;
  }
  v1 = TerminalPramsManager_ClearData_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v1 = TerminalPramsManager_ClearData_TypeInfo;
  }
  UnityEngine_PlayerPrefs__DeleteKey(v1->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884DB )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884DB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_isQuestRewardSetted_k__BackingField = 0;
  p_lastPlayBgmName = &v2->static_fields->lastPlayBgmName;
  *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(p_lastPlayBgmName);
}


void __fastcall TerminalPramsManager__DeleteContinueData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_438844F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11777/*"SAVEKEY_LastPlayBgmName"*/);
    sub_B775C4(&StringLiteral_13866/*"TerminalEndTime"*/);
    sub_B775C4(&StringLiteral_5334/*"Debug_IsOriginalGuestNPC"*/);
    sub_B775C4(&StringLiteral_11783/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_B775C4(&StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/);
    sub_B775C4(&StringLiteral_11771/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_B775C4(&StringLiteral_11778/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_B775C4(&StringLiteral_13867/*"TerminalEventDailyPointEventId"*/);
    sub_B775C4(&StringLiteral_5330/*"Debug_GuestNPCInfoList"*/);
    sub_B775C4(&StringLiteral_13864/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_B775C4(&StringLiteral_13873/*"TerminalPhaseCnt"*/);
    sub_B775C4(&StringLiteral_11787/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_B775C4(&StringLiteral_13881/*"TerminalTimeStatusEventId"*/);
    sub_B775C4(&StringLiteral_13865/*"TerminalDispState"*/);
    sub_B775C4(&StringLiteral_11780/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_B775C4(&StringLiteral_13868/*"TerminalIsDoneShortcut"*/);
    sub_B775C4(&StringLiteral_11779/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_B775C4(&StringLiteral_11784/*"SAVEKEY_PlayerGenderType"*/);
    sub_B775C4(&StringLiteral_11788/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_B775C4(&StringLiteral_11772/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_B775C4(&StringLiteral_11781/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_B775C4(&StringLiteral_5335/*"Debug_IsQuestReleaseAll"*/);
    sub_B775C4(&StringLiteral_5332/*"Debug_IsDummyErrorSelect"*/);
    sub_B775C4(&StringLiteral_13876/*"TerminalQuestId"*/);
    sub_B775C4(&StringLiteral_11786/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_B775C4(&StringLiteral_11791/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_B775C4(&StringLiteral_13880/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_B775C4(&StringLiteral_13885/*"TerminalWarId"*/);
    sub_B775C4(&StringLiteral_13878/*"TerminalSpotId"*/);
    sub_B775C4(&StringLiteral_13882/*"TerminalTimeStatusLoopCount"*/);
    sub_B775C4(&StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_B775C4(&StringLiteral_11770/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_B775C4(&StringLiteral_11775/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_B775C4(&StringLiteral_5333/*"Debug_IsOriginalBattle"*/);
    sub_B775C4(&StringLiteral_13886/*"TerminalWarStartedIds"*/);
    sub_B775C4(&StringLiteral_5329/*"Debug_BattleEnemyList"*/);
    sub_B775C4(&StringLiteral_11774/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_B775C4(&StringLiteral_13884/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_B775C4(&StringLiteral_11773/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_B775C4(&StringLiteral_11782/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_B775C4(&StringLiteral_13871/*"TerminalLastPlayedQuestId"*/);
    sub_B775C4(&StringLiteral_5331/*"Debug_IsBuildInfoDisp"*/);
    sub_B775C4(&StringLiteral_13883/*"TerminalTransitionInfoMissionId"*/);
    sub_B775C4(&StringLiteral_11790/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_438844F = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13865/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13885/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13878/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13876/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13871/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13873/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13866/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13868/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13886/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5335/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5332/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5331/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5333/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5334/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5329/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5330/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13881/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13882/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13867/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13880/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13883/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13884/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13864/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11787/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11786/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11788/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11777/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11778/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11783/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11780/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11781/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11782/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11791/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11774/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11773/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11790/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11772/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11779/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11775/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11784/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11771/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11770/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__InitParameter((const MethodInfo *)v1);
  TerminalPramsManager__DeleteClearDatas(v2);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v3);
  TerminalPramsManager__DeleteQuestRandomGroupList(v4);
}


void __fastcall TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct EventRaidDefeatedEffectInfo_o **p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_438848E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11776/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_438848E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884DC )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884DC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = &v1->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  *p_EventRaidDefeatedEffectInfo_k__BackingField = 0LL;
  sub_B77560(p_EventRaidDefeatedEffectInfo_k__BackingField);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11776/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4388493 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11785/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4388493 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884DE )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884DE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = &v1->static_fields->_QuestRandomGroupList_k__BackingField;
  *p_QuestRandomGroupList_k__BackingField = 0LL;
  sub_B77560(p_QuestRandomGroupList_k__BackingField);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11785/*"SAVEKEY_QuestRandomGroupList"*/, 0LL);
}


void __fastcall TerminalPramsManager__EventDailyPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  System_String_o *v3; // x0
  int64_t BeforeTimeEventDailyPoint_k__BackingField; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4388458 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_13867/*"TerminalEventDailyPointEventId"*/);
    sub_B775C4(&StringLiteral_13880/*"TerminalTimeStatusEventDailyPoint"*/);
    byte_4388458 = 1;
  }
  BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387B46 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B46 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13867/*"TerminalEventDailyPointEventId"*/,
    v1->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4387B45 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B45 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  BeforeTimeEventDailyPoint_k__BackingField = v2->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v3 = System_Int64__ToString((int64_t)&BeforeTimeEventDailyPoint_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13880/*"TerminalTimeStatusEventDailyPoint"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__EventStatusSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4388457 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_13881/*"TerminalTimeStatusEventId"*/);
    sub_B775C4(&StringLiteral_13882/*"TerminalTimeStatusLoopCount"*/);
    byte_4388457 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13881/*"TerminalTimeStatusEventId"*/,
    v1->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_43884C1 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C1 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13882/*"TerminalTimeStatusLoopCount"*/,
    v2->static_fields->_TimeStatusLoopCount_k__BackingField,
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
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x8
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438847B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438847B = 1;
  }
  value = 0;
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v3->static_fields->folderLastIdxs;
  if ( !folderLastIdxs )
    return 0;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs;
    if ( !folderLastIdxs )
      sub_B7769C(v5, v6);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_2FEA980 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  int32_t targetFrameRate; // w0

  if ( (byte_438844B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438844B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438748D )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438748D = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  if ( v3->static_fields->_IsAutoResume_k__BackingField )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4387499 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387499 = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    if ( !v4->static_fields->_IsMapReturnFolder_k__BackingField )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v4);
      targetFrameRate = UnityEngine_Application__get_targetFrameRate(0LL);
      return (float)(1.0 / (float)targetFrameRate) + (float)(1.0 / (float)targetFrameRate);
    }
  }
  return time;
}


int32_t __fastcall TerminalPramsManager__GetQuestReleasedFocusState(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v5; // x1

  if ( (byte_4388481 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388481 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v3);
  if ( !QuestFocusStateManager )
    sub_B7769C(0LL, v5);
  return QuestFocusStateManager__GetFocusState(QuestFocusStateManager, questId, 0LL);
}


void __fastcall TerminalPramsManager__InitLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388451 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388451 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__InitParameter((const MethodInfo *)v1);
}


void __fastcall TerminalPramsManager__InitMessageWindowData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct System_String_o *v2; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *v5; // x0

  if ( (byte_4388479 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388479 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43882BC )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43882BC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_IsDispOnly_k__BackingField = 0;
  v2 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_438747C )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_438747C = 1;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v2;
  sub_B77560(&static_fields->_QuestWindowMessage_k__BackingField);
  if ( !byte_438747B )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438747B = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_43884CF )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_43884CF = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v5 = v4->static_fields;
  v5->_BattleSetupKeep_k__BackingField = 0LL;
  sub_B77560(&v5->_BattleSetupKeep_k__BackingField);
}


void __fastcall TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *v5; // x0
  TerminalPramsManager_c *v6; // x0
  struct TimeStatusRecord_o **p_timeStatusRecord_k__BackingField; // x0
  TerminalPramsManager_c *v8; // x0
  struct EventSaveData_o **p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct System_String_o **p_lastPlayBgmName; // x0
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *v12; // x0
  TerminalPramsManager_c *v13; // x0
  const MethodInfo *v14; // x0
  TerminalPramsManager_c *v15; // x0
  struct System_String_o *v16; // x20
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v18; // x0
  struct System_String_o *v19; // x20
  struct System_String_o **p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  TerminalPramsManager_c *v21; // x0
  struct TerminalPramsManager_StaticFields *v22; // x0
  TerminalPramsManager_c *v23; // x0

  if ( (byte_4388450 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388450 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387467 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387467 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_438749A )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438749A = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4387469 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4387469 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_43874BE )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_43874BE = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_43884A1 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_43884A1 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_43874BF )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_43874BF = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_43874B4 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_43874B4 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_438746B )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_438746B = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_438746C )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_438746C = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_43884A2 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_43884A2 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_43874B0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_43874B0 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_43874AE )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_43874AE = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_QuestReleaseFocusQuestId_k__BackingField = 0;
  if ( !byte_43874B6 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_43874B6 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_B77560(&static_fields->_SelectedBannerEntity_k__BackingField);
  if ( !byte_438746A )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438746A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_43874B7 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_43874B7 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_4387470 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4387470 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDoneShortcut_k__BackingField = 0;
  v5 = v4->static_fields;
  v5->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(&v5->mTerminalWarStartedIds);
  if ( !byte_43884A3 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884A3 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_43884A4 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_43884A4 = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_43884A5 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_43884A5 = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_43874B9 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_43874B9 = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_43874BA )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_43874BA = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_43884A6 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_43884A6 = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = &v6->static_fields->_timeStatusRecord_k__BackingField;
  *p_timeStatusRecord_k__BackingField = 0LL;
  sub_B77560(p_timeStatusRecord_k__BackingField);
  if ( !byte_4387B44 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B44 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4387B43 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_4387B43 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_43884A7 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_43884A7 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_43884A8 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_43884A8 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_43884A9 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_43884A9 = 1;
  }
  if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = &v8->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  *p_BeforeEventSubmarineSaveData_k__BackingField = 0LL;
  sub_B77560(p_BeforeEventSubmarineSaveData_k__BackingField);
  p_lastPlayBgmName = &TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(p_lastPlayBgmName);
  v11 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0;
  v11->static_fields->panelEventPoint = 0;
  if ( !byte_4387B3E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4387B3E = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v12 = v11->static_fields;
  v12->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_B77560(&v12->_SpecifiedChangeSceneInfo_k__BackingField);
  if ( !byte_43884AA )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884AA = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_43884AB )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
    byte_43884AB = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_43884AC )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
    byte_43884AC = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_43882BE )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
    byte_43882BE = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v13);
  TerminalPramsManager__ResetResumeScriptWithMap(v14);
  if ( !byte_43874A3 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43874A3 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v16 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_43884AD )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
    byte_43884AD = 1;
  }
  if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = &v15->static_fields->_PlayedTerminalEffects_k__BackingField;
  *p_PlayedTerminalEffects_k__BackingField = v16;
  sub_B77560(p_PlayedTerminalEffects_k__BackingField);
  if ( !byte_43884AE )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884AE = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_43884AF )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884AF = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_43884B0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B0 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  v18->static_fields->ConnectMarkEventId = 0;
  v18->static_fields->ConnectMarkAnimationId = 0;
  if ( !byte_43876E3 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43876E3 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_43884B1 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B1 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4387B3F )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4387B3F = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4387B40 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_4387B40 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_43884B2 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B2 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_43874A7 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43874A7 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_43884B3 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B3 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_43884B4 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B4 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_43884B5 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B5 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_43884B2 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B2 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_43884B6 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B6 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_43884B7 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B7 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_43884B8 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B8 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_43884B9 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884B9 = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_43884BA )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884BA = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v19 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_43884BB )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
    byte_43884BB = 1;
  }
  if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v18);
    v18 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = &v18->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  *p_SceneMoveQuestClearedInfo_k__BackingField = v19;
  sub_B77560(p_SceneMoveQuestClearedInfo_k__BackingField);
  if ( !byte_4387B47 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B47 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  v22 = v21->static_fields;
  v22->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_B77560(&v22->_CampaignDirectBonus_k__BackingField);
  if ( !byte_4387B52 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B52 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  unsigned __int64 i; // x19
  TerminalPramsManager_c *v3; // x0
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  char *v5; // x8
  __int64 v6; // x0

  if ( (byte_4388498 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388498 = 1;
  }
  for ( i = 0LL; ; ++i )
  {
    v3 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    TipsArchiveScrollValueList = v3->static_fields->TipsArchiveScrollValueList;
    if ( !TipsArchiveScrollValueList )
LABEL_15:
      sub_B7769C(v3, v1);
    if ( (__int64)i >= (int)TipsArchiveScrollValueList->max_length )
      break;
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      TipsArchiveScrollValueList = TerminalPramsManager_TypeInfo->static_fields->TipsArchiveScrollValueList;
      if ( !TipsArchiveScrollValueList )
        goto LABEL_15;
    }
    if ( i >= TipsArchiveScrollValueList->max_length )
    {
      v6 = sub_B776C8(v3);
      sub_B77668(v6, 0LL);
    }
    v5 = (char *)TipsArchiveScrollValueList + 4 * i;
    *((_DWORD *)v5 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4388443 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388443 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438748D )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438748D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( v1->static_fields->_IsAutoResume_k__BackingField )
    return 1;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  if ( !byte_438849A )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438849A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  return v3->static_fields->_IsAutoShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__IsAutoForTimeProgressEvents(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  EventDetailEntity_o *v8; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4388445 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388445 = 1;
  }
  v8 = 0LL;
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438748D )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438748D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_IsAutoResume_k__BackingField )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v1);
  if ( !byte_4387465 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387465 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( v2->static_fields->_WarId_k__BackingField < 1 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387465 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387465 = 1;
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
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_40:
    sub_B7769C(Instance, v4);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          (WarEntity_o **)&v8,
          entity->fields.eventId,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v8;
  if ( !v8 )
    goto LABEL_40;
  return EventDetailEntity__IsTimeProgressEvent(v8, 0LL);
}


void __fastcall TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438846D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11775/*"SAVEKEY_DataLostBattleAutoReset"*/);
    byte_438846D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C8 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11775/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v1->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__IsFreeQuestOnOrdealCall(int32_t questId, const MethodInfo *method)
{
  QuestMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v5; // x19
  int v6; // w19
  BalanceConfig_c *v7; // x0
  WarEntity_o *v9; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4388496 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    byte_4388496 = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestMaster___);
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
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v5 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v5) )
  {
LABEL_23:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  }
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      v5,
                                                      &v9,
                                                      (int32_t)Master_WarQuestSelectionMaster,
                                                      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_23;
  v6 = *(&v9->fields.id + 1);
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return v6 == v7->static_fields->OrdealCallWarId;
}


bool __fastcall TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4388488 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B775C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4388488 = 1;
  }
  entity = 0LL;
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->FesWarId != warId )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    if ( !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)static_fields->MainChaptersWithEventId,
            warId,
            (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        &entity,
                                        warId,
                                        (const MethodInfo_21FB8F0 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return entity->fields.eventId == 0;
        }
      }
      sub_B7769C(Instance, v7);
    }
  }
  return 1;
}


bool __fastcall TerminalPramsManager__IsMainStoryForQuestId(int32_t questId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v5; // x19
  int32_t v6; // w19
  WarEntity_o *v9; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4388489 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B775C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388489 = 1;
  }
  v9 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v5 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL),
        !v5) )
  {
LABEL_17:
    sub_B7769C(Instance, v4);
  }
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                v5,
                                &v9,
                                (int32_t)Instance,
                                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v9 )
    goto LABEL_17;
  v6 = *(&v9->fields.id + 1);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStory(v6, v4);
}


bool __fastcall TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4388487 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388487 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3->static_fields->NotRequiredPlayWarIds,
         warId,
         (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    return 0;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStory(warId, v4);
}


bool __fastcall TerminalPramsManager__IsNotifiedLoginQuest(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *loginQuestNotifiedList; // x0

  if ( (byte_438847C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438847C = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  loginQuestNotifiedList = v3->static_fields->loginQuestNotifiedList;
  if ( !loginQuestNotifiedList )
    sub_B7769C(0LL, method);
  return System_Collections_Generic_HashSet_int___Contains(
           loginQuestNotifiedList,
           questId,
           (const MethodInfo_2EDC108 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388466 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11781/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    byte_4388466 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43874A5 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43874A5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11781/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388465 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11780/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    byte_4388465 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43874A4 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43874A4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11780/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388467 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11782/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    byte_4388467 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C5 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11782/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v1->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TerminalPramsManager__IsPlayedEventRaidDefeatedEffect(
        int32_t eventId,
        int32_t day,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *klass; // x0
  Il2CppObject *v6; // x8
  char v7; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4388492 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388492 = 1;
  }
  value = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884DD )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884DD = 1;
  }
  klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)TerminalPramsManager_TypeInfo;
  }
  v6 = klass[2].fields.entries->m_Items[16].fields.value;
  if ( !v6
    || (klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v6[1].klass) == 0LL )
  {
    sub_B7769C(klass, *(_QWORD *)&day);
  }
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         klass,
         eventId,
         &value,
         (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (char)value;
    if ( value )
      v7 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    v7 = 0;
  }
  return v7 & 1;
}


bool __fastcall TerminalPramsManager__IsTerminalEffectNT2BoardOpen(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  ScrTerminalListTop_c *v2; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w19
  clsQuestCheck_o *v4; // x0
  __int64 v5; // x1
  clsQuestCheck_o *v6; // x19
  clsQuestCheck_o *v7; // x19
  TerminalPramsManager_c *v8; // x0
  ScrTerminalListTop_c *v9; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v11; // x0

  if ( (byte_4388475 & 1) == 0 )
  {
    sub_B775C4(&ScrTerminalListTop_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388475 = 1;
  }
  v2 = ScrTerminalListTop_TypeInfo;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
    v2 = ScrTerminalListTop_TypeInfo;
  }
  NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v2->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
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
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v6 = v4;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v6 )
    goto LABEL_49;
  if ( !clsQuestCheck__IsQuestClear(
          v6,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v7 = v4;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v7 )
LABEL_49:
    sub_B7769C(v4, v5);
  if ( !clsQuestCheck__IsWarClear(
          v7,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387478 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387478 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v9 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v8->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v9 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v9->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387479 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387479 = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      if ( v11->static_fields->_PhaseCnt_k__BackingField == 2 )
        return 1;
    }
  }
  return 0;
}


bool __fastcall TerminalPramsManager__IsTerminalEffectPlayed(int32_t effectId, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  System_String_o *v3; // x1
  System_String_o *v4; // x19
  TerminalPramsManager_c *v5; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v7; // x20
  System_String_c *klass; // x8
  System_String_o *v9; // x20
  unsigned __int64 v10; // x21
  __int64 v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = effectId;
  if ( (byte_4388473 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_70/*"\r\n"*/);
    byte_4388473 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C4 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C4 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( !v2->static_fields->_PlayedTerminalEffects_k__BackingField )
    return 0;
  v4 = System_Int32__ToString((int32_t)&v13, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C4 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C4 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  PlayedTerminalEffects_k__BackingField = v5->static_fields->_PlayedTerminalEffects_k__BackingField;
  if ( !PlayedTerminalEffects_k__BackingField )
    goto LABEL_34;
  v7 = System_String__Replace_44909172(
         PlayedTerminalEffects_k__BackingField,
         (System_String_o *)StringLiteral_70/*"\r\n"*/,
         (System_String_o *)StringLiteral_26/*"\n"*/,
         0LL);
  PlayedTerminalEffects_k__BackingField = (System_String_o *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !PlayedTerminalEffects_k__BackingField )
    goto LABEL_34;
  v3 = PlayedTerminalEffects_k__BackingField;
  if ( !LODWORD(PlayedTerminalEffects_k__BackingField[1].klass) )
  {
LABEL_33:
    v12 = sub_B776C8(PlayedTerminalEffects_k__BackingField);
    sub_B77668(v12, 0LL);
  }
  LOWORD(PlayedTerminalEffects_k__BackingField[1].monitor) = 10;
  if ( !v7
    || (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__Split(
                                                                     v7,
                                                                     (System_Char_array *)PlayedTerminalEffects_k__BackingField,
                                                                     0LL)) == 0LL )
  {
LABEL_34:
    sub_B7769C(PlayedTerminalEffects_k__BackingField, v3);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v9 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass < 1 )
    return 0;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)klass )
      goto LABEL_33;
    PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__op_Equality(
                                                                 *((System_String_o **)&v9[1].monitor + v10),
                                                                 v4,
                                                                 0LL);
    if ( ((unsigned __int8)PlayedTerminalEffects_k__BackingField & 1) != 0 )
      return 1;
    LODWORD(klass) = v9[1].klass;
    if ( (__int64)++v10 >= (int)klass )
      return 0;
  }
}


bool __fastcall TerminalPramsManager__IsWarStartedId(int32_t war_id, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  System_String_o *mTerminalWarStartedIds; // x0
  System_String_o *v4; // x19
  System_String_c *klass; // x8
  System_String_o *v6; // x19
  unsigned __int64 v7; // x21
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  __int64 v11; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = war_id;
  if ( (byte_4388477 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_70/*"\r\n"*/);
    byte_4388477 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  mTerminalWarStartedIds = v2->static_fields->mTerminalWarStartedIds;
  if ( !mTerminalWarStartedIds )
    goto LABEL_20;
  v4 = System_String__Replace_44909172(
         mTerminalWarStartedIds,
         (System_String_o *)StringLiteral_70/*"\r\n"*/,
         (System_String_o *)StringLiteral_26/*"\n"*/,
         0LL);
  mTerminalWarStartedIds = (System_String_o *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !mTerminalWarStartedIds )
    goto LABEL_20;
  method = (const MethodInfo *)mTerminalWarStartedIds;
  if ( !LODWORD(mTerminalWarStartedIds[1].klass) )
  {
LABEL_19:
    v11 = sub_B776C8(mTerminalWarStartedIds);
    sub_B77668(v11, 0LL);
  }
  LOWORD(mTerminalWarStartedIds[1].monitor) = 10;
  if ( !v4
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(
                                                      v4,
                                                      (System_Char_array *)mTerminalWarStartedIds,
                                                      0LL)) == 0LL )
  {
LABEL_20:
    sub_B7769C(mTerminalWarStartedIds, method);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v6 = mTerminalWarStartedIds;
  if ( (int)klass < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)klass )
      goto LABEL_19;
    v8 = (System_String_o *)*((_QWORD *)&v6[1].monitor + v7);
    v9 = System_Int32__ToString((int32_t)&v12, 0LL);
    mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v8, v9, 0LL);
    if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
      return 1;
    LODWORD(klass) = v6[1].klass;
    if ( (__int64)++v7 >= (int)klass )
      return 0;
  }
}


void __fastcall TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388464 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_13869/*"TerminalLastPanelEventPoint"*/);
    byte_4388464 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13869/*"TerminalLastPanelEventPoint"*/, v1->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388462 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11777/*"SAVEKEY_LastPlayBgmName"*/);
    byte_4388462 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11777/*"SAVEKEY_LastPlayBgmName"*/, v1->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388463 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11778/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    byte_4388463 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11778/*"SAVEKEY_LastPlayQuestConsumeType"*/,
    v1->static_fields->lastPlayQuestConsumeAp,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LoadClearDatas(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_ClearData_c *v2; // x0
  TerminalPramsManager_ClearData_c *v3; // x0
  Il2CppObject *String_36337972; // x19
  TerminalPramsManager_ClearData_o *v5; // x19
  TerminalPramsManager_c *v6; // x0
  struct QuestClearHeroineInfo_o **p_mQuestClearHeroineInfo; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *qClearHeroineInfo; // x8
  struct TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x9
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v13; // x0
  struct QuestClearHeroineInfo_o **v14; // x0
  __int64 v15; // x0
  bool questClear; // w20
  TerminalPramsManager_c *v17; // x8
  bool phaseClear; // w21
  struct TerminalPramsManager_StaticFields **p_static_fields; // x9
  struct QuestRewardInfo_array *questRewardInfos; // x10
  struct QuestRewardInfo_array *v21; // x20
  struct QuestRewardInfo_array **p_mQuestRewardInfos; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  struct QuestRewardInfo_array *questPhaseRewardInfos; // x8
  TerminalPramsManager_c *v26; // x0
  struct QuestRewardInfo_array *v27; // x20
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  TerminalPramsManager_c *v31; // x8
  struct UserSuperBossEntity_array *mOldSuperBoss; // x9
  struct UserSuperBossEntity_array *v33; // x20
  TerminalPramsManager_c *v34; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  struct UserSuperBossEntity_array *oldPersonalBoss; // x8
  struct UserSuperBossEntity_array *v39; // x20
  TerminalPramsManager_c *v40; // x0
  struct TerminalPramsManager_StaticFields *v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  struct EventPointWinReward_o *evPointWinReward; // x8
  struct EventPointWinReward_o *v45; // x20
  TerminalPramsManager_c *v46; // x0
  struct EventPointWinReward_o **p_eventPointWinReward_k__BackingField; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  int32_t evPointWinType; // w20
  TerminalPramsManager_c *v51; // x8
  struct EventRaceBoostInfo_o *evRaceBoost; // x9
  struct EventRaceBoostInfo_o *v53; // x20
  TerminalPramsManager_c *v54; // x0
  struct EventRaceBoostInfo_o **p_eventRaceBoost_k__BackingField; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  struct CostumeReleaseAnnounce_array *questClearCostume; // x8
  struct CostumeReleaseAnnounce_array *v59; // x20
  TerminalPramsManager_c *v60; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  struct CostumeReleaseAnnounce_array *questClearCostumeGetInfo; // x8
  struct CostumeReleaseAnnounce_array *v65; // x20
  TerminalPramsManager_c *v66; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeGet_k__BackingField; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v71; // x20
  TerminalPramsManager_c *v72; // x0
  struct EventTowerReward_o **p_eventTowerReward_k__BackingField; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  struct QuestRewardInfo_array *resultEventTowerRewardInfo; // x8
  __int64 v77; // x9
  QuestRewardInfo_o *v78; // x9
  struct QuestRewardInfo_array *v79; // x20
  TerminalPramsManager_c *v80; // x0
  struct QuestRewardInfo_array **p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  struct QuestRewardInfo_array *resultBoostItemRewardInfo; // x8
  struct QuestRewardInfo_array *v85; // x20
  TerminalPramsManager_c *v86; // x0
  struct QuestRewardInfo_array **p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v88; // x0
  __int64 v89; // x1
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo; // x8
  struct QuestRewardInfo_array *v91; // x20
  TerminalPramsManager_c *v92; // x0
  struct QuestRewardInfo_array **p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  bool isDispOnly; // w20
  TerminalPramsManager_c *v97; // x8
  struct WarClearReward_array *warClearReward; // x9
  struct WarClearReward_array *v99; // x20
  TerminalPramsManager_c *v100; // x0
  struct WarClearReward_array **p_warClearReward_k__BackingField; // x0
  __int64 v102; // x0
  __int64 v103; // x1
  int32_t EventActivityPointEffectState; // w20
  TerminalPramsManager_c *v105; // x8
  bool isWarBoardClear; // w21
  struct TerminalPramsManager_StaticFields **v107; // x9
  struct BattleDropItem_array *questResultAfterEventRewardInfos; // x10
  struct BattleDropItem_array *v109; // x20
  struct BattleDropItem_array **p_mQuestResultAfterEventRewardInfos; // x0
  __int64 v111; // x0
  __int64 v112; // x1
  struct BattleDropItem_array *resultEventPanelRewardInfos; // x8
  TerminalPramsManager_c *v114; // x0
  struct BattleDropItem_array *v115; // x20
  struct BattleDropItem_array **p_mResultEventPanelRewardInfos; // x0
  TerminalPramsManager_c *v117; // x0
  struct LimitImageAnnounce_array *limitImageAnnounces; // x20
  struct LimitImageAnnounce_array **p_limitImageAnnounces_k__BackingField; // x0
  bool isOrdealCallWarClear; // w20
  TerminalPramsManager_c *v121; // x8
  int32_t eventMuralId; // w21
  TerminalPramsManager_c *v123; // x8
  TerminalPramsManager_c *v124; // x0
  __int64 v125; // x0

  if ( (byte_438848C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_ClearData_TypeInfo);
    sub_B775C4(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438848C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387496 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387496 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_isQuestRewardSetted_k__BackingField )
  {
    v2 = TerminalPramsManager_ClearData_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
      v2 = TerminalPramsManager_ClearData_TypeInfo;
    }
    if ( UnityEngine_PlayerPrefs__HasKey(v2->static_fields->SAVEKEY_CLEAR_REWARD_DISP, 0LL) )
    {
      v3 = TerminalPramsManager_ClearData_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
        v3 = TerminalPramsManager_ClearData_TypeInfo;
      }
      String_36337972 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_36337972(
                                          v3->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v5 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             String_36337972,
             (const MethodInfo_1DF1654 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v6 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v6 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = &v6->static_fields->mQuestClearHeroineInfo;
      *p_mQuestClearHeroineInfo = 0LL;
      sub_B77560(p_mQuestClearHeroineInfo);
      if ( !v5 )
        sub_B7769C(v8, v9);
      qClearHeroineInfo = v5->fields.qClearHeroineInfo;
      if ( !qClearHeroineInfo )
        sub_B7769C(v8, v9);
      oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
      if ( oldUsrSvtData && oldUsrSvtData->fields.svtId >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(v5->fields.qClearHeroineInfo, 0LL);
        v13 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v13 = TerminalPramsManager_TypeInfo;
        }
        v14 = &v13->static_fields->mQuestClearHeroineInfo;
        *v14 = Load;
        sub_B77560(v14);
      }
      v15 = (__int64)TerminalPramsManager_TypeInfo;
      questClear = v5->fields.questClear;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387493 )
      {
        v15 = sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387493 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v17->static_fields->_IsQuestClear_k__BackingField = questClear;
      phaseClear = v5->fields.phaseClear;
      if ( !byte_4387494 )
      {
        v15 = sub_B775C4(&TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
        byte_4387494 = 1;
      }
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = TerminalPramsManager_TypeInfo;
      }
      p_static_fields = &v17->static_fields;
      v17->static_fields->_IsPhaseClear_k__BackingField = phaseClear;
      questRewardInfos = v5->fields.questRewardInfos;
      if ( !questRewardInfos )
        sub_B7769C(v15, v9);
      if ( *(_QWORD *)&questRewardInfos->max_length )
        v21 = v5->fields.questRewardInfos;
      else
        v21 = 0LL;
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
      }
      p_mQuestRewardInfos = &(*p_static_fields)->mQuestRewardInfos;
      *p_mQuestRewardInfos = v21;
      sub_B77560(p_mQuestRewardInfos);
      questPhaseRewardInfos = v5->fields.questPhaseRewardInfos;
      if ( !questPhaseRewardInfos )
        sub_B7769C(v23, v24);
      v26 = TerminalPramsManager_TypeInfo;
      if ( *(_QWORD *)&questPhaseRewardInfos->max_length )
        v27 = v5->fields.questPhaseRewardInfos;
      else
        v27 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v26 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = &v26->static_fields->mQuestPhaseRewardInfos;
      *p_mQuestPhaseRewardInfos = v27;
      sub_B77560(p_mQuestPhaseRewardInfos);
      v31 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = v5->fields.clearedLastBattleRaidId;
      v31->static_fields->clearBattleRaidId = v5->fields.clearedBattleRaidId;
      v31->static_fields->joinGroupId = v5->fields.joinGroup;
      mOldSuperBoss = v5->fields.mOldSuperBoss;
      if ( !mOldSuperBoss )
        sub_B7769C(v29, v30);
      if ( *(_QWORD *)&mOldSuperBoss->max_length )
        v33 = v5->fields.mOldSuperBoss;
      else
        v33 = 0LL;
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v31);
      if ( !byte_4387B4A )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387B4A = 1;
      }
      v34 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v34 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v34->static_fields;
      static_fields->_oldSuperBoss_k__BackingField = v33;
      sub_B77560(&static_fields->_oldSuperBoss_k__BackingField);
      oldPersonalBoss = v5->fields.oldPersonalBoss;
      if ( !oldPersonalBoss )
        sub_B7769C(v36, v37);
      if ( *(_QWORD *)&oldPersonalBoss->max_length )
        v39 = v5->fields.oldPersonalBoss;
      else
        v39 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387B4C )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387B4C = 1;
      }
      v40 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v40 = TerminalPramsManager_TypeInfo;
      }
      v41 = v40->static_fields;
      v41->_oldPersonalBoss_k__BackingField = v39;
      sub_B77560(&v41->_oldPersonalBoss_k__BackingField);
      evPointWinReward = v5->fields.evPointWinReward;
      if ( !evPointWinReward )
        sub_B7769C(v42, v43);
      if ( evPointWinReward->fields.id <= 0 )
        v45 = 0LL;
      else
        v45 = v5->fields.evPointWinReward;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_43884D3 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43884D3 = 1;
      }
      v46 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v46 = TerminalPramsManager_TypeInfo;
      }
      p_eventPointWinReward_k__BackingField = &v46->static_fields->_eventPointWinReward_k__BackingField;
      *p_eventPointWinReward_k__BackingField = v45;
      sub_B77560(p_eventPointWinReward_k__BackingField);
      evPointWinType = v5->fields.evPointWinType;
      if ( !byte_43884D4 )
      {
        v48 = sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43884D4 = 1;
      }
      v51 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v51 = TerminalPramsManager_TypeInfo;
      }
      v51->static_fields->_eventPointWinType_k__BackingField = evPointWinType;
      evRaceBoost = v5->fields.evRaceBoost;
      if ( !evRaceBoost )
        sub_B7769C(v48, v49);
      if ( evRaceBoost->fields.termId <= 0 )
        v53 = 0LL;
      else
        v53 = v5->fields.evRaceBoost;
      if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v51);
      if ( !byte_43884D6 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43884D6 = 1;
      }
      v54 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v54 = TerminalPramsManager_TypeInfo;
      }
      p_eventRaceBoost_k__BackingField = &v54->static_fields->_eventRaceBoost_k__BackingField;
      *p_eventRaceBoost_k__BackingField = v53;
      sub_B77560(p_eventRaceBoost_k__BackingField);
      questClearCostume = v5->fields.questClearCostume;
      if ( !questClearCostume )
        sub_B7769C(v56, v57);
      if ( *(_QWORD *)&questClearCostume->max_length )
        v59 = v5->fields.questClearCostume;
      else
        v59 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_43884D2 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43884D2 = 1;
      }
      v60 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v60 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = &v60->static_fields->_questClearCostumeRelease_k__BackingField;
      *p_questClearCostumeRelease_k__BackingField = v59;
      sub_B77560(p_questClearCostumeRelease_k__BackingField);
      questClearCostumeGetInfo = v5->fields.questClearCostumeGetInfo;
      if ( !questClearCostumeGetInfo )
        sub_B7769C(v62, v63);
      if ( *(_QWORD *)&questClearCostumeGetInfo->max_length )
        v65 = v5->fields.questClearCostumeGetInfo;
      else
        v65 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387491 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387491 = 1;
      }
      v66 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v66 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = &v66->static_fields->_questClearCostumeGet_k__BackingField;
      *p_questClearCostumeGet_k__BackingField = v65;
      sub_B77560(p_questClearCostumeGet_k__BackingField);
      eventTowerReward = v5->fields.eventTowerReward;
      if ( !eventTowerReward )
        sub_B7769C(v68, v69);
      if ( eventTowerReward->fields.eventId <= 0 )
        v71 = 0LL;
      else
        v71 = v5->fields.eventTowerReward;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387B4F )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387B4F = 1;
      }
      v72 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v72 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = &v72->static_fields->_eventTowerReward_k__BackingField;
      *p_eventTowerReward_k__BackingField = v71;
      sub_B77560(p_eventTowerReward_k__BackingField);
      resultEventTowerRewardInfo = v5->fields.resultEventTowerRewardInfo;
      if ( !resultEventTowerRewardInfo )
        sub_B7769C(v74, v75);
      v77 = *(_QWORD *)&resultEventTowerRewardInfo->max_length;
      if ( v77 )
      {
        if ( !(_DWORD)v77 )
        {
          v125 = sub_B776C8(v74);
          sub_B77668(v125, 0LL);
        }
        v78 = resultEventTowerRewardInfo->m_Items[0];
        if ( !v78 )
          sub_B7769C(v74, v75);
        if ( v78->fields.userSvtId <= 0 )
          v79 = 0LL;
        else
          v79 = v5->fields.resultEventTowerRewardInfo;
      }
      else
      {
        v79 = 0LL;
      }
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387B50 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387B50 = 1;
      }
      v80 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v80 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = &v80->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      *p_resultEventTowerRewardInfo_k__BackingField = v79;
      sub_B77560(p_resultEventTowerRewardInfo_k__BackingField);
      resultBoostItemRewardInfo = v5->fields.resultBoostItemRewardInfo;
      if ( !resultBoostItemRewardInfo )
        sub_B7769C(v82, v83);
      if ( *(_QWORD *)&resultBoostItemRewardInfo->max_length )
        v85 = v5->fields.resultBoostItemRewardInfo;
      else
        v85 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387488 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387488 = 1;
      }
      v86 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v86 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = &v86->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      *p_resultBoostItemRewardInfo_k__BackingField = v85;
      sub_B77560(p_resultBoostItemRewardInfo_k__BackingField);
      resultEventBoardGameTokenRewardInfo = v5->fields.resultEventBoardGameTokenRewardInfo;
      if ( !resultEventBoardGameTokenRewardInfo )
        sub_B7769C(v88, v89);
      if ( *(_QWORD *)&resultEventBoardGameTokenRewardInfo->max_length )
        v91 = v5->fields.resultEventBoardGameTokenRewardInfo;
      else
        v91 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387489 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387489 = 1;
      }
      v92 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v92 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = &v92->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      *p_resultEventBoardGameTokenRewardInfo_k__BackingField = v91;
      sub_B77560(p_resultEventBoardGameTokenRewardInfo_k__BackingField);
      isDispOnly = v5->fields.isDispOnly;
      if ( !byte_43882BC )
      {
        v94 = sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43882BC = 1;
      }
      v97 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v97 = TerminalPramsManager_TypeInfo;
      }
      v97->static_fields->_IsDispOnly_k__BackingField = isDispOnly;
      warClearReward = v5->fields.warClearReward;
      if ( !warClearReward )
        sub_B7769C(v94, v95);
      if ( *(_QWORD *)&warClearReward->max_length )
        v99 = v5->fields.warClearReward;
      else
        v99 = 0LL;
      if ( (BYTE3(v97->vtable._0_Equals.methodPtr) & 4) != 0 && !v97->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v97);
      if ( !byte_4387498 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387498 = 1;
      }
      v100 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v100 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = &v100->static_fields->_warClearReward_k__BackingField;
      *p_warClearReward_k__BackingField = v99;
      sub_B77560(p_warClearReward_k__BackingField);
      EventActivityPointEffectState = v5->fields.EventActivityPointEffectState;
      if ( !byte_4387FD2 )
      {
        v102 = sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387FD2 = 1;
      }
      v105 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v105 = TerminalPramsManager_TypeInfo;
      }
      v105->static_fields->_EventActivityPointEffectState_k__BackingField = EventActivityPointEffectState;
      isWarBoardClear = v5->fields.isWarBoardClear;
      if ( !byte_4387495 )
      {
        v102 = sub_B775C4(&TerminalPramsManager_TypeInfo);
        v105 = TerminalPramsManager_TypeInfo;
        byte_4387495 = 1;
      }
      if ( (BYTE3(v105->vtable._0_Equals.methodPtr) & 4) != 0 && !v105->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v105);
        v105 = TerminalPramsManager_TypeInfo;
      }
      v107 = &v105->static_fields;
      v105->static_fields->_IsWarBoardClear_k__BackingField = isWarBoardClear;
      questResultAfterEventRewardInfos = v5->fields.questResultAfterEventRewardInfos;
      if ( !questResultAfterEventRewardInfos )
        sub_B7769C(v102, v103);
      if ( *(_QWORD *)&questResultAfterEventRewardInfos->max_length )
        v109 = v5->fields.questResultAfterEventRewardInfos;
      else
        v109 = 0LL;
      if ( (BYTE3(v105->vtable._0_Equals.methodPtr) & 4) != 0 && !v105->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v105);
        v107 = &TerminalPramsManager_TypeInfo->static_fields;
      }
      p_mQuestResultAfterEventRewardInfos = &(*v107)->mQuestResultAfterEventRewardInfos;
      *p_mQuestResultAfterEventRewardInfos = v109;
      sub_B77560(p_mQuestResultAfterEventRewardInfos);
      resultEventPanelRewardInfos = v5->fields.resultEventPanelRewardInfos;
      if ( !resultEventPanelRewardInfos )
        sub_B7769C(v111, v112);
      v114 = TerminalPramsManager_TypeInfo;
      if ( *(_QWORD *)&resultEventPanelRewardInfos->max_length )
        v115 = v5->fields.resultEventPanelRewardInfos;
      else
        v115 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v114 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = &v114->static_fields->mResultEventPanelRewardInfos;
      *p_mResultEventPanelRewardInfos = v115;
      sub_B77560(p_mResultEventPanelRewardInfos);
      v117 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = v5->fields.panelEventPoint;
      limitImageAnnounces = v5->fields.limitImageAnnounces;
      if ( !byte_438748C )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        v117 = TerminalPramsManager_TypeInfo;
        byte_438748C = 1;
      }
      if ( (BYTE3(v117->vtable._0_Equals.methodPtr) & 4) != 0 && !v117->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v117);
        v117 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = &v117->static_fields->_limitImageAnnounces_k__BackingField;
      *p_limitImageAnnounces_k__BackingField = limitImageAnnounces;
      sub_B77560(p_limitImageAnnounces_k__BackingField);
      isOrdealCallWarClear = v5->fields.isOrdealCallWarClear;
      if ( !byte_43874B2 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43874B2 = 1;
      }
      v121 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v121 = TerminalPramsManager_TypeInfo;
      }
      v121->static_fields->_IsOrdealCallWarClear_k__BackingField = isOrdealCallWarClear;
      eventMuralId = v5->fields.eventMuralId;
      if ( !byte_4387485 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        v121 = TerminalPramsManager_TypeInfo;
        byte_4387485 = 1;
      }
      if ( (BYTE3(v121->vtable._0_Equals.methodPtr) & 4) != 0 && !v121->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v121);
        v121 = TerminalPramsManager_TypeInfo;
      }
      v121->static_fields->_EventMuralId_k__BackingField = eventMuralId;
      if ( v5->fields.phaseClear )
      {
        if ( (BYTE3(v121->vtable._0_Equals.methodPtr) & 4) != 0 && !v121->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v121);
        if ( !byte_438746E )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_438746E = 1;
        }
        v121 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v121 = TerminalPramsManager_TypeInfo;
        }
        v121->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( (BYTE3(v121->vtable._0_Equals.methodPtr) & 4) != 0 && !v121->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v121);
      if ( !byte_4387497 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387497 = 1;
      }
      v123 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v123 = TerminalPramsManager_TypeInfo;
      }
      if ( v123->static_fields->_warClearReward_k__BackingField )
        goto LABEL_304;
      if ( (BYTE3(v123->vtable._0_Equals.methodPtr) & 4) != 0 && !v123->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v123);
      if ( !byte_4387492 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387492 = 1;
      }
      v123 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v123 = TerminalPramsManager_TypeInfo;
      }
      if ( v123->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_304:
        if ( (BYTE3(v123->vtable._0_Equals.methodPtr) & 4) != 0 && !v123->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v123);
        if ( !byte_43884DB )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_43884DB = 1;
        }
        v124 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v124 = TerminalPramsManager_TypeInfo;
        }
        v124->static_fields->_isQuestRewardSetted_k__BackingField = 1;
      }
    }
  }
}


void __fastcall TerminalPramsManager__LoadEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *String; // x20
  EventRaidDefeatedEffectInfo_o *v3; // x19
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_438848F & 1) == 0 )
  {
    sub_B775C4(&EventRaidDefeatedEffectInfo_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11776/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_438848F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884DD )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884DD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11776/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v3 = (EventRaidDefeatedEffectInfo_o *)sub_B77694(EventRaidDefeatedEffectInfo_TypeInfo);
    EventRaidDefeatedEffectInfo___ctor(v3, String, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884DC )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884DC = 1;
    }
    v4 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v4 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v4->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v3;
    sub_B77560(&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField);
  }
}


void __fastcall TerminalPramsManager__LoadQuestRandomGroupList(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *String; // x20
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  int max_length; // w8
  System_String_array *v7; // x20
  unsigned int v8; // w24
  System_String_o *v9; // x21
  System_String_array *v10; // x21
  TerminalPramsManager_c *v11; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **p_QuestRandomGroupList_k__BackingField; // x0
  __int64 v13; // x0
  int32_t result[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4388494 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11785/*"SAVEKEY_QuestRandomGroupList"*/);
    byte_4388494 = 1;
  }
  *(_QWORD *)result = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884DF )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884DF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->_QuestRandomGroupList_k__BackingField )
  {
    String = UnityEngine_PlayerPrefs__GetString(
               (System_String_o *)StringLiteral_11785/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v3,
      (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    v4 = (System_String_array *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !v4 )
      goto LABEL_42;
    v5 = v4;
    if ( !v4->max_length )
      goto LABEL_43;
    LOWORD(v4->m_Items[0]) = 44;
    if ( !String || (v4 = System_String__Split(String, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_42:
      sub_B7769C(v4, v5);
    max_length = v4->max_length;
    v7 = v4;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( v8 < max_length )
      {
        v9 = v7->m_Items[v8];
        v4 = (System_String_array *)sub_B775DC(char___TypeInfo, 1LL);
        if ( !v4 )
          goto LABEL_42;
        v5 = v4;
        if ( !v4->max_length )
          break;
        LOWORD(v4->m_Items[0]) = 58;
        if ( !v9 )
          goto LABEL_42;
        v4 = System_String__Split(v9, (System_Char_array *)v4, 0LL);
        if ( !v4 )
          goto LABEL_42;
        v10 = v4;
        if ( (int)v4->max_length >= 2 )
        {
          v4 = (System_String_array *)System_Int32__TryParse(v4->m_Items[0], &result[1], 0LL);
          if ( result[1] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
          {
            if ( v10->max_length <= 1 )
              break;
            v4 = (System_String_array *)System_Int32__TryParse(v10->m_Items[1], result, 0LL);
            if ( result[0] >= 1 && ((unsigned __int8)v4 & 1) != 0 )
            {
              if ( !v3 )
                goto LABEL_42;
              System_Collections_Generic_Dictionary_int__int___Add(
                v3,
                result[1],
                result[0],
                (const MethodInfo_2FE8D70 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v7->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_32;
      }
LABEL_43:
      v13 = sub_B776C8(v4);
      sub_B77668(v13, 0LL);
    }
LABEL_32:
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884DE )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884DE = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = &v11->static_fields->_QuestRandomGroupList_k__BackingField;
    *p_QuestRandomGroupList_k__BackingField = v3;
    sub_B77560(p_QuestRandomGroupList_k__BackingField);
  }
}


void __fastcall TerminalPramsManager__LoadQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_438847E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438847E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager
    || (QuestFocusStateManager__ClearQuestFocusStateDataList(QuestFocusStateManager, 0LL),
        (QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager(v4)) == 0LL) )
  {
    sub_B7769C(QuestFocusStateManager, v3);
  }
  QuestFocusStateManager__ReadData(QuestFocusStateManager, 0LL);
}


void __fastcall TerminalPramsManager__Load_SaveData(const MethodInfo *method)
{
  System_String_o *v1; // x19
  int32_t Int_36337364; // w19
  TerminalPramsManager_c *v3; // x0
  System_String_o *v4; // x19
  int32_t v5; // w19
  TerminalPramsManager_c *v6; // x0
  System_String_o *v7; // x19
  int32_t v8; // w19
  TerminalPramsManager_c *v9; // x0
  System_String_o *v10; // x19
  int32_t v11; // w19
  TerminalPramsManager_c *v12; // x0
  System_String_o *v13; // x19
  int32_t v14; // w19
  TerminalPramsManager_c *v15; // x0
  System_String_o *v16; // x19
  int32_t v17; // w19
  TerminalPramsManager_c *v18; // x0
  System_String_o *v19; // x19
  System_String_o *String_36337972; // x20
  int64_t v21; // x19
  TerminalPramsManager_c *v22; // x0
  System_String_o *v23; // x19
  int32_t v24; // w19
  TerminalPramsManager_c *v25; // x0
  System_String_o *v26; // x19
  System_String_o *v27; // x19
  TerminalPramsManager_c *v28; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v30; // x19
  int32_t v31; // w19
  TerminalPramsManager_c *v32; // x0
  System_String_o *v33; // x19
  int32_t v34; // w19
  TerminalPramsManager_c *v35; // x0
  System_String_o *v36; // x19
  int32_t v37; // w19
  TerminalPramsManager_c *v38; // x0
  System_String_o *v39; // x19
  int32_t v40; // w19
  TerminalPramsManager_c *v41; // x0
  System_String_o *v42; // x19
  int32_t v43; // w19
  TerminalPramsManager_c *v44; // x0
  System_String_o *v45; // x19
  int32_t v46; // w19
  TerminalPramsManager_c *v47; // x0
  System_String_o *v48; // x19
  System_String_o *v49; // x20
  int64_t v50; // x19
  TerminalPramsManager_c *v51; // x0
  System_String_o *v52; // x19
  int32_t v53; // w19
  TerminalPramsManager_c *v54; // x0
  System_String_o *v55; // x19
  int32_t v56; // w19
  TerminalPramsManager_c *v57; // x0
  System_String_o *v58; // x19
  Il2CppObject *v59; // x19
  TerminalPramsManager_ClearData_o *v60; // x19
  TerminalPramsManager_c *v61; // x0
  _QWORD *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v63; // x19
  const MethodInfo *v64; // x2
  int32_t v65; // w20
  TerminalPramsManager_c *v66; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v68; // x19
  Il2CppObject *v69; // x19
  TerminalPramsManager_ClearData_o *v70; // x19
  TerminalPramsManager_c *v71; // x8
  _QWORD *p_eventConquestInfos; // x0
  System_String_o *v73; // x19
  int32_t v74; // w19
  TerminalPramsManager_c *v75; // x8
  System_String_o *v76; // x19
  Il2CppObject *v77; // x19
  TerminalPramsManager_ClearData_o *v78; // x19
  TerminalPramsManager_c *v79; // x8
  _QWORD *p_eventHarvestGrowthInfo; // x0
  System_String_o *v81; // x19
  System_String_o *v82; // x19
  TerminalPramsManager_c *v83; // x8
  struct System_String_o **p_lastPlayBgmName; // x0
  System_String_o *v85; // x19
  int32_t v86; // w19
  TerminalPramsManager_c *v87; // x8
  System_String_o *v88; // x19
  int32_t v89; // w19
  TerminalPramsManager_c *v90; // x0
  System_String_o *v91; // x19
  int32_t v92; // w19
  TerminalPramsManager_c *v93; // x8
  System_String_o *v94; // x19
  System_String_o *v95; // x19
  TerminalPramsManager_c *v96; // x0
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v98; // x19
  int32_t v99; // w19
  TerminalPramsManager_c *v100; // x0
  System_String_o *v101; // x19
  int32_t v102; // w19
  TerminalPramsManager_c *v103; // x0
  System_String_o *v104; // x19
  int32_t v105; // w19
  TerminalPramsManager_c *v106; // x0
  System_String_o *v107; // x19
  int32_t v108; // w19
  TerminalPramsManager_c *v109; // x0
  System_String_o *v110; // x19
  int32_t v111; // w19
  TerminalPramsManager_c *v112; // x8
  System_String_o *v113; // x19
  int32_t v114; // w19
  TerminalPramsManager_c *v115; // x8
  System_String_o *v116; // x19
  int32_t v117; // w19
  TerminalPramsManager_c *v118; // x0
  System_String_o *v119; // x19
  System_String_o *v120; // x19
  TerminalPramsManager_c *v121; // x0
  struct System_String_o **p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v123; // x19
  System_String_o *v124; // x19
  System_String_array *v125; // x0
  System_String_array *v126; // x1
  __int64 v127; // x8
  System_String_array *v128; // x19
  int32_t v129; // w20
  TerminalPramsManager_c *v130; // x8
  int32_t v131; // w0
  int32_t v132; // w19
  TerminalPramsManager_c *v133; // x0
  System_String_o *v134; // x19
  int32_t v135; // w19
  TerminalPramsManager_c *v136; // x0
  System_String_o *v137; // x19
  int32_t v138; // w19
  TerminalPramsManager_c *v139; // x0
  System_String_o *v140; // x19
  Il2CppObject *v141; // x19
  TerminalPramsManager_ClearData_o *v142; // x19
  TerminalPramsManager_c *v143; // x0
  struct TerminalPramsManager_StaticFields *v144; // x0
  System_String_o *v145; // x19
  int32_t v146; // w19
  TerminalPramsManager_c *v147; // x0
  System_String_o *v148; // x19
  int32_t v149; // w19
  TerminalPramsManager_c *v150; // x0
  __int64 v151; // x0

  if ( (byte_4388452 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    sub_B775C4(&Method_JsonManager_Deserialize_EventConquestInfo_____);
    sub_B775C4(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    sub_B775C4(&Method_JsonManager_Deserialize_EventSaveData___);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11777/*"SAVEKEY_LastPlayBgmName"*/);
    sub_B775C4(&StringLiteral_13866/*"TerminalEndTime"*/);
    sub_B775C4(&StringLiteral_11783/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_B775C4(&StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/);
    sub_B775C4(&StringLiteral_11771/*"SAVEKEY_CampaignDirectBonus"*/);
    sub_B775C4(&StringLiteral_11778/*"SAVEKEY_LastPlayQuestConsumeType"*/);
    sub_B775C4(&StringLiteral_11789/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_B775C4(&StringLiteral_13867/*"TerminalEventDailyPointEventId"*/);
    sub_B775C4(&StringLiteral_13864/*"TerminalBeforeEventSubmarinePointData"*/);
    sub_B775C4(&StringLiteral_13873/*"TerminalPhaseCnt"*/);
    sub_B775C4(&StringLiteral_11787/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_B775C4(&StringLiteral_13881/*"TerminalTimeStatusEventId"*/);
    sub_B775C4(&StringLiteral_13865/*"TerminalDispState"*/);
    sub_B775C4(&StringLiteral_11780/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_B775C4(&StringLiteral_13868/*"TerminalIsDoneShortcut"*/);
    sub_B775C4(&StringLiteral_11779/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_B775C4(&StringLiteral_11784/*"SAVEKEY_PlayerGenderType"*/);
    sub_B775C4(&StringLiteral_11769/*"SAVEKEY_BlankEarthRank"*/);
    sub_B775C4(&StringLiteral_13869/*"TerminalLastPanelEventPoint"*/);
    sub_B775C4(&StringLiteral_11788/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    sub_B775C4(&StringLiteral_11772/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_B775C4(&StringLiteral_11781/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_B775C4(&StringLiteral_5335/*"Debug_IsQuestReleaseAll"*/);
    sub_B775C4(&StringLiteral_5332/*"Debug_IsDummyErrorSelect"*/);
    sub_B775C4(&StringLiteral_13876/*"TerminalQuestId"*/);
    sub_B775C4(&StringLiteral_11786/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    sub_B775C4(&StringLiteral_11791/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_B775C4(&StringLiteral_13880/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_B775C4(&StringLiteral_13885/*"TerminalWarId"*/);
    sub_B775C4(&StringLiteral_13878/*"TerminalSpotId"*/);
    sub_B775C4(&StringLiteral_13882/*"TerminalTimeStatusLoopCount"*/);
    sub_B775C4(&StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_B775C4(&StringLiteral_11770/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_B775C4(&StringLiteral_11775/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_B775C4(&StringLiteral_13886/*"TerminalWarStartedIds"*/);
    sub_B775C4(&StringLiteral_11774/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_B775C4(&StringLiteral_13870/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_B775C4(&StringLiteral_11773/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_B775C4(&StringLiteral_11782/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_13871/*"TerminalLastPlayedQuestId"*/);
    sub_B775C4(&StringLiteral_5331/*"Debug_IsBuildInfoDisp"*/);
    sub_B775C4(&StringLiteral_11790/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4388452 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13865/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13865/*"TerminalDispState"*/, 0LL) )
  {
    Int_36337364 = UnityEngine_PlayerPrefs__GetInt_36337364(v1, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_438746D )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438746D = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    v3->static_fields->_DispState_k__BackingField = Int_36337364;
  }
  v4 = (System_String_o *)StringLiteral_13885/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13885/*"TerminalWarId"*/, 0LL) )
  {
    v5 = UnityEngine_PlayerPrefs__GetInt_36337364(v4, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387467 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387467 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_WarId_k__BackingField = v5;
  }
  v7 = (System_String_o *)StringLiteral_13878/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13878/*"TerminalSpotId"*/, 0LL) )
  {
    v8 = UnityEngine_PlayerPrefs__GetInt_36337364(v7, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_438749A )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438749A = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_SpotId_k__BackingField = v8;
  }
  v10 = (System_String_o *)StringLiteral_13876/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13876/*"TerminalQuestId"*/, 0LL) )
  {
    v11 = UnityEngine_PlayerPrefs__GetInt_36337364(v10, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387469 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387469 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_QuestId_k__BackingField = v11;
  }
  v13 = (System_String_o *)StringLiteral_13871/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13871/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v14 = UnityEngine_PlayerPrefs__GetInt_36337364(v13, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43874BE )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43874BE = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v15->static_fields->_LastPlayedQuestId_k__BackingField = v14;
  }
  v16 = (System_String_o *)StringLiteral_13873/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13873/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v17 = UnityEngine_PlayerPrefs__GetInt_36337364(v16, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_438746A )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438746A = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_PhaseCnt_k__BackingField = v17;
  }
  v19 = (System_String_o *)StringLiteral_13866/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13866/*"TerminalEndTime"*/, 0LL) )
  {
    String_36337972 = UnityEngine_PlayerPrefs__GetString_36337972(v19, 0LL);
    v21 = 0LL;
    if ( System_String__op_Inequality(String_36337972, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v21 = System_Convert__ToInt64_42783488(String_36337972, 0LL);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43874B7 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43874B7 = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    v22->static_fields->_EndTime_k__BackingField = v21;
  }
  v23 = (System_String_o *)StringLiteral_13868/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13868/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v24 = UnityEngine_PlayerPrefs__GetInt_36337364(v23, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387470 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387470 = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    v25->static_fields->_IsDoneShortcut_k__BackingField = v24 != 0;
  }
  v26 = (System_String_o *)StringLiteral_13886/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13886/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v27 = UnityEngine_PlayerPrefs__GetString_36337972(v26, 0LL);
    v28 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v28 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v28->static_fields;
    static_fields->mTerminalWarStartedIds = v27;
    sub_B77560(&static_fields->mTerminalWarStartedIds);
  }
  v30 = (System_String_o *)StringLiteral_5335/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5335/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v31 = UnityEngine_PlayerPrefs__GetInt_36337364(v30, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884A3 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884A3 = 1;
    }
    v32 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v32 = TerminalPramsManager_TypeInfo;
    }
    v32->static_fields->mDebug_IsQuestReleaseAll = v31 != 0;
  }
  v33 = (System_String_o *)StringLiteral_5332/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5332/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v34 = UnityEngine_PlayerPrefs__GetInt_36337364(v33, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884A4 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884A4 = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = TerminalPramsManager_TypeInfo;
    }
    v35->static_fields->mDebug_IsDummyErrorSelect = v34 != 0;
  }
  v36 = (System_String_o *)StringLiteral_5331/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5331/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v37 = UnityEngine_PlayerPrefs__GetInt_36337364(v36, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884A5 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884A5 = 1;
    }
    v38 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v38 = TerminalPramsManager_TypeInfo;
    }
    v38->static_fields->mDebug_IsBuildInfoDisp = v37 != 0;
  }
  v39 = (System_String_o *)StringLiteral_13881/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13881/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v40 = UnityEngine_PlayerPrefs__GetInt_36337364(v39, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43874B9 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43874B9 = 1;
    }
    v41 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v41 = TerminalPramsManager_TypeInfo;
    }
    v41->static_fields->_TimeStatusEventId_k__BackingField = v40;
  }
  v42 = (System_String_o *)StringLiteral_13882/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13882/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v43 = UnityEngine_PlayerPrefs__GetInt_36337364(v42, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43874BA )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43874BA = 1;
    }
    v44 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v44 = TerminalPramsManager_TypeInfo;
    }
    v44->static_fields->_TimeStatusLoopCount_k__BackingField = v43;
  }
  v45 = (System_String_o *)StringLiteral_13867/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13867/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v46 = UnityEngine_PlayerPrefs__GetInt_36337364(v45, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387B44 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387B44 = 1;
    }
    v47 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v47 = TerminalPramsManager_TypeInfo;
    }
    v47->static_fields->_EventDailyPointEventId_k__BackingField = v46;
  }
  v48 = (System_String_o *)StringLiteral_13880/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13880/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v49 = UnityEngine_PlayerPrefs__GetString_36337972(v48, 0LL);
    v50 = 0LL;
    if ( !System_String__op_Equality(v49, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v50 = System_Convert__ToInt64_42783488(v49, 0LL);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387B43 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387B43 = 1;
    }
    v51 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v51 = TerminalPramsManager_TypeInfo;
    }
    v51->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v50;
  }
  v52 = (System_String_o *)StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v53 = UnityEngine_PlayerPrefs__GetInt_36337364(v52, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884A7 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884A7 = 1;
    }
    v54 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v54 = TerminalPramsManager_TypeInfo;
    }
    v54->static_fields->_BeforeEventActivityPoint_k__BackingField = v53;
  }
  v55 = (System_String_o *)StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v56 = UnityEngine_PlayerPrefs__GetInt_36337364(v55, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884A8 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884A8 = 1;
    }
    v57 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v57 = TerminalPramsManager_TypeInfo;
    }
    v57->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v56;
  }
  v58 = (System_String_o *)StringLiteral_13864/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13864/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v59 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_36337972(v58, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v60 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            v59,
            (const MethodInfo_1DF1654 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884A9 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884A9 = 1;
    }
    v61 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v61 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = &v61->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    *p_BeforeEventSubmarineSaveData_k__BackingField = v60;
    sub_B77560(p_BeforeEventSubmarineSaveData_k__BackingField);
  }
  v63 = (System_String_o *)StringLiteral_11789/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11789/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v65 = UnityEngine_PlayerPrefs__GetInt_36337364(v63, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884A1 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884A1 = 1;
    }
    v66 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v66 = TerminalPramsManager_TypeInfo;
    }
    v66->static_fields->_LastSelectQuestIndex_k__BackingField = v65;
    if ( !byte_4387465 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      v66 = TerminalPramsManager_TypeInfo;
      byte_4387465 = 1;
    }
    if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v66->static_fields->_WarId_k__BackingField;
    if ( !byte_43884BC )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      v66 = TerminalPramsManager_TypeInfo;
      byte_43884BC = 1;
    }
    if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v66->static_fields->_LastSelectQuestIndex_k__BackingField,
      v64);
  }
  v68 = (System_String_o *)StringLiteral_11787/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11787/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v69 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_36337972(v68, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v70 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            v69,
            (const MethodInfo_1DF1654 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v71 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v71 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = &v71->static_fields->eventConquestInfos;
    *p_eventConquestInfos = v70;
    sub_B77560(p_eventConquestInfos);
  }
  v73 = (System_String_o *)StringLiteral_11786/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11786/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v74 = UnityEngine_PlayerPrefs__GetInt_36337364(v73, 0LL);
    v75 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v75 = TerminalPramsManager_TypeInfo;
    }
    v75->static_fields->eventConquestInfoDisp = v74 != 0;
  }
  v76 = (System_String_o *)StringLiteral_11788/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11788/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v77 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_36337972(v76, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v78 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
            v77,
            (const MethodInfo_1DF1654 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v79 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v79 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = &v79->static_fields->eventHarvestGrowthInfo;
    *p_eventHarvestGrowthInfo = v78;
    sub_B77560(p_eventHarvestGrowthInfo);
  }
  v81 = (System_String_o *)StringLiteral_11777/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11777/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v82 = UnityEngine_PlayerPrefs__GetString_36337972(v81, 0LL);
    v83 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v83 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = &v83->static_fields->lastPlayBgmName;
    *p_lastPlayBgmName = v82;
    sub_B77560(p_lastPlayBgmName);
  }
  v85 = (System_String_o *)StringLiteral_11778/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11778/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v86 = UnityEngine_PlayerPrefs__GetInt_36337364(v85, 0LL);
    v87 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v87 = TerminalPramsManager_TypeInfo;
    }
    v87->static_fields->lastPlayQuestConsumeAp = v86;
  }
  v88 = (System_String_o *)StringLiteral_13870/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13870/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v89 = UnityEngine_PlayerPrefs__GetInt_36337364(v88, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43874BF )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43874BF = 1;
    }
    v90 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v90 = TerminalPramsManager_TypeInfo;
    }
    v90->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v89;
  }
  v91 = (System_String_o *)StringLiteral_13869/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13869/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v92 = UnityEngine_PlayerPrefs__GetInt_36337364(v91, 0LL);
    v93 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    v93->static_fields->panelEventPoint = v92;
  }
  v94 = (System_String_o *)StringLiteral_11783/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11783/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v95 = UnityEngine_PlayerPrefs__GetString_36337972(v94, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884AD )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884AD = 1;
    }
    v96 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v96 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = &v96->static_fields->_PlayedTerminalEffects_k__BackingField;
    *p_PlayedTerminalEffects_k__BackingField = v95;
    sub_B77560(p_PlayedTerminalEffects_k__BackingField);
  }
  v98 = (System_String_o *)StringLiteral_11780/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11780/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v99 = UnityEngine_PlayerPrefs__GetInt_36337364(v98, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884AE )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884AE = 1;
    }
    v100 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v100 = TerminalPramsManager_TypeInfo;
    }
    v100->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v99 != 0;
  }
  v101 = (System_String_o *)StringLiteral_11781/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11781/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v102 = UnityEngine_PlayerPrefs__GetInt_36337364(v101, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884AF )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884AF = 1;
    }
    v103 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v103 = TerminalPramsManager_TypeInfo;
    }
    v103->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v102;
  }
  v104 = (System_String_o *)StringLiteral_11782/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11782/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v105 = UnityEngine_PlayerPrefs__GetInt_36337364(v104, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884B0 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884B0 = 1;
    }
    v106 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v106 = TerminalPramsManager_TypeInfo;
    }
    v106->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v105 != 0;
  }
  v107 = (System_String_o *)StringLiteral_11791/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11791/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v108 = UnityEngine_PlayerPrefs__GetInt_36337364(v107, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_438746B )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438746B = 1;
    }
    v109 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v109 = TerminalPramsManager_TypeInfo;
    }
    v109->static_fields->_SelectedStoryQuestId_k__BackingField = v108;
  }
  v110 = (System_String_o *)StringLiteral_11774/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11774/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v111 = UnityEngine_PlayerPrefs__GetInt_36337364(v110, 0LL);
    v112 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v112 = TerminalPramsManager_TypeInfo;
    }
    v112->static_fields->ConnectMarkEventId = v111;
  }
  v113 = (System_String_o *)StringLiteral_11773/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11773/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v114 = UnityEngine_PlayerPrefs__GetInt_36337364(v113, 0LL);
    v115 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v115 = TerminalPramsManager_TypeInfo;
    }
    v115->static_fields->ConnectMarkAnimationId = v114;
  }
  v116 = (System_String_o *)StringLiteral_11790/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11790/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v117 = UnityEngine_PlayerPrefs__GetInt_36337364(v116, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_438746C )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438746C = 1;
    }
    v118 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v118 = TerminalPramsManager_TypeInfo;
    }
    v118->static_fields->_SelectedRecollectionWarId_k__BackingField = v117;
  }
  v119 = (System_String_o *)StringLiteral_11772/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11772/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v120 = UnityEngine_PlayerPrefs__GetString_36337972(v119, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884BD )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884BD = 1;
    }
    v121 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v121 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = &v121->static_fields->_ClearEventQuestIds_k__BackingField;
    *p_ClearEventQuestIds_k__BackingField = v120;
    sub_B77560(p_ClearEventQuestIds_k__BackingField);
  }
  v123 = (System_String_o *)StringLiteral_11779/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11779/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v124 = UnityEngine_PlayerPrefs__GetString_36337972(v123, 0LL);
    if ( !System_String__IsNullOrEmpty(v124, 0LL) )
    {
      v125 = (System_String_array *)sub_B775DC(char___TypeInfo, 1LL);
      if ( v125 )
      {
        v126 = v125;
        if ( !v125->max_length )
          goto LABEL_432;
        LOWORD(v125->m_Items[0]) = 44;
        if ( v124 )
        {
          v125 = System_String__Split(v124, (System_Char_array *)v125, 0LL);
          if ( v125 )
          {
            v127 = *(_QWORD *)&v125->max_length;
            v128 = v125;
            if ( !v127 )
            {
              v129 = 0;
LABEL_357:
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4387B3F )
              {
                sub_B775C4(&TerminalPramsManager_TypeInfo);
                byte_4387B3F = 1;
              }
              v130 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v130 = TerminalPramsManager_TypeInfo;
              }
              v130->static_fields->_MapModelClearQuestId_k__BackingField = v129;
              if ( (int)v128->max_length < 2 )
              {
                v132 = 0;
              }
              else
              {
                v131 = System_Int32__Parse(v128->m_Items[1], 0LL);
                v130 = TerminalPramsManager_TypeInfo;
                v132 = v131;
              }
              if ( (BYTE3(v130->vtable._0_Equals.methodPtr) & 4) != 0 && !v130->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v130);
              if ( !byte_4387B40 )
              {
                sub_B775C4(&TerminalPramsManager_TypeInfo);
                byte_4387B40 = 1;
              }
              v133 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v133 = TerminalPramsManager_TypeInfo;
              }
              v133->static_fields->_MapModelClearPhaseCount_k__BackingField = v132;
              goto LABEL_377;
            }
            if ( (_DWORD)v127 )
            {
              v129 = System_Int32__Parse(v125->m_Items[0], 0LL);
              goto LABEL_357;
            }
LABEL_432:
            v151 = sub_B776C8(v125);
            sub_B77668(v151, 0LL);
          }
        }
      }
      sub_B7769C(v125, v126);
    }
  }
LABEL_377:
  v134 = (System_String_o *)StringLiteral_11775/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11775/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v135 = UnityEngine_PlayerPrefs__GetInt_36337364(v134, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884B2 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884B2 = 1;
    }
    v136 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v136 = TerminalPramsManager_TypeInfo;
    }
    v136->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v135 != 0;
  }
  v137 = (System_String_o *)StringLiteral_11784/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11784/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v138 = UnityEngine_PlayerPrefs__GetInt_36337364(v137, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884B9 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884B9 = 1;
    }
    v139 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v139 = TerminalPramsManager_TypeInfo;
    }
    v139->static_fields->_PlayerGenderType_k__BackingField = v138;
  }
  v140 = (System_String_o *)StringLiteral_11771/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11771/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v141 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_36337972(v140, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v142 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v141,
             (const MethodInfo_1DF1654 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387B47 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387B47 = 1;
    }
    v143 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v143 = TerminalPramsManager_TypeInfo;
    }
    v144 = v143->static_fields;
    v144->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v142;
    sub_B77560(&v144->_CampaignDirectBonus_k__BackingField);
  }
  v145 = (System_String_o *)StringLiteral_11770/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11770/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v146 = UnityEngine_PlayerPrefs__GetInt_36337364(v145, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_438849B )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438849B = 1;
    }
    v147 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v147 = TerminalPramsManager_TypeInfo;
    }
    v147->static_fields->_BlankEarthSpotId_k__BackingField = v146;
  }
  v148 = (System_String_o *)StringLiteral_11769/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11769/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v149 = UnityEngine_PlayerPrefs__GetInt_36337364(v148, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884BE )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884BE = 1;
    }
    v150 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v150 = TerminalPramsManager_TypeInfo;
    }
    v150->static_fields->_BlankEarthRank_k__BackingField = v149;
  }
}


TerminalTransitionInfo_o *__fastcall TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  System_String_o *v1; // x20
  TerminalTransitionInfo_o *v2; // x19
  int32_t Int_36337364; // w0
  int32_t v4; // w20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20

  if ( (byte_4388453 & 1) == 0 )
  {
    sub_B775C4(&TerminalTransitionInfo_TypeInfo);
    sub_B775C4(&StringLiteral_13884/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_B775C4(&StringLiteral_13883/*"TerminalTransitionInfoMissionId"*/);
    byte_4388453 = 1;
  }
  v1 = (System_String_o *)StringLiteral_13883/*"TerminalTransitionInfoMissionId"*/;
  v2 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13883/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_36337364 = UnityEngine_PlayerPrefs__GetInt_36337364(v1, 0LL);
    if ( Int_36337364 < 1 )
    {
      return 0LL;
    }
    else
    {
      v4 = Int_36337364;
      v2 = (TerminalTransitionInfo_o *)sub_B77694(TerminalTransitionInfo_TypeInfo);
      TerminalTransitionInfo___ctor(v2, 0LL);
      if ( !v2 )
        sub_B7769C(v5, v6);
      v2->fields.missionId = v4;
      v7 = (System_String_o *)StringLiteral_13884/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13884/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        v2->fields.voiceAssetName = UnityEngine_PlayerPrefs__GetString_36337972(v7, 0LL);
        sub_B77560(&v2->fields.voiceAssetName);
      }
    }
  }
  return v2;
}


void __fastcall TerminalPramsManager__MapModelClearQuestInfo_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  System_String_o *v2; // x19
  TerminalPramsManager_c *v3; // x0
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438846C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11779/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_B775C4(&StringLiteral_714/*","*/);
    byte_438846C = 1;
  }
  MapModelClearQuestId_k__BackingField = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438748E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438748E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v1->static_fields->_MapModelClearQuestId_k__BackingField;
  v2 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_438748F )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438748F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v3->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v4 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v5 = System_String__Concat_44904220(v2, (System_String_o *)StringLiteral_714/*","*/, v4, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11779/*"SAVEKEY_MapModelClearQuestInfo"*/, v5, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlayQuestSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4388459 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11789/*"SAVEKEY_TerminalLastSelectQuestIndex"*/);
    sub_B775C4(&StringLiteral_13870/*"TerminalLastPlayedFreeQuestSpotId"*/);
    sub_B775C4(&StringLiteral_13871/*"TerminalLastPlayedQuestId"*/);
    byte_4388459 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884CA )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884CA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13871/*"TerminalLastPlayedQuestId"*/,
    v1->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_43884BC )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884BC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11789/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v2->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_43884CB )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884CB = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13870/*"TerminalLastPlayedFreeQuestSpotId"*/,
    v3->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__PlaySystemSE(int32_t seKind, const MethodInfo *method)
{
  const MethodInfo *v3; // x0
  __int16 v4; // w8
  int v5; // w8
  TerminalPramsManager_c *v6; // x0

  if ( (byte_438844E & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438844E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438849F )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438849F = 1;
  }
  v3 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  v4 = WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( (v4 & 0x400) != 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
      v4 = WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr);
    }
    v5 = v4 & 0x400;
  }
  else
  {
    v5 = 0;
  }
  if ( BYTE3(v3[2].klass->vtable[24].methodPtr) )
  {
    if ( v5 && !v3[2].token )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_43884A0 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884A0 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v6->static_fields->_IsAutoNoSe_k__BackingField = 0;
  }
  else
  {
    if ( v5 && !v3[2].token )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !TerminalPramsManager__IsAuto(v3) )
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
  TerminalPramsManager_c *v3; // x0
  struct System_String_o *v4; // x19
  TerminalPramsManager_c *v5; // x0
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v7; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x19
  System_String_o *v9; // x0
  System_String_o *v10; // x19
  TerminalPramsManager_c *v11; // x0
  struct System_String_o **v12; // x0
  const MethodInfo *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = effectId;
  if ( (byte_4388474 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388474 = 1;
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
    if ( !byte_43884C4 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884C4 = 1;
    }
    v3 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    if ( !v3->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      v4 = (struct System_String_o *)StringLiteral_1/*""*/;
      if ( !byte_43884AD )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43884AD = 1;
      }
      v5 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v5 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = &v5->static_fields->_PlayedTerminalEffects_k__BackingField;
      *p_PlayedTerminalEffects_k__BackingField = v4;
      sub_B77560(p_PlayedTerminalEffects_k__BackingField);
      v3 = TerminalPramsManager_TypeInfo;
    }
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_43884C4 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884C4 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v7->static_fields->_PlayedTerminalEffects_k__BackingField;
    v9 = System_Int32__ToString((int32_t)&v14, 0LL);
    v10 = System_String__Concat_44904220(
            PlayedTerminalEffects_k__BackingField,
            v9,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            0LL);
    if ( !byte_43884AD )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884AD = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v12 = &v11->static_fields->_PlayedTerminalEffects_k__BackingField;
    *v12 = v10;
    sub_B77560(v12);
    TerminalPramsManager__Save_SaveData(v13);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438846E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11784/*"SAVEKEY_PlayerGenderType"*/);
    byte_438846E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C9 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C9 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11784/*"SAVEKEY_PlayerGenderType"*/,
    v1->static_fields->_PlayerGenderType_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__ReceiveQuestEndResultInfo(
        BattleResultComponent_resultData_array *result,
        bool isWin,
        const MethodInfo *method)
{
  BattleResultComponent_resultData_array *v4; // x20
  BattleResultComponent_resultData_o *v5; // x8
  struct UserServantCollectionEntity_array *oldUserSvtCollection; // x8
  _DWORD *v7; // x22
  BattleResultComponent_resultData_o *v8; // x19
  int eventEndTitle; // w8
  UserServantCollectionMaster_o *v10; // x20
  __int64 v11; // x26
  __int64 v12; // x27
  BattleResultComponent_resultData_array *v13; // x23
  __int64 v14; // x24
  __int64 v15; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  UserServantCollectionEntity_o *v17; // x24
  _DWORD *v18; // x23
  _DWORD *v19; // x23
  TerminalPramsManager_c *v20; // x0
  struct QuestClearHeroineInfo_o **p_mQuestClearHeroineInfo; // x0
  __int64 v22; // x8
  BattleResultComponent_resultData_o *v23; // x9
  struct System_String_o *v24; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v26; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v27; // x23
  UserServantEntity_o *v28; // x24
  __int64 v29; // x23
  System_String_Fields fields; // x25
  void *monitor; // x26
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  __int64 v34; // x27
  __int64 v35; // x28
  int64_t v36; // x26
  int v37; // w8
  UserServantCollectionEntity_o *v38; // x26
  int v39; // w9
  UserServantCollectionEntity_o *v40; // x25
  BattleResultComponent_resultData_array *v41; // x21
  int32_t SvtId; // w0
  __int64 v43; // x21
  __int64 v44; // x28
  int32_t v45; // w27
  QuestClearHeroineInfo_o *v46; // x22
  bool v47; // w9
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v49; // x21
  __int64 v50; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x23
  int32_t lastQuestId; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v54; // x0
  struct QuestClearHeroineInfo_o **v55; // x0
  BattleResultComponent_resultData_o *v56; // x8
  struct System_String_o *v57; // x9
  UserQuestEntity_o *v58; // x28
  int32_t questId; // w19
  TerminalPramsManager_c *v60; // x0
  int32_t QuestPhase; // w23
  TerminalPramsManager_c *v62; // x0
  int32_t v63; // w23
  UserQuestMaster_o *v64; // x24
  UserQuestEntity_o *v65; // x0
  UserQuestEntity_o *v66; // x25
  int32_t v67; // w24
  bool v68; // w19
  TerminalPramsManager_c *v69; // x0
  const MethodInfo *v70; // x2
  TerminalPramsManager_c *v71; // x0
  System_String_o *ValidMessage; // x0
  const MethodInfo *v73; // x2
  TerminalPramsManager_c *v74; // x8
  TerminalPramsManager_c *v75; // x0
  const MethodInfo *v76; // x0
  TerminalPramsManager_c *v77; // x8
  int32_t v78; // w24
  const MethodInfo *v79; // x1
  WarEntity_o *v80; // x23
  TerminalPramsManager_c *v81; // x0
  TerminalPramsManager_c *v82; // x0
  char v83; // w8
  const MethodInfo *v84; // x1
  bool HasFlag; // w0
  TerminalPramsManager_c *v86; // x9
  struct BattleDropItem_array **p_mResultEventPanelRewardInfos; // x0
  BattleResultComponent_resultData_o *v88; // x23
  TerminalPramsManager_c *v89; // x0
  struct BattleDropItem_array **v90; // x0
  TerminalPramsManager_c *v91; // x0
  struct EventConquestInfo_array **p_eventConquestInfos; // x0
  struct TerminalPramsManager_StaticFields **p_static_fields; // x8
  __int64 v94; // x9
  BattleResultComponent_resultData_o *v95; // x23
  struct EventConquestInfo_array **v96; // x0
  int32_t v97; // w23
  WarEntity_o *v98; // x0
  int32_t id; // w19
  EventRaidMaster_o *v100; // x23
  signed int max_length; // w9
  BattleResultComponent_resultData_array *v102; // x24
  int v103; // w8
  Il2CppClass **v104; // x8
  Il2CppClass *v105; // x25
  int32_t RaidGroupDeadQuestId; // w26
  signed int v107; // w9
  BattleResultComponent_resultData_array *v108; // x26
  int v109; // w8
  int v110; // w22
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t name_high; // w22
  signed int v113; // w9
  BattleResultComponent_resultData_array *v114; // x24
  int v115; // w8
  BattleResultComponent_resultData_o *v116; // x19
  int32_t RaidDeadQuestId; // w25
  struct TerminalPramsManager_StaticFields *v118; // x8
  int32_t v119; // w19
  TerminalPramsManager_c *v120; // x0
  TerminalPramsManager_c *v121; // x8
  bool v122; // w19
  TerminalPramsManager_c *v123; // x0
  int32_t v124; // w19
  int32_t eventId; // w21
  char *v126; // x21
  char *v127; // x22
  BattleResultComponent_resultData_o *v128; // x8
  int v129; // w9
  int v130; // w11
  __int64 v131; // x28
  TerminalPramsManager_c *v132; // x0
  int32_t bounds_high; // w23
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v135; // x0
  TerminalPramsManager_c *v136; // x0
  EventSaveData_o *v137; // x23
  TerminalPramsManager_c *v138; // x0
  struct EventSaveData_o **p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct BattleResultAddRewardBonus_o *rewardBonus; // x8
  signed int v141; // w8
  System_String_o **v142; // x9
  System_String_o *v143; // x25
  System_String_o **v144; // x9
  System_String_o *v145; // x23
  __int64 *v146; // x8
  int32_t v147; // w21
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v148; // x26
  TerminalPramsManager___c_c *v149; // x8
  struct TerminalPramsManager___c_StaticFields *v150; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__626_0; // x24
  Il2CppObject *v152; // x21
  struct TerminalPramsManager___c_StaticFields *v153; // x0
  TerminalPramsManager_c *v154; // x0
  TerminalPramsManager_c *v155; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x26
  System_String_o *v157; // x21
  TerminalPramsManager_c *v158; // x0
  int32_t v159; // w23
  int32_t PhaseCnt_k__BackingField; // w24
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v162; // x0
  UserQuestEntity_o *v163; // x22
  QuestMaster_o *v164; // x23
  int v165; // w21
  TerminalPramsManager_c *v166; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeRelease_k__BackingField; // x0
  BattleResultComponent_resultData_o *v168; // x8
  BattleResultComponent_resultData_o *v169; // x23
  TerminalPramsManager_c *v170; // x0
  struct CostumeReleaseAnnounce_array **v171; // x0
  TerminalPramsManager_c *v172; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeGet_k__BackingField; // x0
  BattleResultComponent_resultData_o *v174; // x23
  TerminalPramsManager_c *v175; // x0
  struct CostumeReleaseAnnounce_array **v176; // x0
  TerminalPramsManager_c *v177; // x0
  struct EventPointWinReward_o **p_eventPointWinReward_k__BackingField; // x0
  int32_t v179; // w23
  QuestGroupMaster_o *v180; // x24
  int32_t GroupId; // w0
  TerminalPramsManager_c *v182; // x8
  int32_t v183; // w25
  int v184; // w24
  QuestReleaseMaster_o *v185; // x25
  EventPointEntity_o *v186; // x24
  int32_t v187; // w23
  struct TerminalPramsManager_StaticFields *v188; // x8
  BattleResultComponent_resultData_o *v189; // x8
  struct System_String_o *v190; // x9
  struct System_String_o *v191; // x23
  TerminalPramsManager_c *v192; // x0
  struct EventPointWinReward_o **v193; // x0
  int32_t v194; // w19
  TerminalPramsManager_c *v195; // x0
  TerminalPramsManager_c *v196; // x0
  struct EventRaceBoostInfo_o **p_eventRaceBoost_k__BackingField; // x0
  __int64 v198; // x8
  BattleResultComponent_resultData_o *v199; // x22
  TerminalPramsManager_c *v200; // x0
  struct EventRaceBoostInfo_o **v201; // x0
  int64_t followerId; // x19
  BattleResultComponent_resultData_o *v203; // x9
  struct System_String_o *v204; // x10
  struct EventTowerReward_o *v205; // x22
  TerminalPramsManager_c *v206; // x0
  struct EventTowerReward_o **p_eventTowerReward_k__BackingField; // x0
  BattleResultComponent_resultData_o *v208; // x22
  TerminalPramsManager_c *v209; // x0
  struct QuestRewardInfo_array **p_resultEventTowerRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v211; // x22
  TerminalPramsManager_c *v212; // x0
  struct QuestRewardInfo_array **p_resultBoostItemRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v214; // x22
  TerminalPramsManager_c *v215; // x0
  struct QuestRewardInfo_array **p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v217; // x22
  TerminalPramsManager_c *v218; // x0
  struct WarClearReward_array **p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v220; // x0
  struct TerminalPramsManager_StaticFields *v221; // x0
  TerminalPramsManager_c *v222; // x0
  struct TerminalPramsManager_StaticFields *v223; // x0
  QuestTree_o *v224; // x22
  int32_t WarID_ByQuestID; // w21
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v227; // w22
  __int64 v228; // x8
  BattleResultComponent_resultData_o *v229; // x21
  TerminalPramsManager_c *v230; // x0
  struct TerminalPramsManager_StaticFields *v231; // x0
  struct UserSuperBossEntity_array **p_oldPersonalBoss_k__BackingField; // x0
  BattleResultComponent_resultData_o *v233; // x21
  TerminalPramsManager_c *v234; // x0
  struct TerminalPramsManager_StaticFields *v235; // x0
  struct CostumeReleaseAnnounce_array *costumeGetAnnounce; // x8
  bool v237; // w19
  BalanceConfig_c *v238; // x8
  int32_t battleId; // w19
  TerminalPramsManager_c *v240; // x0
  TerminalPramsManager_c *v241; // x0
  BalanceConfig_c *v242; // x8
  int32_t v243; // w21
  TerminalPramsManager_c *v244; // x0
  BalanceConfig_c *v245; // x8
  int32_t v246; // w23
  TerminalPramsManager_c *v247; // x0
  BalanceConfig_c *v248; // x8
  int32_t v249; // w21
  UserSuperBossMaster_o *v250; // x21
  BattleResultComponent_resultData_array *v251; // x23
  UserSuperBossEntity_o *v252; // x22
  BattleResultComponent_resultData_array *v253; // x21
  TerminalPramsManager_c *v254; // x0
  struct TerminalPramsManager_StaticFields *v255; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v257; // x21
  QuestMaster_o *v258; // x22
  int32_t ScriptQuestId; // w22
  WebViewManager_o *Instance; // x23
  TerminalPramsManager_c *v261; // x0
  int32_t v262; // w28
  int32_t winResult; // w24
  WebViewManager_o *v264; // x23
  TerminalPramsManager_c *v265; // x0
  int32_t v266; // w24
  int32_t v267; // w21
  TerminalPramsManager_c *v268; // x0
  struct System_String_o **p_lastPlayBgmName; // x0
  const MethodInfo *v270; // x0
  QuestPhaseMaster_o *v271; // x21
  int32_t v272; // w22
  TerminalPramsManager_c *v273; // x0
  int32_t v274; // w22
  TerminalPramsManager_c *v275; // x0
  int32_t v276; // w23
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v278; // x0
  struct TerminalPramsManager_StaticFields *v279; // x0
  TerminalPramsManager_c *v280; // x8
  const MethodInfo *v281; // x0
  int32_t v282; // w19
  TerminalPramsManager_c *v283; // x0
  struct EventHarvestGrowthInfo_o **p_eventHarvestGrowthInfo; // x0
  TerminalPramsManager_c *v285; // x0
  QuestPhaseEntity_o *v286; // x22
  int32_t ScriptIntParam; // w24
  int32_t v288; // w0
  int32_t v289; // w25
  EventHarvestGrowthInfo_o *v290; // x23
  int32_t phase; // w8
  TerminalPramsManager_c *v292; // x0
  struct EventHarvestGrowthInfo_o **v293; // x0
  QuestMaster_o *v294; // x22
  QuestEntity_o *QuestEntity; // x0
  QuestEntity_o *v296; // x22
  TerminalPramsManager_c *v297; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v300; // x21
  TerminalPramsManager_c *v301; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v303; // x0
  System_String_o *v304; // x21
  TerminalPramsManager_c *v305; // x0
  System_String_o *v306; // x0
  System_String_o *v307; // x21
  TerminalPramsManager_c *v308; // x0
  struct System_String_o **p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v310; // x21
  TerminalPramsManager_c *v311; // x0
  struct LimitImageAnnounce_array **p_limitImageAnnounces_k__BackingField; // x0
  System_String_array *v313; // x21
  TerminalPramsManager_c *v314; // x0
  char *v315; // x24
  BattleResultComponent_resultData_array *v316; // x22
  __int64 v317; // x1
  TerminalPramsManager_c *v318; // x0
  BattleResultComponent_resultData_array *v319; // x22
  __int64 v320; // x1
  TerminalPramsManager_c *v321; // x0
  BattleResultComponent_resultData_array *v322; // x22
  __int64 v323; // x1
  TerminalPramsManager_c *v324; // x0
  BattleResultComponent_resultData_array *v325; // x22
  System_String_o *v326; // x0
  const MethodInfo *v327; // x1
  const MethodInfo *v328; // x0
  const MethodInfo *v329; // x0
  const MethodInfo *v330; // x0
  const MethodInfo *v331; // x0
  const MethodInfo *v332; // x0
  TerminalPramsManager_c *v333; // x0
  TerminalPramsManager_c *v334; // x0
  __int64 v335; // x0
  __int64 v336; // x0
  __int64 v337; // x0
  __int64 v338; // x0
  System_String_o *isLastGoalPlayed; // [xsp+0h] [xbp-110h]
  bool v340; // [xsp+Ch] [xbp-104h]
  UserQuestEntity_o *v341; // [xsp+10h] [xbp-100h]
  BattleResultComponent_resultData_array *resulta; // [xsp+18h] [xbp-F8h]
  il2cpp_array_size_t *p_max_length; // [xsp+20h] [xbp-F0h]
  BattleResultComponent_resultData_array **m_Items; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v345; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v346; // [xsp+50h] [xbp-C0h]
  char v347[4]; // [xsp+7Ch] [xbp-94h] BYREF
  UserSuperBossEntity_o *v348; // [xsp+80h] [xbp-90h] BYREF
  WarEntity_o *v349; // [xsp+88h] [xbp-88h] BYREF
  int QuestId_k__BackingField; // [xsp+94h] [xbp-7Ch] BYREF
  WarEntity_o *v351; // [xsp+98h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  int v353; // [xsp+ACh] [xbp-64h] BYREF
  QuestPhaseEntity_o *v354; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v355; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v356; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v357; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v358; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v359; // 0:x0.16

  v4 = result;
  if ( (byte_4388482 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventPointMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMessageMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&EventHarvestGrowthInfo_TypeInfo);
    sub_B775C4(&EventSaveData_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_System_Predicate_QuestReleaseEntity___ctor__);
    sub_B775C4(&System_Predicate_QuestReleaseEntity__TypeInfo);
    sub_B775C4(&QuestClearHeroineInfo_TypeInfo);
    sub_B775C4(&ScriptManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_B775C4(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__626_0__);
    sub_B775C4(&TerminalPramsManager___c_TypeInfo);
    sub_B775C4(&UserServantCollectionEntity___TypeInfo);
    sub_B775C4(&UserServantCollectionEntity_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    sub_B775C4(&UserSuperBossEntity___TypeInfo);
    sub_B775C4(&StringLiteral_19498/*"harvestGrowthAfterQuestId"*/);
    sub_B775C4(&StringLiteral_16607/*"afterActionBk"*/);
    sub_B775C4(&StringLiteral_714/*","*/);
    sub_B775C4(&StringLiteral_19499/*"harvestGrowthBeforeQuestId"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_6732/*"False"*/);
    result = (BattleResultComponent_resultData_array *)sub_B775C4(&StringLiteral_980/*"0"*/);
    byte_4388482 = 1;
  }
  v354 = 0LL;
  v353 = 0;
  v351 = 0LL;
  entity = 0LL;
  QuestId_k__BackingField = 0;
  v348 = 0LL;
  v349 = 0LL;
  v347[0] = 0;
  if ( !v4 )
    goto LABEL_1318;
  p_max_length = &v4->max_length;
  if ( !v4->max_length )
    goto LABEL_1317;
  v5 = v4->m_Items[0];
  m_Items = (BattleResultComponent_resultData_array **)v4->m_Items;
  if ( !v5 )
    goto LABEL_1318;
  oldUserSvtCollection = v5->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1318;
  resulta = v4;
  v7 = (_DWORD *)sub_B775DC(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1318;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v8 = (*m_Items)->m_Items[11];
  v340 = isWin;
  v353 = 0;
  if ( !v8 )
    goto LABEL_1318;
  eventEndTitle = (int)v8->fields.eventEndTitle;
  if ( eventEndTitle >= 1 )
  {
    v10 = (UserServantCollectionMaster_o *)result;
    v11 = 0LL;
    while ( (unsigned int)v11 < eventEndTitle )
    {
      v12 = *((_QWORD *)&v8->fields.eventEndMessage + v11);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
      if ( !v12 )
        goto LABEL_1318;
      v13 = result;
      v15 = *(_QWORD *)(v12 + 24);
      v14 = *(_QWORD *)(v12 + 32);
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v355.fields.currentCryptoKey = v15;
      *(_QWORD *)&v355.fields.fakeValue = v14;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                           v355,
                                                           0LL);
      if ( !v10 )
        goto LABEL_1318;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v10, (int64_t)v13, (int32_t)result, 0LL);
      v17 = (UserServantCollectionEntity_o *)sub_B77694(UserServantCollectionEntity_TypeInfo);
      UserServantCollectionEntity___ctor_21785344(v17, EntityDefinitely, 0LL);
      if ( !v7 )
        goto LABEL_1318;
      if ( v17 )
      {
        result = (BattleResultComponent_resultData_array *)sub_B77684(v17, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
        if ( !result )
        {
          v336 = sub_B776BC();
          sub_B77668(v336, 0LL);
        }
      }
      if ( (unsigned int)v11 >= v7[6] )
        break;
      v18 = &v7[2 * (int)v11];
      *((_QWORD *)v18 + 4) = v17;
      v19 = v18 + 8;
      sub_B77560(v19);
      if ( (unsigned int)v11 >= v7[6] )
        break;
      if ( !*(_QWORD *)v19 )
        goto LABEL_1318;
      *(_OWORD *)(*(_QWORD *)v19 + 84LL) = *(_OWORD *)(v12 + 84);
      if ( (unsigned int)v11 >= v7[6] )
        break;
      if ( !*(_QWORD *)v19 )
        goto LABEL_1318;
      *(_OWORD *)(*(_QWORD *)v19 + 100LL) = *(_OWORD *)(v12 + 100);
      if ( (unsigned int)v11 >= v7[6] )
        break;
      if ( !*(_QWORD *)v19 )
        goto LABEL_1318;
      ++v11;
      *(_DWORD *)(*(_QWORD *)v19 + 116LL) = *(_DWORD *)(v12 + 116);
      v353 = v11;
      eventEndTitle = (int)v8->fields.eventEndTitle;
      if ( (int)v11 >= eventEndTitle )
        goto LABEL_33;
    }
LABEL_1317:
    v335 = sub_B776C8(result);
    sub_B77668(v335, 0LL);
  }
LABEL_33:
  v20 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestClearHeroineInfo = &v20->static_fields->mQuestClearHeroineInfo;
  *p_mQuestClearHeroineInfo = 0LL;
  sub_B77560(p_mQuestClearHeroineInfo);
  v22 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v23 = (*m_Items)->m_Items[5];
  if ( v23 )
  {
    v24 = v23->fields.eventEndTitle;
    if ( v24 )
    {
      if ( !(_DWORD)v24 )
        goto LABEL_1317;
      eventEndMessage = v23->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1318;
      v26 = *(_OWORD *)&eventEndMessage[1].monitor;
      v27 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result;
      *(_OWORD *)&v346.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields.m_stringLength;
      *(_OWORD *)&v346.fields.fakeValue = v26;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v345 = v346;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                           &v345,
                                                           0LL);
      if ( !v27 )
        goto LABEL_1318;
      v28 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
              v27,
              (int64_t)result,
              (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v29 = sub_B77694(UserServantEntity_TypeInfo);
      UserServantEntity___ctor_21815072((UserServantEntity_o *)v29, v28, 0LL);
      if ( !v29 )
        goto LABEL_1318;
      *(_OWORD *)(v29 + 96) = *(_OWORD *)&eventEndMessage[4].klass;
      *(_DWORD *)(v29 + 256) = eventEndMessage[10].fields.m_stringLength;
      *(_DWORD *)(v29 + 292) = HIDWORD(eventEndMessage[12].klass);
      *(_DWORD *)(v29 + 296) = eventEndMessage[12].monitor;
      monitor = eventEndMessage[5].monitor;
      fields = eventEndMessage[5].fields;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v356.fields.currentCryptoKey = monitor;
      *(System_String_Fields *)&v356.fields.fakeValue = fields;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v356, 0LL) >= 1 )
        *(_OWORD *)(v29 + 128) = *(_OWORD *)&eventEndMessage[5].monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)result,
                                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v35 = *(_QWORD *)(v29 + 80);
      v34 = *(_QWORD *)(v29 + 88);
      v36 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v357.fields.currentCryptoKey = v35;
      *(_QWORD *)&v357.fields.fakeValue = v34;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                           v357,
                                                           0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v36,
                                                           (int32_t)result,
                                                           0LL);
      v353 = 0;
      if ( !v7 )
        goto LABEL_1318;
      v37 = v7[6];
      v38 = (UserServantCollectionEntity_o *)result;
      if ( v37 >= 1 )
      {
        v39 = 0;
        while ( v39 < (unsigned int)v37 )
        {
          v40 = *(UserServantCollectionEntity_o **)&v7[2 * v39 + 8];
          if ( !v40 )
            goto LABEL_1318;
          v41 = (BattleResultComponent_resultData_array *)v40->fields.userId;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
          if ( v41 == result )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v40, 0LL);
            v43 = *(_QWORD *)(v29 + 80);
            v44 = *(_QWORD *)(v29 + 88);
            v45 = SvtId;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v358.fields.currentCryptoKey = v43;
            *(_QWORD *)&v358.fields.fakeValue = v44;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                 v358,
                                                                 0LL);
            if ( v45 == (_DWORD)result )
              goto LABEL_76;
          }
          v39 = v353 + 1;
          v353 = v39;
          v37 = v7[6];
          if ( v39 >= v37 )
            goto LABEL_75;
        }
        goto LABEL_1317;
      }
LABEL_75:
      v40 = 0LL;
LABEL_76:
      v46 = (QuestClearHeroineInfo_o *)sub_B77694(QuestClearHeroineInfo_TypeInfo);
      QuestClearHeroineInfo___ctor(v46, 0LL);
      if ( !v46 )
        goto LABEL_1318;
      v46->fields.oldUsrSvtData = (struct UserServantEntity_o *)v29;
      sub_B77560(&v46->fields);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v29,
                                                           0LL);
      if ( !v28 )
        goto LABEL_1318;
      v47 = (_DWORD)result != UserServantEntity__getLimitCount(v28, 0LL);
      v46->fields.isChangeTreasureDvc = 0;
      v46->fields.treasureDvcId = 0;
      v46->fields.treasureDvcLv = 0;
      v46->fields.isFriendShipExceed = 0;
      v46->fields.oldFriendShipRank = -1;
      v46->fields.isChangeLimitcnt = v47;
      v46->fields.isExceed = *(_DWORD *)(v29 + 296) != v28->fields.exceedCount;
      if ( v40 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v40, 0LL);
        if ( !v38 )
          goto LABEL_1318;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v38, 0LL) )
          v46->fields.oldFriendShipRank = UserServantCollectionEntity__getFriendShipRank(v40, 0LL);
        if ( v40->fields.friendshipExceedCount != v38->fields.friendshipExceedCount )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
          v49 = *(_QWORD *)(v29 + 80);
          v50 = *(_QWORD *)(v29 + 88);
          v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v359.fields.currentCryptoKey = v49;
          *(_QWORD *)&v359.fields.fakeValue = v50;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                               v359,
                                                               0LL);
          if ( !v51 )
            goto LABEL_1318;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                               v51,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1318;
            lastQuestId = entity->fields.lastQuestId;
            friendshipExceedCount = v40->fields.friendshipExceedCount;
            v46->fields.isFriendShipExceed = 1;
            v46->fields.oldFriendShipRank = friendshipExceedCount + lastQuestId;
          }
        }
      }
      v54 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v54 = TerminalPramsManager_TypeInfo;
      }
      v55 = &v54->static_fields->mQuestClearHeroineInfo;
      *v55 = v46;
      sub_B77560(v55);
      v22 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v22 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v56 = (*m_Items)->m_Items[9];
  if ( v56 && (v57 = v56->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v57 )
      goto LABEL_1317;
    v58 = (UserQuestEntity_o *)v56->fields.eventEndMessage;
  }
  else
  {
    v58 = 0LL;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387494 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387494 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE5(result->m_Items[19]->fields.oldUserGame) = v58 != 0LL;
  if ( !byte_4387493 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4387493 = 1;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE4(result->m_Items[19]->fields.oldUserGame) = 0;
  if ( !byte_43884B8 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_43884B8 = 1;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  BYTE1(result->m_Items[19]->fields.resultDamageRewardInfos) = 0;
  if ( !byte_438747A )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_438747A = 1;
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
    if ( !byte_4387478 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387478 = 1;
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
      if ( !v58 )
        goto LABEL_1318;
    }
    else
    {
      if ( !v58 )
        goto LABEL_1318;
      questId = v58->fields.questId;
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4387469 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387469 = 1;
      }
      v60 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v60 = TerminalPramsManager_TypeInfo;
      }
      v60->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v58, 0LL);
      if ( !byte_438746A )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_438746A = 1;
      }
      v62 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v62 = TerminalPramsManager_TypeInfo;
      }
      v62->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v63 = v58->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    v64 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)result,
                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
    if ( !v64 )
      goto LABEL_1318;
    v65 = UserQuestMaster__GetEntity(v64, (int64_t)result, v63, 0LL);
    if ( v65 )
    {
      v66 = v65;
      v67 = UserQuestEntity__getQuestPhase(v65, 0LL);
      if ( UserQuestEntity__getClearNum(v58, 0LL) || UserQuestEntity__getClearNum(v66, 0LL) != 1 )
        v68 = UserQuestEntity__IsResetStatus(v58, 0LL) && !UserQuestEntity__IsResetStatus(v66, 0LL);
      else
        v68 = 1;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387493 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387493 = 1;
      }
      v69 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v69 = TerminalPramsManager_TypeInfo;
      }
      v69->static_fields->_IsQuestClear_k__BackingField = v68;
      if ( !byte_43884BA )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        v69 = TerminalPramsManager_TypeInfo;
        byte_43884BA = 1;
      }
      if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69);
        v69 = TerminalPramsManager_TypeInfo;
      }
      v69->static_fields->_EventUIEffectClearQuestId_k__BackingField = v63;
      if ( !byte_4387B3F )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        v69 = TerminalPramsManager_TypeInfo;
        byte_4387B3F = 1;
      }
      if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69);
        v69 = TerminalPramsManager_TypeInfo;
      }
      v69->static_fields->_MapModelClearQuestId_k__BackingField = v63;
      if ( !byte_4387B40 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        v69 = TerminalPramsManager_TypeInfo;
        byte_4387B40 = 1;
      }
      if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69);
        v69 = TerminalPramsManager_TypeInfo;
      }
      v69->static_fields->_MapModelClearPhaseCount_k__BackingField = v67;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v69);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v63, v67, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v63, v67, v70);
    }
    else
    {
      v67 = 0;
    }
    v71 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v71);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1318;
    ValidMessage = QuestMessageMaster__GetValidMessage((QuestMessageMaster_o *)result, v63, v67, 3, 0LL);
    v74 = TerminalPramsManager_TypeInfo;
    if ( ValidMessage )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_43882BC )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43882BC = 1;
      }
      v74 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v74 = TerminalPramsManager_TypeInfo;
      }
      v74->static_fields->_IsDispOnly_k__BackingField = 1;
    }
    if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v74);
    if ( !byte_43884D0 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884D0 = 1;
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
      if ( !byte_43884D0 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43884D0 = 1;
      }
      v75 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v75 = TerminalPramsManager_TypeInfo;
      }
      TerminalPramsManager__SetQuestReleasedFocusState(
        v75->static_fields->_QuestReleaseFocusQuestId_k__BackingField,
        1,
        v73);
      TerminalPramsManager__SaveQuestReleasedFocusState(v76);
      if ( !byte_43874AE )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43874AE = 1;
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
  if ( !byte_4387482 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387482 = 1;
  }
  v77 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v77 = TerminalPramsManager_TypeInfo;
  }
  if ( v77->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v58 )
      goto LABEL_1318;
    v78 = v58->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1318;
    v80 = WarMaster__getByLastQuestId((WarMaster_o *)result, v78, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387480 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387480 = 1;
    }
    v81 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v81 = TerminalPramsManager_TypeInfo;
    }
    v81->static_fields->_IsWarClear_k__BackingField = v80 != 0LL;
    if ( TerminalPramsManager__CheckIsOrdealCallWarClear(v80, v79) )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_43874B2 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43874B2 = 1;
      }
      v82 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v82 = TerminalPramsManager_TypeInfo;
      }
      v83 = 1;
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_43874B2 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43874B2 = 1;
      }
      v82 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v82 = TerminalPramsManager_TypeInfo;
      }
      v83 = 0;
    }
    v82->static_fields->_IsOrdealCallWarClear_k__BackingField = v83;
    if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v82);
    if ( !byte_438747E )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438747E = 1;
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
      if ( !v80 )
        goto LABEL_1318;
      if ( !WarEntity__IsEvent(v80, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1318;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v80->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v78, -1, 0LL, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v78, v84);
    if ( !byte_438747E )
    {
      result = (BattleResultComponent_resultData_array *)sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438747E = 1;
    }
    v77 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v77 = TerminalPramsManager_TypeInfo;
    }
    if ( v77->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v80 )
        goto LABEL_1318;
      HasFlag = WarEntity__HasFlag(v80, 128, 0LL);
      v77 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_43874A3 )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_43874A3 = 1;
        }
        v77 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v77 = TerminalPramsManager_TypeInfo;
        }
        v77->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_43884B8 )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          v77 = TerminalPramsManager_TypeInfo;
          byte_43884B8 = 1;
        }
        if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v77 = TerminalPramsManager_TypeInfo;
        }
        v77->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v77);
  TerminalPramsManager__SetQuestRewardInfo(resulta, (const MethodInfo *)isWin);
  if ( !resulta->max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v86 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = HIDWORD((*m_Items)->m_Items[2]);
  p_mResultEventPanelRewardInfos = &v86->static_fields->mResultEventPanelRewardInfos;
  *p_mResultEventPanelRewardInfos = 0LL;
  sub_B77560(p_mResultEventPanelRewardInfos);
  if ( !*p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v88 = (*m_Items)->m_Items[19];
  if ( v88 && v88->fields.eventEndTitle )
  {
    v89 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v89 = TerminalPramsManager_TypeInfo;
    }
    v90 = &v89->static_fields->mResultEventPanelRewardInfos;
    *v90 = (struct BattleDropItem_array *)v88;
    sub_B77560(v90);
  }
  v91 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v91 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = &v91->static_fields->eventConquestInfos;
  *p_eventConquestInfos = 0LL;
  sub_B77560(p_eventConquestInfos);
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  v94 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v95 = (*m_Items)->m_Items[43];
  if ( v95 && v95->fields.eventEndTitle )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
    }
    v96 = &(*p_static_fields)->eventConquestInfos;
    *v96 = (struct EventConquestInfo_array *)v95;
    sub_B77560(v96);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 1;
    v94 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v94 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  if ( LOBYTE((*m_Items)->m_Items[46]) )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_43884AE )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884AE = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].fields.battleId) = 1;
    if ( !byte_4387482 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4387482 = 1;
    }
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE4(result->m_Items[19]->fields.oldUserGame) )
    {
      if ( !v58 )
        goto LABEL_1318;
      v97 = v58->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1318;
      v98 = WarMaster__getByLastQuestId((WarMaster_o *)result, v97, 0LL);
      if ( v98 )
      {
        id = v98->fields.id;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_43884AF )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_43884AF = 1;
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
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1318;
  v100 = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1318;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1317;
  if ( !*m_Items || (v341 = v58, !result) )
LABEL_1318:
    sub_B7769C(result, isWin);
  result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                                       &v351,
                                                       HIDWORD((*m_Items)->bounds),
                                                       (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( !*p_max_length )
      goto LABEL_1317;
    if ( !*m_Items || !v100 )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                         v100,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    if ( (int)result >= 1 )
    {
      if ( !*p_max_length )
        goto LABEL_1317;
      if ( !*m_Items )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                           v100,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v353 = 0;
      if ( !result )
        goto LABEL_1318;
      max_length = result->max_length;
      v102 = result;
      if ( max_length < 1 )
        goto LABEL_626;
      v103 = 0;
      while ( 1 )
      {
        if ( v103 >= (unsigned int)max_length )
          goto LABEL_1317;
        v104 = &v102->obj.klass + v103;
        v105 = v104[4];
        if ( !v105 )
          goto LABEL_1318;
        result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                             (EventRaidEntity_o *)v104[4],
                                                             0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !*p_max_length )
            goto LABEL_1317;
          if ( !*m_Items )
            goto LABEL_1318;
          RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                   v100,
                                   HIDWORD((*m_Items)->bounds),
                                   (int32_t)v105->_1.namespaze,
                                   0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4387478 )
          {
            sub_B775C4(&TerminalPramsManager_TypeInfo);
            byte_4387478 = 1;
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
            result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
                                                             v100,
                                                             HIDWORD((*m_Items)->bounds),
                                                             HIDWORD(v105->_1.name),
                                                             0LL);
        QuestId_k__BackingField = 0;
        if ( !result )
          goto LABEL_1318;
        v107 = result->max_length;
        v108 = result;
        if ( v107 >= 1 )
        {
          v109 = 0;
          while ( 1 )
          {
            if ( v109 >= (unsigned int)v107 )
              goto LABEL_1317;
            v110 = *((_DWORD *)v108->m_Items + v109);
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_4387478 )
            {
              sub_B775C4(&TerminalPramsManager_TypeInfo);
              byte_4387478 = 1;
            }
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            }
            static_fields = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
            if ( v110 == static_fields->_QuestId_k__BackingField )
              break;
            v109 = QuestId_k__BackingField + 1;
            QuestId_k__BackingField = v109;
            v107 = v108->max_length;
            if ( v109 >= v107 )
              goto LABEL_421;
          }
          name_high = HIDWORD(v105->_1.name);
          if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
          {
            j_il2cpp_runtime_class_init_0(result);
            static_fields = TerminalPramsManager_TypeInfo->static_fields;
          }
          static_fields->clearBattleRaidId = name_high;
        }
LABEL_421:
        v103 = v353 + 1;
        v353 = v103;
        max_length = v102->max_length;
        if ( v103 >= max_length )
          goto LABEL_626;
      }
      v123 = TerminalPramsManager_TypeInfo;
      v124 = HIDWORD(v105->_1.name);
      goto LABEL_480;
    }
    result = (BattleResultComponent_resultData_array *)v351;
    if ( !v351 )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                         (EventDetailEntity_o *)v351,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) == 0 )
    {
      result = (BattleResultComponent_resultData_array *)v351;
      if ( !v351 )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                           (EventDetailEntity_o *)v351,
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1317;
        if ( !*m_Items )
          goto LABEL_1318;
        v119 = (int32_t)(*m_Items)->m_Items[42];
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4387FD2 )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_4387FD2 = 1;
        }
        v120 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v120 = TerminalPramsManager_TypeInfo;
        }
        v120->static_fields->_EventActivityPointEffectState_k__BackingField = v119;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v351;
        if ( !v351 )
          goto LABEL_1318;
        if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v351, 0LL) )
        {
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_43884D1 )
          {
            result = (BattleResultComponent_resultData_array *)sub_B775C4(&TerminalPramsManager_TypeInfo);
            byte_43884D1 = 1;
          }
          v121 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v121 = TerminalPramsManager_TypeInfo;
          }
          if ( v121->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
          {
            v122 = 0;
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
            v121 = TerminalPramsManager_TypeInfo;
            v122 = IsUserEventStatus;
          }
          if ( (BYTE3(v121->vtable._0_Equals.methodPtr) & 4) != 0 && !v121->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v121);
          if ( !byte_43884AC )
          {
            sub_B775C4(&TerminalPramsManager_TypeInfo);
            byte_43884AC = 1;
          }
          v135 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v135 = TerminalPramsManager_TypeInfo;
          }
          v135->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v122;
        }
        else
        {
          result = (BattleResultComponent_resultData_array *)v351;
          if ( !v351 )
            goto LABEL_1318;
          result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                               (EventDetailEntity_o *)v351,
                                                               0LL);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !*p_max_length )
              goto LABEL_1317;
            v126 = &byte_4387000;
            v127 = &byte_4387000;
            if ( !*m_Items )
              goto LABEL_1318;
            v128 = (*m_Items)->m_Items[10];
            v353 = 0;
            if ( !v128 )
              goto LABEL_1318;
            v129 = (int)v128->fields.eventEndTitle;
            if ( v129 >= 1 )
            {
              v130 = 0;
              v126 = &byte_4387000;
              while ( 1 )
              {
                if ( v130 >= (unsigned int)v129 )
                  goto LABEL_1317;
                if ( !v351 )
                  goto LABEL_1318;
                v131 = *((_QWORD *)&v128->fields.eventEndMessage + v130);
                if ( !v131 )
                  goto LABEL_1318;
                if ( v351->fields.id == *(_DWORD *)(v131 + 24) )
                  break;
                v353 = ++v130;
                if ( v130 >= v129 )
                  goto LABEL_602;
              }
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_43884CC )
              {
                sub_B775C4(&TerminalPramsManager_TypeInfo);
                byte_43884CC = 1;
              }
              v136 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v136 = TerminalPramsManager_TypeInfo;
              }
              if ( !v136->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
              {
                v137 = (EventSaveData_o *)sub_B77694(EventSaveData_TypeInfo);
                EventSaveData___ctor(v137, 0LL);
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_43884A9 )
                {
                  sub_B775C4(&TerminalPramsManager_TypeInfo);
                  byte_43884A9 = 1;
                }
                v138 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v138 = TerminalPramsManager_TypeInfo;
                }
                p_BeforeEventSubmarineSaveData_k__BackingField = &v138->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
                *p_BeforeEventSubmarineSaveData_k__BackingField = v137;
                sub_B77560(p_BeforeEventSubmarineSaveData_k__BackingField);
                v136 = TerminalPramsManager_TypeInfo;
              }
              if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) != 0 && !v136->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v136);
              if ( !byte_43884CC )
              {
                sub_B775C4(&TerminalPramsManager_TypeInfo);
                byte_43884CC = 1;
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
              rewardBonus->fields.animationId = *(_DWORD *)(v131 + 24);
              if ( !byte_43884CC )
              {
                sub_B775C4(&TerminalPramsManager_TypeInfo);
                result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
                byte_43884CC = 1;
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
                v141 = result->max_length;
                v142 = (System_String_o **)&result->m_Items[1];
                if ( v141 <= 1 )
                  v142 = (System_String_o **)&StringLiteral_980/*"0"*/;
                v143 = *v142;
                v144 = v141 <= 2 ? (System_String_o **)&StringLiteral_980/*"0"*/ : (System_String_o **)&result->m_Items[2];
                v145 = *v144;
                v146 = v141 <= 3 ? &StringLiteral_6732/*"False"*/ : (__int64 *)&result->m_Items[3];
              }
              else
              {
                v145 = (System_String_o *)StringLiteral_980/*"0"*/;
                v146 = &StringLiteral_6732/*"False"*/;
                v143 = (System_String_o *)StringLiteral_980/*"0"*/;
              }
              if ( !v351 )
                goto LABEL_1318;
              v147 = v351->fields.id;
              isLastGoalPlayed = (System_String_o *)*v146;
              if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              }
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                   v147,
                                                                   0LL);
              v148 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)result;
              v149 = TerminalPramsManager___c_TypeInfo;
              if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
                v149 = TerminalPramsManager___c_TypeInfo;
              }
              v150 = v149->static_fields;
              _9__626_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v150->__9__626_0;
              if ( !_9__626_0 )
              {
                if ( (BYTE3(v149->vtable._0_Equals.methodPtr) & 4) != 0 && !v149->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v149);
                  v150 = TerminalPramsManager___c_TypeInfo->static_fields;
                }
                v152 = (Il2CppObject *)v150->__9;
                _9__626_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_QuestReleaseEntity__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  _9__626_0,
                  v152,
                  Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__626_0__,
                  (const MethodInfo_2C3248C *)Method_System_Predicate_QuestReleaseEntity___ctor__);
                v153 = TerminalPramsManager___c_TypeInfo->static_fields;
                v153->__9__626_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__626_0;
                sub_B77560(&v153->__9__626_0);
              }
              if ( !v148 )
                goto LABEL_1318;
              if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                     v148,
                     (System_Predicate_T__o *)_9__626_0,
                     (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
              {
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_4387478 )
                {
                  sub_B775C4(&TerminalPramsManager_TypeInfo);
                  byte_4387478 = 1;
                }
                v154 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v154 = TerminalPramsManager_TypeInfo;
                }
                QuestId_k__BackingField = v154->static_fields->_QuestId_k__BackingField;
                v143 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
              }
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_43884CC )
              {
                sub_B775C4(&TerminalPramsManager_TypeInfo);
                byte_43884CC = 1;
              }
              v155 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v155 = TerminalPramsManager_TypeInfo;
              }
              BeforeEventSubmarineSaveData_k__BackingField = v155->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              v157 = System_Int64__ToString(v131 + 32, 0LL);
              if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
              }
              result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_21506884(
                                                                   v157,
                                                                   v143,
                                                                   v145,
                                                                   isLastGoalPlayed,
                                                                   0LL);
              v126 = &byte_4387000;
              if ( !BeforeEventSubmarineSaveData_k__BackingField )
                goto LABEL_1318;
              BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
              sub_B77560(&BeforeEventSubmarineSaveData_k__BackingField->fields.value);
              v127 = &byte_4387000;
            }
LABEL_602:
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_4387478 )
            {
              sub_B775C4(&TerminalPramsManager_TypeInfo);
              byte_4387478 = 1;
            }
            v158 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v158 = TerminalPramsManager_TypeInfo;
            }
            v159 = v158->static_fields->_QuestId_k__BackingField;
            if ( !byte_4387479 )
            {
              sub_B775C4(&TerminalPramsManager_TypeInfo);
              v158 = TerminalPramsManager_TypeInfo;
              byte_4387479 = 1;
            }
            if ( (BYTE3(v158->vtable._0_Equals.methodPtr) & 4) != 0 && !v158->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v158);
              v158 = TerminalPramsManager_TypeInfo;
            }
            PhaseCnt_k__BackingField = v158->static_fields->_PhaseCnt_k__BackingField;
            if ( !v127[1154] )
            {
              sub_B775C4(&TerminalPramsManager_TypeInfo);
              v158 = TerminalPramsManager_TypeInfo;
              v127[1154] = 1;
            }
            if ( (BYTE3(v158->vtable._0_Equals.methodPtr) & 4) != 0 && !v158->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v158);
              v158 = TerminalPramsManager_TypeInfo;
            }
            IsQuestClear_k__BackingField = v158->static_fields->_IsQuestClear_k__BackingField;
            if ( !v126[1146] )
            {
              sub_B775C4(&TerminalPramsManager_TypeInfo);
              v158 = TerminalPramsManager_TypeInfo;
              v126[1146] = 1;
            }
            if ( (BYTE3(v158->vtable._0_Equals.methodPtr) & 4) != 0 && !v158->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v158);
              v158 = TerminalPramsManager_TypeInfo;
            }
            SubmarineSaveParamsManager__SaveClearQuestInfo(
              v159,
              PhaseCnt_k__BackingField,
              IsQuestClear_k__BackingField,
              v158->static_fields->_IsPhaseClear_k__BackingField,
              0LL);
          }
          else
          {
            result = (BattleResultComponent_resultData_array *)v351;
            if ( !v351 )
              goto LABEL_1318;
            if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v351, 0LL) )
            {
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4387B52 )
              {
                sub_B775C4(&TerminalPramsManager_TypeInfo);
                byte_4387B52 = 1;
              }
              v132 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v132 = TerminalPramsManager_TypeInfo;
              }
              v132->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
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
                                                         v100,
                                                         HIDWORD((*m_Items)->bounds),
                                                         0LL);
    v353 = 0;
    if ( !result )
      goto LABEL_1318;
    v113 = result->max_length;
    v114 = result;
    if ( v113 >= 1 )
    {
      v115 = 0;
      while ( 1 )
      {
        if ( v115 >= (unsigned int)v113 || !*p_max_length )
          goto LABEL_1317;
        if ( !*m_Items )
          goto LABEL_1318;
        v116 = v114->m_Items[v115];
        if ( !v116 )
          goto LABEL_1318;
        RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(
                            v100,
                            HIDWORD((*m_Items)->bounds),
                            v116->fields.eventId,
                            0LL);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4387478 )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_4387478 = 1;
        }
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        }
        v118 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
        if ( RaidDeadQuestId == v118->_QuestId_k__BackingField )
          break;
        v115 = v353 + 1;
        v353 = v115;
        v113 = v114->max_length;
        if ( v115 >= v113 )
          goto LABEL_626;
      }
      eventId = v116->fields.eventId;
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        v118 = TerminalPramsManager_TypeInfo->static_fields;
      }
      v118->clearBattleRaidId = eventId;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
      {
        v123 = TerminalPramsManager_TypeInfo;
        v124 = v116->fields.eventId;
LABEL_480:
        if ( (BYTE3(v123->vtable._0_Equals.methodPtr) & 4) != 0 && !v123->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v123);
          v123 = TerminalPramsManager_TypeInfo;
        }
        v123->static_fields->clearLastBattleRaidId = v124;
      }
    }
  }
LABEL_626:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387495 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387495 = 1;
  }
  v162 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v163 = v341;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v162 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v163 = v341;
  }
  v162->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v162 = TerminalPramsManager_TypeInfo;
    byte_4387478 = 1;
  }
  if ( (BYTE3(v162->vtable._0_Equals.methodPtr) & 4) != 0 && !v162->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v162);
    v162 = TerminalPramsManager_TypeInfo;
  }
  if ( v162->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    v164 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)result,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387478 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387478 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v164 )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         v164,
                                                         result->m_Items[19]->fields.battleId,
                                                         0LL);
    if ( !result )
      goto LABEL_1318;
    v165 = (int)result->m_Items[1];
    if ( !byte_4387495 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387495 = 1;
    }
    v162 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v162 = TerminalPramsManager_TypeInfo;
    }
    v162->static_fields->_IsWarBoardClear_k__BackingField = v165 == 7;
  }
  if ( (BYTE3(v162->vtable._0_Equals.methodPtr) & 4) != 0 && !v162->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v162);
  if ( !byte_43884D2 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884D2 = 1;
  }
  v166 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v166 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = &v166->static_fields->_questClearCostumeRelease_k__BackingField;
  *p_questClearCostumeRelease_k__BackingField = 0LL;
  sub_B77560(p_questClearCostumeRelease_k__BackingField);
  if ( !*p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v168 = (*m_Items)->m_Items[22];
  if ( v168 && v168->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387483 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387483 = 1;
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
      v169 = (*m_Items)->m_Items[22];
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_43884D2 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43884D2 = 1;
      }
      v170 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v170 = TerminalPramsManager_TypeInfo;
      }
      v171 = &v170->static_fields->_questClearCostumeRelease_k__BackingField;
      *v171 = (struct CostumeReleaseAnnounce_array *)v169;
      sub_B77560(v171);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387491 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387491 = 1;
  }
  v172 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v172 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = &v172->static_fields->_questClearCostumeGet_k__BackingField;
  *p_questClearCostumeGet_k__BackingField = 0LL;
  sub_B77560(p_questClearCostumeGet_k__BackingField);
  if ( !*p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v174 = (*m_Items)->m_Items[23];
  if ( v174 && v174->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387491 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387491 = 1;
    }
    v175 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v175 = TerminalPramsManager_TypeInfo;
    }
    v176 = &v175->static_fields->_questClearCostumeGet_k__BackingField;
    *v176 = (struct CostumeReleaseAnnounce_array *)v174;
    sub_B77560(v176);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884D3 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884D3 = 1;
  }
  v177 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v177 = TerminalPramsManager_TypeInfo;
  }
  p_eventPointWinReward_k__BackingField = &v177->static_fields->_eventPointWinReward_k__BackingField;
  *p_eventPointWinReward_k__BackingField = 0LL;
  sub_B77560(p_eventPointWinReward_k__BackingField);
  if ( !byte_43884D4 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884D4 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(result->m_Items[19]->fields.resultEventBoardGameTokenRewardInfos) = 0;
  if ( v351 && v163 && *(&v351[1].fields.id + 1) == 4 )
  {
    if ( !v341 )
      goto LABEL_1318;
    v179 = v341->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1318;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1318;
    v180 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v179, 4, 0LL);
    v182 = TerminalPramsManager_TypeInfo;
    v183 = GroupId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v182 = TerminalPramsManager_TypeInfo;
    }
    v182->static_fields->joinGroupId = v183;
    v184 = QuestGroupMaster__GetGroupId(v180, v179, 3, 0LL);
    if ( !byte_4387482 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387482 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v184 >= 1 && BYTE4(result->m_Items[19]->fields.oldUserGame) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      v185 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)result,
                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1317;
      if ( !*m_Items || !result )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v184,
                                                           HIDWORD((*m_Items)->bounds),
                                                           0LL);
      v186 = (EventPointEntity_o *)result;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !v186 )
        goto LABEL_1318;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v186,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v185 )
        goto LABEL_1318;
      v187 = QuestReleaseMaster__EventPointWinActionType(v185, v179, (unsigned __int8)result & 1, 0LL);
      if ( !byte_43884D4 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43884D4 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.resultEventBoardGameTokenRewardInfos) = v187;
      if ( !byte_4387B4E )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4387B4E = 1;
      }
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v188 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v188->_eventPointWinType_k__BackingField )
      {
        if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v188 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v188->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1317;
    if ( !*m_Items )
      goto LABEL_1318;
    v189 = (*m_Items)->m_Items[20];
    if ( v189 )
    {
      v190 = v189->fields.eventEndTitle;
      if ( v190 )
      {
        if ( !(_DWORD)v190 )
          goto LABEL_1317;
        v191 = v189->fields.eventEndMessage;
        if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
          j_il2cpp_runtime_class_init_0(result);
        if ( !byte_43884D3 )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_43884D3 = 1;
        }
        v192 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v192 = TerminalPramsManager_TypeInfo;
        }
        v193 = &v192->static_fields->_eventPointWinReward_k__BackingField;
        *v193 = (struct EventPointWinReward_o *)v191;
        sub_B77560(v193);
      }
    }
  }
  if ( v351 != 0LL && v163 != 0LL && *(&v351[1].fields.id + 1) == 6 )
  {
    if ( !v341 )
      goto LABEL_1318;
    v194 = v341->fields.questId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884D5 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884D5 = 1;
    }
    v195 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v195 = TerminalPramsManager_TypeInfo;
    }
    v195->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v194;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884D6 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884D6 = 1;
  }
  v196 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v196 = TerminalPramsManager_TypeInfo;
  }
  p_eventRaceBoost_k__BackingField = &v196->static_fields->_eventRaceBoost_k__BackingField;
  *p_eventRaceBoost_k__BackingField = 0LL;
  sub_B77560(p_eventRaceBoost_k__BackingField);
  v198 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v199 = (*m_Items)->m_Items[21];
  if ( v199 && v199->fields.battleId >= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884D6 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884D6 = 1;
    }
    v200 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v200 = TerminalPramsManager_TypeInfo;
    }
    v201 = &v200->static_fields->_eventRaceBoost_k__BackingField;
    *v201 = (struct EventRaceBoostInfo_o *)v199;
    sub_B77560(v201);
    if ( !byte_43884D7 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884D7 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    followerId = result->m_Items[19]->fields.followerId;
    if ( !byte_4387478 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4387478 = 1;
    }
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !followerId )
      goto LABEL_1318;
    *(_DWORD *)(followerId + 28) = result->m_Items[19]->fields.battleId;
    v198 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v198 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v203 = (*m_Items)->m_Items[24];
  if ( v203 )
  {
    v204 = v203->fields.eventEndTitle;
    if ( v204 )
    {
      if ( !(_DWORD)v204 )
        goto LABEL_1317;
      v205 = (struct EventTowerReward_o *)v203->fields.eventEndMessage;
      if ( !v205 )
        goto LABEL_1318;
      if ( v205->fields.eventId >= 1 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4387B4F )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_4387B4F = 1;
        }
        v206 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v206 = TerminalPramsManager_TypeInfo;
        }
        p_eventTowerReward_k__BackingField = &v206->static_fields->_eventTowerReward_k__BackingField;
        *p_eventTowerReward_k__BackingField = v205;
        sub_B77560(p_eventTowerReward_k__BackingField);
        if ( !*p_max_length )
          goto LABEL_1317;
        if ( *m_Items )
        {
          v208 = (*m_Items)->m_Items[25];
          if ( !byte_4387B50 )
          {
            sub_B775C4(&TerminalPramsManager_TypeInfo);
            byte_4387B50 = 1;
          }
          v209 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v209 = TerminalPramsManager_TypeInfo;
          }
          p_resultEventTowerRewardInfo_k__BackingField = &v209->static_fields->_resultEventTowerRewardInfo_k__BackingField;
          *p_resultEventTowerRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v208;
          sub_B77560(p_resultEventTowerRewardInfo_k__BackingField);
          v198 = *(_QWORD *)p_max_length;
          goto LABEL_846;
        }
        goto LABEL_1318;
      }
    }
  }
LABEL_846:
  if ( !(_DWORD)v198 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v211 = (*m_Items)->m_Items[26];
  if ( v211 && v211->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387488 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387488 = 1;
    }
    v212 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v212 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = &v212->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    *p_resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v211;
    sub_B77560(p_resultBoostItemRewardInfo_k__BackingField);
    v198 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v198 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1318;
  v214 = (*m_Items)->m_Items[27];
  if ( v214 && v214->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387489 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387489 = 1;
    }
    v215 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v215 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = &v215->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    *p_resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v214;
    sub_B77560(p_resultEventBoardGameTokenRewardInfo_k__BackingField);
    v198 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v198 )
    goto LABEL_1317;
  if ( !*m_Items )
    goto LABEL_1319;
  v217 = (*m_Items)->m_Items[28];
  if ( v217 && v217->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387498 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387498 = 1;
    }
    v218 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v218 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = &v218->static_fields->_warClearReward_k__BackingField;
    *p_warClearReward_k__BackingField = (struct WarClearReward_array *)v217;
    sub_B77560(p_warClearReward_k__BackingField);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387B4A )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B4A = 1;
  }
  v220 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v220 = TerminalPramsManager_TypeInfo;
  }
  v221 = v220->static_fields;
  v221->_oldSuperBoss_k__BackingField = 0LL;
  sub_B77560(&v221->_oldSuperBoss_k__BackingField);
  if ( !byte_4387B4C )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B4C = 1;
  }
  v222 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v222 = TerminalPramsManager_TypeInfo;
  }
  v223 = v222->static_fields;
  v223->_oldPersonalBoss_k__BackingField = 0LL;
  sub_B77560(&v223->_oldPersonalBoss_k__BackingField);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v224 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v224 )
    goto LABEL_1319;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v224, result->m_Items[19]->fields.battleId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1319;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v227 = WarEntityByWarID->fields.eventId;
  else
    v227 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1319;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                                       &v349,
                                                       v227,
                                                       (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v340 )
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
    v228 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1321;
    if ( !*m_Items )
      goto LABEL_1319;
    if ( (*m_Items)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v349;
      if ( v349
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v349,
                                                                 0LL),
            v228 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v228 )
          goto LABEL_1321;
        if ( !*m_Items )
          goto LABEL_1319;
        v229 = (*m_Items)->m_Items[41];
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4387B4C )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_4387B4C = 1;
        }
        v230 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v230 = TerminalPramsManager_TypeInfo;
        }
        v231 = v230->static_fields;
        v231->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v229;
        p_oldPersonalBoss_k__BackingField = &v231->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v228 )
          goto LABEL_1321;
        if ( !*m_Items )
          goto LABEL_1319;
        v233 = (*m_Items)->m_Items[41];
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4387B4A )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_4387B4A = 1;
        }
        v234 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v234 = TerminalPramsManager_TypeInfo;
        }
        v235 = v234->static_fields;
        v235->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v233;
        p_oldPersonalBoss_k__BackingField = &v235->_oldSuperBoss_k__BackingField;
      }
      sub_B77560(p_oldPersonalBoss_k__BackingField);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387B4B )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B4B = 1;
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
  if ( !byte_4387B4B )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B4B = 1;
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
    v237 = 1;
  }
  else
  {
LABEL_1326:
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4387478 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387478 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v238 = BalanceConfig_TypeInfo;
    battleId = result->m_Items[19]->fields.battleId;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v238 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v237 = battleId == v238->static_fields->OrtFirstQuestId;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_43874A7 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43874A7 = 1;
  }
  v240 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v240 = TerminalPramsManager_TypeInfo;
  }
  v240->static_fields->_isIncomingCall_k__BackingField = v237;
  if ( v349 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v349, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387478 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387478 = 1;
    }
    v241 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v241 = TerminalPramsManager_TypeInfo;
    }
    v242 = BalanceConfig_TypeInfo;
    v243 = v241->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v242 = BalanceConfig_TypeInfo;
    }
    if ( v243 == v242->static_fields->OrtLateQuestId )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387479 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387479 = 1;
      }
      v244 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v244 = TerminalPramsManager_TypeInfo;
      }
      v245 = BalanceConfig_TypeInfo;
      v246 = v244->static_fields->_PhaseCnt_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v245 = BalanceConfig_TypeInfo;
      }
      if ( v246 + 1 == v245->static_fields->OrtLatePhaseBreak )
        goto LABEL_1327;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387479 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387479 = 1;
      }
      v247 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v247 = TerminalPramsManager_TypeInfo;
      }
      v248 = BalanceConfig_TypeInfo;
      v249 = v247->static_fields->_PhaseCnt_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v248 = BalanceConfig_TypeInfo;
      }
      if ( v249 + 1 == v248->static_fields->OrtLatePhaseDead )
      {
LABEL_1327:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v250 = (UserSuperBossMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
        v251 = result;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v250 )
          goto LABEL_1319;
        if ( UserSuperBossMaster__TryGetEntity(
               v250,
               &v348,
               (int64_t)v251,
               v227,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_B775DC(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1319;
          v252 = v348;
          v253 = result;
          if ( v348 )
          {
            result = (BattleResultComponent_resultData_array *)sub_B77684(v348, result->obj.klass->_1.element_class);
            if ( !result )
              goto LABEL_1322;
          }
          if ( !v253->max_length )
            goto LABEL_1321;
          v253->m_Items[0] = (BattleResultComponent_resultData_o *)v252;
          sub_B77560(v253->m_Items);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4387B4C )
          {
            sub_B775C4(&TerminalPramsManager_TypeInfo);
            byte_4387B4C = 1;
          }
          v254 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v254 = TerminalPramsManager_TypeInfo;
          }
          v255 = v254->static_fields;
          v255->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v253;
          sub_B77560(&v255->_oldPersonalBoss_k__BackingField);
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
    v257 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1319;
    v258 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)result,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387478 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387478 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v258 )
      goto LABEL_1319;
    ScriptQuestId = QuestMaster__getScriptQuestId(v258, result->m_Items[19]->fields.battleId, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4387479 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387479 = 1;
    }
    v261 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v261 = TerminalPramsManager_TypeInfo;
    }
    v262 = v261->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v257, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v262 + 1,
                                                         winResult,
                                                         0LL);
    if ( !Instance )
      goto LABEL_1319;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)Instance, (System_String_o *)result, 0LL) )
      goto LABEL_1086;
    v264 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387479 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387479 = 1;
    }
    v265 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v265 = TerminalPramsManager_TypeInfo;
    }
    v266 = v265->static_fields->_PhaseCnt_k__BackingField;
    v267 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v257, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v266 + 1,
                                                         v267,
                                                         0LL);
    if ( !v264 )
      goto LABEL_1319;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v264, (System_String_o *)result, 0LL) )
    {
LABEL_1086:
      v268 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v268 = TerminalPramsManager_TypeInfo;
      }
      p_lastPlayBgmName = &v268->static_fields->lastPlayBgmName;
      *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B77560(p_lastPlayBgmName);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v270);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1319;
  v271 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)result,
                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v272 = result->m_Items[19]->fields.battleId;
  if ( !byte_4387479 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4387479 = 1;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v271 )
    goto LABEL_1319;
  QuestPhaseMaster__TryGetEntity(v271, &v354, v272, result->m_Items[19]->fields.eventId + 1, 0LL);
  if ( !byte_4387B3D )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B3D = 1;
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
    if ( !byte_4387B3D )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387B3D = 1;
    }
    v273 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v273 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v273->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1319;
    SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)result, 0LL);
  }
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*m_Items )
LABEL_1319:
    sub_B7769C(result, isWin);
  v274 = HIDWORD((*m_Items)->bounds);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  v275 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v275 = TerminalPramsManager_TypeInfo;
  }
  v276 = v275->static_fields->_QuestId_k__BackingField;
  if ( !byte_4387479 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v275 = TerminalPramsManager_TypeInfo;
    byte_4387479 = 1;
  }
  if ( (BYTE3(v275->vtable._0_Equals.methodPtr) & 4) != 0 && !v275->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v275);
    v275 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         v271,
                         v274,
                         v276,
                         v275->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_4387B3E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B3E = 1;
  }
  v278 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v278 = TerminalPramsManager_TypeInfo;
  }
  v279 = v278->static_fields;
  v279->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_B77560(&v279->_SpecifiedChangeSceneInfo_k__BackingField);
  v280 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0;
  v280->static_fields->TipsArchiveCurrrentTab = 0;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v281);
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*m_Items )
    goto LABEL_1319;
  v282 = (int32_t)(*m_Items)->m_Items[52];
  v283 = TerminalPramsManager_TypeInfo;
  if ( v282 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387485 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387485 = 1;
    }
    v283 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v283 = TerminalPramsManager_TypeInfo;
    }
    v283->static_fields->_EventMuralId_k__BackingField = v282;
  }
  if ( (BYTE3(v283->vtable._0_Equals.methodPtr) & 4) != 0 && !v283->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v283);
    v283 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = &v283->static_fields->eventHarvestGrowthInfo;
  *p_eventHarvestGrowthInfo = 0LL;
  sub_B77560(p_eventHarvestGrowthInfo);
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  v285 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v285 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       v271,
                                                       v285->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1319;
  v286 = (QuestPhaseEntity_o *)result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19499/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v288 = QuestPhaseEntity__getScriptIntParam(v286, (System_String_o *)StringLiteral_19498/*"harvestGrowthAfterQuestId"*/, -1, 0LL);
  if ( ScriptIntParam >= 1 )
  {
    v289 = v288;
    if ( v288 >= 1 )
    {
      v290 = (EventHarvestGrowthInfo_o *)sub_B77694(EventHarvestGrowthInfo_TypeInfo);
      EventHarvestGrowthInfo___ctor(v290, 0LL);
      if ( !v290 )
        goto LABEL_1319;
      v290->fields.questId = v286->fields.questId;
      phase = v286->fields.phase;
      v290->fields.afterQuestId = v289;
      v290->fields.phase = phase;
      v290->fields.beforeQuestId = ScriptIntParam;
      v292 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v292 = TerminalPramsManager_TypeInfo;
      }
      v293 = &v292->static_fields->eventHarvestGrowthInfo;
      *v293 = v290;
      sub_B77560(v293);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1319;
  v294 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)result,
                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v294 )
    goto LABEL_1319;
  QuestEntity = QuestMaster__getQuestEntity(v294, result->m_Items[19]->fields.battleId, 0LL);
  if ( QuestEntity )
  {
    v296 = QuestEntity;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387478 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387478 = 1;
    }
    v297 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v297 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(v271, v297->static_fields->_QuestId_k__BackingField, 0LL) )
    {
      SpotId = QuestEntity__getSpotId(v296, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
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
          v300 = CurrentLevelEntity;
          v301 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v301 = TerminalPramsManager_TypeInfo;
          }
          eventAreaImproveResultInfo = v301->static_fields->eventAreaImproveResultInfo;
          if ( eventAreaImproveResultInfo )
          {
            if ( (BYTE3(v301->vtable._0_Equals.methodPtr) & 4) != 0 && !v301->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v301);
              eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
              if ( !eventAreaImproveResultInfo )
                goto LABEL_1319;
            }
            eventAreaImproveResultInfo->fields.afterLevel = v300->fields.lv;
          }
        }
        goto LABEL_1204;
      }
LABEL_1321:
      v337 = sub_B776C8(result);
      sub_B77668(v337, 0LL);
    }
  }
LABEL_1204:
  result = (BattleResultComponent_resultData_array *)v354;
  if ( v354 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v354, 0LL);
    if ( !result )
      goto LABEL_1319;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4387478 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387478 = 1;
      }
      v303 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v303 = TerminalPramsManager_TypeInfo;
      }
      v353 = v303->static_fields->_QuestId_k__BackingField;
      v304 = System_Int32__ToString((int32_t)&v353, 0LL);
      if ( !byte_4387479 )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_4387479 = 1;
      }
      v305 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v305 = TerminalPramsManager_TypeInfo;
      }
      v353 = v305->static_fields->_PhaseCnt_k__BackingField + 1;
      v306 = System_Int32__ToString((int32_t)&v353, 0LL);
      v307 = System_String__Concat_44904220(v304, (System_String_o *)StringLiteral_714/*","*/, v306, 0LL);
      if ( !byte_43884BB )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_43884BB = 1;
      }
      v308 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v308 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = &v308->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      *p_SceneMoveQuestClearedInfo_k__BackingField = v307;
      sub_B77560(p_SceneMoveQuestClearedInfo_k__BackingField);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1321;
  if ( !*m_Items )
    goto LABEL_1319;
  v310 = (*m_Items)->m_Items[47];
  if ( v310 && v310->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_438748C )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438748C = 1;
    }
    v311 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v311 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = &v311->static_fields->_limitImageAnnounces_k__BackingField;
    *p_limitImageAnnounces_k__BackingField = (struct LimitImageAnnounce_array *)v310;
    sub_B77560(p_limitImageAnnounces_k__BackingField);
  }
  v313 = (System_String_array *)sub_B775DC(string___TypeInfo, 7LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  v314 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v315 = &byte_4387000;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v314 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v315 = &byte_4387000;
  }
  v353 = v314->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v353, 0LL);
  if ( !v313 )
    goto LABEL_1319;
  v316 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B77684(result, v313->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
  }
  if ( !v313->max_length )
    goto LABEL_1321;
  v313->m_Items[0] = (System_String_o *)v316;
  sub_B77560(v313->m_Items);
  result = (BattleResultComponent_resultData_array *)StringLiteral_714/*","*/;
  if ( StringLiteral_714/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B77684(StringLiteral_714/*","*/, v313->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
    v317 = StringLiteral_714/*","*/;
  }
  else
  {
    v317 = 0LL;
  }
  if ( v313->max_length <= 1 )
    goto LABEL_1321;
  v313->m_Items[1] = (System_String_o *)v317;
  sub_B77560(&v313->m_Items[1]);
  if ( !byte_4387479 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387479 = 1;
  }
  v318 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v318 = TerminalPramsManager_TypeInfo;
  }
  v353 = v318->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v353, 0LL);
  v319 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B77684(result, v313->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
  }
  if ( v313->max_length <= 2 )
    goto LABEL_1321;
  v313->m_Items[2] = (System_String_o *)v319;
  sub_B77560(&v313->m_Items[2]);
  result = (BattleResultComponent_resultData_array *)StringLiteral_714/*","*/;
  if ( StringLiteral_714/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B77684(StringLiteral_714/*","*/, v313->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
    v320 = StringLiteral_714/*","*/;
  }
  else
  {
    v320 = 0LL;
  }
  if ( v313->max_length <= 3 )
    goto LABEL_1321;
  v313->m_Items[3] = (System_String_o *)v320;
  sub_B77560(&v313->m_Items[3]);
  if ( !v315[1154] )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v315[1154] = 1;
  }
  v321 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v321 = TerminalPramsManager_TypeInfo;
  }
  v347[0] = v321->static_fields->_IsQuestClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v347, 0LL);
  v322 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B77684(result, v313->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
  }
  if ( v313->max_length <= 4 )
    goto LABEL_1321;
  v313->m_Items[4] = (System_String_o *)v322;
  sub_B77560(&v313->m_Items[4]);
  result = (BattleResultComponent_resultData_array *)StringLiteral_714/*","*/;
  if ( StringLiteral_714/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B77684(StringLiteral_714/*","*/, v313->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1322;
    v323 = StringLiteral_714/*","*/;
  }
  else
  {
    v323 = 0LL;
  }
  if ( v313->max_length <= 5 )
    goto LABEL_1321;
  v313->m_Items[5] = (System_String_o *)v323;
  sub_B77560(&v313->m_Items[5]);
  if ( !byte_438747A )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438747A = 1;
  }
  v324 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v324 = TerminalPramsManager_TypeInfo;
  }
  v347[0] = v324->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v347, 0LL);
  v325 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B77684(result, v313->obj.klass->_1.element_class);
    if ( !result )
    {
LABEL_1322:
      v338 = sub_B776BC();
      sub_B77668(v338, 0LL);
    }
  }
  if ( v313->max_length <= 6 )
    goto LABEL_1321;
  v313->m_Items[6] = (System_String_o *)v325;
  sub_B77560(&v313->m_Items[6]);
  v326 = System_String__Concat_44982964(v313, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16607/*"afterActionBk"*/, v326, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v327);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v328);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v329);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v330);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v331);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v332) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387467 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387467 = 1;
    }
    v333 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v333 = TerminalPramsManager_TypeInfo;
    }
    v333->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_438746E )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438746E = 1;
    }
    v334 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v334 = TerminalPramsManager_TypeInfo;
    }
    v334->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_438746F )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      v334 = TerminalPramsManager_TypeInfo;
      byte_438746F = 1;
    }
    if ( (BYTE3(v334->vtable._0_Equals.methodPtr) & 4) != 0 && !v334->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v334);
      v334 = TerminalPramsManager_TypeInfo;
    }
    v334->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_43884B0 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      v334 = TerminalPramsManager_TypeInfo;
      byte_43884B0 = 1;
    }
    if ( (BYTE3(v334->vtable._0_Equals.methodPtr) & 4) != 0 && !v334->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v334);
      v334 = TerminalPramsManager_TypeInfo;
    }
    v334->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v334);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  const MethodInfo *v1; // x0

  if ( (byte_4388444 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388444 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438849B )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438849B = 1;
  }
  v1 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
  }
  HIDWORD(v1[2].klass->vtable[12].methodPtr) = 0;
  TerminalPramsManager__BlankEarthSpotId_SaveData(v1);
}


void __fastcall TerminalPramsManager__ResetResumeScriptWithMap(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o **p_TalkScriptInfo_k__BackingField; // x0
  TerminalPramsManager_c *v3; // x0

  if ( (byte_438844A & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438844A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438849C )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438849C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_438849D )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_438849D = 1;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  v1->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_438849E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
    byte_438849E = 1;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = &v1->static_fields->_TalkScriptInfo_k__BackingField;
  *p_TalkScriptInfo_k__BackingField = 0LL;
  sub_B77560(p_TalkScriptInfo_k__BackingField);
  if ( !byte_43882BE )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43882BE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
}


void __fastcall TerminalPramsManager__SaveClearDatas(
        BattleResultComponent_resultData_array *result,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  TerminalPramsManager_c *v5; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  BattleResultComponent_resultData_o *v8; // x0
  TerminalPramsManager_c *v9; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v11; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w21
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v14; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  _BOOL4 IsOrdealCallWarClear_k__BackingField; // w24
  QuestRewardInfo_array *v17; // x23
  bool isWarBoardClear; // w19
  bool v19; // zf
  int32_t eventMuralId; // w21
  bool v21; // w26
  TerminalPramsManager_ClearData_o *v22; // x25
  TerminalPramsManager_c *v23; // x0
  TerminalPramsManager_ClearData_c *v24; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v26; // x1
  __int64 v27; // x0
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

  if ( (byte_438848B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_ClearData_TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438848B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v3->static_fields->mQuestRewardInfos;
  if ( result )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( !byte_4387478 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387478 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v6 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v5->static_fields->_QuestId_k__BackingField, method);
    if ( v6 )
    {
      if ( !result->max_length )
      {
        v27 = sub_B776C8(v6);
        sub_B77668(v27, 0LL);
      }
      v8 = result->m_Items[0];
      if ( !v8 )
        sub_B7769C(0LL, v7);
      if ( BattleResultComponent_resultData__checkResultDispFlag(v8, 2048, 0LL) )
        mQuestRewardInfos = 0LL;
    }
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_4387482 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4387482 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v9->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_438747A )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_438747A = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v11 = v9->static_fields;
  IsPhaseClear_k__BackingField = v11->_IsPhaseClear_k__BackingField;
  clearLastBattleRaidId = v11->clearLastBattleRaidId;
  clearBattleRaidId = v11->clearBattleRaidId;
  groupjoin = v11->joinGroupId;
  if ( !byte_4387B49 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4387B49 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v9->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4387B4B )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4387B4B = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v9->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_43884D8 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_43884D8 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evpWinReward = v9->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4387B4E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4387B4E = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v9->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_43884D7 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_43884D7 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evRace = v9->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_438748A )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_438748A = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v9->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_4387481 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4387481 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet = v9->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_4387486 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4387486 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v9->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_43884D9 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_43884D9 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  resultEvTowerRewardInfo = v9->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4387477 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4387477 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v9->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4387497 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4387497 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v9->static_fields->_warClearReward_k__BackingField;
  if ( !byte_43884DA )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_43884DA = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v9->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_4387483 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4387483 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v14 = v9->static_fields;
  IsWarBoardClear_k__BackingField = v14->_IsWarBoardClear_k__BackingField;
  questResultAfterEventRewardInfos = v14->mQuestResultAfterEventRewardInfos;
  resultEventPanelRewardInfos = v14->mResultEventPanelRewardInfos;
  panelEventPoint = v14->panelEventPoint;
  if ( !byte_438748B )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_438748B = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v9->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_438747F )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_438747F = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v9->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4387484 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_4387484 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v17 = mQuestRewardInfos;
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v17 = mQuestRewardInfos;
  }
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v19 = !IsPhaseClear_k__BackingField;
  eventMuralId = v9->static_fields->_EventMuralId_k__BackingField;
  v21 = !v19;
  v22 = (TerminalPramsManager_ClearData_o *)sub_B77694(TerminalPramsManager_ClearData_TypeInfo);
  TerminalPramsManager_ClearData___ctor_20182664(
    v22,
    mQuestClearHeroineInfo,
    v17,
    mQuestPhaseRewardInfos,
    IsQuestClear_k__BackingField,
    v21,
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
  if ( !byte_43884DB )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884DB = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v24 = TerminalPramsManager_ClearData_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v24 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v24->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v26 = JsonManager__toJson((Il2CppObject *)v22, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v26, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v4; // x0

  if ( (byte_4388491 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11776/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/);
    byte_4388491 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884DD )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884DD = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  EventRaidDefeatedEffectInfo_k__BackingField = v2->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  if ( !EventRaidDefeatedEffectInfo_k__BackingField )
    sub_B7769C(0LL, v1);
  v4 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11776/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestInfo_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4388456 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_13873/*"TerminalPhaseCnt"*/);
    sub_B775C4(&StringLiteral_13876/*"TerminalQuestId"*/);
    byte_4388456 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13876/*"TerminalQuestId"*/,
    v1->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4387479 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387479 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13873/*"TerminalPhaseCnt"*/,
    v2->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *Empty; // x19
  TerminalPramsManager_c *v3; // x0
  System_Collections_Generic_Dictionary_int__int__o *QuestRandomGroupList_k__BackingField; // x0
  int key; // w20
  int key_high; // w25
  __int64 v7; // x2
  Il2CppObject *v8; // x20
  __int64 v9; // x2
  Il2CppObject *v10; // x2
  System_String_o *v11; // x1
  __int128 v12[2]; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+20h] [xbp-60h] BYREF
  int v14; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4388495 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11785/*"SAVEKEY_QuestRandomGroupList"*/);
    sub_B775C4(&StringLiteral_24113/*"{0}:{1}"*/);
    sub_B775C4(&StringLiteral_714/*","*/);
    byte_4388495 = 1;
  }
  memset(&v13, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884DF )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884DF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestRandomGroupList_k__BackingField = v3->static_fields->_QuestRandomGroupList_k__BackingField;
  if ( !QuestRandomGroupList_k__BackingField )
    sub_B7769C(0LL, v1);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v12,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_2FE92E4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v13.fields.dictionary = v12[0];
  v13.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v12[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v13,
            (const MethodInfo_2885E04 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v13.fields.current.fields.key;
    key_high = HIDWORD(v13.fields.current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_44901936(Empty, (System_String_o *)StringLiteral_714/*","*/, 0LL);
    LODWORD(v12[0]) = key;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v12, v7);
    v14 = key_high;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9);
    v11 = System_String__Format_44897472((System_String_o *)StringLiteral_24113/*"{0}:{1}"*/, v8, v10, 0LL);
    Empty = System_String__Concat_44901936(Empty, v11, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v13,
    (const MethodInfo_2885F4C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11785/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__SaveQuestReleasedFocusState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v3; // x1

  if ( (byte_438847F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438847F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v1);
  if ( !QuestFocusStateManager )
    sub_B7769C(0LL, v3);
  QuestFocusStateManager__WriteData(QuestFocusStateManager, 0LL);
}


void __fastcall TerminalPramsManager__Save_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  TerminalPramsManager_c *v6; // x0
  TerminalPramsManager_c *v7; // x0
  System_String_o *v8; // x0
  TerminalPramsManager_c *v9; // x0
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  TerminalPramsManager_c *v14; // x0
  System_String_o *v15; // x0
  TerminalPramsManager_c *v16; // x0
  TerminalPramsManager_c *v17; // x0
  TerminalPramsManager_c *v18; // x0
  TerminalPramsManager_c *v19; // x0
  TerminalPramsManager_c *v20; // x0
  TerminalPramsManager_c *v21; // x0
  TerminalPramsManager_c *v22; // x0
  TerminalPramsManager_c *v23; // x0
  TerminalPramsManager_c *v24; // x0
  TerminalPramsManager_c *v25; // x0
  System_String_o *v26; // x19
  TerminalPramsManager_c *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  TerminalPramsManager_c *v30; // x0
  TerminalPramsManager_c *v31; // x0
  int32_t MapModelClearQuestId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF
  int64_t EndTime_k__BackingField; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4388454 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_13866/*"TerminalEndTime"*/);
    sub_B775C4(&StringLiteral_11783/*"SAVEKEY_PlayedTerminalEffects"*/);
    sub_B775C4(&StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/);
    sub_B775C4(&StringLiteral_13867/*"TerminalEventDailyPointEventId"*/);
    sub_B775C4(&StringLiteral_13873/*"TerminalPhaseCnt"*/);
    sub_B775C4(&StringLiteral_13881/*"TerminalTimeStatusEventId"*/);
    sub_B775C4(&StringLiteral_13865/*"TerminalDispState"*/);
    sub_B775C4(&StringLiteral_11780/*"SAVEKEY_PlayTerminalEffectDisappear"*/);
    sub_B775C4(&StringLiteral_13868/*"TerminalIsDoneShortcut"*/);
    sub_B775C4(&StringLiteral_11779/*"SAVEKEY_MapModelClearQuestInfo"*/);
    sub_B775C4(&StringLiteral_11784/*"SAVEKEY_PlayerGenderType"*/);
    sub_B775C4(&StringLiteral_11772/*"SAVEKEY_ClearEventQuestIds"*/);
    sub_B775C4(&StringLiteral_11781/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/);
    sub_B775C4(&StringLiteral_13876/*"TerminalQuestId"*/);
    sub_B775C4(&StringLiteral_11791/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    sub_B775C4(&StringLiteral_13880/*"TerminalTimeStatusEventDailyPoint"*/);
    sub_B775C4(&StringLiteral_13885/*"TerminalWarId"*/);
    sub_B775C4(&StringLiteral_13878/*"TerminalSpotId"*/);
    sub_B775C4(&StringLiteral_13882/*"TerminalTimeStatusLoopCount"*/);
    sub_B775C4(&StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/);
    sub_B775C4(&StringLiteral_11770/*"SAVEKEY_BlankEarthSpotId"*/);
    sub_B775C4(&StringLiteral_11775/*"SAVEKEY_DataLostBattleAutoReset"*/);
    sub_B775C4(&StringLiteral_13886/*"TerminalWarStartedIds"*/);
    sub_B775C4(&StringLiteral_11774/*"SAVEKEY_ConnectMarkEventId"*/);
    sub_B775C4(&StringLiteral_714/*","*/);
    sub_B775C4(&StringLiteral_11773/*"SAVEKEY_ConnectMarkAnimationId"*/);
    sub_B775C4(&StringLiteral_11782/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/);
    sub_B775C4(&StringLiteral_11790/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4388454 = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387464 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387464 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13865/*"TerminalDispState"*/,
    v1->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_4387465 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387465 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13885/*"TerminalWarId"*/,
    v2->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_4387474 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387474 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13878/*"TerminalSpotId"*/,
    v3->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_4387468 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387468 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11770/*"SAVEKEY_BlankEarthSpotId"*/,
    v4->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13876/*"TerminalQuestId"*/,
    v5->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4387479 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387479 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13873/*"TerminalPhaseCnt"*/,
    v6->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_43884BF )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884BF = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v7->static_fields->_EndTime_k__BackingField;
  v8 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13866/*"TerminalEndTime"*/, v8, 0LL);
  if ( !byte_43874B1 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43874B1 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13868/*"TerminalIsDoneShortcut"*/,
    v9->static_fields->_IsDoneShortcut_k__BackingField,
    0LL);
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_13886/*"TerminalWarStartedIds"*/,
    v10->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_43884C0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C0 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13881/*"TerminalTimeStatusEventId"*/,
    v11->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_43884C1 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C1 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13882/*"TerminalTimeStatusLoopCount"*/,
    v12->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_4387B46 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B46 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13867/*"TerminalEventDailyPointEventId"*/,
    v13->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4387B45 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387B45 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  EndTime_k__BackingField = v14->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
  v15 = System_Int64__ToString((int64_t)&EndTime_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13880/*"TerminalTimeStatusEventDailyPoint"*/, v15, 0LL);
  if ( !byte_43884C2 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C2 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/,
    v16->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_43884C3 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C3 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/,
    v17->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_43884C4 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C4 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11783/*"SAVEKEY_PlayedTerminalEffects"*/,
    v18->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_43874A4 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43874A4 = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11780/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v19->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43874A5 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43874A5 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11781/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v20->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_43884C5 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C5 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11782/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v21->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C6 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C6 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11791/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v22->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11774/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11773/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_4387471 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387471 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11790/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v23->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_43884C7 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C7 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11772/*"SAVEKEY_ClearEventQuestIds"*/,
    v24->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_438748E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438748E = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v25->static_fields->_MapModelClearQuestId_k__BackingField;
  v26 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  if ( !byte_438748F )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438748F = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  MapModelClearQuestId_k__BackingField = v27->static_fields->_MapModelClearPhaseCount_k__BackingField;
  v28 = System_Int32__ToString((int32_t)&MapModelClearQuestId_k__BackingField, 0LL);
  v29 = System_String__Concat_44904220(v26, (System_String_o *)StringLiteral_714/*","*/, v28, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11779/*"SAVEKEY_MapModelClearQuestInfo"*/, v29, 0LL);
  if ( !byte_43884C8 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C8 = 1;
  }
  v30 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v30 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11775/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v30->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C9 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C9 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11784/*"SAVEKEY_PlayerGenderType"*/,
    v31->static_fields->_PlayerGenderType_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__SendClearQuestToAdManager(
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  bool IsMainStoryForQuestId; // w21
  AdManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w1

  if ( (byte_4388485 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388485 = 1;
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
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B7769C(0LL, v8);
    if ( IsMainStoryForQuestId )
      v9 = 10;
    else
      v9 = 9;
    AdManager__TrackEvent(Instance, v9, 10, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SendOpenedQuestIdToAdManager(int32_t clearedQuestId, const MethodInfo *method)
{
  TerminalPramsManager___c__DisplayClass630_0_o *v3; // x20
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x21
  int32_t v7; // w21
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v9; // x8
  struct TerminalPramsManager___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__630_0; // x21
  Il2CppObject *v12; // x22
  struct TerminalPramsManager___c_StaticFields *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  System_Func_int__BattleActionData_SideEffectData__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  TerminalPramsManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  struct TerminalPramsManager___c_StaticFields *v21; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__630_3; // x20
  Il2CppObject *v23; // x21
  struct TerminalPramsManager___c_StaticFields *v24; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v25; // x0
  TerminalPramsManager___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x19
  struct TerminalPramsManager___c_StaticFields *v28; // x9
  System_Func_int__int__o *_9__630_4; // x20
  Il2CppObject *v30; // x21
  struct TerminalPramsManager___c_StaticFields *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  int32_t v33; // w0
  int32_t v34; // w19
  WarEntity_o *v35; // [xsp+8h] [xbp-38h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4388486 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_QuestReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SpotMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderByDescending_int__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_int__QuestEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_QuestEntity__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_QuestEntity___);
    sub_B775C4(&Method_System_Func_QuestEntity__int___ctor__);
    sub_B775C4(&Method_System_Func_QuestEntity__bool___ctor__);
    sub_B775C4(&Method_System_Func_int__int___ctor__);
    sub_B775C4(&Method_System_Func_int__QuestEntity___ctor__);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_QuestEntity__int__TypeInfo);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&System_Func_int__QuestEntity__TypeInfo);
    sub_B775C4(&System_Func_QuestEntity__bool__TypeInfo);
    sub_B775C4(&System_Func_int__int__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_0__);
    sub_B775C4(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_3__);
    sub_B775C4(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_4__);
    sub_B775C4(&Method_TerminalPramsManager___c__DisplayClass630_0__SendOpenedQuestIdToAdManager_b__1__);
    sub_B775C4(&Method_TerminalPramsManager___c__DisplayClass630_0__SendOpenedQuestIdToAdManager_b__2__);
    sub_B775C4(&TerminalPramsManager___c__DisplayClass630_0_TypeInfo);
    sub_B775C4(&TerminalPramsManager___c_TypeInfo);
    byte_4388486 = 1;
  }
  entity = 0LL;
  v35 = 0LL;
  v3 = (TerminalPramsManager___c__DisplayClass630_0_o *)sub_B77694(TerminalPramsManager___c__DisplayClass630_0_TypeInfo);
  TerminalPramsManager___c__DisplayClass630_0___ctor(v3, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v3 )
      goto LABEL_50;
    v3->fields.questMaster = (struct QuestMaster_o *)Instance;
    sub_B77560(&v3->fields);
    Instance = (DataManager_o *)v3->fields.questMaster;
    if ( !Instance )
      goto LABEL_50;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_50;
    v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
    if ( !v6 )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v6,
                                  &v35,
                                  (int32_t)Instance,
                                  (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v35 )
      goto LABEL_50;
    v7 = *(&v35->fields.id + 1);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( TerminalPramsManager__IsMustPlayMainStory(v7, v5) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_50;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_50;
      v3->fields.userQuestMaster = (struct UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      sub_B77560(&v3->fields.userQuestMaster);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_50;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_50;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v9 = TerminalPramsManager___c_TypeInfo;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v9 = TerminalPramsManager___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__630_0 = static_fields->__9__630_0;
      if ( !_9__630_0 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__630_0 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          _9__630_0,
          v12,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_0__,
          (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
        v13 = TerminalPramsManager___c_TypeInfo->static_fields;
        v13->__9__630_0 = _9__630_0;
        sub_B77560(&v13->__9__630_0);
      }
      v14 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__630_0,
              (const MethodInfo_1D41A00 *)Method_System_Linq_Enumerable_Where_int___);
      v15 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B77694(System_Func_int__QuestEntity__TypeInfo);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v15,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass630_0__SendOpenedQuestIdToAdManager_b__1__,
        (const MethodInfo_29E3F2C *)Method_System_Func_int__QuestEntity___ctor__);
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                   v14,
                                                                   (System_Func_TSource__TResult__o *)v15,
                                                                   (const MethodInfo_1D377F4 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_QuestEntity__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v17,
        (Il2CppObject *)v3,
        Method_TerminalPramsManager___c__DisplayClass630_0__SendOpenedQuestIdToAdManager_b__2__,
        (const MethodInfo_29E92C4 *)Method_System_Func_QuestEntity__bool___ctor__);
      v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v16,
              (System_Func_TSource__bool__o *)v17,
              (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v19 = TerminalPramsManager___c_TypeInfo;
      v20 = v18;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v19 = TerminalPramsManager___c_TypeInfo;
      }
      v21 = v19->static_fields;
      _9__630_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v21->__9__630_3;
      if ( !_9__630_3 )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          v21 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)v21->__9;
        _9__630_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_QuestEntity__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__630_3,
          v23,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_3__,
          (const MethodInfo_29E9E70 *)Method_System_Func_QuestEntity__int___ctor__);
        v24 = TerminalPramsManager___c_TypeInfo->static_fields;
        v24->__9__630_3 = (struct System_Func_QuestEntity__int__o *)_9__630_3;
        sub_B77560(&v24->__9__630_3);
      }
      v25 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
              v20,
              (System_Func_TSource__TResult__o *)_9__630_3,
              (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v26 = TerminalPramsManager___c_TypeInfo;
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v26 = TerminalPramsManager___c_TypeInfo;
      }
      v28 = v26->static_fields;
      _9__630_4 = v28->__9__630_4;
      if ( !_9__630_4 )
      {
        if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v28 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v30 = (Il2CppObject *)v28->__9;
        _9__630_4 = (System_Func_int__int__o *)sub_B77694(System_Func_int__int__TypeInfo);
        System_Func_int__int____ctor(
          _9__630_4,
          v30,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__630_4__,
          (const MethodInfo_29E3638 *)Method_System_Func_int__int___ctor__);
        v31 = TerminalPramsManager___c_TypeInfo->static_fields;
        v31->__9__630_4 = _9__630_4;
        sub_B77560(&v31->__9__630_4);
      }
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v27,
                                                                   (System_Func_TSource__TKey__o *)_9__630_4,
                                                                   (const MethodInfo_1D34CD4 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v33 = System_Linq_Enumerable__FirstOrDefault_int_(
              v32,
              (const MethodInfo_1D310E0 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v33 )
      {
        v34 = v33;
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v34, 0LL);
          return;
        }
LABEL_50:
        sub_B7769C(Instance, v5);
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
  const MethodInfo *v5; // x1
  bool IsMainStoryForQuestId; // w21
  AdManager_o *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w1

  if ( (byte_4388484 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388484 = 1;
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
    IsMainStoryForQuestId = TerminalPramsManager__IsMainStoryForQuestId(questId, v5);
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B7769C(0LL, v8);
    if ( IsMainStoryForQuestId )
      v9 = 10;
    else
      v9 = 9;
    AdManager__TrackEvent(Instance, v9, 9, questId, questPhase, 0LL, 0LL);
  }
}


void __fastcall TerminalPramsManager__SetAutoResumeByQuestId(int32_t questId, const MethodInfo *method)
{
  QuestTree_o *SpotID; // x0
  __int64 v4; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  MapControl_QuestInfo_o *v6; // x20
  int32_t warId; // w21
  TerminalPramsManager_c *v8; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  bool v10; // w22
  int32_t v11; // w21
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  MapControl_WarInfo_o *WarInfo_k__BackingField; // x0
  WarEntity_o *Mine; // x0
  int32_t parentBlankEarthSpotId; // w1
  TerminalPramsManager_c *v17; // x0
  int32_t v18; // w21
  TerminalPramsManager_c *v19; // x0
  int32_t questPhase; // w21
  int64_t endTime; // x20
  QuestTree_o *v22; // x20
  WarEntity_o *WarEntityByWarID; // x0
  TerminalPramsManager_c *v24; // x0
  int v25; // w8
  TerminalSceneComponent_c *v26; // x0
  UnityEngine_Object_o *mInstance; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Object_o *v29; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v30; // x8
  ScrTerminalListTop_o *v31; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v32; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v34; // x8
  const MethodInfo *v35; // x0
  __int64 v36; // [xsp+0h] [xbp-40h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v38; // 0:x0.8

  if ( (byte_4388449 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_B775C4(&Method_System_Nullable_int___ctor__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_4388449 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  if ( SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    SpotID = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !SpotID )
      goto LABEL_194;
    QuestInfo = QuestTree__GetQuestInfo(SpotID, questId, 0LL);
    if ( !QuestInfo )
      return;
    v6 = QuestInfo;
    warId = QuestInfo->fields.warId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387467 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387467 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v8->static_fields->_WarId_k__BackingField = warId;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    SpotID = (QuestTree_o *)MapControl_QuestInfo__GetSpotID(v6, 0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_194;
    v10 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            (int32_t)SpotID,
            (const MethodInfo_21FB8F0 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    v11 = MapControl_QuestInfo__GetSpotID(v6, 0LL);
    if ( v10 )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        v12 = TerminalPramsManager_TypeInfo;
LABEL_42:
        j_il2cpp_runtime_class_init_0(v12);
      }
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_438749A )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_438749A = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      v13->static_fields->_SpotId_k__BackingField = v11;
      WarInfo_k__BackingField = v6->fields._WarInfo_k__BackingField;
      if ( WarInfo_k__BackingField && (Mine = MapControl_WarInfo__GetMine(WarInfo_k__BackingField, 0LL)) != 0LL )
      {
        parentBlankEarthSpotId = Mine->fields.parentBlankEarthSpotId;
        v38 = (System_Nullable_int__o)&v36;
        v36 = 0LL;
        System_Nullable_int____ctor(
          v38,
          parentBlankEarthSpotId,
          (const MethodInfo_24765B8 *)Method_System_Nullable_int___ctor__);
        v11 = v36;
      }
      else
      {
        v11 = 0;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        goto LABEL_42;
      }
    }
    if ( !byte_438849B )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438849B = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_BlankEarthSpotId_k__BackingField = v11;
    v18 = v6->fields.questId;
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v17);
    if ( !byte_4387469 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387469 = 1;
    }
    v19 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_QuestId_k__BackingField = v18;
    questPhase = v6->fields.questPhase;
    if ( !byte_438746A )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
      byte_438746A = 1;
    }
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_PhaseCnt_k__BackingField = questPhase;
    endTime = v6->fields.endTime;
    if ( !byte_43874B7 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
      byte_43874B7 = 1;
    }
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_EndTime_k__BackingField = endTime;
    if ( !byte_43874B0 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
      byte_43874B0 = 1;
    }
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v19->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 1;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    if ( !SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
      goto LABEL_197;
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v22 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4387465 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387465 = 1;
    }
    SpotID = (QuestTree_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      SpotID = (QuestTree_o *)TerminalPramsManager_TypeInfo;
    }
    if ( !v22 )
      goto LABEL_194;
    WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v22, HIDWORD(SpotID[1].fields.questReleaseEntList->klass), 0LL);
    if ( WarEntityByWarID )
    {
      if ( WarEntity__IsFolder(WarEntityByWarID, 0LL) )
      {
        if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_438746D )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_438746D = 1;
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
        if ( !byte_438746D )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_438746D = 1;
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
LABEL_197:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_438746D )
      {
        sub_B775C4(&TerminalPramsManager_TypeInfo);
        byte_438746D = 1;
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
    if ( !byte_4387463 )
    {
      sub_B775C4(&TerminalSceneComponent_TypeInfo);
      byte_4387463 = 1;
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
      goto LABEL_184;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4387463 )
    {
      sub_B775C4(&TerminalSceneComponent_TypeInfo);
      byte_4387463 = 1;
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
      v29 = *(UnityEngine_Object_o **)&klass->_2.element_size;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4387463 )
        {
          sub_B775C4(&TerminalSceneComponent_TypeInfo);
          byte_4387463 = 1;
        }
        SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v30 = SpotID[1].fields.questReleaseEntList->klass;
        if ( !v30 )
          goto LABEL_194;
        v31 = *(ScrTerminalListTop_o **)&v30->_2.element_size;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4387465 )
        {
          sub_B775C4(&TerminalPramsManager_TypeInfo);
          byte_4387465 = 1;
        }
        SpotID = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          SpotID = (QuestTree_o *)TerminalPramsManager_TypeInfo;
        }
        if ( !v31 )
          goto LABEL_194;
        ScrTerminalListTop__RequestChangeTerminalListBG(v31, HIDWORD(SpotID[1].fields.questReleaseEntList->klass), 0LL);
      }
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_4387463 )
      {
        sub_B775C4(&TerminalSceneComponent_TypeInfo);
        byte_4387463 = 1;
      }
      SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
      }
      v32 = SpotID[1].fields.questReleaseEntList->klass;
      if ( v32 )
      {
        genericContainerHandle = (UnityEngine_Object_o *)v32->_2.genericContainerHandle;
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
        if ( !byte_4387463 )
        {
          sub_B775C4(&TerminalSceneComponent_TypeInfo);
          byte_4387463 = 1;
        }
        SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          SpotID = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v34 = SpotID[1].fields.questReleaseEntList->klass;
        if ( v34 )
        {
          SpotID = (QuestTree_o *)v34->_2.genericContainerHandle;
          if ( SpotID )
          {
            TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)SpotID, 0LL);
LABEL_184:
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_438746E )
            {
              sub_B775C4(&TerminalPramsManager_TypeInfo);
              byte_438746E = 1;
            }
            v35 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v35 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
            }
            BYTE6(v35[2].klass->vtable[23].method) = 1;
            TerminalPramsManager__Save_SaveData(v35);
            return;
          }
        }
      }
    }
LABEL_194:
    sub_B7769C(SpotID, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__SetFolderLastClickedIdx(int32_t warId, int32_t idx, const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  System_Collections_Generic_Dictionary_int__int__o *v6; // x21
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  TerminalPramsManager_c *v10; // x0

  if ( (byte_438847A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438847A = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( !v5->static_fields->folderLastIdxs )
  {
    v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v6,
      (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v7 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    static_fields->folderLastIdxs = v6;
    sub_B77560(&static_fields->folderLastIdxs);
    v5 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v5->static_fields->folderLastIdxs;
  if ( !folderLastIdxs
    || (System_Collections_Generic_Dictionary_int__int___Remove(
          folderLastIdxs,
          warId,
          (const MethodInfo_2FEA668 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_B7769C(folderLastIdxs, *(_QWORD *)&idx);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_2FE8D70 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_43884A1 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884A1 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
}


void __fastcall TerminalPramsManager__SetQuestReleasedFocusState(
        int32_t questId,
        int32_t state,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v5; // x0
  QuestFocusStateManager_o *QuestFocusStateManager; // x0
  __int64 v7; // x1

  if ( (byte_4388480 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388480 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  QuestFocusStateManager = TerminalPramsManager__get_QuestFocusStateManager((const MethodInfo *)v5);
  if ( !QuestFocusStateManager )
    sub_B7769C(0LL, v7);
  QuestFocusStateManager__SetFocusState(QuestFocusStateManager, questId, state, 0LL);
}


void __fastcall TerminalPramsManager__SetQuestRewardInfo(
        BattleResultComponent_resultData_array *result,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct QuestRewardInfo_array **p_mQuestRewardInfos; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  BattleResultComponent_resultData_o *v7; // x8
  struct QuestRewardInfo_array *rewardInfos; // x20
  TerminalPramsManager_c *v9; // x0
  struct QuestRewardInfo_array **v10; // x0
  TerminalPramsManager_c *v11; // x0
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0
  BattleResultComponent_resultData_o *v13; // x8
  struct QuestRewardInfo_array *resultQuestPhaseRewardInfos; // x20
  TerminalPramsManager_c *v15; // x0
  struct QuestRewardInfo_array **v16; // x0
  TerminalPramsManager_c *v17; // x0
  struct BattleDropItem_array **p_mQuestResultAfterEventRewardInfos; // x0
  BattleResultComponent_resultData_o *v19; // x8
  struct BattleDropItem_array *resultAfterEventRewardInfos; // x19
  TerminalPramsManager_c *v21; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  __int64 v23; // x0

  if ( (byte_4388483 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388483 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = &v3->static_fields->mQuestRewardInfos;
  *p_mQuestRewardInfos = 0LL;
  sub_B77560(p_mQuestRewardInfos);
  if ( !result )
    goto LABEL_38;
  if ( !result->max_length )
    goto LABEL_39;
  v7 = result->m_Items[0];
  if ( !v7 )
    goto LABEL_38;
  rewardInfos = v7->fields.rewardInfos;
  if ( rewardInfos && *(_QWORD *)&rewardInfos->max_length )
  {
    v9 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v10 = &v9->static_fields->mQuestRewardInfos;
    *v10 = rewardInfos;
    sub_B77560(v10);
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = &v11->static_fields->mQuestPhaseRewardInfos;
  *p_mQuestPhaseRewardInfos = 0LL;
  sub_B77560(p_mQuestPhaseRewardInfos);
  if ( !result->max_length )
    goto LABEL_39;
  v13 = result->m_Items[0];
  if ( !v13 )
    goto LABEL_38;
  resultQuestPhaseRewardInfos = v13->fields.resultQuestPhaseRewardInfos;
  if ( resultQuestPhaseRewardInfos && *(_QWORD *)&resultQuestPhaseRewardInfos->max_length )
  {
    v15 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v16 = &v15->static_fields->mQuestPhaseRewardInfos;
    *v16 = resultQuestPhaseRewardInfos;
    sub_B77560(v16);
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = &v17->static_fields->mQuestResultAfterEventRewardInfos;
  *p_mQuestResultAfterEventRewardInfos = 0LL;
  sub_B77560(p_mQuestResultAfterEventRewardInfos);
  if ( !result->max_length )
  {
LABEL_39:
    v23 = sub_B776C8(v5);
    sub_B77668(v23, 0LL);
  }
  v19 = result->m_Items[0];
  if ( !v19 )
LABEL_38:
    sub_B7769C(v5, v6);
  resultAfterEventRewardInfos = v19->fields.resultAfterEventRewardInfos;
  if ( resultAfterEventRewardInfos && *(_QWORD *)&resultAfterEventRewardInfos->max_length )
  {
    v21 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v21->static_fields;
    static_fields->mQuestResultAfterEventRewardInfos = resultAfterEventRewardInfos;
    sub_B77560(&static_fields->mQuestResultAfterEventRewardInfos);
  }
}


void __fastcall TerminalPramsManager__SetWarStartedId(int32_t war_id, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = war_id;
  if ( (byte_4388478 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    byte_4388478 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !TerminalPramsManager__IsWarStartedId(war_id, method) )
  {
    v3 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    mTerminalWarStartedIds = v3->static_fields->mTerminalWarStartedIds;
    v5 = System_Int32__ToString((int32_t)&v9, 0LL);
    v6 = System_String__Concat_44904220(mTerminalWarStartedIds, v5, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v6;
    sub_B77560(&static_fields->mTerminalWarStartedIds);
    TerminalPramsManager__Save_SaveData(v8);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388455 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_13878/*"TerminalSpotId"*/);
    byte_4388455 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387474 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387474 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13878/*"TerminalSpotId"*/,
    v1->static_fields->_SpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0

  if ( (byte_438845B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/);
    sub_B775C4(&StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/);
    byte_438845B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C2 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13862/*"TerminalBeforeEventActivityPoint"*/,
    v1->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_43884C3 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13863/*"TerminalBeforeEventActivityPointGauge"*/,
    v2->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388460 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11786/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_4388460 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11786/*"SAVEKEY_TerminalConquestInfoDisp"*/, v1->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v3; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_438845F & 1) == 0 )
  {
    sub_B775C4(&EventConquestInfo___TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11787/*"SAVEKEY_TerminalConquestInfos"*/);
    sub_B775C4(&StringLiteral_11786/*"SAVEKEY_TerminalConquestInfoDisp"*/);
    byte_438845F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v1->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      eventConquestInfos = TerminalPramsManager_TypeInfo->static_fields->eventConquestInfos;
    }
  }
  else
  {
    eventConquestInfos = (struct EventConquestInfo_array *)sub_B775DC(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11787/*"SAVEKEY_TerminalConquestInfos"*/, v3, 0LL);
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11786/*"SAVEKEY_TerminalConquestInfoDisp"*/, v4->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  EventHarvestGrowthInfo_o *eventHarvestGrowthInfo; // x19
  System_String_o *v3; // x0

  if ( (byte_4388461 & 1) == 0 )
  {
    sub_B775C4(&EventHarvestGrowthInfo_TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11788/*"SAVEKEY_TerminalHarvestGrowthInfo"*/);
    byte_4388461 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = v1->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      eventHarvestGrowthInfo = TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (EventHarvestGrowthInfo_o *)sub_B77694(EventHarvestGrowthInfo_TypeInfo);
    EventHarvestGrowthInfo___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v3 = JsonManager__toJson((Il2CppObject *)eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11788/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v3, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventSubmarinePointInfoSave_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *BeforeEventSubmarineSaveData_k__BackingField; // x19
  System_String_o *v4; // x0

  if ( (byte_438845D & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_13864/*"TerminalBeforeEventSubmarinePointData"*/);
    byte_438845D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884CC )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884CC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( v1->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
  {
    if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v1);
    if ( !byte_43884CC )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884CC = 1;
    }
    v2 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v2 = TerminalPramsManager_TypeInfo;
    }
    BeforeEventSubmarineSaveData_k__BackingField = (Il2CppObject *)v2->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = JsonManager__toJson(BeforeEventSubmarineSaveData_k__BackingField, 0, 0, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13864/*"TerminalBeforeEventSubmarinePointData"*/, v4, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388469 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11790/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/);
    byte_4388469 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387471 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387471 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11790/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v1->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388468 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&StringLiteral_11791/*"SAVEKEY_TerminalSelectedStoryQuestId"*/);
    byte_4388468 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884C6 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884C6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11791/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v1->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  if ( (byte_438845A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13884/*"TerminalTransitionInfoVoiceAssetName"*/);
    sub_B775C4(&StringLiteral_13883/*"TerminalTransitionInfoMissionId"*/);
    byte_438845A = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13883/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13884/*"TerminalTransitionInfoVoiceAssetName"*/,
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *klass; // x0
  Il2CppObject *v6; // x8
  System_Collections_Generic_List_int__o *v7; // x21
  Il2CppObject *v8; // x8
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4388490 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388490 = 1;
  }
  value = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_43884DD )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43884DD = 1;
  }
  klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
  }
  v6 = klass[2].fields.entries->m_Items[16].fields.value;
  if ( !v6 )
    goto LABEL_30;
  klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v6[1].klass;
  if ( !klass )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)klass,
          eventId,
          &value,
          (const MethodInfo_2FF5E9C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v7 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v7,
      (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v7;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_43884DD )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_43884DD = 1;
    }
    klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
    }
    v8 = klass[2].fields.entries->m_Items[16].fields.value;
    if ( !v8 )
      goto LABEL_30;
    klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v8[1].klass;
    if ( !klass )
      goto LABEL_30;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      klass,
      eventId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    goto LABEL_28;
  }
  klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_int___Contains(
          (System_Collections_Generic_List_int__o *)value,
          day,
          (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
LABEL_28:
    klass = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)value;
    if ( value )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)value,
        day,
        (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      return;
    }
LABEL_30:
    sub_B7769C(klass, *(_QWORD *)&day);
  }
}


int32_t __fastcall TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438837B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438837B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_AfterActionFocusQuestId_k__BackingField;
}


BattleSetupInfo_o *__fastcall TerminalPramsManager__get_BattleSetupKeep(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388399 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388399 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BattleSetupKeep_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeClearQuest(const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v2; // x1
  SceneRootComponent_c *klass; // x8
  __int64 v4; // x8
  SceneRootComponent_c *v5; // x8
  __int64 v6; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v8; // x0

  if ( (byte_43883CB & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_43883CB = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4387463 )
    {
      sub_B775C4(&TerminalSceneComponent_TypeInfo);
      byte_4387463 = 1;
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
    v4 = *(_QWORD *)&klass->_2.static_fields_size;
    if ( !v4 )
      goto LABEL_37;
    if ( *(_DWORD *)(v4 + 404) )
    {
      if ( (Instance[3].fields.fadeType & 0x4000000) != 0 && !Instance[2].fields.fadeType )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_4387463 )
      {
        sub_B775C4(&TerminalSceneComponent_TypeInfo);
        byte_4387463 = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v5 = Instance[2].fields.targetRoot->klass;
      if ( v5 )
      {
        v6 = *(_QWORD *)&v5->_2.static_fields_size;
        if ( v6 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v6 + 404);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_37:
      sub_B7769C(Instance, v2);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_QuestId_k__BackingField = &v8->static_fields->_QuestId_k__BackingField;
  return *p_QuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeEventActivityPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883E6 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883E6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventActivityPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeEventActivityPointGauge(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883E8 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883E8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventActivityPointGauge_k__BackingField;
}


EventSaveData_o *__fastcall TerminalPramsManager__get_BeforeEventSubmarineSaveData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883EC & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883EC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_BeforeTimeEventDailyPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883DA & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883DA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BeforeTimeEventDailyPoint_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthAfterActionFocusSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438840C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438840C = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthRank(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388410 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388410 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthRank_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BlankEarthSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438840A & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438840A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthSpotId_k__BackingField;
}


BlankEarthTransform_o *__fastcall TerminalPramsManager__get_BlankEarthTransformData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438840E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438840E = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_BlankEarthTransformData_k__BackingField;
}


CommonUI_CampaignDirectBonusData_array *__fastcall TerminalPramsManager__get_CampaignDirectBonus(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883B5 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883B5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_CampaignDirectBonus_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_ClearEventQuestIds(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883E4 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883E4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_ClearEventQuestIds_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883A5 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883A5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleEventId_k__BackingField;
}


float __fastcall TerminalPramsManager__get_DataLostBattleResetFadeInTime(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883AD & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883AD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleResetFadeInTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_DataLostBattleWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883A7 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883A7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DataLostBattleWarId_k__BackingField;
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
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438835B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438835B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_DispState_k__BackingField;
}


int64_t __fastcall TerminalPramsManager__get_EndTime(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438839B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438839B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EndTime_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventActivityPointEffectState(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883EA & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883EA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventActivityPointEffectState_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventBoardGameSquareIndex(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883F2 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883F2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventBoardGameSquareIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventDailyPointEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883DC & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883DC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventDailyPointEventId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventDailyPointItem(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883D8 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883D8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventDailyPointItem_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventMuralId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388387 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388387 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventMuralId_k__BackingField;
}


EventRaidDefeatedEffectInfo_o *__fastcall TerminalPramsManager__get_EventRaidDefeatedEffectInfo(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883EE & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883EE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_EventUIEffectClearQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388416 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388416 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_EventUIEffectClearQuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoFolder(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438842B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438842B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoNoSe(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438842D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438842D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoNoSe_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoOpenMasterMission(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388447 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388447 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->mIsAutoOpenMasterMission;
}


bool __fastcall TerminalPramsManager__get_IsAutoResume(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388425 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388425 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoResume_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsAutoShortcut(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388427 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388427 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsAutoShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsBlankEarthShortcutMoving(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388412 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388412 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsBlankEarthShortcutMoving_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsCheckHomeExpirationDateEventMap(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438842F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438842F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->isCheckHomeExpirationDateEventMap;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleAutoReset(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883A3 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883A3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleAutoReset_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleNoticePause(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883AF & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883AF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleNoticePause_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDataLostBattleResetFadeIn(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883AB & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883AB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDataLostBattleResetFadeIn_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_AutoWebView(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438837D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438837D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispDone_AutoWebView_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispDone_UIStandFigure(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438837F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438837F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispDone_UIStandFigure_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispOnly(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438838D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438838D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispOnly_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDispUIStandFigure(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388381 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388381 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDispUIStandFigure_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsDoneShortcut(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388367 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388367 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsDoneShortcut_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsEventBoardGameDiceBtnActive(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883F4 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883F4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsForceFocusTerminalQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438836F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438836F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsForceFocusTerminalQuestId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsFromRecollectionBoard(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438836D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438836D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsFromRecollectionBoard_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsInvisibleConnectAndLoad(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438841B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438841B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->isInvisibleConnectAndLoad;
}


bool __fastcall TerminalPramsManager__get_IsMapReturnFolder(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388429 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388429 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsMapReturnFolder_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsOrdealCallWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388385 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388385 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsOrdealCallWarClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPhaseClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438838B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438838B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPhaseClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayEventBoardGameArrivalEffectAuto(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388391 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388391 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayEventBoardGameArrivalEffectAuto_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayEventBoardGameDiceBtnActiveEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883F6 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883F6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayScriptWithMap(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438838F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438838F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayScriptWithMap_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayTerminalEffectDisappear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388404 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388404 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_IsPlayTerminalEffectDisappearWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388406 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388406 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayTerminalEffectNt2AfterAction(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388408 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388408 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsPlayedEntryBanner(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883B1 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883B1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsPlayedEntryBanner_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsQuestClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388389 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388389 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsQuestClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsScriptDisp(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388393 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388393 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsScriptDisp_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsSkipNoticeLoginQuestAtOnce(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388441 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388441 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsStopMasterFaceOverwrite(const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0

  if ( (byte_43883A9 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883A9 = 1;
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
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388431 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388431 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarBoardClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438839D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438839D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsWarBoardClear_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_IsWarClear(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388383 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388383 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_IsWarClear_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastPlayedFreeQuestSpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388377 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388377 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastPlayedQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388375 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388375 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastPlayedQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_LastSelectQuestIndex(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388379 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388379 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_LastSelectQuestIndex_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearPhaseCount(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883A1 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883A1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MapModelClearPhaseCount_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MapModelClearQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438839F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438839F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MapModelClearQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_MessageDispType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388395 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388395 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_MessageDispType_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_NoticeLastModified(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388414 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388414 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_NoticeLastModified_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PhaseCnt(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388365 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388365 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PhaseCnt_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_PlayedTerminalEffects(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388402 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388402 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlayedTerminalEffects_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_PlayerGenderType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883B3 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883B3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_PlayerGenderType_k__BackingField;
}


QuestFocusStateManager_o *__fastcall TerminalPramsManager__get_QuestFocusStateManager(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  QuestFocusStateManager_o *v2; // x19
  TerminalPramsManager_c *v3; // x0
  struct QuestFocusStateManager_o **p_questFocusStateManager; // x0

  if ( (byte_438841A & 1) == 0 )
  {
    sub_B775C4(&QuestFocusStateManager_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438841A = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( !v1->static_fields->questFocusStateManager )
  {
    v2 = (QuestFocusStateManager_o *)sub_B77694(QuestFocusStateManager_TypeInfo);
    QuestFocusStateManager___ctor(v2, 0LL);
    v3 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v3 = TerminalPramsManager_TypeInfo;
    }
    p_questFocusStateManager = &v3->static_fields->questFocusStateManager;
    *p_questFocusStateManager = v2;
    sub_B77560(p_questFocusStateManager);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->questFocusStateManager;
}


int32_t __fastcall TerminalPramsManager__get_QuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388363 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388363 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestMessageScriptQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388433 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388433 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestMessageScriptQuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestMessageScriptQuestPhase(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388435 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388435 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestMessageScriptQuestPhase_k__BackingField;
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall TerminalPramsManager__get_QuestRandomGroupList(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388400 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388400 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestRandomGroupList_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_QuestReleaseFocusQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388371 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388371 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestReleaseFocusQuestId_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_QuestWindowMessage(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388397 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388397 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_QuestWindowMessage_k__BackingField;
}


System_String_o *__fastcall TerminalPramsManager__get_SceneMoveQuestClearedInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388418 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388418 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
}


BannerEntity_o *__fastcall TerminalPramsManager__get_SelectedBannerEntity(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388373 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388373 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedBannerEntity_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SelectedRecollectionWarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438836B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438836B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedRecollectionWarId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SelectedStoryQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388369 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388369 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SelectedStoryQuestId_k__BackingField;
}


SpecifiedSceneInfo_o *__fastcall TerminalPramsManager__get_SpecifiedChangeSceneInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883B9 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883B9 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SpotId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388361 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388361 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SpotId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_SummonType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438835F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438835F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_SummonType_k__BackingField;
}


BattleScriptRootComponent_TalkScriptInfo_o *__fastcall TerminalPramsManager__get_TalkScriptInfo(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388437 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388437 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TalkScriptInfo_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusEventId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883E0 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883E0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TimeStatusEventId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_TimeStatusLoopCount(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883E2 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883E2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_TimeStatusLoopCount_k__BackingField;
}


WarBoardDataEntity_o *__fastcall TerminalPramsManager__get_WarBoardData(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883F8 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883F8 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_WarBoardData_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_WarId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438835D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438835D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_WarId_k__BackingField;
}


float __fastcall TerminalPramsManager__get_ZoomSize(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0
  MapZoom_c *v2; // x8
  float ZOOM_DEFAULT; // w20

  if ( (byte_43883B7 & 1) == 0 )
  {
    sub_B775C4(&MapZoom_TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883B7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  if ( v1->static_fields->mZoomSize <= 0.0 )
  {
    v2 = MapZoom_TypeInfo;
    if ( (BYTE3(MapZoom_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !MapZoom_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapZoom_TypeInfo);
      v2 = MapZoom_TypeInfo;
      v1 = TerminalPramsManager_TypeInfo;
    }
    ZOOM_DEFAULT = v2->static_fields->ZOOM_DEFAULT;
    if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      v1 = TerminalPramsManager_TypeInfo;
    }
    v1->static_fields->mZoomSize = ZOOM_DEFAULT;
  }
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->mZoomSize;
}


EventDailyPoint_o *__fastcall TerminalPramsManager__get_eventDailyPoint(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883D6 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883D6 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventDailyPoint_k__BackingField;
}


EventPointWinReward_o *__fastcall TerminalPramsManager__get_eventPointWinReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883C1 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883C1 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventPointWinReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_eventPointWinType(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883BF & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883BF = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventPointWinType_k__BackingField;
}


EventRaceBoostInfo_o *__fastcall TerminalPramsManager__get_eventRaceBoost(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883C3 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883C3 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventRaceBoost_k__BackingField;
}


EventTowerReward_o *__fastcall TerminalPramsManager__get_eventTowerReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883CC & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883CC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_eventTowerReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_friendshipQuestDialogOpenId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438843B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438843B = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_friendshipQuestDialogOpenId_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isFortificationCheck(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883FC & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883FC = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isFortificationCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isIncomingCall(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883F0 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883F0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isIncomingCall_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isPlayRiverActionCheck(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883FE & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883FE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isPlayRiverActionCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isPlayingQuestPhaseRewardEffect(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388423 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388423 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isQuestRewardSetted(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388421 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388421 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isQuestRewardSetted_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isWarBoardPlay(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883FA & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883FA = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_isWarBoardPlay_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_limitCountUnSealQuestId(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438843D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438843D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_limitCountUnSealQuestId_k__BackingField;
}


LimitImageAnnounce_array *__fastcall TerminalPramsManager__get_limitImageAnnounces(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_4388439 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388439 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_limitImageAnnounces_k__BackingField;
}


UserSuperBossEntity_array *__fastcall TerminalPramsManager__get_oldPersonalBoss(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883BD & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883BD = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldPersonalBoss_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_oldQuestIdForHeaderEvent(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883C9 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883C9 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldQuestIdForHeaderEvent_k__BackingField;
}


UserSuperBossEntity_array *__fastcall TerminalPramsManager__get_oldSuperBoss(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883BB & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883BB = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_oldSuperBoss_k__BackingField;
}


CostumeReleaseAnnounce_array *__fastcall TerminalPramsManager__get_questClearCostumeGet(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883C7 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883C7 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_questClearCostumeGet_k__BackingField;
}


CostumeReleaseAnnounce_array *__fastcall TerminalPramsManager__get_questClearCostumeRelease(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883C5 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883C5 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_questClearCostumeRelease_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultBoostItemRewardInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883D0 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883D0 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultBoostItemRewardInfo_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultEventBoardGameTokenRewardInfo(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883D2 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883D2 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
}


QuestRewardInfo_array *__fastcall TerminalPramsManager__get_resultEventTowerRewardInfo(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883CE & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883CE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_resultEventTowerRewardInfo_k__BackingField;
}


TimeStatusRecord_o *__fastcall TerminalPramsManager__get_timeStatusRecord(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883D4 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883D4 = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_timeStatusRecord_k__BackingField;
}


UpdateProfileDialogInfoEntity_array *__fastcall TerminalPramsManager__get_updateProfileInfoEntity(
        const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438843F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438843F = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_updateProfileInfoEntity_k__BackingField;
}


WarClearReward_array *__fastcall TerminalPramsManager__get_warClearReward(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_43883DE & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883DE = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->_warClearReward_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__mfGetSceneStatus(const MethodInfo *method)
{
  TerminalPramsManager_c *v1; // x0

  if ( (byte_438844D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438844D = 1;
  }
  v1 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v1 = TerminalPramsManager_TypeInfo;
  }
  return v1->static_fields->meSceneStatus;
}


void __fastcall TerminalPramsManager__mfSetSceneStatus(int32_t eSceneStatus, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_438844C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438844C = 1;
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

  if ( (byte_438837C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438837C = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_438839A & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438839A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_BattleSetupKeep_k__BackingField = value;
  sub_B77560(&static_fields->_BattleSetupKeep_k__BackingField);
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883E7 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883E7 = 1;
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

  if ( (byte_43883E9 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883E9 = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883ED & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883ED = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_BeforeEventSubmarineSaveData_k__BackingField = value;
  sub_B77560(&static_fields->_BeforeEventSubmarineSaveData_k__BackingField);
}


void __fastcall TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883DB & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883DB = 1;
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

  if ( (byte_438840D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438840D = 1;
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

  if ( (byte_4388411 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388411 = 1;
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

  if ( (byte_438840B & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438840B = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_438840F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438840F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_BlankEarthTransformData_k__BackingField = value;
  sub_B77560(&static_fields->_BlankEarthTransformData_k__BackingField);
}


void __fastcall TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_43883B6 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883B6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_CampaignDirectBonus_k__BackingField = value;
  sub_B77560(&static_fields->_CampaignDirectBonus_k__BackingField);
}


void __fastcall TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883E5 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883E5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_ClearEventQuestIds_k__BackingField = value;
  sub_B77560(&static_fields->_ClearEventQuestIds_k__BackingField);
}


void __fastcall TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883A6 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883A6 = 1;
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883AE & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883AE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_DataLostBattleWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883A8 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883A8 = 1;
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

  if ( (byte_4388420 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388420 = 1;
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

  if ( (byte_438841F & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438841F = 1;
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

  if ( (byte_438841D & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438841D = 1;
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

  if ( (byte_438841E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438841E = 1;
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

  if ( (byte_438835C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438835C = 1;
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

  if ( (byte_438839C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438839C = 1;
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

  if ( (byte_43883EB & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883EB = 1;
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

  if ( (byte_43883F3 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883F3 = 1;
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

  if ( (byte_43883DD & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883DD = 1;
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

  if ( (byte_43883D9 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883D9 = 1;
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

  if ( (byte_4388388 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388388 = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883EF & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883EF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = value;
  sub_B77560(&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4388417 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388417 = 1;
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

  if ( (byte_438842C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438842C = 1;
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

  if ( (byte_438842E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438842E = 1;
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

  if ( (byte_4388448 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388448 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438746E )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438746E = 1;
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

  if ( (byte_4388426 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388426 = 1;
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

  if ( (byte_4388428 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388428 = 1;
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

  if ( (byte_4388413 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388413 = 1;
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

  if ( (byte_4388430 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388430 = 1;
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

  if ( (byte_43883A4 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883A4 = 1;
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

  if ( (byte_43883B0 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883B0 = 1;
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

  if ( (byte_43883AC & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883AC = 1;
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

  if ( (byte_438837E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438837E = 1;
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

  if ( (byte_4388380 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388380 = 1;
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

  if ( (byte_438838E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438838E = 1;
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

  if ( (byte_4388382 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388382 = 1;
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

  if ( (byte_4388368 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388368 = 1;
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

  if ( (byte_43883F5 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883F5 = 1;
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

  if ( (byte_4388370 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388370 = 1;
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

  if ( (byte_438836E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438836E = 1;
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

  if ( (byte_438841C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438841C = 1;
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

  if ( (byte_438842A & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438842A = 1;
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

  if ( (byte_4388386 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388386 = 1;
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

  if ( (byte_438838C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438838C = 1;
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

  if ( (byte_4388392 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388392 = 1;
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

  if ( (byte_43883F7 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883F7 = 1;
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

  if ( (byte_4388390 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388390 = 1;
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

  if ( (byte_4388405 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388405 = 1;
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

  if ( (byte_4388407 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388407 = 1;
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

  if ( (byte_4388409 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388409 = 1;
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

  if ( (byte_43883B2 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883B2 = 1;
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

  if ( (byte_438838A & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438838A = 1;
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

  if ( (byte_4388394 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388394 = 1;
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


void __fastcall TerminalPramsManager__set_IsSkipNoticeLoginQuestAtOnce(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4388442 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388442 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsSkipNoticeLoginQuestAtOnce_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_IsStopMasterFaceOverwrite(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883AA & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883AA = 1;
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

  if ( (byte_4388432 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388432 = 1;
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

  if ( (byte_438839E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438839E = 1;
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

  if ( (byte_4388384 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388384 = 1;
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

  if ( (byte_4388378 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388378 = 1;
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

  if ( (byte_4388376 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388376 = 1;
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

  if ( (byte_438837A & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438837A = 1;
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

  if ( (byte_43883A2 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883A2 = 1;
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

  if ( (byte_43883A0 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883A0 = 1;
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

  if ( (byte_4388396 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388396 = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4388415 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388415 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_NoticeLastModified_k__BackingField = value;
  sub_B77560(&static_fields->_NoticeLastModified_k__BackingField);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4388366 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388366 = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4388403 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388403 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_PlayedTerminalEffects_k__BackingField = value;
  sub_B77560(&static_fields->_PlayedTerminalEffects_k__BackingField);
}


void __fastcall TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883B4 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883B4 = 1;
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

  if ( (byte_4388364 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388364 = 1;
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

  if ( (byte_4388434 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388434 = 1;
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

  if ( (byte_4388436 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388436 = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4388401 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388401 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_QuestRandomGroupList_k__BackingField = value;
  sub_B77560(&static_fields->_QuestRandomGroupList_k__BackingField);
}


void __fastcall TerminalPramsManager__set_QuestReleaseFocusQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4388372 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388372 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_QuestReleaseFocusQuestId_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_QuestWindowMessage(System_String_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4388398 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388398 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = value;
  sub_B77560(&static_fields->_QuestWindowMessage_k__BackingField);
}


void __fastcall TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4388419 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388419 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_SceneMoveQuestClearedInfo_k__BackingField = value;
  sub_B77560(&static_fields->_SceneMoveQuestClearedInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_SelectedBannerEntity(BannerEntity_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_4388374 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388374 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = value;
  sub_B77560(&static_fields->_SelectedBannerEntity_k__BackingField);
}


void __fastcall TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_438836C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438836C = 1;
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

  if ( (byte_438836A & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438836A = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_43883BA & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883BA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_SpecifiedChangeSceneInfo_k__BackingField = value;
  sub_B77560(&static_fields->_SpecifiedChangeSceneInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4388362 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388362 = 1;
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

  if ( (byte_4388360 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388360 = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4388438 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388438 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_TalkScriptInfo_k__BackingField = value;
  sub_B77560(&static_fields->_TalkScriptInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883E1 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883E1 = 1;
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

  if ( (byte_43883E3 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883E3 = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883F9 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883F9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_WarBoardData_k__BackingField = value;
  sub_B77560(&static_fields->_WarBoardData_k__BackingField);
}


void __fastcall TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_438835E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438835E = 1;
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
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883B8 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883B8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->mZoomSize = value;
}


void __fastcall TerminalPramsManager__set_eventDailyPoint(EventDailyPoint_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883D7 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883D7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_eventDailyPoint_k__BackingField = value;
  sub_B77560(&static_fields->_eventDailyPoint_k__BackingField);
}


void __fastcall TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883C2 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883C2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_eventPointWinReward_k__BackingField = value;
  sub_B77560(&static_fields->_eventPointWinReward_k__BackingField);
}


void __fastcall TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883C0 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883C0 = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883C4 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883C4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_eventRaceBoost_k__BackingField = value;
  sub_B77560(&static_fields->_eventRaceBoost_k__BackingField);
}


void __fastcall TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883CD & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883CD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_eventTowerReward_k__BackingField = value;
  sub_B77560(&static_fields->_eventTowerReward_k__BackingField);
}


void __fastcall TerminalPramsManager__set_friendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_438843C & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438843C = 1;
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

  if ( (byte_43883FD & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883FD = 1;
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

  if ( (byte_43883F1 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883F1 = 1;
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


void __fastcall TerminalPramsManager__set_isPlayRiverActionCheck(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883FF & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883FF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_isPlayRiverActionCheck_k__BackingField = value;
}


void __fastcall TerminalPramsManager__set_isPlayingQuestPhaseRewardEffect(bool value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4388424 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388424 = 1;
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

  if ( (byte_4388422 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388422 = 1;
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

  if ( (byte_43883FB & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883FB = 1;
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

  if ( (byte_438843E & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438843E = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_438843A & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438843A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_limitImageAnnounces_k__BackingField = value;
  sub_B77560(&static_fields->_limitImageAnnounces_k__BackingField);
}


void __fastcall TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_43883BE & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883BE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_oldPersonalBoss_k__BackingField = value;
  sub_B77560(&static_fields->_oldPersonalBoss_k__BackingField);
}


void __fastcall TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_43883CA & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883CA = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_43883BC & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883BC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_oldSuperBoss_k__BackingField = value;
  sub_B77560(&static_fields->_oldSuperBoss_k__BackingField);
}


void __fastcall TerminalPramsManager__set_questClearCostumeGet(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883C8 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883C8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_questClearCostumeGet_k__BackingField = value;
  sub_B77560(&static_fields->_questClearCostumeGet_k__BackingField);
}


void __fastcall TerminalPramsManager__set_questClearCostumeRelease(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883C6 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883C6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_questClearCostumeRelease_k__BackingField = value;
  sub_B77560(&static_fields->_questClearCostumeRelease_k__BackingField);
}


void __fastcall TerminalPramsManager__set_resultBoostItemRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883D1 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883D1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_resultBoostItemRewardInfo_k__BackingField = value;
  sub_B77560(&static_fields->_resultBoostItemRewardInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_resultEventBoardGameTokenRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883D3 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883D3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField = value;
  sub_B77560(&static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_resultEventTowerRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883CF & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883CF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_resultEventTowerRewardInfo_k__BackingField = value;
  sub_B77560(&static_fields->_resultEventTowerRewardInfo_k__BackingField);
}


void __fastcall TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883D5 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883D5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_timeStatusRecord_k__BackingField = value;
  sub_B77560(&static_fields->_timeStatusRecord_k__BackingField);
}


void __fastcall TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4388440 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388440 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_updateProfileInfoEntity_k__BackingField = value;
  sub_B77560(&static_fields->_updateProfileInfoEntity_k__BackingField);
}


void __fastcall TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_43883DF & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43883DF = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_warClearReward_k__BackingField = value;
  sub_B77560(&static_fields->_warClearReward_k__BackingField);
}


void __fastcall TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  struct TerminalPramsManager_ClearData_StaticFields *static_fields; // x0

  if ( (byte_4388703 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_ClearData_TypeInfo);
    sub_B775C4(&StringLiteral_13596/*"TERMINAL_CLEAR_REWARD_DISP"*/);
    byte_4388703 = 1;
  }
  static_fields = TerminalPramsManager_ClearData_TypeInfo->static_fields;
  static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13596/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_B77560(static_fields);
}


void __fastcall TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w8
  struct LimitImageAnnounce_array **p_limitImageAnnounces; // x19

  if ( (byte_4388701 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4388701 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_B77560(&this->fields);
  this->fields.questRewardInfos = 0LL;
  sub_B77560(&this->fields.questRewardInfos);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_B77560(&this->fields.questPhaseRewardInfos);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_B77560(&this->fields.questResultAfterEventRewardInfos);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_B77560(&this->fields.resultEventPanelRewardInfos);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1LL;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0LL;
  sub_B77560(&this->fields.mOldSuperBoss);
  this->fields.oldPersonalBoss = 0LL;
  sub_B77560(&this->fields.oldPersonalBoss);
  this->fields.evPointWinReward = 0LL;
  sub_B77560(&this->fields.evPointWinReward);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_B77560(&this->fields.evRaceBoost);
  this->fields.questClearCostume = 0LL;
  sub_B77560(&this->fields.questClearCostume);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_B77560(&this->fields.questClearCostumeGetInfo);
  this->fields.eventTowerReward = 0LL;
  sub_B77560(&this->fields.eventTowerReward);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_B77560(&this->fields.resultEventTowerRewardInfo);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_B77560(&this->fields.warClearReward);
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  EVENT_POINT_EFFECT_STATE_NONE = v3->static_fields->EVENT_POINT_EFFECT_STATE_NONE;
  this->fields.limitImageAnnounces = 0LL;
  p_limitImageAnnounces = &this->fields.limitImageAnnounces;
  *((_DWORD *)p_limitImageAnnounces - 8) = EVENT_POINT_EFFECT_STATE_NONE;
  sub_B77560(p_limitImageAnnounces);
  *((_BYTE *)p_limitImageAnnounces + 8) = 0;
  *((_DWORD *)p_limitImageAnnounces + 3) = 0;
}


void __fastcall TerminalPramsManager_ClearData___ctor_20182664(
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
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v37; // x0
  const MethodInfo *v38; // x2
  struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *v39; // x27
  __int64 v40; // x0
  __int64 v41; // x1
  struct UserSuperBossEntity_array *v42; // x26
  struct UserSuperBossEntity_array *v43; // x25
  struct CostumeReleaseAnnounce_array *v44; // x20
  struct CostumeReleaseAnnounce_array *v45; // x21
  struct QuestRewardInfo_array *v46; // x22
  TerminalPramsManager_c *v47; // x0
  TerminalPramsManager_c *v48; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  TerminalPramsManager_c *v50; // x0
  struct WarClearReward_array *v51; // x21
  TerminalPramsManager_c *v52; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  struct BattleDropItem_array *v54; // x22
  struct BattleDropItem_array *v55; // x23
  struct LimitImageAnnounce_array *v56; // x21
  TerminalPramsManager_c *v57; // x0

  if ( (byte_4388702 & 1) == 0 )
  {
    sub_B775C4(&BattleDropItem___TypeInfo);
    sub_B775C4(&CostumeReleaseAnnounce___TypeInfo);
    sub_B775C4(&LimitImageAnnounce___TypeInfo);
    sub_B775C4(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
    sub_B775C4(&QuestRewardInfo___TypeInfo);
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    sub_B775C4(&UserSuperBossEntity___TypeInfo);
    sub_B775C4(&WarClearReward___TypeInfo);
    byte_4388702 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v37 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_B77694(TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo);
  v39 = v37;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_20184240(v37, qcrHeroineInfo, v38);
    if ( this )
      goto LABEL_5;
LABEL_38:
    sub_B7769C(v40, v41);
  }
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  v39->fields.oldUsrSvtData = 0LL;
  sub_B77560(&v39->fields);
  if ( !this )
    goto LABEL_38;
LABEL_5:
  this->fields.qClearHeroineInfo = v39;
  sub_B77560(&this->fields);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_B775DC(QuestRewardInfo___TypeInfo, 0LL);
  v42 = oldSuperBoss;
  this->fields.questRewardInfos = qri;
  sub_B77560(&this->fields.questRewardInfos);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_B775DC(QuestRewardInfo___TypeInfo, 0LL);
  v43 = oldPersonalBoss;
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_B77560(&this->fields.questPhaseRewardInfos);
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.questClear = qClear;
  this->fields.phaseClear = pclear;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v42 = (struct UserSuperBossEntity_array *)sub_B775DC(UserSuperBossEntity___TypeInfo, 0LL);
  v44 = questClearCostumeRelease;
  this->fields.mOldSuperBoss = v42;
  sub_B77560(&this->fields.mOldSuperBoss);
  if ( !oldPersonalBoss )
    v43 = (struct UserSuperBossEntity_array *)sub_B775DC(UserSuperBossEntity___TypeInfo, 0LL);
  v45 = questClearCostumeGet;
  this->fields.oldPersonalBoss = v43;
  sub_B77560(&this->fields.oldPersonalBoss);
  this->fields.evPointWinReward = evpWinReward;
  sub_B77560(&this->fields.evPointWinReward);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_B77560(&this->fields.evRaceBoost);
  if ( !questClearCostumeRelease )
    v44 = (struct CostumeReleaseAnnounce_array *)sub_B775DC(CostumeReleaseAnnounce___TypeInfo, 0LL);
  v46 = resultEvTowerRewardInfo;
  this->fields.questClearCostume = v44;
  sub_B77560(&this->fields.questClearCostume);
  if ( !questClearCostumeGet )
    v45 = (struct CostumeReleaseAnnounce_array *)sub_B775DC(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v45;
  sub_B77560(&this->fields.questClearCostumeGetInfo);
  this->fields.eventTowerReward = evTowerReward;
  sub_B77560(&this->fields.eventTowerReward);
  if ( !resultEvTowerRewardInfo )
    v46 = (struct QuestRewardInfo_array *)sub_B775DC(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v46;
  sub_B77560(&this->fields.resultEventTowerRewardInfo);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387487 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387487 = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v47 = TerminalPramsManager_TypeInfo;
  }
  if ( v47->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v47);
    if ( !byte_4387487 )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_4387487 = 1;
    }
    v48 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v48 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v48->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_B775DC(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_B77560(&this->fields.resultBoostItemRewardInfo);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438747D )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438747D = 1;
  }
  v50 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v50 = TerminalPramsManager_TypeInfo;
  }
  v51 = warClearRewardIn;
  if ( v50->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50);
    if ( !byte_438747D )
    {
      sub_B775C4(&TerminalPramsManager_TypeInfo);
      byte_438747D = 1;
    }
    v52 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v52 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v52->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_B775DC(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  v54 = questResultAfterEventRewardInfos;
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_B77560(&this->fields.resultEventBoardGameTokenRewardInfo);
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v51 = (struct WarClearReward_array *)sub_B775DC(WarClearReward___TypeInfo, 0LL);
  v55 = resultEventPanelRewardInfos;
  this->fields.warClearReward = v51;
  sub_B77560(&this->fields.warClearReward);
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  this->fields.isWarBoardClear = isWarBoardClear;
  if ( !questResultAfterEventRewardInfos )
    v54 = (struct BattleDropItem_array *)sub_B775DC(BattleDropItem___TypeInfo, 0LL);
  v56 = limitImageAnnounces;
  this->fields.questResultAfterEventRewardInfos = v54;
  sub_B77560(&this->fields.questResultAfterEventRewardInfos);
  if ( !resultEventPanelRewardInfos )
    v55 = (struct BattleDropItem_array *)sub_B775DC(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v55;
  sub_B77560(&this->fields.resultEventPanelRewardInfos);
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v56 = (struct LimitImageAnnounce_array *)sub_B775DC(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v56;
  sub_B77560(&this->fields.limitImageAnnounces);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_438747F )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_438747F = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v57->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_4387484 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
    byte_4387484 = 1;
  }
  if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v57);
    v57 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v57->static_fields->_EventMuralId_k__BackingField;
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_20184592(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int128 v7; // q1
  __int128 v8; // q0
  __int64 v9; // x21
  __int64 v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4388704 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4388704 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_B7769C(v5, v6);
  v7 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v12 = v13;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v12, 0LL);
  v8 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v11, 0LL);
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v14, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
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
  __int64 v3; // x20
  int64_t id; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v5; // x0
  __int64 v6; // x1
  __int128 v7; // q1
  __int128 v8; // q1
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  if ( (byte_4388705 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&UserServantEntity_TypeInfo);
    byte_4388705 = 1;
  }
  v3 = sub_B77694(UserServantEntity_TypeInfo);
  UserServantEntity___ctor((UserServantEntity_o *)v3, 0LL);
  id = this->fields.id;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v11, id, 0LL);
  v12 = v11;
  if ( !v3 )
    sub_B7769C(v5, v6);
  v7 = *(_OWORD *)&v12.fields.fakeValue;
  *(_OWORD *)(v3 + 16) = *(_OWORD *)&v12.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 32) = v7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v11, this->fields.userId, 0LL);
  v8 = *(_OWORD *)&v11.fields.fakeValue;
  *(_OWORD *)(v3 + 48) = *(_OWORD *)&v11.fields.currentCryptoKey;
  *(_OWORD *)(v3 + 64) = v8;
  svtId = this->fields.svtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 80) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    svtId,
                                                                    0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 96) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    this->fields.limitCount,
                                                                    0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 112) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.imageLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.dispLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 144) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.commandCardLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v3 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.iconLimitCount,
                                                                     0LL);
  result = (UserServantEntity_o *)v3;
  *(_DWORD *)(v3 + 256) = this->fields.lv;
  *(_DWORD *)(v3 + 260) = this->fields.exp;
  *(_DWORD *)(v3 + 264) = this->fields.atk;
  *(_DWORD *)(v3 + 268) = this->fields.hp;
  *(_DWORD *)(v3 + 272) = this->fields.adjustAtk;
  *(_DWORD *)(v3 + 276) = this->fields.adjustHp;
  *(_DWORD *)(v3 + 280) = this->fields.skillLv1;
  *(_DWORD *)(v3 + 284) = this->fields.skillLv2;
  *(_DWORD *)(v3 + 288) = this->fields.skillLv3;
  *(_DWORD *)(v3 + 292) = this->fields.treasureDeviceLv1;
  *(_DWORD *)(v3 + 296) = this->fields.exceedCount;
  *(_DWORD *)(v3 + 300) = this->fields.status;
  *(_QWORD *)(v3 + 304) = this->fields.createdAt;
  return result;
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.oldUsrSvtData = 0LL;
  sub_B77560(&this->fields);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_20184240(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        QuestClearHeroineInfo_o *qClearHeroineInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  UserServantEntity_o *oldUsrSvtData; // x21
  TerminalPramsManager_OldHeroineLawData_o *v8; // x22
  const MethodInfo *v9; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_Fields *p_fields; // x20

  if ( (byte_4388706 & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_OldHeroineLawData_TypeInfo);
    byte_4388706 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_B7769C(v5, v6);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v8 = (TerminalPramsManager_OldHeroineLawData_o *)sub_B77694(TerminalPramsManager_OldHeroineLawData_TypeInfo);
  TerminalPramsManager_OldHeroineLawData___ctor_20184592(v8, oldUsrSvtData, v9);
  this->fields.oldUsrSvtData = v8;
  p_fields = &this->fields;
  sub_B77560(p_fields);
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
  QuestClearHeroineInfo_o *v3; // x20
  const MethodInfo *v4; // x1
  TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x0
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_4388707 & 1) == 0 )
  {
    sub_B775C4(&QuestClearHeroineInfo_TypeInfo);
    byte_4388707 = 1;
  }
  v3 = (QuestClearHeroineInfo_o *)sub_B77694(QuestClearHeroineInfo_TypeInfo);
  QuestClearHeroineInfo___ctor(v3, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v4),
        !v3) )
  {
    sub_B7769C(oldUsrSvtData, v4);
  }
  v3->fields.oldUsrSvtData = (struct UserServantEntity_o *)oldUsrSvtData;
  sub_B77560(&v3->fields);
  result = v3;
  v3->fields.isChangeLimitcnt = this->fields.isChangeLimitcnt;
  v3->fields.isChangeTreasureDvc = this->fields.isChangeTreasureDvc;
  v3->fields.treasureDvcId = this->fields.treasureDvcId;
  v3->fields.treasureDvcLv = this->fields.treasureDvcLv;
  v3->fields.oldFriendShipRank = this->fields.oldFriendShipRank;
  v3->fields.isFriendShipExceed = this->fields.isFriendShipExceed;
  v3->fields.isExceed = this->fields.isExceed;
  return result;
}


void __fastcall TerminalPramsManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0

  if ( (byte_43886FC & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager___c_TypeInfo);
    byte_43886FC = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(TerminalPramsManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalPramsManager___c_o *)v1;
  sub_B77560(static_fields);
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
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_43886FD & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43886FD = 1;
  }
  if ( !n )
    sub_B7769C(this, n);
  questId = n->fields.questId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4387478 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_4387478 = 1;
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


bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__630_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_43886FE & 1) == 0 )
  {
    sub_B775C4(&TerminalPramsManager_TypeInfo);
    byte_43886FE = 1;
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
    sub_B7769C(this, 0LL);
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
  TerminalPramsManager___c__DisplayClass614_0_Fields *p_fields; // x19
  System_String_o *effectIdsStr; // t1

  if ( (byte_43886FF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_26/*"\n"*/);
    byte_43886FF = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = &this->fields;
  p_fields->effectIdsStr = System_String__Concat_44904220(
                             effectIdsStr,
                             effectId,
                             (System_String_o *)StringLiteral_26/*"\n"*/,
                             0LL);
  sub_B77560(p_fields);
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
    sub_B7769C(0LL, v);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass630_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass630_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  int64_t UserId; // x0
  __int64 v7; // x1
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4388700 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_4388700 = 1;
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
    sub_B7769C(UserId, v7);
  }
  return 1;
}