void __fastcall TerminalPramsManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  void *v7; // x1
  TerminalPramsManager_c *v8; // x8
  __int64 v9; // x0
  struct TerminalPramsManager_StaticFields *v10; // x8
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  struct System_Collections_Generic_List_string__o **p_eventScriptMessages; // x0
  TerminalPramsManager_c *v15; // x8

  if ( (byte_4211AA7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v2);
    sub_B0D8A4(&float___TypeInfo, v3);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4211AA7 = 1;
  }
  static_fields = TerminalPramsManager_TypeInfo->static_fields;
  v7 = StringLiteral_1/*""*/;
  static_fields->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&static_fields->mTerminalWarStartedIds, v7);
  v8 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = -1;
  v8->static_fields->clearBattleRaidId = -1;
  v8->static_fields->TipsArchiveEventUiId = 0;
  v8->static_fields->TipsArchiveCurrrentTab = 0;
  v9 = sub_B0D8BC(float___TypeInfo, 3LL);
  v10 = TerminalPramsManager_TypeInfo->static_fields;
  v10->TipsArchiveScrollValueList = (struct System_Single_array *)v9;
  sub_B0D840(&v10->TipsArchiveScrollValueList, v9);
  TerminalPramsManager_TypeInfo->static_fields->joinGroupId = -1;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v11,
                                                                                                  v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  p_eventScriptMessages = &TerminalPramsManager_TypeInfo->static_fields->eventScriptMessages;
  *p_eventScriptMessages = (struct System_Collections_Generic_List_string__o *)v13;
  sub_B0D840(p_eventScriptMessages, v13);
  v15 = TerminalPramsManager_TypeInfo;
  *(_QWORD *)&TerminalPramsManager_TypeInfo->static_fields->EVENT_POINT_EFFECT_STATE_SUB = 0xFFFFFFFFLL;
  v15->static_fields->EVENT_POINT_EFFECT_STATE_ADD = 1;
  v15->static_fields->isInvisibleConnectAndLoad = 0;
  v15->static_fields->ConnectMarkEventId = 0;
  v15->static_fields->ConnectMarkAnimationId = 0;
  v15->static_fields->meSceneStatus = 0;
  v15->static_fields->isCheckHomeExpirationDateEventMap = 1;
  v15->static_fields->IsEventMapLoading = 0;
  v15->static_fields->IsjumbleRaidHomeTopRequest = 0;
}


void __fastcall TerminalPramsManager__AutoOff(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4211A5B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A5B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210848 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210848 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 0;
  if ( !byte_421084F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_421084F = 1;
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

  if ( (byte_4211A86 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11580/*"SAVEKEY_BlankEarthRank"*/, v2);
    byte_4211A86 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211ADC )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211ADC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11580/*"SAVEKEY_BlankEarthRank"*/,
    v3->static_fields->_BlankEarthRank_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__BlankEarthSpotId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A85 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, v2);
    byte_4211A85 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210842 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210842 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/,
    v3->static_fields->_BlankEarthSpotId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__CampaignDirectBonus_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *p_obj; // x19
  System_String_o *v7; // x0

  if ( (byte_4211A84 & 1) == 0 )
  {
    sub_B0D8A4(&CommonUI_CampaignDirectBonusData___TypeInfo, v1);
    sub_B0D8A4(&JsonManager_TypeInfo, v2);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, v4);
    byte_4211A84 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42117D2 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42117D2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  p_obj = &v5->static_fields->_CampaignDirectBonus_k__BackingField->obj;
  if ( !p_obj )
    p_obj = (Il2CppObject *)sub_B0D8BC(CommonUI_CampaignDirectBonusData___TypeInfo, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v7 = JsonManager__toJson(p_obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, v7, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall TerminalPramsManager__CanSendTrackEvent(int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x19
  WarEntity_o *v12; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4211A98 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4211A98 = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotMaster___);
  if ( !entity )
    goto LABEL_17;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
  if ( !v9 )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v9,
          &v12,
          (int32_t)Instance,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v12 )
LABEL_17:
    sub_B0D97C(Instance);
  return !System_Linq_Enumerable__Contains_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->NotSendTrackEventAtWarIds,
            *(&v12->fields.id + 1),
            (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall TerminalPramsManager__CheckClearSelectedStoryQuestId(int32_t questId, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4211A87 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A87 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD5 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211AD5 = 1;
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
    if ( !byte_4211AD5 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
      byte_4211AD5 = 1;
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
      if ( !byte_4210845 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
        byte_4210845 = 1;
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

  if ( (byte_4211A71 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/, v1);
    sub_B0D8A4(&StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/, v2);
    byte_4211A71 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/, 0LL)
      && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckEventSubmarinePointSaveData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4211A73 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13658/*"TerminalBeforeEventSubmarinePointData"*/, v1);
    byte_4211A73 = 1;
  }
  return UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13658/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
}


bool __fastcall TerminalPramsManager__CheckIsOrdealCallWarClear(WarEntity_o *warEntity, const MethodInfo *method)
{
  int32_t parentWarId; // w19
  BalanceConfig_c *v4; // x0

  if ( (byte_4211AA5 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    byte_4211AA5 = 1;
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
  TerminalPramsManager___c__DisplayClass602_0_o *v15; // x19
  const MethodInfo *v16; // x1
  TerminalPramsManager_c *v17; // x0
  ScrTerminalListTop_c *v18; // x8
  int32_t NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID; // w20
  const MethodInfo *v20; // x1
  ScrTerminalListTop_c *v21; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w20
  ScrTerminalListTop_c *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x20
  TerminalPramsManager_c *v26; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *v30; // x21
  void *v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v34; // x22
  __int64 v35; // x1
  struct System_String_o *effectIdsStr; // x19
  TerminalPramsManager_c *v37; // x0
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  const MethodInfo *v39; // x0
  __int64 v40; // x0
  int32_t v41; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4211A8B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_string___ctor__, v1);
    sub_B0D8A4(&System_Action_string__TypeInfo, v3);
    sub_B0D8A4(&char___TypeInfo, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_string___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ForEach__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Remove__, v7);
    sub_B0D8A4(&ScrTerminalListTop_TypeInfo, v8);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    sub_B0D8A4(&Method_TerminalPramsManager___c__DisplayClass602_0__CheckResumeEffectNT2_b__0__, v10);
    sub_B0D8A4(&TerminalPramsManager___c__DisplayClass602_0_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v12);
    sub_B0D8A4(&StringLiteral_68/*"\r\n"*/, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4211A8B = 1;
  }
  v41 = 0;
  v15 = (TerminalPramsManager___c__DisplayClass602_0_o *)sub_B0D974(
                                                           TerminalPramsManager___c__DisplayClass602_0_TypeInfo,
                                                           v1,
                                                           v2);
  TerminalPramsManager___c__DisplayClass602_0___ctor(v15, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD3 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v16);
    byte_4211AD3 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  if ( v17->static_fields->_PlayedTerminalEffects_k__BackingField )
  {
    v18 = ScrTerminalListTop_TypeInfo;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v18 = ScrTerminalListTop_TypeInfo;
      v17 = TerminalPramsManager_TypeInfo;
    }
    NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID = v18->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v17);
    if ( TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID, v16) )
    {
      v21 = ScrTerminalListTop_TypeInfo;
      if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
        v21 = ScrTerminalListTop_TypeInfo;
      }
      NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID = v21->static_fields->NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !TerminalPramsManager__IsTerminalEffectPlayed(NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID, v20) )
      {
        v23 = ScrTerminalListTop_TypeInfo;
        if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
          v23 = ScrTerminalListTop_TypeInfo;
        }
        v41 = v23->static_fields->NT2_EFFECT_AREA_BOARD_MIDDLE_EFFECT_ID;
        v25 = System_Int32__ToString((int32_t)&v41, 0LL);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4211AD3 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v24);
          byte_4211AD3 = 1;
        }
        v26 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v26 = TerminalPramsManager_TypeInfo;
        }
        PlayedTerminalEffects_k__BackingField = v26->static_fields->_PlayedTerminalEffects_k__BackingField;
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_50;
        v28 = System_String__Replace_43857140(
                PlayedTerminalEffects_k__BackingField,
                (System_String_o *)StringLiteral_68/*"\r\n"*/,
                (System_String_o *)StringLiteral_26/*"\n"*/,
                0LL);
        PlayedTerminalEffects_k__BackingField = (System_String_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !PlayedTerminalEffects_k__BackingField )
          goto LABEL_50;
        if ( !LODWORD(PlayedTerminalEffects_k__BackingField[1].klass) )
        {
          v40 = sub_B0D9A8(PlayedTerminalEffects_k__BackingField);
          sub_B0D948(v40, 0LL);
        }
        LOWORD(PlayedTerminalEffects_k__BackingField[1].monitor) = 10;
        if ( !v28
          || (v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                           v28,
                                                                           (System_Char_array *)PlayedTerminalEffects_k__BackingField,
                                                                           0LL),
              (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                            v29,
                                                                            (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_string___)) == 0LL)
          || (v30 = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)PlayedTerminalEffects_k__BackingField,
              PlayedTerminalEffects_k__BackingField = (System_String_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)PlayedTerminalEffects_k__BackingField,
                                                                           (WarBoardManager_TaskList_o *)v25,
                                                                           (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_string__Remove__),
              !v15) )
        {
LABEL_50:
          sub_B0D97C(PlayedTerminalEffects_k__BackingField);
        }
        v31 = StringLiteral_1/*""*/;
        v15->fields.effectIdsStr = (struct System_String_o *)StringLiteral_1/*""*/;
        sub_B0D840(&v15->fields, v31);
        v34 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_string__TypeInfo,
                                                                                     v32,
                                                                                     v33);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v34,
          (Il2CppObject *)v15,
          Method_TerminalPramsManager___c__DisplayClass602_0__CheckResumeEffectNT2_b__0__,
          (const MethodInfo_246EA3C *)Method_System_Action_string___ctor__);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          v30,
          (System_Action_T__o *)v34,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_string__ForEach__);
        effectIdsStr = v15->fields.effectIdsStr;
        if ( !byte_4211ABB )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v35);
          byte_4211ABB = 1;
        }
        v37 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v37 = TerminalPramsManager_TypeInfo;
        }
        p_PlayedTerminalEffects_k__BackingField = &v37->static_fields->_PlayedTerminalEffects_k__BackingField;
        *p_PlayedTerminalEffects_k__BackingField = effectIdsStr;
        sub_B0D840(p_PlayedTerminalEffects_k__BackingField, effectIdsStr);
        TerminalPramsManager__Save_SaveData(v39);
      }
    }
  }
}


void __fastcall TerminalPramsManager__ClearEventQuestIds_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A80 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, v2);
    byte_4211A80 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD6 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AD6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/,
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

  if ( (byte_4211A7F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, v2);
    sub_B0D8A4(&StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, v3);
    byte_4211A7F = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, v4->static_fields->ConnectMarkEventId, 0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/,
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
  TerminalPramsManager_c *v6; // x0
  struct System_String_o **p_lastPlayBgmName; // x0
  void *v8; // x1

  if ( (byte_4211A9B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_4211A9B = 1;
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
  if ( !byte_4211AE9 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4211AE9 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_isQuestRewardSetted_k__BackingField = 0;
  p_lastPlayBgmName = &v6->static_fields->lastPlayBgmName;
  v8 = StringLiteral_1/*""*/;
  *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(p_lastPlayBgmName, v8);
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
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  TerminalPramsManager_c *v46; // x0
  const MethodInfo *v47; // x0
  const MethodInfo *v48; // x0
  const MethodInfo *v49; // x0

  if ( (byte_4211A64 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, v2);
    sub_B0D8A4(&StringLiteral_13660/*"TerminalEndTime"*/, v3);
    sub_B0D8A4(&StringLiteral_5213/*"Debug_IsOriginalGuestNPC"*/, v4);
    sub_B0D8A4(&StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/, v5);
    sub_B0D8A4(&StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/, v6);
    sub_B0D8A4(&StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, v7);
    sub_B0D8A4(&StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/, v8);
    sub_B0D8A4(&StringLiteral_13661/*"TerminalEventDailyPointEventId"*/, v9);
    sub_B0D8A4(&StringLiteral_5209/*"Debug_GuestNPCInfoList"*/, v10);
    sub_B0D8A4(&StringLiteral_13658/*"TerminalBeforeEventSubmarinePointData"*/, v11);
    sub_B0D8A4(&StringLiteral_13667/*"TerminalPhaseCnt"*/, v12);
    sub_B0D8A4(&StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, v13);
    sub_B0D8A4(&StringLiteral_13675/*"TerminalTimeStatusEventId"*/, v14);
    sub_B0D8A4(&StringLiteral_13659/*"TerminalDispState"*/, v15);
    sub_B0D8A4(&StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v16);
    sub_B0D8A4(&StringLiteral_13662/*"TerminalIsDoneShortcut"*/, v17);
    sub_B0D8A4(&StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v18);
    sub_B0D8A4(&StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, v19);
    sub_B0D8A4(&StringLiteral_11599/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v20);
    sub_B0D8A4(&StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, v21);
    sub_B0D8A4(&StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v22);
    sub_B0D8A4(&StringLiteral_5214/*"Debug_IsQuestReleaseAll"*/, v23);
    sub_B0D8A4(&StringLiteral_5211/*"Debug_IsDummyErrorSelect"*/, v24);
    sub_B0D8A4(&StringLiteral_13670/*"TerminalQuestId"*/, v25);
    sub_B0D8A4(&StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v26);
    sub_B0D8A4(&StringLiteral_11602/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v27);
    sub_B0D8A4(&StringLiteral_13674/*"TerminalTimeStatusEventDailyPoint"*/, v28);
    sub_B0D8A4(&StringLiteral_13679/*"TerminalWarId"*/, v29);
    sub_B0D8A4(&StringLiteral_13672/*"TerminalSpotId"*/, v30);
    sub_B0D8A4(&StringLiteral_13676/*"TerminalTimeStatusLoopCount"*/, v31);
    sub_B0D8A4(&StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/, v32);
    sub_B0D8A4(&StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, v33);
    sub_B0D8A4(&StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, v34);
    sub_B0D8A4(&StringLiteral_5212/*"Debug_IsOriginalBattle"*/, v35);
    sub_B0D8A4(&StringLiteral_13680/*"TerminalWarStartedIds"*/, v36);
    sub_B0D8A4(&StringLiteral_5208/*"Debug_BattleEnemyList"*/, v37);
    sub_B0D8A4(&StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, v38);
    sub_B0D8A4(&StringLiteral_13678/*"TerminalTransitionInfoVoiceAssetName"*/, v39);
    sub_B0D8A4(&StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, v40);
    sub_B0D8A4(&StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v41);
    sub_B0D8A4(&StringLiteral_13665/*"TerminalLastPlayedQuestId"*/, v42);
    sub_B0D8A4(&StringLiteral_5210/*"Debug_IsBuildInfoDisp"*/, v43);
    sub_B0D8A4(&StringLiteral_13677/*"TerminalTransitionInfoMissionId"*/, v44);
    sub_B0D8A4(&StringLiteral_11601/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v45);
    byte_4211A64 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13659/*"TerminalDispState"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13679/*"TerminalWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13672/*"TerminalSpotId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13670/*"TerminalQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13665/*"TerminalLastPlayedQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13667/*"TerminalPhaseCnt"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13660/*"TerminalEndTime"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13662/*"TerminalIsDoneShortcut"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13680/*"TerminalWarStartedIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5214/*"Debug_IsQuestReleaseAll"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5211/*"Debug_IsDummyErrorSelect"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5210/*"Debug_IsBuildInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5212/*"Debug_IsOriginalBattle"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5213/*"Debug_IsOriginalGuestNPC"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5208/*"Debug_BattleEnemyList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_5209/*"Debug_GuestNPCInfoList"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13675/*"TerminalTimeStatusEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13676/*"TerminalTimeStatusLoopCount"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13661/*"TerminalEventDailyPointEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13674/*"TerminalTimeStatusEventDailyPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13677/*"TerminalTransitionInfoMissionId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13678/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13658/*"TerminalBeforeEventSubmarinePointData"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11599/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11602/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11601/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, 0LL);
  v46 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__InitParameter((const MethodInfo *)v46);
  TerminalPramsManager__DeleteClearDatas(v47);
  TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(v48);
  TerminalPramsManager__DeleteQuestRandomGroupList(v49);
}


void __fastcall TerminalPramsManager__DeleteEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  struct EventRaidDefeatedEffectInfo_o **p_EventRaidDefeatedEffectInfo_k__BackingField; // x0

  if ( (byte_4211A9C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v2);
    byte_4211A9C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AEA )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AEA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_EventRaidDefeatedEffectInfo_k__BackingField = &v3->static_fields->_EventRaidDefeatedEffectInfo_k__BackingField;
  *p_EventRaidDefeatedEffectInfo_k__BackingField = 0LL;
  sub_B0D840(p_EventRaidDefeatedEffectInfo_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, 0LL);
}


void __fastcall TerminalPramsManager__DeleteQuestRandomGroupList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **p_QuestRandomGroupList_k__BackingField; // x0

  if ( (byte_4211AA1 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/, v2);
    byte_4211AA1 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AEC )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AEC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  p_QuestRandomGroupList_k__BackingField = &v3->static_fields->_QuestRandomGroupList_k__BackingField;
  *p_QuestRandomGroupList_k__BackingField = 0LL;
  sub_B0D840(p_QuestRandomGroupList_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/, 0LL);
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

  if ( (byte_4211A6D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_13661/*"TerminalEventDailyPointEventId"*/, v2);
    sub_B0D8A4(&StringLiteral_13674/*"TerminalTimeStatusEventDailyPoint"*/, v3);
    byte_4211A6D = 1;
  }
  BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210D36 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210D36 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13661/*"TerminalEventDailyPointEventId"*/,
    v4->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4210D35 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4210D35 = 1;
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
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13674/*"TerminalTimeStatusEventDailyPoint"*/, v7, 0LL);
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

  if ( (byte_4211A6C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_13675/*"TerminalTimeStatusEventId"*/, v2);
    sub_B0D8A4(&StringLiteral_13676/*"TerminalTimeStatusLoopCount"*/, v3);
    byte_4211A6C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211ACF )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211ACF = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13675/*"TerminalTimeStatusEventId"*/,
    v4->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4211AD0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4211AD0 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13676/*"TerminalTimeStatusLoopCount"*/,
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
  __int64 v6; // x0
  int32_t value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4211A90 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, method);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v3);
    byte_4211A90 = 1;
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
      sub_B0D97C(v6);
  }
  if ( System_Collections_Generic_Dictionary_int__int___TryGetValue(
         folderLastIdxs,
         warId,
         &value,
         (const MethodInfo_2E6B464 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
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

  if ( (byte_4211A60 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    byte_4211A60 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210867 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    byte_4210867 = 1;
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
    if ( !byte_4210873 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
      byte_4210873 = 1;
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

  if ( (byte_4211A66 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A66 = 1;
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
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  struct System_String_o *v4; // x20
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *v8; // x0

  if ( (byte_4211A8E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_1/*""*/, v2);
    byte_4211A8E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211ADD )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211ADD = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_IsDispOnly_k__BackingField = 0;
  v4 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4210856 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4210856 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  static_fields->_QuestWindowMessage_k__BackingField = v4;
  sub_B0D840(&static_fields->_QuestWindowMessage_k__BackingField, v4);
  if ( !byte_4210855 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_4210855 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_MessageDispType_k__BackingField = 0;
  if ( !byte_4211ADE )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4211ADE = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v8 = v7->static_fields;
  v8->_BattleSetupKeep_k__BackingField = 0LL;
  sub_B0D840(&v8->_BattleSetupKeep_k__BackingField, 0LL);
}


void __fastcall TerminalPramsManager__InitParameter(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *v8; // x0
  void *v9; // x1
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  struct TimeStatusRecord_o **p_timeStatusRecord_k__BackingField; // x0
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  struct EventSaveData_o **p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  void *v16; // x1
  struct System_String_o **p_lastPlayBgmName; // x0
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x0
  struct TerminalPramsManager_StaticFields *v20; // x0
  __int64 v21; // x1
  TerminalPramsManager_c *v22; // x0
  const MethodInfo *v23; // x0
  __int64 v24; // x1
  TerminalPramsManager_c *v25; // x0
  struct System_String_o *v26; // x20
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  __int64 v28; // x1
  TerminalPramsManager_c *v29; // x0
  struct System_String_o *v30; // x20
  struct System_String_o **p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  __int64 v32; // x1
  TerminalPramsManager_c *v33; // x0
  struct TerminalPramsManager_StaticFields *v34; // x0
  __int64 v35; // x1
  TerminalPramsManager_c *v36; // x0

  if ( (byte_4211A65 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_1/*""*/, v2);
    byte_4211A65 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210841 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210841 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_WarId_k__BackingField = 0;
  if ( !byte_4210874 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210874 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SpotId_k__BackingField = 0;
  if ( !byte_4210843 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4210843 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_QuestId_k__BackingField = 0;
  if ( !byte_4210895 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4210895 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayedQuestId_k__BackingField = 0;
  if ( !byte_4211AAF )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4211AAF = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastSelectQuestIndex_k__BackingField = 0;
  if ( !byte_4210896 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4210896 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = 0;
  if ( !byte_421088B )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_421088B = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_AfterActionFocusQuestId_k__BackingField = 0;
  if ( !byte_4210845 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4210845 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SelectedStoryQuestId_k__BackingField = 0;
  if ( !byte_4210846 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4210846 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SelectedRecollectionWarId_k__BackingField = 0;
  if ( !byte_4211AB0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4211AB0 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsFromRecollectionBoard_k__BackingField = 0;
  if ( !byte_4210887 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_4210887 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsForceFocusTerminalQuestId_k__BackingField = 0;
  if ( !byte_421088D )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v4 = TerminalPramsManager_TypeInfo;
    byte_421088D = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_SelectedBannerEntity_k__BackingField = 0LL;
  sub_B0D840(&static_fields->_SelectedBannerEntity_k__BackingField, 0LL);
  if ( !byte_4210844 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_4210844 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_PhaseCnt_k__BackingField = 0;
  if ( !byte_421088E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_421088E = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_EndTime_k__BackingField = 0LL;
  if ( !byte_421084A )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    v7 = TerminalPramsManager_TypeInfo;
    byte_421084A = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDoneShortcut_k__BackingField = 0;
  v8 = v7->static_fields;
  v9 = StringLiteral_1/*""*/;
  v8->mTerminalWarStartedIds = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&v8->mTerminalWarStartedIds, v9);
  if ( !byte_4211AB1 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    byte_4211AB1 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->mDebug_IsQuestReleaseAll = 0;
  if ( !byte_4211AB2 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4211AB2 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->mDebug_IsDummyErrorSelect = 0;
  if ( !byte_4211AB3 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4211AB3 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->mDebug_IsBuildInfoDisp = 0;
  if ( !byte_4210890 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210890 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_TimeStatusEventId_k__BackingField = 0;
  if ( !byte_4210891 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210891 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_TimeStatusLoopCount_k__BackingField = 0;
  if ( !byte_4211AB4 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4211AB4 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  p_timeStatusRecord_k__BackingField = &v11->static_fields->_timeStatusRecord_k__BackingField;
  *p_timeStatusRecord_k__BackingField = 0LL;
  sub_B0D840(p_timeStatusRecord_k__BackingField, 0LL);
  if ( !byte_4210D34 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
    byte_4210D34 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_EventDailyPointEventId_k__BackingField = 0;
  if ( !byte_4210D33 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4210D33 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = 0LL;
  if ( !byte_4211AB5 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4211AB5 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_BeforeEventActivityPoint_k__BackingField = 0;
  if ( !byte_4211AB6 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4211AB6 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_BeforeEventActivityPointGauge_k__BackingField = 0;
  if ( !byte_4211AB7 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4211AB7 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  p_BeforeEventSubmarineSaveData_k__BackingField = &v14->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
  *p_BeforeEventSubmarineSaveData_k__BackingField = 0LL;
  sub_B0D840(p_BeforeEventSubmarineSaveData_k__BackingField, 0LL);
  v16 = StringLiteral_1/*""*/;
  p_lastPlayBgmName = &TerminalPramsManager_TypeInfo->static_fields->lastPlayBgmName;
  *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(p_lastPlayBgmName, v16);
  v19 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->lastPlayQuestConsumeAp = 0;
  v19->static_fields->panelEventPoint = 0;
  if ( !byte_4210D2E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v18);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4210D2E = 1;
  }
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v20 = v19->static_fields;
  v20->_SpecifiedChangeSceneInfo_k__BackingField = 0LL;
  sub_B0D840(&v20->_SpecifiedChangeSceneInfo_k__BackingField, 0LL);
  if ( !byte_4211AB8 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v21);
    byte_4211AB8 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_EventBoardGameSquareIndex_k__BackingField = 0;
  if ( !byte_4211AB9 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v21);
    v22 = TerminalPramsManager_TypeInfo;
    byte_4211AB9 = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField = 0;
  if ( !byte_4211ABA )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v21);
    v22 = TerminalPramsManager_TypeInfo;
    byte_4211ABA = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = 0;
  if ( !byte_4211AAD )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v21);
    v22 = TerminalPramsManager_TypeInfo;
    byte_4211AAD = 1;
  }
  if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v22);
    v22 = TerminalPramsManager_TypeInfo;
  }
  v22->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
  TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v22);
  TerminalPramsManager__ResetResumeScriptWithMap(v23);
  if ( !byte_421087D )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v24);
    byte_421087D = 1;
  }
  v25 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v25 = TerminalPramsManager_TypeInfo;
  }
  v25->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 0;
  v26 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4211ABB )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v24);
    v25 = TerminalPramsManager_TypeInfo;
    byte_4211ABB = 1;
  }
  if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = TerminalPramsManager_TypeInfo;
  }
  p_PlayedTerminalEffects_k__BackingField = &v25->static_fields->_PlayedTerminalEffects_k__BackingField;
  *p_PlayedTerminalEffects_k__BackingField = v26;
  sub_B0D840(p_PlayedTerminalEffects_k__BackingField, v26);
  if ( !byte_4211ABC )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    byte_4211ABC = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = 0;
  if ( !byte_4211ABD )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211ABD = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = 0;
  if ( !byte_4211ABE )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211ABE = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 0;
  v29->static_fields->ConnectMarkEventId = 0;
  v29->static_fields->ConnectMarkAnimationId = 0;
  if ( !byte_4210A8B )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4210A8B = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_isPlayingQuestPhaseRewardEffect_k__BackingField = 0;
  if ( !byte_4211ABF )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211ABF = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_isFortificationCheck_k__BackingField = 0;
  if ( !byte_4210D2F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4210D2F = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_MapModelClearQuestId_k__BackingField = 0;
  if ( !byte_4210D30 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4210D30 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_MapModelClearPhaseCount_k__BackingField = 0;
  if ( !byte_4211AC0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC0 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4210881 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4210881 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_isIncomingCall_k__BackingField = 0;
  if ( !byte_4211AC1 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC1 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_DataLostBattleEventId_k__BackingField = 0;
  if ( !byte_4211AC2 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC2 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_DataLostBattleWarId_k__BackingField = 0;
  if ( !byte_4211AC3 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC3 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsStopMasterFaceOverwrite_k__BackingField = 0;
  if ( !byte_4211AC0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC0 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 0;
  if ( !byte_4211AC4 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC4 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_DataLostBattleResetFadeInTime_k__BackingField = 0.0;
  if ( !byte_4211AC5 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC5 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 0;
  if ( !byte_4211AC6 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC6 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4211AC7 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC7 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_PlayerGenderType_k__BackingField = 0;
  if ( !byte_4211AC8 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC8 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  v29->static_fields->_EventUIEffectClearQuestId_k__BackingField = -1;
  v30 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4211AC9 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    v29 = TerminalPramsManager_TypeInfo;
    byte_4211AC9 = 1;
  }
  if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = TerminalPramsManager_TypeInfo;
  }
  p_SceneMoveQuestClearedInfo_k__BackingField = &v29->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
  *p_SceneMoveQuestClearedInfo_k__BackingField = v30;
  sub_B0D840(p_SceneMoveQuestClearedInfo_k__BackingField, v30);
  if ( !byte_4210D37 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v32);
    byte_4210D37 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  v34 = v33->static_fields;
  v34->_CampaignDirectBonus_k__BackingField = 0LL;
  sub_B0D840(&v34->_CampaignDirectBonus_k__BackingField, 0LL);
  if ( !byte_4211ACA )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v35);
    byte_4211ACA = 1;
  }
  v36 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v36 = TerminalPramsManager_TypeInfo;
  }
  v36->static_fields->_isPlayRiverActionCheck_k__BackingField = 0;
}


void __fastcall TerminalPramsManager__InitTipsArchiveScrollValueList(const MethodInfo *method)
{
  __int64 v1; // x1
  unsigned __int64 i; // x19
  TerminalPramsManager_c *v3; // x0
  struct System_Single_array *TipsArchiveScrollValueList; // x8
  char *v5; // x8
  __int64 v6; // x0

  if ( (byte_4211AA6 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AA6 = 1;
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
      sub_B0D97C(v3);
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
      v6 = sub_B0D9A8(v3);
      sub_B0D948(v6, 0LL);
    }
    v5 = (char *)TipsArchiveScrollValueList + 4 * i;
    *((_DWORD *)v5 + 8) = 0;
  }
}


bool __fastcall TerminalPramsManager__IsAuto(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0
  TerminalPramsManager_c *v4; // x0

  if ( (byte_4211A58 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A58 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210867 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210867 = 1;
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
  if ( !byte_4211AA8 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AA8 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  EventDetailEntity_o *v14; // [xsp+0h] [xbp-30h] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4211A5A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, v2);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_4211A5A = 1;
  }
  v14 = 0LL;
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210867 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210867 = 1;
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
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421083F = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    byte_421083F = 1;
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
          (const MethodInfo_2669C30 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !entity)
    || !Instance )
  {
LABEL_40:
    sub_B0D97C(Instance);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          (WarEntity_o **)&v14,
          entity->fields.eventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)v14;
  if ( !v14 )
    goto LABEL_40;
  return EventDetailEntity__IsTimeProgressEvent(v14, 0LL);
}


void __fastcall TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A82 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, v2);
    byte_4211A82 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD7 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AD7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/,
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
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  int v9; // w19
  BalanceConfig_c *v10; // x0
  WarEntity_o *v12; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4211AA4 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v6);
    byte_4211AA4 = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
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
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !entity
    || (v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = (QuestMaster_o *)QuestEntity__getSpotId(entity, 0LL),
        !v8) )
  {
LABEL_23:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  Master_WarQuestSelectionMaster = (QuestMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                      v8,
                                                      &v12,
                                                      (int32_t)Master_WarQuestSelectionMaster,
                                                      (const MethodInfo_2669C30 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return 0;
  if ( !v12 )
    goto LABEL_23;
  v9 = *(&v12->fields.id + 1);
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  return v9 == v10->static_fields->OrdealCallWarId;
}


bool __fastcall TerminalPramsManager__IsMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  DataManager_o *Instance; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4211A96 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4211A96 = 1;
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
            (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
        if ( Instance )
        {
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        &entity,
                                        warId,
                                        (const MethodInfo_2669C30 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            return 0;
          if ( entity )
            return entity->fields.eventId == 0;
        }
      }
      sub_B0D97C(Instance);
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
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x19
  const MethodInfo *v9; // x1
  int32_t v10; // w19
  WarEntity_o *v13; // [xsp+0h] [xbp-20h] BYREF
  QuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4211A97 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_4211A97 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_17;
  if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, questId, 0LL) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotMaster___),
        !entity)
    || (v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL),
        !v8) )
  {
LABEL_17:
    sub_B0D97C(Instance);
  }
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                v8,
                                &v13,
                                (int32_t)Instance,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !v13 )
    goto LABEL_17;
  v10 = *(&v13->fields.id + 1);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStory(v10, v9);
}


bool __fastcall TerminalPramsManager__IsMustPlayMainStory(int32_t warId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4211A95 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    byte_4211A95 = 1;
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
         (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
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

  if ( (byte_4211A7B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v2);
    byte_4211A7B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421087F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421087F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A7A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v2);
    byte_4211A7A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421087E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421087E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v3->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__IsPlayTerminalEffectNt2AfterAction_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A7C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v2);
    byte_4211A7C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD4 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AD4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *v7; // x0
  __int64 v8; // x8
  char v9; // w0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4211AA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, *(_QWORD *)&day);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v5);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_4211AA0 = 1;
  }
  value = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AEB )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4211AEB = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_QWORD *)&v7[2].fields.entries->m_Items[16].fields.hashCode;
  if ( !v8
    || (v7 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **)(v8 + 16)) == 0LL )
  {
    sub_B0D97C(v7);
  }
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         v7,
         eventId,
         &value,
         (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v9 = (char)value;
    if ( value )
      v9 = System_Collections_Generic_List_int___Contains(
             (System_Collections_Generic_List_int__o *)value,
             day,
             (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  else
  {
    v9 = 0;
  }
  return v9 & 1;
}


bool __fastcall TerminalPramsManager__IsTerminalEffectNT2BoardOpen(const MethodInfo *method)
{
  const MethodInfo *v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ScrTerminalListTop_c *v5; // x0
  int32_t NT2_EFFECT_AREA_BOARD_COMPLETE_EFFECT_ID; // w19
  clsQuestCheck_o *v7; // x0
  clsQuestCheck_o *v8; // x19
  clsQuestCheck_o *v9; // x19
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  ScrTerminalListTop_c *v12; // x8
  int32_t QuestId_k__BackingField; // w19
  TerminalPramsManager_c *v14; // x0

  if ( (byte_4211A8A & 1) == 0 )
  {
    sub_B0D8A4(&ScrTerminalListTop_TypeInfo, v1);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v2);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v3);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    byte_4211A8A = 1;
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
  v7 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v8 = v7;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v8 )
    goto LABEL_49;
  if ( !clsQuestCheck__IsQuestClear(
          v8,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID,
          0,
          0LL) )
    return 0;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v7 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v9 = v7;
  if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
  }
  if ( !v9 )
LABEL_49:
    sub_B0D97C(v7);
  if ( !clsQuestCheck__IsWarClear(
          v9,
          ScrTerminalListTop_TypeInfo->static_fields->NT2_EFFECT_AREA_BOARD_TARGET_WAR_ID,
          0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
      byte_4210852 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v12 = ScrTerminalListTop_TypeInfo;
    QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(ScrTerminalListTop_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
      v12 = ScrTerminalListTop_TypeInfo;
    }
    if ( QuestId_k__BackingField == v12->static_fields->NT2_EFFECT_AREA_BOARD_QUEST_ID )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210853 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
        byte_4210853 = 1;
      }
      v14 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v14 = TerminalPramsManager_TypeInfo;
      }
      if ( v14->static_fields->_PhaseCnt_k__BackingField == 2 )
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
  System_String_c *klass; // x8
  System_String_o *v12; // x20
  unsigned __int64 v13; // x21
  __int64 v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = effectId;
  if ( (byte_4211A88 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v3);
    sub_B0D8A4(&StringLiteral_68/*"\r\n"*/, v4);
    byte_4211A88 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD3 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211AD3 = 1;
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
  v7 = System_Int32__ToString((int32_t)&v16, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD3 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_4211AD3 = 1;
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
  v10 = System_String__Replace_43857140(
          PlayedTerminalEffects_k__BackingField,
          (System_String_o *)StringLiteral_68/*"\r\n"*/,
          (System_String_o *)StringLiteral_26/*"\n"*/,
          0LL);
  PlayedTerminalEffects_k__BackingField = (System_String_o *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !PlayedTerminalEffects_k__BackingField )
    goto LABEL_34;
  if ( !LODWORD(PlayedTerminalEffects_k__BackingField[1].klass) )
  {
LABEL_33:
    v15 = sub_B0D9A8(PlayedTerminalEffects_k__BackingField);
    sub_B0D948(v15, 0LL);
  }
  LOWORD(PlayedTerminalEffects_k__BackingField[1].monitor) = 10;
  if ( !v10
    || (PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__Split(
                                                                     v10,
                                                                     (System_Char_array *)PlayedTerminalEffects_k__BackingField,
                                                                     0LL)) == 0LL )
  {
LABEL_34:
    sub_B0D97C(PlayedTerminalEffects_k__BackingField);
  }
  klass = PlayedTerminalEffects_k__BackingField[1].klass;
  v12 = PlayedTerminalEffects_k__BackingField;
  if ( (int)klass < 1 )
    return 0;
  v13 = 0LL;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)klass )
      goto LABEL_33;
    PlayedTerminalEffects_k__BackingField = (System_String_o *)System_String__op_Equality(
                                                                 *((System_String_o **)&v12[1].monitor + v13),
                                                                 v7,
                                                                 0LL);
    if ( ((unsigned __int8)PlayedTerminalEffects_k__BackingField & 1) != 0 )
      return 1;
    LODWORD(klass) = v12[1].klass;
    if ( (__int64)++v13 >= (int)klass )
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
  System_String_c *klass; // x8
  System_String_o *v9; // x19
  unsigned __int64 v10; // x21
  System_String_o *v11; // x20
  System_String_o *v12; // x0
  __int64 v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  v15 = war_id;
  if ( (byte_4211A8C & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v3);
    sub_B0D8A4(&StringLiteral_68/*"\r\n"*/, v4);
    byte_4211A8C = 1;
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
  v7 = System_String__Replace_43857140(
         mTerminalWarStartedIds,
         (System_String_o *)StringLiteral_68/*"\r\n"*/,
         (System_String_o *)StringLiteral_26/*"\n"*/,
         0LL);
  mTerminalWarStartedIds = (System_String_o *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !mTerminalWarStartedIds )
    goto LABEL_20;
  if ( !LODWORD(mTerminalWarStartedIds[1].klass) )
  {
LABEL_19:
    v14 = sub_B0D9A8(mTerminalWarStartedIds);
    sub_B0D948(v14, 0LL);
  }
  LOWORD(mTerminalWarStartedIds[1].monitor) = 10;
  if ( !v7
    || (mTerminalWarStartedIds = (System_String_o *)System_String__Split(
                                                      v7,
                                                      (System_Char_array *)mTerminalWarStartedIds,
                                                      0LL)) == 0LL )
  {
LABEL_20:
    sub_B0D97C(mTerminalWarStartedIds);
  }
  klass = mTerminalWarStartedIds[1].klass;
  v9 = mTerminalWarStartedIds;
  if ( (int)klass < 1 )
    return 0;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)klass )
      goto LABEL_19;
    v11 = (System_String_o *)*((_QWORD *)&v9[1].monitor + v10);
    v12 = System_Int32__ToString((int32_t)&v15, 0LL);
    mTerminalWarStartedIds = (System_String_o *)System_String__op_Equality(v11, v12, 0LL);
    if ( ((unsigned __int8)mTerminalWarStartedIds & 1) != 0 )
      return 1;
    LODWORD(klass) = v9[1].klass;
    if ( (__int64)++v10 >= (int)klass )
      return 0;
  }
}


void __fastcall TerminalPramsManager__LastPanelEventPointSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A79 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_13663/*"TerminalLastPanelEventPoint"*/, v2);
    byte_4211A79 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_13663/*"TerminalLastPanelEventPoint"*/, v3->static_fields->panelEventPoint, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayBgmNameSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A77 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, v2);
    byte_4211A77 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, v3->static_fields->lastPlayBgmName, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A78 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/, v2);
    byte_4211A78 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/,
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
  Il2CppObject *String_34963268; // x19
  TerminalPramsManager_ClearData_o *v9; // x19
  TerminalPramsManager_c *v10; // x0
  struct QuestClearHeroineInfo_o **p_mQuestClearHeroineInfo; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *qClearHeroineInfo; // x8
  struct TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x9
  QuestClearHeroineInfo_o *Load; // x20
  TerminalPramsManager_c *v17; // x0
  struct QuestClearHeroineInfo_o **v18; // x0
  __int64 v19; // x0
  bool questClear; // w20
  TerminalPramsManager_c *v21; // x8
  bool phaseClear; // w21
  struct TerminalPramsManager_StaticFields **p_static_fields; // x9
  struct QuestRewardInfo_array *questRewardInfos; // x10
  struct QuestRewardInfo_array *v25; // x20
  struct QuestRewardInfo_array **p_mQuestRewardInfos; // x0
  __int64 v27; // x0
  struct QuestRewardInfo_array *questPhaseRewardInfos; // x8
  TerminalPramsManager_c *v29; // x0
  struct QuestRewardInfo_array *v30; // x20
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  TerminalPramsManager_c *v34; // x8
  struct UserSuperBossEntity_array *mOldSuperBoss; // x9
  struct UserSuperBossEntity_array *v36; // x20
  TerminalPramsManager_c *v37; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  struct UserSuperBossEntity_array *oldPersonalBoss; // x8
  struct UserSuperBossEntity_array *v42; // x20
  TerminalPramsManager_c *v43; // x0
  struct TerminalPramsManager_StaticFields *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  struct EventPointWinReward_o *evPointWinReward; // x8
  struct EventPointWinReward_o *v48; // x20
  TerminalPramsManager_c *v49; // x0
  struct TerminalPramsManager_StaticFields *v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  int32_t evPointWinType; // w20
  TerminalPramsManager_c *v54; // x8
  struct EventRaceBoostInfo_o *evRaceBoost; // x9
  struct EventRaceBoostInfo_o *v56; // x20
  TerminalPramsManager_c *v57; // x0
  struct TerminalPramsManager_StaticFields *v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  struct CostumeReleaseAnnounce_array *questClearCostume; // x8
  struct CostumeReleaseAnnounce_array *v62; // x20
  TerminalPramsManager_c *v63; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v65; // x0
  __int64 v66; // x1
  struct CostumeReleaseAnnounce_array *questClearCostumeGetInfo; // x8
  struct CostumeReleaseAnnounce_array *v68; // x20
  TerminalPramsManager_c *v69; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeGet_k__BackingField; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  struct EventTowerReward_o *eventTowerReward; // x8
  struct EventTowerReward_o *v74; // x20
  TerminalPramsManager_c *v75; // x0
  struct EventTowerReward_o **p_eventTowerReward_k__BackingField; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  struct QuestRewardInfo_array *resultEventTowerRewardInfo; // x8
  __int64 v80; // x9
  QuestRewardInfo_o *v81; // x9
  struct QuestRewardInfo_array *v82; // x20
  TerminalPramsManager_c *v83; // x0
  struct QuestRewardInfo_array **p_resultEventTowerRewardInfo_k__BackingField; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  struct QuestRewardInfo_array *resultBoostItemRewardInfo; // x8
  struct QuestRewardInfo_array *v88; // x20
  TerminalPramsManager_c *v89; // x0
  struct QuestRewardInfo_array **p_resultBoostItemRewardInfo_k__BackingField; // x0
  __int64 v91; // x0
  __int64 v92; // x1
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo; // x8
  struct QuestRewardInfo_array *v94; // x20
  TerminalPramsManager_c *v95; // x0
  struct QuestRewardInfo_array **p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  __int64 v97; // x0
  __int64 v98; // x1
  bool isDispOnly; // w20
  TerminalPramsManager_c *v100; // x8
  struct WarClearReward_array *warClearReward; // x9
  struct WarClearReward_array *v102; // x20
  TerminalPramsManager_c *v103; // x0
  struct WarClearReward_array **p_warClearReward_k__BackingField; // x0
  __int64 v105; // x0
  __int64 v106; // x1
  int32_t EventActivityPointEffectState; // w20
  TerminalPramsManager_c *v108; // x8
  bool isWarBoardClear; // w21
  struct TerminalPramsManager_StaticFields **v110; // x9
  struct BattleDropItem_array *questResultAfterEventRewardInfos; // x10
  struct BattleDropItem_array *v112; // x20
  struct BattleDropItem_array **p_mQuestResultAfterEventRewardInfos; // x0
  __int64 v114; // x0
  struct BattleDropItem_array *resultEventPanelRewardInfos; // x8
  TerminalPramsManager_c *v116; // x0
  struct BattleDropItem_array *v117; // x20
  struct BattleDropItem_array **p_mResultEventPanelRewardInfos; // x0
  __int64 v119; // x1
  TerminalPramsManager_c *v120; // x0
  struct LimitImageAnnounce_array *limitImageAnnounces; // x20
  struct LimitImageAnnounce_array **p_limitImageAnnounces_k__BackingField; // x0
  __int64 v123; // x1
  bool isOrdealCallWarClear; // w20
  TerminalPramsManager_c *v125; // x8
  int32_t eventMuralId; // w21
  TerminalPramsManager_c *v127; // x8
  TerminalPramsManager_c *v128; // x0
  __int64 v129; // x0

  if ( (byte_4211A9A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_B0D8A4(&Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___, v2);
    sub_B0D8A4(&JsonManager_TypeInfo, v3);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    byte_4211A9A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210870 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210870 = 1;
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
      String_34963268 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34963268(
                                          v7->static_fields->SAVEKEY_CLEAR_REWARD_DISP,
                                          0LL);
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      v9 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             String_34963268,
             (const MethodInfo_1B68238 *)Method_JsonManager_Deserialize_TerminalPramsManager_ClearData___);
      v10 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v10 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestClearHeroineInfo = &v10->static_fields->mQuestClearHeroineInfo;
      *p_mQuestClearHeroineInfo = 0LL;
      sub_B0D840(p_mQuestClearHeroineInfo, 0LL);
      if ( !v9 )
        sub_B0D97C(v12);
      qClearHeroineInfo = v9->fields.qClearHeroineInfo;
      if ( !qClearHeroineInfo )
        sub_B0D97C(v12);
      oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
      if ( oldUsrSvtData && oldUsrSvtData->fields.svtId >= 1 )
      {
        Load = TerminalPramsManager_QuestClearHeroineInfoForSave__GetLoad(v9->fields.qClearHeroineInfo, 0LL);
        v17 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v17 = TerminalPramsManager_TypeInfo;
        }
        v18 = &v17->static_fields->mQuestClearHeroineInfo;
        *v18 = Load;
        sub_B0D840(v18, Load);
      }
      v19 = (__int64)TerminalPramsManager_TypeInfo;
      questClear = v9->fields.questClear;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_421086D )
      {
        v19 = sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
        byte_421086D = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v21 = TerminalPramsManager_TypeInfo;
      }
      v21->static_fields->_IsQuestClear_k__BackingField = questClear;
      phaseClear = v9->fields.phaseClear;
      if ( !byte_421086E )
      {
        v19 = sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
        v21 = TerminalPramsManager_TypeInfo;
        byte_421086E = 1;
      }
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = TerminalPramsManager_TypeInfo;
      }
      p_static_fields = &v21->static_fields;
      v21->static_fields->_IsPhaseClear_k__BackingField = phaseClear;
      questRewardInfos = v9->fields.questRewardInfos;
      if ( !questRewardInfos )
        sub_B0D97C(v19);
      if ( *(_QWORD *)&questRewardInfos->max_length )
        v25 = v9->fields.questRewardInfos;
      else
        v25 = 0LL;
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
      }
      p_mQuestRewardInfos = &(*p_static_fields)->mQuestRewardInfos;
      *p_mQuestRewardInfos = v25;
      sub_B0D840(p_mQuestRewardInfos, v25);
      questPhaseRewardInfos = v9->fields.questPhaseRewardInfos;
      if ( !questPhaseRewardInfos )
        sub_B0D97C(v27);
      v29 = TerminalPramsManager_TypeInfo;
      if ( *(_QWORD *)&questPhaseRewardInfos->max_length )
        v30 = v9->fields.questPhaseRewardInfos;
      else
        v30 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      p_mQuestPhaseRewardInfos = &v29->static_fields->mQuestPhaseRewardInfos;
      *p_mQuestPhaseRewardInfos = v30;
      sub_B0D840(p_mQuestPhaseRewardInfos, v30);
      v34 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->clearLastBattleRaidId = v9->fields.clearedLastBattleRaidId;
      v34->static_fields->clearBattleRaidId = v9->fields.clearedBattleRaidId;
      v34->static_fields->joinGroupId = v9->fields.joinGroup;
      mOldSuperBoss = v9->fields.mOldSuperBoss;
      if ( !mOldSuperBoss )
        sub_B0D97C(v32);
      if ( *(_QWORD *)&mOldSuperBoss->max_length )
        v36 = v9->fields.mOldSuperBoss;
      else
        v36 = 0LL;
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v34);
      if ( !byte_4210D3A )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v33);
        byte_4210D3A = 1;
      }
      v37 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v37 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v37->static_fields;
      static_fields->_oldSuperBoss_k__BackingField = v36;
      sub_B0D840(&static_fields->_oldSuperBoss_k__BackingField, v36);
      oldPersonalBoss = v9->fields.oldPersonalBoss;
      if ( !oldPersonalBoss )
        sub_B0D97C(v39);
      if ( *(_QWORD *)&oldPersonalBoss->max_length )
        v42 = v9->fields.oldPersonalBoss;
      else
        v42 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210D3C )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v40);
        byte_4210D3C = 1;
      }
      v43 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v43 = TerminalPramsManager_TypeInfo;
      }
      v44 = v43->static_fields;
      v44->_oldPersonalBoss_k__BackingField = v42;
      sub_B0D840(&v44->_oldPersonalBoss_k__BackingField, v42);
      evPointWinReward = v9->fields.evPointWinReward;
      if ( !evPointWinReward )
        sub_B0D97C(v45);
      if ( evPointWinReward->fields.id <= 0 )
        v48 = 0LL;
      else
        v48 = v9->fields.evPointWinReward;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4211AE1 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v46);
        byte_4211AE1 = 1;
      }
      v49 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v49 = TerminalPramsManager_TypeInfo;
      }
      v50 = v49->static_fields;
      v50->_eventPointWinReward_k__BackingField = v48;
      sub_B0D840(&v50->_eventPointWinReward_k__BackingField, v48);
      evPointWinType = v9->fields.evPointWinType;
      if ( !byte_4211AE2 )
      {
        v51 = sub_B0D8A4(&TerminalPramsManager_TypeInfo, v52);
        byte_4211AE2 = 1;
      }
      v54 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v54 = TerminalPramsManager_TypeInfo;
      }
      v54->static_fields->_eventPointWinType_k__BackingField = evPointWinType;
      evRaceBoost = v9->fields.evRaceBoost;
      if ( !evRaceBoost )
        sub_B0D97C(v51);
      if ( evRaceBoost->fields.termId <= 0 )
        v56 = 0LL;
      else
        v56 = v9->fields.evRaceBoost;
      if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v54);
      if ( !byte_4211AE4 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v52);
        byte_4211AE4 = 1;
      }
      v57 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v57 = TerminalPramsManager_TypeInfo;
      }
      v58 = v57->static_fields;
      v58->_eventRaceBoost_k__BackingField = v56;
      sub_B0D840(&v58->_eventRaceBoost_k__BackingField, v56);
      questClearCostume = v9->fields.questClearCostume;
      if ( !questClearCostume )
        sub_B0D97C(v59);
      if ( *(_QWORD *)&questClearCostume->max_length )
        v62 = v9->fields.questClearCostume;
      else
        v62 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4211AE0 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v60);
        byte_4211AE0 = 1;
      }
      v63 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v63 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeRelease_k__BackingField = &v63->static_fields->_questClearCostumeRelease_k__BackingField;
      *p_questClearCostumeRelease_k__BackingField = v62;
      sub_B0D840(p_questClearCostumeRelease_k__BackingField, v62);
      questClearCostumeGetInfo = v9->fields.questClearCostumeGetInfo;
      if ( !questClearCostumeGetInfo )
        sub_B0D97C(v65);
      if ( *(_QWORD *)&questClearCostumeGetInfo->max_length )
        v68 = v9->fields.questClearCostumeGetInfo;
      else
        v68 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_421086B )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v66);
        byte_421086B = 1;
      }
      v69 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v69 = TerminalPramsManager_TypeInfo;
      }
      p_questClearCostumeGet_k__BackingField = &v69->static_fields->_questClearCostumeGet_k__BackingField;
      *p_questClearCostumeGet_k__BackingField = v68;
      sub_B0D840(p_questClearCostumeGet_k__BackingField, v68);
      eventTowerReward = v9->fields.eventTowerReward;
      if ( !eventTowerReward )
        sub_B0D97C(v71);
      if ( eventTowerReward->fields.eventId <= 0 )
        v74 = 0LL;
      else
        v74 = v9->fields.eventTowerReward;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210D3F )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v72);
        byte_4210D3F = 1;
      }
      v75 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v75 = TerminalPramsManager_TypeInfo;
      }
      p_eventTowerReward_k__BackingField = &v75->static_fields->_eventTowerReward_k__BackingField;
      *p_eventTowerReward_k__BackingField = v74;
      sub_B0D840(p_eventTowerReward_k__BackingField, v74);
      resultEventTowerRewardInfo = v9->fields.resultEventTowerRewardInfo;
      if ( !resultEventTowerRewardInfo )
        sub_B0D97C(v77);
      v80 = *(_QWORD *)&resultEventTowerRewardInfo->max_length;
      if ( v80 )
      {
        if ( !(_DWORD)v80 )
        {
          v129 = sub_B0D9A8(v77);
          sub_B0D948(v129, 0LL);
        }
        v81 = resultEventTowerRewardInfo->m_Items[0];
        if ( !v81 )
          sub_B0D97C(v77);
        if ( v81->fields.userSvtId <= 0 )
          v82 = 0LL;
        else
          v82 = v9->fields.resultEventTowerRewardInfo;
      }
      else
      {
        v82 = 0LL;
      }
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210D40 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v78);
        byte_4210D40 = 1;
      }
      v83 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventTowerRewardInfo_k__BackingField = &v83->static_fields->_resultEventTowerRewardInfo_k__BackingField;
      *p_resultEventTowerRewardInfo_k__BackingField = v82;
      sub_B0D840(p_resultEventTowerRewardInfo_k__BackingField, v82);
      resultBoostItemRewardInfo = v9->fields.resultBoostItemRewardInfo;
      if ( !resultBoostItemRewardInfo )
        sub_B0D97C(v85);
      if ( *(_QWORD *)&resultBoostItemRewardInfo->max_length )
        v88 = v9->fields.resultBoostItemRewardInfo;
      else
        v88 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210861 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v86);
        byte_4210861 = 1;
      }
      v89 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v89 = TerminalPramsManager_TypeInfo;
      }
      p_resultBoostItemRewardInfo_k__BackingField = &v89->static_fields->_resultBoostItemRewardInfo_k__BackingField;
      *p_resultBoostItemRewardInfo_k__BackingField = v88;
      sub_B0D840(p_resultBoostItemRewardInfo_k__BackingField, v88);
      resultEventBoardGameTokenRewardInfo = v9->fields.resultEventBoardGameTokenRewardInfo;
      if ( !resultEventBoardGameTokenRewardInfo )
        sub_B0D97C(v91);
      if ( *(_QWORD *)&resultEventBoardGameTokenRewardInfo->max_length )
        v94 = v9->fields.resultEventBoardGameTokenRewardInfo;
      else
        v94 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210862 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v92);
        byte_4210862 = 1;
      }
      v95 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v95 = TerminalPramsManager_TypeInfo;
      }
      p_resultEventBoardGameTokenRewardInfo_k__BackingField = &v95->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
      *p_resultEventBoardGameTokenRewardInfo_k__BackingField = v94;
      sub_B0D840(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v94);
      isDispOnly = v9->fields.isDispOnly;
      if ( !byte_4211ADD )
      {
        v97 = sub_B0D8A4(&TerminalPramsManager_TypeInfo, v98);
        byte_4211ADD = 1;
      }
      v100 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v100 = TerminalPramsManager_TypeInfo;
      }
      v100->static_fields->_IsDispOnly_k__BackingField = isDispOnly;
      warClearReward = v9->fields.warClearReward;
      if ( !warClearReward )
        sub_B0D97C(v97);
      if ( *(_QWORD *)&warClearReward->max_length )
        v102 = v9->fields.warClearReward;
      else
        v102 = 0LL;
      if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v100);
      if ( !byte_4210872 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v98);
        byte_4210872 = 1;
      }
      v103 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v103 = TerminalPramsManager_TypeInfo;
      }
      p_warClearReward_k__BackingField = &v103->static_fields->_warClearReward_k__BackingField;
      *p_warClearReward_k__BackingField = v102;
      sub_B0D840(p_warClearReward_k__BackingField, v102);
      EventActivityPointEffectState = v9->fields.EventActivityPointEffectState;
      if ( !byte_4211438 )
      {
        v105 = sub_B0D8A4(&TerminalPramsManager_TypeInfo, v106);
        byte_4211438 = 1;
      }
      v108 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v108 = TerminalPramsManager_TypeInfo;
      }
      v108->static_fields->_EventActivityPointEffectState_k__BackingField = EventActivityPointEffectState;
      isWarBoardClear = v9->fields.isWarBoardClear;
      if ( !byte_421086F )
      {
        v105 = sub_B0D8A4(&TerminalPramsManager_TypeInfo, v106);
        v108 = TerminalPramsManager_TypeInfo;
        byte_421086F = 1;
      }
      if ( (BYTE3(v108->vtable._0_Equals.methodPtr) & 4) != 0 && !v108->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v108);
        v108 = TerminalPramsManager_TypeInfo;
      }
      v110 = &v108->static_fields;
      v108->static_fields->_IsWarBoardClear_k__BackingField = isWarBoardClear;
      questResultAfterEventRewardInfos = v9->fields.questResultAfterEventRewardInfos;
      if ( !questResultAfterEventRewardInfos )
        sub_B0D97C(v105);
      if ( *(_QWORD *)&questResultAfterEventRewardInfos->max_length )
        v112 = v9->fields.questResultAfterEventRewardInfos;
      else
        v112 = 0LL;
      if ( (BYTE3(v108->vtable._0_Equals.methodPtr) & 4) != 0 && !v108->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v108);
        v110 = &TerminalPramsManager_TypeInfo->static_fields;
      }
      p_mQuestResultAfterEventRewardInfos = &(*v110)->mQuestResultAfterEventRewardInfos;
      *p_mQuestResultAfterEventRewardInfos = v112;
      sub_B0D840(p_mQuestResultAfterEventRewardInfos, v112);
      resultEventPanelRewardInfos = v9->fields.resultEventPanelRewardInfos;
      if ( !resultEventPanelRewardInfos )
        sub_B0D97C(v114);
      v116 = TerminalPramsManager_TypeInfo;
      if ( *(_QWORD *)&resultEventPanelRewardInfos->max_length )
        v117 = v9->fields.resultEventPanelRewardInfos;
      else
        v117 = 0LL;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v116 = TerminalPramsManager_TypeInfo;
      }
      p_mResultEventPanelRewardInfos = &v116->static_fields->mResultEventPanelRewardInfos;
      *p_mResultEventPanelRewardInfos = v117;
      sub_B0D840(p_mResultEventPanelRewardInfos, v117);
      v120 = TerminalPramsManager_TypeInfo;
      TerminalPramsManager_TypeInfo->static_fields->panelEventPoint = v9->fields.panelEventPoint;
      limitImageAnnounces = v9->fields.limitImageAnnounces;
      if ( !byte_4210866 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v119);
        v120 = TerminalPramsManager_TypeInfo;
        byte_4210866 = 1;
      }
      if ( (BYTE3(v120->vtable._0_Equals.methodPtr) & 4) != 0 && !v120->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v120);
        v120 = TerminalPramsManager_TypeInfo;
      }
      p_limitImageAnnounces_k__BackingField = &v120->static_fields->_limitImageAnnounces_k__BackingField;
      *p_limitImageAnnounces_k__BackingField = limitImageAnnounces;
      sub_B0D840(p_limitImageAnnounces_k__BackingField, limitImageAnnounces);
      isOrdealCallWarClear = v9->fields.isOrdealCallWarClear;
      if ( !byte_4210889 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v123);
        byte_4210889 = 1;
      }
      v125 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v125 = TerminalPramsManager_TypeInfo;
      }
      v125->static_fields->_IsOrdealCallWarClear_k__BackingField = isOrdealCallWarClear;
      eventMuralId = v9->fields.eventMuralId;
      if ( !byte_421085E )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v123);
        v125 = TerminalPramsManager_TypeInfo;
        byte_421085E = 1;
      }
      if ( (BYTE3(v125->vtable._0_Equals.methodPtr) & 4) != 0 && !v125->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v125);
        v125 = TerminalPramsManager_TypeInfo;
      }
      v125->static_fields->_EventMuralId_k__BackingField = eventMuralId;
      if ( v9->fields.phaseClear )
      {
        if ( (BYTE3(v125->vtable._0_Equals.methodPtr) & 4) != 0 && !v125->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v125);
        if ( !byte_4210848 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v123);
          byte_4210848 = 1;
        }
        v125 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v125 = TerminalPramsManager_TypeInfo;
        }
        v125->static_fields->_IsAutoResume_k__BackingField = 1;
      }
      if ( (BYTE3(v125->vtable._0_Equals.methodPtr) & 4) != 0 && !v125->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v125);
      if ( !byte_4210871 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v123);
        byte_4210871 = 1;
      }
      v127 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v127 = TerminalPramsManager_TypeInfo;
      }
      if ( v127->static_fields->_warClearReward_k__BackingField )
        goto LABEL_304;
      if ( (BYTE3(v127->vtable._0_Equals.methodPtr) & 4) != 0 && !v127->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v127);
      if ( !byte_421086C )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v123);
        byte_421086C = 1;
      }
      v127 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v127 = TerminalPramsManager_TypeInfo;
      }
      if ( v127->static_fields->_IsPlayScriptWithMap_k__BackingField )
      {
LABEL_304:
        if ( (BYTE3(v127->vtable._0_Equals.methodPtr) & 4) != 0 && !v127->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v127);
        if ( !byte_4211AE9 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v123);
          byte_4211AE9 = 1;
        }
        v128 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v128 = TerminalPramsManager_TypeInfo;
        }
        v128->static_fields->_isQuestRewardSetted_k__BackingField = 1;
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
  EventRaidDefeatedEffectInfo_o *v9; // x19
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4211A9D & 1) == 0 )
  {
    sub_B0D8A4(&EventRaidDefeatedEffectInfo_TypeInfo, v1);
    sub_B0D8A4(&string_TypeInfo, v2);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v4);
    byte_4211A9D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AEB )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AEB = 1;
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
               (System_String_o *)StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v9 = (EventRaidDefeatedEffectInfo_o *)sub_B0D974(EventRaidDefeatedEffectInfo_TypeInfo, v7, v8);
    EventRaidDefeatedEffectInfo___ctor(v9, String, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AEA )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
      byte_4211AEA = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->_EventRaidDefeatedEffectInfo_k__BackingField = v9;
    sub_B0D840(&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField, v9);
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
  System_Collections_Generic_Dictionary_int__int__o *v12; // x19
  System_String_array *v13; // x0
  __int64 v14; // x1
  int max_length; // w8
  System_String_array *v16; // x20
  unsigned int v17; // w24
  System_String_o *v18; // x21
  System_String_array *v19; // x21
  TerminalPramsManager_c *v20; // x0
  struct System_Collections_Generic_Dictionary_int__int__o **p_QuestRandomGroupList_k__BackingField; // x0
  __int64 v22; // x0
  int32_t result[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4211AA2 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v4);
    sub_B0D8A4(&string_TypeInfo, v5);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/, v7);
    byte_4211AA2 = 1;
  }
  *(_QWORD *)result = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AED )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AED = 1;
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
               (System_String_o *)StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/,
               string_TypeInfo->static_fields->Empty,
               0LL);
    v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 v10,
                                                                 v11);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v12,
      (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    *(_QWORD *)result = 0LL;
    v13 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v13 )
      goto LABEL_42;
    if ( !v13->max_length )
      goto LABEL_43;
    LOWORD(v13->m_Items[0]) = 44;
    if ( !String || (v13 = System_String__Split(String, (System_Char_array *)v13, 0LL)) == 0LL )
LABEL_42:
      sub_B0D97C(v13);
    max_length = v13->max_length;
    v16 = v13;
    if ( max_length >= 1 )
    {
      v17 = 0;
      while ( v17 < max_length )
      {
        v18 = v16->m_Items[v17];
        v13 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !v13 )
          goto LABEL_42;
        if ( !v13->max_length )
          break;
        LOWORD(v13->m_Items[0]) = 58;
        if ( !v18 )
          goto LABEL_42;
        v13 = System_String__Split(v18, (System_Char_array *)v13, 0LL);
        if ( !v13 )
          goto LABEL_42;
        v19 = v13;
        if ( (int)v13->max_length >= 2 )
        {
          v13 = (System_String_array *)System_Int32__TryParse(v13->m_Items[0], &result[1], 0LL);
          if ( result[1] >= 1 && ((unsigned __int8)v13 & 1) != 0 )
          {
            if ( v19->max_length <= 1 )
              break;
            v13 = (System_String_array *)System_Int32__TryParse(v19->m_Items[1], result, 0LL);
            if ( result[0] >= 1 && ((unsigned __int8)v13 & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_42;
              System_Collections_Generic_Dictionary_int__int___Add(
                v12,
                result[1],
                result[0],
                (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
            }
          }
        }
        max_length = v16->max_length;
        if ( (int)++v17 >= max_length )
          goto LABEL_32;
      }
LABEL_43:
      v22 = sub_B0D9A8(v13);
      sub_B0D948(v22, 0LL);
    }
LABEL_32:
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AEC )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v14);
      byte_4211AEC = 1;
    }
    v20 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v20 = TerminalPramsManager_TypeInfo;
    }
    p_QuestRandomGroupList_k__BackingField = &v20->static_fields->_QuestRandomGroupList_k__BackingField;
    *p_QuestRandomGroupList_k__BackingField = v12;
    sub_B0D840(p_QuestRandomGroupList_k__BackingField, v12);
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
  int32_t Int_34962660; // w19
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
  System_String_o *String_34963268; // x20
  __int64 v78; // x1
  int64_t v79; // x19
  TerminalPramsManager_c *v80; // x0
  System_String_o *v81; // x19
  __int64 v82; // x1
  int32_t v83; // w19
  TerminalPramsManager_c *v84; // x0
  System_String_o *v85; // x19
  System_String_o *v86; // x19
  TerminalPramsManager_c *v87; // x8
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_String_o *v89; // x19
  __int64 v90; // x1
  int32_t v91; // w19
  TerminalPramsManager_c *v92; // x0
  System_String_o *v93; // x19
  __int64 v94; // x1
  int32_t v95; // w19
  TerminalPramsManager_c *v96; // x0
  System_String_o *v97; // x19
  __int64 v98; // x1
  int32_t v99; // w19
  TerminalPramsManager_c *v100; // x0
  System_String_o *v101; // x19
  __int64 v102; // x1
  int32_t v103; // w19
  TerminalPramsManager_c *v104; // x0
  System_String_o *v105; // x19
  __int64 v106; // x1
  int32_t v107; // w19
  TerminalPramsManager_c *v108; // x0
  System_String_o *v109; // x19
  __int64 v110; // x1
  int32_t v111; // w19
  TerminalPramsManager_c *v112; // x0
  System_String_o *v113; // x19
  System_String_o *v114; // x20
  __int64 v115; // x1
  int64_t v116; // x19
  TerminalPramsManager_c *v117; // x0
  System_String_o *v118; // x19
  __int64 v119; // x1
  int32_t v120; // w19
  TerminalPramsManager_c *v121; // x0
  System_String_o *v122; // x19
  __int64 v123; // x1
  int32_t v124; // w19
  TerminalPramsManager_c *v125; // x0
  System_String_o *v126; // x19
  Il2CppObject *v127; // x19
  __int64 v128; // x1
  TerminalPramsManager_ClearData_o *v129; // x19
  TerminalPramsManager_c *v130; // x0
  _QWORD *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  System_String_o *v132; // x19
  __int64 v133; // x1
  const MethodInfo *v134; // x2
  int32_t v135; // w20
  TerminalPramsManager_c *v136; // x0
  int32_t WarId_k__BackingField; // w20
  System_String_o *v138; // x19
  Il2CppObject *v139; // x19
  TerminalPramsManager_ClearData_o *v140; // x19
  TerminalPramsManager_c *v141; // x8
  _QWORD *p_eventConquestInfos; // x0
  System_String_o *v143; // x19
  int32_t v144; // w19
  TerminalPramsManager_c *v145; // x8
  System_String_o *v146; // x19
  Il2CppObject *v147; // x19
  TerminalPramsManager_ClearData_o *v148; // x19
  TerminalPramsManager_c *v149; // x8
  _QWORD *p_eventHarvestGrowthInfo; // x0
  System_String_o *v151; // x19
  System_String_o *v152; // x19
  TerminalPramsManager_c *v153; // x8
  struct System_String_o **p_lastPlayBgmName; // x0
  System_String_o *v155; // x19
  int32_t v156; // w19
  TerminalPramsManager_c *v157; // x8
  System_String_o *v158; // x19
  __int64 v159; // x1
  int32_t v160; // w19
  TerminalPramsManager_c *v161; // x0
  System_String_o *v162; // x19
  int32_t v163; // w19
  TerminalPramsManager_c *v164; // x8
  System_String_o *v165; // x19
  __int64 v166; // x1
  System_String_o *v167; // x19
  TerminalPramsManager_c *v168; // x0
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  System_String_o *v170; // x19
  __int64 v171; // x1
  int32_t v172; // w19
  TerminalPramsManager_c *v173; // x0
  System_String_o *v174; // x19
  __int64 v175; // x1
  int32_t v176; // w19
  TerminalPramsManager_c *v177; // x0
  System_String_o *v178; // x19
  __int64 v179; // x1
  int32_t v180; // w19
  TerminalPramsManager_c *v181; // x0
  System_String_o *v182; // x19
  __int64 v183; // x1
  int32_t v184; // w19
  TerminalPramsManager_c *v185; // x0
  System_String_o *v186; // x19
  int32_t v187; // w19
  TerminalPramsManager_c *v188; // x8
  System_String_o *v189; // x19
  int32_t v190; // w19
  TerminalPramsManager_c *v191; // x8
  System_String_o *v192; // x19
  __int64 v193; // x1
  int32_t v194; // w19
  TerminalPramsManager_c *v195; // x0
  System_String_o *v196; // x19
  __int64 v197; // x1
  System_String_o *v198; // x19
  TerminalPramsManager_c *v199; // x0
  struct System_String_o **p_ClearEventQuestIds_k__BackingField; // x0
  System_String_o *v201; // x19
  System_String_o *v202; // x19
  System_String_array *v203; // x0
  __int64 v204; // x1
  __int64 v205; // x8
  System_String_array *v206; // x19
  int32_t v207; // w20
  TerminalPramsManager_c *v208; // x8
  int32_t v209; // w0
  int32_t v210; // w19
  TerminalPramsManager_c *v211; // x0
  System_String_o *v212; // x19
  __int64 v213; // x1
  int32_t v214; // w19
  TerminalPramsManager_c *v215; // x0
  System_String_o *v216; // x19
  __int64 v217; // x1
  int32_t v218; // w19
  TerminalPramsManager_c *v219; // x0
  System_String_o *v220; // x19
  Il2CppObject *v221; // x19
  __int64 v222; // x1
  TerminalPramsManager_ClearData_o *v223; // x19
  TerminalPramsManager_c *v224; // x0
  struct TerminalPramsManager_StaticFields *v225; // x0
  System_String_o *v226; // x19
  __int64 v227; // x1
  int32_t v228; // w19
  TerminalPramsManager_c *v229; // x0
  System_String_o *v230; // x19
  __int64 v231; // x1
  int32_t v232; // w19
  TerminalPramsManager_c *v233; // x0
  __int64 v234; // x0

  if ( (byte_4211A67 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, v1);
    sub_B0D8A4(&System_Convert_TypeInfo, v2);
    sub_B0D8A4(&Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____, v3);
    sub_B0D8A4(&Method_JsonManager_Deserialize_EventConquestInfo_____, v4);
    sub_B0D8A4(&Method_JsonManager_Deserialize_EventHarvestGrowthInfo___, v5);
    sub_B0D8A4(&Method_JsonManager_Deserialize_EventSaveData___, v6);
    sub_B0D8A4(&JsonManager_TypeInfo, v7);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, v9);
    sub_B0D8A4(&StringLiteral_13660/*"TerminalEndTime"*/, v10);
    sub_B0D8A4(&StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/, v11);
    sub_B0D8A4(&StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/, v12);
    sub_B0D8A4(&StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, v13);
    sub_B0D8A4(&StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/, v14);
    sub_B0D8A4(&StringLiteral_11600/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v15);
    sub_B0D8A4(&StringLiteral_13661/*"TerminalEventDailyPointEventId"*/, v16);
    sub_B0D8A4(&StringLiteral_13658/*"TerminalBeforeEventSubmarinePointData"*/, v17);
    sub_B0D8A4(&StringLiteral_13667/*"TerminalPhaseCnt"*/, v18);
    sub_B0D8A4(&StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, v19);
    sub_B0D8A4(&StringLiteral_13675/*"TerminalTimeStatusEventId"*/, v20);
    sub_B0D8A4(&StringLiteral_13659/*"TerminalDispState"*/, v21);
    sub_B0D8A4(&StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v22);
    sub_B0D8A4(&StringLiteral_13662/*"TerminalIsDoneShortcut"*/, v23);
    sub_B0D8A4(&StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v24);
    sub_B0D8A4(&StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, v25);
    sub_B0D8A4(&StringLiteral_11580/*"SAVEKEY_BlankEarthRank"*/, v26);
    sub_B0D8A4(&StringLiteral_13663/*"TerminalLastPanelEventPoint"*/, v27);
    sub_B0D8A4(&StringLiteral_11599/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v28);
    sub_B0D8A4(&StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, v29);
    sub_B0D8A4(&StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v30);
    sub_B0D8A4(&StringLiteral_5214/*"Debug_IsQuestReleaseAll"*/, v31);
    sub_B0D8A4(&StringLiteral_5211/*"Debug_IsDummyErrorSelect"*/, v32);
    sub_B0D8A4(&StringLiteral_13670/*"TerminalQuestId"*/, v33);
    sub_B0D8A4(&StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v34);
    sub_B0D8A4(&StringLiteral_11602/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v35);
    sub_B0D8A4(&StringLiteral_13674/*"TerminalTimeStatusEventDailyPoint"*/, v36);
    sub_B0D8A4(&StringLiteral_13679/*"TerminalWarId"*/, v37);
    sub_B0D8A4(&StringLiteral_13672/*"TerminalSpotId"*/, v38);
    sub_B0D8A4(&StringLiteral_13676/*"TerminalTimeStatusLoopCount"*/, v39);
    sub_B0D8A4(&StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/, v40);
    sub_B0D8A4(&StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, v41);
    sub_B0D8A4(&StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, v42);
    sub_B0D8A4(&StringLiteral_13680/*"TerminalWarStartedIds"*/, v43);
    sub_B0D8A4(&StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, v44);
    sub_B0D8A4(&StringLiteral_13664/*"TerminalLastPlayedFreeQuestSpotId"*/, v45);
    sub_B0D8A4(&StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, v46);
    sub_B0D8A4(&StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v47);
    sub_B0D8A4(&StringLiteral_1/*""*/, v48);
    sub_B0D8A4(&StringLiteral_13665/*"TerminalLastPlayedQuestId"*/, v49);
    sub_B0D8A4(&StringLiteral_5210/*"Debug_IsBuildInfoDisp"*/, v50);
    sub_B0D8A4(&StringLiteral_11601/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v51);
    byte_4211A67 = 1;
  }
  v52 = (System_String_o *)StringLiteral_13659/*"TerminalDispState"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13659/*"TerminalDispState"*/, 0LL) )
  {
    Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(v52, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210847 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v53);
      byte_4210847 = 1;
    }
    v55 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v55 = TerminalPramsManager_TypeInfo;
    }
    v55->static_fields->_DispState_k__BackingField = Int_34962660;
  }
  v56 = (System_String_o *)StringLiteral_13679/*"TerminalWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13679/*"TerminalWarId"*/, 0LL) )
  {
    v58 = UnityEngine_PlayerPrefs__GetInt_34962660(v56, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210841 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v57);
      byte_4210841 = 1;
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
  v60 = (System_String_o *)StringLiteral_13672/*"TerminalSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13672/*"TerminalSpotId"*/, 0LL) )
  {
    v62 = UnityEngine_PlayerPrefs__GetInt_34962660(v60, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210874 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v61);
      byte_4210874 = 1;
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
  v64 = (System_String_o *)StringLiteral_13670/*"TerminalQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13670/*"TerminalQuestId"*/, 0LL) )
  {
    v66 = UnityEngine_PlayerPrefs__GetInt_34962660(v64, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210843 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v65);
      byte_4210843 = 1;
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
  v68 = (System_String_o *)StringLiteral_13665/*"TerminalLastPlayedQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13665/*"TerminalLastPlayedQuestId"*/, 0LL) )
  {
    v70 = UnityEngine_PlayerPrefs__GetInt_34962660(v68, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210895 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v69);
      byte_4210895 = 1;
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
  v72 = (System_String_o *)StringLiteral_13667/*"TerminalPhaseCnt"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13667/*"TerminalPhaseCnt"*/, 0LL) )
  {
    v74 = UnityEngine_PlayerPrefs__GetInt_34962660(v72, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210844 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v73);
      byte_4210844 = 1;
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
  v76 = (System_String_o *)StringLiteral_13660/*"TerminalEndTime"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13660/*"TerminalEndTime"*/, 0LL) )
  {
    String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268(v76, 0LL);
    v79 = 0LL;
    if ( System_String__op_Inequality(String_34963268, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v79 = System_Convert__ToInt64_41924776(String_34963268, 0LL);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_421088E )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v78);
      byte_421088E = 1;
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
  v81 = (System_String_o *)StringLiteral_13662/*"TerminalIsDoneShortcut"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13662/*"TerminalIsDoneShortcut"*/, 0LL) )
  {
    v83 = UnityEngine_PlayerPrefs__GetInt_34962660(v81, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_421084A )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v82);
      byte_421084A = 1;
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
  v85 = (System_String_o *)StringLiteral_13680/*"TerminalWarStartedIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13680/*"TerminalWarStartedIds"*/, 0LL) )
  {
    v86 = UnityEngine_PlayerPrefs__GetString_34963268(v85, 0LL);
    v87 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v87 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v87->static_fields;
    static_fields->mTerminalWarStartedIds = v86;
    sub_B0D840(&static_fields->mTerminalWarStartedIds, v86);
  }
  v89 = (System_String_o *)StringLiteral_5214/*"Debug_IsQuestReleaseAll"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5214/*"Debug_IsQuestReleaseAll"*/, 0LL) )
  {
    v91 = UnityEngine_PlayerPrefs__GetInt_34962660(v89, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AB1 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v90);
      byte_4211AB1 = 1;
    }
    v92 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v92 = TerminalPramsManager_TypeInfo;
    }
    v92->static_fields->mDebug_IsQuestReleaseAll = v91 != 0;
  }
  v93 = (System_String_o *)StringLiteral_5211/*"Debug_IsDummyErrorSelect"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5211/*"Debug_IsDummyErrorSelect"*/, 0LL) )
  {
    v95 = UnityEngine_PlayerPrefs__GetInt_34962660(v93, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AB2 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v94);
      byte_4211AB2 = 1;
    }
    v96 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v96 = TerminalPramsManager_TypeInfo;
    }
    v96->static_fields->mDebug_IsDummyErrorSelect = v95 != 0;
  }
  v97 = (System_String_o *)StringLiteral_5210/*"Debug_IsBuildInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_5210/*"Debug_IsBuildInfoDisp"*/, 0LL) )
  {
    v99 = UnityEngine_PlayerPrefs__GetInt_34962660(v97, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AB3 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v98);
      byte_4211AB3 = 1;
    }
    v100 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v100 = TerminalPramsManager_TypeInfo;
    }
    v100->static_fields->mDebug_IsBuildInfoDisp = v99 != 0;
  }
  v101 = (System_String_o *)StringLiteral_13675/*"TerminalTimeStatusEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13675/*"TerminalTimeStatusEventId"*/, 0LL) )
  {
    v103 = UnityEngine_PlayerPrefs__GetInt_34962660(v101, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210890 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v102);
      byte_4210890 = 1;
    }
    v104 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v104 = TerminalPramsManager_TypeInfo;
    }
    v104->static_fields->_TimeStatusEventId_k__BackingField = v103;
  }
  v105 = (System_String_o *)StringLiteral_13676/*"TerminalTimeStatusLoopCount"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13676/*"TerminalTimeStatusLoopCount"*/, 0LL) )
  {
    v107 = UnityEngine_PlayerPrefs__GetInt_34962660(v105, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210891 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v106);
      byte_4210891 = 1;
    }
    v108 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v108 = TerminalPramsManager_TypeInfo;
    }
    v108->static_fields->_TimeStatusLoopCount_k__BackingField = v107;
  }
  v109 = (System_String_o *)StringLiteral_13661/*"TerminalEventDailyPointEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13661/*"TerminalEventDailyPointEventId"*/, 0LL) )
  {
    v111 = UnityEngine_PlayerPrefs__GetInt_34962660(v109, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210D34 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v110);
      byte_4210D34 = 1;
    }
    v112 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v112 = TerminalPramsManager_TypeInfo;
    }
    v112->static_fields->_EventDailyPointEventId_k__BackingField = v111;
  }
  v113 = (System_String_o *)StringLiteral_13674/*"TerminalTimeStatusEventDailyPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13674/*"TerminalTimeStatusEventDailyPoint"*/, 0LL) )
  {
    v114 = UnityEngine_PlayerPrefs__GetString_34963268(v113, 0LL);
    v116 = 0LL;
    if ( !System_String__op_Equality(v114, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v116 = System_Convert__ToInt64_41924776(v114, 0LL);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210D33 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v115);
      byte_4210D33 = 1;
    }
    v117 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v117 = TerminalPramsManager_TypeInfo;
    }
    v117->static_fields->_BeforeTimeEventDailyPoint_k__BackingField = v116;
  }
  v118 = (System_String_o *)StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/, 0LL) )
  {
    v120 = UnityEngine_PlayerPrefs__GetInt_34962660(v118, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AB5 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v119);
      byte_4211AB5 = 1;
    }
    v121 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v121 = TerminalPramsManager_TypeInfo;
    }
    v121->static_fields->_BeforeEventActivityPoint_k__BackingField = v120;
  }
  v122 = (System_String_o *)StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/, 0LL) )
  {
    v124 = UnityEngine_PlayerPrefs__GetInt_34962660(v122, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AB6 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v123);
      byte_4211AB6 = 1;
    }
    v125 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v125 = TerminalPramsManager_TypeInfo;
    }
    v125->static_fields->_BeforeEventActivityPointGauge_k__BackingField = v124;
  }
  v126 = (System_String_o *)StringLiteral_13658/*"TerminalBeforeEventSubmarinePointData"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13658/*"TerminalBeforeEventSubmarinePointData"*/, 0LL) )
  {
    v127 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34963268(v126, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v129 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v127,
             (const MethodInfo_1B68238 *)Method_JsonManager_Deserialize_EventSaveData___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AB7 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v128);
      byte_4211AB7 = 1;
    }
    v130 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v130 = TerminalPramsManager_TypeInfo;
    }
    p_BeforeEventSubmarineSaveData_k__BackingField = &v130->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
    *p_BeforeEventSubmarineSaveData_k__BackingField = v129;
    sub_B0D840(p_BeforeEventSubmarineSaveData_k__BackingField, v129);
  }
  v132 = (System_String_o *)StringLiteral_11600/*"SAVEKEY_TerminalLastSelectQuestIndex"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11600/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, 0LL) )
  {
    v135 = UnityEngine_PlayerPrefs__GetInt_34962660(v132, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AAF )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v133);
      byte_4211AAF = 1;
    }
    v136 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v136 = TerminalPramsManager_TypeInfo;
    }
    v136->static_fields->_LastSelectQuestIndex_k__BackingField = v135;
    if ( !byte_421083F )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v133);
      v136 = TerminalPramsManager_TypeInfo;
      byte_421083F = 1;
    }
    if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) != 0 && !v136->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v136);
      v136 = TerminalPramsManager_TypeInfo;
    }
    WarId_k__BackingField = v136->static_fields->_WarId_k__BackingField;
    if ( !byte_4211ACB )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v133);
      v136 = TerminalPramsManager_TypeInfo;
      byte_4211ACB = 1;
    }
    if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) != 0 && !v136->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v136);
      v136 = TerminalPramsManager_TypeInfo;
    }
    TerminalPramsManager__SetFolderLastClickedIdx(
      WarId_k__BackingField,
      v136->static_fields->_LastSelectQuestIndex_k__BackingField,
      v134);
  }
  v138 = (System_String_o *)StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, 0LL) )
  {
    v139 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34963268(v138, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v140 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v139,
             (const MethodInfo_1B68238 *)Method_JsonManager_Deserialize_EventConquestInfo_____);
    v141 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v141 = TerminalPramsManager_TypeInfo;
    }
    p_eventConquestInfos = &v141->static_fields->eventConquestInfos;
    *p_eventConquestInfos = v140;
    sub_B0D840(p_eventConquestInfos, v140);
  }
  v143 = (System_String_o *)StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, 0LL) )
  {
    v144 = UnityEngine_PlayerPrefs__GetInt_34962660(v143, 0LL);
    v145 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v145 = TerminalPramsManager_TypeInfo;
    }
    v145->static_fields->eventConquestInfoDisp = v144 != 0;
  }
  v146 = (System_String_o *)StringLiteral_11599/*"SAVEKEY_TerminalHarvestGrowthInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11599/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, 0LL) )
  {
    v147 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34963268(v146, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v148 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v147,
             (const MethodInfo_1B68238 *)Method_JsonManager_Deserialize_EventHarvestGrowthInfo___);
    v149 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v149 = TerminalPramsManager_TypeInfo;
    }
    p_eventHarvestGrowthInfo = &v149->static_fields->eventHarvestGrowthInfo;
    *p_eventHarvestGrowthInfo = v148;
    sub_B0D840(p_eventHarvestGrowthInfo, v148);
  }
  v151 = (System_String_o *)StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11588/*"SAVEKEY_LastPlayBgmName"*/, 0LL) )
  {
    v152 = UnityEngine_PlayerPrefs__GetString_34963268(v151, 0LL);
    v153 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v153 = TerminalPramsManager_TypeInfo;
    }
    p_lastPlayBgmName = &v153->static_fields->lastPlayBgmName;
    *p_lastPlayBgmName = v152;
    sub_B0D840(p_lastPlayBgmName, v152);
  }
  v155 = (System_String_o *)StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11589/*"SAVEKEY_LastPlayQuestConsumeType"*/, 0LL) )
  {
    v156 = UnityEngine_PlayerPrefs__GetInt_34962660(v155, 0LL);
    v157 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v157 = TerminalPramsManager_TypeInfo;
    }
    v157->static_fields->lastPlayQuestConsumeAp = v156;
  }
  v158 = (System_String_o *)StringLiteral_13664/*"TerminalLastPlayedFreeQuestSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13664/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL) )
  {
    v160 = UnityEngine_PlayerPrefs__GetInt_34962660(v158, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210896 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v159);
      byte_4210896 = 1;
    }
    v161 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v161 = TerminalPramsManager_TypeInfo;
    }
    v161->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = v160;
  }
  v162 = (System_String_o *)StringLiteral_13663/*"TerminalLastPanelEventPoint"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13663/*"TerminalLastPanelEventPoint"*/, 0LL) )
  {
    v163 = UnityEngine_PlayerPrefs__GetInt_34962660(v162, 0LL);
    v164 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v164 = TerminalPramsManager_TypeInfo;
    }
    v164->static_fields->panelEventPoint = v163;
  }
  v165 = (System_String_o *)StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/, 0LL) )
  {
    v167 = UnityEngine_PlayerPrefs__GetString_34963268(v165, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211ABB )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v166);
      byte_4211ABB = 1;
    }
    v168 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v168 = TerminalPramsManager_TypeInfo;
    }
    p_PlayedTerminalEffects_k__BackingField = &v168->static_fields->_PlayedTerminalEffects_k__BackingField;
    *p_PlayedTerminalEffects_k__BackingField = v167;
    sub_B0D840(p_PlayedTerminalEffects_k__BackingField, v167);
  }
  v170 = (System_String_o *)StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, 0LL) )
  {
    v172 = UnityEngine_PlayerPrefs__GetInt_34962660(v170, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211ABC )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v171);
      byte_4211ABC = 1;
    }
    v173 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v173 = TerminalPramsManager_TypeInfo;
    }
    v173->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField = v172 != 0;
  }
  v174 = (System_String_o *)StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, 0LL) )
  {
    v176 = UnityEngine_PlayerPrefs__GetInt_34962660(v174, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211ABD )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v175);
      byte_4211ABD = 1;
    }
    v177 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v177 = TerminalPramsManager_TypeInfo;
    }
    v177->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField = v176;
  }
  v178 = (System_String_o *)StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, 0LL) )
  {
    v180 = UnityEngine_PlayerPrefs__GetInt_34962660(v178, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211ABE )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v179);
      byte_4211ABE = 1;
    }
    v181 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v181 = TerminalPramsManager_TypeInfo;
    }
    v181->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = v180 != 0;
  }
  v182 = (System_String_o *)StringLiteral_11602/*"SAVEKEY_TerminalSelectedStoryQuestId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11602/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, 0LL) )
  {
    v184 = UnityEngine_PlayerPrefs__GetInt_34962660(v182, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210845 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v183);
      byte_4210845 = 1;
    }
    v185 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v185 = TerminalPramsManager_TypeInfo;
    }
    v185->static_fields->_SelectedStoryQuestId_k__BackingField = v184;
  }
  v186 = (System_String_o *)StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, 0LL) )
  {
    v187 = UnityEngine_PlayerPrefs__GetInt_34962660(v186, 0LL);
    v188 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v188 = TerminalPramsManager_TypeInfo;
    }
    v188->static_fields->ConnectMarkEventId = v187;
  }
  v189 = (System_String_o *)StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, 0LL) )
  {
    v190 = UnityEngine_PlayerPrefs__GetInt_34962660(v189, 0LL);
    v191 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v191 = TerminalPramsManager_TypeInfo;
    }
    v191->static_fields->ConnectMarkAnimationId = v190;
  }
  v192 = (System_String_o *)StringLiteral_11601/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11601/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, 0LL) )
  {
    v194 = UnityEngine_PlayerPrefs__GetInt_34962660(v192, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210846 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v193);
      byte_4210846 = 1;
    }
    v195 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v195 = TerminalPramsManager_TypeInfo;
    }
    v195->static_fields->_SelectedRecollectionWarId_k__BackingField = v194;
  }
  v196 = (System_String_o *)StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, 0LL) )
  {
    v198 = UnityEngine_PlayerPrefs__GetString_34963268(v196, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211ACC )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v197);
      byte_4211ACC = 1;
    }
    v199 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v199 = TerminalPramsManager_TypeInfo;
    }
    p_ClearEventQuestIds_k__BackingField = &v199->static_fields->_ClearEventQuestIds_k__BackingField;
    *p_ClearEventQuestIds_k__BackingField = v198;
    sub_B0D840(p_ClearEventQuestIds_k__BackingField, v198);
  }
  v201 = (System_String_o *)StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, 0LL) )
  {
    v202 = UnityEngine_PlayerPrefs__GetString_34963268(v201, 0LL);
    if ( !System_String__IsNullOrEmpty(v202, 0LL) )
    {
      v203 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
      if ( v203 )
      {
        if ( !v203->max_length )
          goto LABEL_432;
        LOWORD(v203->m_Items[0]) = 44;
        if ( v202 )
        {
          v203 = System_String__Split(v202, (System_Char_array *)v203, 0LL);
          if ( v203 )
          {
            v205 = *(_QWORD *)&v203->max_length;
            v206 = v203;
            if ( !v205 )
            {
              v207 = 0;
LABEL_357:
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4210D2F )
              {
                sub_B0D8A4(&TerminalPramsManager_TypeInfo, v204);
                byte_4210D2F = 1;
              }
              v208 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v208 = TerminalPramsManager_TypeInfo;
              }
              v208->static_fields->_MapModelClearQuestId_k__BackingField = v207;
              if ( (int)v206->max_length < 2 )
              {
                v210 = 0;
              }
              else
              {
                v209 = System_Int32__Parse(v206->m_Items[1], 0LL);
                v208 = TerminalPramsManager_TypeInfo;
                v210 = v209;
              }
              if ( (BYTE3(v208->vtable._0_Equals.methodPtr) & 4) != 0 && !v208->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v208);
              if ( !byte_4210D30 )
              {
                sub_B0D8A4(&TerminalPramsManager_TypeInfo, v204);
                byte_4210D30 = 1;
              }
              v211 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v211 = TerminalPramsManager_TypeInfo;
              }
              v211->static_fields->_MapModelClearPhaseCount_k__BackingField = v210;
              goto LABEL_377;
            }
            if ( (_DWORD)v205 )
            {
              v207 = System_Int32__Parse(v203->m_Items[0], 0LL);
              goto LABEL_357;
            }
LABEL_432:
            v234 = sub_B0D9A8(v203);
            sub_B0D948(v234, 0LL);
          }
        }
      }
      sub_B0D97C(v203);
    }
  }
LABEL_377:
  v212 = (System_String_o *)StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, 0LL) )
  {
    v214 = UnityEngine_PlayerPrefs__GetInt_34962660(v212, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AC0 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v213);
      byte_4211AC0 = 1;
    }
    v215 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v215 = TerminalPramsManager_TypeInfo;
    }
    v215->static_fields->_IsDataLostBattleAutoReset_k__BackingField = v214 != 0;
  }
  v216 = (System_String_o *)StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, 0LL) )
  {
    v218 = UnityEngine_PlayerPrefs__GetInt_34962660(v216, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AC7 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v217);
      byte_4211AC7 = 1;
    }
    v219 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v219 = TerminalPramsManager_TypeInfo;
    }
    v219->static_fields->_PlayerGenderType_k__BackingField = v218;
  }
  v220 = (System_String_o *)StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11582/*"SAVEKEY_CampaignDirectBonus"*/, 0LL) )
  {
    v221 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34963268(v220, 0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v223 = JsonManager__Deserialize_TerminalPramsManager_ClearData_(
             v221,
             (const MethodInfo_1B68238 *)Method_JsonManager_Deserialize_CommonUI_CampaignDirectBonusData_____);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210D37 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v222);
      byte_4210D37 = 1;
    }
    v224 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v224 = TerminalPramsManager_TypeInfo;
    }
    v225 = v224->static_fields;
    v225->_CampaignDirectBonus_k__BackingField = (struct CommonUI_CampaignDirectBonusData_array *)v223;
    sub_B0D840(&v225->_CampaignDirectBonus_k__BackingField, v223);
  }
  v226 = (System_String_o *)StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11581/*"SAVEKEY_BlankEarthSpotId"*/, 0LL) )
  {
    v228 = UnityEngine_PlayerPrefs__GetInt_34962660(v226, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AA9 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v227);
      byte_4211AA9 = 1;
    }
    v229 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v229 = TerminalPramsManager_TypeInfo;
    }
    v229->static_fields->_BlankEarthSpotId_k__BackingField = v228;
  }
  v230 = (System_String_o *)StringLiteral_11580/*"SAVEKEY_BlankEarthRank"*/;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_11580/*"SAVEKEY_BlankEarthRank"*/, 0LL) )
  {
    v232 = UnityEngine_PlayerPrefs__GetInt_34962660(v230, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211ACD )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v231);
      byte_4211ACD = 1;
    }
    v233 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v233 = TerminalPramsManager_TypeInfo;
    }
    v233->static_fields->_BlankEarthRank_k__BackingField = v232;
  }
}


TerminalTransitionInfo_o *__fastcall TerminalPramsManager__Load_TerminalTransitionInfoData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *v4; // x20
  TerminalTransitionInfo_o *v5; // x19
  int32_t Int_34962660; // w0
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t v9; // w20
  __int64 v10; // x0
  System_String_o *v11; // x20
  System_String_o *String_34963268; // x0

  if ( (byte_4211A68 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalTransitionInfo_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_13678/*"TerminalTransitionInfoVoiceAssetName"*/, v2);
    sub_B0D8A4(&StringLiteral_13677/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_4211A68 = 1;
  }
  v4 = (System_String_o *)StringLiteral_13677/*"TerminalTransitionInfoMissionId"*/;
  v5 = 0LL;
  if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13677/*"TerminalTransitionInfoMissionId"*/, 0LL) )
  {
    Int_34962660 = UnityEngine_PlayerPrefs__GetInt_34962660(v4, 0LL);
    if ( Int_34962660 < 1 )
    {
      return 0LL;
    }
    else
    {
      v9 = Int_34962660;
      v5 = (TerminalTransitionInfo_o *)sub_B0D974(TerminalTransitionInfo_TypeInfo, v7, v8);
      TerminalTransitionInfo___ctor(v5, 0LL);
      if ( !v5 )
        sub_B0D97C(v10);
      v5->fields.missionId = v9;
      v11 = (System_String_o *)StringLiteral_13678/*"TerminalTransitionInfoVoiceAssetName"*/;
      if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_13678/*"TerminalTransitionInfoVoiceAssetName"*/, 0LL) )
      {
        String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268(v11, 0LL);
        v5->fields.voiceAssetName = String_34963268;
        sub_B0D840(&v5->fields.voiceAssetName, String_34963268);
      }
    }
  }
  return v5;
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

  if ( (byte_4211A81 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v2);
    sub_B0D8A4(&StringLiteral_705/*","*/, v3);
    byte_4211A81 = 1;
  }
  MapModelClearQuestId_k__BackingField = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210868 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210868 = 1;
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
  if ( !byte_4210869 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4210869 = 1;
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
  v9 = System_String__Concat_43852188(v6, (System_String_o *)StringLiteral_705/*","*/, v8, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v9, 0LL);
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

  if ( (byte_4211A6E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11600/*"SAVEKEY_TerminalLastSelectQuestIndex"*/, v2);
    sub_B0D8A4(&StringLiteral_13664/*"TerminalLastPlayedFreeQuestSpotId"*/, v3);
    sub_B0D8A4(&StringLiteral_13665/*"TerminalLastPlayedQuestId"*/, v4);
    byte_4211A6E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD9 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AD9 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13665/*"TerminalLastPlayedQuestId"*/,
    v5->static_fields->_LastPlayedQuestId_k__BackingField,
    0LL);
  if ( !byte_4211ACB )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_4211ACB = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11600/*"SAVEKEY_TerminalLastSelectQuestIndex"*/,
    v7->static_fields->_LastSelectQuestIndex_k__BackingField,
    0LL);
  if ( !byte_4211ADA )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    byte_4211ADA = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13664/*"TerminalLastPlayedFreeQuestSpotId"*/,
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

  if ( (byte_4211A63 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v3);
    byte_4211A63 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AAE )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211AAE = 1;
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
    if ( !byte_4210FAE )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
      byte_4210FAE = 1;
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
  TerminalPramsManager_c *v6; // x0
  struct System_String_o *v7; // x19
  TerminalPramsManager_c *v8; // x0
  struct System_String_o **p_PlayedTerminalEffects_k__BackingField; // x0
  TerminalPramsManager_c *v10; // x0
  System_String_o *PlayedTerminalEffects_k__BackingField; // x19
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x19
  TerminalPramsManager_c *v15; // x0
  struct System_String_o **v16; // x0
  const MethodInfo *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF

  v18 = effectId;
  if ( (byte_4211A89 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v3);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4211A89 = 1;
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
    if ( !byte_4211AD3 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
      byte_4211AD3 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( !v6->static_fields->_PlayedTerminalEffects_k__BackingField )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v6);
      v7 = (struct System_String_o *)StringLiteral_1/*""*/;
      if ( !byte_4211ABB )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
        byte_4211ABB = 1;
      }
      v8 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v8 = TerminalPramsManager_TypeInfo;
      }
      p_PlayedTerminalEffects_k__BackingField = &v8->static_fields->_PlayedTerminalEffects_k__BackingField;
      *p_PlayedTerminalEffects_k__BackingField = v7;
      sub_B0D840(p_PlayedTerminalEffects_k__BackingField, v7);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    if ( !byte_4211AD3 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
      byte_4211AD3 = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    PlayedTerminalEffects_k__BackingField = v10->static_fields->_PlayedTerminalEffects_k__BackingField;
    v12 = System_Int32__ToString((int32_t)&v18, 0LL);
    v14 = System_String__Concat_43852188(
            PlayedTerminalEffects_k__BackingField,
            v12,
            (System_String_o *)StringLiteral_26/*"\n"*/,
            0LL);
    if ( !byte_4211ABB )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
      byte_4211ABB = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    v16 = &v15->static_fields->_PlayedTerminalEffects_k__BackingField;
    *v16 = v14;
    sub_B0D840(v16, v14);
    TerminalPramsManager__Save_SaveData(v17);
  }
}


void __fastcall TerminalPramsManager__PlayerGenderType_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A83 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, v2);
    byte_4211A83 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD8 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AD8 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/,
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
  struct UserServantCollectionEntity_array *v63; // x19
  int max_length; // w8
  UserServantCollectionMaster_o *v65; // x20
  __int64 v66; // x26
  UserServantCollectionEntity_o *v67; // x27
  BattleResultComponent_resultData_array *v68; // x23
  __int64 v69; // x24
  __int64 v70; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  UserServantCollectionEntity_o *v74; // x24
  _DWORD *v75; // x23
  _DWORD *v76; // x23
  TerminalPramsManager_c *v77; // x0
  BattleResultComponent_resultData_array **v78; // x27
  struct QuestClearHeroineInfo_o **p_mQuestClearHeroineInfo; // x0
  __int64 v80; // x1
  __int64 v81; // x8
  BattleResultComponent_resultData_o *v82; // x9
  struct System_String_o *eventEndTitle; // x10
  struct System_String_o *eventEndMessage; // x19
  __int128 v85; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v86; // x23
  UserServantEntity_o *v87; // x24
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x23
  System_String_Fields fields; // x25
  void *monitor; // x26
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x25
  int64_t UserId; // x0
  __int64 v95; // x27
  __int64 v96; // x28
  int64_t v97; // x26
  __int64 v98; // x1
  __int64 v99; // x2
  int v100; // w8
  UserServantCollectionEntity_o *v101; // x26
  int v102; // w9
  UserServantCollectionEntity_o *v103; // x25
  BattleResultComponent_resultData_array *v104; // x21
  int32_t SvtId; // w0
  __int64 v106; // x21
  __int64 v107; // x28
  int32_t v108; // w27
  bool v109; // zf
  QuestClearHeroineInfo_o *v110; // x22
  bool v111; // w9
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v113; // x21
  __int64 v114; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v115; // x23
  int32_t lastQuestId; // w8
  int32_t friendshipExceedCount; // w9
  TerminalPramsManager_c *v118; // x0
  struct QuestClearHeroineInfo_o **v119; // x0
  BattleResultComponent_resultData_o *v120; // x8
  struct System_String_o *v121; // x9
  UserQuestEntity_o *v122; // x28
  TerminalPramsManager_c *v123; // x8
  int32_t questId; // w19
  TerminalPramsManager_c *v125; // x0
  __int64 v126; // x1
  int32_t QuestPhase; // w23
  TerminalPramsManager_c *v128; // x0
  int32_t v129; // w23
  UserQuestMaster_o *v130; // x24
  UserQuestEntity_o *v131; // x0
  UserQuestEntity_o *v132; // x25
  int32_t v133; // w24
  __int64 v134; // x1
  bool v135; // w19
  TerminalPramsManager_c *v136; // x0
  const MethodInfo *v137; // x2
  TerminalPramsManager_c *v138; // x0
  TerminalPramsManager_c *v139; // x8
  int32_t v140; // w24
  const MethodInfo *v141; // x1
  WarEntity_o *v142; // x23
  TerminalPramsManager_c *v143; // x0
  __int64 v144; // x1
  TerminalPramsManager_c *v145; // x0
  char v146; // w8
  const MethodInfo *v147; // x1
  __int64 v148; // x1
  bool HasFlag; // w0
  __int64 v150; // x1
  struct QuestRewardInfo_array **p_mQuestRewardInfos; // x0
  BattleResultComponent_resultData_o *v152; // x23
  TerminalPramsManager_c *v153; // x0
  struct QuestRewardInfo_array **v154; // x0
  TerminalPramsManager_c *v155; // x0
  struct QuestRewardInfo_array **p_mQuestPhaseRewardInfos; // x0
  BattleResultComponent_resultData_o *v157; // x23
  TerminalPramsManager_c *v158; // x0
  struct QuestRewardInfo_array **v159; // x0
  TerminalPramsManager_c *v160; // x0
  struct BattleDropItem_array **p_mQuestResultAfterEventRewardInfos; // x0
  __int64 v162; // x8
  BattleResultComponent_resultData_o *v163; // x23
  TerminalPramsManager_c *v164; // x0
  struct BattleDropItem_array **v165; // x0
  TerminalPramsManager_c *v166; // x0
  int32_t v167; // w19
  struct BattleDropItem_array **p_mResultEventPanelRewardInfos; // x0
  BattleResultComponent_resultData_o *v169; // x23
  TerminalPramsManager_c *v170; // x0
  struct BattleDropItem_array **v171; // x0
  TerminalPramsManager_c *v172; // x0
  struct EventConquestInfo_array **p_eventConquestInfos; // x0
  __int64 v174; // x1
  struct TerminalPramsManager_StaticFields **p_static_fields; // x8
  __int64 v176; // x9
  BattleResultComponent_resultData_o *v177; // x23
  struct EventConquestInfo_array **v178; // x0
  int32_t v179; // w23
  WarEntity_o *v180; // x0
  __int64 v181; // x1
  int32_t id; // w19
  EventRaidMaster_o *v183; // x23
  __int64 v184; // x1
  signed int v185; // w9
  BattleResultComponent_resultData_array *v186; // x24
  int v187; // w8
  Il2CppClass **v188; // x8
  Il2CppClass *v189; // x25
  __int64 v190; // x1
  int32_t RaidGroupDeadQuestId; // w26
  signed int v192; // w9
  BattleResultComponent_resultData_array *v193; // x26
  int v194; // w8
  int v195; // w22
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t name_high; // w22
  signed int v198; // w9
  BattleResultComponent_resultData_array *v199; // x24
  int v200; // w8
  BattleResultComponent_resultData_o *v201; // x19
  int32_t RaidDeadQuestId; // w25
  struct TerminalPramsManager_StaticFields *v203; // x8
  int32_t v204; // w19
  TerminalPramsManager_c *v205; // x0
  TerminalPramsManager_c *v206; // x8
  bool v207; // w19
  TerminalPramsManager_c *v208; // x0
  int32_t v209; // w19
  int32_t eventId; // w21
  __int64 v211; // x1
  __int64 v212; // x2
  char *v213; // x21
  char *v214; // x22
  BattleResultComponent_resultData_o *v215; // x8
  int v216; // w9
  int v217; // w11
  __int64 v218; // x28
  TerminalPramsManager_c *v219; // x0
  int32_t bounds_high; // w23
  bool IsUserEventStatus; // w0
  TerminalPramsManager_c *v222; // x0
  TerminalPramsManager_c *v223; // x0
  EventSaveData_o *v224; // x23
  __int64 v225; // x1
  TerminalPramsManager_c *v226; // x0
  struct EventSaveData_o **p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  struct LimitImageAnnounce_array *limitImageAnnounces; // x8
  signed int v229; // w8
  System_String_o **v230; // x9
  System_String_o *v231; // x25
  System_String_o **v232; // x9
  System_String_o *v233; // x23
  __int64 *v234; // x8
  int32_t v235; // w21
  __int64 v236; // x1
  __int64 v237; // x2
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *v238; // x26
  TerminalPramsManager___c_c *v239; // x8
  struct TerminalPramsManager___c_StaticFields *v240; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__608_0; // x24
  Il2CppObject *v242; // x21
  struct TerminalPramsManager___c_StaticFields *v243; // x0
  __int64 v244; // x1
  TerminalPramsManager_c *v245; // x0
  TerminalPramsManager_c *v246; // x0
  struct EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x26
  System_String_o *v248; // x21
  TerminalPramsManager_c *v249; // x0
  int32_t v250; // w23
  int32_t PhaseCnt_k__BackingField; // w24
  _BOOL4 IsQuestClear_k__BackingField; // w19
  TerminalPramsManager_c *v253; // x0
  BattleResultComponent_resultData_array **v254; // x22
  UserQuestEntity_o *v255; // x24
  __int64 v256; // x1
  QuestMaster_o *v257; // x23
  int v258; // w21
  TerminalPramsManager_c *v259; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeRelease_k__BackingField; // x0
  __int64 v261; // x1
  BattleResultComponent_resultData_o *v262; // x8
  struct CostumeReleaseAnnounce_array *v263; // x23
  TerminalPramsManager_c *v264; // x0
  struct CostumeReleaseAnnounce_array **v265; // x0
  TerminalPramsManager_c *v266; // x0
  struct CostumeReleaseAnnounce_array **p_questClearCostumeGet_k__BackingField; // x0
  __int64 v268; // x1
  BattleResultComponent_resultData_o *v269; // x23
  TerminalPramsManager_c *v270; // x0
  struct CostumeReleaseAnnounce_array **v271; // x0
  TerminalPramsManager_c *v272; // x0
  struct TerminalPramsManager_StaticFields *v273; // x0
  __int64 v274; // x1
  bool v275; // w28
  int32_t v276; // w23
  QuestGroupMaster_o *v277; // x24
  int32_t GroupId; // w0
  TerminalPramsManager_c *v279; // x8
  int32_t v280; // w25
  int v281; // w24
  QuestReleaseMaster_o *v282; // x25
  EventPointEntity_o *v283; // x24
  int32_t v284; // w23
  struct TerminalPramsManager_StaticFields *v285; // x8
  BattleResultComponent_resultData_o *v286; // x8
  struct System_String_o *v287; // x9
  struct System_String_o *v288; // x23
  TerminalPramsManager_c *v289; // x0
  struct TerminalPramsManager_StaticFields *v290; // x0
  bool v291; // w9
  BattleResultComponent_resultData_array **v292; // x28
  int32_t v293; // w19
  TerminalPramsManager_c *v294; // x0
  TerminalPramsManager_c *v295; // x0
  struct TerminalPramsManager_StaticFields *v296; // x0
  __int64 v297; // x1
  __int64 v298; // x8
  BattleResultComponent_resultData_o *v299; // x22
  TerminalPramsManager_c *v300; // x0
  struct TerminalPramsManager_StaticFields *v301; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfos; // x19
  BattleResultComponent_resultData_o *v303; // x9
  struct System_String_o *v304; // x10
  struct EventTowerReward_o *v305; // x22
  TerminalPramsManager_c *v306; // x0
  struct EventTowerReward_o **p_eventTowerReward_k__BackingField; // x0
  __int64 v308; // x1
  BattleResultComponent_resultData_o *v309; // x22
  TerminalPramsManager_c *v310; // x0
  struct QuestRewardInfo_array **p_resultEventTowerRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v312; // x22
  TerminalPramsManager_c *v313; // x0
  struct QuestRewardInfo_array **p_resultBoostItemRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v315; // x22
  TerminalPramsManager_c *v316; // x0
  struct QuestRewardInfo_array **p_resultEventBoardGameTokenRewardInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v318; // x22
  TerminalPramsManager_c *v319; // x0
  struct WarClearReward_array **p_warClearReward_k__BackingField; // x0
  TerminalPramsManager_c *v321; // x0
  struct TerminalPramsManager_StaticFields *v322; // x0
  __int64 v323; // x1
  TerminalPramsManager_c *v324; // x0
  struct TerminalPramsManager_StaticFields *v325; // x0
  __int64 v326; // x1
  QuestTree_o *v327; // x22
  int32_t WarID_ByQuestID; // w21
  WarEntity_o *WarEntityByWarID; // x0
  int32_t v330; // w22
  __int64 v331; // x1
  __int64 v332; // x8
  BattleResultComponent_resultData_o *v333; // x21
  TerminalPramsManager_c *v334; // x0
  struct TerminalPramsManager_StaticFields *v335; // x0
  struct UserSuperBossEntity_array **p_oldPersonalBoss_k__BackingField; // x0
  TerminalPramsManager_c *v337; // x0
  struct TerminalPramsManager_StaticFields *v338; // x0
  struct EventRaceBoostInfo_o *raceResult; // x8
  bool v340; // w19
  BalanceConfig_c *v341; // x8
  int32_t battleId; // w19
  TerminalPramsManager_c *v343; // x0
  __int64 v344; // x1
  TerminalPramsManager_c *v345; // x0
  BalanceConfig_c *v346; // x8
  int32_t v347; // w21
  TerminalPramsManager_c *v348; // x0
  BalanceConfig_c *v349; // x8
  int32_t v350; // w23
  TerminalPramsManager_c *v351; // x0
  BalanceConfig_c *v352; // x8
  int32_t v353; // w21
  UserSuperBossMaster_o *v354; // x21
  BattleResultComponent_resultData_array *v355; // x23
  UserSuperBossEntity_o *v356; // x22
  BattleResultComponent_resultData_array *v357; // x21
  __int64 v358; // x1
  TerminalPramsManager_c *v359; // x0
  struct TerminalPramsManager_StaticFields *v360; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *TalkResumeInfo; // x0
  BattleScriptRootComponent_TalkScriptInfo_o *v362; // x21
  __int64 v363; // x1
  QuestMaster_o *v364; // x22
  int32_t ScriptQuestId; // w22
  __int64 v366; // x1
  WebViewManager_o *Instance; // x23
  TerminalPramsManager_c *v368; // x0
  int32_t v369; // w28
  int32_t winResult; // w24
  __int64 v371; // x1
  WebViewManager_o *v372; // x23
  TerminalPramsManager_c *v373; // x0
  int32_t v374; // w24
  int32_t v375; // w21
  TerminalPramsManager_c *v376; // x0
  struct System_String_o **p_lastPlayBgmName; // x0
  void *v378; // x1
  const MethodInfo *v379; // x0
  __int64 v380; // x1
  QuestPhaseMaster_o *v381; // x21
  int32_t v382; // w22
  __int64 v383; // x1
  TerminalPramsManager_c *v384; // x0
  int32_t v385; // w22
  TerminalPramsManager_c *v386; // x0
  int32_t v387; // w23
  __int64 v388; // x1
  SpecifiedSceneInfo_o *SpecifiedSceneInfo; // x22
  TerminalPramsManager_c *v390; // x0
  struct TerminalPramsManager_StaticFields *v391; // x0
  TerminalPramsManager_c *v392; // x8
  const MethodInfo *v393; // x0
  __int64 v394; // x1
  int32_t v395; // w19
  TerminalPramsManager_c *v396; // x0
  struct EventHarvestGrowthInfo_o **p_eventHarvestGrowthInfo; // x0
  __int64 v398; // x1
  TerminalPramsManager_c *v399; // x0
  QuestPhaseEntity_o *v400; // x22
  int32_t ScriptIntParam; // w24
  int32_t v402; // w0
  __int64 v403; // x1
  __int64 v404; // x2
  int32_t v405; // w25
  EventHarvestGrowthInfo_o *v406; // x23
  int32_t phase; // w8
  TerminalPramsManager_c *v408; // x0
  struct EventHarvestGrowthInfo_o **v409; // x0
  __int64 v410; // x1
  QuestMaster_o *v411; // x22
  QuestEntity_o *QuestEntity; // x0
  __int64 v413; // x1
  QuestEntity_o *v414; // x22
  TerminalPramsManager_c *v415; // x0
  int32_t SpotId; // w21
  UserEventCooltimeRewardEntity_o *CurrentLevelEntity; // x0
  UserEventCooltimeRewardEntity_o *v418; // x21
  TerminalPramsManager_c *v419; // x0
  struct EventAreaImproveResultInfo_o *eventAreaImproveResultInfo; // x8
  TerminalPramsManager_c *v421; // x0
  __int64 v422; // x1
  System_String_o *v423; // x21
  TerminalPramsManager_c *v424; // x0
  System_String_o *v425; // x0
  __int64 v426; // x1
  System_String_o *v427; // x21
  TerminalPramsManager_c *v428; // x0
  struct System_String_o **p_SceneMoveQuestClearedInfo_k__BackingField; // x0
  BattleResultComponent_resultData_o *v430; // x21
  TerminalPramsManager_c *v431; // x0
  struct LimitImageAnnounce_array **p_limitImageAnnounces_k__BackingField; // x0
  __int64 v433; // x1
  System_String_array *v434; // x21
  TerminalPramsManager_c *v435; // x0
  char *v436; // x24
  BattleResultComponent_resultData_array *v437; // x22
  __int64 v438; // x1
  __int64 v439; // x1
  TerminalPramsManager_c *v440; // x0
  BattleResultComponent_resultData_array *v441; // x22
  __int64 v442; // x1
  __int64 v443; // x1
  TerminalPramsManager_c *v444; // x0
  BattleResultComponent_resultData_array *v445; // x22
  __int64 v446; // x1
  __int64 v447; // x1
  TerminalPramsManager_c *v448; // x0
  BattleResultComponent_resultData_array *v449; // x22
  System_String_o *v450; // x0
  const MethodInfo *v451; // x1
  const MethodInfo *v452; // x0
  const MethodInfo *v453; // x0
  const MethodInfo *v454; // x0
  const MethodInfo *v455; // x0
  const MethodInfo *v456; // x0
  __int64 v457; // x1
  TerminalPramsManager_c *v458; // x0
  TerminalPramsManager_c *v459; // x0
  __int64 v460; // x0
  __int64 v461; // x0
  __int64 v462; // x0
  __int64 v463; // x0
  System_String_o *isLastGoalPlayed; // [xsp+0h] [xbp-110h]
  bool v465; // [xsp+Ch] [xbp-104h]
  BattleResultComponent_resultData_array *resulta; // [xsp+10h] [xbp-100h]
  UserQuestEntity_o *v467; // [xsp+18h] [xbp-F8h]
  BattleResultComponent_resultData_array **v468; // [xsp+20h] [xbp-F0h]
  il2cpp_array_size_t *p_max_length; // [xsp+28h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v470; // [xsp+30h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v471; // [xsp+50h] [xbp-C0h]
  char v472[4]; // [xsp+7Ch] [xbp-94h] BYREF
  UserSuperBossEntity_o *v473; // [xsp+80h] [xbp-90h] BYREF
  WarEntity_o *v474; // [xsp+88h] [xbp-88h] BYREF
  int QuestId_k__BackingField; // [xsp+94h] [xbp-7Ch] BYREF
  WarEntity_o *v476; // [xsp+98h] [xbp-78h] BYREF
  WarEntity_o *entity; // [xsp+A0h] [xbp-70h] BYREF
  int v478; // [xsp+ACh] [xbp-64h] BYREF
  QuestPhaseEntity_o *v479; // [xsp+B0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v480; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v481; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v482; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v483; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v484; // 0:x0.16

  v4 = result;
  if ( (byte_4211A91 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isWin);
    sub_B0D8A4(&CondType_TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventRaidMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMessageMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserSuperBossMaster___, v21);
    sub_B0D8A4(&DataManager_TypeInfo, v22);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v24);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v25);
    sub_B0D8A4(&EventHarvestGrowthInfo_TypeInfo, v26);
    sub_B0D8A4(&EventSaveData_TypeInfo, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestReleaseEntity__Find__, v28);
    sub_B0D8A4(&NetworkManager_TypeInfo, v29);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
    sub_B0D8A4(&Method_System_Predicate_QuestReleaseEntity___ctor__, v32);
    sub_B0D8A4(&System_Predicate_QuestReleaseEntity__TypeInfo, v33);
    sub_B0D8A4(&QuestClearHeroineInfo_TypeInfo, v34);
    sub_B0D8A4(&ScriptManager_TypeInfo, v35);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v36);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v37);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v38);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v39);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v40);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v41);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v42);
    sub_B0D8A4(&string___TypeInfo, v43);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v44);
    sub_B0D8A4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v45);
    sub_B0D8A4(&Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__608_0__, v46);
    sub_B0D8A4(&TerminalPramsManager___c_TypeInfo, v47);
    sub_B0D8A4(&UserServantCollectionEntity___TypeInfo, v48);
    sub_B0D8A4(&UserServantCollectionEntity_TypeInfo, v49);
    sub_B0D8A4(&UserServantEntity_TypeInfo, v50);
    sub_B0D8A4(&UserSuperBossEntity___TypeInfo, v51);
    sub_B0D8A4(&StringLiteral_19168/*"harvestGrowthAfterQuestId"*/, v52);
    sub_B0D8A4(&StringLiteral_16336/*"afterActionBk"*/, v53);
    sub_B0D8A4(&StringLiteral_705/*","*/, v54);
    sub_B0D8A4(&StringLiteral_19169/*"harvestGrowthBeforeQuestId"*/, v55);
    sub_B0D8A4(&StringLiteral_1/*""*/, v56);
    sub_B0D8A4(&StringLiteral_6601/*"False"*/, v57);
    result = (BattleResultComponent_resultData_array *)sub_B0D8A4(&StringLiteral_960/*"0"*/, v58);
    byte_4211A91 = 1;
  }
  v479 = 0LL;
  v478 = 0;
  v476 = 0LL;
  entity = 0LL;
  QuestId_k__BackingField = 0;
  v473 = 0LL;
  v474 = 0LL;
  v472[0] = 0;
  if ( !v4 )
    goto LABEL_1330;
  p_max_length = &v4->max_length;
  if ( !v4->max_length )
    goto LABEL_1329;
  m_Items = v4->m_Items;
  v59 = v4->m_Items[0];
  if ( !v59 )
    goto LABEL_1330;
  oldUserSvtCollection = v59->fields.oldUserSvtCollection;
  if ( !oldUserSvtCollection )
    goto LABEL_1330;
  resulta = v4;
  v62 = (_DWORD *)sub_B0D8BC(UserServantCollectionEntity___TypeInfo, oldUserSvtCollection->max_length);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1330;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_max_length )
    goto LABEL_1329;
  if ( !*m_Items )
    goto LABEL_1330;
  v468 = (BattleResultComponent_resultData_array **)v4->m_Items;
  v63 = (*m_Items)->fields.oldUserSvtCollection;
  v465 = isWin;
  v478 = 0;
  if ( !v63 )
    goto LABEL_1330;
  max_length = v63->max_length;
  if ( max_length >= 1 )
  {
    v65 = (UserServantCollectionMaster_o *)result;
    v66 = 0LL;
    while ( (unsigned int)v66 < max_length )
    {
      v67 = v63->m_Items[v66];
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
      if ( !v67 )
        goto LABEL_1330;
      v68 = result;
      v70 = *(_QWORD *)&v67->fields.svtId.fields.currentCryptoKey;
      v69 = *(_QWORD *)&v67->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v480.fields.currentCryptoKey = v70;
      *(_QWORD *)&v480.fields.fakeValue = v69;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                           v480,
                                                           0LL);
      if ( !v65 )
        goto LABEL_1330;
      EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v65, (int64_t)v68, (int32_t)result, 0LL);
      v74 = (UserServantCollectionEntity_o *)sub_B0D974(UserServantCollectionEntity_TypeInfo, v72, v73);
      UserServantCollectionEntity___ctor_21221748(v74, EntityDefinitely, 0LL);
      if ( !v62 )
        goto LABEL_1330;
      if ( v74 )
      {
        result = (BattleResultComponent_resultData_array *)sub_B0D964(v74, *(_QWORD *)(*(_QWORD *)v62 + 64LL));
        if ( !result )
        {
          v462 = sub_B0D99C();
          sub_B0D948(v462, 0LL);
        }
      }
      if ( (unsigned int)v66 >= v62[6] )
        break;
      v75 = &v62[2 * (int)v66];
      *((_QWORD *)v75 + 4) = v74;
      v76 = v75 + 8;
      sub_B0D840(v76, v74);
      if ( (unsigned int)v66 >= v62[6] )
        break;
      if ( !*(_QWORD *)v76 )
        goto LABEL_1330;
      *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*(_QWORD *)v76 + 84LL) = v67->fields.friendship;
      if ( (unsigned int)v66 >= v62[6] )
        break;
      if ( !*(_QWORD *)v76 )
        goto LABEL_1330;
      *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(*(_QWORD *)v76 + 100LL) = v67->fields.friendshipRank;
      if ( (unsigned int)v66 >= v62[6] )
        break;
      if ( !*(_QWORD *)v76 )
        goto LABEL_1330;
      ++v66;
      *(_DWORD *)(*(_QWORD *)v76 + 116LL) = v67->fields.friendshipExceedCount;
      v478 = v66;
      max_length = v63->max_length;
      if ( (int)v66 >= max_length )
        goto LABEL_33;
    }
LABEL_1329:
    v460 = sub_B0D9A8(result);
    sub_B0D948(v460, 0LL);
  }
LABEL_33:
  v77 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v78 = v468;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v77 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v78 = v468;
  }
  p_mQuestClearHeroineInfo = &v77->static_fields->mQuestClearHeroineInfo;
  *p_mQuestClearHeroineInfo = 0LL;
  sub_B0D840(p_mQuestClearHeroineInfo, 0LL);
  v81 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1329;
  if ( !*v78 )
    goto LABEL_1330;
  v82 = (*v78)->m_Items[5];
  if ( v82 )
  {
    eventEndTitle = v82->fields.eventEndTitle;
    if ( eventEndTitle )
    {
      if ( !(_DWORD)eventEndTitle )
        goto LABEL_1329;
      eventEndMessage = v82->fields.eventEndMessage;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1330;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !eventEndMessage )
        goto LABEL_1330;
      v85 = *(_OWORD *)&eventEndMessage[1].monitor;
      v86 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result;
      *(_OWORD *)&v471.fields.currentCryptoKey = *(_OWORD *)&eventEndMessage->fields.m_stringLength;
      *(_OWORD *)&v471.fields.fakeValue = v85;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v470 = v471;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                           &v470,
                                                           0LL);
      if ( !v86 )
        goto LABEL_1330;
      v87 = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
              v86,
              (int64_t)result,
              (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      v90 = sub_B0D974(UserServantEntity_TypeInfo, v88, v89);
      UserServantEntity___ctor_21250620((UserServantEntity_o *)v90, v87, 0LL);
      if ( !v90 )
        goto LABEL_1330;
      *(_OWORD *)(v90 + 96) = *(_OWORD *)&eventEndMessage[4].klass;
      *(_DWORD *)(v90 + 256) = eventEndMessage[10].fields.m_stringLength;
      *(_DWORD *)(v90 + 292) = HIDWORD(eventEndMessage[12].klass);
      *(_DWORD *)(v90 + 296) = eventEndMessage[12].monitor;
      monitor = eventEndMessage[5].monitor;
      fields = eventEndMessage[5].fields;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v481.fields.currentCryptoKey = monitor;
      *(System_String_Fields *)&v481.fields.fakeValue = fields;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v481, 0LL) >= 1 )
        *(_OWORD *)(v90 + 128) = *(_OWORD *)&eventEndMessage[5].monitor;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1330;
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              (DataManager_o *)result,
                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      v96 = *(_QWORD *)(v90 + 80);
      v95 = *(_QWORD *)(v90 + 88);
      v97 = UserId;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v482.fields.currentCryptoKey = v96;
      *(_QWORD *)&v482.fields.fakeValue = v95;
      result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                           v482,
                                                           0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_1330;
      result = (BattleResultComponent_resultData_array *)UserServantCollectionMaster__GetEntityDefinitely(
                                                           MasterData_WarQuestSelectionMaster,
                                                           v97,
                                                           (int32_t)result,
                                                           0LL);
      v78 = v468;
      v478 = 0;
      if ( !v62 )
        goto LABEL_1330;
      v100 = v62[6];
      v101 = (UserServantCollectionEntity_o *)result;
      if ( v100 >= 1 )
      {
        v102 = 0;
        while ( v102 < (unsigned int)v100 )
        {
          v103 = *(UserServantCollectionEntity_o **)&v62[2 * v102 + 8];
          if ( !v103 )
            goto LABEL_1330;
          v104 = (BattleResultComponent_resultData_array *)v103->fields.userId;
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
          if ( v104 == result )
          {
            SvtId = UserServantCollectionEntity__getSvtId(v103, 0LL);
            v106 = *(_QWORD *)(v90 + 80);
            v107 = *(_QWORD *)(v90 + 88);
            v108 = SvtId;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v483.fields.currentCryptoKey = v106;
            *(_QWORD *)&v483.fields.fakeValue = v107;
            result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                 v483,
                                                                 0LL);
            v109 = v108 == (_DWORD)result;
            v78 = v468;
            if ( v109 )
              goto LABEL_77;
          }
          v102 = v478 + 1;
          v478 = v102;
          v100 = v62[6];
          if ( v102 >= v100 )
            goto LABEL_76;
        }
        goto LABEL_1329;
      }
LABEL_76:
      v103 = 0LL;
LABEL_77:
      v110 = (QuestClearHeroineInfo_o *)sub_B0D974(QuestClearHeroineInfo_TypeInfo, v98, v99);
      QuestClearHeroineInfo___ctor(v110, 0LL);
      if ( !v110 )
        goto LABEL_1330;
      v110->fields.oldUsrSvtData = (struct UserServantEntity_o *)v90;
      sub_B0D840(&v110->fields, v90);
      result = (BattleResultComponent_resultData_array *)UserServantEntity__getLimitCount(
                                                           (UserServantEntity_o *)v90,
                                                           0LL);
      if ( !v87 )
        goto LABEL_1330;
      v111 = (_DWORD)result != UserServantEntity__getLimitCount(v87, 0LL);
      v110->fields.isChangeTreasureDvc = 0;
      v110->fields.treasureDvcId = 0;
      v110->fields.treasureDvcLv = 0;
      v110->fields.isFriendShipExceed = 0;
      v110->fields.oldFriendShipRank = -1;
      v110->fields.isChangeLimitcnt = v111;
      v110->fields.isExceed = *(_DWORD *)(v90 + 296) != v87->fields.exceedCount;
      if ( v103 )
      {
        result = (BattleResultComponent_resultData_array *)UserServantCollectionEntity__getFriendShipRank(v103, 0LL);
        if ( !v101 )
          goto LABEL_1330;
        if ( (_DWORD)result != UserServantCollectionEntity__getFriendShipRank(v101, 0LL) )
          v110->fields.oldFriendShipRank = UserServantCollectionEntity__getFriendShipRank(v103, 0LL);
        if ( v103->fields.friendshipExceedCount != v101->fields.friendshipExceedCount )
        {
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantMaster___);
          v113 = *(_QWORD *)(v90 + 80);
          v114 = *(_QWORD *)(v90 + 88);
          v115 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v484.fields.currentCryptoKey = v113;
          *(_QWORD *)&v484.fields.fakeValue = v114;
          result = (BattleResultComponent_resultData_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                               v484,
                                                               0LL);
          if ( !v115 )
            goto LABEL_1330;
          result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                               v115,
                                                               &entity,
                                                               (int32_t)result,
                                                               (const MethodInfo_2669C30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)result & 1) != 0 )
          {
            if ( !entity )
              goto LABEL_1330;
            lastQuestId = entity->fields.lastQuestId;
            friendshipExceedCount = v103->fields.friendshipExceedCount;
            v110->fields.isFriendShipExceed = 1;
            v110->fields.oldFriendShipRank = friendshipExceedCount + lastQuestId;
          }
        }
      }
      v118 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v118 = TerminalPramsManager_TypeInfo;
      }
      v119 = &v118->static_fields->mQuestClearHeroineInfo;
      *v119 = v110;
      sub_B0D840(v119, v110);
      v81 = *(_QWORD *)p_max_length;
    }
  }
  if ( !(_DWORD)v81 )
    goto LABEL_1329;
  if ( !*v78 )
    goto LABEL_1330;
  v120 = (*v78)->m_Items[9];
  if ( v120 && (v121 = v120->fields.eventEndTitle) != 0LL )
  {
    if ( !(_DWORD)v121 )
      goto LABEL_1329;
    v122 = (UserQuestEntity_o *)v120->fields.eventEndMessage;
  }
  else
  {
    v122 = 0LL;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421086E )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v80);
    byte_421086E = 1;
  }
  v123 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v123 = TerminalPramsManager_TypeInfo;
  }
  v123->static_fields->_IsPhaseClear_k__BackingField = v122 != 0LL;
  if ( !byte_421086D )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v80);
    v123 = TerminalPramsManager_TypeInfo;
    byte_421086D = 1;
  }
  if ( (BYTE3(v123->vtable._0_Equals.methodPtr) & 4) != 0 && !v123->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v123);
    v123 = TerminalPramsManager_TypeInfo;
  }
  v123->static_fields->_IsQuestClear_k__BackingField = 0;
  if ( !byte_4211AC6 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v80);
    v123 = TerminalPramsManager_TypeInfo;
    byte_4211AC6 = 1;
  }
  if ( (BYTE3(v123->vtable._0_Equals.methodPtr) & 4) != 0 && !v123->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v123);
    v123 = TerminalPramsManager_TypeInfo;
  }
  v123->static_fields->_IsPlayedEntryBanner_k__BackingField = 0;
  if ( !byte_4210854 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v80);
    v123 = TerminalPramsManager_TypeInfo;
    byte_4210854 = 1;
  }
  if ( (BYTE3(v123->vtable._0_Equals.methodPtr) & 4) != 0 && !v123->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v123);
    v123 = TerminalPramsManager_TypeInfo;
  }
  if ( v123->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( (BYTE3(v123->vtable._0_Equals.methodPtr) & 4) != 0 && !v123->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v123);
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v80);
      byte_4210852 = 1;
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
      if ( !v122 )
        goto LABEL_1330;
    }
    else
    {
      if ( !v122 )
        goto LABEL_1330;
      questId = v122->fields.questId;
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4210843 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v80);
        byte_4210843 = 1;
      }
      v125 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v125 = TerminalPramsManager_TypeInfo;
      }
      v125->static_fields->_QuestId_k__BackingField = questId;
      QuestPhase = UserQuestEntity__getQuestPhase(v122, 0LL);
      if ( !byte_4210844 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v126);
        byte_4210844 = 1;
      }
      v128 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v128 = TerminalPramsManager_TypeInfo;
      }
      v128->static_fields->_PhaseCnt_k__BackingField = QuestPhase;
    }
    v129 = v122->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1330;
    v130 = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)result,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
    if ( !v130 )
      goto LABEL_1330;
    v131 = UserQuestMaster__GetEntity(v130, (int64_t)result, v129, 0LL);
    if ( v131 )
    {
      v132 = v131;
      v133 = UserQuestEntity__getQuestPhase(v131, 0LL);
      if ( UserQuestEntity__getClearNum(v122, 0LL) || UserQuestEntity__getClearNum(v132, 0LL) != 1 )
        v135 = UserQuestEntity__IsResetStatus(v122, 0LL) && !UserQuestEntity__IsResetStatus(v132, 0LL);
      else
        v135 = 1;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_421086D )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v134);
        byte_421086D = 1;
      }
      v136 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v136 = TerminalPramsManager_TypeInfo;
      }
      v136->static_fields->_IsQuestClear_k__BackingField = v135;
      if ( !byte_4211AC8 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v134);
        v136 = TerminalPramsManager_TypeInfo;
        byte_4211AC8 = 1;
      }
      if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) != 0 && !v136->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v136);
        v136 = TerminalPramsManager_TypeInfo;
      }
      v136->static_fields->_EventUIEffectClearQuestId_k__BackingField = v129;
      if ( !byte_4210D2F )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v134);
        v136 = TerminalPramsManager_TypeInfo;
        byte_4210D2F = 1;
      }
      if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) != 0 && !v136->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v136);
        v136 = TerminalPramsManager_TypeInfo;
      }
      v136->static_fields->_MapModelClearQuestId_k__BackingField = v129;
      if ( !byte_4210D30 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v134);
        v136 = TerminalPramsManager_TypeInfo;
        byte_4210D30 = 1;
      }
      if ( (BYTE3(v136->vtable._0_Equals.methodPtr) & 4) != 0 && !v136->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v136);
        v136 = TerminalPramsManager_TypeInfo;
      }
      v136->static_fields->_MapModelClearPhaseCount_k__BackingField = v133;
      TerminalPramsManager__MapModelClearQuestInfo_SaveData((const MethodInfo *)v136);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
      if ( !result )
        goto LABEL_1330;
      AdManager__TrackEvent((AdManager_o *)result, 4, 1, v129, v133, 0LL, 0LL);
      TerminalPramsManager__SendClearQuestToAdManager(v129, v133, v137);
    }
    else
    {
      v133 = 0;
    }
    v138 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__InitMessageWindowData((const MethodInfo *)v138);
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1330;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMessageMaster___);
    if ( !result )
      goto LABEL_1330;
    result = (BattleResultComponent_resultData_array *)QuestMessageMaster__GetValidMessage(
                                                         (QuestMessageMaster_o *)result,
                                                         v129,
                                                         v133,
                                                         3,
                                                         0LL);
    v123 = TerminalPramsManager_TypeInfo;
    if ( result )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4211ADD )
      {
        result = (BattleResultComponent_resultData_array *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v80);
        byte_4211ADD = 1;
      }
      v123 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v123 = TerminalPramsManager_TypeInfo;
      }
      v123->static_fields->_IsDispOnly_k__BackingField = 1;
    }
  }
  if ( (BYTE3(v123->vtable._0_Equals.methodPtr) & 4) != 0 && !v123->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v123);
  if ( !byte_4210864 )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v80);
    byte_4210864 = 1;
  }
  v139 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v139 = TerminalPramsManager_TypeInfo;
  }
  if ( v139->static_fields->_IsQuestClear_k__BackingField )
  {
    if ( !v122 )
      goto LABEL_1330;
    v140 = v122->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1330;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !result )
      goto LABEL_1330;
    v142 = WarMaster__getByLastQuestId((WarMaster_o *)result, v140, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_421085A )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v141);
      byte_421085A = 1;
    }
    v143 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v143 = TerminalPramsManager_TypeInfo;
    }
    v143->static_fields->_IsWarClear_k__BackingField = v142 != 0LL;
    if ( TerminalPramsManager__CheckIsOrdealCallWarClear(v142, v141) )
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210889 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v144);
        byte_4210889 = 1;
      }
      v145 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v145 = TerminalPramsManager_TypeInfo;
      }
      v146 = 1;
    }
    else
    {
      if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210889 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v144);
        byte_4210889 = 1;
      }
      v145 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v145 = TerminalPramsManager_TypeInfo;
      }
      v146 = 0;
    }
    v145->static_fields->_IsOrdealCallWarClear_k__BackingField = v146;
    if ( (BYTE3(v145->vtable._0_Equals.methodPtr) & 4) != 0 && !v145->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v145);
    if ( !byte_4210858 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v144);
      byte_4210858 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE3(result->m_Items[19]->fields.oldUserSvt) )
    {
      if ( !v142 )
        goto LABEL_1330;
      if ( !WarEntity__IsEvent(v142, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( !result )
          goto LABEL_1330;
        AdManager__TrackEvent((AdManager_o *)result, 6, 1, v142->fields.id, -1, 0LL, 0LL);
      }
    }
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !result )
      goto LABEL_1330;
    AdManager__TrackEvent((AdManager_o *)result, 5, 1, v140, -1, 0LL, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    TerminalPramsManager__SendOpenedQuestIdToAdManager(v140, v147);
    if ( !byte_4210858 )
    {
      result = (BattleResultComponent_resultData_array *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v148);
      byte_4210858 = 1;
    }
    v139 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v139 = TerminalPramsManager_TypeInfo;
    }
    if ( v139->static_fields->_IsWarClear_k__BackingField )
    {
      if ( !v142 )
        goto LABEL_1330;
      HasFlag = WarEntity__HasFlag(v142, 128, 0LL);
      v139 = TerminalPramsManager_TypeInfo;
      if ( HasFlag )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_421087D )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v150);
          byte_421087D = 1;
        }
        v139 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v139 = TerminalPramsManager_TypeInfo;
        }
        v139->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
        if ( !byte_4211AC6 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v150);
          v139 = TerminalPramsManager_TypeInfo;
          byte_4211AC6 = 1;
        }
        if ( (BYTE3(v139->vtable._0_Equals.methodPtr) & 4) != 0 && !v139->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v139);
          v139 = TerminalPramsManager_TypeInfo;
        }
        v139->static_fields->_IsPlayedEntryBanner_k__BackingField = 1;
      }
    }
  }
  if ( (BYTE3(v139->vtable._0_Equals.methodPtr) & 4) != 0 && !v139->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v139);
    v139 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = &v139->static_fields->mQuestRewardInfos;
  *p_mQuestRewardInfos = 0LL;
  sub_B0D840(p_mQuestRewardInfos, 0LL);
  if ( !*p_max_length )
    goto LABEL_1329;
  if ( !*v78 )
    goto LABEL_1330;
  v152 = (*v78)->m_Items[12];
  if ( v152 && v152->fields.eventEndTitle )
  {
    v153 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v153 = TerminalPramsManager_TypeInfo;
    }
    v154 = &v153->static_fields->mQuestRewardInfos;
    *v154 = (struct QuestRewardInfo_array *)v152;
    sub_B0D840(v154, v152);
  }
  v155 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v155 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestPhaseRewardInfos = &v155->static_fields->mQuestPhaseRewardInfos;
  *p_mQuestPhaseRewardInfos = 0LL;
  sub_B0D840(p_mQuestPhaseRewardInfos, 0LL);
  if ( !*p_max_length )
    goto LABEL_1329;
  if ( !*v78 )
    goto LABEL_1330;
  v157 = (*v78)->m_Items[13];
  if ( v157 && v157->fields.eventEndTitle )
  {
    v158 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v158 = TerminalPramsManager_TypeInfo;
    }
    v159 = &v158->static_fields->mQuestPhaseRewardInfos;
    *v159 = (struct QuestRewardInfo_array *)v157;
    sub_B0D840(v159, v157);
  }
  v160 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v160 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestResultAfterEventRewardInfos = &v160->static_fields->mQuestResultAfterEventRewardInfos;
  *p_mQuestResultAfterEventRewardInfos = 0LL;
  sub_B0D840(p_mQuestResultAfterEventRewardInfos, 0LL);
  v162 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1329;
  if ( !*v78 )
    goto LABEL_1330;
  v163 = (*v78)->m_Items[18];
  if ( v163 && v163->fields.eventEndTitle )
  {
    v164 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v164 = TerminalPramsManager_TypeInfo;
    }
    v165 = &v164->static_fields->mQuestResultAfterEventRewardInfos;
    *v165 = (struct BattleDropItem_array *)v163;
    sub_B0D840(v165, v163);
    v162 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v162 )
    goto LABEL_1329;
  if ( !*v78 )
    goto LABEL_1330;
  v166 = TerminalPramsManager_TypeInfo;
  v167 = HIDWORD((*v78)->m_Items[2]);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v166 = TerminalPramsManager_TypeInfo;
  }
  v166->static_fields->panelEventPoint = v167;
  p_mResultEventPanelRewardInfos = &v166->static_fields->mResultEventPanelRewardInfos;
  *p_mResultEventPanelRewardInfos = 0LL;
  sub_B0D840(p_mResultEventPanelRewardInfos, 0LL);
  if ( !*p_max_length )
    goto LABEL_1329;
  if ( !*v78 )
    goto LABEL_1330;
  v169 = (*v78)->m_Items[19];
  if ( v169 && v169->fields.eventEndTitle )
  {
    v170 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v170 = TerminalPramsManager_TypeInfo;
    }
    v171 = &v170->static_fields->mResultEventPanelRewardInfos;
    *v171 = (struct BattleDropItem_array *)v169;
    sub_B0D840(v171, v169);
  }
  v172 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v172 = TerminalPramsManager_TypeInfo;
  }
  p_eventConquestInfos = &v172->static_fields->eventConquestInfos;
  *p_eventConquestInfos = 0LL;
  sub_B0D840(p_eventConquestInfos, 0LL);
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
  TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 0;
  v176 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1329;
  if ( !*v78 )
    goto LABEL_1330;
  v177 = (*v78)->m_Items[43];
  if ( v177 && v177->fields.eventEndTitle )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      p_static_fields = &TerminalPramsManager_TypeInfo->static_fields;
    }
    v178 = &(*p_static_fields)->eventConquestInfos;
    *v178 = (struct EventConquestInfo_array *)v177;
    sub_B0D840(v178, v177);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    TerminalPramsManager_TypeInfo->static_fields->eventConquestInfoDisp = 1;
    v176 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v176 )
    goto LABEL_1329;
  if ( !*v78 )
    goto LABEL_1330;
  if ( LOBYTE((*v78)->m_Items[46]) )
  {
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4211ABC )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v174);
      byte_4211ABC = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    LOBYTE(result->m_Items[19][1].klass) = 1;
    if ( !byte_4210864 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v174);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4210864 = 1;
    }
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE4(result->m_Items[19]->fields.oldUserEquip) )
    {
      if ( !v122 )
        goto LABEL_1330;
      v179 = v122->fields.questId;
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1330;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !result )
        goto LABEL_1330;
      v180 = WarMaster__getByLastQuestId((WarMaster_o *)result, v179, 0LL);
      if ( v180 )
      {
        id = v180->fields.id;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4211ABD )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v181);
          byte_4211ABD = 1;
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
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1330;
  v183 = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)result,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1330;
  result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)result,
                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !*p_max_length )
    goto LABEL_1329;
  if ( !*v78 )
    goto LABEL_1330;
  v467 = v122;
  if ( !result )
    goto LABEL_1330;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                                       &v476,
                                                       HIDWORD((*v78)->bounds),
                                                       (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)result & 1) == 0 )
    goto LABEL_638;
  if ( !*p_max_length )
    goto LABEL_1329;
  if ( !*v468 || !v183 )
    goto LABEL_1330;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidGorupMax(
                                                       v183,
                                                       HIDWORD((*v468)->bounds),
                                                       0LL);
  if ( (int)result >= 1 )
  {
    if ( !*p_max_length )
      goto LABEL_1329;
    if ( !*v468 )
      goto LABEL_1330;
    result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                         v183,
                                                         HIDWORD((*v468)->bounds),
                                                         0LL);
    v478 = 0;
    if ( !result )
      goto LABEL_1330;
    v185 = result->max_length;
    v186 = result;
    if ( v185 < 1 )
      goto LABEL_638;
    v187 = 0;
    while ( 1 )
    {
      if ( v187 >= (unsigned int)v185 )
        goto LABEL_1329;
      v188 = &v186->obj.klass + v187;
      v189 = v188[4];
      if ( !v189 )
        goto LABEL_1330;
      result = (BattleResultComponent_resultData_array *)EventRaidEntity__IsJumbleSingleRaid(
                                                           (EventRaidEntity_o *)v188[4],
                                                           0LL);
      if ( ((unsigned __int8)result & 1) != 0 )
      {
        if ( !*p_max_length )
          goto LABEL_1329;
        if ( !*v468 )
          goto LABEL_1330;
        RaidGroupDeadQuestId = EventRaidMaster__GetRaidGroupDeadQuestId(
                                 v183,
                                 HIDWORD((*v468)->bounds),
                                 (int32_t)v189->_1.namespaze,
                                 0LL);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4210852 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v190);
          byte_4210852 = 1;
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
          result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !result )
            goto LABEL_1330;
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
        goto LABEL_1329;
      if ( !*v468 )
        goto LABEL_1330;
      result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetRaidAliveQuestIds(
                                                           v183,
                                                           HIDWORD((*v468)->bounds),
                                                           HIDWORD(v189->_1.name),
                                                           0LL);
      QuestId_k__BackingField = 0;
      if ( !result )
        goto LABEL_1330;
      v192 = result->max_length;
      v193 = result;
      if ( v192 >= 1 )
      {
        v194 = 0;
        while ( 1 )
        {
          if ( v194 >= (unsigned int)v192 )
            goto LABEL_1329;
          v195 = *((_DWORD *)v193->m_Items + v194);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4210852 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v184);
            byte_4210852 = 1;
          }
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          }
          static_fields = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
          if ( v195 == static_fields->_QuestId_k__BackingField )
            break;
          v194 = QuestId_k__BackingField + 1;
          QuestId_k__BackingField = v194;
          v192 = v193->max_length;
          if ( v194 >= v192 )
            goto LABEL_433;
        }
        name_high = HIDWORD(v189->_1.name);
        if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          static_fields = TerminalPramsManager_TypeInfo->static_fields;
        }
        static_fields->clearBattleRaidId = name_high;
      }
LABEL_433:
      v187 = v478 + 1;
      v478 = v187;
      v185 = v186->max_length;
      if ( v187 >= v185 )
        goto LABEL_638;
    }
    v208 = TerminalPramsManager_TypeInfo;
    v209 = HIDWORD(v189->_1.name);
    goto LABEL_492;
  }
  result = (BattleResultComponent_resultData_array *)v476;
  if ( !v476 )
    goto LABEL_1330;
  result = (BattleResultComponent_resultData_array *)EventDetailEntity__isRaidDefeatCount(
                                                       (EventDetailEntity_o *)v476,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) == 0 )
  {
    result = (BattleResultComponent_resultData_array *)v476;
    if ( !v476 )
      goto LABEL_1330;
    result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventActivityPoint(
                                                         (EventDetailEntity_o *)v476,
                                                         0LL);
    if ( ((unsigned __int8)result & 1) != 0 )
    {
      if ( !*p_max_length )
        goto LABEL_1329;
      if ( !*v468 )
        goto LABEL_1330;
      v204 = (int32_t)(*v468)->m_Items[42];
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4211438 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v184);
        byte_4211438 = 1;
      }
      v205 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v205 = TerminalPramsManager_TypeInfo;
      }
      v205->static_fields->_EventActivityPointEffectState_k__BackingField = v204;
    }
    else
    {
      result = (BattleResultComponent_resultData_array *)v476;
      if ( !v476 )
        goto LABEL_1330;
      if ( EventDetailEntity__IsEventBoardGame((EventDetailEntity_o *)v476, 0LL) )
      {
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4211ADF )
        {
          result = (BattleResultComponent_resultData_array *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v184);
          byte_4211ADF = 1;
        }
        v206 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v206 = TerminalPramsManager_TypeInfo;
        }
        if ( v206->static_fields->_IsEventBoardGameDiceBtnActive_k__BackingField )
        {
          v207 = 0;
        }
        else
        {
          if ( !*p_max_length )
            goto LABEL_1329;
          if ( !*v468 )
            goto LABEL_1330;
          bounds_high = HIDWORD((*v468)->bounds);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsUserEventStatus = CondType__IsUserEventStatus(bounds_high, 7, 0LL);
          v206 = TerminalPramsManager_TypeInfo;
          v207 = IsUserEventStatus;
        }
        if ( (BYTE3(v206->vtable._0_Equals.methodPtr) & 4) != 0 && !v206->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v206);
        if ( !byte_4211ABA )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v184);
          byte_4211ABA = 1;
        }
        v222 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v222 = TerminalPramsManager_TypeInfo;
        }
        v222->static_fields->_IsPlayEventBoardGameDiceBtnActiveEffect_k__BackingField = v207;
      }
      else
      {
        result = (BattleResultComponent_resultData_array *)v476;
        if ( !v476 )
          goto LABEL_1330;
        result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsEventPanel(
                                                             (EventDetailEntity_o *)v476,
                                                             0LL);
        if ( ((unsigned __int8)result & 1) != 0 )
        {
          if ( !*p_max_length )
            goto LABEL_1329;
          v213 = &byte_4210000;
          v214 = &byte_4210000;
          if ( !*v468 )
            goto LABEL_1330;
          v215 = (*v468)->m_Items[10];
          v478 = 0;
          if ( !v215 )
            goto LABEL_1330;
          v216 = (int)v215->fields.eventEndTitle;
          if ( v216 >= 1 )
          {
            v217 = 0;
            v213 = &byte_4210000;
            while ( 1 )
            {
              if ( v217 >= (unsigned int)v216 )
                goto LABEL_1329;
              if ( !v476 )
                goto LABEL_1330;
              v218 = *((_QWORD *)&v215->fields.eventEndMessage + v217);
              if ( !v218 )
                goto LABEL_1330;
              if ( v476->fields.id == *(_DWORD *)(v218 + 24) )
                break;
              v478 = ++v217;
              if ( v217 >= v216 )
                goto LABEL_614;
            }
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_4211ADB )
            {
              sub_B0D8A4(&TerminalPramsManager_TypeInfo, v211);
              byte_4211ADB = 1;
            }
            v223 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v223 = TerminalPramsManager_TypeInfo;
            }
            if ( !v223->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
            {
              v224 = (EventSaveData_o *)sub_B0D974(EventSaveData_TypeInfo, v211, v212);
              EventSaveData___ctor(v224, 0LL);
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4211AB7 )
              {
                sub_B0D8A4(&TerminalPramsManager_TypeInfo, v225);
                byte_4211AB7 = 1;
              }
              v226 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v226 = TerminalPramsManager_TypeInfo;
              }
              p_BeforeEventSubmarineSaveData_k__BackingField = &v226->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
              *p_BeforeEventSubmarineSaveData_k__BackingField = v224;
              sub_B0D840(p_BeforeEventSubmarineSaveData_k__BackingField, v224);
              v223 = TerminalPramsManager_TypeInfo;
            }
            if ( (BYTE3(v223->vtable._0_Equals.methodPtr) & 4) != 0 && !v223->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v223);
            if ( !byte_4211ADB )
            {
              sub_B0D8A4(&TerminalPramsManager_TypeInfo, v211);
              byte_4211ADB = 1;
            }
            result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            }
            limitImageAnnounces = result->m_Items[19]->fields.limitImageAnnounces;
            if ( !limitImageAnnounces )
              goto LABEL_1330;
            LODWORD(limitImageAnnounces->bounds) = *(_DWORD *)(v218 + 24);
            if ( !byte_4211ADB )
            {
              sub_B0D8A4(&TerminalPramsManager_TypeInfo, v211);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
              byte_4211ADB = 1;
            }
            if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
            {
              j_il2cpp_runtime_class_init_0(result);
              result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
            }
            result = (BattleResultComponent_resultData_array *)result->m_Items[19]->fields.limitImageAnnounces;
            if ( !result )
              goto LABEL_1330;
            result = (BattleResultComponent_resultData_array *)EventSaveData__GetValueByArray(
                                                                 (EventSaveData_o *)result,
                                                                 0x2Cu,
                                                                 0LL);
            if ( result )
            {
              v229 = result->max_length;
              v230 = (System_String_o **)&result->m_Items[1];
              if ( v229 <= 1 )
                v230 = (System_String_o **)&StringLiteral_960/*"0"*/;
              v231 = *v230;
              v232 = v229 <= 2 ? (System_String_o **)&StringLiteral_960/*"0"*/ : (System_String_o **)&result->m_Items[2];
              v233 = *v232;
              v234 = v229 <= 3 ? &StringLiteral_6601/*"False"*/ : (__int64 *)&result->m_Items[3];
            }
            else
            {
              v233 = (System_String_o *)StringLiteral_960/*"0"*/;
              v234 = &StringLiteral_6601/*"False"*/;
              v231 = (System_String_o *)StringLiteral_960/*"0"*/;
            }
            if ( !v476 )
              goto LABEL_1330;
            v235 = v476->fields.id;
            isLastGoalPlayed = (System_String_o *)*v234;
            if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
            }
            result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__GetQuestReleaseList(
                                                                 v235,
                                                                 0LL);
            v238 = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)result;
            v239 = TerminalPramsManager___c_TypeInfo;
            if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
              v239 = TerminalPramsManager___c_TypeInfo;
            }
            v240 = v239->static_fields;
            _9__608_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v240->__9__608_0;
            if ( !_9__608_0 )
            {
              if ( (BYTE3(v239->vtable._0_Equals.methodPtr) & 4) != 0 && !v239->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v239);
                v240 = TerminalPramsManager___c_TypeInfo->static_fields;
              }
              v242 = (Il2CppObject *)v240->__9;
              _9__608_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                                     System_Predicate_QuestReleaseEntity__TypeInfo,
                                                                                     v236,
                                                                                     v237);
              System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                _9__608_0,
                v242,
                Method_TerminalPramsManager___c__ReceiveQuestEndResultInfo_b__608_0__,
                (const MethodInfo_2AF7E30 *)Method_System_Predicate_QuestReleaseEntity___ctor__);
              v243 = TerminalPramsManager___c_TypeInfo->static_fields;
              v243->__9__608_0 = (struct System_Predicate_QuestReleaseEntity__o *)_9__608_0;
              sub_B0D840(&v243->__9__608_0, _9__608_0);
            }
            if ( !v238 )
              goto LABEL_1330;
            if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                   v238,
                   (System_Predicate_T__o *)_9__608_0,
                   (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_QuestReleaseEntity__Find__) )
            {
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4210852 )
              {
                sub_B0D8A4(&TerminalPramsManager_TypeInfo, v244);
                byte_4210852 = 1;
              }
              v245 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v245 = TerminalPramsManager_TypeInfo;
              }
              QuestId_k__BackingField = v245->static_fields->_QuestId_k__BackingField;
              v231 = System_Int32__ToString((int32_t)&QuestId_k__BackingField, 0LL);
            }
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_4211ADB )
            {
              sub_B0D8A4(&TerminalPramsManager_TypeInfo, v244);
              byte_4211ADB = 1;
            }
            v246 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v246 = TerminalPramsManager_TypeInfo;
            }
            BeforeEventSubmarineSaveData_k__BackingField = v246->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
            v248 = System_Int64__ToString(v218 + 32, 0LL);
            if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
            }
            result = (BattleResultComponent_resultData_array *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_21651280(
                                                                 v248,
                                                                 v231,
                                                                 v233,
                                                                 isLastGoalPlayed,
                                                                 0LL);
            v213 = &byte_4210000;
            if ( !BeforeEventSubmarineSaveData_k__BackingField )
              goto LABEL_1330;
            BeforeEventSubmarineSaveData_k__BackingField->fields.value = (struct System_String_o *)result;
            sub_B0D840(&BeforeEventSubmarineSaveData_k__BackingField->fields.value, result);
            v214 = &byte_4210000;
          }
LABEL_614:
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4210852 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v211);
            byte_4210852 = 1;
          }
          v249 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v249 = TerminalPramsManager_TypeInfo;
          }
          v250 = v249->static_fields->_QuestId_k__BackingField;
          if ( !byte_4210853 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v211);
            v249 = TerminalPramsManager_TypeInfo;
            byte_4210853 = 1;
          }
          if ( (BYTE3(v249->vtable._0_Equals.methodPtr) & 4) != 0 && !v249->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v249);
            v249 = TerminalPramsManager_TypeInfo;
          }
          PhaseCnt_k__BackingField = v249->static_fields->_PhaseCnt_k__BackingField;
          if ( !v214[2148] )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v211);
            v249 = TerminalPramsManager_TypeInfo;
            v214[2148] = 1;
          }
          if ( (BYTE3(v249->vtable._0_Equals.methodPtr) & 4) != 0 && !v249->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v249);
            v249 = TerminalPramsManager_TypeInfo;
          }
          IsQuestClear_k__BackingField = v249->static_fields->_IsQuestClear_k__BackingField;
          if ( !v213[2132] )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v211);
            v249 = TerminalPramsManager_TypeInfo;
            v213[2132] = 1;
          }
          if ( (BYTE3(v249->vtable._0_Equals.methodPtr) & 4) != 0 && !v249->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v249);
            v249 = TerminalPramsManager_TypeInfo;
          }
          SubmarineSaveParamsManager__SaveClearQuestInfo(
            v250,
            PhaseCnt_k__BackingField,
            IsQuestClear_k__BackingField,
            v249->static_fields->_IsPhaseClear_k__BackingField,
            0LL);
        }
        else
        {
          result = (BattleResultComponent_resultData_array *)v476;
          if ( !v476 )
            goto LABEL_1330;
          if ( EventDetailEntity__IsEventRiverProgress((EventDetailEntity_o *)v476, 0LL) )
          {
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_4211ACA )
            {
              sub_B0D8A4(&TerminalPramsManager_TypeInfo, v184);
              byte_4211ACA = 1;
            }
            v219 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v219 = TerminalPramsManager_TypeInfo;
            }
            v219->static_fields->_isPlayRiverActionCheck_k__BackingField = 1;
          }
        }
      }
    }
    goto LABEL_638;
  }
  if ( !*p_max_length )
    goto LABEL_1329;
  if ( !*v468 )
    goto LABEL_1330;
  result = (BattleResultComponent_resultData_array *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                       v183,
                                                       HIDWORD((*v468)->bounds),
                                                       0LL);
  v478 = 0;
  if ( !result )
    goto LABEL_1330;
  v198 = result->max_length;
  v199 = result;
  if ( v198 >= 1 )
  {
    v200 = 0;
    while ( 1 )
    {
      if ( v200 >= (unsigned int)v198 || !*p_max_length )
        goto LABEL_1329;
      if ( !*v468 )
        goto LABEL_1330;
      v201 = v199->m_Items[v200];
      if ( !v201 )
        goto LABEL_1330;
      RaidDeadQuestId = EventRaidMaster__GetRaidDeadQuestId(v183, HIDWORD((*v468)->bounds), v201->fields.eventId, 0LL);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210852 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v184);
        byte_4210852 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v203 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( RaidDeadQuestId == v203->_QuestId_k__BackingField )
        break;
      v200 = v478 + 1;
      v478 = v200;
      v198 = v199->max_length;
      if ( v200 >= v198 )
        goto LABEL_638;
    }
    eventId = v201->fields.eventId;
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      v203 = TerminalPramsManager_TypeInfo->static_fields;
    }
    v203->clearBattleRaidId = eventId;
    if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !result )
      goto LABEL_1330;
    if ( clsQuestCheck__IsQuestClear((clsQuestCheck_o *)result, RaidDeadQuestId, 0, 0LL) )
    {
      v208 = TerminalPramsManager_TypeInfo;
      v209 = v201->fields.eventId;
LABEL_492:
      if ( (BYTE3(v208->vtable._0_Equals.methodPtr) & 4) != 0 && !v208->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v208);
        v208 = TerminalPramsManager_TypeInfo;
      }
      v208->static_fields->clearLastBattleRaidId = v209;
    }
  }
LABEL_638:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421086F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v184);
    byte_421086F = 1;
  }
  v253 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v255 = v467;
    v254 = v468;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v253 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v255 = v467;
    v254 = v468;
  }
  v253->static_fields->_IsWarBoardClear_k__BackingField = 0;
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v184);
    v253 = TerminalPramsManager_TypeInfo;
    byte_4210852 = 1;
  }
  if ( (BYTE3(v253->vtable._0_Equals.methodPtr) & 4) != 0 && !v253->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v253);
    v253 = TerminalPramsManager_TypeInfo;
  }
  if ( v253->static_fields->_QuestId_k__BackingField >= 1 )
  {
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1330;
    v257 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)result,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v256);
      byte_4210852 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v257 )
      goto LABEL_1330;
    result = (BattleResultComponent_resultData_array *)QuestMaster__getQuestEntity(
                                                         v257,
                                                         result->m_Items[19]->fields.battleId,
                                                         0LL);
    if ( !result )
      goto LABEL_1330;
    v258 = (int)result->m_Items[1];
    if ( !byte_421086F )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v184);
      byte_421086F = 1;
    }
    v253 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v253 = TerminalPramsManager_TypeInfo;
    }
    v253->static_fields->_IsWarBoardClear_k__BackingField = v258 == 7;
  }
  if ( (BYTE3(v253->vtable._0_Equals.methodPtr) & 4) != 0 && !v253->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v253);
  if ( !byte_4211AE0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v184);
    byte_4211AE0 = 1;
  }
  v259 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v259 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeRelease_k__BackingField = &v259->static_fields->_questClearCostumeRelease_k__BackingField;
  *p_questClearCostumeRelease_k__BackingField = 0LL;
  sub_B0D840(p_questClearCostumeRelease_k__BackingField, 0LL);
  if ( !*p_max_length )
    goto LABEL_1329;
  if ( !*v254 )
    goto LABEL_1330;
  v262 = (*v254)->m_Items[22];
  if ( v262 && v262->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_421085C )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v261);
      byte_421085C = 1;
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
        goto LABEL_1329;
      if ( !*v254 )
        goto LABEL_1330;
      v263 = (struct CostumeReleaseAnnounce_array *)(*v254)->m_Items[22];
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        j_il2cpp_runtime_class_init_0(result);
      if ( !byte_4211AE0 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v261);
        byte_4211AE0 = 1;
      }
      v264 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v264 = TerminalPramsManager_TypeInfo;
      }
      v265 = &v264->static_fields->_questClearCostumeRelease_k__BackingField;
      *v265 = v263;
      sub_B0D840(v265, v263);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421086B )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v261);
    byte_421086B = 1;
  }
  v266 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v266 = TerminalPramsManager_TypeInfo;
  }
  p_questClearCostumeGet_k__BackingField = &v266->static_fields->_questClearCostumeGet_k__BackingField;
  *p_questClearCostumeGet_k__BackingField = 0LL;
  sub_B0D840(p_questClearCostumeGet_k__BackingField, 0LL);
  if ( !*p_max_length )
    goto LABEL_1329;
  if ( !*v254 )
    goto LABEL_1330;
  v269 = (*v254)->m_Items[23];
  if ( v269 && v269->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_421086B )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v268);
      byte_421086B = 1;
    }
    v270 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v270 = TerminalPramsManager_TypeInfo;
    }
    v271 = &v270->static_fields->_questClearCostumeGet_k__BackingField;
    *v271 = (struct CostumeReleaseAnnounce_array *)v269;
    sub_B0D840(v271, v269);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AE1 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v268);
    byte_4211AE1 = 1;
  }
  v272 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v272 = TerminalPramsManager_TypeInfo;
  }
  v273 = v272->static_fields;
  v273->_eventPointWinReward_k__BackingField = 0LL;
  sub_B0D840(&v273->_eventPointWinReward_k__BackingField, 0LL);
  if ( !byte_4211AE2 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v274);
    byte_4211AE2 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v275 = v255 == 0LL;
  HIDWORD(result->m_Items[19]->fields.resultEventTowerRewardInfos) = 0;
  if ( v476 && v255 && *(&v476[1].fields.id + 1) == 4 )
  {
    if ( !v467 )
      goto LABEL_1330;
    v276 = v467->fields.questId;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1330;
    result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)result,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    if ( !result )
      goto LABEL_1330;
    v277 = (QuestGroupMaster_o *)result;
    GroupId = QuestGroupMaster__GetGroupId((QuestGroupMaster_o *)result, v276, 4, 0LL);
    v279 = TerminalPramsManager_TypeInfo;
    v280 = GroupId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v279 = TerminalPramsManager_TypeInfo;
    }
    v279->static_fields->joinGroupId = v280;
    v281 = QuestGroupMaster__GetGroupId(v277, v276, 3, 0LL);
    if ( !byte_4210864 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v274);
      byte_4210864 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( v281 >= 1 && BYTE4(result->m_Items[19]->fields.oldUserEquip) )
    {
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1330;
      v282 = (QuestReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)result,
                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !result )
        goto LABEL_1330;
      result = (BattleResultComponent_resultData_array *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)result,
                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointMaster___);
      if ( !*p_max_length )
        goto LABEL_1329;
      if ( !*v468 || !result )
        goto LABEL_1330;
      result = (BattleResultComponent_resultData_array *)EventPointMaster__GetEntity(
                                                           (EventPointMaster_o *)result,
                                                           v281,
                                                           HIDWORD((*v468)->bounds),
                                                           0LL);
      v283 = (EventPointEntity_o *)result;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !v283 )
        goto LABEL_1330;
      result = (BattleResultComponent_resultData_array *)EventPointEntity__IsGroupOnGroup1(
                                                           v283,
                                                           TerminalPramsManager_TypeInfo->static_fields->joinGroupId,
                                                           0LL);
      if ( !v282 )
        goto LABEL_1330;
      v284 = QuestReleaseMaster__EventPointWinActionType(v282, v276, (unsigned __int8)result & 1, 0LL);
      if ( !byte_4211AE2 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v274);
        byte_4211AE2 = 1;
      }
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      HIDWORD(result->m_Items[19]->fields.resultEventTowerRewardInfos) = v284;
      if ( !byte_4210D3E )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v274);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
        byte_4210D3E = 1;
      }
      if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      {
        j_il2cpp_runtime_class_init_0(result);
        result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      }
      v285 = (struct TerminalPramsManager_StaticFields *)result->m_Items[19];
      if ( v285->_eventPointWinType_k__BackingField )
      {
        if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
        {
          j_il2cpp_runtime_class_init_0(result);
          result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
          v285 = TerminalPramsManager_TypeInfo->static_fields;
        }
        v285->joinGroupId = -1;
      }
    }
    if ( !*p_max_length )
      goto LABEL_1329;
    if ( *v468 )
    {
      v286 = (*v468)->m_Items[20];
      if ( v286 )
      {
        v287 = v286->fields.eventEndTitle;
        if ( v287 )
        {
          if ( !(_DWORD)v287 )
            goto LABEL_1329;
          v288 = v286->fields.eventEndMessage;
          if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
            j_il2cpp_runtime_class_init_0(result);
          if ( !byte_4211AE1 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v274);
            byte_4211AE1 = 1;
          }
          v289 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v289 = TerminalPramsManager_TypeInfo;
          }
          v290 = v289->static_fields;
          v290->_eventPointWinReward_k__BackingField = (struct EventPointWinReward_o *)v288;
          sub_B0D840(&v290->_eventPointWinReward_k__BackingField, v288);
        }
      }
      goto LABEL_791;
    }
LABEL_1330:
    sub_B0D97C(result);
  }
LABEL_791:
  v291 = v476 == 0LL || v275;
  v292 = v468;
  if ( !v291 && *(&v476[1].fields.id + 1) == 6 )
  {
    if ( !v467 )
      goto LABEL_1330;
    v293 = v467->fields.questId;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AE3 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v274);
      byte_4211AE3 = 1;
    }
    v294 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v294 = TerminalPramsManager_TypeInfo;
    }
    v294->static_fields->_oldQuestIdForHeaderEvent_k__BackingField = v293;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AE4 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v274);
    byte_4211AE4 = 1;
  }
  v295 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v295 = TerminalPramsManager_TypeInfo;
  }
  v296 = v295->static_fields;
  v296->_eventRaceBoost_k__BackingField = 0LL;
  sub_B0D840(&v296->_eventRaceBoost_k__BackingField, 0LL);
  v298 = *(_QWORD *)p_max_length;
  if ( !(unsigned int)*(_QWORD *)p_max_length )
    goto LABEL_1329;
  if ( !*v468 )
    goto LABEL_1330;
  v299 = (*v468)->m_Items[21];
  if ( v299 && v299->fields.battleId >= 1 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AE4 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v297);
      byte_4211AE4 = 1;
    }
    v300 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v300 = TerminalPramsManager_TypeInfo;
    }
    v301 = v300->static_fields;
    v301->_eventRaceBoost_k__BackingField = (struct EventRaceBoostInfo_o *)v299;
    sub_B0D840(&v301->_eventRaceBoost_k__BackingField, v299);
    if ( !byte_4211AE5 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v297);
      byte_4211AE5 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfos = result->m_Items[19]->fields.resultEventBoardGameTokenRewardInfos;
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v297);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
      byte_4210852 = 1;
    }
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    {
      j_il2cpp_runtime_class_init_0(result);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !resultEventBoardGameTokenRewardInfos )
      goto LABEL_1330;
    *(&resultEventBoardGameTokenRewardInfos->max_length + 1) = result->m_Items[19]->fields.battleId;
    v298 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v298 )
    goto LABEL_1329;
  if ( !*v468 )
    goto LABEL_1330;
  v303 = (*v468)->m_Items[24];
  if ( v303 )
  {
    v304 = v303->fields.eventEndTitle;
    if ( v304 )
    {
      if ( !(_DWORD)v304 )
        goto LABEL_1329;
      v305 = (struct EventTowerReward_o *)v303->fields.eventEndMessage;
      if ( v305 )
      {
        if ( v305->fields.eventId >= 1 )
        {
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4210D3F )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v297);
            byte_4210D3F = 1;
          }
          v306 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v306 = TerminalPramsManager_TypeInfo;
          }
          p_eventTowerReward_k__BackingField = &v306->static_fields->_eventTowerReward_k__BackingField;
          *p_eventTowerReward_k__BackingField = v305;
          sub_B0D840(p_eventTowerReward_k__BackingField, v305);
          if ( !*p_max_length )
            goto LABEL_1329;
          if ( !*v468 )
            goto LABEL_1331;
          v309 = (*v468)->m_Items[25];
          if ( !byte_4210D40 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v308);
            byte_4210D40 = 1;
          }
          v310 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v310 = TerminalPramsManager_TypeInfo;
          }
          p_resultEventTowerRewardInfo_k__BackingField = &v310->static_fields->_resultEventTowerRewardInfo_k__BackingField;
          *p_resultEventTowerRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v309;
          sub_B0D840(p_resultEventTowerRewardInfo_k__BackingField, v309);
          v298 = *(_QWORD *)p_max_length;
        }
        goto LABEL_858;
      }
      goto LABEL_1330;
    }
  }
LABEL_858:
  if ( !(_DWORD)v298 )
    goto LABEL_1332;
  if ( !*v468 )
    goto LABEL_1331;
  v312 = (*v468)->m_Items[26];
  if ( v312 && v312->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210861 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v297);
      byte_4210861 = 1;
    }
    v313 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v313 = TerminalPramsManager_TypeInfo;
    }
    p_resultBoostItemRewardInfo_k__BackingField = &v313->static_fields->_resultBoostItemRewardInfo_k__BackingField;
    *p_resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v312;
    sub_B0D840(p_resultBoostItemRewardInfo_k__BackingField, v312);
    v298 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v298 )
    goto LABEL_1332;
  if ( !*v468 )
    goto LABEL_1331;
  v315 = (*v468)->m_Items[27];
  if ( v315 && v315->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210862 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v297);
      byte_4210862 = 1;
    }
    v316 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v316 = TerminalPramsManager_TypeInfo;
    }
    p_resultEventBoardGameTokenRewardInfo_k__BackingField = &v316->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
    *p_resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)v315;
    sub_B0D840(p_resultEventBoardGameTokenRewardInfo_k__BackingField, v315);
    v298 = *(_QWORD *)p_max_length;
  }
  if ( !(_DWORD)v298 )
    goto LABEL_1332;
  if ( !*v468 )
    goto LABEL_1331;
  v318 = (*v468)->m_Items[28];
  if ( v318 && v318->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210872 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v297);
      byte_4210872 = 1;
    }
    v319 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v319 = TerminalPramsManager_TypeInfo;
    }
    p_warClearReward_k__BackingField = &v319->static_fields->_warClearReward_k__BackingField;
    *p_warClearReward_k__BackingField = (struct WarClearReward_array *)v318;
    sub_B0D840(p_warClearReward_k__BackingField, v318);
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210D3A )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v297);
    byte_4210D3A = 1;
  }
  v321 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v321 = TerminalPramsManager_TypeInfo;
  }
  v322 = v321->static_fields;
  v322->_oldSuperBoss_k__BackingField = 0LL;
  sub_B0D840(&v322->_oldSuperBoss_k__BackingField, 0LL);
  if ( !byte_4210D3C )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v323);
    byte_4210D3C = 1;
  }
  v324 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v324 = TerminalPramsManager_TypeInfo;
  }
  v325 = v324->static_fields;
  v325->_oldPersonalBoss_k__BackingField = 0LL;
  sub_B0D840(&v325->_oldPersonalBoss_k__BackingField, 0LL);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v327 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v326);
    byte_4210852 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v327 )
    goto LABEL_1331;
  WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(v327, result->m_Items[19]->fields.battleId, 0LL);
  result = (BattleResultComponent_resultData_array *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !result )
    goto LABEL_1331;
  WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)result, WarID_ByQuestID, 0LL);
  if ( WarEntityByWarID )
    v330 = WarEntityByWarID->fields.eventId;
  else
    v330 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !result )
    goto LABEL_1331;
  result = (BattleResultComponent_resultData_array *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                       (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                                       &v474,
                                                       v330,
                                                       (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( v465 )
    goto LABEL_1337;
  if ( !*p_max_length )
    goto LABEL_1332;
  result = *v468;
  if ( !*v468 )
    goto LABEL_1331;
  result = (BattleResultComponent_resultData_array *)BattleResultComponent_resultData__checkResultDispFlag(
                                                       (BattleResultComponent_resultData_o *)result,
                                                       256,
                                                       0LL);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
LABEL_1337:
    v332 = *(_QWORD *)p_max_length;
    if ( !(unsigned int)*(_QWORD *)p_max_length )
      goto LABEL_1332;
    if ( !*v468 )
      goto LABEL_1331;
    if ( (*v468)->m_Items[41] )
    {
      result = (BattleResultComponent_resultData_array *)v474;
      if ( v474
        && (result = (BattleResultComponent_resultData_array *)EventDetailEntity__IsPersonalBoss(
                                                                 (EventDetailEntity_o *)v474,
                                                                 0LL),
            v332 = *(_QWORD *)p_max_length,
            ((unsigned __int8)result & 1) != 0) )
      {
        if ( !(_DWORD)v332 )
          goto LABEL_1332;
        if ( !*v468 )
          goto LABEL_1331;
        v333 = (*v468)->m_Items[41];
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4210D3C )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v331);
          byte_4210D3C = 1;
        }
        v334 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v334 = TerminalPramsManager_TypeInfo;
        }
        v335 = v334->static_fields;
        v335->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v333;
        p_oldPersonalBoss_k__BackingField = &v335->_oldPersonalBoss_k__BackingField;
      }
      else
      {
        if ( !(_DWORD)v332 )
          goto LABEL_1332;
        if ( !*v468 )
          goto LABEL_1331;
        v333 = (*v468)->m_Items[41];
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4210D3A )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v331);
          byte_4210D3A = 1;
        }
        v337 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v337 = TerminalPramsManager_TypeInfo;
        }
        v338 = v337->static_fields;
        v338->_oldSuperBoss_k__BackingField = (struct UserSuperBossEntity_array *)v333;
        p_oldPersonalBoss_k__BackingField = &v338->_oldSuperBoss_k__BackingField;
      }
      sub_B0D840(p_oldPersonalBoss_k__BackingField, v333);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210D3B )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v331);
    byte_4210D3B = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !result->m_Items[19]->fields.raceResult )
    goto LABEL_1338;
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4210D3B )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v331);
    byte_4210D3B = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  raceResult = result->m_Items[19]->fields.raceResult;
  if ( !raceResult )
    goto LABEL_1331;
  if ( *(_QWORD *)&raceResult->fields.addPoint )
  {
    v340 = 1;
  }
  else
  {
LABEL_1338:
    if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
      j_il2cpp_runtime_class_init_0(result);
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v331);
      byte_4210852 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v341 = BalanceConfig_TypeInfo;
    battleId = result->m_Items[19]->fields.battleId;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v341 = BalanceConfig_TypeInfo;
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    v340 = battleId == v341->static_fields->OrtFirstQuestId;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
    j_il2cpp_runtime_class_init_0(result);
  if ( !byte_4210881 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v331);
    byte_4210881 = 1;
  }
  v343 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v343 = TerminalPramsManager_TypeInfo;
  }
  v343->static_fields->_isIncomingCall_k__BackingField = v340;
  if ( v474 && EventDetailEntity__IsPersonalBoss((EventDetailEntity_o *)v474, 0LL) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v344);
      byte_4210852 = 1;
    }
    v345 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v345 = TerminalPramsManager_TypeInfo;
    }
    v346 = BalanceConfig_TypeInfo;
    v347 = v345->static_fields->_QuestId_k__BackingField;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v346 = BalanceConfig_TypeInfo;
    }
    if ( v347 == v346->static_fields->OrtLateQuestId )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210853 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v344);
        byte_4210853 = 1;
      }
      v348 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v348 = TerminalPramsManager_TypeInfo;
      }
      v349 = BalanceConfig_TypeInfo;
      v350 = v348->static_fields->_PhaseCnt_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v349 = BalanceConfig_TypeInfo;
      }
      if ( v350 + 1 == v349->static_fields->OrtLatePhaseBreak )
        goto LABEL_1339;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210853 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v344);
        byte_4210853 = 1;
      }
      v351 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v351 = TerminalPramsManager_TypeInfo;
      }
      v352 = BalanceConfig_TypeInfo;
      v353 = v351->static_fields->_PhaseCnt_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v352 = BalanceConfig_TypeInfo;
      }
      if ( v353 + 1 == v352->static_fields->OrtLatePhaseDead )
      {
LABEL_1339:
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v354 = (UserSuperBossMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        result = (BattleResultComponent_resultData_array *)NetworkManager__get_UserId(0LL);
        v355 = result;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        }
        if ( !v354 )
          goto LABEL_1331;
        if ( UserSuperBossMaster__TryGetEntity(
               v354,
               &v473,
               (int64_t)v355,
               v330,
               BalanceConfig_TypeInfo->static_fields->OrtThirdFormId,
               0LL) )
        {
          result = (BattleResultComponent_resultData_array *)sub_B0D8BC(UserSuperBossEntity___TypeInfo, 1LL);
          if ( !result )
            goto LABEL_1331;
          v356 = v473;
          v357 = result;
          if ( v473 )
          {
            result = (BattleResultComponent_resultData_array *)sub_B0D964(v473, result->obj.klass->_1.element_class);
            if ( !result )
              goto LABEL_1334;
          }
          if ( !v357->max_length )
            goto LABEL_1332;
          v357->m_Items[0] = (BattleResultComponent_resultData_o *)v356;
          sub_B0D840(v357->m_Items, v356);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4210D3C )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v358);
            byte_4210D3C = 1;
          }
          v359 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v359 = TerminalPramsManager_TypeInfo;
          }
          v360 = v359->static_fields;
          v360->_oldPersonalBoss_k__BackingField = (struct UserSuperBossEntity_array *)v357;
          sub_B0D840(&v360->_oldPersonalBoss_k__BackingField, v357);
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
    v362 = TalkResumeInfo;
    result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !result )
      goto LABEL_1331;
    v364 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)result,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v363);
      byte_4210852 = 1;
    }
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    }
    if ( !v364 )
      goto LABEL_1331;
    ScriptQuestId = QuestMaster__getScriptQuestId(v364, result->m_Items[19]->fields.battleId, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !byte_4210853 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v366);
      byte_4210853 = 1;
    }
    v368 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v368 = TerminalPramsManager_TypeInfo;
    }
    v369 = v368->static_fields->_PhaseCnt_k__BackingField;
    winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v362, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd2(
                                                         ScriptQuestId,
                                                         v369 + 1,
                                                         winResult,
                                                         0LL);
    if ( !Instance )
      goto LABEL_1331;
    v292 = v468;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)Instance, (System_String_o *)result, 0LL) )
      goto LABEL_1098;
    v372 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210853 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v371);
      byte_4210853 = 1;
    }
    v373 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v373 = TerminalPramsManager_TypeInfo;
    }
    v374 = v373->static_fields->_PhaseCnt_k__BackingField;
    v375 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v362, 0LL);
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    result = (BattleResultComponent_resultData_array *)ScriptManager__GetScriptName_BattleEnd(
                                                         ScriptQuestId,
                                                         v374 + 1,
                                                         v375,
                                                         0LL);
    if ( !v372 )
      goto LABEL_1331;
    if ( ScriptManager__IsExistScriptFile((ScriptManager_o *)v372, (System_String_o *)result, 0LL) )
    {
LABEL_1098:
      v376 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v376 = TerminalPramsManager_TypeInfo;
      }
      p_lastPlayBgmName = &v376->static_fields->lastPlayBgmName;
      v378 = StringLiteral_1/*""*/;
      *p_lastPlayBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B0D840(p_lastPlayBgmName, v378);
      TerminalPramsManager__LastPlayBgmNameSave_SaveData(v379);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1331;
  v381 = (QuestPhaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)result,
                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v380);
    byte_4210852 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  v382 = result->m_Items[19]->fields.battleId;
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v380);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
    byte_4210853 = 1;
  }
  if ( (BYTE3(result->m_Items[34]) & 4) != 0 && !LODWORD(result->m_Items[24]) )
  {
    j_il2cpp_runtime_class_init_0(result);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v381 )
    goto LABEL_1331;
  QuestPhaseMaster__TryGetEntity(v381, &v479, v382, result->m_Items[19]->fields.eventId + 1, 0LL);
  if ( !byte_4210D2D )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v383);
    byte_4210D2D = 1;
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
    if ( !byte_4210D2D )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v383);
      byte_4210D2D = 1;
    }
    v384 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v384 = TerminalPramsManager_TypeInfo;
    }
    result = (BattleResultComponent_resultData_array *)v384->static_fields->_SpecifiedChangeSceneInfo_k__BackingField;
    if ( !result )
      goto LABEL_1331;
    SpecifiedSceneInfo__InitParameter((SpecifiedSceneInfo_o *)result, 0LL);
  }
  if ( !*p_max_length )
    goto LABEL_1332;
  if ( !*v292 )
LABEL_1331:
    sub_B0D97C(result);
  v385 = HIDWORD((*v292)->bounds);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v383);
    byte_4210852 = 1;
  }
  v386 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v386 = TerminalPramsManager_TypeInfo;
  }
  v387 = v386->static_fields->_QuestId_k__BackingField;
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v383);
    v386 = TerminalPramsManager_TypeInfo;
    byte_4210853 = 1;
  }
  if ( (BYTE3(v386->vtable._0_Equals.methodPtr) & 4) != 0 && !v386->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v386);
    v386 = TerminalPramsManager_TypeInfo;
  }
  SpecifiedSceneInfo = QuestPhaseMaster__GetSpecifiedSceneInfo(
                         v381,
                         v385,
                         v387,
                         v386->static_fields->_PhaseCnt_k__BackingField + 1,
                         0LL);
  if ( !byte_4210D2E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v388);
    byte_4210D2E = 1;
  }
  v390 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v390 = TerminalPramsManager_TypeInfo;
  }
  v391 = v390->static_fields;
  v391->_SpecifiedChangeSceneInfo_k__BackingField = SpecifiedSceneInfo;
  sub_B0D840(&v391->_SpecifiedChangeSceneInfo_k__BackingField, SpecifiedSceneInfo);
  v392 = TerminalPramsManager_TypeInfo;
  TerminalPramsManager_TypeInfo->static_fields->TipsArchiveEventUiId = 0;
  v392->static_fields->TipsArchiveCurrrentTab = 0;
  TerminalPramsManager__InitTipsArchiveScrollValueList(v393);
  if ( !*p_max_length )
    goto LABEL_1332;
  if ( !*v292 )
    goto LABEL_1331;
  v395 = (int32_t)(*v292)->m_Items[52];
  v396 = TerminalPramsManager_TypeInfo;
  if ( v395 )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_421085E )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v394);
      byte_421085E = 1;
    }
    v396 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v396 = TerminalPramsManager_TypeInfo;
    }
    v396->static_fields->_EventMuralId_k__BackingField = v395;
  }
  if ( (BYTE3(v396->vtable._0_Equals.methodPtr) & 4) != 0 && !v396->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v396);
    v396 = TerminalPramsManager_TypeInfo;
  }
  p_eventHarvestGrowthInfo = &v396->static_fields->eventHarvestGrowthInfo;
  *p_eventHarvestGrowthInfo = 0LL;
  sub_B0D840(p_eventHarvestGrowthInfo, 0LL);
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v398);
    byte_4210852 = 1;
  }
  v399 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v399 = TerminalPramsManager_TypeInfo;
  }
  result = (BattleResultComponent_resultData_array *)QuestPhaseMaster__GetEntity(
                                                       v381,
                                                       v399->static_fields->_QuestId_k__BackingField,
                                                       1,
                                                       0LL);
  if ( !result )
    goto LABEL_1331;
  v400 = (QuestPhaseEntity_o *)result;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(
                     (QuestPhaseEntity_o *)result,
                     (System_String_o *)StringLiteral_19169/*"harvestGrowthBeforeQuestId"*/,
                     -1,
                     0LL);
  v402 = QuestPhaseEntity__getScriptIntParam(v400, (System_String_o *)StringLiteral_19168/*"harvestGrowthAfterQuestId"*/, -1, 0LL);
  if ( ScriptIntParam >= 1 )
  {
    v405 = v402;
    if ( v402 >= 1 )
    {
      v406 = (EventHarvestGrowthInfo_o *)sub_B0D974(EventHarvestGrowthInfo_TypeInfo, v403, v404);
      EventHarvestGrowthInfo___ctor(v406, 0LL);
      if ( !v406 )
        goto LABEL_1331;
      v406->fields.questId = v400->fields.questId;
      phase = v400->fields.phase;
      v406->fields.afterQuestId = v405;
      v406->fields.phase = phase;
      v406->fields.beforeQuestId = ScriptIntParam;
      v408 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v408 = TerminalPramsManager_TypeInfo;
      }
      v409 = &v408->static_fields->eventHarvestGrowthInfo;
      *v409 = v406;
      sub_B0D840(v409, v406);
    }
  }
  result = (BattleResultComponent_resultData_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_1331;
  v411 = (QuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)result,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v410);
    byte_4210852 = 1;
  }
  result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    result = (BattleResultComponent_resultData_array *)TerminalPramsManager_TypeInfo;
  }
  if ( !v411 )
    goto LABEL_1331;
  QuestEntity = QuestMaster__getQuestEntity(v411, result->m_Items[19]->fields.battleId, 0LL);
  if ( QuestEntity )
  {
    v414 = QuestEntity;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v413);
      byte_4210852 = 1;
    }
    v415 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v415 = TerminalPramsManager_TypeInfo;
    }
    if ( QuestPhaseMaster__IsAreaImproveQuest(v381, v415->static_fields->_QuestId_k__BackingField, 0LL) )
    {
      SpotId = QuestEntity__getSpotId(v414, 0LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      result = (BattleResultComponent_resultData_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventCooltimeRewardMaster___);
      if ( *p_max_length )
      {
        if ( !*v292 || !result )
          goto LABEL_1331;
        CurrentLevelEntity = UserEventCooltimeRewardMaster__GetCurrentLevelEntity(
                               (UserEventCooltimeRewardMaster_o *)result,
                               HIDWORD((*v292)->bounds),
                               SpotId,
                               0LL);
        if ( CurrentLevelEntity )
        {
          v418 = CurrentLevelEntity;
          v419 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v419 = TerminalPramsManager_TypeInfo;
          }
          eventAreaImproveResultInfo = v419->static_fields->eventAreaImproveResultInfo;
          if ( eventAreaImproveResultInfo )
          {
            if ( (BYTE3(v419->vtable._0_Equals.methodPtr) & 4) != 0 && !v419->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v419);
              eventAreaImproveResultInfo = TerminalPramsManager_TypeInfo->static_fields->eventAreaImproveResultInfo;
              if ( !eventAreaImproveResultInfo )
                goto LABEL_1331;
            }
            eventAreaImproveResultInfo->fields.afterLevel = v418->fields.lv;
          }
        }
        goto LABEL_1216;
      }
LABEL_1332:
      v461 = sub_B0D9A8(result);
      sub_B0D948(v461, 0LL);
    }
  }
LABEL_1216:
  result = (BattleResultComponent_resultData_array *)v479;
  if ( v479 )
  {
    result = (BattleResultComponent_resultData_array *)QuestPhaseEntity__GetMoveSceneInfo(v479, 0LL);
    if ( !result )
      goto LABEL_1331;
    if ( *(_QWORD *)&result->max_length )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210852 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v413);
        byte_4210852 = 1;
      }
      v421 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v421 = TerminalPramsManager_TypeInfo;
      }
      v478 = v421->static_fields->_QuestId_k__BackingField;
      v423 = System_Int32__ToString((int32_t)&v478, 0LL);
      if ( !byte_4210853 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v422);
        byte_4210853 = 1;
      }
      v424 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v424 = TerminalPramsManager_TypeInfo;
      }
      v478 = v424->static_fields->_PhaseCnt_k__BackingField + 1;
      v425 = System_Int32__ToString((int32_t)&v478, 0LL);
      v427 = System_String__Concat_43852188(v423, (System_String_o *)StringLiteral_705/*","*/, v425, 0LL);
      if ( !byte_4211AC9 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v426);
        byte_4211AC9 = 1;
      }
      v428 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v428 = TerminalPramsManager_TypeInfo;
      }
      p_SceneMoveQuestClearedInfo_k__BackingField = &v428->static_fields->_SceneMoveQuestClearedInfo_k__BackingField;
      *p_SceneMoveQuestClearedInfo_k__BackingField = v427;
      sub_B0D840(p_SceneMoveQuestClearedInfo_k__BackingField, v427);
    }
  }
  if ( !*p_max_length )
    goto LABEL_1332;
  if ( !*v292 )
    goto LABEL_1331;
  v430 = (*v292)->m_Items[47];
  if ( v430 && v430->fields.eventEndTitle )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210866 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v413);
      byte_4210866 = 1;
    }
    v431 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v431 = TerminalPramsManager_TypeInfo;
    }
    p_limitImageAnnounces_k__BackingField = &v431->static_fields->_limitImageAnnounces_k__BackingField;
    *p_limitImageAnnounces_k__BackingField = (struct LimitImageAnnounce_array *)v430;
    sub_B0D840(p_limitImageAnnounces_k__BackingField, v430);
  }
  v434 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 7LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v433);
    byte_4210852 = 1;
  }
  v435 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v436 = &byte_4210000;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v435 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v436 = &byte_4210000;
  }
  v478 = v435->static_fields->_QuestId_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v478, 0LL);
  if ( !v434 )
    goto LABEL_1331;
  v437 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D964(result, v434->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1334;
  }
  if ( !v434->max_length )
    goto LABEL_1332;
  v434->m_Items[0] = (System_String_o *)v437;
  sub_B0D840(v434->m_Items, v437);
  result = (BattleResultComponent_resultData_array *)StringLiteral_705/*","*/;
  if ( StringLiteral_705/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D964(StringLiteral_705/*","*/, v434->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1334;
    v438 = StringLiteral_705/*","*/;
  }
  else
  {
    v438 = 0LL;
  }
  if ( v434->max_length <= 1 )
    goto LABEL_1332;
  v434->m_Items[1] = (System_String_o *)v438;
  sub_B0D840(&v434->m_Items[1], v438);
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v439);
    byte_4210853 = 1;
  }
  v440 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v440 = TerminalPramsManager_TypeInfo;
  }
  v478 = v440->static_fields->_PhaseCnt_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Int32__ToString((int32_t)&v478, 0LL);
  v441 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D964(result, v434->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1334;
  }
  if ( v434->max_length <= 2 )
    goto LABEL_1332;
  v434->m_Items[2] = (System_String_o *)v441;
  sub_B0D840(&v434->m_Items[2], v441);
  result = (BattleResultComponent_resultData_array *)StringLiteral_705/*","*/;
  if ( StringLiteral_705/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D964(StringLiteral_705/*","*/, v434->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1334;
    v442 = StringLiteral_705/*","*/;
  }
  else
  {
    v442 = 0LL;
  }
  if ( v434->max_length <= 3 )
    goto LABEL_1332;
  v434->m_Items[3] = (System_String_o *)v442;
  sub_B0D840(&v434->m_Items[3], v442);
  if ( !v436[2148] )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v443);
    v436[2148] = 1;
  }
  v444 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v444 = TerminalPramsManager_TypeInfo;
  }
  v472[0] = v444->static_fields->_IsQuestClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v472, 0LL);
  v445 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D964(result, v434->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1334;
  }
  if ( v434->max_length <= 4 )
    goto LABEL_1332;
  v434->m_Items[4] = (System_String_o *)v445;
  sub_B0D840(&v434->m_Items[4], v445);
  result = (BattleResultComponent_resultData_array *)StringLiteral_705/*","*/;
  if ( StringLiteral_705/*","*/ )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D964(StringLiteral_705/*","*/, v434->obj.klass->_1.element_class);
    if ( !result )
      goto LABEL_1334;
    v446 = StringLiteral_705/*","*/;
  }
  else
  {
    v446 = 0LL;
  }
  if ( v434->max_length <= 5 )
    goto LABEL_1332;
  v434->m_Items[5] = (System_String_o *)v446;
  sub_B0D840(&v434->m_Items[5], v446);
  if ( !byte_4210854 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v447);
    byte_4210854 = 1;
  }
  v448 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v448 = TerminalPramsManager_TypeInfo;
  }
  v472[0] = v448->static_fields->_IsPhaseClear_k__BackingField;
  result = (BattleResultComponent_resultData_array *)System_Boolean__ToString((bool)v472, 0LL);
  v449 = result;
  if ( result )
  {
    result = (BattleResultComponent_resultData_array *)sub_B0D964(result, v434->obj.klass->_1.element_class);
    if ( !result )
    {
LABEL_1334:
      v463 = sub_B0D99C();
      sub_B0D948(v463, 0LL);
    }
  }
  if ( v434->max_length <= 6 )
    goto LABEL_1332;
  v434->m_Items[6] = (System_String_o *)v449;
  sub_B0D840(&v434->m_Items[6], v449);
  v450 = System_String__Concat_43930028(v434, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_16336/*"afterActionBk"*/, v450, 0LL);
  TerminalPramsManager__SaveClearDatas(resulta, v451);
  TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(v452);
  TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(v453);
  TerminalPramsManager__IsPlayTerminalEffectDisappear_SaveData(v454);
  TerminalPramsManager__IsPlayTerminalEffectDisappearWarId_SaveData(v455);
  if ( TerminalPramsManager__IsTerminalEffectNT2BoardOpen(v456) )
  {
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210841 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v457);
      byte_4210841 = 1;
    }
    v458 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v458 = TerminalPramsManager_TypeInfo;
    }
    v458->static_fields->_WarId_k__BackingField = 0;
    if ( !byte_4210848 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v457);
      byte_4210848 = 1;
    }
    v459 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v459 = TerminalPramsManager_TypeInfo;
    }
    v459->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4210849 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v457);
      v459 = TerminalPramsManager_TypeInfo;
      byte_4210849 = 1;
    }
    if ( (BYTE3(v459->vtable._0_Equals.methodPtr) & 4) != 0 && !v459->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v459);
      v459 = TerminalPramsManager_TypeInfo;
    }
    v459->static_fields->_IsMapReturnFolder_k__BackingField = 0;
    if ( !byte_4211ABE )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v457);
      v459 = TerminalPramsManager_TypeInfo;
      byte_4211ABE = 1;
    }
    if ( (BYTE3(v459->vtable._0_Equals.methodPtr) & 4) != 0 && !v459->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v459);
      v459 = TerminalPramsManager_TypeInfo;
    }
    v459->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData((const MethodInfo *)v459);
  }
}


void __fastcall TerminalPramsManager__ResetBlankEarthSpotInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0

  if ( (byte_4211A59 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A59 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AA9 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AA9 = 1;
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
  TerminalPramsManager_c *v2; // x0
  struct BattleScriptRootComponent_TalkScriptInfo_o **p_TalkScriptInfo_k__BackingField; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0

  if ( (byte_4211A5F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A5F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AAA )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AAA = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_QuestMessageScriptQuestId_k__BackingField = -1;
  if ( !byte_4211AAB )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4211AAB = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_QuestMessageScriptQuestPhase_k__BackingField = -1;
  if ( !byte_4211AAC )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4211AAC = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  p_TalkScriptInfo_k__BackingField = &v2->static_fields->_TalkScriptInfo_k__BackingField;
  *p_TalkScriptInfo_k__BackingField = 0LL;
  sub_B0D840(p_TalkScriptInfo_k__BackingField, 0LL);
  if ( !byte_4211AAD )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    byte_4211AAD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsPlayScriptWithMap_k__BackingField = 0;
}


void __fastcall TerminalPramsManager__SaveClearDatas(
        BattleResultComponent_resultData_array *result,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x22
  TerminalPramsManager_c *v8; // x0
  _BOOL8 v9; // x0
  BattleResultComponent_resultData_o *v10; // x0
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  struct TerminalPramsManager_StaticFields *v13; // x8
  _BOOL4 IsPhaseClear_k__BackingField; // w21
  _BOOL4 IsDispOnly_k__BackingField; // w27
  struct TerminalPramsManager_StaticFields *v16; // x8
  _BOOL4 IsWarBoardClear_k__BackingField; // w25
  _BOOL4 IsOrdealCallWarClear_k__BackingField; // w24
  QuestRewardInfo_array *v19; // x23
  bool isWarBoardClear; // w19
  bool v21; // zf
  int32_t eventMuralId; // w21
  bool v23; // w26
  TerminalPramsManager_ClearData_o *v24; // x25
  __int64 v25; // x1
  TerminalPramsManager_c *v26; // x0
  TerminalPramsManager_ClearData_c *v27; // x0
  System_String_o *SAVEKEY_CLEAR_REWARD_DISP; // x19
  System_String_o *v29; // x1
  __int64 v30; // x0
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

  if ( (byte_4211A99 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_ClearData_TypeInfo, method);
    sub_B0D8A4(&JsonManager_TypeInfo, v4);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4211A99 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  mQuestRewardInfos = v6->static_fields->mQuestRewardInfos;
  if ( result )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v6);
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
      byte_4210852 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v9 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v8->static_fields->_QuestId_k__BackingField, method);
    if ( v9 )
    {
      if ( !result->max_length )
      {
        v30 = sub_B0D9A8(v9);
        sub_B0D948(v30, 0LL);
      }
      v10 = result->m_Items[0];
      if ( !v10 )
        sub_B0D97C(0LL);
      if ( BattleResultComponent_resultData__checkResultDispFlag(v10, 2048, 0LL) )
        mQuestRewardInfos = 0LL;
    }
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  mQuestClearHeroineInfo = static_fields->mQuestClearHeroineInfo;
  mQuestPhaseRewardInfos = static_fields->mQuestPhaseRewardInfos;
  if ( !byte_4210864 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210864 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  IsQuestClear_k__BackingField = v11->static_fields->_IsQuestClear_k__BackingField;
  if ( !byte_4210854 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210854 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v13 = v11->static_fields;
  IsPhaseClear_k__BackingField = v13->_IsPhaseClear_k__BackingField;
  clearLastBattleRaidId = v13->clearLastBattleRaidId;
  clearBattleRaidId = v13->clearBattleRaidId;
  groupjoin = v13->joinGroupId;
  if ( !byte_4210D39 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210D39 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  oldSuperBoss = v11->static_fields->_oldSuperBoss_k__BackingField;
  if ( !byte_4210D3B )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210D3B = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  oldPersonalBoss = v11->static_fields->_oldPersonalBoss_k__BackingField;
  if ( !byte_4211AE6 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4211AE6 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  evpWinReward = v11->static_fields->_eventPointWinReward_k__BackingField;
  if ( !byte_4210D3E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210D3E = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  evpWinType = v11->static_fields->_eventPointWinType_k__BackingField;
  if ( !byte_4211AE5 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4211AE5 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  evRace = v11->static_fields->_eventRaceBoost_k__BackingField;
  if ( !byte_4210863 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210863 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeRelease = v11->static_fields->_questClearCostumeRelease_k__BackingField;
  if ( !byte_421085B )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_421085B = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  questClearCostumeGet = v11->static_fields->_questClearCostumeGet_k__BackingField;
  if ( !byte_421085F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_421085F = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  evTowerReward = v11->static_fields->_eventTowerReward_k__BackingField;
  if ( !byte_4211AE7 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4211AE7 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  resultEvTowerRewardInfo = v11->static_fields->_resultEventTowerRewardInfo_k__BackingField;
  if ( !byte_4210851 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210851 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  IsDispOnly_k__BackingField = v11->static_fields->_IsDispOnly_k__BackingField;
  if ( !byte_4210871 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210871 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  warClearRewardIn = v11->static_fields->_warClearReward_k__BackingField;
  if ( !byte_4211AE8 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4211AE8 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  eventActivityPointEffectState = v11->static_fields->_EventActivityPointEffectState_k__BackingField;
  if ( !byte_421085C )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_421085C = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v16 = v11->static_fields;
  IsWarBoardClear_k__BackingField = v16->_IsWarBoardClear_k__BackingField;
  questResultAfterEventRewardInfos = v16->mQuestResultAfterEventRewardInfos;
  resultEventPanelRewardInfos = v16->mResultEventPanelRewardInfos;
  panelEventPoint = v16->panelEventPoint;
  if ( !byte_4210865 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210865 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  limitImageAnnounces = v11->static_fields->_limitImageAnnounces_k__BackingField;
  if ( !byte_4210859 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210859 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  IsOrdealCallWarClear_k__BackingField = v11->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_421085D )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
    byte_421085D = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 )
  {
    v19 = mQuestRewardInfos;
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = TerminalPramsManager_TypeInfo;
    }
  }
  else
  {
    v19 = mQuestRewardInfos;
  }
  isWarBoardClear = IsWarBoardClear_k__BackingField;
  v21 = !IsPhaseClear_k__BackingField;
  eventMuralId = v11->static_fields->_EventMuralId_k__BackingField;
  v23 = !v21;
  v24 = (TerminalPramsManager_ClearData_o *)sub_B0D974(TerminalPramsManager_ClearData_TypeInfo, method, v2);
  TerminalPramsManager_ClearData___ctor_18835236(
    v24,
    mQuestClearHeroineInfo,
    v19,
    mQuestPhaseRewardInfos,
    IsQuestClear_k__BackingField,
    v23,
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
  if ( !byte_4211AE9 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v25);
    byte_4211AE9 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  v26->static_fields->_isQuestRewardSetted_k__BackingField = 1;
  v27 = TerminalPramsManager_ClearData_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_ClearData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_ClearData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_ClearData_TypeInfo);
    v27 = TerminalPramsManager_ClearData_TypeInfo;
  }
  SAVEKEY_CLEAR_REWARD_DISP = v27->static_fields->SAVEKEY_CLEAR_REWARD_DISP;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v29 = JsonManager__toJson((Il2CppObject *)v24, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString(SAVEKEY_CLEAR_REWARD_DISP, v29, 0LL);
}


void __fastcall TerminalPramsManager__SaveEventRaidDefeatedEffectInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  EventRaidDefeatedEffectInfo_o *EventRaidDefeatedEffectInfo_k__BackingField; // x0
  System_String_o *v5; // x0

  if ( (byte_4211A9F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v2);
    byte_4211A9F = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AEB )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AEB = 1;
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
    sub_B0D97C(0LL);
  v5 = EventRaidDefeatedEffectInfo__ConvertToStringData(EventRaidDefeatedEffectInfo_k__BackingField, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11587/*"SAVEKEY_EventRaidDefeatedEffectInfo"*/, v5, 0LL);
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

  if ( (byte_4211A6B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_13667/*"TerminalPhaseCnt"*/, v2);
    sub_B0D8A4(&StringLiteral_13670/*"TerminalQuestId"*/, v3);
    byte_4211A6B = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4210852 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13670/*"TerminalQuestId"*/,
    v4->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4210853 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13667/*"TerminalPhaseCnt"*/,
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

  if ( (byte_4211AA3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v7);
    sub_B0D8A4(&string_TypeInfo, v8);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/, v10);
    sub_B0D8A4(&StringLiteral_23704/*"{0}:{1}"*/, v11);
    sub_B0D8A4(&StringLiteral_705/*","*/, v12);
    byte_4211AA3 = 1;
  }
  memset(&v22, 0, 32);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AED )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AED = 1;
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
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_int__int___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v21,
    QuestRandomGroupList_k__BackingField,
    (const MethodInfo_2E69DC8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
  *(_OWORD *)&v22.fields.dictionary = v21[0];
  v22.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v21[1];
  while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
            &v22,
            (const MethodInfo_280E1C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
  {
    key = (int)v22.fields.current.fields.key;
    key_high = HIDWORD(v22.fields.current.fields.key);
    if ( !System_String__IsNullOrEmpty(Empty, 0LL) )
      Empty = System_String__Concat_43849904(Empty, (System_String_o *)StringLiteral_705/*","*/, 0LL);
    LODWORD(v21[0]) = key;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v21);
    v23 = key_high;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v20 = System_String__Format_43845440((System_String_o *)StringLiteral_23704/*"{0}:{1}"*/, v18, v19, 0LL);
    Empty = System_String__Concat_43849904(Empty, v20, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
    &v22,
    (const MethodInfo_280E30C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11596/*"SAVEKEY_QuestRandomGroupList"*/, Empty, 0LL);
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

  if ( (byte_4211A69 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_13660/*"TerminalEndTime"*/, v2);
    sub_B0D8A4(&StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/, v3);
    sub_B0D8A4(&StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/, v4);
    sub_B0D8A4(&StringLiteral_13661/*"TerminalEventDailyPointEventId"*/, v5);
    sub_B0D8A4(&StringLiteral_13667/*"TerminalPhaseCnt"*/, v6);
    sub_B0D8A4(&StringLiteral_13675/*"TerminalTimeStatusEventId"*/, v7);
    sub_B0D8A4(&StringLiteral_13659/*"TerminalDispState"*/, v8);
    sub_B0D8A4(&StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/, v9);
    sub_B0D8A4(&StringLiteral_13662/*"TerminalIsDoneShortcut"*/, v10);
    sub_B0D8A4(&StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v11);
    sub_B0D8A4(&StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/, v12);
    sub_B0D8A4(&StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/, v13);
    sub_B0D8A4(&StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/, v14);
    sub_B0D8A4(&StringLiteral_13670/*"TerminalQuestId"*/, v15);
    sub_B0D8A4(&StringLiteral_11602/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v16);
    sub_B0D8A4(&StringLiteral_13674/*"TerminalTimeStatusEventDailyPoint"*/, v17);
    sub_B0D8A4(&StringLiteral_13679/*"TerminalWarId"*/, v18);
    sub_B0D8A4(&StringLiteral_13672/*"TerminalSpotId"*/, v19);
    sub_B0D8A4(&StringLiteral_13676/*"TerminalTimeStatusLoopCount"*/, v20);
    sub_B0D8A4(&StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/, v21);
    sub_B0D8A4(&StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/, v22);
    sub_B0D8A4(&StringLiteral_13680/*"TerminalWarStartedIds"*/, v23);
    sub_B0D8A4(&StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/, v24);
    sub_B0D8A4(&StringLiteral_705/*","*/, v25);
    sub_B0D8A4(&StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/, v26);
    sub_B0D8A4(&StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/, v27);
    sub_B0D8A4(&StringLiteral_11601/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v28);
    byte_4211A69 = 1;
  }
  EndTime_k__BackingField = 0LL;
  MapModelClearQuestId_k__BackingField = 0;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421083E = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13659/*"TerminalDispState"*/,
    v29->static_fields->_DispState_k__BackingField,
    0LL);
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v30);
    byte_421083F = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13679/*"TerminalWarId"*/,
    v31->static_fields->_WarId_k__BackingField,
    0LL);
  if ( !byte_421084E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v32);
    byte_421084E = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13672/*"TerminalSpotId"*/,
    v33->static_fields->_SpotId_k__BackingField,
    0LL);
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v34);
    byte_4210852 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13670/*"TerminalQuestId"*/,
    v35->static_fields->_QuestId_k__BackingField,
    0LL);
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v36);
    byte_4210853 = 1;
  }
  v37 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v37 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13667/*"TerminalPhaseCnt"*/,
    v37->static_fields->_PhaseCnt_k__BackingField,
    0LL);
  if ( !byte_4211ACE )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v38);
    byte_4211ACE = 1;
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
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13660/*"TerminalEndTime"*/, v40, 0LL);
  if ( !byte_4210888 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v41);
    byte_4210888 = 1;
  }
  v42 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v42 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13662/*"TerminalIsDoneShortcut"*/,
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
    (System_String_o *)StringLiteral_13680/*"TerminalWarStartedIds"*/,
    v43->static_fields->mTerminalWarStartedIds,
    0LL);
  if ( !byte_4211ACF )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v44);
    byte_4211ACF = 1;
  }
  v45 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v45 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13675/*"TerminalTimeStatusEventId"*/,
    v45->static_fields->_TimeStatusEventId_k__BackingField,
    0LL);
  if ( !byte_4211AD0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v46);
    byte_4211AD0 = 1;
  }
  v47 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v47 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13676/*"TerminalTimeStatusLoopCount"*/,
    v47->static_fields->_TimeStatusLoopCount_k__BackingField,
    0LL);
  if ( !byte_4210D36 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v48);
    byte_4210D36 = 1;
  }
  v49 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v49 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13661/*"TerminalEventDailyPointEventId"*/,
    v49->static_fields->_EventDailyPointEventId_k__BackingField,
    0LL);
  if ( !byte_4210D35 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v50);
    byte_4210D35 = 1;
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
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13674/*"TerminalTimeStatusEventDailyPoint"*/, v52, 0LL);
  if ( !byte_4211AD1 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v53);
    byte_4211AD1 = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v54 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/,
    v54->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4211AD2 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v55);
    byte_4211AD2 = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/,
    v56->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  if ( !byte_4211AD3 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v57);
    byte_4211AD3 = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11594/*"SAVEKEY_PlayedTerminalEffects"*/,
    v58->static_fields->_PlayedTerminalEffects_k__BackingField,
    0LL);
  if ( !byte_421087E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v59);
    byte_421087E = 1;
  }
  v60 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v60 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11591/*"SAVEKEY_PlayTerminalEffectDisappear"*/,
    v60->static_fields->_IsPlayTerminalEffectDisappear_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421087F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v61);
    byte_421087F = 1;
  }
  v62 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v62 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11592/*"SAVEKEY_PlayTerminalEffectDisappearWarId"*/,
    v62->static_fields->_IsPlayTerminalEffectDisappearWarId_k__BackingField,
    0LL);
  if ( !byte_4211AD4 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v63);
    byte_4211AD4 = 1;
  }
  v64 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v64 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11593/*"SAVEKEY_PlayTerminalEffectNt2AfterAction"*/,
    v64->static_fields->_IsPlayTerminalEffectNt2AfterAction_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD5 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v65);
    byte_4211AD5 = 1;
  }
  v66 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v66 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11602/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v66->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11585/*"SAVEKEY_ConnectMarkEventId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkEventId,
    0LL);
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11584/*"SAVEKEY_ConnectMarkAnimationId"*/,
    TerminalPramsManager_TypeInfo->static_fields->ConnectMarkAnimationId,
    0LL);
  if ( !byte_421084B )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v67);
    byte_421084B = 1;
  }
  v68 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v68 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11601/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v68->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  if ( !byte_4211AD6 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v69);
    byte_4211AD6 = 1;
  }
  v70 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v70 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(
    (System_String_o *)StringLiteral_11583/*"SAVEKEY_ClearEventQuestIds"*/,
    v70->static_fields->_ClearEventQuestIds_k__BackingField,
    0LL);
  if ( !byte_4210868 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v71);
    byte_4210868 = 1;
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
  if ( !byte_4210869 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v73);
    byte_4210869 = 1;
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
  v77 = System_String__Concat_43852188(v74, (System_String_o *)StringLiteral_705/*","*/, v76, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11590/*"SAVEKEY_MapModelClearQuestInfo"*/, v77, 0LL);
  if ( !byte_4211AD7 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v78);
    byte_4211AD7 = 1;
  }
  v79 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v79 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11586/*"SAVEKEY_DataLostBattleAutoReset"*/,
    v79->static_fields->_IsDataLostBattleAutoReset_k__BackingField,
    0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD8 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v80);
    byte_4211AD8 = 1;
  }
  v81 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v81 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11595/*"SAVEKEY_PlayerGenderType"*/,
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

  if ( (byte_4211A93 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4211A93 = 1;
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
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
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
  TerminalPramsManager___c__DisplayClass611_0_o *v34; // x20
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v36; // x21
  const MethodInfo *v37; // x1
  int32_t v38; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_IEnumerable_TSource__o *QuestIdsByTargetAndOpenCondType; // x19
  TerminalPramsManager___c_c *v43; // x8
  struct TerminalPramsManager___c_StaticFields *static_fields; // x9
  System_Func_int__bool__o *_9__611_0; // x21
  Il2CppObject *v46; // x22
  struct TerminalPramsManager___c_StaticFields *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x19
  __int64 v49; // x1
  __int64 v50; // x2
  System_Func_int__BattleActionData_SideEffectData__o *v51; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x19
  __int64 v53; // x1
  __int64 v54; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v55; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  TerminalPramsManager___c_c *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x19
  struct TerminalPramsManager___c_StaticFields *v61; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__611_3; // x20
  Il2CppObject *v63; // x21
  struct TerminalPramsManager___c_StaticFields *v64; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  TerminalPramsManager___c_c *v68; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x19
  struct TerminalPramsManager___c_StaticFields *v70; // x9
  System_Func_int__int__o *_9__611_4; // x20
  Il2CppObject *v72; // x21
  struct TerminalPramsManager___c_StaticFields *v73; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  int32_t v75; // w0
  int32_t v76; // w19
  WarEntity_o *v77; // [xsp+8h] [xbp-38h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4211A94 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestReleaseMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SpotMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_int___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_int__int___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__QuestEntity___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_QuestEntity__int___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_QuestEntity___, v13);
    sub_B0D8A4(&Method_System_Func_QuestEntity__int___ctor__, v14);
    sub_B0D8A4(&Method_System_Func_QuestEntity__bool___ctor__, v15);
    sub_B0D8A4(&Method_System_Func_int__int___ctor__, v16);
    sub_B0D8A4(&Method_System_Func_int__QuestEntity___ctor__, v17);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v18);
    sub_B0D8A4(&System_Func_QuestEntity__int__TypeInfo, v19);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v20);
    sub_B0D8A4(&System_Func_int__QuestEntity__TypeInfo, v21);
    sub_B0D8A4(&System_Func_QuestEntity__bool__TypeInfo, v22);
    sub_B0D8A4(&System_Func_int__int__TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v26);
    sub_B0D8A4(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__611_0__, v27);
    sub_B0D8A4(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__611_3__, v28);
    sub_B0D8A4(&Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__611_4__, v29);
    sub_B0D8A4(&Method_TerminalPramsManager___c__DisplayClass611_0__SendOpenedQuestIdToAdManager_b__1__, v30);
    sub_B0D8A4(&Method_TerminalPramsManager___c__DisplayClass611_0__SendOpenedQuestIdToAdManager_b__2__, v31);
    sub_B0D8A4(&TerminalPramsManager___c__DisplayClass611_0_TypeInfo, v32);
    sub_B0D8A4(&TerminalPramsManager___c_TypeInfo, v33);
    byte_4211A94 = 1;
  }
  entity = 0LL;
  v77 = 0LL;
  v34 = (TerminalPramsManager___c__DisplayClass611_0_o *)sub_B0D974(
                                                           TerminalPramsManager___c__DisplayClass611_0_TypeInfo,
                                                           method,
                                                           v2);
  TerminalPramsManager___c__DisplayClass611_0___ctor(v34, 0LL);
  if ( clearedQuestId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !v34 )
      goto LABEL_50;
    v34->fields.questMaster = (struct QuestMaster_o *)Instance;
    sub_B0D840(&v34->fields, Instance);
    Instance = (DataManager_o *)v34->fields.questMaster;
    if ( !Instance )
      goto LABEL_50;
    if ( !QuestMaster__TryGetQuestEntity((QuestMaster_o *)Instance, &entity, clearedQuestId, 0LL) )
      return;
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SpotMaster___);
    if ( !entity )
      goto LABEL_50;
    v36 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    Instance = (DataManager_o *)QuestEntity__getSpotId(entity, 0LL);
    if ( !v36 )
      goto LABEL_50;
    Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                  v36,
                                  &v77,
                                  (int32_t)Instance,
                                  (const MethodInfo_2669C30 *)Method_DataMasterBase_SpotMaster__SpotEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      return;
    if ( !v77 )
      goto LABEL_50;
    v38 = *(&v77->fields.id + 1);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( TerminalPramsManager__IsMustPlayMainStory(v38, v37) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_50;
      if ( QuestEntity__GetTypeFlag(entity, 0LL) != 2 )
        return;
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_50;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             Instance,
                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
      v34->fields.userQuestMaster = (struct UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
      sub_B0D840(&v34->fields.userQuestMaster, MasterData_WarQuestSelectionMaster);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_50;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestReleaseMaster___);
      if ( !Instance )
        goto LABEL_50;
      QuestIdsByTargetAndOpenCondType = (System_Collections_Generic_IEnumerable_TSource__o *)QuestReleaseMaster__getQuestIdsByTargetAndOpenCondType(
                                                                                               (QuestReleaseMaster_o *)Instance,
                                                                                               clearedQuestId,
                                                                                               1,
                                                                                               0LL);
      v43 = TerminalPramsManager___c_TypeInfo;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v43 = TerminalPramsManager___c_TypeInfo;
      }
      static_fields = v43->static_fields;
      _9__611_0 = static_fields->__9__611_0;
      if ( !_9__611_0 )
      {
        if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v46 = (Il2CppObject *)static_fields->__9;
        _9__611_0 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v40, v41);
        System_Func_int__bool____ctor(
          _9__611_0,
          v46,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__611_0__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
        v47 = TerminalPramsManager___c_TypeInfo->static_fields;
        v47->__9__611_0 = _9__611_0;
        sub_B0D840(&v47->__9__611_0, _9__611_0);
      }
      v48 = System_Linq_Enumerable__Where_int_(
              QuestIdsByTargetAndOpenCondType,
              (System_Func_TSource__bool__o *)_9__611_0,
              (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
      v51 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                     System_Func_int__QuestEntity__TypeInfo,
                                                                     v49,
                                                                     v50);
      System_Func_int__BattleActionData_SideEffectData____ctor(
        v51,
        (Il2CppObject *)v34,
        Method_TerminalPramsManager___c__DisplayClass611_0__SendOpenedQuestIdToAdManager_b__1__,
        (const MethodInfo_26145DC *)Method_System_Func_int__QuestEntity___ctor__);
      v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                   v48,
                                                                   (System_Func_TSource__TResult__o *)v51,
                                                                   (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__QuestEntity___);
      v55 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_QuestEntity__bool__TypeInfo,
                                                                                 v53,
                                                                                 v54);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v55,
        (Il2CppObject *)v34,
        Method_TerminalPramsManager___c__DisplayClass611_0__SendOpenedQuestIdToAdManager_b__2__,
        (const MethodInfo_26189B8 *)Method_System_Func_QuestEntity__bool___ctor__);
      v56 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              v52,
              (System_Func_TSource__bool__o *)v55,
              (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_QuestEntity___);
      v59 = TerminalPramsManager___c_TypeInfo;
      v60 = v56;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v59 = TerminalPramsManager___c_TypeInfo;
      }
      v61 = v59->static_fields;
      _9__611_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v61->__9__611_3;
      if ( !_9__611_3 )
      {
        if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59);
          v61 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v63 = (Il2CppObject *)v61->__9;
        _9__611_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                      System_Func_QuestEntity__int__TypeInfo,
                                                                                      v57,
                                                                                      v58);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__611_3,
          v63,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__611_3__,
          (const MethodInfo_2619564 *)Method_System_Func_QuestEntity__int___ctor__);
        v64 = TerminalPramsManager___c_TypeInfo->static_fields;
        v64->__9__611_3 = (struct System_Func_QuestEntity__int__o *)_9__611_3;
        sub_B0D840(&v64->__9__611_3, _9__611_3);
      }
      v65 = System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
              v60,
              (System_Func_TSource__TResult__o *)_9__611_3,
              (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_QuestEntity__int___);
      v68 = TerminalPramsManager___c_TypeInfo;
      v69 = (System_Collections_Generic_IEnumerable_TSource__o *)v65;
      if ( (BYTE3(TerminalPramsManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager___c_TypeInfo);
        v68 = TerminalPramsManager___c_TypeInfo;
      }
      v70 = v68->static_fields;
      _9__611_4 = v70->__9__611_4;
      if ( !_9__611_4 )
      {
        if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          v70 = TerminalPramsManager___c_TypeInfo->static_fields;
        }
        v72 = (Il2CppObject *)v70->__9;
        _9__611_4 = (System_Func_int__int__o *)sub_B0D974(System_Func_int__int__TypeInfo, v66, v67);
        System_Func_int__int____ctor(
          _9__611_4,
          v72,
          Method_TerminalPramsManager___c__SendOpenedQuestIdToAdManager_b__611_4__,
          (const MethodInfo_2613CE8 *)Method_System_Func_int__int___ctor__);
        v73 = TerminalPramsManager___c_TypeInfo->static_fields;
        v73->__9__611_4 = _9__611_4;
        sub_B0D840(&v73->__9__611_4, _9__611_4);
      }
      v74 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_int__int_(
                                                                   v69,
                                                                   (System_Func_TSource__TKey__o *)_9__611_4,
                                                                   (const MethodInfo_1B4EBE8 *)Method_System_Linq_Enumerable_OrderByDescending_int__int___);
      v75 = System_Linq_Enumerable__FirstOrDefault_int_(
              v74,
              (const MethodInfo_1B4B504 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
      if ( v75 )
      {
        v76 = v75;
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
        if ( Instance )
        {
          AdManager__SetOpenedStoryQuest((AdManager_o *)Instance, v76, 0LL);
          return;
        }
LABEL_50:
        sub_B0D97C(Instance);
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

  if ( (byte_4211A92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AdManager__get_Instance__, *(_QWORD *)&questPhase);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4211A92 = 1;
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
    Instance = (AdManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AdManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
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
  WarEntity_o *WarEntityByWarID; // x0
  TerminalPramsManager_c *v23; // x0
  int v24; // w8
  TerminalSceneComponent_c *v25; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v27; // x1
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  UnityEngine_Object_o *v29; // x20
  __int64 v30; // x1
  System_Collections_Generic_List_QuestReleaseEntity__c *v31; // x8
  ScrTerminalListTop_o *v32; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v33; // x8
  UnityEngine_Object_o *genericContainerHandle; // x20
  System_Collections_Generic_List_QuestReleaseEntity__c *v35; // x8
  const MethodInfo *v36; // x0

  if ( (byte_4211A5E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v4);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v6);
    byte_4211A5E = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  if ( SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
  {
    if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
    }
    v7 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
      if ( !byte_4210841 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
        byte_4210841 = 1;
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
      if ( !byte_4210874 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
        byte_4210874 = 1;
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
      if ( !byte_4210843 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
        v15 = TerminalPramsManager_TypeInfo;
        byte_4210843 = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_QuestId_k__BackingField = v16;
      questPhase = v10->fields.questPhase;
      if ( !byte_4210844 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
        v15 = TerminalPramsManager_TypeInfo;
        byte_4210844 = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_PhaseCnt_k__BackingField = questPhase;
      endTime = v10->fields.endTime;
      if ( !byte_421088E )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
        v15 = TerminalPramsManager_TypeInfo;
        byte_421088E = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_EndTime_k__BackingField = endTime;
      if ( !byte_4210887 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
        v15 = TerminalPramsManager_TypeInfo;
        byte_4210887 = 1;
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
      if ( !SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__) )
        goto LABEL_171;
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v21 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_421083F )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v20);
        byte_421083F = 1;
      }
      v7 = (QuestTree_o *)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v7 = (QuestTree_o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v21 )
        goto LABEL_168;
      WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(v21, HIDWORD(v7[1].fields.questReleaseEntList->klass), 0LL);
      if ( WarEntityByWarID )
      {
        if ( WarEntity__IsFolder(WarEntityByWarID, 0LL) )
        {
          if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4210847 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v19);
            byte_4210847 = 1;
          }
          v23 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v23 = TerminalPramsManager_TypeInfo;
          }
          v24 = 3;
        }
        else
        {
          if ( (WORD1(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4210847 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v19);
            byte_4210847 = 1;
          }
          v23 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v23 = TerminalPramsManager_TypeInfo;
          }
          v24 = 2;
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
        if ( !byte_4210847 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v19);
          byte_4210847 = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        v24 = 1;
      }
      v23->static_fields->_DispState_k__BackingField = v24;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v19);
        byte_421083D = 1;
      }
      v25 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v25 = TerminalSceneComponent_TypeInfo;
      }
      mInstance = (UnityEngine_Object_o *)v25->static_fields->mInstance;
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
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v27);
        byte_421083D = 1;
      }
      v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
      }
      klass = v7[1].fields.questReleaseEntList->klass;
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
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v30);
            byte_421083D = 1;
          }
          v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          }
          v31 = v7[1].fields.questReleaseEntList->klass;
          if ( !v31 )
            goto LABEL_168;
          v32 = *(ScrTerminalListTop_o **)&v31->_2.element_size;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_421083F )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v30);
            byte_421083F = 1;
          }
          v7 = (QuestTree_o *)TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v7 = (QuestTree_o *)TerminalPramsManager_TypeInfo;
          }
          if ( !v32 )
            goto LABEL_168;
          ScrTerminalListTop__RequestChangeTerminalListBG(v32, HIDWORD(v7[1].fields.questReleaseEntList->klass), 0LL);
        }
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v30);
          byte_421083D = 1;
        }
        v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v33 = v7[1].fields.questReleaseEntList->klass;
        if ( v33 )
        {
          genericContainerHandle = (UnityEngine_Object_o *)v33->_2.genericContainerHandle;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(genericContainerHandle, 0LL, 0LL) )
            goto LABEL_159;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v27);
            byte_421083D = 1;
          }
          v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v7 = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
          }
          v35 = v7[1].fields.questReleaseEntList->klass;
          if ( v35 )
          {
            v7 = (QuestTree_o *)v35->_2.genericContainerHandle;
            if ( v7 )
            {
              TitleInfoControl__CloseEventBannerWindow((TitleInfoControl_o *)v7, 0LL);
LABEL_159:
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4210848 )
              {
                sub_B0D8A4(&TerminalPramsManager_TypeInfo, v27);
                byte_4210848 = 1;
              }
              v36 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v36 = (const MethodInfo *)TerminalPramsManager_TypeInfo;
              }
              BYTE6(v36[2].klass->vtable[22].methodPtr) = 1;
              TerminalPramsManager__Save_SaveData(v36);
              return;
            }
          }
        }
      }
    }
LABEL_168:
    sub_B0D97C(v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TerminalPramsManager__SetFolderLastClickedIdx(int32_t warId, int32_t idx, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  System_Collections_Generic_Dictionary_int__int__o *v10; // x21
  TerminalPramsManager_c *v11; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_int__int__o *folderLastIdxs; // x0
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0

  if ( (byte_4211A8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&idx);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    byte_4211A8F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( !v9->static_fields->folderLastIdxs )
  {
    v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                                 System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                                 *(_QWORD *)&idx,
                                                                 method);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v10,
      (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    v11 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->folderLastIdxs = v10;
    sub_B0D840(&static_fields->folderLastIdxs, v10);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  folderLastIdxs = v9->static_fields->folderLastIdxs;
  if ( !folderLastIdxs
    || (System_Collections_Generic_Dictionary_int__int___Remove(
          folderLastIdxs,
          warId,
          (const MethodInfo_2E6B14C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__),
        (folderLastIdxs = TerminalPramsManager_TypeInfo->static_fields->folderLastIdxs) == 0LL) )
  {
    sub_B0D97C(folderLastIdxs);
  }
  System_Collections_Generic_Dictionary_int__int___Add(
    folderLastIdxs,
    warId,
    idx,
    (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
  if ( !byte_4211AAF )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v14);
    byte_4211AAF = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_LastSelectQuestIndex_k__BackingField = idx;
}


void __fastcall TerminalPramsManager__SetWarStartedId(int32_t war_id, const MethodInfo *method)
{
  __int64 v3; // x1
  TerminalPramsManager_c *v4; // x0
  System_String_o *mTerminalWarStartedIds; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = war_id;
  if ( (byte_4211A8D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v3);
    byte_4211A8D = 1;
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
    v6 = System_Int32__ToString((int32_t)&v10, 0LL);
    v7 = System_String__Concat_43852188(mTerminalWarStartedIds, v6, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
    static_fields = TerminalPramsManager_TypeInfo->static_fields;
    static_fields->mTerminalWarStartedIds = v7;
    sub_B0D840(&static_fields->mTerminalWarStartedIds, v7);
    TerminalPramsManager__Save_SaveData(v9);
  }
}


void __fastcall TerminalPramsManager__SpotIdSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A6A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_13672/*"TerminalSpotId"*/, v2);
    byte_4211A6A = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421084E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421084E = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13672/*"TerminalSpotId"*/,
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

  if ( (byte_4211A70 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/, v2);
    sub_B0D8A4(&StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/, v3);
    byte_4211A70 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD1 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AD1 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13656/*"TerminalBeforeEventActivityPoint"*/,
    v4->static_fields->_BeforeEventActivityPoint_k__BackingField,
    0LL);
  if ( !byte_4211AD2 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4211AD2 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_13657/*"TerminalBeforeEventActivityPointGauge"*/,
    v6->static_fields->_BeforeEventActivityPointGauge_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfoDispSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A75 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v2);
    byte_4211A75 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v3->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventConquestInfosSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  struct EventConquestInfo_array *eventConquestInfos; // x19
  System_String_o *v8; // x0
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4211A74 & 1) == 0 )
  {
    sub_B0D8A4(&EventConquestInfo___TypeInfo, v1);
    sub_B0D8A4(&JsonManager_TypeInfo, v2);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, v4);
    sub_B0D8A4(&StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v5);
    byte_4211A74 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  eventConquestInfos = v6->static_fields->eventConquestInfos;
  if ( eventConquestInfos )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      eventConquestInfos = TerminalPramsManager_TypeInfo->static_fields->eventConquestInfos;
    }
  }
  else
  {
    eventConquestInfos = (struct EventConquestInfo_array *)sub_B0D8BC(EventConquestInfo___TypeInfo, 0LL);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson(&eventConquestInfos->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11598/*"SAVEKEY_TerminalConquestInfos"*/, v8, 0LL);
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_11597/*"SAVEKEY_TerminalConquestInfoDisp"*/, v9->static_fields->eventConquestInfoDisp, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalEventHarvestGrowthInfosSave_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  EventHarvestGrowthInfo_o *eventHarvestGrowthInfo; // x19
  System_String_o *v8; // x0

  if ( (byte_4211A76 & 1) == 0 )
  {
    sub_B0D8A4(&EventHarvestGrowthInfo_TypeInfo, v1);
    sub_B0D8A4(&JsonManager_TypeInfo, v3);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_11599/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v5);
    byte_4211A76 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  eventHarvestGrowthInfo = v6->static_fields->eventHarvestGrowthInfo;
  if ( eventHarvestGrowthInfo )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      eventHarvestGrowthInfo = TerminalPramsManager_TypeInfo->static_fields->eventHarvestGrowthInfo;
    }
  }
  else
  {
    eventHarvestGrowthInfo = (EventHarvestGrowthInfo_o *)sub_B0D974(EventHarvestGrowthInfo_TypeInfo, v1, v2);
    EventHarvestGrowthInfo___ctor(eventHarvestGrowthInfo, 0LL);
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson((Il2CppObject *)eventHarvestGrowthInfo, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_11599/*"SAVEKEY_TerminalHarvestGrowthInfo"*/, v8, 0LL);
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

  if ( (byte_4211A72 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, v1);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_13658/*"TerminalBeforeEventSubmarinePointData"*/, v3);
    byte_4211A72 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211ADB )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211ADB = 1;
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
    if ( !byte_4211ADB )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
      byte_4211ADB = 1;
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
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_13658/*"TerminalBeforeEventSubmarinePointData"*/, v7, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
}


void __fastcall TerminalPramsManager__TerminalSelectedRecollectionWarId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A7E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11601/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/, v2);
    byte_4211A7E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421084B )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421084B = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11601/*"SAVEKEY_TerminalSelectedRecollectionWarId"*/,
    v3->static_fields->_SelectedRecollectionWarId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalSelectedStoryQuestId_SaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A7D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_11602/*"SAVEKEY_TerminalSelectedStoryQuestId"*/, v2);
    byte_4211A7D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AD5 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211AD5 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(
    (System_String_o *)StringLiteral_11602/*"SAVEKEY_TerminalSelectedStoryQuestId"*/,
    v3->static_fields->_SelectedStoryQuestId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall TerminalPramsManager__TerminalTransitionInfoSave_SaveData(
        TerminalTransitionInfo_o *terminalTransitionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4211A6F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13678/*"TerminalTransitionInfoVoiceAssetName"*/, method);
    sub_B0D8A4(&StringLiteral_13677/*"TerminalTransitionInfoMissionId"*/, v3);
    byte_4211A6F = 1;
  }
  if ( terminalTransitionInfo )
  {
    UnityEngine_PlayerPrefs__SetInt(
      (System_String_o *)StringLiteral_13677/*"TerminalTransitionInfoMissionId"*/,
      terminalTransitionInfo->fields.missionId,
      0LL);
    UnityEngine_PlayerPrefs__SetString(
      (System_String_o *)StringLiteral_13678/*"TerminalTransitionInfoVoiceAssetName"*/,
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v11; // x0
  __int64 v12; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_int__o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x8
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4211A9E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___Add__, *(_QWORD *)&day);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    byte_4211A9E = 1;
  }
  value = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211AEB )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, *(_QWORD *)&day);
    byte_4211AEB = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
  }
  v12 = *(_QWORD *)&v11[2].fields.entries->m_Items[16].fields.hashCode;
  if ( !v12 )
    goto LABEL_30;
  v11 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)(v12 + 16);
  if ( !v11 )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v11,
          eventId,
          &value,
          (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__List_int___TryGetValue__) )
  {
    v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v13, v14);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    value = (WarBoardEvalValueSquare_CalcEval_o *)v15;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211AEB )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v16);
      byte_4211AEB = 1;
    }
    v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)TerminalPramsManager_TypeInfo;
    }
    v17 = *(_QWORD *)&v11[2].fields.entries->m_Items[16].fields.hashCode;
    if ( !v17 )
      goto LABEL_30;
    v11 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)(v17 + 16);
    if ( !v11 )
      goto LABEL_30;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v11,
      eventId,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
      (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__List_int___Add__);
    goto LABEL_28;
  }
  v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)value;
  if ( !value )
    goto LABEL_30;
  if ( !System_Collections_Generic_List_int___Contains(
          (System_Collections_Generic_List_int__o *)value,
          day,
          (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
LABEL_28:
    v11 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)value;
    if ( value )
    {
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)value,
        day,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      return;
    }
LABEL_30:
    sub_B0D97C(v11);
  }
}


int32_t __fastcall TerminalPramsManager__get_AfterActionFocusQuestId(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4211993 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211993 = 1;
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

  if ( (byte_42119B1 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119B1 = 1;
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
  SceneRootComponent_c *klass; // x8
  __int64 v7; // x8
  SceneRootComponent_c *v8; // x8
  __int64 v9; // x8
  int32_t *p_QuestId_k__BackingField; // x8
  TerminalPramsManager_c *v11; // x0

  if ( (byte_42119E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v1);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v3);
    byte_42119E3 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene(Instance, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v5);
      byte_421083D = 1;
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
    v7 = *(_QWORD *)&klass->_2.static_fields_size;
    if ( !v7 )
      goto LABEL_37;
    if ( *(_DWORD *)(v7 + 404) )
    {
      if ( (Instance[3].fields.fadeType & 0x4000000) != 0 && !Instance[2].fields.fadeType )
        j_il2cpp_runtime_class_init_0(Instance);
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v5);
        byte_421083D = 1;
      }
      Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (AvalonSceneManager_o *)TerminalSceneComponent_TypeInfo;
      }
      v8 = Instance[2].fields.targetRoot->klass;
      if ( v8 )
      {
        v9 = *(_QWORD *)&v8->_2.static_fields_size;
        if ( v9 )
        {
          p_QuestId_k__BackingField = (int32_t *)(v9 + 404);
          return *p_QuestId_k__BackingField;
        }
      }
LABEL_37:
      sub_B0D97C(Instance);
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v5);
    byte_4210852 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  p_QuestId_k__BackingField = &v11->static_fields->_QuestId_k__BackingField;
  return *p_QuestId_k__BackingField;
}


int32_t __fastcall TerminalPramsManager__get_BeforeEventActivityPoint(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_42119FE & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119FE = 1;
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

  if ( (byte_4211A00 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A00 = 1;
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

  if ( (byte_4211A04 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A04 = 1;
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

  if ( (byte_42119F2 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119F2 = 1;
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

  if ( (byte_4211A24 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A24 = 1;
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

  if ( (byte_4211A28 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A28 = 1;
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

  if ( (byte_4211A22 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A22 = 1;
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

  if ( (byte_4211A26 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A26 = 1;
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

  if ( (byte_42119CD & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119CD = 1;
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

  if ( (byte_42119FC & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119FC = 1;
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

  if ( (byte_42119BD & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119BD = 1;
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

  if ( (byte_42119C5 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119C5 = 1;
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

  if ( (byte_42119BF & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119BF = 1;
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

  if ( (byte_4211975 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211975 = 1;
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

  if ( (byte_42119B3 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119B3 = 1;
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

  if ( (byte_4211A02 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A02 = 1;
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

  if ( (byte_4211A0A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A0A = 1;
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

  if ( (byte_42119F4 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119F4 = 1;
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

  if ( (byte_42119F0 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119F0 = 1;
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

  if ( (byte_421199F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421199F = 1;
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

  if ( (byte_4211A06 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A06 = 1;
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

  if ( (byte_4211A2E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A2E = 1;
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

  if ( (byte_4211A42 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A42 = 1;
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

  if ( (byte_4211A44 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A44 = 1;
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

  if ( (byte_4211A5C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A5C = 1;
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

  if ( (byte_4211A3C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A3C = 1;
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

  if ( (byte_4211A3E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A3E = 1;
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

  if ( (byte_4211A2A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A2A = 1;
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

  if ( (byte_4211A46 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A46 = 1;
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

  if ( (byte_42119BB & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119BB = 1;
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

  if ( (byte_42119C7 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119C7 = 1;
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

  if ( (byte_42119C3 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119C3 = 1;
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

  if ( (byte_4211995 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211995 = 1;
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

  if ( (byte_4211997 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211997 = 1;
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

  if ( (byte_42119A5 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119A5 = 1;
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

  if ( (byte_4211999 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211999 = 1;
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

  if ( (byte_4211981 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211981 = 1;
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

  if ( (byte_4211A0C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A0C = 1;
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

  if ( (byte_4211989 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211989 = 1;
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

  if ( (byte_4211987 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211987 = 1;
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

  if ( (byte_4211A32 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A32 = 1;
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

  if ( (byte_4211A40 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A40 = 1;
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

  if ( (byte_421199D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421199D = 1;
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

  if ( (byte_42119A3 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119A3 = 1;
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

  if ( (byte_42119A9 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119A9 = 1;
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

  if ( (byte_4211A0E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A0E = 1;
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

  if ( (byte_42119A7 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119A7 = 1;
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

  if ( (byte_4211A1C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A1C = 1;
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

  if ( (byte_4211A1E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A1E = 1;
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

  if ( (byte_4211A20 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A20 = 1;
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

  if ( (byte_42119C9 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119C9 = 1;
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

  if ( (byte_42119A1 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119A1 = 1;
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

  if ( (byte_42119AB & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119AB = 1;
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

  if ( (byte_42119C1 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119C1 = 1;
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

  if ( (byte_4211A48 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A48 = 1;
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

  if ( (byte_42119B5 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119B5 = 1;
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

  if ( (byte_421199B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421199B = 1;
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

  if ( (byte_421198F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421198F = 1;
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

  if ( (byte_421198D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421198D = 1;
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

  if ( (byte_4211991 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211991 = 1;
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

  if ( (byte_42119B9 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119B9 = 1;
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

  if ( (byte_42119B7 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119B7 = 1;
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

  if ( (byte_42119AD & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119AD = 1;
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

  if ( (byte_4211A2C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A2C = 1;
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

  if ( (byte_421197F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421197F = 1;
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

  if ( (byte_4211A1A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A1A = 1;
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

  if ( (byte_42119CB & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119CB = 1;
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

  if ( (byte_421197D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421197D = 1;
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

  if ( (byte_4211A4A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A4A = 1;
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

  if ( (byte_4211A4C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A4C = 1;
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

  if ( (byte_4211A18 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A18 = 1;
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

  if ( (byte_42119AF & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119AF = 1;
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

  if ( (byte_4211A30 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A30 = 1;
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

  if ( (byte_421198B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421198B = 1;
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

  if ( (byte_4211985 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211985 = 1;
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

  if ( (byte_4211983 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211983 = 1;
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

  if ( (byte_42119D1 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119D1 = 1;
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

  if ( (byte_421197B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_421197B = 1;
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

  if ( (byte_4211979 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211979 = 1;
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

  if ( (byte_4211A4E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A4E = 1;
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

  if ( (byte_42119F8 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119F8 = 1;
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

  if ( (byte_42119FA & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119FA = 1;
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

  if ( (byte_4211A10 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A10 = 1;
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

  if ( (byte_4211977 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211977 = 1;
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

  if ( (byte_42119CF & 1) == 0 )
  {
    sub_B0D8A4(&MapZoom_TypeInfo, v1);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    byte_42119CF = 1;
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

  if ( (byte_42119EE & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119EE = 1;
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

  if ( (byte_42119D9 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119D9 = 1;
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

  if ( (byte_42119D7 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119D7 = 1;
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

  if ( (byte_42119DB & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119DB = 1;
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

  if ( (byte_42119E4 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119E4 = 1;
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

  if ( (byte_4211A52 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A52 = 1;
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

  if ( (byte_4211A14 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A14 = 1;
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

  if ( (byte_4211A08 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A08 = 1;
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


bool __fastcall TerminalPramsManager__get_isPlayRiverActionCheck(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4211A16 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A16 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  return v2->static_fields->_isPlayRiverActionCheck_k__BackingField;
}


bool __fastcall TerminalPramsManager__get_isPlayingQuestPhaseRewardEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  TerminalPramsManager_c *v2; // x0

  if ( (byte_4211A3A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A3A = 1;
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

  if ( (byte_4211A38 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A38 = 1;
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

  if ( (byte_4211A12 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A12 = 1;
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

  if ( (byte_4211A54 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A54 = 1;
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

  if ( (byte_4211A50 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A50 = 1;
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

  if ( (byte_42119D5 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119D5 = 1;
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

  if ( (byte_42119E1 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119E1 = 1;
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

  if ( (byte_42119D3 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119D3 = 1;
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

  if ( (byte_42119DF & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119DF = 1;
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

  if ( (byte_42119DD & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119DD = 1;
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

  if ( (byte_42119E8 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119E8 = 1;
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

  if ( (byte_42119EA & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119EA = 1;
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

  if ( (byte_42119E6 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119E6 = 1;
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

  if ( (byte_42119EC & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119EC = 1;
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

  if ( (byte_4211A56 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A56 = 1;
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

  if ( (byte_42119F6 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_42119F6 = 1;
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

  if ( (byte_4211A62 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v1);
    byte_4211A62 = 1;
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

  if ( (byte_4211A61 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A61 = 1;
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

  if ( (byte_4211994 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211994 = 1;
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

  if ( (byte_42119B2 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119B2 = 1;
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
  sub_B0D840(&static_fields->_BattleSetupKeep_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_BeforeEventActivityPoint(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_42119FF & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119FF = 1;
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

  if ( (byte_4211A01 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A01 = 1;
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

  if ( (byte_4211A05 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A05 = 1;
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
  sub_B0D840(&static_fields->_BeforeEventSubmarineSaveData_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_BeforeTimeEventDailyPoint(int64_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_42119F3 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119F3 = 1;
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

  if ( (byte_4211A25 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A25 = 1;
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

  if ( (byte_4211A29 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A29 = 1;
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

  if ( (byte_4211A23 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A23 = 1;
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

  if ( (byte_4211A27 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A27 = 1;
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
  sub_B0D840(&static_fields->_BlankEarthTransformData_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_CampaignDirectBonus(
        CommonUI_CampaignDirectBonusData_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42119CE & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119CE = 1;
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
  sub_B0D840(&static_fields->_CampaignDirectBonus_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_ClearEventQuestIds(System_String_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42119FD & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119FD = 1;
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
  sub_B0D840(&static_fields->_ClearEventQuestIds_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_DataLostBattleEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_42119BE & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119BE = 1;
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

  if ( (byte_42119C6 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    byte_42119C6 = 1;
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

  if ( (byte_42119C0 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119C0 = 1;
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

  if ( (byte_4211A37 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A37 = 1;
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

  if ( (byte_4211A36 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A36 = 1;
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

  if ( (byte_4211A34 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A34 = 1;
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

  if ( (byte_4211A35 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A35 = 1;
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

  if ( (byte_4211976 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211976 = 1;
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

  if ( (byte_42119B4 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119B4 = 1;
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

  if ( (byte_4211A03 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A03 = 1;
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

  if ( (byte_4211A0B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A0B = 1;
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

  if ( (byte_42119F5 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119F5 = 1;
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

  if ( (byte_42119F1 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119F1 = 1;
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

  if ( (byte_42119A0 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119A0 = 1;
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

  if ( (byte_4211A07 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A07 = 1;
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
  sub_B0D840(&static_fields->_EventRaidDefeatedEffectInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_EventUIEffectClearQuestId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A2F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A2F = 1;
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

  if ( (byte_4211A43 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A43 = 1;
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

  if ( (byte_4211A45 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A45 = 1;
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

  if ( (byte_4211A5D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A5D = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210848 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4210848 = 1;
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

  if ( (byte_4211A3D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A3D = 1;
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

  if ( (byte_4211A3F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A3F = 1;
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

  if ( (byte_4211A2B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A2B = 1;
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

  if ( (byte_4211A47 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A47 = 1;
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

  if ( (byte_42119BC & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119BC = 1;
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

  if ( (byte_42119C8 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119C8 = 1;
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

  if ( (byte_42119C4 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119C4 = 1;
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

  if ( (byte_4211996 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211996 = 1;
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

  if ( (byte_4211998 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211998 = 1;
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

  if ( (byte_42119A6 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119A6 = 1;
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

  if ( (byte_421199A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421199A = 1;
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

  if ( (byte_4211982 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211982 = 1;
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

  if ( (byte_4211A0D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A0D = 1;
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

  if ( (byte_421198A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421198A = 1;
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

  if ( (byte_4211988 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211988 = 1;
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

  if ( (byte_4211A33 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A33 = 1;
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

  if ( (byte_4211A41 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A41 = 1;
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

  if ( (byte_421199E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421199E = 1;
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

  if ( (byte_42119A4 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119A4 = 1;
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

  if ( (byte_42119AA & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119AA = 1;
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

  if ( (byte_4211A0F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A0F = 1;
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

  if ( (byte_42119A8 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119A8 = 1;
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

  if ( (byte_4211A1D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A1D = 1;
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

  if ( (byte_4211A1F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A1F = 1;
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

  if ( (byte_4211A21 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A21 = 1;
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

  if ( (byte_42119CA & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119CA = 1;
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

  if ( (byte_42119A2 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119A2 = 1;
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

  if ( (byte_42119AC & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119AC = 1;
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

  if ( (byte_42119C2 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119C2 = 1;
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

  if ( (byte_4211A49 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A49 = 1;
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

  if ( (byte_42119B6 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119B6 = 1;
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

  if ( (byte_421199C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421199C = 1;
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

  if ( (byte_4211990 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211990 = 1;
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

  if ( (byte_421198E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421198E = 1;
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

  if ( (byte_4211992 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211992 = 1;
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

  if ( (byte_42119BA & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119BA = 1;
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

  if ( (byte_42119B8 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119B8 = 1;
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

  if ( (byte_42119AE & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119AE = 1;
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

  if ( (byte_4211A2D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A2D = 1;
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
  sub_B0D840(&static_fields->_NoticeLastModified_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_PhaseCnt(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211980 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211980 = 1;
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

  if ( (byte_4211A1B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A1B = 1;
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
  sub_B0D840(&static_fields->_PlayedTerminalEffects_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_PlayerGenderType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_42119CC & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119CC = 1;
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

  if ( (byte_421197E & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421197E = 1;
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

  if ( (byte_4211A4B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A4B = 1;
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

  if ( (byte_4211A4D & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A4D = 1;
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

  if ( (byte_4211A19 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A19 = 1;
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
  sub_B0D840(&static_fields->_QuestRandomGroupList_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_QuestWindowMessage(System_String_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42119B0 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119B0 = 1;
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
  sub_B0D840(&static_fields->_QuestWindowMessage_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_SceneMoveQuestClearedInfo(System_String_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4211A31 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A31 = 1;
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
  sub_B0D840(&static_fields->_SceneMoveQuestClearedInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_SelectedBannerEntity(BannerEntity_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_421198C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421198C = 1;
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
  sub_B0D840(&static_fields->_SelectedBannerEntity_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_SelectedRecollectionWarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211986 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211986 = 1;
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

  if ( (byte_4211984 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211984 = 1;
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

  if ( (byte_42119D2 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119D2 = 1;
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
  sub_B0D840(&static_fields->_SpecifiedChangeSceneInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_SpotId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_421197C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421197C = 1;
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

  if ( (byte_421197A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421197A = 1;
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

  if ( (byte_4211A4F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A4F = 1;
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
  sub_B0D840(&static_fields->_TalkScriptInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_TimeStatusEventId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_42119F9 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119F9 = 1;
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

  if ( (byte_42119FB & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119FB = 1;
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

  if ( (byte_4211A11 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A11 = 1;
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
  sub_B0D840(&static_fields->_WarBoardData_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_WarId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211978 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211978 = 1;
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

  if ( (byte_42119D0 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v2);
    byte_42119D0 = 1;
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
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42119EF & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119EF = 1;
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
  sub_B0D840(&static_fields->_eventDailyPoint_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_eventPointWinReward(EventPointWinReward_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42119DA & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119DA = 1;
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
  sub_B0D840(&static_fields->_eventPointWinReward_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_eventPointWinType(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_42119D8 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119D8 = 1;
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
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42119DC & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119DC = 1;
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
  sub_B0D840(&static_fields->_eventRaceBoost_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_eventTowerReward(EventTowerReward_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42119E5 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119E5 = 1;
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
  sub_B0D840(&static_fields->_eventTowerReward_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_friendshipQuestDialogOpenId(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_4211A53 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A53 = 1;
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

  if ( (byte_4211A15 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A15 = 1;
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

  if ( (byte_4211A09 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A09 = 1;
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

  if ( (byte_4211A17 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A17 = 1;
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

  if ( (byte_4211A3B & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A3B = 1;
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

  if ( (byte_4211A39 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A39 = 1;
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

  if ( (byte_4211A13 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A13 = 1;
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

  if ( (byte_4211A55 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A55 = 1;
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

  if ( (byte_4211A51 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A51 = 1;
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
  sub_B0D840(&static_fields->_limitImageAnnounces_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_oldPersonalBoss(UserSuperBossEntity_array *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x0

  if ( (byte_42119D6 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119D6 = 1;
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
  sub_B0D840(&static_fields->_oldPersonalBoss_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_oldQuestIdForHeaderEvent(int32_t value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0

  if ( (byte_42119E2 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119E2 = 1;
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

  if ( (byte_42119D4 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119D4 = 1;
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
  sub_B0D840(&static_fields->_oldSuperBoss_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_questClearCostumeGet(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42119E0 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119E0 = 1;
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
  sub_B0D840(&static_fields->_questClearCostumeGet_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_questClearCostumeRelease(
        CostumeReleaseAnnounce_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42119DE & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119DE = 1;
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
  sub_B0D840(&static_fields->_questClearCostumeRelease_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_resultBoostItemRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42119E9 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119E9 = 1;
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
  sub_B0D840(&static_fields->_resultBoostItemRewardInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_resultEventBoardGameTokenRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42119EB & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119EB = 1;
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
  sub_B0D840(&static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_resultEventTowerRewardInfo(
        QuestRewardInfo_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42119E7 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119E7 = 1;
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
  sub_B0D840(&static_fields->_resultEventTowerRewardInfo_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_timeStatusRecord(TimeStatusRecord_o *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42119ED & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119ED = 1;
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
  sub_B0D840(&static_fields->_timeStatusRecord_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_updateProfileInfoEntity(
        UpdateProfileDialogInfoEntity_array *value,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_4211A57 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211A57 = 1;
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
  sub_B0D840(&static_fields->_updateProfileInfoEntity_k__BackingField, value);
}


void __fastcall TerminalPramsManager__set_warClearReward(WarClearReward_array *value, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42119F7 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_42119F7 = 1;
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
  sub_B0D840(&static_fields->_warClearReward_k__BackingField, value);
}


void __fastcall TerminalPramsManager_ClearData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct TerminalPramsManager_ClearData_StaticFields *static_fields; // x0
  __int64 v4; // x1

  if ( (byte_4211791 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_ClearData_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_13390/*"TERMINAL_CLEAR_REWARD_DISP"*/, v2);
    byte_4211791 = 1;
  }
  static_fields = TerminalPramsManager_ClearData_TypeInfo->static_fields;
  v4 = StringLiteral_13390/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  static_fields->SAVEKEY_CLEAR_REWARD_DISP = (struct System_String_o *)StringLiteral_13390/*"TERMINAL_CLEAR_REWARD_DISP"*/;
  sub_B0D840(static_fields, v4);
}


void __fastcall TerminalPramsManager_ClearData___ctor(TerminalPramsManager_ClearData_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t EVENT_POINT_EFFECT_STATE_NONE; // w8
  struct LimitImageAnnounce_array **p_limitImageAnnounces; // x19

  if ( (byte_421178F & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421178F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.qClearHeroineInfo = 0LL;
  sub_B0D840(&this->fields, 0LL);
  this->fields.questRewardInfos = 0LL;
  sub_B0D840(&this->fields.questRewardInfos, 0LL);
  this->fields.questPhaseRewardInfos = 0LL;
  sub_B0D840(&this->fields.questPhaseRewardInfos, 0LL);
  this->fields.questResultAfterEventRewardInfos = 0LL;
  sub_B0D840(&this->fields.questResultAfterEventRewardInfos, 0LL);
  this->fields.resultEventPanelRewardInfos = 0LL;
  sub_B0D840(&this->fields.resultEventPanelRewardInfos, 0LL);
  this->fields.panelEventPoint = 0;
  *(_QWORD *)&this->fields.clearedLastBattleRaidId = -1LL;
  this->fields.joinGroup = -1;
  this->fields.mOldSuperBoss = 0LL;
  sub_B0D840(&this->fields.mOldSuperBoss, 0LL);
  this->fields.oldPersonalBoss = 0LL;
  sub_B0D840(&this->fields.oldPersonalBoss, 0LL);
  this->fields.evPointWinReward = 0LL;
  sub_B0D840(&this->fields.evPointWinReward, 0LL);
  this->fields.evPointWinType = 0;
  this->fields.evRaceBoost = 0LL;
  sub_B0D840(&this->fields.evRaceBoost, 0LL);
  this->fields.questClearCostume = 0LL;
  sub_B0D840(&this->fields.questClearCostume, 0LL);
  this->fields.questClearCostumeGetInfo = 0LL;
  sub_B0D840(&this->fields.questClearCostumeGetInfo, 0LL);
  this->fields.eventTowerReward = 0LL;
  sub_B0D840(&this->fields.eventTowerReward, 0LL);
  this->fields.resultEventTowerRewardInfo = 0LL;
  sub_B0D840(&this->fields.resultEventTowerRewardInfo, 0LL);
  this->fields.warClearReward = 0LL;
  this->fields.isDispOnly = 0;
  sub_B0D840(&this->fields.warClearReward, 0LL);
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
  sub_B0D840(p_limitImageAnnounces, 0LL);
  *((_BYTE *)p_limitImageAnnounces + 8) = 0;
  *((_DWORD *)p_limitImageAnnounces + 3) = 0;
}


void __fastcall TerminalPramsManager_ClearData___ctor_18835236(
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
  TerminalPramsManager_QuestClearHeroineInfoForSave_o *v46; // x0
  const MethodInfo *v47; // x2
  struct TerminalPramsManager_QuestClearHeroineInfoForSave_o *v48; // x27
  __int64 v49; // x0
  struct UserSuperBossEntity_array *v50; // x26
  struct UserSuperBossEntity_array *v51; // x25
  struct CostumeReleaseAnnounce_array *v52; // x20
  struct CostumeReleaseAnnounce_array *v53; // x21
  struct QuestRewardInfo_array *v54; // x22
  __int64 v55; // x1
  TerminalPramsManager_c *v56; // x0
  TerminalPramsManager_c *v57; // x0
  struct QuestRewardInfo_array *resultBoostItemRewardInfo_k__BackingField; // x1
  __int64 v59; // x1
  TerminalPramsManager_c *v60; // x0
  struct WarClearReward_array *v61; // x21
  TerminalPramsManager_c *v62; // x0
  struct QuestRewardInfo_array *resultEventBoardGameTokenRewardInfo_k__BackingField; // x1
  struct BattleDropItem_array *v64; // x22
  struct BattleDropItem_array *v65; // x23
  struct LimitImageAnnounce_array *v66; // x21
  __int64 v67; // x1
  TerminalPramsManager_c *v68; // x0

  if ( (byte_4211790 & 1) == 0 )
  {
    sub_B0D8A4(&BattleDropItem___TypeInfo, qcrHeroineInfo);
    sub_B0D8A4(&CostumeReleaseAnnounce___TypeInfo, v37);
    sub_B0D8A4(&LimitImageAnnounce___TypeInfo, v38);
    sub_B0D8A4(&TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo, v39);
    sub_B0D8A4(&QuestRewardInfo___TypeInfo, v40);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v41);
    sub_B0D8A4(&UserSuperBossEntity___TypeInfo, v42);
    sub_B0D8A4(&WarClearReward___TypeInfo, v43);
    byte_4211790 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v46 = (TerminalPramsManager_QuestClearHeroineInfoForSave_o *)sub_B0D974(
                                                                 TerminalPramsManager_QuestClearHeroineInfoForSave_TypeInfo,
                                                                 v44,
                                                                 v45);
  v48 = v46;
  if ( qcrHeroineInfo )
  {
    TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_18836812(v46, qcrHeroineInfo, v47);
    if ( this )
      goto LABEL_5;
LABEL_38:
    sub_B0D97C(v49);
  }
  System_Object___ctor((Il2CppObject *)v46, 0LL);
  v48->fields.oldUsrSvtData = 0LL;
  sub_B0D840(&v48->fields, 0LL);
  if ( !this )
    goto LABEL_38;
LABEL_5:
  this->fields.qClearHeroineInfo = v48;
  sub_B0D840(&this->fields, v48);
  if ( !qri )
    qri = (QuestRewardInfo_array *)sub_B0D8BC(QuestRewardInfo___TypeInfo, 0LL);
  v50 = oldSuperBoss;
  this->fields.questRewardInfos = qri;
  sub_B0D840(&this->fields.questRewardInfos, qri);
  if ( !questPhaseRewardInfos )
    questPhaseRewardInfos = (QuestRewardInfo_array *)sub_B0D8BC(QuestRewardInfo___TypeInfo, 0LL);
  v51 = oldPersonalBoss;
  this->fields.questPhaseRewardInfos = questPhaseRewardInfos;
  sub_B0D840(&this->fields.questPhaseRewardInfos, questPhaseRewardInfos);
  this->fields.clearedLastBattleRaidId = lastRaidId;
  this->fields.clearedBattleRaidId = raidId;
  this->fields.questClear = qClear;
  this->fields.phaseClear = pclear;
  this->fields.joinGroup = groupjoin;
  if ( !oldSuperBoss )
    v50 = (struct UserSuperBossEntity_array *)sub_B0D8BC(UserSuperBossEntity___TypeInfo, 0LL);
  v52 = questClearCostumeRelease;
  this->fields.mOldSuperBoss = v50;
  sub_B0D840(&this->fields.mOldSuperBoss, v50);
  if ( !oldPersonalBoss )
    v51 = (struct UserSuperBossEntity_array *)sub_B0D8BC(UserSuperBossEntity___TypeInfo, 0LL);
  v53 = questClearCostumeGet;
  this->fields.oldPersonalBoss = v51;
  sub_B0D840(&this->fields.oldPersonalBoss, v51);
  this->fields.evPointWinReward = evpWinReward;
  sub_B0D840(&this->fields.evPointWinReward, evpWinReward);
  this->fields.evRaceBoost = evRace;
  this->fields.evPointWinType = evpWinType;
  sub_B0D840(&this->fields.evRaceBoost, evRace);
  if ( !questClearCostumeRelease )
    v52 = (struct CostumeReleaseAnnounce_array *)sub_B0D8BC(CostumeReleaseAnnounce___TypeInfo, 0LL);
  v54 = resultEvTowerRewardInfo;
  this->fields.questClearCostume = v52;
  sub_B0D840(&this->fields.questClearCostume, v52);
  if ( !questClearCostumeGet )
    v53 = (struct CostumeReleaseAnnounce_array *)sub_B0D8BC(CostumeReleaseAnnounce___TypeInfo, 0LL);
  this->fields.questClearCostumeGetInfo = v53;
  sub_B0D840(&this->fields.questClearCostumeGetInfo, v53);
  this->fields.eventTowerReward = evTowerReward;
  sub_B0D840(&this->fields.eventTowerReward, evTowerReward);
  if ( !resultEvTowerRewardInfo )
    v54 = (struct QuestRewardInfo_array *)sub_B0D8BC(QuestRewardInfo___TypeInfo, 0LL);
  this->fields.resultEventTowerRewardInfo = v54;
  sub_B0D840(&this->fields.resultEventTowerRewardInfo, v54);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210860 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v55);
    byte_4210860 = 1;
  }
  v56 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  if ( v56->static_fields->_resultBoostItemRewardInfo_k__BackingField )
  {
    if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v56);
    if ( !byte_4210860 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v55);
      byte_4210860 = 1;
    }
    v57 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v57 = TerminalPramsManager_TypeInfo;
    }
    resultBoostItemRewardInfo_k__BackingField = v57->static_fields->_resultBoostItemRewardInfo_k__BackingField;
  }
  else
  {
    resultBoostItemRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_B0D8BC(
                                                                                  QuestRewardInfo___TypeInfo,
                                                                                  0LL);
  }
  this->fields.resultBoostItemRewardInfo = resultBoostItemRewardInfo_k__BackingField;
  sub_B0D840(&this->fields.resultBoostItemRewardInfo, resultBoostItemRewardInfo_k__BackingField);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210857 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v59);
    byte_4210857 = 1;
  }
  v60 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v60 = TerminalPramsManager_TypeInfo;
  }
  v61 = warClearRewardIn;
  if ( v60->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField )
  {
    if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v60);
    if ( !byte_4210857 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v59);
      byte_4210857 = 1;
    }
    v62 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v62 = TerminalPramsManager_TypeInfo;
    }
    resultEventBoardGameTokenRewardInfo_k__BackingField = v62->static_fields->_resultEventBoardGameTokenRewardInfo_k__BackingField;
  }
  else
  {
    resultEventBoardGameTokenRewardInfo_k__BackingField = (struct QuestRewardInfo_array *)sub_B0D8BC(
                                                                                            QuestRewardInfo___TypeInfo,
                                                                                            0LL);
  }
  v64 = questResultAfterEventRewardInfos;
  this->fields.resultEventBoardGameTokenRewardInfo = resultEventBoardGameTokenRewardInfo_k__BackingField;
  sub_B0D840(&this->fields.resultEventBoardGameTokenRewardInfo, resultEventBoardGameTokenRewardInfo_k__BackingField);
  this->fields.isDispOnly = dispOnly;
  if ( !warClearRewardIn )
    v61 = (struct WarClearReward_array *)sub_B0D8BC(WarClearReward___TypeInfo, 0LL);
  v65 = resultEventPanelRewardInfos;
  this->fields.warClearReward = v61;
  sub_B0D840(&this->fields.warClearReward, v61);
  this->fields.EventActivityPointEffectState = eventActivityPointEffectState;
  this->fields.isWarBoardClear = isWarBoardClear;
  if ( !questResultAfterEventRewardInfos )
    v64 = (struct BattleDropItem_array *)sub_B0D8BC(BattleDropItem___TypeInfo, 0LL);
  v66 = limitImageAnnounces;
  this->fields.questResultAfterEventRewardInfos = v64;
  sub_B0D840(&this->fields.questResultAfterEventRewardInfos, v64);
  if ( !resultEventPanelRewardInfos )
    v65 = (struct BattleDropItem_array *)sub_B0D8BC(BattleDropItem___TypeInfo, 0LL);
  this->fields.resultEventPanelRewardInfos = v65;
  sub_B0D840(&this->fields.resultEventPanelRewardInfos, v65);
  this->fields.panelEventPoint = panelEventPoint;
  if ( !limitImageAnnounces )
    v66 = (struct LimitImageAnnounce_array *)sub_B0D8BC(LimitImageAnnounce___TypeInfo, 0LL);
  this->fields.limitImageAnnounces = v66;
  sub_B0D840(&this->fields.limitImageAnnounces, v66);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210859 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v67);
    byte_4210859 = 1;
  }
  v68 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v68 = TerminalPramsManager_TypeInfo;
  }
  this->fields.isOrdealCallWarClear = v68->static_fields->_IsOrdealCallWarClear_k__BackingField;
  if ( !byte_421085D )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v67);
    v68 = TerminalPramsManager_TypeInfo;
    byte_421085D = 1;
  }
  if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v68);
    v68 = TerminalPramsManager_TypeInfo;
  }
  this->fields.eventMuralId = v68->static_fields->_EventMuralId_k__BackingField;
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor(
        TerminalPramsManager_OldHeroineLawData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager_OldHeroineLawData___ctor_18837164(
        TerminalPramsManager_OldHeroineLawData_o *this,
        UserServantEntity_o *uSvtEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int128 v7; // q1
  __int128 v8; // q0
  __int64 v9; // x21
  __int64 v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4211792 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, uSvtEnt);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4211792 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !uSvtEnt )
    sub_B0D97C(v6);
  v7 = *(_OWORD *)&uSvtEnt->fields.id.fields.fakeValue;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v12 = v13;
  this->fields.id = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v12, 0LL);
  v8 = *(_OWORD *)&uSvtEnt->fields.userId.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&uSvtEnt->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v8;
  this->fields.userId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v11, 0LL);
  v10 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&uSvtEnt->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  this->fields.svtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14, 0LL);
  this->fields.limitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                              uSvtEnt->fields.limitCount,
                              0LL);
  this->fields.imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                   uSvtEnt->fields.imageLimitCount,
                                   0LL);
  this->fields.dispLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                  uSvtEnt->fields.dispLimitCount,
                                  0LL);
  this->fields.commandCardLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                         uSvtEnt->fields.commandCardLimitCount,
                                         0LL);
  this->fields.iconLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  int64_t id; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v8; // x0
  __int128 v9; // q1
  __int128 v10; // q1
  int32_t svtId; // w21
  UserServantEntity_o *result; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-40h]

  if ( (byte_4211793 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B0D8A4(&UserServantEntity_TypeInfo, v5);
    byte_4211793 = 1;
  }
  v6 = sub_B0D974(UserServantEntity_TypeInfo, method, v2);
  UserServantEntity___ctor((UserServantEntity_o *)v6, 0LL);
  id = this->fields.id;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v13, id, 0LL);
  v14 = v13;
  if ( !v6 )
    sub_B0D97C(v8);
  v9 = *(_OWORD *)&v14.fields.fakeValue;
  *(_OWORD *)(v6 + 16) = *(_OWORD *)&v14.fields.currentCryptoKey;
  *(_OWORD *)(v6 + 32) = v9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v13, this->fields.userId, 0LL);
  v10 = *(_OWORD *)&v13.fields.fakeValue;
  *(_OWORD *)(v6 + 48) = *(_OWORD *)&v13.fields.currentCryptoKey;
  *(_OWORD *)(v6 + 64) = v10;
  svtId = this->fields.svtId;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v6 + 80) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    svtId,
                                                                    0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v6 + 96) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                    this->fields.limitCount,
                                                                    0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v6 + 112) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.imageLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v6 + 128) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.dispLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v6 + 144) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.commandCardLimitCount,
                                                                     0LL);
  *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v6 + 160) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(
                                                                     this->fields.iconLimitCount,
                                                                     0LL);
  result = (UserServantEntity_o *)v6;
  *(_DWORD *)(v6 + 256) = this->fields.lv;
  *(_DWORD *)(v6 + 260) = this->fields.exp;
  *(_DWORD *)(v6 + 264) = this->fields.atk;
  *(_DWORD *)(v6 + 268) = this->fields.hp;
  *(_DWORD *)(v6 + 272) = this->fields.adjustAtk;
  *(_DWORD *)(v6 + 276) = this->fields.adjustHp;
  *(_DWORD *)(v6 + 280) = this->fields.skillLv1;
  *(_DWORD *)(v6 + 284) = this->fields.skillLv2;
  *(_DWORD *)(v6 + 288) = this->fields.skillLv3;
  *(_DWORD *)(v6 + 292) = this->fields.treasureDeviceLv1;
  *(_DWORD *)(v6 + 296) = this->fields.exceedCount;
  *(_DWORD *)(v6 + 300) = this->fields.status;
  *(_QWORD *)(v6 + 304) = this->fields.createdAt;
  return result;
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.oldUsrSvtData = 0LL;
  sub_B0D840(&this->fields, 0LL);
}


void __fastcall TerminalPramsManager_QuestClearHeroineInfoForSave___ctor_18836812(
        TerminalPramsManager_QuestClearHeroineInfoForSave_o *this,
        QuestClearHeroineInfo_o *qClearHeroineInfo,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UserServantEntity_o *oldUsrSvtData; // x21
  TerminalPramsManager_OldHeroineLawData_o *v9; // x22
  const MethodInfo *v10; // x2
  TerminalPramsManager_QuestClearHeroineInfoForSave_Fields *p_fields; // x20

  if ( (byte_4211794 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_OldHeroineLawData_TypeInfo, qClearHeroineInfo);
    byte_4211794 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !qClearHeroineInfo )
    sub_B0D97C(v5);
  oldUsrSvtData = qClearHeroineInfo->fields.oldUsrSvtData;
  v9 = (TerminalPramsManager_OldHeroineLawData_o *)sub_B0D974(TerminalPramsManager_OldHeroineLawData_TypeInfo, v6, v7);
  TerminalPramsManager_OldHeroineLawData___ctor_18837164(v9, oldUsrSvtData, v10);
  this->fields.oldUsrSvtData = v9;
  p_fields = &this->fields;
  sub_B0D840(p_fields, v9);
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
  QuestClearHeroineInfo_o *v4; // x20
  const MethodInfo *v5; // x1
  TerminalPramsManager_OldHeroineLawData_o *oldUsrSvtData; // x0
  QuestClearHeroineInfo_o *result; // x0

  if ( (byte_4211795 & 1) == 0 )
  {
    sub_B0D8A4(&QuestClearHeroineInfo_TypeInfo, method);
    byte_4211795 = 1;
  }
  v4 = (QuestClearHeroineInfo_o *)sub_B0D974(QuestClearHeroineInfo_TypeInfo, method, v2);
  QuestClearHeroineInfo___ctor(v4, 0LL);
  oldUsrSvtData = this->fields.oldUsrSvtData;
  if ( !oldUsrSvtData
    || (oldUsrSvtData = (TerminalPramsManager_OldHeroineLawData_o *)TerminalPramsManager_OldHeroineLawData__GetLoad(
                                                                      oldUsrSvtData,
                                                                      v5),
        !v4) )
  {
    sub_B0D97C(oldUsrSvtData);
  }
  v4->fields.oldUsrSvtData = (struct UserServantEntity_o *)oldUsrSvtData;
  sub_B0D840(&v4->fields, oldUsrSvtData);
  result = v4;
  v4->fields.isChangeLimitcnt = this->fields.isChangeLimitcnt;
  v4->fields.isChangeTreasureDvc = this->fields.isChangeTreasureDvc;
  v4->fields.treasureDvcId = this->fields.treasureDvcId;
  v4->fields.treasureDvcLv = this->fields.treasureDvcLv;
  v4->fields.oldFriendShipRank = this->fields.oldFriendShipRank;
  v4->fields.isFriendShipExceed = this->fields.isFriendShipExceed;
  v4->fields.isExceed = this->fields.isExceed;
  return result;
}


void __fastcall TerminalPramsManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct TerminalPramsManager___c_StaticFields *static_fields; // x0

  if ( (byte_421178A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager___c_TypeInfo, v1);
    byte_421178A = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(TerminalPramsManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = TerminalPramsManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct TerminalPramsManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall TerminalPramsManager___c___ctor(TerminalPramsManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TerminalPramsManager___c___ReceiveQuestEndResultInfo_b__608_0(
        TerminalPramsManager___c_o *this,
        QuestReleaseEntity_o *n,
        const MethodInfo *method)
{
  int32_t questId; // w19
  TerminalPramsManager_c *v5; // x0

  if ( (byte_421178B & 1) == 0 )
  {
    this = (TerminalPramsManager___c_o *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, n);
    byte_421178B = 1;
  }
  if ( !n )
    sub_B0D97C(this);
  questId = n->fields.questId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, n);
    byte_4210852 = 1;
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
bool __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__611_0(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  if ( (byte_421178C & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, *(_QWORD *)&v);
    byte_421178C = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  return TerminalPramsManager__IsMainStoryForQuestId(v, 0LL);
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__611_3(
        TerminalPramsManager___c_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_B0D97C(this);
  return v->fields.id;
}


int32_t __fastcall TerminalPramsManager___c___SendOpenedQuestIdToAdManager_b__611_4(
        TerminalPramsManager___c_o *this,
        int32_t v,
        const MethodInfo *method)
{
  return v;
}


void __fastcall TerminalPramsManager___c__DisplayClass602_0___ctor(
        TerminalPramsManager___c__DisplayClass602_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TerminalPramsManager___c__DisplayClass602_0___CheckResumeEffectNT2_b__0(
        TerminalPramsManager___c__DisplayClass602_0_o *this,
        System_String_o *effectId,
        const MethodInfo *method)
{
  TerminalPramsManager___c__DisplayClass602_0_Fields *p_fields; // x19
  System_String_o *effectIdsStr; // t1
  System_String_o *v7; // x0

  if ( (byte_421178D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, effectId);
    byte_421178D = 1;
  }
  effectIdsStr = this->fields.effectIdsStr;
  p_fields = &this->fields;
  v7 = System_String__Concat_43852188(effectIdsStr, effectId, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
  p_fields->effectIdsStr = v7;
  sub_B0D840(p_fields, v7);
}


void __fastcall TerminalPramsManager___c__DisplayClass611_0___ctor(
        TerminalPramsManager___c__DisplayClass611_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


QuestEntity_o *__fastcall TerminalPramsManager___c__DisplayClass611_0___SendOpenedQuestIdToAdManager_b__1(
        TerminalPramsManager___c__DisplayClass611_0_o *this,
        int32_t v,
        const MethodInfo *method)
{
  QuestMaster_o *questMaster; // x0

  questMaster = this->fields.questMaster;
  if ( !questMaster )
    sub_B0D97C(0LL);
  return QuestMaster__getQuestEntity(questMaster, v, 0LL);
}


bool __fastcall TerminalPramsManager___c__DisplayClass611_0___SendOpenedQuestIdToAdManager_b__2(
        TerminalPramsManager___c__DisplayClass611_0_o *this,
        QuestEntity_o *v,
        const MethodInfo *method)
{
  UserQuestMaster_o *userQuestMaster; // x20
  int64_t UserId; // x0
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421178E & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v);
    byte_421178E = 1;
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
    sub_B0D97C(UserId);
  }
  return 1;
}